// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMINSTANCESRESPONSEBODY_HPP_
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
  class ListCloudGtmInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    ListCloudGtmInstancesResponseBody() = default ;
    ListCloudGtmInstancesResponseBody(const ListCloudGtmInstancesResponseBody &) = default ;
    ListCloudGtmInstancesResponseBody(ListCloudGtmInstancesResponseBody &&) = default ;
    ListCloudGtmInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmInstancesResponseBody() = default ;
    ListCloudGtmInstancesResponseBody& operator=(const ListCloudGtmInstancesResponseBody &) = default ;
    ListCloudGtmInstancesResponseBody& operator=(ListCloudGtmInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(Instance, instance_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(Instance, instance_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Instance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instance& obj) { 
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(ExpireTimestamp, expireTimestamp_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(MonitorTaskQuota, monitorTaskQuota_);
          DARABONBA_PTR_TO_JSON(MonthlyEmailUsed, monthlyEmailUsed_);
          DARABONBA_PTR_TO_JSON(MonthlySmsQuota, monthlySmsQuota_);
          DARABONBA_PTR_TO_JSON(MonthlySmsUsed, monthlySmsUsed_);
          DARABONBA_PTR_TO_JSON(MonthlyWebhookUsed, monthlyWebhookUsed_);
          DARABONBA_PTR_TO_JSON(ScheduleDomainName, scheduleDomainName_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
          DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
        };
        friend void from_json(const Darabonba::Json& j, Instance& obj) { 
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(ExpireTimestamp, expireTimestamp_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(MonitorTaskQuota, monitorTaskQuota_);
          DARABONBA_PTR_FROM_JSON(MonthlyEmailUsed, monthlyEmailUsed_);
          DARABONBA_PTR_FROM_JSON(MonthlySmsQuota, monthlySmsQuota_);
          DARABONBA_PTR_FROM_JSON(MonthlySmsUsed, monthlySmsUsed_);
          DARABONBA_PTR_FROM_JSON(MonthlyWebhookUsed, monthlyWebhookUsed_);
          DARABONBA_PTR_FROM_JSON(ScheduleDomainName, scheduleDomainName_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
          DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
        };
        Instance() = default ;
        Instance(const Instance &) = default ;
        Instance(Instance &&) = default ;
        Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instance() = default ;
        Instance& operator=(const Instance &) = default ;
        Instance& operator=(Instance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->commodityCode_ == nullptr && this->createTime_ == nullptr && this->createTimestamp_ == nullptr && this->expireTime_ == nullptr && this->expireTimestamp_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->monitorTaskQuota_ == nullptr && this->monthlyEmailUsed_ == nullptr && this->monthlySmsQuota_ == nullptr
        && this->monthlySmsUsed_ == nullptr && this->monthlyWebhookUsed_ == nullptr && this->scheduleDomainName_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr
        && this->versionCode_ == nullptr; };
        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline Instance& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // commodityCode Field Functions 
        bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
        void deleteCommodityCode() { this->commodityCode_ = nullptr;};
        inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
        inline Instance& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Instance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline Instance& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline Instance& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // expireTimestamp Field Functions 
        bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
        void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
        inline int64_t getExpireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
        inline Instance& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Instance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // monitorTaskQuota Field Functions 
        bool hasMonitorTaskQuota() const { return this->monitorTaskQuota_ != nullptr;};
        void deleteMonitorTaskQuota() { this->monitorTaskQuota_ = nullptr;};
        inline int32_t getMonitorTaskQuota() const { DARABONBA_PTR_GET_DEFAULT(monitorTaskQuota_, 0) };
        inline Instance& setMonitorTaskQuota(int32_t monitorTaskQuota) { DARABONBA_PTR_SET_VALUE(monitorTaskQuota_, monitorTaskQuota) };


        // monthlyEmailUsed Field Functions 
        bool hasMonthlyEmailUsed() const { return this->monthlyEmailUsed_ != nullptr;};
        void deleteMonthlyEmailUsed() { this->monthlyEmailUsed_ = nullptr;};
        inline int32_t getMonthlyEmailUsed() const { DARABONBA_PTR_GET_DEFAULT(monthlyEmailUsed_, 0) };
        inline Instance& setMonthlyEmailUsed(int32_t monthlyEmailUsed) { DARABONBA_PTR_SET_VALUE(monthlyEmailUsed_, monthlyEmailUsed) };


        // monthlySmsQuota Field Functions 
        bool hasMonthlySmsQuota() const { return this->monthlySmsQuota_ != nullptr;};
        void deleteMonthlySmsQuota() { this->monthlySmsQuota_ = nullptr;};
        inline int32_t getMonthlySmsQuota() const { DARABONBA_PTR_GET_DEFAULT(monthlySmsQuota_, 0) };
        inline Instance& setMonthlySmsQuota(int32_t monthlySmsQuota) { DARABONBA_PTR_SET_VALUE(monthlySmsQuota_, monthlySmsQuota) };


        // monthlySmsUsed Field Functions 
        bool hasMonthlySmsUsed() const { return this->monthlySmsUsed_ != nullptr;};
        void deleteMonthlySmsUsed() { this->monthlySmsUsed_ = nullptr;};
        inline int32_t getMonthlySmsUsed() const { DARABONBA_PTR_GET_DEFAULT(monthlySmsUsed_, 0) };
        inline Instance& setMonthlySmsUsed(int32_t monthlySmsUsed) { DARABONBA_PTR_SET_VALUE(monthlySmsUsed_, monthlySmsUsed) };


        // monthlyWebhookUsed Field Functions 
        bool hasMonthlyWebhookUsed() const { return this->monthlyWebhookUsed_ != nullptr;};
        void deleteMonthlyWebhookUsed() { this->monthlyWebhookUsed_ = nullptr;};
        inline int32_t getMonthlyWebhookUsed() const { DARABONBA_PTR_GET_DEFAULT(monthlyWebhookUsed_, 0) };
        inline Instance& setMonthlyWebhookUsed(int32_t monthlyWebhookUsed) { DARABONBA_PTR_SET_VALUE(monthlyWebhookUsed_, monthlyWebhookUsed) };


        // scheduleDomainName Field Functions 
        bool hasScheduleDomainName() const { return this->scheduleDomainName_ != nullptr;};
        void deleteScheduleDomainName() { this->scheduleDomainName_ = nullptr;};
        inline string getScheduleDomainName() const { DARABONBA_PTR_GET_DEFAULT(scheduleDomainName_, "") };
        inline Instance& setScheduleDomainName(string scheduleDomainName) { DARABONBA_PTR_SET_VALUE(scheduleDomainName_, scheduleDomainName) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Instance& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // updateTimestamp Field Functions 
        bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
        void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
        inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
        inline Instance& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


        // versionCode Field Functions 
        bool hasVersionCode() const { return this->versionCode_ != nullptr;};
        void deleteVersionCode() { this->versionCode_ = nullptr;};
        inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
        inline Instance& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


      protected:
        shared_ptr<string> chargeType_ {};
        // The commodity code. Valid values:
        // 
        // *   dns_gtm_public_cn: commodity code on the China site (aliyun.com)
        // *   dns_gtm_public_intl: commodity code on the international site (alibabacloud.com)
        shared_ptr<string> commodityCode_ {};
        // Instance creation time.
        shared_ptr<string> createTime_ {};
        // Instance creation time (timestamp).
        shared_ptr<int64_t> createTimestamp_ {};
        // Instance expiration time.
        shared_ptr<string> expireTime_ {};
        // Instance expiration time (timestamp).
        shared_ptr<int64_t> expireTimestamp_ {};
        // The ID of the GTM instance.
        shared_ptr<string> instanceId_ {};
        // Instance name.
        shared_ptr<string> instanceName_ {};
        // Monitor probe task quota.
        shared_ptr<int32_t> monitorTaskQuota_ {};
        // Monthly email sending volume.
        shared_ptr<int32_t> monthlyEmailUsed_ {};
        // SMS quota, only supported on the China site as international sites do not support SMS.
        shared_ptr<int32_t> monthlySmsQuota_ {};
        // Monthly SMS sending volume, only supported by the China site as international sites do not support SMS.
        shared_ptr<int32_t> monthlySmsUsed_ {};
        // Monthly webhook send volume.
        shared_ptr<int32_t> monthlyWebhookUsed_ {};
        // The access domain name, which consists of a hostname and a zone or a subzone.
        shared_ptr<string> scheduleDomainName_ {};
        // The last time the instance was modified.
        shared_ptr<string> updateTime_ {};
        // The last modification time of the instance (timestamp).
        shared_ptr<int64_t> updateTimestamp_ {};
        // GTM instance version:
        // - standard: Standard Edition
        // - ultimate: Ultimate Edition
        shared_ptr<string> versionCode_ {};
      };

      virtual bool empty() const override { return this->instance_ == nullptr; };
      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline const vector<Instances::Instance> & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Instances::Instance>) };
      inline vector<Instances::Instance> getInstance() { DARABONBA_PTR_GET(instance_, vector<Instances::Instance>) };
      inline Instances& setInstance(const vector<Instances::Instance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
      inline Instances& setInstance(vector<Instances::Instance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    protected:
      shared_ptr<vector<Instances::Instance>> instance_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const ListCloudGtmInstancesResponseBody::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, ListCloudGtmInstancesResponseBody::Instances) };
    inline ListCloudGtmInstancesResponseBody::Instances getInstances() { DARABONBA_PTR_GET(instances_, ListCloudGtmInstancesResponseBody::Instances) };
    inline ListCloudGtmInstancesResponseBody& setInstances(const ListCloudGtmInstancesResponseBody::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListCloudGtmInstancesResponseBody& setInstances(ListCloudGtmInstancesResponseBody::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCloudGtmInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCloudGtmInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudGtmInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline ListCloudGtmInstancesResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline ListCloudGtmInstancesResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The instances.
    shared_ptr<ListCloudGtmInstancesResponseBody::Instances> instances_ {};
    // Current page number, starting with **1**, default is **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of rows per page when paginating queries, with a maximum value of 100 and a default of 20.
    shared_ptr<int32_t> pageSize_ {};
    // Unique request identification code.
    shared_ptr<string> requestId_ {};
    // Total number of instance entries.
    shared_ptr<int32_t> totalItems_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
