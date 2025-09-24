// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGEDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGEDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSavingsPlansUsageDetailResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeSavingsPlansUsageDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlansUsageDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlansUsageDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSavingsPlansUsageDetailResponseBodyData() = default ;
    DescribeSavingsPlansUsageDetailResponseBodyData(const DescribeSavingsPlansUsageDetailResponseBodyData &) = default ;
    DescribeSavingsPlansUsageDetailResponseBodyData(DescribeSavingsPlansUsageDetailResponseBodyData &&) = default ;
    DescribeSavingsPlansUsageDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlansUsageDetailResponseBodyData() = default ;
    DescribeSavingsPlansUsageDetailResponseBodyData& operator=(const DescribeSavingsPlansUsageDetailResponseBodyData &) = default ;
    DescribeSavingsPlansUsageDetailResponseBodyData& operator=(DescribeSavingsPlansUsageDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->nextToken_ != nullptr && this->totalCount_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::DescribeSavingsPlansUsageDetailResponseBodyDataItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::DescribeSavingsPlansUsageDetailResponseBodyDataItems>) };
    inline vector<Models::DescribeSavingsPlansUsageDetailResponseBodyDataItems> items() { DARABONBA_PTR_GET(items_, vector<Models::DescribeSavingsPlansUsageDetailResponseBodyDataItems>) };
    inline DescribeSavingsPlansUsageDetailResponseBodyData& setItems(const vector<Models::DescribeSavingsPlansUsageDetailResponseBodyDataItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSavingsPlansUsageDetailResponseBodyData& setItems(vector<Models::DescribeSavingsPlansUsageDetailResponseBodyDataItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSavingsPlansUsageDetailResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSavingsPlansUsageDetailResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The data entries.
    std::shared_ptr<vector<Models::DescribeSavingsPlansUsageDetailResponseBodyDataItems>> items_ = nullptr;
    // The token of the next page.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
