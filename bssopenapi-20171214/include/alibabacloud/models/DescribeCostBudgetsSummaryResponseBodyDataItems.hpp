// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOSTBUDGETSSUMMARYRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOSTBUDGETSSUMMARYRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeCostBudgetsSummaryResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCostBudgetsSummaryResponseBodyDataItems& obj) { 
      DARABONBA_ANY_TO_JSON(Budget, budget_);
      DARABONBA_PTR_TO_JSON(BudgetName, budgetName_);
      DARABONBA_PTR_TO_JSON(BudgetStatus, budgetStatus_);
      DARABONBA_PTR_TO_JSON(BudgetType, budgetType_);
      DARABONBA_ANY_TO_JSON(CalculatedValues, calculatedValues_);
      DARABONBA_ANY_TO_JSON(ConsumePeriod, consumePeriod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCostBudgetsSummaryResponseBodyDataItems& obj) { 
      DARABONBA_ANY_FROM_JSON(Budget, budget_);
      DARABONBA_PTR_FROM_JSON(BudgetName, budgetName_);
      DARABONBA_PTR_FROM_JSON(BudgetStatus, budgetStatus_);
      DARABONBA_PTR_FROM_JSON(BudgetType, budgetType_);
      DARABONBA_ANY_FROM_JSON(CalculatedValues, calculatedValues_);
      DARABONBA_ANY_FROM_JSON(ConsumePeriod, consumePeriod_);
    };
    DescribeCostBudgetsSummaryResponseBodyDataItems() = default ;
    DescribeCostBudgetsSummaryResponseBodyDataItems(const DescribeCostBudgetsSummaryResponseBodyDataItems &) = default ;
    DescribeCostBudgetsSummaryResponseBodyDataItems(DescribeCostBudgetsSummaryResponseBodyDataItems &&) = default ;
    DescribeCostBudgetsSummaryResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCostBudgetsSummaryResponseBodyDataItems() = default ;
    DescribeCostBudgetsSummaryResponseBodyDataItems& operator=(const DescribeCostBudgetsSummaryResponseBodyDataItems &) = default ;
    DescribeCostBudgetsSummaryResponseBodyDataItems& operator=(DescribeCostBudgetsSummaryResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->budget_ != nullptr
        && this->budgetName_ != nullptr && this->budgetStatus_ != nullptr && this->budgetType_ != nullptr && this->calculatedValues_ != nullptr && this->consumePeriod_ != nullptr; };
    // budget Field Functions 
    bool hasBudget() const { return this->budget_ != nullptr;};
    void deleteBudget() { this->budget_ = nullptr;};
    inline     const Darabonba::Json & budget() const { DARABONBA_GET(budget_) };
    Darabonba::Json & budget() { DARABONBA_GET(budget_) };
    inline DescribeCostBudgetsSummaryResponseBodyDataItems& setBudget(const Darabonba::Json & budget) { DARABONBA_SET_VALUE(budget_, budget) };
    inline DescribeCostBudgetsSummaryResponseBodyDataItems& setBudget(Darabonba::Json & budget) { DARABONBA_SET_RVALUE(budget_, budget) };


    // budgetName Field Functions 
    bool hasBudgetName() const { return this->budgetName_ != nullptr;};
    void deleteBudgetName() { this->budgetName_ = nullptr;};
    inline string budgetName() const { DARABONBA_PTR_GET_DEFAULT(budgetName_, "") };
    inline DescribeCostBudgetsSummaryResponseBodyDataItems& setBudgetName(string budgetName) { DARABONBA_PTR_SET_VALUE(budgetName_, budgetName) };


    // budgetStatus Field Functions 
    bool hasBudgetStatus() const { return this->budgetStatus_ != nullptr;};
    void deleteBudgetStatus() { this->budgetStatus_ = nullptr;};
    inline string budgetStatus() const { DARABONBA_PTR_GET_DEFAULT(budgetStatus_, "") };
    inline DescribeCostBudgetsSummaryResponseBodyDataItems& setBudgetStatus(string budgetStatus) { DARABONBA_PTR_SET_VALUE(budgetStatus_, budgetStatus) };


    // budgetType Field Functions 
    bool hasBudgetType() const { return this->budgetType_ != nullptr;};
    void deleteBudgetType() { this->budgetType_ = nullptr;};
    inline string budgetType() const { DARABONBA_PTR_GET_DEFAULT(budgetType_, "") };
    inline DescribeCostBudgetsSummaryResponseBodyDataItems& setBudgetType(string budgetType) { DARABONBA_PTR_SET_VALUE(budgetType_, budgetType) };


    // calculatedValues Field Functions 
    bool hasCalculatedValues() const { return this->calculatedValues_ != nullptr;};
    void deleteCalculatedValues() { this->calculatedValues_ = nullptr;};
    inline     const Darabonba::Json & calculatedValues() const { DARABONBA_GET(calculatedValues_) };
    Darabonba::Json & calculatedValues() { DARABONBA_GET(calculatedValues_) };
    inline DescribeCostBudgetsSummaryResponseBodyDataItems& setCalculatedValues(const Darabonba::Json & calculatedValues) { DARABONBA_SET_VALUE(calculatedValues_, calculatedValues) };
    inline DescribeCostBudgetsSummaryResponseBodyDataItems& setCalculatedValues(Darabonba::Json & calculatedValues) { DARABONBA_SET_RVALUE(calculatedValues_, calculatedValues) };


    // consumePeriod Field Functions 
    bool hasConsumePeriod() const { return this->consumePeriod_ != nullptr;};
    void deleteConsumePeriod() { this->consumePeriod_ = nullptr;};
    inline     const Darabonba::Json & consumePeriod() const { DARABONBA_GET(consumePeriod_) };
    Darabonba::Json & consumePeriod() { DARABONBA_GET(consumePeriod_) };
    inline DescribeCostBudgetsSummaryResponseBodyDataItems& setConsumePeriod(const Darabonba::Json & consumePeriod) { DARABONBA_SET_VALUE(consumePeriod_, consumePeriod) };
    inline DescribeCostBudgetsSummaryResponseBodyDataItems& setConsumePeriod(Darabonba::Json & consumePeriod) { DARABONBA_SET_RVALUE(consumePeriod_, consumePeriod) };


  protected:
    // The information about the budget. The BudgetCycleType parameter indicates the cycle of the budget. Valid values: daily, monthly, quarterly, and yearly. The TotalBudgetAmount parameter indicates the total budget. The BudgetMemo parameter indicates the remarks of the budget.
    Darabonba::Json budget_ = nullptr;
    // The name of the budget.
    std::shared_ptr<string> budgetName_ = nullptr;
    // The status of the budget.
    std::shared_ptr<string> budgetStatus_ = nullptr;
    // The type of the budget.
    std::shared_ptr<string> budgetType_ = nullptr;
    // The information about the estimate-to-actual analysis. The ActualConsumeSum parameter indicates the accumulated actual value. The ActualAddForecastedAmount parameter indicates the sum of accumulated actual value and predicted value. If the BudgetType parameter is set to cost, the sum of actual value and predicted value includes the actual cost incurred from the budget start date to the current date and the predicted cost from the current date to the budget end date. If the BudgetType parameter is set to asset, the sum of actual value and predicted value includes the actual usage or coverage from the budget start date to the budget end date. If the budget end date minus the current date is more than one year, the part that exceeds one year is not included. The ActualAndBudgetComparison parameter indicates the comparison between the actual value and the predicted value. The value of the ActualAndBudgetComparison parameter is calculated based on the following formula: Accumulated actual value/Total budget × 100%.
    Darabonba::Json calculatedValues_ = nullptr;
    // The information about the billing cycle. The ConsumePeriodBegin parameter indicates the start date of the budget. The ConsumePeriodEnd parameter indicates the end date of the budget.
    Darabonba::Json consumePeriod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
