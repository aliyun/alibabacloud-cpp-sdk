// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTINTERVENERULEREQUESTINTERVENERULECONFIG_HPP_
#define ALIBABACLOUD_MODELS_INSERTINTERVENERULEREQUESTINTERVENERULECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig.hpp>
#include <alibabacloud/models/InsertInterveneRuleRequestInterveneRuleConfigEffectConfig.hpp>
#include <alibabacloud/models/InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class InsertInterveneRuleRequestInterveneRuleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertInterveneRuleRequestInterveneRuleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AnswerConfig, answerConfig_);
      DARABONBA_PTR_TO_JSON(EffectConfig, effectConfig_);
      DARABONBA_PTR_TO_JSON(InterveneConfigList, interveneConfigList_);
      DARABONBA_PTR_TO_JSON(InterveneType, interveneType_);
      DARABONBA_PTR_TO_JSON(NamespaceList, namespaceList_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, InsertInterveneRuleRequestInterveneRuleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AnswerConfig, answerConfig_);
      DARABONBA_PTR_FROM_JSON(EffectConfig, effectConfig_);
      DARABONBA_PTR_FROM_JSON(InterveneConfigList, interveneConfigList_);
      DARABONBA_PTR_FROM_JSON(InterveneType, interveneType_);
      DARABONBA_PTR_FROM_JSON(NamespaceList, namespaceList_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    InsertInterveneRuleRequestInterveneRuleConfig() = default ;
    InsertInterveneRuleRequestInterveneRuleConfig(const InsertInterveneRuleRequestInterveneRuleConfig &) = default ;
    InsertInterveneRuleRequestInterveneRuleConfig(InsertInterveneRuleRequestInterveneRuleConfig &&) = default ;
    InsertInterveneRuleRequestInterveneRuleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertInterveneRuleRequestInterveneRuleConfig() = default ;
    InsertInterveneRuleRequestInterveneRuleConfig& operator=(const InsertInterveneRuleRequestInterveneRuleConfig &) = default ;
    InsertInterveneRuleRequestInterveneRuleConfig& operator=(InsertInterveneRuleRequestInterveneRuleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answerConfig_ == nullptr
        && return this->effectConfig_ == nullptr && return this->interveneConfigList_ == nullptr && return this->interveneType_ == nullptr && return this->namespaceList_ == nullptr && return this->ruleId_ == nullptr
        && return this->ruleName_ == nullptr; };
    // answerConfig Field Functions 
    bool hasAnswerConfig() const { return this->answerConfig_ != nullptr;};
    void deleteAnswerConfig() { this->answerConfig_ = nullptr;};
    inline const vector<Models::InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig> & answerConfig() const { DARABONBA_PTR_GET_CONST(answerConfig_, vector<Models::InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig>) };
    inline vector<Models::InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig> answerConfig() { DARABONBA_PTR_GET(answerConfig_, vector<Models::InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig>) };
    inline InsertInterveneRuleRequestInterveneRuleConfig& setAnswerConfig(const vector<Models::InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig> & answerConfig) { DARABONBA_PTR_SET_VALUE(answerConfig_, answerConfig) };
    inline InsertInterveneRuleRequestInterveneRuleConfig& setAnswerConfig(vector<Models::InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig> && answerConfig) { DARABONBA_PTR_SET_RVALUE(answerConfig_, answerConfig) };


    // effectConfig Field Functions 
    bool hasEffectConfig() const { return this->effectConfig_ != nullptr;};
    void deleteEffectConfig() { this->effectConfig_ = nullptr;};
    inline const Models::InsertInterveneRuleRequestInterveneRuleConfigEffectConfig & effectConfig() const { DARABONBA_PTR_GET_CONST(effectConfig_, Models::InsertInterveneRuleRequestInterveneRuleConfigEffectConfig) };
    inline Models::InsertInterveneRuleRequestInterveneRuleConfigEffectConfig effectConfig() { DARABONBA_PTR_GET(effectConfig_, Models::InsertInterveneRuleRequestInterveneRuleConfigEffectConfig) };
    inline InsertInterveneRuleRequestInterveneRuleConfig& setEffectConfig(const Models::InsertInterveneRuleRequestInterveneRuleConfigEffectConfig & effectConfig) { DARABONBA_PTR_SET_VALUE(effectConfig_, effectConfig) };
    inline InsertInterveneRuleRequestInterveneRuleConfig& setEffectConfig(Models::InsertInterveneRuleRequestInterveneRuleConfigEffectConfig && effectConfig) { DARABONBA_PTR_SET_RVALUE(effectConfig_, effectConfig) };


    // interveneConfigList Field Functions 
    bool hasInterveneConfigList() const { return this->interveneConfigList_ != nullptr;};
    void deleteInterveneConfigList() { this->interveneConfigList_ = nullptr;};
    inline const vector<Models::InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList> & interveneConfigList() const { DARABONBA_PTR_GET_CONST(interveneConfigList_, vector<Models::InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList>) };
    inline vector<Models::InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList> interveneConfigList() { DARABONBA_PTR_GET(interveneConfigList_, vector<Models::InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList>) };
    inline InsertInterveneRuleRequestInterveneRuleConfig& setInterveneConfigList(const vector<Models::InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList> & interveneConfigList) { DARABONBA_PTR_SET_VALUE(interveneConfigList_, interveneConfigList) };
    inline InsertInterveneRuleRequestInterveneRuleConfig& setInterveneConfigList(vector<Models::InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList> && interveneConfigList) { DARABONBA_PTR_SET_RVALUE(interveneConfigList_, interveneConfigList) };


    // interveneType Field Functions 
    bool hasInterveneType() const { return this->interveneType_ != nullptr;};
    void deleteInterveneType() { this->interveneType_ = nullptr;};
    inline int32_t interveneType() const { DARABONBA_PTR_GET_DEFAULT(interveneType_, 0) };
    inline InsertInterveneRuleRequestInterveneRuleConfig& setInterveneType(int32_t interveneType) { DARABONBA_PTR_SET_VALUE(interveneType_, interveneType) };


    // namespaceList Field Functions 
    bool hasNamespaceList() const { return this->namespaceList_ != nullptr;};
    void deleteNamespaceList() { this->namespaceList_ = nullptr;};
    inline const vector<string> & namespaceList() const { DARABONBA_PTR_GET_CONST(namespaceList_, vector<string>) };
    inline vector<string> namespaceList() { DARABONBA_PTR_GET(namespaceList_, vector<string>) };
    inline InsertInterveneRuleRequestInterveneRuleConfig& setNamespaceList(const vector<string> & namespaceList) { DARABONBA_PTR_SET_VALUE(namespaceList_, namespaceList) };
    inline InsertInterveneRuleRequestInterveneRuleConfig& setNamespaceList(vector<string> && namespaceList) { DARABONBA_PTR_SET_RVALUE(namespaceList_, namespaceList) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline InsertInterveneRuleRequestInterveneRuleConfig& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline InsertInterveneRuleRequestInterveneRuleConfig& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    std::shared_ptr<vector<Models::InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig>> answerConfig_ = nullptr;
    std::shared_ptr<Models::InsertInterveneRuleRequestInterveneRuleConfigEffectConfig> effectConfig_ = nullptr;
    std::shared_ptr<vector<Models::InsertInterveneRuleRequestInterveneRuleConfigInterveneConfigList>> interveneConfigList_ = nullptr;
    std::shared_ptr<int32_t> interveneType_ = nullptr;
    std::shared_ptr<vector<string>> namespaceList_ = nullptr;
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
