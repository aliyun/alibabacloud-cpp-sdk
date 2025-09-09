// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTDETAILRESPONSEBODYOSSOBJECTDETAILRULELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTDETAILRESPONSEBODYOSSOBJECTDETAILRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOssObjectDetailResponseBodyOssObjectDetailRuleListModelTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(ModelTags, modelTags_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(ModelTags, modelTags_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList() = default ;
    DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList(const DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList &) = default ;
    DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList(DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList &&) = default ;
    DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList() = default ;
    DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList& operator=(const DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList &) = default ;
    DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList& operator=(DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryName_ != nullptr
        && this->count_ != nullptr && this->modelTags_ != nullptr && this->riskLevelId_ != nullptr && this->riskLevelName_ != nullptr && this->ruleName_ != nullptr; };
    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // modelTags Field Functions 
    bool hasModelTags() const { return this->modelTags_ != nullptr;};
    void deleteModelTags() { this->modelTags_ = nullptr;};
    inline const vector<Models::DescribeOssObjectDetailResponseBodyOssObjectDetailRuleListModelTags> & modelTags() const { DARABONBA_PTR_GET_CONST(modelTags_, vector<Models::DescribeOssObjectDetailResponseBodyOssObjectDetailRuleListModelTags>) };
    inline vector<Models::DescribeOssObjectDetailResponseBodyOssObjectDetailRuleListModelTags> modelTags() { DARABONBA_PTR_GET(modelTags_, vector<Models::DescribeOssObjectDetailResponseBodyOssObjectDetailRuleListModelTags>) };
    inline DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList& setModelTags(const vector<Models::DescribeOssObjectDetailResponseBodyOssObjectDetailRuleListModelTags> & modelTags) { DARABONBA_PTR_SET_VALUE(modelTags_, modelTags) };
    inline DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList& setModelTags(vector<Models::DescribeOssObjectDetailResponseBodyOssObjectDetailRuleListModelTags> && modelTags) { DARABONBA_PTR_SET_RVALUE(modelTags_, modelTags) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t riskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // riskLevelName Field Functions 
    bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
    void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
    inline string riskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
    inline DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The type of the OSS object.
    std::shared_ptr<string> categoryName_ = nullptr;
    // The number of times that the OSS object hits the sensitive data detection rule.
    std::shared_ptr<int64_t> count_ = nullptr;
    // A list of tags for data that hits the recognition model.
    std::shared_ptr<vector<Models::DescribeOssObjectDetailResponseBodyOssObjectDetailRuleListModelTags>> modelTags_ = nullptr;
    // The ID of the sensitivity level of the OSS object.
    // 
    // *   **1**: No sensitive data is detected.
    // *   **2**: indicates the low sensitivity level.
    // *   **3**: indicates the medium sensitivity level.
    // *   **4**: indicates the high sensitivity level.
    // *   **5**: indicates the highest sensitivity level.
    std::shared_ptr<int64_t> riskLevelId_ = nullptr;
    // The name of the sensitivity level for the OSS object.
    std::shared_ptr<string> riskLevelName_ = nullptr;
    // The name of the sensitive data detection rule.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
