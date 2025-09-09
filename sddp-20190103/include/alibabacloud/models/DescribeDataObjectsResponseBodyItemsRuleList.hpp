// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAOBJECTSRESPONSEBODYITEMSRULELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAOBJECTSRESPONSEBODYITEMSRULELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataObjectsResponseBodyItemsRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataObjectsResponseBodyItemsRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
      DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataObjectsResponseBodyItemsRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
      DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    DescribeDataObjectsResponseBodyItemsRuleList() = default ;
    DescribeDataObjectsResponseBodyItemsRuleList(const DescribeDataObjectsResponseBodyItemsRuleList &) = default ;
    DescribeDataObjectsResponseBodyItemsRuleList(DescribeDataObjectsResponseBodyItemsRuleList &&) = default ;
    DescribeDataObjectsResponseBodyItemsRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataObjectsResponseBodyItemsRuleList() = default ;
    DescribeDataObjectsResponseBodyItemsRuleList& operator=(const DescribeDataObjectsResponseBodyItemsRuleList &) = default ;
    DescribeDataObjectsResponseBodyItemsRuleList& operator=(DescribeDataObjectsResponseBodyItemsRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->riskLevelId_ != nullptr
        && this->riskLevelName_ != nullptr && this->ruleCount_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr; };
    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t riskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeDataObjectsResponseBodyItemsRuleList& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // riskLevelName Field Functions 
    bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
    void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
    inline string riskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
    inline DescribeDataObjectsResponseBodyItemsRuleList& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


    // ruleCount Field Functions 
    bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
    void deleteRuleCount() { this->ruleCount_ = nullptr;};
    inline int32_t ruleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
    inline DescribeDataObjectsResponseBodyItemsRuleList& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeDataObjectsResponseBodyItemsRuleList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeDataObjectsResponseBodyItemsRuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // Risk level ID for sensitive data identification rules. Values:
    // - **1**: N/A: No sensitive data identified.
    // - **2**: S1: Level 1 sensitive data.
    // - **3**: S2: Level 2 sensitive data.
    // - **4**: S3: Level 3 sensitive data.
    // - **5**: S4: Level 4 sensitive data.
    std::shared_ptr<int64_t> riskLevelId_ = nullptr;
    // Risk level name for the data asset table. Values:
    // - **N/A**: No sensitive data identified.
    // - **S1**: Level 1 sensitive data.
    // - **S2**: Level 2 sensitive data.
    // - **S3**: Level 3 sensitive data.
    // - **S4**: Level 4 sensitive data.
    std::shared_ptr<string> riskLevelName_ = nullptr;
    // Number of matched identification models.
    std::shared_ptr<int32_t> ruleCount_ = nullptr;
    // Identification model ID.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // Identification model name.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
