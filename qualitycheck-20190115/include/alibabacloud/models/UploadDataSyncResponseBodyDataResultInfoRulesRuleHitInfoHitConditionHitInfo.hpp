// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCRESPONSEBODYDATARESULTINFORULESRULEHITINFOHITCONDITIONHITINFO_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCRESPONSEBODYDATARESULTINFORULESRULEHITINFOHITCONDITIONHITINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids.hpp>
#include <alibabacloud/models/UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords.hpp>
#include <alibabacloud/models/UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& obj) { 
      DARABONBA_PTR_TO_JSON(HitCids, hitCids_);
      DARABONBA_PTR_TO_JSON(HitKeyWords, hitKeyWords_);
      DARABONBA_PTR_TO_JSON(Phrase, phrase_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(HitCids, hitCids_);
      DARABONBA_PTR_FROM_JSON(HitKeyWords, hitKeyWords_);
      DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
    };
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo() = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo(const UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo &) = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo(UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo &&) = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo() = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& operator=(const UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo &) = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& operator=(UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hitCids_ == nullptr
        && return this->hitKeyWords_ == nullptr && return this->phrase_ == nullptr; };
    // hitCids Field Functions 
    bool hasHitCids() const { return this->hitCids_ != nullptr;};
    void deleteHitCids() { this->hitCids_ = nullptr;};
    inline const Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids & hitCids() const { DARABONBA_PTR_GET_CONST(hitCids_, Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids) };
    inline Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids hitCids() { DARABONBA_PTR_GET(hitCids_, Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids) };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& setHitCids(const Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids & hitCids) { DARABONBA_PTR_SET_VALUE(hitCids_, hitCids) };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& setHitCids(Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids && hitCids) { DARABONBA_PTR_SET_RVALUE(hitCids_, hitCids) };


    // hitKeyWords Field Functions 
    bool hasHitKeyWords() const { return this->hitKeyWords_ != nullptr;};
    void deleteHitKeyWords() { this->hitKeyWords_ = nullptr;};
    inline const Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords & hitKeyWords() const { DARABONBA_PTR_GET_CONST(hitKeyWords_, Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords) };
    inline Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords hitKeyWords() { DARABONBA_PTR_GET(hitKeyWords_, Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords) };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& setHitKeyWords(const Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords & hitKeyWords) { DARABONBA_PTR_SET_VALUE(hitKeyWords_, hitKeyWords) };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& setHitKeyWords(Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords && hitKeyWords) { DARABONBA_PTR_SET_RVALUE(hitKeyWords_, hitKeyWords) };


    // phrase Field Functions 
    bool hasPhrase() const { return this->phrase_ != nullptr;};
    void deletePhrase() { this->phrase_ = nullptr;};
    inline const Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase & phrase() const { DARABONBA_PTR_GET_CONST(phrase_, Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase) };
    inline Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase phrase() { DARABONBA_PTR_GET(phrase_, Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase) };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& setPhrase(const Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase & phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo& setPhrase(Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase && phrase) { DARABONBA_PTR_SET_RVALUE(phrase_, phrase) };


  protected:
    std::shared_ptr<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids> hitCids_ = nullptr;
    std::shared_ptr<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords> hitKeyWords_ = nullptr;
    std::shared_ptr<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase> phrase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
