// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENERULESRESPONSEBODYDATAINTERVENERULELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENERULESRESPONSEBODYDATAINTERVENERULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInterveneRulesResponseBodyDataInterveneRuleListAnswerConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListInterveneRulesResponseBodyDataInterveneRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterveneRulesResponseBodyDataInterveneRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(AnswerConfig, answerConfig_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EffectTime, effectTime_);
      DARABONBA_PTR_TO_JSON(InterveneType, interveneType_);
      DARABONBA_PTR_TO_JSON(NamespaceList, namespaceList_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterveneRulesResponseBodyDataInterveneRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(AnswerConfig, answerConfig_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EffectTime, effectTime_);
      DARABONBA_PTR_FROM_JSON(InterveneType, interveneType_);
      DARABONBA_PTR_FROM_JSON(NamespaceList, namespaceList_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    ListInterveneRulesResponseBodyDataInterveneRuleList() = default ;
    ListInterveneRulesResponseBodyDataInterveneRuleList(const ListInterveneRulesResponseBodyDataInterveneRuleList &) = default ;
    ListInterveneRulesResponseBodyDataInterveneRuleList(ListInterveneRulesResponseBodyDataInterveneRuleList &&) = default ;
    ListInterveneRulesResponseBodyDataInterveneRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterveneRulesResponseBodyDataInterveneRuleList() = default ;
    ListInterveneRulesResponseBodyDataInterveneRuleList& operator=(const ListInterveneRulesResponseBodyDataInterveneRuleList &) = default ;
    ListInterveneRulesResponseBodyDataInterveneRuleList& operator=(ListInterveneRulesResponseBodyDataInterveneRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->answerConfig_ != nullptr
        && this->createTime_ != nullptr && this->effectTime_ != nullptr && this->interveneType_ != nullptr && this->namespaceList_ != nullptr && this->ruleId_ != nullptr
        && this->ruleName_ != nullptr; };
    // answerConfig Field Functions 
    bool hasAnswerConfig() const { return this->answerConfig_ != nullptr;};
    void deleteAnswerConfig() { this->answerConfig_ = nullptr;};
    inline const vector<Models::ListInterveneRulesResponseBodyDataInterveneRuleListAnswerConfig> & answerConfig() const { DARABONBA_PTR_GET_CONST(answerConfig_, vector<Models::ListInterveneRulesResponseBodyDataInterveneRuleListAnswerConfig>) };
    inline vector<Models::ListInterveneRulesResponseBodyDataInterveneRuleListAnswerConfig> answerConfig() { DARABONBA_PTR_GET(answerConfig_, vector<Models::ListInterveneRulesResponseBodyDataInterveneRuleListAnswerConfig>) };
    inline ListInterveneRulesResponseBodyDataInterveneRuleList& setAnswerConfig(const vector<Models::ListInterveneRulesResponseBodyDataInterveneRuleListAnswerConfig> & answerConfig) { DARABONBA_PTR_SET_VALUE(answerConfig_, answerConfig) };
    inline ListInterveneRulesResponseBodyDataInterveneRuleList& setAnswerConfig(vector<Models::ListInterveneRulesResponseBodyDataInterveneRuleListAnswerConfig> && answerConfig) { DARABONBA_PTR_SET_RVALUE(answerConfig_, answerConfig) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListInterveneRulesResponseBodyDataInterveneRuleList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // effectTime Field Functions 
    bool hasEffectTime() const { return this->effectTime_ != nullptr;};
    void deleteEffectTime() { this->effectTime_ = nullptr;};
    inline string effectTime() const { DARABONBA_PTR_GET_DEFAULT(effectTime_, "") };
    inline ListInterveneRulesResponseBodyDataInterveneRuleList& setEffectTime(string effectTime) { DARABONBA_PTR_SET_VALUE(effectTime_, effectTime) };


    // interveneType Field Functions 
    bool hasInterveneType() const { return this->interveneType_ != nullptr;};
    void deleteInterveneType() { this->interveneType_ = nullptr;};
    inline int32_t interveneType() const { DARABONBA_PTR_GET_DEFAULT(interveneType_, 0) };
    inline ListInterveneRulesResponseBodyDataInterveneRuleList& setInterveneType(int32_t interveneType) { DARABONBA_PTR_SET_VALUE(interveneType_, interveneType) };


    // namespaceList Field Functions 
    bool hasNamespaceList() const { return this->namespaceList_ != nullptr;};
    void deleteNamespaceList() { this->namespaceList_ = nullptr;};
    inline const vector<string> & namespaceList() const { DARABONBA_PTR_GET_CONST(namespaceList_, vector<string>) };
    inline vector<string> namespaceList() { DARABONBA_PTR_GET(namespaceList_, vector<string>) };
    inline ListInterveneRulesResponseBodyDataInterveneRuleList& setNamespaceList(const vector<string> & namespaceList) { DARABONBA_PTR_SET_VALUE(namespaceList_, namespaceList) };
    inline ListInterveneRulesResponseBodyDataInterveneRuleList& setNamespaceList(vector<string> && namespaceList) { DARABONBA_PTR_SET_RVALUE(namespaceList_, namespaceList) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ListInterveneRulesResponseBodyDataInterveneRuleList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListInterveneRulesResponseBodyDataInterveneRuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    std::shared_ptr<vector<Models::ListInterveneRulesResponseBodyDataInterveneRuleListAnswerConfig>> answerConfig_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> effectTime_ = nullptr;
    std::shared_ptr<int32_t> interveneType_ = nullptr;
    std::shared_ptr<vector<string>> namespaceList_ = nullptr;
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
