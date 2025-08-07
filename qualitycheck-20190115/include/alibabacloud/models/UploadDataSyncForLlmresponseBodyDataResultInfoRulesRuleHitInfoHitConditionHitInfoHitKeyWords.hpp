// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMRESPONSEBODYDATARESULTINFORULESRULEHITINFOHITCONDITIONHITINFOHITKEYWORDS_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMRESPONSEBODYDATARESULTINFORULESRULEHITINFOHITCONDITIONHITINFOHITKEYWORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords& obj) { 
      DARABONBA_PTR_TO_JSON(HitKeyWord, hitKeyWord_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords& obj) { 
      DARABONBA_PTR_FROM_JSON(HitKeyWord, hitKeyWord_);
    };
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords() = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords(const UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords &) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords(UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords &&) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords() = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords& operator=(const UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords &) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords& operator=(UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hitKeyWord_ != nullptr; };
    // hitKeyWord Field Functions 
    bool hasHitKeyWord() const { return this->hitKeyWord_ != nullptr;};
    void deleteHitKeyWord() { this->hitKeyWord_ = nullptr;};
    inline const vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord> & hitKeyWord() const { DARABONBA_PTR_GET_CONST(hitKeyWord_, vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord>) };
    inline vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord> hitKeyWord() { DARABONBA_PTR_GET(hitKeyWord_, vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord>) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords& setHitKeyWord(const vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord> & hitKeyWord) { DARABONBA_PTR_SET_VALUE(hitKeyWord_, hitKeyWord) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords& setHitKeyWord(vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord> && hitKeyWord) { DARABONBA_PTR_SET_RVALUE(hitKeyWord_, hitKeyWord) };


  protected:
    std::shared_ptr<vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord>> hitKeyWord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
