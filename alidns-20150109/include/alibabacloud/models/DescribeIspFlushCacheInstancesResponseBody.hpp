// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHEINSTANCESRESPONSEBODY_HPP_
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
  class DescribeIspFlushCacheInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIspFlushCacheInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IspFlushCacheInstances, ispFlushCacheInstances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIspFlushCacheInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IspFlushCacheInstances, ispFlushCacheInstances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeIspFlushCacheInstancesResponseBody() = default ;
    DescribeIspFlushCacheInstancesResponseBody(const DescribeIspFlushCacheInstancesResponseBody &) = default ;
    DescribeIspFlushCacheInstancesResponseBody(DescribeIspFlushCacheInstancesResponseBody &&) = default ;
    DescribeIspFlushCacheInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIspFlushCacheInstancesResponseBody() = default ;
    DescribeIspFlushCacheInstancesResponseBody& operator=(const DescribeIspFlushCacheInstancesResponseBody &) = default ;
    DescribeIspFlushCacheInstancesResponseBody& operator=(DescribeIspFlushCacheInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IspFlushCacheInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IspFlushCacheInstances& obj) { 
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(ExpireTimestamp, expireTimestamp_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(Isp, isp_);
        DARABONBA_PTR_TO_JSON(QuotaInfo, quotaInfo_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
      };
      friend void from_json(const Darabonba::Json& j, IspFlushCacheInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(ExpireTimestamp, expireTimestamp_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
        DARABONBA_PTR_FROM_JSON(QuotaInfo, quotaInfo_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
      };
      IspFlushCacheInstances() = default ;
      IspFlushCacheInstances(const IspFlushCacheInstances &) = default ;
      IspFlushCacheInstances(IspFlushCacheInstances &&) = default ;
      IspFlushCacheInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IspFlushCacheInstances() = default ;
      IspFlushCacheInstances& operator=(const IspFlushCacheInstances &) = default ;
      IspFlushCacheInstances& operator=(IspFlushCacheInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class QuotaInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QuotaInfo& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceQuota, instanceQuota_);
          DARABONBA_PTR_TO_JSON(InstanceQuotaUsed, instanceQuotaUsed_);
        };
        friend void from_json(const Darabonba::Json& j, QuotaInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceQuota, instanceQuota_);
          DARABONBA_PTR_FROM_JSON(InstanceQuotaUsed, instanceQuotaUsed_);
        };
        QuotaInfo() = default ;
        QuotaInfo(const QuotaInfo &) = default ;
        QuotaInfo(QuotaInfo &&) = default ;
        QuotaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QuotaInfo() = default ;
        QuotaInfo& operator=(const QuotaInfo &) = default ;
        QuotaInfo& operator=(QuotaInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceQuota_ == nullptr
        && this->instanceQuotaUsed_ == nullptr; };
        // instanceQuota Field Functions 
        bool hasInstanceQuota() const { return this->instanceQuota_ != nullptr;};
        void deleteInstanceQuota() { this->instanceQuota_ = nullptr;};
        inline int32_t getInstanceQuota() const { DARABONBA_PTR_GET_DEFAULT(instanceQuota_, 0) };
        inline QuotaInfo& setInstanceQuota(int32_t instanceQuota) { DARABONBA_PTR_SET_VALUE(instanceQuota_, instanceQuota) };


        // instanceQuotaUsed Field Functions 
        bool hasInstanceQuotaUsed() const { return this->instanceQuotaUsed_ != nullptr;};
        void deleteInstanceQuotaUsed() { this->instanceQuotaUsed_ = nullptr;};
        inline int32_t getInstanceQuotaUsed() const { DARABONBA_PTR_GET_DEFAULT(instanceQuotaUsed_, 0) };
        inline QuotaInfo& setInstanceQuotaUsed(int32_t instanceQuotaUsed) { DARABONBA_PTR_SET_VALUE(instanceQuotaUsed_, instanceQuotaUsed) };


      protected:
        shared_ptr<int32_t> instanceQuota_ {};
        shared_ptr<int32_t> instanceQuotaUsed_ {};
      };

      virtual bool empty() const override { return this->expireTime_ == nullptr
        && this->expireTimestamp_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->isp_ == nullptr && this->quotaInfo_ == nullptr
        && this->status_ == nullptr && this->versionCode_ == nullptr; };
      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline IspFlushCacheInstances& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // expireTimestamp Field Functions 
      bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
      void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
      inline int64_t getExpireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
      inline IspFlushCacheInstances& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline IspFlushCacheInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline IspFlushCacheInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline IspFlushCacheInstances& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // quotaInfo Field Functions 
      bool hasQuotaInfo() const { return this->quotaInfo_ != nullptr;};
      void deleteQuotaInfo() { this->quotaInfo_ = nullptr;};
      inline const IspFlushCacheInstances::QuotaInfo & getQuotaInfo() const { DARABONBA_PTR_GET_CONST(quotaInfo_, IspFlushCacheInstances::QuotaInfo) };
      inline IspFlushCacheInstances::QuotaInfo getQuotaInfo() { DARABONBA_PTR_GET(quotaInfo_, IspFlushCacheInstances::QuotaInfo) };
      inline IspFlushCacheInstances& setQuotaInfo(const IspFlushCacheInstances::QuotaInfo & quotaInfo) { DARABONBA_PTR_SET_VALUE(quotaInfo_, quotaInfo) };
      inline IspFlushCacheInstances& setQuotaInfo(IspFlushCacheInstances::QuotaInfo && quotaInfo) { DARABONBA_PTR_SET_RVALUE(quotaInfo_, quotaInfo) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline IspFlushCacheInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // versionCode Field Functions 
      bool hasVersionCode() const { return this->versionCode_ != nullptr;};
      void deleteVersionCode() { this->versionCode_ = nullptr;};
      inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
      inline IspFlushCacheInstances& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


    protected:
      shared_ptr<string> expireTime_ {};
      shared_ptr<int64_t> expireTimestamp_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceName_ {};
      shared_ptr<string> isp_ {};
      shared_ptr<IspFlushCacheInstances::QuotaInfo> quotaInfo_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> versionCode_ {};
    };

    virtual bool empty() const override { return this->ispFlushCacheInstances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // ispFlushCacheInstances Field Functions 
    bool hasIspFlushCacheInstances() const { return this->ispFlushCacheInstances_ != nullptr;};
    void deleteIspFlushCacheInstances() { this->ispFlushCacheInstances_ = nullptr;};
    inline const vector<DescribeIspFlushCacheInstancesResponseBody::IspFlushCacheInstances> & getIspFlushCacheInstances() const { DARABONBA_PTR_GET_CONST(ispFlushCacheInstances_, vector<DescribeIspFlushCacheInstancesResponseBody::IspFlushCacheInstances>) };
    inline vector<DescribeIspFlushCacheInstancesResponseBody::IspFlushCacheInstances> getIspFlushCacheInstances() { DARABONBA_PTR_GET(ispFlushCacheInstances_, vector<DescribeIspFlushCacheInstancesResponseBody::IspFlushCacheInstances>) };
    inline DescribeIspFlushCacheInstancesResponseBody& setIspFlushCacheInstances(const vector<DescribeIspFlushCacheInstancesResponseBody::IspFlushCacheInstances> & ispFlushCacheInstances) { DARABONBA_PTR_SET_VALUE(ispFlushCacheInstances_, ispFlushCacheInstances) };
    inline DescribeIspFlushCacheInstancesResponseBody& setIspFlushCacheInstances(vector<DescribeIspFlushCacheInstancesResponseBody::IspFlushCacheInstances> && ispFlushCacheInstances) { DARABONBA_PTR_SET_RVALUE(ispFlushCacheInstances_, ispFlushCacheInstances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIspFlushCacheInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIspFlushCacheInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIspFlushCacheInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeIspFlushCacheInstancesResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeIspFlushCacheInstancesResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    shared_ptr<vector<DescribeIspFlushCacheInstancesResponseBody::IspFlushCacheInstances>> ispFlushCacheInstances_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalItems_ {};
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
