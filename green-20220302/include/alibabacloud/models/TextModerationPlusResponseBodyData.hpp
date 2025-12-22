// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTMODERATIONPLUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TEXTMODERATIONPLUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TextModerationPlusResponseBodyDataAdvice.hpp>
#include <alibabacloud/models/TextModerationPlusResponseBodyDataAttackResult.hpp>
#include <alibabacloud/models/TextModerationPlusResponseBodyDataResult.hpp>
#include <alibabacloud/models/TextModerationPlusResponseBodyDataSensitiveResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class TextModerationPlusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextModerationPlusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(Advice, advice_);
      DARABONBA_PTR_TO_JSON(AttackLevel, attackLevel_);
      DARABONBA_PTR_TO_JSON(AttackResult, attackResult_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(DetectedLanguage, detectedLanguage_);
      DARABONBA_PTR_TO_JSON(ManualTaskId, manualTaskId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(SensitiveLevel, sensitiveLevel_);
      DARABONBA_PTR_TO_JSON(SensitiveResult, sensitiveResult_);
      DARABONBA_PTR_TO_JSON(TranslatedContent, translatedContent_);
    };
    friend void from_json(const Darabonba::Json& j, TextModerationPlusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(Advice, advice_);
      DARABONBA_PTR_FROM_JSON(AttackLevel, attackLevel_);
      DARABONBA_PTR_FROM_JSON(AttackResult, attackResult_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(DetectedLanguage, detectedLanguage_);
      DARABONBA_PTR_FROM_JSON(ManualTaskId, manualTaskId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(SensitiveLevel, sensitiveLevel_);
      DARABONBA_PTR_FROM_JSON(SensitiveResult, sensitiveResult_);
      DARABONBA_PTR_FROM_JSON(TranslatedContent, translatedContent_);
    };
    TextModerationPlusResponseBodyData() = default ;
    TextModerationPlusResponseBodyData(const TextModerationPlusResponseBodyData &) = default ;
    TextModerationPlusResponseBodyData(TextModerationPlusResponseBodyData &&) = default ;
    TextModerationPlusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextModerationPlusResponseBodyData() = default ;
    TextModerationPlusResponseBodyData& operator=(const TextModerationPlusResponseBodyData &) = default ;
    TextModerationPlusResponseBodyData& operator=(TextModerationPlusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->advice_ == nullptr && return this->attackLevel_ == nullptr && return this->attackResult_ == nullptr && return this->dataId_ == nullptr && return this->detectedLanguage_ == nullptr
        && return this->manualTaskId_ == nullptr && return this->result_ == nullptr && return this->riskLevel_ == nullptr && return this->score_ == nullptr && return this->sensitiveLevel_ == nullptr
        && return this->sensitiveResult_ == nullptr && return this->translatedContent_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline TextModerationPlusResponseBodyData& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // advice Field Functions 
    bool hasAdvice() const { return this->advice_ != nullptr;};
    void deleteAdvice() { this->advice_ = nullptr;};
    inline const vector<Models::TextModerationPlusResponseBodyDataAdvice> & advice() const { DARABONBA_PTR_GET_CONST(advice_, vector<Models::TextModerationPlusResponseBodyDataAdvice>) };
    inline vector<Models::TextModerationPlusResponseBodyDataAdvice> advice() { DARABONBA_PTR_GET(advice_, vector<Models::TextModerationPlusResponseBodyDataAdvice>) };
    inline TextModerationPlusResponseBodyData& setAdvice(const vector<Models::TextModerationPlusResponseBodyDataAdvice> & advice) { DARABONBA_PTR_SET_VALUE(advice_, advice) };
    inline TextModerationPlusResponseBodyData& setAdvice(vector<Models::TextModerationPlusResponseBodyDataAdvice> && advice) { DARABONBA_PTR_SET_RVALUE(advice_, advice) };


    // attackLevel Field Functions 
    bool hasAttackLevel() const { return this->attackLevel_ != nullptr;};
    void deleteAttackLevel() { this->attackLevel_ = nullptr;};
    inline string attackLevel() const { DARABONBA_PTR_GET_DEFAULT(attackLevel_, "") };
    inline TextModerationPlusResponseBodyData& setAttackLevel(string attackLevel) { DARABONBA_PTR_SET_VALUE(attackLevel_, attackLevel) };


    // attackResult Field Functions 
    bool hasAttackResult() const { return this->attackResult_ != nullptr;};
    void deleteAttackResult() { this->attackResult_ = nullptr;};
    inline const vector<Models::TextModerationPlusResponseBodyDataAttackResult> & attackResult() const { DARABONBA_PTR_GET_CONST(attackResult_, vector<Models::TextModerationPlusResponseBodyDataAttackResult>) };
    inline vector<Models::TextModerationPlusResponseBodyDataAttackResult> attackResult() { DARABONBA_PTR_GET(attackResult_, vector<Models::TextModerationPlusResponseBodyDataAttackResult>) };
    inline TextModerationPlusResponseBodyData& setAttackResult(const vector<Models::TextModerationPlusResponseBodyDataAttackResult> & attackResult) { DARABONBA_PTR_SET_VALUE(attackResult_, attackResult) };
    inline TextModerationPlusResponseBodyData& setAttackResult(vector<Models::TextModerationPlusResponseBodyDataAttackResult> && attackResult) { DARABONBA_PTR_SET_RVALUE(attackResult_, attackResult) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline TextModerationPlusResponseBodyData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // detectedLanguage Field Functions 
    bool hasDetectedLanguage() const { return this->detectedLanguage_ != nullptr;};
    void deleteDetectedLanguage() { this->detectedLanguage_ = nullptr;};
    inline string detectedLanguage() const { DARABONBA_PTR_GET_DEFAULT(detectedLanguage_, "") };
    inline TextModerationPlusResponseBodyData& setDetectedLanguage(string detectedLanguage) { DARABONBA_PTR_SET_VALUE(detectedLanguage_, detectedLanguage) };


    // manualTaskId Field Functions 
    bool hasManualTaskId() const { return this->manualTaskId_ != nullptr;};
    void deleteManualTaskId() { this->manualTaskId_ = nullptr;};
    inline string manualTaskId() const { DARABONBA_PTR_GET_DEFAULT(manualTaskId_, "") };
    inline TextModerationPlusResponseBodyData& setManualTaskId(string manualTaskId) { DARABONBA_PTR_SET_VALUE(manualTaskId_, manualTaskId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::TextModerationPlusResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::TextModerationPlusResponseBodyDataResult>) };
    inline vector<Models::TextModerationPlusResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::TextModerationPlusResponseBodyDataResult>) };
    inline TextModerationPlusResponseBodyData& setResult(const vector<Models::TextModerationPlusResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline TextModerationPlusResponseBodyData& setResult(vector<Models::TextModerationPlusResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline TextModerationPlusResponseBodyData& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline TextModerationPlusResponseBodyData& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // sensitiveLevel Field Functions 
    bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
    void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
    inline string sensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
    inline TextModerationPlusResponseBodyData& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


    // sensitiveResult Field Functions 
    bool hasSensitiveResult() const { return this->sensitiveResult_ != nullptr;};
    void deleteSensitiveResult() { this->sensitiveResult_ = nullptr;};
    inline const vector<Models::TextModerationPlusResponseBodyDataSensitiveResult> & sensitiveResult() const { DARABONBA_PTR_GET_CONST(sensitiveResult_, vector<Models::TextModerationPlusResponseBodyDataSensitiveResult>) };
    inline vector<Models::TextModerationPlusResponseBodyDataSensitiveResult> sensitiveResult() { DARABONBA_PTR_GET(sensitiveResult_, vector<Models::TextModerationPlusResponseBodyDataSensitiveResult>) };
    inline TextModerationPlusResponseBodyData& setSensitiveResult(const vector<Models::TextModerationPlusResponseBodyDataSensitiveResult> & sensitiveResult) { DARABONBA_PTR_SET_VALUE(sensitiveResult_, sensitiveResult) };
    inline TextModerationPlusResponseBodyData& setSensitiveResult(vector<Models::TextModerationPlusResponseBodyDataSensitiveResult> && sensitiveResult) { DARABONBA_PTR_SET_RVALUE(sensitiveResult_, sensitiveResult) };


    // translatedContent Field Functions 
    bool hasTranslatedContent() const { return this->translatedContent_ != nullptr;};
    void deleteTranslatedContent() { this->translatedContent_ = nullptr;};
    inline string translatedContent() const { DARABONBA_PTR_GET_DEFAULT(translatedContent_, "") };
    inline TextModerationPlusResponseBodyData& setTranslatedContent(string translatedContent) { DARABONBA_PTR_SET_VALUE(translatedContent_, translatedContent) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    // The suggestion.
    std::shared_ptr<vector<Models::TextModerationPlusResponseBodyDataAdvice>> advice_ = nullptr;
    // The level of prompt attack
    std::shared_ptr<string> attackLevel_ = nullptr;
    // The result of prompt attack detect
    std::shared_ptr<vector<Models::TextModerationPlusResponseBodyDataAttackResult>> attackResult_ = nullptr;
    // The id of data
    std::shared_ptr<string> dataId_ = nullptr;
    std::shared_ptr<string> detectedLanguage_ = nullptr;
    std::shared_ptr<string> manualTaskId_ = nullptr;
    // The results.
    std::shared_ptr<vector<Models::TextModerationPlusResponseBodyDataResult>> result_ = nullptr;
    // Risk Level
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The score.
    std::shared_ptr<float> score_ = nullptr;
    // The level of sensitivity data
    std::shared_ptr<string> sensitiveLevel_ = nullptr;
    // The result of sensitivity data detect
    std::shared_ptr<vector<Models::TextModerationPlusResponseBodyDataSensitiveResult>> sensitiveResult_ = nullptr;
    std::shared_ptr<string> translatedContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
