// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCAPACITYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCAPACITYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class GetCapacityResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCapacityResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ExistLogStore, existLogStore_);
      DARABONBA_PTR_TO_JSON(PreservedCapacity, preservedCapacity_);
      DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, GetCapacityResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ExistLogStore, existLogStore_);
      DARABONBA_PTR_FROM_JSON(PreservedCapacity, preservedCapacity_);
      DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
    };
    GetCapacityResponseBodyData() = default ;
    GetCapacityResponseBodyData(const GetCapacityResponseBodyData &) = default ;
    GetCapacityResponseBodyData(GetCapacityResponseBodyData &&) = default ;
    GetCapacityResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCapacityResponseBodyData() = default ;
    GetCapacityResponseBodyData& operator=(const GetCapacityResponseBodyData &) = default ;
    GetCapacityResponseBodyData& operator=(GetCapacityResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->existLogStore_ != nullptr
        && this->preservedCapacity_ != nullptr && this->usedCapacity_ != nullptr; };
    // existLogStore Field Functions 
    bool hasExistLogStore() const { return this->existLogStore_ != nullptr;};
    void deleteExistLogStore() { this->existLogStore_ = nullptr;};
    inline bool existLogStore() const { DARABONBA_PTR_GET_DEFAULT(existLogStore_, false) };
    inline GetCapacityResponseBodyData& setExistLogStore(bool existLogStore) { DARABONBA_PTR_SET_VALUE(existLogStore_, existLogStore) };


    // preservedCapacity Field Functions 
    bool hasPreservedCapacity() const { return this->preservedCapacity_ != nullptr;};
    void deletePreservedCapacity() { this->preservedCapacity_ = nullptr;};
    inline int64_t preservedCapacity() const { DARABONBA_PTR_GET_DEFAULT(preservedCapacity_, 0L) };
    inline GetCapacityResponseBodyData& setPreservedCapacity(int64_t preservedCapacity) { DARABONBA_PTR_SET_VALUE(preservedCapacity_, preservedCapacity) };


    // usedCapacity Field Functions 
    bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
    void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
    inline double usedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, 0.0) };
    inline GetCapacityResponseBodyData& setUsedCapacity(double usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


  protected:
    // Indicates whether the Logstores for the threat analysis feature exist on the user side. Valid values:
    // 
    // *   true: The logs are in the normal state. The log analysis feature is available.
    // *   false: The logs are being cleared. The log analysis feature is unavailable.
    std::shared_ptr<bool> existLogStore_ = nullptr;
    // The purchased storage capacity of the threat analysis feature. Unit: GB.
    std::shared_ptr<int64_t> preservedCapacity_ = nullptr;
    // The billable storage capacity of the threat analysis feature. Unit: GB.
    std::shared_ptr<double> usedCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
