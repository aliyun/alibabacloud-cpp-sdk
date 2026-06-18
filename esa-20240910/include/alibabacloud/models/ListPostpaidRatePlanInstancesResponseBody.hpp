// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOSTPAIDRATEPLANINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOSTPAIDRATEPLANINSTANCESRESPONSEBODY_HPP_
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
  class ListPostpaidRatePlanInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPostpaidRatePlanInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListPostpaidRatePlanInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListPostpaidRatePlanInstancesResponseBody() = default ;
    ListPostpaidRatePlanInstancesResponseBody(const ListPostpaidRatePlanInstancesResponseBody &) = default ;
    ListPostpaidRatePlanInstancesResponseBody(ListPostpaidRatePlanInstancesResponseBody &&) = default ;
    ListPostpaidRatePlanInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPostpaidRatePlanInstancesResponseBody() = default ;
    ListPostpaidRatePlanInstancesResponseBody& operator=(const ListPostpaidRatePlanInstancesResponseBody &) = default ;
    ListPostpaidRatePlanInstancesResponseBody& operator=(ListPostpaidRatePlanInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(BillingMethod, billingMethod_);
        DARABONBA_PTR_TO_JSON(BillingMode, billingMode_);
        DARABONBA_PTR_TO_JSON(Coverages, coverages_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ExpectedUpdateTime, expectedUpdateTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(PlanName, planName_);
        DARABONBA_PTR_TO_JSON(PlanNameCn, planNameCn_);
        DARABONBA_PTR_TO_JSON(PlanType, planType_);
        DARABONBA_PTR_TO_JSON(SiteQuota, siteQuota_);
        DARABONBA_PTR_TO_JSON(Sites, sites_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(BillingMethod, billingMethod_);
        DARABONBA_PTR_FROM_JSON(BillingMode, billingMode_);
        DARABONBA_PTR_FROM_JSON(Coverages, coverages_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ExpectedUpdateTime, expectedUpdateTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(PlanName, planName_);
        DARABONBA_PTR_FROM_JSON(PlanNameCn, planNameCn_);
        DARABONBA_PTR_FROM_JSON(PlanType, planType_);
        DARABONBA_PTR_FROM_JSON(SiteQuota, siteQuota_);
        DARABONBA_PTR_FROM_JSON(Sites, sites_);
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
      class Sites : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sites& obj) { 
          DARABONBA_PTR_TO_JSON(SiteId, siteId_);
          DARABONBA_PTR_TO_JSON(SiteName, siteName_);
          DARABONBA_PTR_TO_JSON(SiteStatus, siteStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Sites& obj) { 
          DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
          DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
          DARABONBA_PTR_FROM_JSON(SiteStatus, siteStatus_);
        };
        Sites() = default ;
        Sites(const Sites &) = default ;
        Sites(Sites &&) = default ;
        Sites(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sites() = default ;
        Sites& operator=(const Sites &) = default ;
        Sites& operator=(Sites &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->siteId_ == nullptr
        && this->siteName_ == nullptr && this->siteStatus_ == nullptr; };
        // siteId Field Functions 
        bool hasSiteId() const { return this->siteId_ != nullptr;};
        void deleteSiteId() { this->siteId_ = nullptr;};
        inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
        inline Sites& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


        // siteName Field Functions 
        bool hasSiteName() const { return this->siteName_ != nullptr;};
        void deleteSiteName() { this->siteName_ = nullptr;};
        inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
        inline Sites& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


        // siteStatus Field Functions 
        bool hasSiteStatus() const { return this->siteStatus_ != nullptr;};
        void deleteSiteStatus() { this->siteStatus_ = nullptr;};
        inline string getSiteStatus() const { DARABONBA_PTR_GET_DEFAULT(siteStatus_, "") };
        inline Sites& setSiteStatus(string siteStatus) { DARABONBA_PTR_SET_VALUE(siteStatus_, siteStatus) };


      protected:
        // The ID of the site.
        shared_ptr<int64_t> siteId_ {};
        // The name of the site.
        shared_ptr<string> siteName_ {};
        // The status of the site. Valid values:
        // 
        // - `pending`: The site is awaiting configuration.
        // 
        // - `active`: The site is active.
        // 
        // - `offline`: The site is offline.
        // 
        // - `moved`: The site has been replaced.
        shared_ptr<string> siteStatus_ {};
      };

      virtual bool empty() const override { return this->billingMethod_ == nullptr
        && this->billingMode_ == nullptr && this->coverages_ == nullptr && this->createTime_ == nullptr && this->expectedUpdateTime_ == nullptr && this->instanceId_ == nullptr
        && this->planName_ == nullptr && this->planNameCn_ == nullptr && this->planType_ == nullptr && this->siteQuota_ == nullptr && this->sites_ == nullptr
        && this->status_ == nullptr; };
      // billingMethod Field Functions 
      bool hasBillingMethod() const { return this->billingMethod_ != nullptr;};
      void deleteBillingMethod() { this->billingMethod_ = nullptr;};
      inline string getBillingMethod() const { DARABONBA_PTR_GET_DEFAULT(billingMethod_, "") };
      inline InstanceInfo& setBillingMethod(string billingMethod) { DARABONBA_PTR_SET_VALUE(billingMethod_, billingMethod) };


      // billingMode Field Functions 
      bool hasBillingMode() const { return this->billingMode_ != nullptr;};
      void deleteBillingMode() { this->billingMode_ = nullptr;};
      inline string getBillingMode() const { DARABONBA_PTR_GET_DEFAULT(billingMode_, "") };
      inline InstanceInfo& setBillingMode(string billingMode) { DARABONBA_PTR_SET_VALUE(billingMode_, billingMode) };


      // coverages Field Functions 
      bool hasCoverages() const { return this->coverages_ != nullptr;};
      void deleteCoverages() { this->coverages_ = nullptr;};
      inline string getCoverages() const { DARABONBA_PTR_GET_DEFAULT(coverages_, "") };
      inline InstanceInfo& setCoverages(string coverages) { DARABONBA_PTR_SET_VALUE(coverages_, coverages) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline InstanceInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // expectedUpdateTime Field Functions 
      bool hasExpectedUpdateTime() const { return this->expectedUpdateTime_ != nullptr;};
      void deleteExpectedUpdateTime() { this->expectedUpdateTime_ = nullptr;};
      inline string getExpectedUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(expectedUpdateTime_, "") };
      inline InstanceInfo& setExpectedUpdateTime(string expectedUpdateTime) { DARABONBA_PTR_SET_VALUE(expectedUpdateTime_, expectedUpdateTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // planName Field Functions 
      bool hasPlanName() const { return this->planName_ != nullptr;};
      void deletePlanName() { this->planName_ = nullptr;};
      inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
      inline InstanceInfo& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


      // planNameCn Field Functions 
      bool hasPlanNameCn() const { return this->planNameCn_ != nullptr;};
      void deletePlanNameCn() { this->planNameCn_ = nullptr;};
      inline string getPlanNameCn() const { DARABONBA_PTR_GET_DEFAULT(planNameCn_, "") };
      inline InstanceInfo& setPlanNameCn(string planNameCn) { DARABONBA_PTR_SET_VALUE(planNameCn_, planNameCn) };


      // planType Field Functions 
      bool hasPlanType() const { return this->planType_ != nullptr;};
      void deletePlanType() { this->planType_ = nullptr;};
      inline string getPlanType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
      inline InstanceInfo& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


      // siteQuota Field Functions 
      bool hasSiteQuota() const { return this->siteQuota_ != nullptr;};
      void deleteSiteQuota() { this->siteQuota_ = nullptr;};
      inline string getSiteQuota() const { DARABONBA_PTR_GET_DEFAULT(siteQuota_, "") };
      inline InstanceInfo& setSiteQuota(string siteQuota) { DARABONBA_PTR_SET_VALUE(siteQuota_, siteQuota) };


      // sites Field Functions 
      bool hasSites() const { return this->sites_ != nullptr;};
      void deleteSites() { this->sites_ = nullptr;};
      inline const vector<InstanceInfo::Sites> & getSites() const { DARABONBA_PTR_GET_CONST(sites_, vector<InstanceInfo::Sites>) };
      inline vector<InstanceInfo::Sites> getSites() { DARABONBA_PTR_GET(sites_, vector<InstanceInfo::Sites>) };
      inline InstanceInfo& setSites(const vector<InstanceInfo::Sites> & sites) { DARABONBA_PTR_SET_VALUE(sites_, sites) };
      inline InstanceInfo& setSites(vector<InstanceInfo::Sites> && sites) { DARABONBA_PTR_SET_RVALUE(sites_, sites) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline InstanceInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The billing method. Valid value:
      // 
      // - `dps_month95`: Monthly 95th percentile.
      shared_ptr<string> billingMethod_ {};
      // The billing mode. Valid value:
      // 
      // - `POSTPAY`: pay-as-you-go.
      shared_ptr<string> billingMode_ {};
      // The coverage area of the instance. Only sites within this area can be bound to the instance. If multiple areas are supported, they are separated by a comma (`,`). Valid values:
      // 
      // - `domestic`: Chinese mainland.
      // 
      // - `overseas`: Regions outside the Chinese mainland.
      // 
      // - `global`: Global (including the Chinese mainland).
      shared_ptr<string> coverages_ {};
      // The time when the instance was created.
      shared_ptr<string> createTime_ {};
      // The time of a scheduled configuration change.
      shared_ptr<string> expectedUpdateTime_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The plan name in English.
      shared_ptr<string> planName_ {};
      // The plan name in Chinese.
      shared_ptr<string> planNameCn_ {};
      // The type of the plan. Valid values:
      // 
      // - `normal`: Normal plan.
      // 
      // - `enterprise`: Enterprise plan.
      shared_ptr<string> planType_ {};
      // The maximum number of sites that can be bound to the instance.
      shared_ptr<string> siteQuota_ {};
      // A list of sites bound to the instance.
      shared_ptr<vector<InstanceInfo::Sites>> sites_ {};
      // The status of the instance.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->instanceInfo_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // instanceInfo Field Functions 
    bool hasInstanceInfo() const { return this->instanceInfo_ != nullptr;};
    void deleteInstanceInfo() { this->instanceInfo_ = nullptr;};
    inline const vector<ListPostpaidRatePlanInstancesResponseBody::InstanceInfo> & getInstanceInfo() const { DARABONBA_PTR_GET_CONST(instanceInfo_, vector<ListPostpaidRatePlanInstancesResponseBody::InstanceInfo>) };
    inline vector<ListPostpaidRatePlanInstancesResponseBody::InstanceInfo> getInstanceInfo() { DARABONBA_PTR_GET(instanceInfo_, vector<ListPostpaidRatePlanInstancesResponseBody::InstanceInfo>) };
    inline ListPostpaidRatePlanInstancesResponseBody& setInstanceInfo(const vector<ListPostpaidRatePlanInstancesResponseBody::InstanceInfo> & instanceInfo) { DARABONBA_PTR_SET_VALUE(instanceInfo_, instanceInfo) };
    inline ListPostpaidRatePlanInstancesResponseBody& setInstanceInfo(vector<ListPostpaidRatePlanInstancesResponseBody::InstanceInfo> && instanceInfo) { DARABONBA_PTR_SET_RVALUE(instanceInfo_, instanceInfo) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPostpaidRatePlanInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPostpaidRatePlanInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPostpaidRatePlanInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPostpaidRatePlanInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListPostpaidRatePlanInstancesResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // A list of instances.
    shared_ptr<vector<ListPostpaidRatePlanInstancesResponseBody::InstanceInfo>> instanceInfo_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID, used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
