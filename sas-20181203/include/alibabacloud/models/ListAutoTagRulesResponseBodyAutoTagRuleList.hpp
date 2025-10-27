// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOTAGRULESRESPONSEBODYAUTOTAGRULELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOTAGRULESRESPONSEBODYAUTOTAGRULELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAutoTagRulesResponseBodyAutoTagRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoTagRulesResponseBodyAutoTagRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifiedTimestamp, modifiedTimestamp_);
      DARABONBA_PTR_TO_JSON(RuleDesc, ruleDesc_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(TagContext, tagContext_);
      DARABONBA_PTR_TO_JSON(TagType, tagType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoTagRulesResponseBodyAutoTagRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifiedTimestamp, modifiedTimestamp_);
      DARABONBA_PTR_FROM_JSON(RuleDesc, ruleDesc_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(TagContext, tagContext_);
      DARABONBA_PTR_FROM_JSON(TagType, tagType_);
    };
    ListAutoTagRulesResponseBodyAutoTagRuleList() = default ;
    ListAutoTagRulesResponseBodyAutoTagRuleList(const ListAutoTagRulesResponseBodyAutoTagRuleList &) = default ;
    ListAutoTagRulesResponseBodyAutoTagRuleList(ListAutoTagRulesResponseBodyAutoTagRuleList &&) = default ;
    ListAutoTagRulesResponseBodyAutoTagRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoTagRulesResponseBodyAutoTagRuleList() = default ;
    ListAutoTagRulesResponseBodyAutoTagRuleList& operator=(const ListAutoTagRulesResponseBodyAutoTagRuleList &) = default ;
    ListAutoTagRulesResponseBodyAutoTagRuleList& operator=(ListAutoTagRulesResponseBodyAutoTagRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->createTimestamp_ == nullptr && return this->expression_ == nullptr && return this->id_ == nullptr && return this->modifiedTimestamp_ == nullptr && return this->ruleDesc_ == nullptr
        && return this->ruleName_ == nullptr && return this->tagContext_ == nullptr && return this->tagType_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline ListAutoTagRulesResponseBodyAutoTagRuleList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline ListAutoTagRulesResponseBodyAutoTagRuleList& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline ListAutoTagRulesResponseBodyAutoTagRuleList& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline ListAutoTagRulesResponseBodyAutoTagRuleList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifiedTimestamp Field Functions 
    bool hasModifiedTimestamp() const { return this->modifiedTimestamp_ != nullptr;};
    void deleteModifiedTimestamp() { this->modifiedTimestamp_ = nullptr;};
    inline int64_t modifiedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimestamp_, 0L) };
    inline ListAutoTagRulesResponseBodyAutoTagRuleList& setModifiedTimestamp(int64_t modifiedTimestamp) { DARABONBA_PTR_SET_VALUE(modifiedTimestamp_, modifiedTimestamp) };


    // ruleDesc Field Functions 
    bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
    void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
    inline string ruleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
    inline ListAutoTagRulesResponseBodyAutoTagRuleList& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListAutoTagRulesResponseBodyAutoTagRuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // tagContext Field Functions 
    bool hasTagContext() const { return this->tagContext_ != nullptr;};
    void deleteTagContext() { this->tagContext_ = nullptr;};
    inline string tagContext() const { DARABONBA_PTR_GET_DEFAULT(tagContext_, "") };
    inline ListAutoTagRulesResponseBodyAutoTagRuleList& setTagContext(string tagContext) { DARABONBA_PTR_SET_VALUE(tagContext_, tagContext) };


    // tagType Field Functions 
    bool hasTagType() const { return this->tagType_ != nullptr;};
    void deleteTagType() { this->tagType_ = nullptr;};
    inline string tagType() const { DARABONBA_PTR_GET_DEFAULT(tagType_, "") };
    inline ListAutoTagRulesResponseBodyAutoTagRuleList& setTagType(string tagType) { DARABONBA_PTR_SET_VALUE(tagType_, tagType) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The timestamp when the rule was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The expression of the rule.
    std::shared_ptr<string> expression_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The timestamp when the rule was last updated. Unit: milliseconds.
    std::shared_ptr<int64_t> modifiedTimestamp_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> ruleDesc_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The tag specified by the operation type of the rule.
    std::shared_ptr<string> tagContext_ = nullptr;
    // The operation type of the rule. Valid values:
    // 
    // *   **group**
    // *   **tag**
    std::shared_ptr<string> tagType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
