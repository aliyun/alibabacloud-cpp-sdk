// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOSTBUDGETSSUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOSTBUDGETSSUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCostBudgetsSummaryResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeCostBudgetsSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCostBudgetsSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCostBudgetsSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCostBudgetsSummaryResponseBodyData() = default ;
    DescribeCostBudgetsSummaryResponseBodyData(const DescribeCostBudgetsSummaryResponseBodyData &) = default ;
    DescribeCostBudgetsSummaryResponseBodyData(DescribeCostBudgetsSummaryResponseBodyData &&) = default ;
    DescribeCostBudgetsSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCostBudgetsSummaryResponseBodyData() = default ;
    DescribeCostBudgetsSummaryResponseBodyData& operator=(const DescribeCostBudgetsSummaryResponseBodyData &) = default ;
    DescribeCostBudgetsSummaryResponseBodyData& operator=(DescribeCostBudgetsSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostId_ != nullptr
        && this->items_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->totalCount_ != nullptr; };
    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline DescribeCostBudgetsSummaryResponseBodyData& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::DescribeCostBudgetsSummaryResponseBodyDataItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::DescribeCostBudgetsSummaryResponseBodyDataItems>) };
    inline vector<Models::DescribeCostBudgetsSummaryResponseBodyDataItems> items() { DARABONBA_PTR_GET(items_, vector<Models::DescribeCostBudgetsSummaryResponseBodyDataItems>) };
    inline DescribeCostBudgetsSummaryResponseBodyData& setItems(const vector<Models::DescribeCostBudgetsSummaryResponseBodyDataItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeCostBudgetsSummaryResponseBodyData& setItems(vector<Models::DescribeCostBudgetsSummaryResponseBodyDataItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeCostBudgetsSummaryResponseBodyData& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCostBudgetsSummaryResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCostBudgetsSummaryResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The site of the host.
    std::shared_ptr<string> hostId_ = nullptr;
    // The data that is returned.
    std::shared_ptr<vector<Models::DescribeCostBudgetsSummaryResponseBodyDataItems>> items_ = nullptr;
    // The maximum number of entries that are returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used to retrieve the next page
    std::shared_ptr<string> nextToken_ = nullptr;
    // The total number of entries that are returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
