// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTDETAILV2RESPONSEBODYOSSOBJECTDETAILRULELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTDETAILV2RESPONSEBODYOSSOBJECTDETAILRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(ModelTags, modelTags_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(ModelTags, modelTags_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList() = default ;
    DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList(const DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList &) = default ;
    DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList(DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList &&) = default ;
    DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList() = default ;
    DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList& operator=(const DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList &) = default ;
    DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList& operator=(DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList &&) = default ;
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
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // modelTags Field Functions 
    bool hasModelTags() const { return this->modelTags_ != nullptr;};
    void deleteModelTags() { this->modelTags_ = nullptr;};
    inline const vector<Models::DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags> & modelTags() const { DARABONBA_PTR_GET_CONST(modelTags_, vector<Models::DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags>) };
    inline vector<Models::DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags> modelTags() { DARABONBA_PTR_GET(modelTags_, vector<Models::DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags>) };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList& setModelTags(const vector<Models::DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags> & modelTags) { DARABONBA_PTR_SET_VALUE(modelTags_, modelTags) };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList& setModelTags(vector<Models::DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags> && modelTags) { DARABONBA_PTR_SET_RVALUE(modelTags_, modelTags) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t riskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // riskLevelName Field Functions 
    bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
    void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
    inline string riskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The major category of the model.
    std::shared_ptr<string> categoryName_ = nullptr;
    // The number of times the sensitive data recognition rule was hit.
    std::shared_ptr<int64_t> count_ = nullptr;
    // List of data tags.
    std::shared_ptr<vector<Models::DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags>> modelTags_ = nullptr;
    // The risk level ID of the OSS storage object.
    // - **1**: No sensitive data detected.
    // - **2**: Level 1 sensitive data.
    // - **3**: Level 2 sensitive data.
    // - **4**: Level 3 sensitive data.
    // - **5**: Level 4 sensitive data.
    std::shared_ptr<int64_t> riskLevelId_ = nullptr;
    // The risk level name of the OSS storage object.
    std::shared_ptr<string> riskLevelName_ = nullptr;
    // The name of the sensitive data recognition rule that was hit.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
