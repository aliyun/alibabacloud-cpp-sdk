// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBUDGETPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBUDGETPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateBudgetPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBudgetPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertThresholdPct, alertThresholdPct_);
      DARABONBA_PTR_TO_JSON(BudgetDimensionRefId, budgetDimensionRefId_);
      DARABONBA_PTR_TO_JSON(BudgetPoints, budgetPoints_);
      DARABONBA_PTR_TO_JSON(BudgetType, budgetType_);
      DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResetDayOfMonth, resetDayOfMonth_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBudgetPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertThresholdPct, alertThresholdPct_);
      DARABONBA_PTR_FROM_JSON(BudgetDimensionRefId, budgetDimensionRefId_);
      DARABONBA_PTR_FROM_JSON(BudgetPoints, budgetPoints_);
      DARABONBA_PTR_FROM_JSON(BudgetType, budgetType_);
      DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResetDayOfMonth, resetDayOfMonth_);
    };
    CreateBudgetPolicyRequest() = default ;
    CreateBudgetPolicyRequest(const CreateBudgetPolicyRequest &) = default ;
    CreateBudgetPolicyRequest(CreateBudgetPolicyRequest &&) = default ;
    CreateBudgetPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBudgetPolicyRequest() = default ;
    CreateBudgetPolicyRequest& operator=(const CreateBudgetPolicyRequest &) = default ;
    CreateBudgetPolicyRequest& operator=(CreateBudgetPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertThresholdPct_ == nullptr
        && this->budgetDimensionRefId_ == nullptr && this->budgetPoints_ == nullptr && this->budgetType_ == nullptr && this->gwClusterId_ == nullptr && this->regionId_ == nullptr
        && this->resetDayOfMonth_ == nullptr; };
    // alertThresholdPct Field Functions 
    bool hasAlertThresholdPct() const { return this->alertThresholdPct_ != nullptr;};
    void deleteAlertThresholdPct() { this->alertThresholdPct_ = nullptr;};
    inline string getAlertThresholdPct() const { DARABONBA_PTR_GET_DEFAULT(alertThresholdPct_, "") };
    inline CreateBudgetPolicyRequest& setAlertThresholdPct(string alertThresholdPct) { DARABONBA_PTR_SET_VALUE(alertThresholdPct_, alertThresholdPct) };


    // budgetDimensionRefId Field Functions 
    bool hasBudgetDimensionRefId() const { return this->budgetDimensionRefId_ != nullptr;};
    void deleteBudgetDimensionRefId() { this->budgetDimensionRefId_ = nullptr;};
    inline string getBudgetDimensionRefId() const { DARABONBA_PTR_GET_DEFAULT(budgetDimensionRefId_, "") };
    inline CreateBudgetPolicyRequest& setBudgetDimensionRefId(string budgetDimensionRefId) { DARABONBA_PTR_SET_VALUE(budgetDimensionRefId_, budgetDimensionRefId) };


    // budgetPoints Field Functions 
    bool hasBudgetPoints() const { return this->budgetPoints_ != nullptr;};
    void deleteBudgetPoints() { this->budgetPoints_ = nullptr;};
    inline string getBudgetPoints() const { DARABONBA_PTR_GET_DEFAULT(budgetPoints_, "") };
    inline CreateBudgetPolicyRequest& setBudgetPoints(string budgetPoints) { DARABONBA_PTR_SET_VALUE(budgetPoints_, budgetPoints) };


    // budgetType Field Functions 
    bool hasBudgetType() const { return this->budgetType_ != nullptr;};
    void deleteBudgetType() { this->budgetType_ = nullptr;};
    inline string getBudgetType() const { DARABONBA_PTR_GET_DEFAULT(budgetType_, "") };
    inline CreateBudgetPolicyRequest& setBudgetType(string budgetType) { DARABONBA_PTR_SET_VALUE(budgetType_, budgetType) };


    // gwClusterId Field Functions 
    bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
    void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
    inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
    inline CreateBudgetPolicyRequest& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateBudgetPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resetDayOfMonth Field Functions 
    bool hasResetDayOfMonth() const { return this->resetDayOfMonth_ != nullptr;};
    void deleteResetDayOfMonth() { this->resetDayOfMonth_ = nullptr;};
    inline string getResetDayOfMonth() const { DARABONBA_PTR_GET_DEFAULT(resetDayOfMonth_, "") };
    inline CreateBudgetPolicyRequest& setResetDayOfMonth(string resetDayOfMonth) { DARABONBA_PTR_SET_VALUE(resetDayOfMonth_, resetDayOfMonth) };


  protected:
    shared_ptr<string> alertThresholdPct_ {};
    shared_ptr<string> budgetDimensionRefId_ {};
    // This parameter is required.
    shared_ptr<string> budgetPoints_ {};
    // This parameter is required.
    shared_ptr<string> budgetType_ {};
    // This parameter is required.
    shared_ptr<string> gwClusterId_ {};
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> resetDayOfMonth_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
