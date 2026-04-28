// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBUDGETPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBUDGETPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBudgetPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBudgetPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBudgetPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeBudgetPoliciesResponseBody() = default ;
    DescribeBudgetPoliciesResponseBody(const DescribeBudgetPoliciesResponseBody &) = default ;
    DescribeBudgetPoliciesResponseBody(DescribeBudgetPoliciesResponseBody &&) = default ;
    DescribeBudgetPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBudgetPoliciesResponseBody() = default ;
    DescribeBudgetPoliciesResponseBody& operator=(const DescribeBudgetPoliciesResponseBody &) = default ;
    DescribeBudgetPoliciesResponseBody& operator=(DescribeBudgetPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AlertThresholdPct, alertThresholdPct_);
        DARABONBA_PTR_TO_JSON(AlertTriggered, alertTriggered_);
        DARABONBA_PTR_TO_JSON(BudgetDimensionRefId, budgetDimensionRefId_);
        DARABONBA_PTR_TO_JSON(BudgetDimensionType, budgetDimensionType_);
        DARABONBA_PTR_TO_JSON(BudgetPoints, budgetPoints_);
        DARABONBA_PTR_TO_JSON(BudgetPolicyId, budgetPolicyId_);
        DARABONBA_PTR_TO_JSON(BudgetType, budgetType_);
        DARABONBA_PTR_TO_JSON(Exceeded, exceeded_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
        DARABONBA_PTR_TO_JSON(ResetDayOfMonth, resetDayOfMonth_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UsedPoints, usedPoints_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertThresholdPct, alertThresholdPct_);
        DARABONBA_PTR_FROM_JSON(AlertTriggered, alertTriggered_);
        DARABONBA_PTR_FROM_JSON(BudgetDimensionRefId, budgetDimensionRefId_);
        DARABONBA_PTR_FROM_JSON(BudgetDimensionType, budgetDimensionType_);
        DARABONBA_PTR_FROM_JSON(BudgetPoints, budgetPoints_);
        DARABONBA_PTR_FROM_JSON(BudgetPolicyId, budgetPolicyId_);
        DARABONBA_PTR_FROM_JSON(BudgetType, budgetType_);
        DARABONBA_PTR_FROM_JSON(Exceeded, exceeded_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
        DARABONBA_PTR_FROM_JSON(ResetDayOfMonth, resetDayOfMonth_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UsedPoints, usedPoints_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertThresholdPct_ == nullptr
        && this->alertTriggered_ == nullptr && this->budgetDimensionRefId_ == nullptr && this->budgetDimensionType_ == nullptr && this->budgetPoints_ == nullptr && this->budgetPolicyId_ == nullptr
        && this->budgetType_ == nullptr && this->exceeded_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->gwClusterId_ == nullptr
        && this->resetDayOfMonth_ == nullptr && this->status_ == nullptr && this->usedPoints_ == nullptr; };
      // alertThresholdPct Field Functions 
      bool hasAlertThresholdPct() const { return this->alertThresholdPct_ != nullptr;};
      void deleteAlertThresholdPct() { this->alertThresholdPct_ = nullptr;};
      inline string getAlertThresholdPct() const { DARABONBA_PTR_GET_DEFAULT(alertThresholdPct_, "") };
      inline Items& setAlertThresholdPct(string alertThresholdPct) { DARABONBA_PTR_SET_VALUE(alertThresholdPct_, alertThresholdPct) };


      // alertTriggered Field Functions 
      bool hasAlertTriggered() const { return this->alertTriggered_ != nullptr;};
      void deleteAlertTriggered() { this->alertTriggered_ = nullptr;};
      inline bool getAlertTriggered() const { DARABONBA_PTR_GET_DEFAULT(alertTriggered_, false) };
      inline Items& setAlertTriggered(bool alertTriggered) { DARABONBA_PTR_SET_VALUE(alertTriggered_, alertTriggered) };


      // budgetDimensionRefId Field Functions 
      bool hasBudgetDimensionRefId() const { return this->budgetDimensionRefId_ != nullptr;};
      void deleteBudgetDimensionRefId() { this->budgetDimensionRefId_ = nullptr;};
      inline string getBudgetDimensionRefId() const { DARABONBA_PTR_GET_DEFAULT(budgetDimensionRefId_, "") };
      inline Items& setBudgetDimensionRefId(string budgetDimensionRefId) { DARABONBA_PTR_SET_VALUE(budgetDimensionRefId_, budgetDimensionRefId) };


      // budgetDimensionType Field Functions 
      bool hasBudgetDimensionType() const { return this->budgetDimensionType_ != nullptr;};
      void deleteBudgetDimensionType() { this->budgetDimensionType_ = nullptr;};
      inline string getBudgetDimensionType() const { DARABONBA_PTR_GET_DEFAULT(budgetDimensionType_, "") };
      inline Items& setBudgetDimensionType(string budgetDimensionType) { DARABONBA_PTR_SET_VALUE(budgetDimensionType_, budgetDimensionType) };


      // budgetPoints Field Functions 
      bool hasBudgetPoints() const { return this->budgetPoints_ != nullptr;};
      void deleteBudgetPoints() { this->budgetPoints_ = nullptr;};
      inline string getBudgetPoints() const { DARABONBA_PTR_GET_DEFAULT(budgetPoints_, "") };
      inline Items& setBudgetPoints(string budgetPoints) { DARABONBA_PTR_SET_VALUE(budgetPoints_, budgetPoints) };


      // budgetPolicyId Field Functions 
      bool hasBudgetPolicyId() const { return this->budgetPolicyId_ != nullptr;};
      void deleteBudgetPolicyId() { this->budgetPolicyId_ = nullptr;};
      inline string getBudgetPolicyId() const { DARABONBA_PTR_GET_DEFAULT(budgetPolicyId_, "") };
      inline Items& setBudgetPolicyId(string budgetPolicyId) { DARABONBA_PTR_SET_VALUE(budgetPolicyId_, budgetPolicyId) };


      // budgetType Field Functions 
      bool hasBudgetType() const { return this->budgetType_ != nullptr;};
      void deleteBudgetType() { this->budgetType_ = nullptr;};
      inline string getBudgetType() const { DARABONBA_PTR_GET_DEFAULT(budgetType_, "") };
      inline Items& setBudgetType(string budgetType) { DARABONBA_PTR_SET_VALUE(budgetType_, budgetType) };


      // exceeded Field Functions 
      bool hasExceeded() const { return this->exceeded_ != nullptr;};
      void deleteExceeded() { this->exceeded_ = nullptr;};
      inline string getExceeded() const { DARABONBA_PTR_GET_DEFAULT(exceeded_, "") };
      inline Items& setExceeded(string exceeded) { DARABONBA_PTR_SET_VALUE(exceeded_, exceeded) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Items& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Items& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // gwClusterId Field Functions 
      bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
      void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
      inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
      inline Items& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


      // resetDayOfMonth Field Functions 
      bool hasResetDayOfMonth() const { return this->resetDayOfMonth_ != nullptr;};
      void deleteResetDayOfMonth() { this->resetDayOfMonth_ = nullptr;};
      inline string getResetDayOfMonth() const { DARABONBA_PTR_GET_DEFAULT(resetDayOfMonth_, "") };
      inline Items& setResetDayOfMonth(string resetDayOfMonth) { DARABONBA_PTR_SET_VALUE(resetDayOfMonth_, resetDayOfMonth) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // usedPoints Field Functions 
      bool hasUsedPoints() const { return this->usedPoints_ != nullptr;};
      void deleteUsedPoints() { this->usedPoints_ = nullptr;};
      inline int32_t getUsedPoints() const { DARABONBA_PTR_GET_DEFAULT(usedPoints_, 0) };
      inline Items& setUsedPoints(int32_t usedPoints) { DARABONBA_PTR_SET_VALUE(usedPoints_, usedPoints) };


    protected:
      shared_ptr<string> alertThresholdPct_ {};
      shared_ptr<bool> alertTriggered_ {};
      shared_ptr<string> budgetDimensionRefId_ {};
      shared_ptr<string> budgetDimensionType_ {};
      shared_ptr<string> budgetPoints_ {};
      shared_ptr<string> budgetPolicyId_ {};
      shared_ptr<string> budgetType_ {};
      shared_ptr<string> exceeded_ {};
      shared_ptr<string> gmtCreated_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> gwClusterId_ {};
      shared_ptr<string> resetDayOfMonth_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int32_t> usedPoints_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeBudgetPoliciesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeBudgetPoliciesResponseBody::Items>) };
    inline vector<DescribeBudgetPoliciesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeBudgetPoliciesResponseBody::Items>) };
    inline DescribeBudgetPoliciesResponseBody& setItems(const vector<DescribeBudgetPoliciesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeBudgetPoliciesResponseBody& setItems(vector<DescribeBudgetPoliciesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBudgetPoliciesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeBudgetPoliciesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBudgetPoliciesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBudgetPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeBudgetPoliciesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<vector<DescribeBudgetPoliciesResponseBody::Items>> items_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageRecordCount_ {};
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
