// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGEROUTINEPLANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGEROUTINEPLANSRESPONSEBODY_HPP_
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
  class ListEdgeRoutinePlansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeRoutinePlansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlanInfo, planInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeRoutinePlansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlanInfo, planInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListEdgeRoutinePlansResponseBody() = default ;
    ListEdgeRoutinePlansResponseBody(const ListEdgeRoutinePlansResponseBody &) = default ;
    ListEdgeRoutinePlansResponseBody(ListEdgeRoutinePlansResponseBody &&) = default ;
    ListEdgeRoutinePlansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeRoutinePlansResponseBody() = default ;
    ListEdgeRoutinePlansResponseBody& operator=(const ListEdgeRoutinePlansResponseBody &) = default ;
    ListEdgeRoutinePlansResponseBody& operator=(ListEdgeRoutinePlansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PlanInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PlanInfo& obj) { 
        DARABONBA_PTR_TO_JSON(BillingMode, billingMode_);
        DARABONBA_PTR_TO_JSON(ErRoutineCodeVersionQuota, erRoutineCodeVersionQuota_);
        DARABONBA_PTR_TO_JSON(ErRoutineQuota, erRoutineQuota_);
        DARABONBA_PTR_TO_JSON(ErRoutineRouteSiteCountQuota, erRoutineRouteSiteCountQuota_);
        DARABONBA_PTR_TO_JSON(PaymentMethod, paymentMethod_);
        DARABONBA_PTR_TO_JSON(PlanName, planName_);
      };
      friend void from_json(const Darabonba::Json& j, PlanInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(BillingMode, billingMode_);
        DARABONBA_PTR_FROM_JSON(ErRoutineCodeVersionQuota, erRoutineCodeVersionQuota_);
        DARABONBA_PTR_FROM_JSON(ErRoutineQuota, erRoutineQuota_);
        DARABONBA_PTR_FROM_JSON(ErRoutineRouteSiteCountQuota, erRoutineRouteSiteCountQuota_);
        DARABONBA_PTR_FROM_JSON(PaymentMethod, paymentMethod_);
        DARABONBA_PTR_FROM_JSON(PlanName, planName_);
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
      virtual bool empty() const override { return this->billingMode_ == nullptr
        && this->erRoutineCodeVersionQuota_ == nullptr && this->erRoutineQuota_ == nullptr && this->erRoutineRouteSiteCountQuota_ == nullptr && this->paymentMethod_ == nullptr && this->planName_ == nullptr; };
      // billingMode Field Functions 
      bool hasBillingMode() const { return this->billingMode_ != nullptr;};
      void deleteBillingMode() { this->billingMode_ = nullptr;};
      inline string getBillingMode() const { DARABONBA_PTR_GET_DEFAULT(billingMode_, "") };
      inline PlanInfo& setBillingMode(string billingMode) { DARABONBA_PTR_SET_VALUE(billingMode_, billingMode) };


      // erRoutineCodeVersionQuota Field Functions 
      bool hasErRoutineCodeVersionQuota() const { return this->erRoutineCodeVersionQuota_ != nullptr;};
      void deleteErRoutineCodeVersionQuota() { this->erRoutineCodeVersionQuota_ = nullptr;};
      inline string getErRoutineCodeVersionQuota() const { DARABONBA_PTR_GET_DEFAULT(erRoutineCodeVersionQuota_, "") };
      inline PlanInfo& setErRoutineCodeVersionQuota(string erRoutineCodeVersionQuota) { DARABONBA_PTR_SET_VALUE(erRoutineCodeVersionQuota_, erRoutineCodeVersionQuota) };


      // erRoutineQuota Field Functions 
      bool hasErRoutineQuota() const { return this->erRoutineQuota_ != nullptr;};
      void deleteErRoutineQuota() { this->erRoutineQuota_ = nullptr;};
      inline string getErRoutineQuota() const { DARABONBA_PTR_GET_DEFAULT(erRoutineQuota_, "") };
      inline PlanInfo& setErRoutineQuota(string erRoutineQuota) { DARABONBA_PTR_SET_VALUE(erRoutineQuota_, erRoutineQuota) };


      // erRoutineRouteSiteCountQuota Field Functions 
      bool hasErRoutineRouteSiteCountQuota() const { return this->erRoutineRouteSiteCountQuota_ != nullptr;};
      void deleteErRoutineRouteSiteCountQuota() { this->erRoutineRouteSiteCountQuota_ = nullptr;};
      inline string getErRoutineRouteSiteCountQuota() const { DARABONBA_PTR_GET_DEFAULT(erRoutineRouteSiteCountQuota_, "") };
      inline PlanInfo& setErRoutineRouteSiteCountQuota(string erRoutineRouteSiteCountQuota) { DARABONBA_PTR_SET_VALUE(erRoutineRouteSiteCountQuota_, erRoutineRouteSiteCountQuota) };


      // paymentMethod Field Functions 
      bool hasPaymentMethod() const { return this->paymentMethod_ != nullptr;};
      void deletePaymentMethod() { this->paymentMethod_ = nullptr;};
      inline string getPaymentMethod() const { DARABONBA_PTR_GET_DEFAULT(paymentMethod_, "") };
      inline PlanInfo& setPaymentMethod(string paymentMethod) { DARABONBA_PTR_SET_VALUE(paymentMethod_, paymentMethod) };


      // planName Field Functions 
      bool hasPlanName() const { return this->planName_ != nullptr;};
      void deletePlanName() { this->planName_ = nullptr;};
      inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
      inline PlanInfo& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    protected:
      // The billing method. Valid values:
      // 
      // *   PREPAY: subscription.
      // *   POSTPAY: pay-as-you-go.
      shared_ptr<string> billingMode_ {};
      // The maximum number of versions that each routine supports.
      shared_ptr<string> erRoutineCodeVersionQuota_ {};
      // The maximum of routines that can be created.
      shared_ptr<string> erRoutineQuota_ {};
      // The maximum number of websites with which each routine can be associated.
      shared_ptr<string> erRoutineRouteSiteCountQuota_ {};
      // The payment method. Valid values:
      // 
      // *   er_free
      // *   er_pay
      shared_ptr<string> paymentMethod_ {};
      // The plan name.
      shared_ptr<string> planName_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->planInfo_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListEdgeRoutinePlansResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEdgeRoutinePlansResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // planInfo Field Functions 
    bool hasPlanInfo() const { return this->planInfo_ != nullptr;};
    void deletePlanInfo() { this->planInfo_ = nullptr;};
    inline const vector<ListEdgeRoutinePlansResponseBody::PlanInfo> & getPlanInfo() const { DARABONBA_PTR_GET_CONST(planInfo_, vector<ListEdgeRoutinePlansResponseBody::PlanInfo>) };
    inline vector<ListEdgeRoutinePlansResponseBody::PlanInfo> getPlanInfo() { DARABONBA_PTR_GET(planInfo_, vector<ListEdgeRoutinePlansResponseBody::PlanInfo>) };
    inline ListEdgeRoutinePlansResponseBody& setPlanInfo(const vector<ListEdgeRoutinePlansResponseBody::PlanInfo> & planInfo) { DARABONBA_PTR_SET_VALUE(planInfo_, planInfo) };
    inline ListEdgeRoutinePlansResponseBody& setPlanInfo(vector<ListEdgeRoutinePlansResponseBody::PlanInfo> && planInfo) { DARABONBA_PTR_SET_RVALUE(planInfo_, planInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEdgeRoutinePlansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListEdgeRoutinePlansResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListEdgeRoutinePlansResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 500.
    shared_ptr<int32_t> pageSize_ {};
    // The plans.
    shared_ptr<vector<ListEdgeRoutinePlansResponseBody::PlanInfo>> planInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
