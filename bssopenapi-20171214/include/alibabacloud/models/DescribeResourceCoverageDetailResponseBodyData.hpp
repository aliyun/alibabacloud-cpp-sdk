// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCECOVERAGEDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCECOVERAGEDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourceCoverageDetailResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeResourceCoverageDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceCoverageDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceCoverageDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeResourceCoverageDetailResponseBodyData() = default ;
    DescribeResourceCoverageDetailResponseBodyData(const DescribeResourceCoverageDetailResponseBodyData &) = default ;
    DescribeResourceCoverageDetailResponseBodyData(DescribeResourceCoverageDetailResponseBodyData &&) = default ;
    DescribeResourceCoverageDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceCoverageDetailResponseBodyData() = default ;
    DescribeResourceCoverageDetailResponseBodyData& operator=(const DescribeResourceCoverageDetailResponseBodyData &) = default ;
    DescribeResourceCoverageDetailResponseBodyData& operator=(DescribeResourceCoverageDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->totalCount_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::DescribeResourceCoverageDetailResponseBodyDataItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::DescribeResourceCoverageDetailResponseBodyDataItems>) };
    inline vector<Models::DescribeResourceCoverageDetailResponseBodyDataItems> items() { DARABONBA_PTR_GET(items_, vector<Models::DescribeResourceCoverageDetailResponseBodyDataItems>) };
    inline DescribeResourceCoverageDetailResponseBodyData& setItems(const vector<Models::DescribeResourceCoverageDetailResponseBodyDataItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeResourceCoverageDetailResponseBodyData& setItems(vector<Models::DescribeResourceCoverageDetailResponseBodyDataItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeResourceCoverageDetailResponseBodyData& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeResourceCoverageDetailResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeResourceCoverageDetailResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The data entries.
    std::shared_ptr<vector<Models::DescribeResourceCoverageDetailResponseBodyDataItems>> items_ = nullptr;
    // The number of entries returned on the current page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token of the next page.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
