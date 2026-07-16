// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOSTPAIDSITEPLANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOSTPAIDSITEPLANSRESPONSEBODY_HPP_
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
  class ListPostpaidSitePlansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPostpaidSitePlansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlanInfo, planInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListPostpaidSitePlansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlanInfo, planInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListPostpaidSitePlansResponseBody() = default ;
    ListPostpaidSitePlansResponseBody(const ListPostpaidSitePlansResponseBody &) = default ;
    ListPostpaidSitePlansResponseBody(ListPostpaidSitePlansResponseBody &&) = default ;
    ListPostpaidSitePlansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPostpaidSitePlansResponseBody() = default ;
    ListPostpaidSitePlansResponseBody& operator=(const ListPostpaidSitePlansResponseBody &) = default ;
    ListPostpaidSitePlansResponseBody& operator=(ListPostpaidSitePlansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PlanInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PlanInfo& obj) { 
        DARABONBA_PTR_TO_JSON(BillingMethod, billingMethod_);
        DARABONBA_PTR_TO_JSON(BillingMode, billingMode_);
        DARABONBA_PTR_TO_JSON(Coverages, coverages_);
        DARABONBA_PTR_TO_JSON(PlanName, planName_);
        DARABONBA_PTR_TO_JSON(PlanNameCn, planNameCn_);
        DARABONBA_PTR_TO_JSON(PlanType, planType_);
        DARABONBA_PTR_TO_JSON(SaleStatus, saleStatus_);
        DARABONBA_PTR_TO_JSON(SiteQuota, siteQuota_);
      };
      friend void from_json(const Darabonba::Json& j, PlanInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(BillingMethod, billingMethod_);
        DARABONBA_PTR_FROM_JSON(BillingMode, billingMode_);
        DARABONBA_PTR_FROM_JSON(Coverages, coverages_);
        DARABONBA_PTR_FROM_JSON(PlanName, planName_);
        DARABONBA_PTR_FROM_JSON(PlanNameCn, planNameCn_);
        DARABONBA_PTR_FROM_JSON(PlanType, planType_);
        DARABONBA_PTR_FROM_JSON(SaleStatus, saleStatus_);
        DARABONBA_PTR_FROM_JSON(SiteQuota, siteQuota_);
      };
      PlanInfo() = default ;
      PlanInfo(const PlanInfo &) = default ;
      PlanInfo(PlanInfo &&) = default ;
      PlanInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PlanInfo() = default ;
      PlanInfo& operator=(const PlanInfo &) = default ;
      PlanInfo& operator=(PlanInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->billingMethod_ == nullptr
        && this->billingMode_ == nullptr && this->coverages_ == nullptr && this->planName_ == nullptr && this->planNameCn_ == nullptr && this->planType_ == nullptr
        && this->saleStatus_ == nullptr && this->siteQuota_ == nullptr; };
      // billingMethod Field Functions 
      bool hasBillingMethod() const { return this->billingMethod_ != nullptr;};
      void deleteBillingMethod() { this->billingMethod_ = nullptr;};
      inline string getBillingMethod() const { DARABONBA_PTR_GET_DEFAULT(billingMethod_, "") };
      inline PlanInfo& setBillingMethod(string billingMethod) { DARABONBA_PTR_SET_VALUE(billingMethod_, billingMethod) };


      // billingMode Field Functions 
      bool hasBillingMode() const { return this->billingMode_ != nullptr;};
      void deleteBillingMode() { this->billingMode_ = nullptr;};
      inline string getBillingMode() const { DARABONBA_PTR_GET_DEFAULT(billingMode_, "") };
      inline PlanInfo& setBillingMode(string billingMode) { DARABONBA_PTR_SET_VALUE(billingMode_, billingMode) };


      // coverages Field Functions 
      bool hasCoverages() const { return this->coverages_ != nullptr;};
      void deleteCoverages() { this->coverages_ = nullptr;};
      inline string getCoverages() const { DARABONBA_PTR_GET_DEFAULT(coverages_, "") };
      inline PlanInfo& setCoverages(string coverages) { DARABONBA_PTR_SET_VALUE(coverages_, coverages) };


      // planName Field Functions 
      bool hasPlanName() const { return this->planName_ != nullptr;};
      void deletePlanName() { this->planName_ = nullptr;};
      inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
      inline PlanInfo& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


      // planNameCn Field Functions 
      bool hasPlanNameCn() const { return this->planNameCn_ != nullptr;};
      void deletePlanNameCn() { this->planNameCn_ = nullptr;};
      inline string getPlanNameCn() const { DARABONBA_PTR_GET_DEFAULT(planNameCn_, "") };
      inline PlanInfo& setPlanNameCn(string planNameCn) { DARABONBA_PTR_SET_VALUE(planNameCn_, planNameCn) };


      // planType Field Functions 
      bool hasPlanType() const { return this->planType_ != nullptr;};
      void deletePlanType() { this->planType_ = nullptr;};
      inline string getPlanType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
      inline PlanInfo& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


      // saleStatus Field Functions 
      bool hasSaleStatus() const { return this->saleStatus_ != nullptr;};
      void deleteSaleStatus() { this->saleStatus_ = nullptr;};
      inline string getSaleStatus() const { DARABONBA_PTR_GET_DEFAULT(saleStatus_, "") };
      inline PlanInfo& setSaleStatus(string saleStatus) { DARABONBA_PTR_SET_VALUE(saleStatus_, saleStatus) };


      // siteQuota Field Functions 
      bool hasSiteQuota() const { return this->siteQuota_ != nullptr;};
      void deleteSiteQuota() { this->siteQuota_ = nullptr;};
      inline string getSiteQuota() const { DARABONBA_PTR_GET_DEFAULT(siteQuota_, "") };
      inline PlanInfo& setSiteQuota(string siteQuota) { DARABONBA_PTR_SET_VALUE(siteQuota_, siteQuota) };


    protected:
      // The billable methods of the plan. Valid values:
      // - dps_month95: monthly 95th percentile billing method.
      shared_ptr<string> billingMethod_ {};
      // The payment type. Valid values:
      // 
      // - PREPAY: subscription.
      // - POSTPAY: pay-as-you-go.
      shared_ptr<string> billingMode_ {};
      // The acceleration regions to which sites can be added under the plan. Multiple values are separated by commas (,). Valid values:
      // 
      // - domestic: the Chinese mainland.
      // - overseas: global (excluding the Chinese mainland).
      // - global: global (including the Chinese mainland).
      shared_ptr<string> coverages_ {};
      // The name of the plan, which serves as a unique identifier in English.
      shared_ptr<string> planName_ {};
      // The plan description.
      shared_ptr<string> planNameCn_ {};
      // The plan type of the plan instance. Valid values:
      // - normal: fixed edition plan.
      // - enterprise: enterprise edition plan.
      shared_ptr<string> planType_ {};
      // The sale status of the plan. Valid values for enterprise edition plans:
      // 
      // - saled: sold.
      // - upgrading: specification change in progress.
      shared_ptr<string> saleStatus_ {};
      // The site quantity quota.
      shared_ptr<string> siteQuota_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->planInfo_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPostpaidSitePlansResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPostpaidSitePlansResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // planInfo Field Functions 
    bool hasPlanInfo() const { return this->planInfo_ != nullptr;};
    void deletePlanInfo() { this->planInfo_ = nullptr;};
    inline const vector<ListPostpaidSitePlansResponseBody::PlanInfo> & getPlanInfo() const { DARABONBA_PTR_GET_CONST(planInfo_, vector<ListPostpaidSitePlansResponseBody::PlanInfo>) };
    inline vector<ListPostpaidSitePlansResponseBody::PlanInfo> getPlanInfo() { DARABONBA_PTR_GET(planInfo_, vector<ListPostpaidSitePlansResponseBody::PlanInfo>) };
    inline ListPostpaidSitePlansResponseBody& setPlanInfo(const vector<ListPostpaidSitePlansResponseBody::PlanInfo> & planInfo) { DARABONBA_PTR_SET_VALUE(planInfo_, planInfo) };
    inline ListPostpaidSitePlansResponseBody& setPlanInfo(vector<ListPostpaidSitePlansResponseBody::PlanInfo> && planInfo) { DARABONBA_PTR_SET_RVALUE(planInfo_, planInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPostpaidSitePlansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPostpaidSitePlansResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListPostpaidSitePlansResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The page size. Default value: 20. Maximum value: 500. Valid values: any integer from 1 to 500.
    shared_ptr<int32_t> pageSize_ {};
    // The pay-as-you-go plan details.
    shared_ptr<vector<ListPostpaidSitePlansResponseBody::PlanInfo>> planInfo_ {};
    // The request ID.
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
