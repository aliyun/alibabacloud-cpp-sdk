// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTAMORTIZEDCOSTBYCONSUMEPERIODRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTAMORTIZEDCOSTBYCONSUMEPERIODRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProductAmortizedCostByConsumePeriodResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeProductAmortizedCostByConsumePeriodResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductAmortizedCostByConsumePeriodResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountID, accountID_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductAmortizedCostByConsumePeriodResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountID, accountID_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeProductAmortizedCostByConsumePeriodResponseBodyData() = default ;
    DescribeProductAmortizedCostByConsumePeriodResponseBodyData(const DescribeProductAmortizedCostByConsumePeriodResponseBodyData &) = default ;
    DescribeProductAmortizedCostByConsumePeriodResponseBodyData(DescribeProductAmortizedCostByConsumePeriodResponseBodyData &&) = default ;
    DescribeProductAmortizedCostByConsumePeriodResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductAmortizedCostByConsumePeriodResponseBodyData() = default ;
    DescribeProductAmortizedCostByConsumePeriodResponseBodyData& operator=(const DescribeProductAmortizedCostByConsumePeriodResponseBodyData &) = default ;
    DescribeProductAmortizedCostByConsumePeriodResponseBodyData& operator=(DescribeProductAmortizedCostByConsumePeriodResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountID_ != nullptr
        && this->accountName_ != nullptr && this->items_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->totalCount_ != nullptr; };
    // accountID Field Functions 
    bool hasAccountID() const { return this->accountID_ != nullptr;};
    void deleteAccountID() { this->accountID_ = nullptr;};
    inline string accountID() const { DARABONBA_PTR_GET_DEFAULT(accountID_, "") };
    inline DescribeProductAmortizedCostByConsumePeriodResponseBodyData& setAccountID(string accountID) { DARABONBA_PTR_SET_VALUE(accountID_, accountID) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeProductAmortizedCostByConsumePeriodResponseBodyData& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::DescribeProductAmortizedCostByConsumePeriodResponseBodyDataItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::DescribeProductAmortizedCostByConsumePeriodResponseBodyDataItems>) };
    inline vector<Models::DescribeProductAmortizedCostByConsumePeriodResponseBodyDataItems> items() { DARABONBA_PTR_GET(items_, vector<Models::DescribeProductAmortizedCostByConsumePeriodResponseBodyDataItems>) };
    inline DescribeProductAmortizedCostByConsumePeriodResponseBodyData& setItems(const vector<Models::DescribeProductAmortizedCostByConsumePeriodResponseBodyDataItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeProductAmortizedCostByConsumePeriodResponseBodyData& setItems(vector<Models::DescribeProductAmortizedCostByConsumePeriodResponseBodyDataItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeProductAmortizedCostByConsumePeriodResponseBodyData& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeProductAmortizedCostByConsumePeriodResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeProductAmortizedCostByConsumePeriodResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> accountID_ = nullptr;
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<vector<Models::DescribeProductAmortizedCostByConsumePeriodResponseBodyDataItems>> items_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
