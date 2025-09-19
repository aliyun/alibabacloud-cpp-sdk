// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEAUTOTAGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEAUTOTAGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateOrUpdateAutoTagRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateAutoTagRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckAll, checkAll_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(RuleDesc, ruleDesc_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(TagContext, tagContext_);
      DARABONBA_PTR_TO_JSON(TagType, tagType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateAutoTagRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckAll, checkAll_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(RuleDesc, ruleDesc_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(TagContext, tagContext_);
      DARABONBA_PTR_FROM_JSON(TagType, tagType_);
    };
    CreateOrUpdateAutoTagRuleRequest() = default ;
    CreateOrUpdateAutoTagRuleRequest(const CreateOrUpdateAutoTagRuleRequest &) = default ;
    CreateOrUpdateAutoTagRuleRequest(CreateOrUpdateAutoTagRuleRequest &&) = default ;
    CreateOrUpdateAutoTagRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateAutoTagRuleRequest() = default ;
    CreateOrUpdateAutoTagRuleRequest& operator=(const CreateOrUpdateAutoTagRuleRequest &) = default ;
    CreateOrUpdateAutoTagRuleRequest& operator=(CreateOrUpdateAutoTagRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkAll_ != nullptr
        && this->expression_ != nullptr && this->ruleDesc_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr && this->tagContext_ != nullptr
        && this->tagType_ != nullptr; };
    // checkAll Field Functions 
    bool hasCheckAll() const { return this->checkAll_ != nullptr;};
    void deleteCheckAll() { this->checkAll_ = nullptr;};
    inline bool checkAll() const { DARABONBA_PTR_GET_DEFAULT(checkAll_, false) };
    inline CreateOrUpdateAutoTagRuleRequest& setCheckAll(bool checkAll) { DARABONBA_PTR_SET_VALUE(checkAll_, checkAll) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline CreateOrUpdateAutoTagRuleRequest& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // ruleDesc Field Functions 
    bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
    void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
    inline string ruleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
    inline CreateOrUpdateAutoTagRuleRequest& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline CreateOrUpdateAutoTagRuleRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateOrUpdateAutoTagRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // tagContext Field Functions 
    bool hasTagContext() const { return this->tagContext_ != nullptr;};
    void deleteTagContext() { this->tagContext_ = nullptr;};
    inline string tagContext() const { DARABONBA_PTR_GET_DEFAULT(tagContext_, "") };
    inline CreateOrUpdateAutoTagRuleRequest& setTagContext(string tagContext) { DARABONBA_PTR_SET_VALUE(tagContext_, tagContext) };


    // tagType Field Functions 
    bool hasTagType() const { return this->tagType_ != nullptr;};
    void deleteTagType() { this->tagType_ = nullptr;};
    inline string tagType() const { DARABONBA_PTR_GET_DEFAULT(tagType_, "") };
    inline CreateOrUpdateAutoTagRuleRequest& setTagType(string tagType) { DARABONBA_PTR_SET_VALUE(tagType_, tagType) };


  protected:
    // Specifies whether to check the rule on the backend. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> checkAll_ = nullptr;
    // The expression of the rule.
    std::shared_ptr<string> expression_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> ruleDesc_ = nullptr;
    // The ID of the rule.
    // 
    // >  You can call the [ListAutoTagRules](~~ListAutoTagRules~~) operation to query the ID.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The name of the rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The tag specified by the operation type of the rule.
    // 
    // *   If TagType is set to group, set this parameter to {"groupId":XXX}. XXX specifies the ID of the group. You can call the [DescribeGroupStruct](~~DescribeGroupStruct~~) operation to query the ID.
    // *   If TagType is set to tag, set this parameter to {"tagId":XXX}. XXX specifies the ID of the tag. You can call the [DescribeGroupedTags](~~DescribeGroupedTags~~) operation to query the ID.
    std::shared_ptr<string> tagContext_ = nullptr;
    // The operation type of the rule. Valid values:
    // 
    // *   **group**
    // *   **tag**
    // 
    // This parameter is required.
    std::shared_ptr<string> tagType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
