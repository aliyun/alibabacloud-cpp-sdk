// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCACHERESERVEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCACHERESERVEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListCacheReserveInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCacheReserveInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListCacheReserveInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListCacheReserveInstancesResponseBody() = default ;
    ListCacheReserveInstancesResponseBody(const ListCacheReserveInstancesResponseBody &) = default ;
    ListCacheReserveInstancesResponseBody(ListCacheReserveInstancesResponseBody &&) = default ;
    ListCacheReserveInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCacheReserveInstancesResponseBody() = default ;
    ListCacheReserveInstancesResponseBody& operator=(const ListCacheReserveInstancesResponseBody &) = default ;
    ListCacheReserveInstancesResponseBody& operator=(ListCacheReserveInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CacheReserveCapacity, cacheReserveCapacity_);
        DARABONBA_PTR_TO_JSON(CacheReserveRegion, cacheReserveRegion_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CacheReserveCapacity, cacheReserveCapacity_);
        DARABONBA_PTR_FROM_JSON(CacheReserveRegion, cacheReserveRegion_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      InstanceInfo() = default ;
      InstanceInfo(const InstanceInfo &) = default ;
      InstanceInfo(InstanceInfo &&) = default ;
      InstanceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceInfo() = default ;
      InstanceInfo& operator=(const InstanceInfo &) = default ;
      InstanceInfo& operator=(InstanceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cacheReserveCapacity_ == nullptr
        && this->cacheReserveRegion_ == nullptr && this->chargeType_ == nullptr && this->createTime_ == nullptr && this->duration_ == nullptr && this->expireTime_ == nullptr
        && this->instanceId_ == nullptr && this->status_ == nullptr; };
      // cacheReserveCapacity Field Functions 
      bool hasCacheReserveCapacity() const { return this->cacheReserveCapacity_ != nullptr;};
      void deleteCacheReserveCapacity() { this->cacheReserveCapacity_ = nullptr;};
      inline int64_t getCacheReserveCapacity() const { DARABONBA_PTR_GET_DEFAULT(cacheReserveCapacity_, 0L) };
      inline InstanceInfo& setCacheReserveCapacity(int64_t cacheReserveCapacity) { DARABONBA_PTR_SET_VALUE(cacheReserveCapacity_, cacheReserveCapacity) };


      // cacheReserveRegion Field Functions 
      bool hasCacheReserveRegion() const { return this->cacheReserveRegion_ != nullptr;};
      void deleteCacheReserveRegion() { this->cacheReserveRegion_ = nullptr;};
      inline string getCacheReserveRegion() const { DARABONBA_PTR_GET_DEFAULT(cacheReserveRegion_, "") };
      inline InstanceInfo& setCacheReserveRegion(string cacheReserveRegion) { DARABONBA_PTR_SET_VALUE(cacheReserveRegion_, cacheReserveRegion) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline InstanceInfo& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline InstanceInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
      inline InstanceInfo& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline InstanceInfo& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline InstanceInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Cache reserve capacity. Unit: GB.
      shared_ptr<int64_t> cacheReserveCapacity_ {};
      // Cache reserve usage region.
      shared_ptr<string> cacheReserveRegion_ {};
      shared_ptr<string> chargeType_ {};
      // Instance purchase time.
      shared_ptr<string> createTime_ {};
      // Duration of the instance purchase, unit: months.
      shared_ptr<int32_t> duration_ {};
      // Instance expiration time.
      shared_ptr<string> expireTime_ {};
      // Instance ID.
      shared_ptr<string> instanceId_ {};
      // The status of the cache reserve instance. Valid values:
      // 
      // *   **online**: The instance is in service.
      // *   **offline**: The instance has expired within an allowable period. In this state, it is unavailable.
      // *   **disable**: The instance has been released.
      // *   **overdue**: The instance has been stopped due to overdue payments.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->instanceInfo_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // instanceInfo Field Functions 
    bool hasInstanceInfo() const { return this->instanceInfo_ != nullptr;};
    void deleteInstanceInfo() { this->instanceInfo_ = nullptr;};
    inline const vector<ListCacheReserveInstancesResponseBody::InstanceInfo> & getInstanceInfo() const { DARABONBA_PTR_GET_CONST(instanceInfo_, vector<ListCacheReserveInstancesResponseBody::InstanceInfo>) };
    inline vector<ListCacheReserveInstancesResponseBody::InstanceInfo> getInstanceInfo() { DARABONBA_PTR_GET(instanceInfo_, vector<ListCacheReserveInstancesResponseBody::InstanceInfo>) };
    inline ListCacheReserveInstancesResponseBody& setInstanceInfo(const vector<ListCacheReserveInstancesResponseBody::InstanceInfo> & instanceInfo) { DARABONBA_PTR_SET_VALUE(instanceInfo_, instanceInfo) };
    inline ListCacheReserveInstancesResponseBody& setInstanceInfo(vector<ListCacheReserveInstancesResponseBody::InstanceInfo> && instanceInfo) { DARABONBA_PTR_SET_RVALUE(instanceInfo_, instanceInfo) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCacheReserveInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCacheReserveInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCacheReserveInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCacheReserveInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListCacheReserveInstancesResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The cache reserve instances.
    shared_ptr<vector<ListCacheReserveInstancesResponseBody::InstanceInfo>> instanceInfo_ {};
    // Page number. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // Page size, default **500**, range: **1~500**.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Total count.
    shared_ptr<int32_t> totalCount_ {};
    // Total pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
