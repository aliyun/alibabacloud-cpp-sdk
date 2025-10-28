// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJVMCONFIGURATIONRESPONSEBODYJVMCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJVMCONFIGURATIONRESPONSEBODYJVMCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateJvmConfigurationResponseBodyJvmConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJvmConfigurationResponseBodyJvmConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(MaxHeapSize, maxHeapSize_);
      DARABONBA_PTR_TO_JSON(MaxPermSize, maxPermSize_);
      DARABONBA_PTR_TO_JSON(MinHeapSize, minHeapSize_);
      DARABONBA_PTR_TO_JSON(Options, options_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJvmConfigurationResponseBodyJvmConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxHeapSize, maxHeapSize_);
      DARABONBA_PTR_FROM_JSON(MaxPermSize, maxPermSize_);
      DARABONBA_PTR_FROM_JSON(MinHeapSize, minHeapSize_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
    };
    UpdateJvmConfigurationResponseBodyJvmConfiguration() = default ;
    UpdateJvmConfigurationResponseBodyJvmConfiguration(const UpdateJvmConfigurationResponseBodyJvmConfiguration &) = default ;
    UpdateJvmConfigurationResponseBodyJvmConfiguration(UpdateJvmConfigurationResponseBodyJvmConfiguration &&) = default ;
    UpdateJvmConfigurationResponseBodyJvmConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJvmConfigurationResponseBodyJvmConfiguration() = default ;
    UpdateJvmConfigurationResponseBodyJvmConfiguration& operator=(const UpdateJvmConfigurationResponseBodyJvmConfiguration &) = default ;
    UpdateJvmConfigurationResponseBodyJvmConfiguration& operator=(UpdateJvmConfigurationResponseBodyJvmConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxHeapSize_ == nullptr
        && return this->maxPermSize_ == nullptr && return this->minHeapSize_ == nullptr && return this->options_ == nullptr; };
    // maxHeapSize Field Functions 
    bool hasMaxHeapSize() const { return this->maxHeapSize_ != nullptr;};
    void deleteMaxHeapSize() { this->maxHeapSize_ = nullptr;};
    inline int32_t maxHeapSize() const { DARABONBA_PTR_GET_DEFAULT(maxHeapSize_, 0) };
    inline UpdateJvmConfigurationResponseBodyJvmConfiguration& setMaxHeapSize(int32_t maxHeapSize) { DARABONBA_PTR_SET_VALUE(maxHeapSize_, maxHeapSize) };


    // maxPermSize Field Functions 
    bool hasMaxPermSize() const { return this->maxPermSize_ != nullptr;};
    void deleteMaxPermSize() { this->maxPermSize_ = nullptr;};
    inline int32_t maxPermSize() const { DARABONBA_PTR_GET_DEFAULT(maxPermSize_, 0) };
    inline UpdateJvmConfigurationResponseBodyJvmConfiguration& setMaxPermSize(int32_t maxPermSize) { DARABONBA_PTR_SET_VALUE(maxPermSize_, maxPermSize) };


    // minHeapSize Field Functions 
    bool hasMinHeapSize() const { return this->minHeapSize_ != nullptr;};
    void deleteMinHeapSize() { this->minHeapSize_ = nullptr;};
    inline int32_t minHeapSize() const { DARABONBA_PTR_GET_DEFAULT(minHeapSize_, 0) };
    inline UpdateJvmConfigurationResponseBodyJvmConfiguration& setMinHeapSize(int32_t minHeapSize) { DARABONBA_PTR_SET_VALUE(minHeapSize_, minHeapSize) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline UpdateJvmConfigurationResponseBodyJvmConfiguration& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


  protected:
    // The maximum size of the heap memory. Unit: MB.
    std::shared_ptr<int32_t> maxHeapSize_ = nullptr;
    // The size of the permanent generation heap memory. Unit: MB.
    std::shared_ptr<int32_t> maxPermSize_ = nullptr;
    // The initial size of the heap memory. Unit: MB.
    std::shared_ptr<int32_t> minHeapSize_ = nullptr;
    // The optional parameters.
    std::shared_ptr<string> options_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
