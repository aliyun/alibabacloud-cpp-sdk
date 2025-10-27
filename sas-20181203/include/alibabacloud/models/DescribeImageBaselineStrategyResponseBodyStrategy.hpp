// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINESTRATEGYRESPONSEBODYSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINESTRATEGYRESPONSEBODYSTRATEGY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBaselineStrategyResponseBodyStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineStrategyResponseBodyStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineItem, baselineItem_);
      DARABONBA_PTR_TO_JSON(BaselineItemList, baselineItemList_);
      DARABONBA_PTR_TO_JSON(SelectedItemCount, selectedItemCount_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(TotalItemCount, totalItemCount_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineStrategyResponseBodyStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineItem, baselineItem_);
      DARABONBA_PTR_FROM_JSON(BaselineItemList, baselineItemList_);
      DARABONBA_PTR_FROM_JSON(SelectedItemCount, selectedItemCount_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(TotalItemCount, totalItemCount_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeImageBaselineStrategyResponseBodyStrategy() = default ;
    DescribeImageBaselineStrategyResponseBodyStrategy(const DescribeImageBaselineStrategyResponseBodyStrategy &) = default ;
    DescribeImageBaselineStrategyResponseBodyStrategy(DescribeImageBaselineStrategyResponseBodyStrategy &&) = default ;
    DescribeImageBaselineStrategyResponseBodyStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineStrategyResponseBodyStrategy() = default ;
    DescribeImageBaselineStrategyResponseBodyStrategy& operator=(const DescribeImageBaselineStrategyResponseBodyStrategy &) = default ;
    DescribeImageBaselineStrategyResponseBodyStrategy& operator=(DescribeImageBaselineStrategyResponseBodyStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineItem_ == nullptr
        && return this->baselineItemList_ == nullptr && return this->selectedItemCount_ == nullptr && return this->strategyId_ == nullptr && return this->strategyName_ == nullptr && return this->totalItemCount_ == nullptr
        && return this->type_ == nullptr; };
    // baselineItem Field Functions 
    bool hasBaselineItem() const { return this->baselineItem_ != nullptr;};
    void deleteBaselineItem() { this->baselineItem_ = nullptr;};
    inline string baselineItem() const { DARABONBA_PTR_GET_DEFAULT(baselineItem_, "") };
    inline DescribeImageBaselineStrategyResponseBodyStrategy& setBaselineItem(string baselineItem) { DARABONBA_PTR_SET_VALUE(baselineItem_, baselineItem) };


    // baselineItemList Field Functions 
    bool hasBaselineItemList() const { return this->baselineItemList_ != nullptr;};
    void deleteBaselineItemList() { this->baselineItemList_ = nullptr;};
    inline const vector<Models::DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList> & baselineItemList() const { DARABONBA_PTR_GET_CONST(baselineItemList_, vector<Models::DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList>) };
    inline vector<Models::DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList> baselineItemList() { DARABONBA_PTR_GET(baselineItemList_, vector<Models::DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList>) };
    inline DescribeImageBaselineStrategyResponseBodyStrategy& setBaselineItemList(const vector<Models::DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList> & baselineItemList) { DARABONBA_PTR_SET_VALUE(baselineItemList_, baselineItemList) };
    inline DescribeImageBaselineStrategyResponseBodyStrategy& setBaselineItemList(vector<Models::DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList> && baselineItemList) { DARABONBA_PTR_SET_RVALUE(baselineItemList_, baselineItemList) };


    // selectedItemCount Field Functions 
    bool hasSelectedItemCount() const { return this->selectedItemCount_ != nullptr;};
    void deleteSelectedItemCount() { this->selectedItemCount_ = nullptr;};
    inline int32_t selectedItemCount() const { DARABONBA_PTR_GET_DEFAULT(selectedItemCount_, 0) };
    inline DescribeImageBaselineStrategyResponseBodyStrategy& setSelectedItemCount(int32_t selectedItemCount) { DARABONBA_PTR_SET_VALUE(selectedItemCount_, selectedItemCount) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline DescribeImageBaselineStrategyResponseBodyStrategy& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline DescribeImageBaselineStrategyResponseBodyStrategy& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // totalItemCount Field Functions 
    bool hasTotalItemCount() const { return this->totalItemCount_ != nullptr;};
    void deleteTotalItemCount() { this->totalItemCount_ = nullptr;};
    inline int32_t totalItemCount() const { DARABONBA_PTR_GET_DEFAULT(totalItemCount_, 0) };
    inline DescribeImageBaselineStrategyResponseBodyStrategy& setTotalItemCount(int32_t totalItemCount) { DARABONBA_PTR_SET_VALUE(totalItemCount_, totalItemCount) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeImageBaselineStrategyResponseBodyStrategy& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The baseline check policy for agentless detection.
    std::shared_ptr<string> baselineItem_ = nullptr;
    // An array that contains the baselines.
    std::shared_ptr<vector<Models::DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList>> baselineItemList_ = nullptr;
    // The number of selected baseline check items.
    std::shared_ptr<int32_t> selectedItemCount_ = nullptr;
    // The ID of the baseline check policy.
    std::shared_ptr<int64_t> strategyId_ = nullptr;
    // The name of the baseline check policy.
    std::shared_ptr<string> strategyName_ = nullptr;
    // The total number of baseline check items.
    std::shared_ptr<int32_t> totalItemCount_ = nullptr;
    // The type of the baseline check policy. Valid values:
    // 
    // *   **default**: the default policy
    // *   **full**: a policy that uses all baselines
    // *   **normal**: a policy that uses general baselines
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
