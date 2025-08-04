// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERVENERULEDETAILRESPONSEBODYDATAINTERVENERULEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETINTERVENERULEDETAILRESPONSEBODYDATAINTERVENERULEDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailAnswerConfig.hpp>
#include <alibabacloud/models/GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AnswerConfig, answerConfig_);
      DARABONBA_PTR_TO_JSON(EffectConfig, effectConfig_);
      DARABONBA_PTR_TO_JSON(InterveneType, interveneType_);
      DARABONBA_PTR_TO_JSON(NamespaceList, namespaceList_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AnswerConfig, answerConfig_);
      DARABONBA_PTR_FROM_JSON(EffectConfig, effectConfig_);
      DARABONBA_PTR_FROM_JSON(InterveneType, interveneType_);
      DARABONBA_PTR_FROM_JSON(NamespaceList, namespaceList_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail() = default ;
    GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail(const GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail &) = default ;
    GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail(GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail &&) = default ;
    GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail() = default ;
    GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail& operator=(const GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail &) = default ;
    GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail& operator=(GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->answerConfig_ != nullptr
        && this->effectConfig_ != nullptr && this->interveneType_ != nullptr && this->namespaceList_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr; };
    // answerConfig Field Functions 
    bool hasAnswerConfig() const { return this->answerConfig_ != nullptr;};
    void deleteAnswerConfig() { this->answerConfig_ = nullptr;};
    inline const vector<Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailAnswerConfig> & answerConfig() const { DARABONBA_PTR_GET_CONST(answerConfig_, vector<Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailAnswerConfig>) };
    inline vector<Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailAnswerConfig> answerConfig() { DARABONBA_PTR_GET(answerConfig_, vector<Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailAnswerConfig>) };
    inline GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail& setAnswerConfig(const vector<Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailAnswerConfig> & answerConfig) { DARABONBA_PTR_SET_VALUE(answerConfig_, answerConfig) };
    inline GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail& setAnswerConfig(vector<Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailAnswerConfig> && answerConfig) { DARABONBA_PTR_SET_RVALUE(answerConfig_, answerConfig) };


    // effectConfig Field Functions 
    bool hasEffectConfig() const { return this->effectConfig_ != nullptr;};
    void deleteEffectConfig() { this->effectConfig_ = nullptr;};
    inline const Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig & effectConfig() const { DARABONBA_PTR_GET_CONST(effectConfig_, Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig) };
    inline Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig effectConfig() { DARABONBA_PTR_GET(effectConfig_, Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig) };
    inline GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail& setEffectConfig(const Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig & effectConfig) { DARABONBA_PTR_SET_VALUE(effectConfig_, effectConfig) };
    inline GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail& setEffectConfig(Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig && effectConfig) { DARABONBA_PTR_SET_RVALUE(effectConfig_, effectConfig) };


    // interveneType Field Functions 
    bool hasInterveneType() const { return this->interveneType_ != nullptr;};
    void deleteInterveneType() { this->interveneType_ = nullptr;};
    inline int32_t interveneType() const { DARABONBA_PTR_GET_DEFAULT(interveneType_, 0) };
    inline GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail& setInterveneType(int32_t interveneType) { DARABONBA_PTR_SET_VALUE(interveneType_, interveneType) };


    // namespaceList Field Functions 
    bool hasNamespaceList() const { return this->namespaceList_ != nullptr;};
    void deleteNamespaceList() { this->namespaceList_ = nullptr;};
    inline const vector<string> & namespaceList() const { DARABONBA_PTR_GET_CONST(namespaceList_, vector<string>) };
    inline vector<string> namespaceList() { DARABONBA_PTR_GET(namespaceList_, vector<string>) };
    inline GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail& setNamespaceList(const vector<string> & namespaceList) { DARABONBA_PTR_SET_VALUE(namespaceList_, namespaceList) };
    inline GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail& setNamespaceList(vector<string> && namespaceList) { DARABONBA_PTR_SET_RVALUE(namespaceList_, namespaceList) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    std::shared_ptr<vector<Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailAnswerConfig>> answerConfig_ = nullptr;
    std::shared_ptr<Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig> effectConfig_ = nullptr;
    std::shared_ptr<int32_t> interveneType_ = nullptr;
    std::shared_ptr<vector<string>> namespaceList_ = nullptr;
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
