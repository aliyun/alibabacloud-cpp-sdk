// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCACHERESERVEINSTANCESRESPONSEBODYINSTANCEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTCACHERESERVEINSTANCESRESPONSEBODYINSTANCEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListCacheReserveInstancesResponseBodyInstanceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCacheReserveInstancesResponseBodyInstanceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CacheReserveCapacity, cacheReserveCapacity_);
      DARABONBA_PTR_TO_JSON(CacheReserveRegion, cacheReserveRegion_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListCacheReserveInstancesResponseBodyInstanceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheReserveCapacity, cacheReserveCapacity_);
      DARABONBA_PTR_FROM_JSON(CacheReserveRegion, cacheReserveRegion_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListCacheReserveInstancesResponseBodyInstanceInfo() = default ;
    ListCacheReserveInstancesResponseBodyInstanceInfo(const ListCacheReserveInstancesResponseBodyInstanceInfo &) = default ;
    ListCacheReserveInstancesResponseBodyInstanceInfo(ListCacheReserveInstancesResponseBodyInstanceInfo &&) = default ;
    ListCacheReserveInstancesResponseBodyInstanceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCacheReserveInstancesResponseBodyInstanceInfo() = default ;
    ListCacheReserveInstancesResponseBodyInstanceInfo& operator=(const ListCacheReserveInstancesResponseBodyInstanceInfo &) = default ;
    ListCacheReserveInstancesResponseBodyInstanceInfo& operator=(ListCacheReserveInstancesResponseBodyInstanceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheReserveCapacity_ == nullptr
        && return this->cacheReserveRegion_ == nullptr && return this->chargeType_ == nullptr && return this->createTime_ == nullptr && return this->duration_ == nullptr && return this->expireTime_ == nullptr
        && return this->instanceId_ == nullptr && return this->status_ == nullptr; };
    // cacheReserveCapacity Field Functions 
    bool hasCacheReserveCapacity() const { return this->cacheReserveCapacity_ != nullptr;};
    void deleteCacheReserveCapacity() { this->cacheReserveCapacity_ = nullptr;};
    inline int64_t cacheReserveCapacity() const { DARABONBA_PTR_GET_DEFAULT(cacheReserveCapacity_, 0L) };
    inline ListCacheReserveInstancesResponseBodyInstanceInfo& setCacheReserveCapacity(int64_t cacheReserveCapacity) { DARABONBA_PTR_SET_VALUE(cacheReserveCapacity_, cacheReserveCapacity) };


    // cacheReserveRegion Field Functions 
    bool hasCacheReserveRegion() const { return this->cacheReserveRegion_ != nullptr;};
    void deleteCacheReserveRegion() { this->cacheReserveRegion_ = nullptr;};
    inline string cacheReserveRegion() const { DARABONBA_PTR_GET_DEFAULT(cacheReserveRegion_, "") };
    inline ListCacheReserveInstancesResponseBodyInstanceInfo& setCacheReserveRegion(string cacheReserveRegion) { DARABONBA_PTR_SET_VALUE(cacheReserveRegion_, cacheReserveRegion) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ListCacheReserveInstancesResponseBodyInstanceInfo& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListCacheReserveInstancesResponseBodyInstanceInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline ListCacheReserveInstancesResponseBodyInstanceInfo& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ListCacheReserveInstancesResponseBodyInstanceInfo& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCacheReserveInstancesResponseBodyInstanceInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCacheReserveInstancesResponseBodyInstanceInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Cache reserve capacity. Unit: GB.
    std::shared_ptr<int64_t> cacheReserveCapacity_ = nullptr;
    // Cache reserve usage region.
    std::shared_ptr<string> cacheReserveRegion_ = nullptr;
    std::shared_ptr<string> chargeType_ = nullptr;
    // Instance purchase time.
    std::shared_ptr<string> createTime_ = nullptr;
    // Duration of the instance purchase, unit: months.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // Instance expiration time.
    std::shared_ptr<string> expireTime_ = nullptr;
    // Instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The status of the cache reserve instance. Valid values:
    // 
    // *   **online**: The instance is in service.
    // *   **offline**: The instance has expired within an allowable period. In this state, it is unavailable.
    // *   **disable**: The instance has been released.
    // *   **overdue**: The instance has been stopped due to overdue payments.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
