// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSCOVERAGEDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSCOVERAGEDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSavingsPlansCoverageDetailResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeSavingsPlansCoverageDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlansCoverageDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlansCoverageDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSavingsPlansCoverageDetailResponseBodyData() = default ;
    DescribeSavingsPlansCoverageDetailResponseBodyData(const DescribeSavingsPlansCoverageDetailResponseBodyData &) = default ;
    DescribeSavingsPlansCoverageDetailResponseBodyData(DescribeSavingsPlansCoverageDetailResponseBodyData &&) = default ;
    DescribeSavingsPlansCoverageDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlansCoverageDetailResponseBodyData() = default ;
    DescribeSavingsPlansCoverageDetailResponseBodyData& operator=(const DescribeSavingsPlansCoverageDetailResponseBodyData &) = default ;
    DescribeSavingsPlansCoverageDetailResponseBodyData& operator=(DescribeSavingsPlansCoverageDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->nextToken_ != nullptr && this->totalCount_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::DescribeSavingsPlansCoverageDetailResponseBodyDataItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::DescribeSavingsPlansCoverageDetailResponseBodyDataItems>) };
    inline vector<Models::DescribeSavingsPlansCoverageDetailResponseBodyDataItems> items() { DARABONBA_PTR_GET(items_, vector<Models::DescribeSavingsPlansCoverageDetailResponseBodyDataItems>) };
    inline DescribeSavingsPlansCoverageDetailResponseBodyData& setItems(const vector<Models::DescribeSavingsPlansCoverageDetailResponseBodyDataItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSavingsPlansCoverageDetailResponseBodyData& setItems(vector<Models::DescribeSavingsPlansCoverageDetailResponseBodyDataItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSavingsPlansCoverageDetailResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSavingsPlansCoverageDetailResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The data entries.
    std::shared_ptr<vector<Models::DescribeSavingsPlansCoverageDetailResponseBodyDataItems>> items_ = nullptr;
    // The token of the next page.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
