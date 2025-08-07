// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMRESPONSEBODYDATARESULTINFORULESRULEHITINFOHITCONDITIONHITINFO_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMRESPONSEBODYDATARESULTINFORULESRULEHITINFOHITCONDITIONHITINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids.hpp>
#include <alibabacloud/models/UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords.hpp>
#include <alibabacloud/models/UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& obj) { 
      DARABONBA_PTR_TO_JSON(HitCids, hitCids_);
      DARABONBA_PTR_TO_JSON(HitKeyWords, hitKeyWords_);
      DARABONBA_PTR_TO_JSON(Phrase, phrase_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(HitCids, hitCids_);
      DARABONBA_PTR_FROM_JSON(HitKeyWords, hitKeyWords_);
      DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
    };
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo() = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo(const UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo &) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo(UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo &&) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo() = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& operator=(const UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo &) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& operator=(UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hitCids_ != nullptr
        && this->hitKeyWords_ != nullptr && this->phrase_ != nullptr; };
    // hitCids Field Functions 
    bool hasHitCids() const { return this->hitCids_ != nullptr;};
    void deleteHitCids() { this->hitCids_ = nullptr;};
    inline const Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids & hitCids() const { DARABONBA_PTR_GET_CONST(hitCids_, Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids) };
    inline Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids hitCids() { DARABONBA_PTR_GET(hitCids_, Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& setHitCids(const Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids & hitCids) { DARABONBA_PTR_SET_VALUE(hitCids_, hitCids) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& setHitCids(Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids && hitCids) { DARABONBA_PTR_SET_RVALUE(hitCids_, hitCids) };


    // hitKeyWords Field Functions 
    bool hasHitKeyWords() const { return this->hitKeyWords_ != nullptr;};
    void deleteHitKeyWords() { this->hitKeyWords_ = nullptr;};
    inline const Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords & hitKeyWords() const { DARABONBA_PTR_GET_CONST(hitKeyWords_, Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords) };
    inline Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords hitKeyWords() { DARABONBA_PTR_GET(hitKeyWords_, Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& setHitKeyWords(const Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords & hitKeyWords) { DARABONBA_PTR_SET_VALUE(hitKeyWords_, hitKeyWords) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& setHitKeyWords(Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords && hitKeyWords) { DARABONBA_PTR_SET_RVALUE(hitKeyWords_, hitKeyWords) };


    // phrase Field Functions 
    bool hasPhrase() const { return this->phrase_ != nullptr;};
    void deletePhrase() { this->phrase_ = nullptr;};
    inline const Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase & phrase() const { DARABONBA_PTR_GET_CONST(phrase_, Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase) };
    inline Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase phrase() { DARABONBA_PTR_GET(phrase_, Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& setPhrase(const Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase & phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& setPhrase(Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase && phrase) { DARABONBA_PTR_SET_RVALUE(phrase_, phrase) };


  protected:
    std::shared_ptr<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids> hitCids_ = nullptr;
    std::shared_ptr<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords> hitKeyWords_ = nullptr;
    std::shared_ptr<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase> phrase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
