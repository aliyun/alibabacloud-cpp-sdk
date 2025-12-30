// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCESRESPONSEBODY_HPP_
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
  class DescribeGtmInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GtmInstances, gtmInstances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GtmInstances, gtmInstances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeGtmInstancesResponseBody() = default ;
    DescribeGtmInstancesResponseBody(const DescribeGtmInstancesResponseBody &) = default ;
    DescribeGtmInstancesResponseBody(DescribeGtmInstancesResponseBody &&) = default ;
    DescribeGtmInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmInstancesResponseBody() = default ;
    DescribeGtmInstancesResponseBody& operator=(const DescribeGtmInstancesResponseBody &) = default ;
    DescribeGtmInstancesResponseBody& operator=(DescribeGtmInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GtmInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GtmInstances& obj) { 
        DARABONBA_PTR_TO_JSON(GtmInstance, gtmInstance_);
      };
      friend void from_json(const Darabonba::Json& j, GtmInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(GtmInstance, gtmInstance_);
      };
      GtmInstances() = default ;
      GtmInstances(const GtmInstances &) = default ;
      GtmInstances(GtmInstances &&) = default ;
      GtmInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GtmInstances() = default ;
      GtmInstances& operator=(const GtmInstances &) = default ;
      GtmInstances& operator=(GtmInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GtmInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GtmInstance& obj) { 
          DARABONBA_PTR_TO_JSON(AccessStrategyNum, accessStrategyNum_);
          DARABONBA_PTR_TO_JSON(AddressPoolNum, addressPoolNum_);
          DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
          DARABONBA_PTR_TO_JSON(Cname, cname_);
          DARABONBA_PTR_TO_JSON(CnameMode, cnameMode_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(ExpireTimestamp, expireTimestamp_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(LbaStrategy, lbaStrategy_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Ttl, ttl_);
          DARABONBA_PTR_TO_JSON(UserDomainName, userDomainName_);
          DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
        };
        friend void from_json(const Darabonba::Json& j, GtmInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessStrategyNum, accessStrategyNum_);
          DARABONBA_PTR_FROM_JSON(AddressPoolNum, addressPoolNum_);
          DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
          DARABONBA_PTR_FROM_JSON(Cname, cname_);
          DARABONBA_PTR_FROM_JSON(CnameMode, cnameMode_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(ExpireTimestamp, expireTimestamp_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(LbaStrategy, lbaStrategy_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
          DARABONBA_PTR_FROM_JSON(UserDomainName, userDomainName_);
          DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
        };
        GtmInstance() = default ;
        GtmInstance(const GtmInstance &) = default ;
        GtmInstance(GtmInstance &&) = default ;
        GtmInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GtmInstance() = default ;
        GtmInstance& operator=(const GtmInstance &) = default ;
        GtmInstance& operator=(GtmInstance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessStrategyNum_ == nullptr
        && this->addressPoolNum_ == nullptr && this->alertGroup_ == nullptr && this->cname_ == nullptr && this->cnameMode_ == nullptr && this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->expireTime_ == nullptr && this->expireTimestamp_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->lbaStrategy_ == nullptr && this->resourceGroupId_ == nullptr && this->ttl_ == nullptr && this->userDomainName_ == nullptr && this->versionCode_ == nullptr; };
        // accessStrategyNum Field Functions 
        bool hasAccessStrategyNum() const { return this->accessStrategyNum_ != nullptr;};
        void deleteAccessStrategyNum() { this->accessStrategyNum_ = nullptr;};
        inline int32_t getAccessStrategyNum() const { DARABONBA_PTR_GET_DEFAULT(accessStrategyNum_, 0) };
        inline GtmInstance& setAccessStrategyNum(int32_t accessStrategyNum) { DARABONBA_PTR_SET_VALUE(accessStrategyNum_, accessStrategyNum) };


        // addressPoolNum Field Functions 
        bool hasAddressPoolNum() const { return this->addressPoolNum_ != nullptr;};
        void deleteAddressPoolNum() { this->addressPoolNum_ = nullptr;};
        inline int32_t getAddressPoolNum() const { DARABONBA_PTR_GET_DEFAULT(addressPoolNum_, 0) };
        inline GtmInstance& setAddressPoolNum(int32_t addressPoolNum) { DARABONBA_PTR_SET_VALUE(addressPoolNum_, addressPoolNum) };


        // alertGroup Field Functions 
        bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
        void deleteAlertGroup() { this->alertGroup_ = nullptr;};
        inline string getAlertGroup() const { DARABONBA_PTR_GET_DEFAULT(alertGroup_, "") };
        inline GtmInstance& setAlertGroup(string alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };


        // cname Field Functions 
        bool hasCname() const { return this->cname_ != nullptr;};
        void deleteCname() { this->cname_ = nullptr;};
        inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
        inline GtmInstance& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


        // cnameMode Field Functions 
        bool hasCnameMode() const { return this->cnameMode_ != nullptr;};
        void deleteCnameMode() { this->cnameMode_ = nullptr;};
        inline string getCnameMode() const { DARABONBA_PTR_GET_DEFAULT(cnameMode_, "") };
        inline GtmInstance& setCnameMode(string cnameMode) { DARABONBA_PTR_SET_VALUE(cnameMode_, cnameMode) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline GtmInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline GtmInstance& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline GtmInstance& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // expireTimestamp Field Functions 
        bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
        void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
        inline int64_t getExpireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
        inline GtmInstance& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline GtmInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline GtmInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // lbaStrategy Field Functions 
        bool hasLbaStrategy() const { return this->lbaStrategy_ != nullptr;};
        void deleteLbaStrategy() { this->lbaStrategy_ = nullptr;};
        inline string getLbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(lbaStrategy_, "") };
        inline GtmInstance& setLbaStrategy(string lbaStrategy) { DARABONBA_PTR_SET_VALUE(lbaStrategy_, lbaStrategy) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline GtmInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // ttl Field Functions 
        bool hasTtl() const { return this->ttl_ != nullptr;};
        void deleteTtl() { this->ttl_ = nullptr;};
        inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
        inline GtmInstance& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


        // userDomainName Field Functions 
        bool hasUserDomainName() const { return this->userDomainName_ != nullptr;};
        void deleteUserDomainName() { this->userDomainName_ = nullptr;};
        inline string getUserDomainName() const { DARABONBA_PTR_GET_DEFAULT(userDomainName_, "") };
        inline GtmInstance& setUserDomainName(string userDomainName) { DARABONBA_PTR_SET_VALUE(userDomainName_, userDomainName) };


        // versionCode Field Functions 
        bool hasVersionCode() const { return this->versionCode_ != nullptr;};
        void deleteVersionCode() { this->versionCode_ = nullptr;};
        inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
        inline GtmInstance& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


      protected:
        // The number of access policies.
        shared_ptr<int32_t> accessStrategyNum_ {};
        // The number of address pools.
        shared_ptr<int32_t> addressPoolNum_ {};
        // The name of the alert group.
        shared_ptr<string> alertGroup_ {};
        // The CNAME domain name that is used to access the instance.
        shared_ptr<string> cname_ {};
        // The CNAME domain name used to access the instance. Valid values:
        // 
        // *   **SYSTEM_ASSIGN**: A CNAME domain name assigned by the system is used.
        // *   **CUSTOM**: A custom CNAME domain name is used.
        shared_ptr<string> cnameMode_ {};
        // The time when the instance was created.
        shared_ptr<string> createTime_ {};
        // The UNIX timestamp that indicates when the instance was created.
        shared_ptr<int64_t> createTimestamp_ {};
        // The time when the instance expires.
        shared_ptr<string> expireTime_ {};
        // The UNIX timestamp that indicates when the instance expires.
        shared_ptr<int64_t> expireTimestamp_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The name of the instance.
        shared_ptr<string> instanceName_ {};
        // The load balancing policy that is used. Valid values:
        // 
        // *   **ALL_RR**: Load balancing
        // *   **RATIO**: Weighted round-robin
        shared_ptr<string> lbaStrategy_ {};
        // The ID of the resource group to which the instance belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The global time to live (TTL).
        shared_ptr<int32_t> ttl_ {};
        // The domain name of the user.
        shared_ptr<string> userDomainName_ {};
        // The version code of the instance.
        shared_ptr<string> versionCode_ {};
      };

      virtual bool empty() const override { return this->gtmInstance_ == nullptr; };
      // gtmInstance Field Functions 
      bool hasGtmInstance() const { return this->gtmInstance_ != nullptr;};
      void deleteGtmInstance() { this->gtmInstance_ = nullptr;};
      inline const vector<GtmInstances::GtmInstance> & getGtmInstance() const { DARABONBA_PTR_GET_CONST(gtmInstance_, vector<GtmInstances::GtmInstance>) };
      inline vector<GtmInstances::GtmInstance> getGtmInstance() { DARABONBA_PTR_GET(gtmInstance_, vector<GtmInstances::GtmInstance>) };
      inline GtmInstances& setGtmInstance(const vector<GtmInstances::GtmInstance> & gtmInstance) { DARABONBA_PTR_SET_VALUE(gtmInstance_, gtmInstance) };
      inline GtmInstances& setGtmInstance(vector<GtmInstances::GtmInstance> && gtmInstance) { DARABONBA_PTR_SET_RVALUE(gtmInstance_, gtmInstance) };


    protected:
      shared_ptr<vector<GtmInstances::GtmInstance>> gtmInstance_ {};
    };

    virtual bool empty() const override { return this->gtmInstances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // gtmInstances Field Functions 
    bool hasGtmInstances() const { return this->gtmInstances_ != nullptr;};
    void deleteGtmInstances() { this->gtmInstances_ = nullptr;};
    inline const DescribeGtmInstancesResponseBody::GtmInstances & getGtmInstances() const { DARABONBA_PTR_GET_CONST(gtmInstances_, DescribeGtmInstancesResponseBody::GtmInstances) };
    inline DescribeGtmInstancesResponseBody::GtmInstances getGtmInstances() { DARABONBA_PTR_GET(gtmInstances_, DescribeGtmInstancesResponseBody::GtmInstances) };
    inline DescribeGtmInstancesResponseBody& setGtmInstances(const DescribeGtmInstancesResponseBody::GtmInstances & gtmInstances) { DARABONBA_PTR_SET_VALUE(gtmInstances_, gtmInstances) };
    inline DescribeGtmInstancesResponseBody& setGtmInstances(DescribeGtmInstancesResponseBody::GtmInstances && gtmInstances) { DARABONBA_PTR_SET_RVALUE(gtmInstances_, gtmInstances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGtmInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGtmInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGtmInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeGtmInstancesResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeGtmInstancesResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The list of queried instances.
    shared_ptr<DescribeGtmInstancesResponseBody::GtmInstances> gtmInstances_ {};
    // The returned page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
