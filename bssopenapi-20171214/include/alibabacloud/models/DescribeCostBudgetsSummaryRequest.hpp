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
    virtual bool empty() const override { return this->budgetName_ == nullptr
        && this->budgetStatus_ == nullptr && this->budgetType_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // budgetName Field Functions 
    bool hasBudgetName() const { return this->budgetName_ != nullptr;};
    void deleteBudgetName() { this->budgetName_ = nullptr;};
    inline string getBudgetName() const { DARABONBA_PTR_GET_DEFAULT(budgetName_, "") };
    inline DescribeCostBudgetsSummaryRequest& setBudgetName(string budgetName) { DARABONBA_PTR_SET_VALUE(budgetName_, budgetName) };


    // budgetStatus Field Functions 
    bool hasBudgetStatus() const { return this->budgetStatus_ != nullptr;};
    void deleteBudgetStatus() { this->budgetStatus_ = nullptr;};
    inline string getBudgetStatus() const { DARABONBA_PTR_GET_DEFAULT(budgetStatus_, "") };
    inline DescribeCostBudgetsSummaryRequest& setBudgetStatus(string budgetStatus) { DARABONBA_PTR_SET_VALUE(budgetStatus_, budgetStatus) };


    // budgetType Field Functions 
    bool hasBudgetType() const { return this->budgetType_ != nullptr;};
    void deleteBudgetType() { this->budgetType_ = nullptr;};
    inline string getBudgetType() const { DARABONBA_PTR_GET_DEFAULT(budgetType_, "") };
    inline DescribeCostBudgetsSummaryRequest& setBudgetType(string budgetType) { DARABONBA_PTR_SET_VALUE(budgetType_, budgetType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeCostBudgetsSummaryRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCostBudgetsSummaryRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The name of the budget. Supports fuzzy search.
    shared_ptr<string> budgetName_ {};
    // The status of the budget. If you do not specify this parameter, budgets in all statuses are returned.
    shared_ptr<string> budgetStatus_ {};
    // The type of the budget. If you do not specify this parameter, budgets of all types are returned.
    shared_ptr<string> budgetType_ {};
    // The maximum number of items to return. Valid values: 1 to 10. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results. Set this parameter to the NextToken value that is returned in the response to the previous request. If you do not specify this parameter, the query starts from the first page.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
