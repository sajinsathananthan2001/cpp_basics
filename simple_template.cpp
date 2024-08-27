#include <iostream>
#include <memory>
#include <thread>
#include <vector>
#include <algorithm>

namespace example_namespace {

    // Base class using inheritance
    class BaseClass {
    public:
        virtual void process() = 0; // Pure virtual function
        virtual ~BaseClass() = default;
    };

    // Derived class template
    template<typename T>
    class DerivedClass : public BaseClass {
    private:
        std::vector<T> data_;
        std::shared_ptr<std::thread> processing_thread_;

    public:
        DerivedClass() {
            processing_thread_ = std::make_shared<std::thread>(&DerivedClass::run, this);
        }

        ~DerivedClass() {
            if (processing_thread_->joinable()) {
                processing_thread_->join();
            }
        }

        void addData(const T& value) {
            data_.push_back(value);
        }

        void process() override {
            std::sort(data_.begin(), data_.end());
            for (const auto& item : data_) {
                std::cout << item << " ";
            }
            std::cout << std::endl;
        }

        void run() {
            while (true) {
                if (!data_.empty()) {
                    process();
                }
                std::this_thread::sleep_for(std::chrono::seconds(1));
            }
        }
    };

}

int main() {
    example_namespace::DerivedClass<int> obj;

    obj.addData(5);
    obj.addData(3);
    obj.addData(9);

    std::this_thread::sleep_for(std::chrono::seconds(3)); // Let the thread run for a while

    return 0;
}