// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBUDGETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBUDGETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class UpdateBudgetShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBudgetShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BudgetName, budgetName_);
      DARABONBA_PTR_TO_JSON(BudgetType, budgetType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CycleEndPeriod, cycleEndPeriod_);
      DARABONBA_PTR_TO_JSON(CycleQuota, cycleQuotaShrink_);
      DARABONBA_PTR_TO_JSON(CycleStartPeriod, cycleStartPeriod_);
      DARABONBA_PTR_TO_JSON(CycleType, cycleType_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(OriginalBudgetName, originalBudgetName_);
      DARABONBA_PTR_TO_JSON(QueryFilter, queryFilterShrink_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_TO_JSON(WarnConfs, warnConfsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBudgetShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BudgetName, budgetName_);
      DARABONBA_PTR_FROM_JSON(BudgetType, budgetType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CycleEndPeriod, cycleEndPeriod_);
      DARABONBA_PTR_FROM_JSON(CycleQuota, cycleQuotaShrink_);
      DARABONBA_PTR_FROM_JSON(CycleStartPeriod, cycleStartPeriod_);
      DARABONBA_PTR_FROM_JSON(CycleType, cycleType_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(OriginalBudgetName, originalBudgetName_);
      DARABONBA_PTR_FROM_JSON(QueryFilter, queryFilterShrink_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_FROM_JSON(WarnConfs, warnConfsShrink_);
    };
    UpdateBudgetShrinkRequest() = default ;
    UpdateBudgetShrinkRequest(const UpdateBudgetShrinkRequest &) = default ;
    UpdateBudgetShrinkRequest(UpdateBudgetShrinkRequest &&) = default ;
    UpdateBudgetShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBudgetShrinkRequest() = default ;
    UpdateBudgetShrinkRequest& operator=(const UpdateBudgetShrinkRequest &) = default ;
    UpdateBudgetShrinkRequest& operator=(UpdateBudgetShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->budgetName_ == nullptr
        && this->budgetType_ == nullptr && this->comment_ == nullptr && this->cycleEndPeriod_ == nullptr && this->cycleQuotaShrink_ == nullptr && this->cycleStartPeriod_ == nullptr
        && this->cycleType_ == nullptr && this->ecIdAccountIdsShrink_ == nullptr && this->metric_ == nullptr && this->nbid_ == nullptr && this->originalBudgetName_ == nullptr
        && this->queryFilterShrink_ == nullptr && this->quota_ == nullptr && this->quotaType_ == nullptr && this->warnConfsShrink_ == nullptr; };
    // budgetName Field Functions 
    bool hasBudgetName() const { return this->budgetName_ != nullptr;};
    void deleteBudgetName() { this->budgetName_ = nullptr;};
    inline string getBudgetName() const { DARABONBA_PTR_GET_DEFAULT(budgetName_, "") };
    inline UpdateBudgetShrinkRequest& setBudgetName(string budgetName) { DARABONBA_PTR_SET_VALUE(budgetName_, budgetName) };


    // budgetType Field Functions 
    bool hasBudgetType() const { return this->budgetType_ != nullptr;};
    void deleteBudgetType() { this->budgetType_ = nullptr;};
    inline string getBudgetType() const { DARABONBA_PTR_GET_DEFAULT(budgetType_, "") };
    inline UpdateBudgetShrinkRequest& setBudgetType(string budgetType) { DARABONBA_PTR_SET_VALUE(budgetType_, budgetType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateBudgetShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // cycleEndPeriod Field Functions 
    bool hasCycleEndPeriod() const { return this->cycleEndPeriod_ != nullptr;};
    void deleteCycleEndPeriod() { this->cycleEndPeriod_ = nullptr;};
    inline string getCycleEndPeriod() const { DARABONBA_PTR_GET_DEFAULT(cycleEndPeriod_, "") };
    inline UpdateBudgetShrinkRequest& setCycleEndPeriod(string cycleEndPeriod) { DARABONBA_PTR_SET_VALUE(cycleEndPeriod_, cycleEndPeriod) };


    // cycleQuotaShrink Field Functions 
    bool hasCycleQuotaShrink() const { return this->cycleQuotaShrink_ != nullptr;};
    void deleteCycleQuotaShrink() { this->cycleQuotaShrink_ = nullptr;};
    inline string getCycleQuotaShrink() const { DARABONBA_PTR_GET_DEFAULT(cycleQuotaShrink_, "") };
    inline UpdateBudgetShrinkRequest& setCycleQuotaShrink(string cycleQuotaShrink) { DARABONBA_PTR_SET_VALUE(cycleQuotaShrink_, cycleQuotaShrink) };


    // cycleStartPeriod Field Functions 
    bool hasCycleStartPeriod() const { return this->cycleStartPeriod_ != nullptr;};
    void deleteCycleStartPeriod() { this->cycleStartPeriod_ = nullptr;};
    inline string getCycleStartPeriod() const { DARABONBA_PTR_GET_DEFAULT(cycleStartPeriod_, "") };
    inline UpdateBudgetShrinkRequest& setCycleStartPeriod(string cycleStartPeriod) { DARABONBA_PTR_SET_VALUE(cycleStartPeriod_, cycleStartPeriod) };


    // cycleType Field Functions 
    bool hasCycleType() const { return this->cycleType_ != nullptr;};
    void deleteCycleType() { this->cycleType_ = nullptr;};
    inline string getCycleType() const { DARABONBA_PTR_GET_DEFAULT(cycleType_, "") };
    inline UpdateBudgetShrinkRequest& setCycleType(string cycleType) { DARABONBA_PTR_SET_VALUE(cycleType_, cycleType) };


    // ecIdAccountIdsShrink Field Functions 
    bool hasEcIdAccountIdsShrink() const { return this->ecIdAccountIdsShrink_ != nullptr;};
    void deleteEcIdAccountIdsShrink() { this->ecIdAccountIdsShrink_ = nullptr;};
    inline string getEcIdAccountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(ecIdAccountIdsShrink_, "") };
    inline UpdateBudgetShrinkRequest& setEcIdAccountIdsShrink(string ecIdAccountIdsShrink) { DARABONBA_PTR_SET_VALUE(ecIdAccountIdsShrink_, ecIdAccountIdsShrink) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline UpdateBudgetShrinkRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline UpdateBudgetShrinkRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // originalBudgetName Field Functions 
    bool hasOriginalBudgetName() const { return this->originalBudgetName_ != nullptr;};
    void deleteOriginalBudgetName() { this->originalBudgetName_ = nullptr;};
    inline string getOriginalBudgetName() const { DARABONBA_PTR_GET_DEFAULT(originalBudgetName_, "") };
    inline UpdateBudgetShrinkRequest& setOriginalBudgetName(string originalBudgetName) { DARABONBA_PTR_SET_VALUE(originalBudgetName_, originalBudgetName) };


    // queryFilterShrink Field Functions 
    bool hasQueryFilterShrink() const { return this->queryFilterShrink_ != nullptr;};
    void deleteQueryFilterShrink() { this->queryFilterShrink_ = nullptr;};
    inline string getQueryFilterShrink() const { DARABONBA_PTR_GET_DEFAULT(queryFilterShrink_, "") };
    inline UpdateBudgetShrinkRequest& setQueryFilterShrink(string queryFilterShrink) { DARABONBA_PTR_SET_VALUE(queryFilterShrink_, queryFilterShrink) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline string getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, "") };
    inline UpdateBudgetShrinkRequest& setQuota(string quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // quotaType Field Functions 
    bool hasQuotaType() const { return this->quotaType_ != nullptr;};
    void deleteQuotaType() { this->quotaType_ = nullptr;};
    inline string getQuotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
    inline UpdateBudgetShrinkRequest& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


    // warnConfsShrink Field Functions 
    bool hasWarnConfsShrink() const { return this->warnConfsShrink_ != nullptr;};
    void deleteWarnConfsShrink() { this->warnConfsShrink_ = nullptr;};
    inline string getWarnConfsShrink() const { DARABONBA_PTR_GET_DEFAULT(warnConfsShrink_, "") };
    inline UpdateBudgetShrinkRequest& setWarnConfsShrink(string warnConfsShrink) { DARABONBA_PTR_SET_VALUE(warnConfsShrink_, warnConfsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> budgetName_ {};
    // This parameter is required.
    shared_ptr<string> budgetType_ {};
    shared_ptr<string> comment_ {};
    // This parameter is required.
    shared_ptr<string> cycleEndPeriod_ {};
    shared_ptr<string> cycleQuotaShrink_ {};
    // This parameter is required.
    shared_ptr<string> cycleStartPeriod_ {};
    // This parameter is required.
    shared_ptr<string> cycleType_ {};
    shared_ptr<string> ecIdAccountIdsShrink_ {};
    // This parameter is required.
    shared_ptr<string> metric_ {};
    shared_ptr<string> nbid_ {};
    // This parameter is required.
    shared_ptr<string> originalBudgetName_ {};
    shared_ptr<string> queryFilterShrink_ {};
    shared_ptr<string> quota_ {};
    // This parameter is required.
    shared_ptr<string> quotaType_ {};
    shared_ptr<string> warnConfsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
