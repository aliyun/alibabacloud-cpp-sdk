// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOSTBUDGETSSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOSTBUDGETSSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeCostBudgetsSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCostBudgetsSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BudgetName, budgetName_);
      DARABONBA_PTR_TO_JSON(BudgetStatus, budgetStatus_);
      DARABONBA_PTR_TO_JSON(BudgetType, budgetType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCostBudgetsSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BudgetName, budgetName_);
      DARABONBA_PTR_FROM_JSON(BudgetStatus, budgetStatus_);
      DARABONBA_PTR_FROM_JSON(BudgetType, budgetType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    DescribeCostBudgetsSummaryRequest() = default ;
    DescribeCostBudgetsSummaryRequest(const DescribeCostBudgetsSummaryRequest &) = default ;
    DescribeCostBudgetsSummaryRequest(DescribeCostBudgetsSummaryRequest &&) = default ;
    DescribeCostBudgetsSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCostBudgetsSummaryRequest() = default ;
    DescribeCostBudgetsSummaryRequest& operator=(const DescribeCostBudgetsSummaryRequest &) = default ;
    DescribeCostBudgetsSummaryRequest& operator=(DescribeCostBudgetsSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->budgetName_ != nullptr
        && this->budgetStatus_ != nullptr && this->budgetType_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr; };
    // budgetName Field Functions 
    bool hasBudgetName() const { return this->budgetName_ != nullptr;};
    void deleteBudgetName() { this->budgetName_ = nullptr;};
    inline string budgetName() const { DARABONBA_PTR_GET_DEFAULT(budgetName_, "") };
    inline DescribeCostBudgetsSummaryRequest& setBudgetName(string budgetName) { DARABONBA_PTR_SET_VALUE(budgetName_, budgetName) };


    // budgetStatus Field Functions 
    bool hasBudgetStatus() const { return this->budgetStatus_ != nullptr;};
    void deleteBudgetStatus() { this->budgetStatus_ = nullptr;};
    inline string budgetStatus() const { DARABONBA_PTR_GET_DEFAULT(budgetStatus_, "") };
    inline DescribeCostBudgetsSummaryRequest& setBudgetStatus(string budgetStatus) { DARABONBA_PTR_SET_VALUE(budgetStatus_, budgetStatus) };


    // budgetType Field Functions 
    bool hasBudgetType() const { return this->budgetType_ != nullptr;};
    void deleteBudgetType() { this->budgetType_ = nullptr;};
    inline string budgetType() const { DARABONBA_PTR_GET_DEFAULT(budgetType_, "") };
    inline DescribeCostBudgetsSummaryRequest& setBudgetType(string budgetType) { DARABONBA_PTR_SET_VALUE(budgetType_, budgetType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeCostBudgetsSummaryRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCostBudgetsSummaryRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The name of the budget. Fuzzy match is supported.
    std::shared_ptr<string> budgetName_ = nullptr;
    // The status of the budget. Valid values: overdue and notOverdue. A value of overdue specifies to filter expired budgets. A value of notOverdue specifies to filter budgets that do not expire. By default, if you do not specify this parameter, information about all budgets is to be returned.
    std::shared_ptr<string> budgetStatus_ = nullptr;
    // The type of the budget. Valid values: cost, byquantity, and asset. A value of cost specifies to filter expense budgets. A value of byquantity specifies to filter budgets calculated based on the resource usage. A value of asset specifies to filter usage or coverage budgets. By default, information about all budgets is returned if you do not specify this parameter.
    std::shared_ptr<string> budgetType_ = nullptr;
    // The number of entries to return on each page. Default value: 10. Maximum value: 10. Minimum value: 1.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The position in which the query starts. You must set this parameter to null or the token that is obtained from the previous query. Otherwise, an error is returned. If you set the NextToken parameter to null, the query starts from the beginning. The default value is null.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
