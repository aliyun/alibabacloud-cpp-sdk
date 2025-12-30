// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCEADDRESSPOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCEADDRESSPOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmInstanceAddressPoolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstanceAddressPoolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddrPools, addrPools_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstanceAddressPoolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrPools, addrPools_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeDnsGtmInstanceAddressPoolsResponseBody() = default ;
    DescribeDnsGtmInstanceAddressPoolsResponseBody(const DescribeDnsGtmInstanceAddressPoolsResponseBody &) = default ;
    DescribeDnsGtmInstanceAddressPoolsResponseBody(DescribeDnsGtmInstanceAddressPoolsResponseBody &&) = default ;
    DescribeDnsGtmInstanceAddressPoolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstanceAddressPoolsResponseBody() = default ;
    DescribeDnsGtmInstanceAddressPoolsResponseBody& operator=(const DescribeDnsGtmInstanceAddressPoolsResponseBody &) = default ;
    DescribeDnsGtmInstanceAddressPoolsResponseBody& operator=(DescribeDnsGtmInstanceAddressPoolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AddrPools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddrPools& obj) { 
        DARABONBA_PTR_TO_JSON(AddrPool, addrPool_);
      };
      friend void from_json(const Darabonba::Json& j, AddrPools& obj) { 
        DARABONBA_PTR_FROM_JSON(AddrPool, addrPool_);
      };
      AddrPools() = default ;
      AddrPools(const AddrPools &) = default ;
      AddrPools(AddrPools &&) = default ;
      AddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddrPools() = default ;
      AddrPools& operator=(const AddrPools &) = default ;
      AddrPools& operator=(AddrPools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AddrPool : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AddrPool& obj) { 
          DARABONBA_PTR_TO_JSON(AddrCount, addrCount_);
          DARABONBA_PTR_TO_JSON(AddrPoolId, addrPoolId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(LbaStrategy, lbaStrategy_);
          DARABONBA_PTR_TO_JSON(MonitorConfigId, monitorConfigId_);
          DARABONBA_PTR_TO_JSON(MonitorStatus, monitorStatus_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
        };
        friend void from_json(const Darabonba::Json& j, AddrPool& obj) { 
          DARABONBA_PTR_FROM_JSON(AddrCount, addrCount_);
          DARABONBA_PTR_FROM_JSON(AddrPoolId, addrPoolId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(LbaStrategy, lbaStrategy_);
          DARABONBA_PTR_FROM_JSON(MonitorConfigId, monitorConfigId_);
          DARABONBA_PTR_FROM_JSON(MonitorStatus, monitorStatus_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
        };
        AddrPool() = default ;
        AddrPool(const AddrPool &) = default ;
        AddrPool(AddrPool &&) = default ;
        AddrPool(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AddrPool() = default ;
        AddrPool& operator=(const AddrPool &) = default ;
        AddrPool& operator=(AddrPool &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addrCount_ == nullptr
        && this->addrPoolId_ == nullptr && this->createTime_ == nullptr && this->createTimestamp_ == nullptr && this->lbaStrategy_ == nullptr && this->monitorConfigId_ == nullptr
        && this->monitorStatus_ == nullptr && this->name_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr; };
        // addrCount Field Functions 
        bool hasAddrCount() const { return this->addrCount_ != nullptr;};
        void deleteAddrCount() { this->addrCount_ = nullptr;};
        inline int32_t getAddrCount() const { DARABONBA_PTR_GET_DEFAULT(addrCount_, 0) };
        inline AddrPool& setAddrCount(int32_t addrCount) { DARABONBA_PTR_SET_VALUE(addrCount_, addrCount) };


        // addrPoolId Field Functions 
        bool hasAddrPoolId() const { return this->addrPoolId_ != nullptr;};
        void deleteAddrPoolId() { this->addrPoolId_ = nullptr;};
        inline string getAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(addrPoolId_, "") };
        inline AddrPool& setAddrPoolId(string addrPoolId) { DARABONBA_PTR_SET_VALUE(addrPoolId_, addrPoolId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline AddrPool& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline AddrPool& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // lbaStrategy Field Functions 
        bool hasLbaStrategy() const { return this->lbaStrategy_ != nullptr;};
        void deleteLbaStrategy() { this->lbaStrategy_ = nullptr;};
        inline string getLbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(lbaStrategy_, "") };
        inline AddrPool& setLbaStrategy(string lbaStrategy) { DARABONBA_PTR_SET_VALUE(lbaStrategy_, lbaStrategy) };


        // monitorConfigId Field Functions 
        bool hasMonitorConfigId() const { return this->monitorConfigId_ != nullptr;};
        void deleteMonitorConfigId() { this->monitorConfigId_ = nullptr;};
        inline string getMonitorConfigId() const { DARABONBA_PTR_GET_DEFAULT(monitorConfigId_, "") };
        inline AddrPool& setMonitorConfigId(string monitorConfigId) { DARABONBA_PTR_SET_VALUE(monitorConfigId_, monitorConfigId) };


        // monitorStatus Field Functions 
        bool hasMonitorStatus() const { return this->monitorStatus_ != nullptr;};
        void deleteMonitorStatus() { this->monitorStatus_ = nullptr;};
        inline string getMonitorStatus() const { DARABONBA_PTR_GET_DEFAULT(monitorStatus_, "") };
        inline AddrPool& setMonitorStatus(string monitorStatus) { DARABONBA_PTR_SET_VALUE(monitorStatus_, monitorStatus) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AddrPool& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AddrPool& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline AddrPool& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // updateTimestamp Field Functions 
        bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
        void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
        inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
        inline AddrPool& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


      protected:
        // The number of addresses in the address pool.
        shared_ptr<int32_t> addrCount_ {};
        // The ID of the address pool.
        shared_ptr<string> addrPoolId_ {};
        // The time when the address pool was created.
        shared_ptr<string> createTime_ {};
        // The timestamp that indicates when the address pool was created.
        shared_ptr<int64_t> createTimestamp_ {};
        // The load balancing policy of the address pool. Valid values:
        // 
        // *   ALL_RR: returns all addresses.
        // *   RATIO: returns addresses by weight.
        shared_ptr<string> lbaStrategy_ {};
        // The ID of the health check task.
        shared_ptr<string> monitorConfigId_ {};
        // Indicates whether health checks are configured. Valid values:
        // 
        // *   OPEN: enabled
        // *   CLOSE: disabled
        // *   UNCONFIGURED: not configured
        shared_ptr<string> monitorStatus_ {};
        // The name of the address pool.
        shared_ptr<string> name_ {};
        // The type of the address pool. Valid values:
        // 
        // *   IPV4: IPv4 address
        // *   IPV6: IPv6 address
        // *   DOMAIN: domain name
        shared_ptr<string> type_ {};
        // The time when the address pool was updated.
        shared_ptr<string> updateTime_ {};
        // The timestamp that indicates when the address pool was updated.
        shared_ptr<int64_t> updateTimestamp_ {};
      };

      virtual bool empty() const override { return this->addrPool_ == nullptr; };
      // addrPool Field Functions 
      bool hasAddrPool() const { return this->addrPool_ != nullptr;};
      void deleteAddrPool() { this->addrPool_ = nullptr;};
      inline const vector<AddrPools::AddrPool> & getAddrPool() const { DARABONBA_PTR_GET_CONST(addrPool_, vector<AddrPools::AddrPool>) };
      inline vector<AddrPools::AddrPool> getAddrPool() { DARABONBA_PTR_GET(addrPool_, vector<AddrPools::AddrPool>) };
      inline AddrPools& setAddrPool(const vector<AddrPools::AddrPool> & addrPool) { DARABONBA_PTR_SET_VALUE(addrPool_, addrPool) };
      inline AddrPools& setAddrPool(vector<AddrPools::AddrPool> && addrPool) { DARABONBA_PTR_SET_RVALUE(addrPool_, addrPool) };


    protected:
      shared_ptr<vector<AddrPools::AddrPool>> addrPool_ {};
    };

    virtual bool empty() const override { return this->addrPools_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // addrPools Field Functions 
    bool hasAddrPools() const { return this->addrPools_ != nullptr;};
    void deleteAddrPools() { this->addrPools_ = nullptr;};
    inline const DescribeDnsGtmInstanceAddressPoolsResponseBody::AddrPools & getAddrPools() const { DARABONBA_PTR_GET_CONST(addrPools_, DescribeDnsGtmInstanceAddressPoolsResponseBody::AddrPools) };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBody::AddrPools getAddrPools() { DARABONBA_PTR_GET(addrPools_, DescribeDnsGtmInstanceAddressPoolsResponseBody::AddrPools) };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBody& setAddrPools(const DescribeDnsGtmInstanceAddressPoolsResponseBody::AddrPools & addrPools) { DARABONBA_PTR_SET_VALUE(addrPools_, addrPools) };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBody& setAddrPools(DescribeDnsGtmInstanceAddressPoolsResponseBody::AddrPools && addrPools) { DARABONBA_PTR_SET_RVALUE(addrPools_, addrPools) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The returned address pools.
    shared_ptr<DescribeDnsGtmInstanceAddressPoolsResponseBody::AddrPools> addrPools_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned on all pages.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
