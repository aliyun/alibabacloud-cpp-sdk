// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBUDGETUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBUDGETUSAGERESPONSEBODY_HPP_
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
  class DescribeBudgetUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBudgetUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertTriggered, alertTriggered_);
      DARABONBA_PTR_TO_JSON(DimensionRefId, dimensionRefId_);
      DARABONBA_PTR_TO_JSON(DimensionType, dimensionType_);
      DARABONBA_PTR_TO_JSON(Exceeded, exceeded_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsedPoints, usedPoints_);
      DARABONBA_PTR_TO_JSON(WindowEndTime, windowEndTime_);
      DARABONBA_PTR_TO_JSON(WindowStartTime, windowStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBudgetUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertTriggered, alertTriggered_);
      DARABONBA_PTR_FROM_JSON(DimensionRefId, dimensionRefId_);
      DARABONBA_PTR_FROM_JSON(DimensionType, dimensionType_);
      DARABONBA_PTR_FROM_JSON(Exceeded, exceeded_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsedPoints, usedPoints_);
      DARABONBA_PTR_FROM_JSON(WindowEndTime, windowEndTime_);
      DARABONBA_PTR_FROM_JSON(WindowStartTime, windowStartTime_);
    };
    DescribeBudgetUsageResponseBody() = default ;
    DescribeBudgetUsageResponseBody(const DescribeBudgetUsageResponseBody &) = default ;
    DescribeBudgetUsageResponseBody(DescribeBudgetUsageResponseBody &&) = default ;
    DescribeBudgetUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBudgetUsageResponseBody() = default ;
    DescribeBudgetUsageResponseBody& operator=(const DescribeBudgetUsageResponseBody &) = default ;
    DescribeBudgetUsageResponseBody& operator=(DescribeBudgetUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policies& obj) { 
        DARABONBA_PTR_TO_JSON(AlertThresholdPct, alertThresholdPct_);
        DARABONBA_PTR_TO_JSON(BudgetDimensionRefId, budgetDimensionRefId_);
        DARABONBA_PTR_TO_JSON(BudgetDimensionType, budgetDimensionType_);
        DARABONBA_PTR_TO_JSON(BudgetPoints, budgetPoints_);
        DARABONBA_PTR_TO_JSON(BudgetPolicyId, budgetPolicyId_);
        DARABONBA_PTR_TO_JSON(BudgetType, budgetType_);
        DARABONBA_PTR_TO_JSON(ResetDayOfMonth, resetDayOfMonth_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Policies& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertThresholdPct, alertThresholdPct_);
        DARABONBA_PTR_FROM_JSON(BudgetDimensionRefId, budgetDimensionRefId_);
        DARABONBA_PTR_FROM_JSON(BudgetDimensionType, budgetDimensionType_);
        DARABONBA_PTR_FROM_JSON(BudgetPoints, budgetPoints_);
        DARABONBA_PTR_FROM_JSON(BudgetPolicyId, budgetPolicyId_);
        DARABONBA_PTR_FROM_JSON(BudgetType, budgetType_);
        DARABONBA_PTR_FROM_JSON(ResetDayOfMonth, resetDayOfMonth_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Policies() = default ;
      Policies(const Policies &) = default ;
      Policies(Policies &&) = default ;
      Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policies() = default ;
      Policies& operator=(const Policies &) = default ;
      Policies& operator=(Policies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertThresholdPct_ == nullptr
        && this->budgetDimensionRefId_ == nullptr && this->budgetDimensionType_ == nullptr && this->budgetPoints_ == nullptr && this->budgetPolicyId_ == nullptr && this->budgetType_ == nullptr
        && this->resetDayOfMonth_ == nullptr && this->status_ == nullptr; };
      // alertThresholdPct Field Functions 
      bool hasAlertThresholdPct() const { return this->alertThresholdPct_ != nullptr;};
      void deleteAlertThresholdPct() { this->alertThresholdPct_ = nullptr;};
      inline string getAlertThresholdPct() const { DARABONBA_PTR_GET_DEFAULT(alertThresholdPct_, "") };
      inline Policies& setAlertThresholdPct(string alertThresholdPct) { DARABONBA_PTR_SET_VALUE(alertThresholdPct_, alertThresholdPct) };


      // budgetDimensionRefId Field Functions 
      bool hasBudgetDimensionRefId() const { return this->budgetDimensionRefId_ != nullptr;};
      void deleteBudgetDimensionRefId() { this->budgetDimensionRefId_ = nullptr;};
      inline string getBudgetDimensionRefId() const { DARABONBA_PTR_GET_DEFAULT(budgetDimensionRefId_, "") };
      inline Policies& setBudgetDimensionRefId(string budgetDimensionRefId) { DARABONBA_PTR_SET_VALUE(budgetDimensionRefId_, budgetDimensionRefId) };


      // budgetDimensionType Field Functions 
      bool hasBudgetDimensionType() const { return this->budgetDimensionType_ != nullptr;};
      void deleteBudgetDimensionType() { this->budgetDimensionType_ = nullptr;};
      inline string getBudgetDimensionType() const { DARABONBA_PTR_GET_DEFAULT(budgetDimensionType_, "") };
      inline Policies& setBudgetDimensionType(string budgetDimensionType) { DARABONBA_PTR_SET_VALUE(budgetDimensionType_, budgetDimensionType) };


      // budgetPoints Field Functions 
      bool hasBudgetPoints() const { return this->budgetPoints_ != nullptr;};
      void deleteBudgetPoints() { this->budgetPoints_ = nullptr;};
      inline string getBudgetPoints() const { DARABONBA_PTR_GET_DEFAULT(budgetPoints_, "") };
      inline Policies& setBudgetPoints(string budgetPoints) { DARABONBA_PTR_SET_VALUE(budgetPoints_, budgetPoints) };


      // budgetPolicyId Field Functions 
      bool hasBudgetPolicyId() const { return this->budgetPolicyId_ != nullptr;};
      void deleteBudgetPolicyId() { this->budgetPolicyId_ = nullptr;};
      inline string getBudgetPolicyId() const { DARABONBA_PTR_GET_DEFAULT(budgetPolicyId_, "") };
      inline Policies& setBudgetPolicyId(string budgetPolicyId) { DARABONBA_PTR_SET_VALUE(budgetPolicyId_, budgetPolicyId) };


      // budgetType Field Functions 
      bool hasBudgetType() const { return this->budgetType_ != nullptr;};
      void deleteBudgetType() { this->budgetType_ = nullptr;};
      inline string getBudgetType() const { DARABONBA_PTR_GET_DEFAULT(budgetType_, "") };
      inline Policies& setBudgetType(string budgetType) { DARABONBA_PTR_SET_VALUE(budgetType_, budgetType) };


      // resetDayOfMonth Field Functions 
      bool hasResetDayOfMonth() const { return this->resetDayOfMonth_ != nullptr;};
      void deleteResetDayOfMonth() { this->resetDayOfMonth_ = nullptr;};
      inline string getResetDayOfMonth() const { DARABONBA_PTR_GET_DEFAULT(resetDayOfMonth_, "") };
      inline Policies& setResetDayOfMonth(string resetDayOfMonth) { DARABONBA_PTR_SET_VALUE(resetDayOfMonth_, resetDayOfMonth) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Policies& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The usage percentage that triggers a budget alert.
      shared_ptr<string> alertThresholdPct_ {};
      // The budget dimension reference ID to which the policy applies.
      shared_ptr<string> budgetDimensionRefId_ {};
      // The budget dimension type to which the policy applies.
      shared_ptr<string> budgetDimensionType_ {};
      // The number of budget points set by the policy.
      shared_ptr<string> budgetPoints_ {};
      // The budget policy ID.
      shared_ptr<string> budgetPolicyId_ {};
      // The budget type.
      shared_ptr<string> budgetType_ {};
      // The day of the month when the budget is reset. For example, 1 indicates the first day of each month.
      shared_ptr<string> resetDayOfMonth_ {};
      // The budget policy status.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->alertTriggered_ == nullptr
        && this->dimensionRefId_ == nullptr && this->dimensionType_ == nullptr && this->exceeded_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr
        && this->gwClusterId_ == nullptr && this->policies_ == nullptr && this->requestId_ == nullptr && this->usedPoints_ == nullptr && this->windowEndTime_ == nullptr
        && this->windowStartTime_ == nullptr; };
    // alertTriggered Field Functions 
    bool hasAlertTriggered() const { return this->alertTriggered_ != nullptr;};
    void deleteAlertTriggered() { this->alertTriggered_ = nullptr;};
    inline string getAlertTriggered() const { DARABONBA_PTR_GET_DEFAULT(alertTriggered_, "") };
    inline DescribeBudgetUsageResponseBody& setAlertTriggered(string alertTriggered) { DARABONBA_PTR_SET_VALUE(alertTriggered_, alertTriggered) };


    // dimensionRefId Field Functions 
    bool hasDimensionRefId() const { return this->dimensionRefId_ != nullptr;};
    void deleteDimensionRefId() { this->dimensionRefId_ = nullptr;};
    inline string getDimensionRefId() const { DARABONBA_PTR_GET_DEFAULT(dimensionRefId_, "") };
    inline DescribeBudgetUsageResponseBody& setDimensionRefId(string dimensionRefId) { DARABONBA_PTR_SET_VALUE(dimensionRefId_, dimensionRefId) };


    // dimensionType Field Functions 
    bool hasDimensionType() const { return this->dimensionType_ != nullptr;};
    void deleteDimensionType() { this->dimensionType_ = nullptr;};
    inline string getDimensionType() const { DARABONBA_PTR_GET_DEFAULT(dimensionType_, "") };
    inline DescribeBudgetUsageResponseBody& setDimensionType(string dimensionType) { DARABONBA_PTR_SET_VALUE(dimensionType_, dimensionType) };


    // exceeded Field Functions 
    bool hasExceeded() const { return this->exceeded_ != nullptr;};
    void deleteExceeded() { this->exceeded_ = nullptr;};
    inline string getExceeded() const { DARABONBA_PTR_GET_DEFAULT(exceeded_, "") };
    inline DescribeBudgetUsageResponseBody& setExceeded(string exceeded) { DARABONBA_PTR_SET_VALUE(exceeded_, exceeded) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeBudgetUsageResponseBody& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeBudgetUsageResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // gwClusterId Field Functions 
    bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
    void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
    inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
    inline DescribeBudgetUsageResponseBody& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<DescribeBudgetUsageResponseBody::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<DescribeBudgetUsageResponseBody::Policies>) };
    inline vector<DescribeBudgetUsageResponseBody::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<DescribeBudgetUsageResponseBody::Policies>) };
    inline DescribeBudgetUsageResponseBody& setPolicies(const vector<DescribeBudgetUsageResponseBody::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline DescribeBudgetUsageResponseBody& setPolicies(vector<DescribeBudgetUsageResponseBody::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBudgetUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usedPoints Field Functions 
    bool hasUsedPoints() const { return this->usedPoints_ != nullptr;};
    void deleteUsedPoints() { this->usedPoints_ = nullptr;};
    inline string getUsedPoints() const { DARABONBA_PTR_GET_DEFAULT(usedPoints_, "") };
    inline DescribeBudgetUsageResponseBody& setUsedPoints(string usedPoints) { DARABONBA_PTR_SET_VALUE(usedPoints_, usedPoints) };


    // windowEndTime Field Functions 
    bool hasWindowEndTime() const { return this->windowEndTime_ != nullptr;};
    void deleteWindowEndTime() { this->windowEndTime_ = nullptr;};
    inline string getWindowEndTime() const { DARABONBA_PTR_GET_DEFAULT(windowEndTime_, "") };
    inline DescribeBudgetUsageResponseBody& setWindowEndTime(string windowEndTime) { DARABONBA_PTR_SET_VALUE(windowEndTime_, windowEndTime) };


    // windowStartTime Field Functions 
    bool hasWindowStartTime() const { return this->windowStartTime_ != nullptr;};
    void deleteWindowStartTime() { this->windowStartTime_ = nullptr;};
    inline string getWindowStartTime() const { DARABONBA_PTR_GET_DEFAULT(windowStartTime_, "") };
    inline DescribeBudgetUsageResponseBody& setWindowStartTime(string windowStartTime) { DARABONBA_PTR_SET_VALUE(windowStartTime_, windowStartTime) };


  protected:
    // Indicates whether a budget alert is triggered.
    shared_ptr<string> alertTriggered_ {};
    // The dimension reference ID of the current budget.
    shared_ptr<string> dimensionRefId_ {};
    // The dimension type of the current budget.
    shared_ptr<string> dimensionType_ {};
    // Indicates whether the budget is exceeded.
    shared_ptr<string> exceeded_ {};
    // The creation time of the budget usage record in RFC 3339 UTC format.
    shared_ptr<string> gmtCreated_ {};
    // The last modification time of the budget usage record in RFC 3339 UTC format.
    shared_ptr<string> gmtModified_ {};
    // The gateway instance ID.
    shared_ptr<string> gwClusterId_ {};
    // The list of associated budget policies.
    shared_ptr<vector<DescribeBudgetUsageResponseBody::Policies>> policies_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of budget points used in the current statistical window.
    shared_ptr<string> usedPoints_ {};
    // The end time of the budget statistical window in RFC 3339 UTC format.
    shared_ptr<string> windowEndTime_ {};
    // The start time of the budget statistical window in RFC 3339 UTC format.
    shared_ptr<string> windowStartTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
