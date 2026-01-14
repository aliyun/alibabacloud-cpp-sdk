// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachScriptResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachScriptResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(appendQuestionFlag, appendQuestionFlag_);
      DARABONBA_PTR_TO_JSON(assessmentScope, assessmentScope_);
      DARABONBA_PTR_TO_JSON(checkCheatConfig, checkCheatConfig_);
      DARABONBA_PTR_TO_JSON(closingRemarks, closingRemarks_);
      DARABONBA_PTR_TO_JSON(completeStrategy, completeStrategy_);
      DARABONBA_PTR_TO_JSON(coverUrl, coverUrl_);
      DARABONBA_PTR_TO_JSON(customReplyRules, customReplyRules_);
      DARABONBA_PTR_TO_JSON(dialogueInputTextLimit, dialogueInputTextLimit_);
      DARABONBA_PTR_TO_JSON(dialogueTextFlag, dialogueTextFlag_);
      DARABONBA_PTR_TO_JSON(dialogueTipFlag, dialogueTipFlag_);
      DARABONBA_PTR_TO_JSON(dialogueVoiceLimit, dialogueVoiceLimit_);
      DARABONBA_PTR_TO_JSON(evaluateReportFlag, evaluateReportFlag_);
      DARABONBA_PTR_TO_JSON(expressiveness, expressiveness_);
      DARABONBA_PTR_TO_JSON(expressivenessList, expressivenessList_);
      DARABONBA_PTR_TO_JSON(gifDynamicUrl, gifDynamicUrl_);
      DARABONBA_PTR_TO_JSON(gifStaticUrl, gifStaticUrl_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(initiator, initiator_);
      DARABONBA_PTR_TO_JSON(interactionInputTypes, interactionInputTypes_);
      DARABONBA_PTR_TO_JSON(interactionType, interactionType_);
      DARABONBA_PTR_TO_JSON(introduce, introduce_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(openingRemarks, openingRemarks_);
      DARABONBA_PTR_TO_JSON(orderAckFlag, orderAckFlag_);
      DARABONBA_PTR_TO_JSON(pointDeductionRuleList, pointDeductionRuleList_);
      DARABONBA_PTR_TO_JSON(points, points_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sampleDialogueList, sampleDialogueList_);
      DARABONBA_PTR_TO_JSON(scoreConfig, scoreConfig_);
      DARABONBA_PTR_TO_JSON(scriptRecordId, scriptRecordId_);
      DARABONBA_PTR_TO_JSON(sparringTipContent, sparringTipContent_);
      DARABONBA_PTR_TO_JSON(sparringTipTitle, sparringTipTitle_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(studentThinkTimeFlag, studentThinkTimeFlag_);
      DARABONBA_PTR_TO_JSON(studentThinkTimeLimit, studentThinkTimeLimit_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(voiceId, voiceId_);
      DARABONBA_PTR_TO_JSON(voiceLanguage, voiceLanguage_);
      DARABONBA_PTR_TO_JSON(weights, weights_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachScriptResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(appendQuestionFlag, appendQuestionFlag_);
      DARABONBA_PTR_FROM_JSON(assessmentScope, assessmentScope_);
      DARABONBA_PTR_FROM_JSON(checkCheatConfig, checkCheatConfig_);
      DARABONBA_PTR_FROM_JSON(closingRemarks, closingRemarks_);
      DARABONBA_PTR_FROM_JSON(completeStrategy, completeStrategy_);
      DARABONBA_PTR_FROM_JSON(coverUrl, coverUrl_);
      DARABONBA_PTR_FROM_JSON(customReplyRules, customReplyRules_);
      DARABONBA_PTR_FROM_JSON(dialogueInputTextLimit, dialogueInputTextLimit_);
      DARABONBA_PTR_FROM_JSON(dialogueTextFlag, dialogueTextFlag_);
      DARABONBA_PTR_FROM_JSON(dialogueTipFlag, dialogueTipFlag_);
      DARABONBA_PTR_FROM_JSON(dialogueVoiceLimit, dialogueVoiceLimit_);
      DARABONBA_PTR_FROM_JSON(evaluateReportFlag, evaluateReportFlag_);
      DARABONBA_PTR_FROM_JSON(expressiveness, expressiveness_);
      DARABONBA_PTR_FROM_JSON(expressivenessList, expressivenessList_);
      DARABONBA_PTR_FROM_JSON(gifDynamicUrl, gifDynamicUrl_);
      DARABONBA_PTR_FROM_JSON(gifStaticUrl, gifStaticUrl_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(initiator, initiator_);
      DARABONBA_PTR_FROM_JSON(interactionInputTypes, interactionInputTypes_);
      DARABONBA_PTR_FROM_JSON(interactionType, interactionType_);
      DARABONBA_PTR_FROM_JSON(introduce, introduce_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(openingRemarks, openingRemarks_);
      DARABONBA_PTR_FROM_JSON(orderAckFlag, orderAckFlag_);
      DARABONBA_PTR_FROM_JSON(pointDeductionRuleList, pointDeductionRuleList_);
      DARABONBA_PTR_FROM_JSON(points, points_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sampleDialogueList, sampleDialogueList_);
      DARABONBA_PTR_FROM_JSON(scoreConfig, scoreConfig_);
      DARABONBA_PTR_FROM_JSON(scriptRecordId, scriptRecordId_);
      DARABONBA_PTR_FROM_JSON(sparringTipContent, sparringTipContent_);
      DARABONBA_PTR_FROM_JSON(sparringTipTitle, sparringTipTitle_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(studentThinkTimeFlag, studentThinkTimeFlag_);
      DARABONBA_PTR_FROM_JSON(studentThinkTimeLimit, studentThinkTimeLimit_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(voiceId, voiceId_);
      DARABONBA_PTR_FROM_JSON(voiceLanguage, voiceLanguage_);
      DARABONBA_PTR_FROM_JSON(weights, weights_);
    };
    GetAICoachScriptResponseBody() = default ;
    GetAICoachScriptResponseBody(const GetAICoachScriptResponseBody &) = default ;
    GetAICoachScriptResponseBody(GetAICoachScriptResponseBody &&) = default ;
    GetAICoachScriptResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachScriptResponseBody() = default ;
    GetAICoachScriptResponseBody& operator=(const GetAICoachScriptResponseBody &) = default ;
    GetAICoachScriptResponseBody& operator=(GetAICoachScriptResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Weights : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Weights& obj) { 
        DARABONBA_PTR_TO_JSON(abilityEvaluation, abilityEvaluation_);
        DARABONBA_PTR_TO_JSON(abilityEvaluationEnabled, abilityEvaluationEnabled_);
        DARABONBA_PTR_TO_JSON(assessmentPoint, assessmentPoint_);
        DARABONBA_PTR_TO_JSON(assessmentPointEnabled, assessmentPointEnabled_);
        DARABONBA_PTR_TO_JSON(customReplyRuleEnabled, customReplyRuleEnabled_);
        DARABONBA_PTR_TO_JSON(expressiveness, expressiveness_);
        DARABONBA_PTR_TO_JSON(expressivenessEnabled, expressivenessEnabled_);
        DARABONBA_PTR_TO_JSON(pointDeductionRule, pointDeductionRule_);
        DARABONBA_PTR_TO_JSON(pointDeductionRuleEnabled, pointDeductionRuleEnabled_);
        DARABONBA_PTR_TO_JSON(similarPronunciationScoringEnabled, similarPronunciationScoringEnabled_);
        DARABONBA_PTR_TO_JSON(standard, standard_);
        DARABONBA_PTR_TO_JSON(standardEnabled, standardEnabled_);
      };
      friend void from_json(const Darabonba::Json& j, Weights& obj) { 
        DARABONBA_PTR_FROM_JSON(abilityEvaluation, abilityEvaluation_);
        DARABONBA_PTR_FROM_JSON(abilityEvaluationEnabled, abilityEvaluationEnabled_);
        DARABONBA_PTR_FROM_JSON(assessmentPoint, assessmentPoint_);
        DARABONBA_PTR_FROM_JSON(assessmentPointEnabled, assessmentPointEnabled_);
        DARABONBA_PTR_FROM_JSON(customReplyRuleEnabled, customReplyRuleEnabled_);
        DARABONBA_PTR_FROM_JSON(expressiveness, expressiveness_);
        DARABONBA_PTR_FROM_JSON(expressivenessEnabled, expressivenessEnabled_);
        DARABONBA_PTR_FROM_JSON(pointDeductionRule, pointDeductionRule_);
        DARABONBA_PTR_FROM_JSON(pointDeductionRuleEnabled, pointDeductionRuleEnabled_);
        DARABONBA_PTR_FROM_JSON(similarPronunciationScoringEnabled, similarPronunciationScoringEnabled_);
        DARABONBA_PTR_FROM_JSON(standard, standard_);
        DARABONBA_PTR_FROM_JSON(standardEnabled, standardEnabled_);
      };
      Weights() = default ;
      Weights(const Weights &) = default ;
      Weights(Weights &&) = default ;
      Weights(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Weights() = default ;
      Weights& operator=(const Weights &) = default ;
      Weights& operator=(Weights &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->abilityEvaluation_ == nullptr
        && this->abilityEvaluationEnabled_ == nullptr && this->assessmentPoint_ == nullptr && this->assessmentPointEnabled_ == nullptr && this->customReplyRuleEnabled_ == nullptr && this->expressiveness_ == nullptr
        && this->expressivenessEnabled_ == nullptr && this->pointDeductionRule_ == nullptr && this->pointDeductionRuleEnabled_ == nullptr && this->similarPronunciationScoringEnabled_ == nullptr && this->standard_ == nullptr
        && this->standardEnabled_ == nullptr; };
      // abilityEvaluation Field Functions 
      bool hasAbilityEvaluation() const { return this->abilityEvaluation_ != nullptr;};
      void deleteAbilityEvaluation() { this->abilityEvaluation_ = nullptr;};
      inline int32_t getAbilityEvaluation() const { DARABONBA_PTR_GET_DEFAULT(abilityEvaluation_, 0) };
      inline Weights& setAbilityEvaluation(int32_t abilityEvaluation) { DARABONBA_PTR_SET_VALUE(abilityEvaluation_, abilityEvaluation) };


      // abilityEvaluationEnabled Field Functions 
      bool hasAbilityEvaluationEnabled() const { return this->abilityEvaluationEnabled_ != nullptr;};
      void deleteAbilityEvaluationEnabled() { this->abilityEvaluationEnabled_ = nullptr;};
      inline bool getAbilityEvaluationEnabled() const { DARABONBA_PTR_GET_DEFAULT(abilityEvaluationEnabled_, false) };
      inline Weights& setAbilityEvaluationEnabled(bool abilityEvaluationEnabled) { DARABONBA_PTR_SET_VALUE(abilityEvaluationEnabled_, abilityEvaluationEnabled) };


      // assessmentPoint Field Functions 
      bool hasAssessmentPoint() const { return this->assessmentPoint_ != nullptr;};
      void deleteAssessmentPoint() { this->assessmentPoint_ = nullptr;};
      inline int32_t getAssessmentPoint() const { DARABONBA_PTR_GET_DEFAULT(assessmentPoint_, 0) };
      inline Weights& setAssessmentPoint(int32_t assessmentPoint) { DARABONBA_PTR_SET_VALUE(assessmentPoint_, assessmentPoint) };


      // assessmentPointEnabled Field Functions 
      bool hasAssessmentPointEnabled() const { return this->assessmentPointEnabled_ != nullptr;};
      void deleteAssessmentPointEnabled() { this->assessmentPointEnabled_ = nullptr;};
      inline bool getAssessmentPointEnabled() const { DARABONBA_PTR_GET_DEFAULT(assessmentPointEnabled_, false) };
      inline Weights& setAssessmentPointEnabled(bool assessmentPointEnabled) { DARABONBA_PTR_SET_VALUE(assessmentPointEnabled_, assessmentPointEnabled) };


      // customReplyRuleEnabled Field Functions 
      bool hasCustomReplyRuleEnabled() const { return this->customReplyRuleEnabled_ != nullptr;};
      void deleteCustomReplyRuleEnabled() { this->customReplyRuleEnabled_ = nullptr;};
      inline bool getCustomReplyRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(customReplyRuleEnabled_, false) };
      inline Weights& setCustomReplyRuleEnabled(bool customReplyRuleEnabled) { DARABONBA_PTR_SET_VALUE(customReplyRuleEnabled_, customReplyRuleEnabled) };


      // expressiveness Field Functions 
      bool hasExpressiveness() const { return this->expressiveness_ != nullptr;};
      void deleteExpressiveness() { this->expressiveness_ = nullptr;};
      inline int32_t getExpressiveness() const { DARABONBA_PTR_GET_DEFAULT(expressiveness_, 0) };
      inline Weights& setExpressiveness(int32_t expressiveness) { DARABONBA_PTR_SET_VALUE(expressiveness_, expressiveness) };


      // expressivenessEnabled Field Functions 
      bool hasExpressivenessEnabled() const { return this->expressivenessEnabled_ != nullptr;};
      void deleteExpressivenessEnabled() { this->expressivenessEnabled_ = nullptr;};
      inline bool getExpressivenessEnabled() const { DARABONBA_PTR_GET_DEFAULT(expressivenessEnabled_, false) };
      inline Weights& setExpressivenessEnabled(bool expressivenessEnabled) { DARABONBA_PTR_SET_VALUE(expressivenessEnabled_, expressivenessEnabled) };


      // pointDeductionRule Field Functions 
      bool hasPointDeductionRule() const { return this->pointDeductionRule_ != nullptr;};
      void deletePointDeductionRule() { this->pointDeductionRule_ = nullptr;};
      inline int32_t getPointDeductionRule() const { DARABONBA_PTR_GET_DEFAULT(pointDeductionRule_, 0) };
      inline Weights& setPointDeductionRule(int32_t pointDeductionRule) { DARABONBA_PTR_SET_VALUE(pointDeductionRule_, pointDeductionRule) };


      // pointDeductionRuleEnabled Field Functions 
      bool hasPointDeductionRuleEnabled() const { return this->pointDeductionRuleEnabled_ != nullptr;};
      void deletePointDeductionRuleEnabled() { this->pointDeductionRuleEnabled_ = nullptr;};
      inline bool getPointDeductionRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(pointDeductionRuleEnabled_, false) };
      inline Weights& setPointDeductionRuleEnabled(bool pointDeductionRuleEnabled) { DARABONBA_PTR_SET_VALUE(pointDeductionRuleEnabled_, pointDeductionRuleEnabled) };


      // similarPronunciationScoringEnabled Field Functions 
      bool hasSimilarPronunciationScoringEnabled() const { return this->similarPronunciationScoringEnabled_ != nullptr;};
      void deleteSimilarPronunciationScoringEnabled() { this->similarPronunciationScoringEnabled_ = nullptr;};
      inline bool getSimilarPronunciationScoringEnabled() const { DARABONBA_PTR_GET_DEFAULT(similarPronunciationScoringEnabled_, false) };
      inline Weights& setSimilarPronunciationScoringEnabled(bool similarPronunciationScoringEnabled) { DARABONBA_PTR_SET_VALUE(similarPronunciationScoringEnabled_, similarPronunciationScoringEnabled) };


      // standard Field Functions 
      bool hasStandard() const { return this->standard_ != nullptr;};
      void deleteStandard() { this->standard_ = nullptr;};
      inline int32_t getStandard() const { DARABONBA_PTR_GET_DEFAULT(standard_, 0) };
      inline Weights& setStandard(int32_t standard) { DARABONBA_PTR_SET_VALUE(standard_, standard) };


      // standardEnabled Field Functions 
      bool hasStandardEnabled() const { return this->standardEnabled_ != nullptr;};
      void deleteStandardEnabled() { this->standardEnabled_ = nullptr;};
      inline bool getStandardEnabled() const { DARABONBA_PTR_GET_DEFAULT(standardEnabled_, false) };
      inline Weights& setStandardEnabled(bool standardEnabled) { DARABONBA_PTR_SET_VALUE(standardEnabled_, standardEnabled) };


    protected:
      shared_ptr<int32_t> abilityEvaluation_ {};
      shared_ptr<bool> abilityEvaluationEnabled_ {};
      shared_ptr<int32_t> assessmentPoint_ {};
      shared_ptr<bool> assessmentPointEnabled_ {};
      shared_ptr<bool> customReplyRuleEnabled_ {};
      shared_ptr<int32_t> expressiveness_ {};
      shared_ptr<bool> expressivenessEnabled_ {};
      shared_ptr<int32_t> pointDeductionRule_ {};
      shared_ptr<bool> pointDeductionRuleEnabled_ {};
      shared_ptr<bool> similarPronunciationScoringEnabled_ {};
      shared_ptr<int32_t> standard_ {};
      shared_ptr<bool> standardEnabled_ {};
    };

    class ScoreConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScoreConfig& obj) { 
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(levelEnabled, levelEnabled_);
        DARABONBA_PTR_TO_JSON(levels, levels_);
        DARABONBA_PTR_TO_JSON(passScore, passScore_);
      };
      friend void from_json(const Darabonba::Json& j, ScoreConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(levelEnabled, levelEnabled_);
        DARABONBA_PTR_FROM_JSON(levels, levels_);
        DARABONBA_PTR_FROM_JSON(passScore, passScore_);
      };
      ScoreConfig() = default ;
      ScoreConfig(const ScoreConfig &) = default ;
      ScoreConfig(ScoreConfig &&) = default ;
      ScoreConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScoreConfig() = default ;
      ScoreConfig& operator=(const ScoreConfig &) = default ;
      ScoreConfig& operator=(ScoreConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Levels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Levels& obj) { 
          DARABONBA_PTR_TO_JSON(max, max_);
          DARABONBA_PTR_TO_JSON(min, min_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Levels& obj) { 
          DARABONBA_PTR_FROM_JSON(max, max_);
          DARABONBA_PTR_FROM_JSON(min, min_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        Levels() = default ;
        Levels(const Levels &) = default ;
        Levels(Levels &&) = default ;
        Levels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Levels() = default ;
        Levels& operator=(const Levels &) = default ;
        Levels& operator=(Levels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->max_ == nullptr
        && this->min_ == nullptr && this->name_ == nullptr; };
        // max Field Functions 
        bool hasMax() const { return this->max_ != nullptr;};
        void deleteMax() { this->max_ = nullptr;};
        inline int32_t getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
        inline Levels& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


        // min Field Functions 
        bool hasMin() const { return this->min_ != nullptr;};
        void deleteMin() { this->min_ = nullptr;};
        inline int32_t getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
        inline Levels& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Levels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<int32_t> max_ {};
        shared_ptr<int32_t> min_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->levelEnabled_ == nullptr && this->levels_ == nullptr && this->passScore_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline ScoreConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // levelEnabled Field Functions 
      bool hasLevelEnabled() const { return this->levelEnabled_ != nullptr;};
      void deleteLevelEnabled() { this->levelEnabled_ = nullptr;};
      inline bool getLevelEnabled() const { DARABONBA_PTR_GET_DEFAULT(levelEnabled_, false) };
      inline ScoreConfig& setLevelEnabled(bool levelEnabled) { DARABONBA_PTR_SET_VALUE(levelEnabled_, levelEnabled) };


      // levels Field Functions 
      bool hasLevels() const { return this->levels_ != nullptr;};
      void deleteLevels() { this->levels_ = nullptr;};
      inline const vector<ScoreConfig::Levels> & getLevels() const { DARABONBA_PTR_GET_CONST(levels_, vector<ScoreConfig::Levels>) };
      inline vector<ScoreConfig::Levels> getLevels() { DARABONBA_PTR_GET(levels_, vector<ScoreConfig::Levels>) };
      inline ScoreConfig& setLevels(const vector<ScoreConfig::Levels> & levels) { DARABONBA_PTR_SET_VALUE(levels_, levels) };
      inline ScoreConfig& setLevels(vector<ScoreConfig::Levels> && levels) { DARABONBA_PTR_SET_RVALUE(levels_, levels) };


      // passScore Field Functions 
      bool hasPassScore() const { return this->passScore_ != nullptr;};
      void deletePassScore() { this->passScore_ = nullptr;};
      inline string getPassScore() const { DARABONBA_PTR_GET_DEFAULT(passScore_, "") };
      inline ScoreConfig& setPassScore(string passScore) { DARABONBA_PTR_SET_VALUE(passScore_, passScore) };


    protected:
      shared_ptr<bool> enabled_ {};
      shared_ptr<bool> levelEnabled_ {};
      shared_ptr<vector<ScoreConfig::Levels>> levels_ {};
      shared_ptr<string> passScore_ {};
    };

    class SampleDialogueList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SampleDialogueList& obj) { 
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(role, role_);
      };
      friend void from_json(const Darabonba::Json& j, SampleDialogueList& obj) { 
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(role, role_);
      };
      SampleDialogueList() = default ;
      SampleDialogueList(const SampleDialogueList &) = default ;
      SampleDialogueList(SampleDialogueList &&) = default ;
      SampleDialogueList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SampleDialogueList() = default ;
      SampleDialogueList& operator=(const SampleDialogueList &) = default ;
      SampleDialogueList& operator=(SampleDialogueList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr
        && this->role_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline SampleDialogueList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline SampleDialogueList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      shared_ptr<string> message_ {};
      shared_ptr<string> role_ {};
    };

    class Points : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Points& obj) { 
        DARABONBA_PTR_TO_JSON(answerList, answerList_);
        DARABONBA_PTR_TO_JSON(knowledgeList, knowledgeList_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(pointId, pointId_);
        DARABONBA_PTR_TO_JSON(questionDescription, questionDescription_);
        DARABONBA_PTR_TO_JSON(sortNo, sortNo_);
        DARABONBA_PTR_TO_JSON(weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, Points& obj) { 
        DARABONBA_PTR_FROM_JSON(answerList, answerList_);
        DARABONBA_PTR_FROM_JSON(knowledgeList, knowledgeList_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(pointId, pointId_);
        DARABONBA_PTR_FROM_JSON(questionDescription, questionDescription_);
        DARABONBA_PTR_FROM_JSON(sortNo, sortNo_);
        DARABONBA_PTR_FROM_JSON(weight, weight_);
      };
      Points() = default ;
      Points(const Points &) = default ;
      Points(Points &&) = default ;
      Points(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Points() = default ;
      Points& operator=(const Points &) = default ;
      Points& operator=(Points &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AnswerList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AnswerList& obj) { 
          DARABONBA_PTR_TO_JSON(answerValues, answerValues_);
          DARABONBA_PTR_TO_JSON(enabledKeyword, enabledKeyword_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nameList, nameList_);
          DARABONBA_PTR_TO_JSON(operators, operators_);
          DARABONBA_PTR_TO_JSON(parameters, parameters_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, AnswerList& obj) { 
          DARABONBA_PTR_FROM_JSON(answerValues, answerValues_);
          DARABONBA_PTR_FROM_JSON(enabledKeyword, enabledKeyword_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nameList, nameList_);
          DARABONBA_PTR_FROM_JSON(operators, operators_);
          DARABONBA_PTR_FROM_JSON(parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(weight, weight_);
        };
        AnswerList() = default ;
        AnswerList(const AnswerList &) = default ;
        AnswerList(AnswerList &&) = default ;
        AnswerList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AnswerList() = default ;
        AnswerList& operator=(const AnswerList &) = default ;
        AnswerList& operator=(AnswerList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Parameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          Parameters() = default ;
          Parameters(const Parameters &) = default ;
          Parameters(Parameters &&) = default ;
          Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Parameters() = default ;
          Parameters& operator=(const Parameters &) = default ;
          Parameters& operator=(Parameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Parameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Parameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> name_ {};
          shared_ptr<string> value_ {};
        };

        class AnswerValues : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AnswerValues& obj) { 
            DARABONBA_PTR_TO_JSON(answerName, answerName_);
            DARABONBA_PTR_TO_JSON(answerWeight, answerWeight_);
            DARABONBA_PTR_TO_JSON(keywordValues, keywordValues_);
            DARABONBA_PTR_TO_JSON(keywordWeight, keywordWeight_);
            DARABONBA_PTR_TO_JSON(scoringRules, scoringRules_);
          };
          friend void from_json(const Darabonba::Json& j, AnswerValues& obj) { 
            DARABONBA_PTR_FROM_JSON(answerName, answerName_);
            DARABONBA_PTR_FROM_JSON(answerWeight, answerWeight_);
            DARABONBA_PTR_FROM_JSON(keywordValues, keywordValues_);
            DARABONBA_PTR_FROM_JSON(keywordWeight, keywordWeight_);
            DARABONBA_PTR_FROM_JSON(scoringRules, scoringRules_);
          };
          AnswerValues() = default ;
          AnswerValues(const AnswerValues &) = default ;
          AnswerValues(AnswerValues &&) = default ;
          AnswerValues(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AnswerValues() = default ;
          AnswerValues& operator=(const AnswerValues &) = default ;
          AnswerValues& operator=(AnswerValues &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ScoringRules : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ScoringRules& obj) { 
              DARABONBA_PTR_TO_JSON(name, name_);
            };
            friend void from_json(const Darabonba::Json& j, ScoringRules& obj) { 
              DARABONBA_PTR_FROM_JSON(name, name_);
            };
            ScoringRules() = default ;
            ScoringRules(const ScoringRules &) = default ;
            ScoringRules(ScoringRules &&) = default ;
            ScoringRules(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ScoringRules() = default ;
            ScoringRules& operator=(const ScoringRules &) = default ;
            ScoringRules& operator=(ScoringRules &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline ScoringRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          protected:
            shared_ptr<string> name_ {};
          };

          class KeywordValues : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const KeywordValues& obj) { 
              DARABONBA_PTR_TO_JSON(name, name_);
              DARABONBA_PTR_TO_JSON(weight, weight_);
            };
            friend void from_json(const Darabonba::Json& j, KeywordValues& obj) { 
              DARABONBA_PTR_FROM_JSON(name, name_);
              DARABONBA_PTR_FROM_JSON(weight, weight_);
            };
            KeywordValues() = default ;
            KeywordValues(const KeywordValues &) = default ;
            KeywordValues(KeywordValues &&) = default ;
            KeywordValues(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~KeywordValues() = default ;
            KeywordValues& operator=(const KeywordValues &) = default ;
            KeywordValues& operator=(KeywordValues &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->weight_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline KeywordValues& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // weight Field Functions 
            bool hasWeight() const { return this->weight_ != nullptr;};
            void deleteWeight() { this->weight_ = nullptr;};
            inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
            inline KeywordValues& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


          protected:
            shared_ptr<string> name_ {};
            shared_ptr<int32_t> weight_ {};
          };

          virtual bool empty() const override { return this->answerName_ == nullptr
        && this->answerWeight_ == nullptr && this->keywordValues_ == nullptr && this->keywordWeight_ == nullptr && this->scoringRules_ == nullptr; };
          // answerName Field Functions 
          bool hasAnswerName() const { return this->answerName_ != nullptr;};
          void deleteAnswerName() { this->answerName_ = nullptr;};
          inline string getAnswerName() const { DARABONBA_PTR_GET_DEFAULT(answerName_, "") };
          inline AnswerValues& setAnswerName(string answerName) { DARABONBA_PTR_SET_VALUE(answerName_, answerName) };


          // answerWeight Field Functions 
          bool hasAnswerWeight() const { return this->answerWeight_ != nullptr;};
          void deleteAnswerWeight() { this->answerWeight_ = nullptr;};
          inline int32_t getAnswerWeight() const { DARABONBA_PTR_GET_DEFAULT(answerWeight_, 0) };
          inline AnswerValues& setAnswerWeight(int32_t answerWeight) { DARABONBA_PTR_SET_VALUE(answerWeight_, answerWeight) };


          // keywordValues Field Functions 
          bool hasKeywordValues() const { return this->keywordValues_ != nullptr;};
          void deleteKeywordValues() { this->keywordValues_ = nullptr;};
          inline const vector<AnswerValues::KeywordValues> & getKeywordValues() const { DARABONBA_PTR_GET_CONST(keywordValues_, vector<AnswerValues::KeywordValues>) };
          inline vector<AnswerValues::KeywordValues> getKeywordValues() { DARABONBA_PTR_GET(keywordValues_, vector<AnswerValues::KeywordValues>) };
          inline AnswerValues& setKeywordValues(const vector<AnswerValues::KeywordValues> & keywordValues) { DARABONBA_PTR_SET_VALUE(keywordValues_, keywordValues) };
          inline AnswerValues& setKeywordValues(vector<AnswerValues::KeywordValues> && keywordValues) { DARABONBA_PTR_SET_RVALUE(keywordValues_, keywordValues) };


          // keywordWeight Field Functions 
          bool hasKeywordWeight() const { return this->keywordWeight_ != nullptr;};
          void deleteKeywordWeight() { this->keywordWeight_ = nullptr;};
          inline int32_t getKeywordWeight() const { DARABONBA_PTR_GET_DEFAULT(keywordWeight_, 0) };
          inline AnswerValues& setKeywordWeight(int32_t keywordWeight) { DARABONBA_PTR_SET_VALUE(keywordWeight_, keywordWeight) };


          // scoringRules Field Functions 
          bool hasScoringRules() const { return this->scoringRules_ != nullptr;};
          void deleteScoringRules() { this->scoringRules_ = nullptr;};
          inline const vector<AnswerValues::ScoringRules> & getScoringRules() const { DARABONBA_PTR_GET_CONST(scoringRules_, vector<AnswerValues::ScoringRules>) };
          inline vector<AnswerValues::ScoringRules> getScoringRules() { DARABONBA_PTR_GET(scoringRules_, vector<AnswerValues::ScoringRules>) };
          inline AnswerValues& setScoringRules(const vector<AnswerValues::ScoringRules> & scoringRules) { DARABONBA_PTR_SET_VALUE(scoringRules_, scoringRules) };
          inline AnswerValues& setScoringRules(vector<AnswerValues::ScoringRules> && scoringRules) { DARABONBA_PTR_SET_RVALUE(scoringRules_, scoringRules) };


        protected:
          shared_ptr<string> answerName_ {};
          shared_ptr<int32_t> answerWeight_ {};
          shared_ptr<vector<AnswerValues::KeywordValues>> keywordValues_ {};
          shared_ptr<int32_t> keywordWeight_ {};
          shared_ptr<vector<AnswerValues::ScoringRules>> scoringRules_ {};
        };

        virtual bool empty() const override { return this->answerValues_ == nullptr
        && this->enabledKeyword_ == nullptr && this->name_ == nullptr && this->nameList_ == nullptr && this->operators_ == nullptr && this->parameters_ == nullptr
        && this->type_ == nullptr && this->weight_ == nullptr; };
        // answerValues Field Functions 
        bool hasAnswerValues() const { return this->answerValues_ != nullptr;};
        void deleteAnswerValues() { this->answerValues_ = nullptr;};
        inline const vector<AnswerList::AnswerValues> & getAnswerValues() const { DARABONBA_PTR_GET_CONST(answerValues_, vector<AnswerList::AnswerValues>) };
        inline vector<AnswerList::AnswerValues> getAnswerValues() { DARABONBA_PTR_GET(answerValues_, vector<AnswerList::AnswerValues>) };
        inline AnswerList& setAnswerValues(const vector<AnswerList::AnswerValues> & answerValues) { DARABONBA_PTR_SET_VALUE(answerValues_, answerValues) };
        inline AnswerList& setAnswerValues(vector<AnswerList::AnswerValues> && answerValues) { DARABONBA_PTR_SET_RVALUE(answerValues_, answerValues) };


        // enabledKeyword Field Functions 
        bool hasEnabledKeyword() const { return this->enabledKeyword_ != nullptr;};
        void deleteEnabledKeyword() { this->enabledKeyword_ = nullptr;};
        inline bool getEnabledKeyword() const { DARABONBA_PTR_GET_DEFAULT(enabledKeyword_, false) };
        inline AnswerList& setEnabledKeyword(bool enabledKeyword) { DARABONBA_PTR_SET_VALUE(enabledKeyword_, enabledKeyword) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AnswerList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nameList Field Functions 
        bool hasNameList() const { return this->nameList_ != nullptr;};
        void deleteNameList() { this->nameList_ = nullptr;};
        inline const vector<string> & getNameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
        inline vector<string> getNameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
        inline AnswerList& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
        inline AnswerList& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


        // operators Field Functions 
        bool hasOperators() const { return this->operators_ != nullptr;};
        void deleteOperators() { this->operators_ = nullptr;};
        inline string getOperators() const { DARABONBA_PTR_GET_DEFAULT(operators_, "") };
        inline AnswerList& setOperators(string operators) { DARABONBA_PTR_SET_VALUE(operators_, operators) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline const vector<AnswerList::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<AnswerList::Parameters>) };
        inline vector<AnswerList::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<AnswerList::Parameters>) };
        inline AnswerList& setParameters(const vector<AnswerList::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
        inline AnswerList& setParameters(vector<AnswerList::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AnswerList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline AnswerList& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        shared_ptr<vector<AnswerList::AnswerValues>> answerValues_ {};
        shared_ptr<bool> enabledKeyword_ {};
        shared_ptr<string> name_ {};
        shared_ptr<vector<string>> nameList_ {};
        shared_ptr<string> operators_ {};
        shared_ptr<vector<AnswerList::Parameters>> parameters_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->answerList_ == nullptr
        && this->knowledgeList_ == nullptr && this->name_ == nullptr && this->pointId_ == nullptr && this->questionDescription_ == nullptr && this->sortNo_ == nullptr
        && this->weight_ == nullptr; };
      // answerList Field Functions 
      bool hasAnswerList() const { return this->answerList_ != nullptr;};
      void deleteAnswerList() { this->answerList_ = nullptr;};
      inline const vector<Points::AnswerList> & getAnswerList() const { DARABONBA_PTR_GET_CONST(answerList_, vector<Points::AnswerList>) };
      inline vector<Points::AnswerList> getAnswerList() { DARABONBA_PTR_GET(answerList_, vector<Points::AnswerList>) };
      inline Points& setAnswerList(const vector<Points::AnswerList> & answerList) { DARABONBA_PTR_SET_VALUE(answerList_, answerList) };
      inline Points& setAnswerList(vector<Points::AnswerList> && answerList) { DARABONBA_PTR_SET_RVALUE(answerList_, answerList) };


      // knowledgeList Field Functions 
      bool hasKnowledgeList() const { return this->knowledgeList_ != nullptr;};
      void deleteKnowledgeList() { this->knowledgeList_ = nullptr;};
      inline const vector<string> & getKnowledgeList() const { DARABONBA_PTR_GET_CONST(knowledgeList_, vector<string>) };
      inline vector<string> getKnowledgeList() { DARABONBA_PTR_GET(knowledgeList_, vector<string>) };
      inline Points& setKnowledgeList(const vector<string> & knowledgeList) { DARABONBA_PTR_SET_VALUE(knowledgeList_, knowledgeList) };
      inline Points& setKnowledgeList(vector<string> && knowledgeList) { DARABONBA_PTR_SET_RVALUE(knowledgeList_, knowledgeList) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Points& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // pointId Field Functions 
      bool hasPointId() const { return this->pointId_ != nullptr;};
      void deletePointId() { this->pointId_ = nullptr;};
      inline string getPointId() const { DARABONBA_PTR_GET_DEFAULT(pointId_, "") };
      inline Points& setPointId(string pointId) { DARABONBA_PTR_SET_VALUE(pointId_, pointId) };


      // questionDescription Field Functions 
      bool hasQuestionDescription() const { return this->questionDescription_ != nullptr;};
      void deleteQuestionDescription() { this->questionDescription_ = nullptr;};
      inline string getQuestionDescription() const { DARABONBA_PTR_GET_DEFAULT(questionDescription_, "") };
      inline Points& setQuestionDescription(string questionDescription) { DARABONBA_PTR_SET_VALUE(questionDescription_, questionDescription) };


      // sortNo Field Functions 
      bool hasSortNo() const { return this->sortNo_ != nullptr;};
      void deleteSortNo() { this->sortNo_ = nullptr;};
      inline int32_t getSortNo() const { DARABONBA_PTR_GET_DEFAULT(sortNo_, 0) };
      inline Points& setSortNo(int32_t sortNo) { DARABONBA_PTR_SET_VALUE(sortNo_, sortNo) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline Points& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      shared_ptr<vector<Points::AnswerList>> answerList_ {};
      shared_ptr<vector<string>> knowledgeList_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> pointId_ {};
      shared_ptr<string> questionDescription_ {};
      shared_ptr<int32_t> sortNo_ {};
      shared_ptr<int32_t> weight_ {};
    };

    class PointDeductionRuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PointDeductionRuleList& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(punishmentTypes, punishmentTypes_);
        DARABONBA_PTR_TO_JSON(ruleValue, ruleValue_);
        DARABONBA_PTR_TO_JSON(weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, PointDeductionRuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(punishmentTypes, punishmentTypes_);
        DARABONBA_PTR_FROM_JSON(ruleValue, ruleValue_);
        DARABONBA_PTR_FROM_JSON(weight, weight_);
      };
      PointDeductionRuleList() = default ;
      PointDeductionRuleList(const PointDeductionRuleList &) = default ;
      PointDeductionRuleList(PointDeductionRuleList &&) = default ;
      PointDeductionRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PointDeductionRuleList() = default ;
      PointDeductionRuleList& operator=(const PointDeductionRuleList &) = default ;
      PointDeductionRuleList& operator=(PointDeductionRuleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->punishmentTypes_ == nullptr && this->ruleValue_ == nullptr && this->weight_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PointDeductionRuleList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // punishmentTypes Field Functions 
      bool hasPunishmentTypes() const { return this->punishmentTypes_ != nullptr;};
      void deletePunishmentTypes() { this->punishmentTypes_ = nullptr;};
      inline const vector<string> & getPunishmentTypes() const { DARABONBA_PTR_GET_CONST(punishmentTypes_, vector<string>) };
      inline vector<string> getPunishmentTypes() { DARABONBA_PTR_GET(punishmentTypes_, vector<string>) };
      inline PointDeductionRuleList& setPunishmentTypes(const vector<string> & punishmentTypes) { DARABONBA_PTR_SET_VALUE(punishmentTypes_, punishmentTypes) };
      inline PointDeductionRuleList& setPunishmentTypes(vector<string> && punishmentTypes) { DARABONBA_PTR_SET_RVALUE(punishmentTypes_, punishmentTypes) };


      // ruleValue Field Functions 
      bool hasRuleValue() const { return this->ruleValue_ != nullptr;};
      void deleteRuleValue() { this->ruleValue_ = nullptr;};
      inline string getRuleValue() const { DARABONBA_PTR_GET_DEFAULT(ruleValue_, "") };
      inline PointDeductionRuleList& setRuleValue(string ruleValue) { DARABONBA_PTR_SET_VALUE(ruleValue_, ruleValue) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline PointDeductionRuleList& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<vector<string>> punishmentTypes_ {};
      shared_ptr<string> ruleValue_ {};
      shared_ptr<int32_t> weight_ {};
    };

    class ExpressivenessList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExpressivenessList& obj) { 
        DARABONBA_PTR_TO_JSON(desc, desc_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(expressivenessId, expressivenessId_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(rule, rule_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, ExpressivenessList& obj) { 
        DARABONBA_PTR_FROM_JSON(desc, desc_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(expressivenessId, expressivenessId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(rule, rule_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(weight, weight_);
      };
      ExpressivenessList() = default ;
      ExpressivenessList(const ExpressivenessList &) = default ;
      ExpressivenessList(ExpressivenessList &&) = default ;
      ExpressivenessList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExpressivenessList() = default ;
      ExpressivenessList& operator=(const ExpressivenessList &) = default ;
      ExpressivenessList& operator=(ExpressivenessList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desc_ == nullptr
        && this->enabled_ == nullptr && this->expressivenessId_ == nullptr && this->name_ == nullptr && this->rule_ == nullptr && this->type_ == nullptr
        && this->weight_ == nullptr; };
      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline ExpressivenessList& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline ExpressivenessList& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // expressivenessId Field Functions 
      bool hasExpressivenessId() const { return this->expressivenessId_ != nullptr;};
      void deleteExpressivenessId() { this->expressivenessId_ = nullptr;};
      inline string getExpressivenessId() const { DARABONBA_PTR_GET_DEFAULT(expressivenessId_, "") };
      inline ExpressivenessList& setExpressivenessId(string expressivenessId) { DARABONBA_PTR_SET_VALUE(expressivenessId_, expressivenessId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ExpressivenessList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // rule Field Functions 
      bool hasRule() const { return this->rule_ != nullptr;};
      void deleteRule() { this->rule_ = nullptr;};
      inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
      inline ExpressivenessList& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ExpressivenessList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline ExpressivenessList& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      shared_ptr<string> desc_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<string> expressivenessId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> rule_ {};
      shared_ptr<string> type_ {};
      shared_ptr<int32_t> weight_ {};
    };

    class CustomReplyRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomReplyRules& obj) { 
        DARABONBA_PTR_TO_JSON(action, action_);
        DARABONBA_PTR_TO_JSON(logic, logic_);
        DARABONBA_PTR_TO_JSON(mainCondition, mainCondition_);
        DARABONBA_PTR_TO_JSON(priority, priority_);
        DARABONBA_PTR_TO_JSON(subCondition, subCondition_);
      };
      friend void from_json(const Darabonba::Json& j, CustomReplyRules& obj) { 
        DARABONBA_PTR_FROM_JSON(action, action_);
        DARABONBA_PTR_FROM_JSON(logic, logic_);
        DARABONBA_PTR_FROM_JSON(mainCondition, mainCondition_);
        DARABONBA_PTR_FROM_JSON(priority, priority_);
        DARABONBA_PTR_FROM_JSON(subCondition, subCondition_);
      };
      CustomReplyRules() = default ;
      CustomReplyRules(const CustomReplyRules &) = default ;
      CustomReplyRules(CustomReplyRules &&) = default ;
      CustomReplyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomReplyRules() = default ;
      CustomReplyRules& operator=(const CustomReplyRules &) = default ;
      CustomReplyRules& operator=(CustomReplyRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubCondition : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubCondition& obj) { 
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, SubCondition& obj) { 
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        SubCondition() = default ;
        SubCondition(const SubCondition &) = default ;
        SubCondition(SubCondition &&) = default ;
        SubCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubCondition() = default ;
        SubCondition& operator=(const SubCondition &) = default ;
        SubCondition& operator=(SubCondition &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline SubCondition& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> type_ {};
      };

      class MainCondition : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MainCondition& obj) { 
          DARABONBA_PTR_TO_JSON(parameters, parameters_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, MainCondition& obj) { 
          DARABONBA_PTR_FROM_JSON(parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        MainCondition() = default ;
        MainCondition(const MainCondition &) = default ;
        MainCondition(MainCondition &&) = default ;
        MainCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MainCondition() = default ;
        MainCondition& operator=(const MainCondition &) = default ;
        MainCondition& operator=(MainCondition &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Parameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
            DARABONBA_PTR_TO_JSON(assessPointId, assessPointId_);
          };
          friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
            DARABONBA_PTR_FROM_JSON(assessPointId, assessPointId_);
          };
          Parameters() = default ;
          Parameters(const Parameters &) = default ;
          Parameters(Parameters &&) = default ;
          Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Parameters() = default ;
          Parameters& operator=(const Parameters &) = default ;
          Parameters& operator=(Parameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->assessPointId_ == nullptr; };
          // assessPointId Field Functions 
          bool hasAssessPointId() const { return this->assessPointId_ != nullptr;};
          void deleteAssessPointId() { this->assessPointId_ = nullptr;};
          inline string getAssessPointId() const { DARABONBA_PTR_GET_DEFAULT(assessPointId_, "") };
          inline Parameters& setAssessPointId(string assessPointId) { DARABONBA_PTR_SET_VALUE(assessPointId_, assessPointId) };


        protected:
          shared_ptr<string> assessPointId_ {};
        };

        virtual bool empty() const override { return this->parameters_ == nullptr
        && this->type_ == nullptr; };
        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline const MainCondition::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, MainCondition::Parameters) };
        inline MainCondition::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, MainCondition::Parameters) };
        inline MainCondition& setParameters(const MainCondition::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
        inline MainCondition& setParameters(MainCondition::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline MainCondition& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<MainCondition::Parameters> parameters_ {};
        shared_ptr<string> type_ {};
      };

      class Action : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Action& obj) { 
          DARABONBA_PTR_TO_JSON(parameters, parameters_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Action& obj) { 
          DARABONBA_PTR_FROM_JSON(parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Action() = default ;
        Action(const Action &) = default ;
        Action(Action &&) = default ;
        Action(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Action() = default ;
        Action& operator=(const Action &) = default ;
        Action& operator=(Action &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Parameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
            DARABONBA_PTR_TO_JSON(assessPointId, assessPointId_);
            DARABONBA_PTR_TO_JSON(customContent, customContent_);
          };
          friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
            DARABONBA_PTR_FROM_JSON(assessPointId, assessPointId_);
            DARABONBA_PTR_FROM_JSON(customContent, customContent_);
          };
          Parameters() = default ;
          Parameters(const Parameters &) = default ;
          Parameters(Parameters &&) = default ;
          Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Parameters() = default ;
          Parameters& operator=(const Parameters &) = default ;
          Parameters& operator=(Parameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->assessPointId_ == nullptr
        && this->customContent_ == nullptr; };
          // assessPointId Field Functions 
          bool hasAssessPointId() const { return this->assessPointId_ != nullptr;};
          void deleteAssessPointId() { this->assessPointId_ = nullptr;};
          inline string getAssessPointId() const { DARABONBA_PTR_GET_DEFAULT(assessPointId_, "") };
          inline Parameters& setAssessPointId(string assessPointId) { DARABONBA_PTR_SET_VALUE(assessPointId_, assessPointId) };


          // customContent Field Functions 
          bool hasCustomContent() const { return this->customContent_ != nullptr;};
          void deleteCustomContent() { this->customContent_ = nullptr;};
          inline string getCustomContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
          inline Parameters& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


        protected:
          shared_ptr<string> assessPointId_ {};
          shared_ptr<string> customContent_ {};
        };

        virtual bool empty() const override { return this->parameters_ == nullptr
        && this->type_ == nullptr; };
        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline const Action::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, Action::Parameters) };
        inline Action::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, Action::Parameters) };
        inline Action& setParameters(const Action::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
        inline Action& setParameters(Action::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Action& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<Action::Parameters> parameters_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->action_ == nullptr
        && this->logic_ == nullptr && this->mainCondition_ == nullptr && this->priority_ == nullptr && this->subCondition_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline const CustomReplyRules::Action & getAction() const { DARABONBA_PTR_GET_CONST(action_, CustomReplyRules::Action) };
      inline CustomReplyRules::Action getAction() { DARABONBA_PTR_GET(action_, CustomReplyRules::Action) };
      inline CustomReplyRules& setAction(const CustomReplyRules::Action & action) { DARABONBA_PTR_SET_VALUE(action_, action) };
      inline CustomReplyRules& setAction(CustomReplyRules::Action && action) { DARABONBA_PTR_SET_RVALUE(action_, action) };


      // logic Field Functions 
      bool hasLogic() const { return this->logic_ != nullptr;};
      void deleteLogic() { this->logic_ = nullptr;};
      inline string getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, "") };
      inline CustomReplyRules& setLogic(string logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


      // mainCondition Field Functions 
      bool hasMainCondition() const { return this->mainCondition_ != nullptr;};
      void deleteMainCondition() { this->mainCondition_ = nullptr;};
      inline const CustomReplyRules::MainCondition & getMainCondition() const { DARABONBA_PTR_GET_CONST(mainCondition_, CustomReplyRules::MainCondition) };
      inline CustomReplyRules::MainCondition getMainCondition() { DARABONBA_PTR_GET(mainCondition_, CustomReplyRules::MainCondition) };
      inline CustomReplyRules& setMainCondition(const CustomReplyRules::MainCondition & mainCondition) { DARABONBA_PTR_SET_VALUE(mainCondition_, mainCondition) };
      inline CustomReplyRules& setMainCondition(CustomReplyRules::MainCondition && mainCondition) { DARABONBA_PTR_SET_RVALUE(mainCondition_, mainCondition) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline CustomReplyRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // subCondition Field Functions 
      bool hasSubCondition() const { return this->subCondition_ != nullptr;};
      void deleteSubCondition() { this->subCondition_ = nullptr;};
      inline const CustomReplyRules::SubCondition & getSubCondition() const { DARABONBA_PTR_GET_CONST(subCondition_, CustomReplyRules::SubCondition) };
      inline CustomReplyRules::SubCondition getSubCondition() { DARABONBA_PTR_GET(subCondition_, CustomReplyRules::SubCondition) };
      inline CustomReplyRules& setSubCondition(const CustomReplyRules::SubCondition & subCondition) { DARABONBA_PTR_SET_VALUE(subCondition_, subCondition) };
      inline CustomReplyRules& setSubCondition(CustomReplyRules::SubCondition && subCondition) { DARABONBA_PTR_SET_RVALUE(subCondition_, subCondition) };


    protected:
      shared_ptr<CustomReplyRules::Action> action_ {};
      shared_ptr<string> logic_ {};
      shared_ptr<CustomReplyRules::MainCondition> mainCondition_ {};
      shared_ptr<int32_t> priority_ {};
      shared_ptr<CustomReplyRules::SubCondition> subCondition_ {};
    };

    class CompleteStrategy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CompleteStrategy& obj) { 
        DARABONBA_PTR_TO_JSON(abnormalQuitSessionExpired, abnormalQuitSessionExpired_);
        DARABONBA_PTR_TO_JSON(abnormalQuitSessionExpiredFlag, abnormalQuitSessionExpiredFlag_);
        DARABONBA_PTR_TO_JSON(clickCompleteAutoEnd, clickCompleteAutoEnd_);
        DARABONBA_PTR_TO_JSON(duration, duration_);
        DARABONBA_PTR_TO_JSON(durationFlag, durationFlag_);
        DARABONBA_PTR_TO_JSON(fullCoverageAutoEnd, fullCoverageAutoEnd_);
      };
      friend void from_json(const Darabonba::Json& j, CompleteStrategy& obj) { 
        DARABONBA_PTR_FROM_JSON(abnormalQuitSessionExpired, abnormalQuitSessionExpired_);
        DARABONBA_PTR_FROM_JSON(abnormalQuitSessionExpiredFlag, abnormalQuitSessionExpiredFlag_);
        DARABONBA_PTR_FROM_JSON(clickCompleteAutoEnd, clickCompleteAutoEnd_);
        DARABONBA_PTR_FROM_JSON(duration, duration_);
        DARABONBA_PTR_FROM_JSON(durationFlag, durationFlag_);
        DARABONBA_PTR_FROM_JSON(fullCoverageAutoEnd, fullCoverageAutoEnd_);
      };
      CompleteStrategy() = default ;
      CompleteStrategy(const CompleteStrategy &) = default ;
      CompleteStrategy(CompleteStrategy &&) = default ;
      CompleteStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CompleteStrategy() = default ;
      CompleteStrategy& operator=(const CompleteStrategy &) = default ;
      CompleteStrategy& operator=(CompleteStrategy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->abnormalQuitSessionExpired_ == nullptr
        && this->abnormalQuitSessionExpiredFlag_ == nullptr && this->clickCompleteAutoEnd_ == nullptr && this->duration_ == nullptr && this->durationFlag_ == nullptr && this->fullCoverageAutoEnd_ == nullptr; };
      // abnormalQuitSessionExpired Field Functions 
      bool hasAbnormalQuitSessionExpired() const { return this->abnormalQuitSessionExpired_ != nullptr;};
      void deleteAbnormalQuitSessionExpired() { this->abnormalQuitSessionExpired_ = nullptr;};
      inline int32_t getAbnormalQuitSessionExpired() const { DARABONBA_PTR_GET_DEFAULT(abnormalQuitSessionExpired_, 0) };
      inline CompleteStrategy& setAbnormalQuitSessionExpired(int32_t abnormalQuitSessionExpired) { DARABONBA_PTR_SET_VALUE(abnormalQuitSessionExpired_, abnormalQuitSessionExpired) };


      // abnormalQuitSessionExpiredFlag Field Functions 
      bool hasAbnormalQuitSessionExpiredFlag() const { return this->abnormalQuitSessionExpiredFlag_ != nullptr;};
      void deleteAbnormalQuitSessionExpiredFlag() { this->abnormalQuitSessionExpiredFlag_ = nullptr;};
      inline bool getAbnormalQuitSessionExpiredFlag() const { DARABONBA_PTR_GET_DEFAULT(abnormalQuitSessionExpiredFlag_, false) };
      inline CompleteStrategy& setAbnormalQuitSessionExpiredFlag(bool abnormalQuitSessionExpiredFlag) { DARABONBA_PTR_SET_VALUE(abnormalQuitSessionExpiredFlag_, abnormalQuitSessionExpiredFlag) };


      // clickCompleteAutoEnd Field Functions 
      bool hasClickCompleteAutoEnd() const { return this->clickCompleteAutoEnd_ != nullptr;};
      void deleteClickCompleteAutoEnd() { this->clickCompleteAutoEnd_ = nullptr;};
      inline bool getClickCompleteAutoEnd() const { DARABONBA_PTR_GET_DEFAULT(clickCompleteAutoEnd_, false) };
      inline CompleteStrategy& setClickCompleteAutoEnd(bool clickCompleteAutoEnd) { DARABONBA_PTR_SET_VALUE(clickCompleteAutoEnd_, clickCompleteAutoEnd) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
      inline CompleteStrategy& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // durationFlag Field Functions 
      bool hasDurationFlag() const { return this->durationFlag_ != nullptr;};
      void deleteDurationFlag() { this->durationFlag_ = nullptr;};
      inline bool getDurationFlag() const { DARABONBA_PTR_GET_DEFAULT(durationFlag_, false) };
      inline CompleteStrategy& setDurationFlag(bool durationFlag) { DARABONBA_PTR_SET_VALUE(durationFlag_, durationFlag) };


      // fullCoverageAutoEnd Field Functions 
      bool hasFullCoverageAutoEnd() const { return this->fullCoverageAutoEnd_ != nullptr;};
      void deleteFullCoverageAutoEnd() { this->fullCoverageAutoEnd_ = nullptr;};
      inline bool getFullCoverageAutoEnd() const { DARABONBA_PTR_GET_DEFAULT(fullCoverageAutoEnd_, false) };
      inline CompleteStrategy& setFullCoverageAutoEnd(bool fullCoverageAutoEnd) { DARABONBA_PTR_SET_VALUE(fullCoverageAutoEnd_, fullCoverageAutoEnd) };


    protected:
      shared_ptr<int32_t> abnormalQuitSessionExpired_ {};
      shared_ptr<bool> abnormalQuitSessionExpiredFlag_ {};
      shared_ptr<bool> clickCompleteAutoEnd_ {};
      shared_ptr<int32_t> duration_ {};
      shared_ptr<bool> durationFlag_ {};
      shared_ptr<bool> fullCoverageAutoEnd_ {};
    };

    class CheckCheatConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckCheatConfig& obj) { 
        DARABONBA_PTR_TO_JSON(checkImage, checkImage_);
        DARABONBA_PTR_TO_JSON(checkVoice, checkVoice_);
      };
      friend void from_json(const Darabonba::Json& j, CheckCheatConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(checkImage, checkImage_);
        DARABONBA_PTR_FROM_JSON(checkVoice, checkVoice_);
      };
      CheckCheatConfig() = default ;
      CheckCheatConfig(const CheckCheatConfig &) = default ;
      CheckCheatConfig(CheckCheatConfig &&) = default ;
      CheckCheatConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckCheatConfig() = default ;
      CheckCheatConfig& operator=(const CheckCheatConfig &) = default ;
      CheckCheatConfig& operator=(CheckCheatConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkImage_ == nullptr
        && this->checkVoice_ == nullptr; };
      // checkImage Field Functions 
      bool hasCheckImage() const { return this->checkImage_ != nullptr;};
      void deleteCheckImage() { this->checkImage_ = nullptr;};
      inline bool getCheckImage() const { DARABONBA_PTR_GET_DEFAULT(checkImage_, false) };
      inline CheckCheatConfig& setCheckImage(bool checkImage) { DARABONBA_PTR_SET_VALUE(checkImage_, checkImage) };


      // checkVoice Field Functions 
      bool hasCheckVoice() const { return this->checkVoice_ != nullptr;};
      void deleteCheckVoice() { this->checkVoice_ = nullptr;};
      inline bool getCheckVoice() const { DARABONBA_PTR_GET_DEFAULT(checkVoice_, false) };
      inline CheckCheatConfig& setCheckVoice(bool checkVoice) { DARABONBA_PTR_SET_VALUE(checkVoice_, checkVoice) };


    protected:
      shared_ptr<bool> checkImage_ {};
      shared_ptr<bool> checkVoice_ {};
    };

    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->appendQuestionFlag_ == nullptr && this->assessmentScope_ == nullptr && this->checkCheatConfig_ == nullptr && this->closingRemarks_ == nullptr && this->completeStrategy_ == nullptr
        && this->coverUrl_ == nullptr && this->customReplyRules_ == nullptr && this->dialogueInputTextLimit_ == nullptr && this->dialogueTextFlag_ == nullptr && this->dialogueTipFlag_ == nullptr
        && this->dialogueVoiceLimit_ == nullptr && this->evaluateReportFlag_ == nullptr && this->expressiveness_ == nullptr && this->expressivenessList_ == nullptr && this->gifDynamicUrl_ == nullptr
        && this->gifStaticUrl_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->initiator_ == nullptr && this->interactionInputTypes_ == nullptr
        && this->interactionType_ == nullptr && this->introduce_ == nullptr && this->name_ == nullptr && this->openingRemarks_ == nullptr && this->orderAckFlag_ == nullptr
        && this->pointDeductionRuleList_ == nullptr && this->points_ == nullptr && this->requestId_ == nullptr && this->sampleDialogueList_ == nullptr && this->scoreConfig_ == nullptr
        && this->scriptRecordId_ == nullptr && this->sparringTipContent_ == nullptr && this->sparringTipTitle_ == nullptr && this->status_ == nullptr && this->studentThinkTimeFlag_ == nullptr
        && this->studentThinkTimeLimit_ == nullptr && this->type_ == nullptr && this->voiceId_ == nullptr && this->voiceLanguage_ == nullptr && this->weights_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline GetAICoachScriptResponseBody& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // appendQuestionFlag Field Functions 
    bool hasAppendQuestionFlag() const { return this->appendQuestionFlag_ != nullptr;};
    void deleteAppendQuestionFlag() { this->appendQuestionFlag_ = nullptr;};
    inline bool getAppendQuestionFlag() const { DARABONBA_PTR_GET_DEFAULT(appendQuestionFlag_, false) };
    inline GetAICoachScriptResponseBody& setAppendQuestionFlag(bool appendQuestionFlag) { DARABONBA_PTR_SET_VALUE(appendQuestionFlag_, appendQuestionFlag) };


    // assessmentScope Field Functions 
    bool hasAssessmentScope() const { return this->assessmentScope_ != nullptr;};
    void deleteAssessmentScope() { this->assessmentScope_ = nullptr;};
    inline string getAssessmentScope() const { DARABONBA_PTR_GET_DEFAULT(assessmentScope_, "") };
    inline GetAICoachScriptResponseBody& setAssessmentScope(string assessmentScope) { DARABONBA_PTR_SET_VALUE(assessmentScope_, assessmentScope) };


    // checkCheatConfig Field Functions 
    bool hasCheckCheatConfig() const { return this->checkCheatConfig_ != nullptr;};
    void deleteCheckCheatConfig() { this->checkCheatConfig_ = nullptr;};
    inline const GetAICoachScriptResponseBody::CheckCheatConfig & getCheckCheatConfig() const { DARABONBA_PTR_GET_CONST(checkCheatConfig_, GetAICoachScriptResponseBody::CheckCheatConfig) };
    inline GetAICoachScriptResponseBody::CheckCheatConfig getCheckCheatConfig() { DARABONBA_PTR_GET(checkCheatConfig_, GetAICoachScriptResponseBody::CheckCheatConfig) };
    inline GetAICoachScriptResponseBody& setCheckCheatConfig(const GetAICoachScriptResponseBody::CheckCheatConfig & checkCheatConfig) { DARABONBA_PTR_SET_VALUE(checkCheatConfig_, checkCheatConfig) };
    inline GetAICoachScriptResponseBody& setCheckCheatConfig(GetAICoachScriptResponseBody::CheckCheatConfig && checkCheatConfig) { DARABONBA_PTR_SET_RVALUE(checkCheatConfig_, checkCheatConfig) };


    // closingRemarks Field Functions 
    bool hasClosingRemarks() const { return this->closingRemarks_ != nullptr;};
    void deleteClosingRemarks() { this->closingRemarks_ = nullptr;};
    inline string getClosingRemarks() const { DARABONBA_PTR_GET_DEFAULT(closingRemarks_, "") };
    inline GetAICoachScriptResponseBody& setClosingRemarks(string closingRemarks) { DARABONBA_PTR_SET_VALUE(closingRemarks_, closingRemarks) };


    // completeStrategy Field Functions 
    bool hasCompleteStrategy() const { return this->completeStrategy_ != nullptr;};
    void deleteCompleteStrategy() { this->completeStrategy_ = nullptr;};
    inline const GetAICoachScriptResponseBody::CompleteStrategy & getCompleteStrategy() const { DARABONBA_PTR_GET_CONST(completeStrategy_, GetAICoachScriptResponseBody::CompleteStrategy) };
    inline GetAICoachScriptResponseBody::CompleteStrategy getCompleteStrategy() { DARABONBA_PTR_GET(completeStrategy_, GetAICoachScriptResponseBody::CompleteStrategy) };
    inline GetAICoachScriptResponseBody& setCompleteStrategy(const GetAICoachScriptResponseBody::CompleteStrategy & completeStrategy) { DARABONBA_PTR_SET_VALUE(completeStrategy_, completeStrategy) };
    inline GetAICoachScriptResponseBody& setCompleteStrategy(GetAICoachScriptResponseBody::CompleteStrategy && completeStrategy) { DARABONBA_PTR_SET_RVALUE(completeStrategy_, completeStrategy) };


    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline GetAICoachScriptResponseBody& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // customReplyRules Field Functions 
    bool hasCustomReplyRules() const { return this->customReplyRules_ != nullptr;};
    void deleteCustomReplyRules() { this->customReplyRules_ = nullptr;};
    inline const vector<GetAICoachScriptResponseBody::CustomReplyRules> & getCustomReplyRules() const { DARABONBA_PTR_GET_CONST(customReplyRules_, vector<GetAICoachScriptResponseBody::CustomReplyRules>) };
    inline vector<GetAICoachScriptResponseBody::CustomReplyRules> getCustomReplyRules() { DARABONBA_PTR_GET(customReplyRules_, vector<GetAICoachScriptResponseBody::CustomReplyRules>) };
    inline GetAICoachScriptResponseBody& setCustomReplyRules(const vector<GetAICoachScriptResponseBody::CustomReplyRules> & customReplyRules) { DARABONBA_PTR_SET_VALUE(customReplyRules_, customReplyRules) };
    inline GetAICoachScriptResponseBody& setCustomReplyRules(vector<GetAICoachScriptResponseBody::CustomReplyRules> && customReplyRules) { DARABONBA_PTR_SET_RVALUE(customReplyRules_, customReplyRules) };


    // dialogueInputTextLimit Field Functions 
    bool hasDialogueInputTextLimit() const { return this->dialogueInputTextLimit_ != nullptr;};
    void deleteDialogueInputTextLimit() { this->dialogueInputTextLimit_ = nullptr;};
    inline int32_t getDialogueInputTextLimit() const { DARABONBA_PTR_GET_DEFAULT(dialogueInputTextLimit_, 0) };
    inline GetAICoachScriptResponseBody& setDialogueInputTextLimit(int32_t dialogueInputTextLimit) { DARABONBA_PTR_SET_VALUE(dialogueInputTextLimit_, dialogueInputTextLimit) };


    // dialogueTextFlag Field Functions 
    bool hasDialogueTextFlag() const { return this->dialogueTextFlag_ != nullptr;};
    void deleteDialogueTextFlag() { this->dialogueTextFlag_ = nullptr;};
    inline bool getDialogueTextFlag() const { DARABONBA_PTR_GET_DEFAULT(dialogueTextFlag_, false) };
    inline GetAICoachScriptResponseBody& setDialogueTextFlag(bool dialogueTextFlag) { DARABONBA_PTR_SET_VALUE(dialogueTextFlag_, dialogueTextFlag) };


    // dialogueTipFlag Field Functions 
    bool hasDialogueTipFlag() const { return this->dialogueTipFlag_ != nullptr;};
    void deleteDialogueTipFlag() { this->dialogueTipFlag_ = nullptr;};
    inline bool getDialogueTipFlag() const { DARABONBA_PTR_GET_DEFAULT(dialogueTipFlag_, false) };
    inline GetAICoachScriptResponseBody& setDialogueTipFlag(bool dialogueTipFlag) { DARABONBA_PTR_SET_VALUE(dialogueTipFlag_, dialogueTipFlag) };


    // dialogueVoiceLimit Field Functions 
    bool hasDialogueVoiceLimit() const { return this->dialogueVoiceLimit_ != nullptr;};
    void deleteDialogueVoiceLimit() { this->dialogueVoiceLimit_ = nullptr;};
    inline int32_t getDialogueVoiceLimit() const { DARABONBA_PTR_GET_DEFAULT(dialogueVoiceLimit_, 0) };
    inline GetAICoachScriptResponseBody& setDialogueVoiceLimit(int32_t dialogueVoiceLimit) { DARABONBA_PTR_SET_VALUE(dialogueVoiceLimit_, dialogueVoiceLimit) };


    // evaluateReportFlag Field Functions 
    bool hasEvaluateReportFlag() const { return this->evaluateReportFlag_ != nullptr;};
    void deleteEvaluateReportFlag() { this->evaluateReportFlag_ = nullptr;};
    inline bool getEvaluateReportFlag() const { DARABONBA_PTR_GET_DEFAULT(evaluateReportFlag_, false) };
    inline GetAICoachScriptResponseBody& setEvaluateReportFlag(bool evaluateReportFlag) { DARABONBA_PTR_SET_VALUE(evaluateReportFlag_, evaluateReportFlag) };


    // expressiveness Field Functions 
    bool hasExpressiveness() const { return this->expressiveness_ != nullptr;};
    void deleteExpressiveness() { this->expressiveness_ = nullptr;};
    inline const map<string, int32_t> & getExpressiveness() const { DARABONBA_PTR_GET_CONST(expressiveness_, map<string, int32_t>) };
    inline map<string, int32_t> getExpressiveness() { DARABONBA_PTR_GET(expressiveness_, map<string, int32_t>) };
    inline GetAICoachScriptResponseBody& setExpressiveness(const map<string, int32_t> & expressiveness) { DARABONBA_PTR_SET_VALUE(expressiveness_, expressiveness) };
    inline GetAICoachScriptResponseBody& setExpressiveness(map<string, int32_t> && expressiveness) { DARABONBA_PTR_SET_RVALUE(expressiveness_, expressiveness) };


    // expressivenessList Field Functions 
    bool hasExpressivenessList() const { return this->expressivenessList_ != nullptr;};
    void deleteExpressivenessList() { this->expressivenessList_ = nullptr;};
    inline const vector<GetAICoachScriptResponseBody::ExpressivenessList> & getExpressivenessList() const { DARABONBA_PTR_GET_CONST(expressivenessList_, vector<GetAICoachScriptResponseBody::ExpressivenessList>) };
    inline vector<GetAICoachScriptResponseBody::ExpressivenessList> getExpressivenessList() { DARABONBA_PTR_GET(expressivenessList_, vector<GetAICoachScriptResponseBody::ExpressivenessList>) };
    inline GetAICoachScriptResponseBody& setExpressivenessList(const vector<GetAICoachScriptResponseBody::ExpressivenessList> & expressivenessList) { DARABONBA_PTR_SET_VALUE(expressivenessList_, expressivenessList) };
    inline GetAICoachScriptResponseBody& setExpressivenessList(vector<GetAICoachScriptResponseBody::ExpressivenessList> && expressivenessList) { DARABONBA_PTR_SET_RVALUE(expressivenessList_, expressivenessList) };


    // gifDynamicUrl Field Functions 
    bool hasGifDynamicUrl() const { return this->gifDynamicUrl_ != nullptr;};
    void deleteGifDynamicUrl() { this->gifDynamicUrl_ = nullptr;};
    inline string getGifDynamicUrl() const { DARABONBA_PTR_GET_DEFAULT(gifDynamicUrl_, "") };
    inline GetAICoachScriptResponseBody& setGifDynamicUrl(string gifDynamicUrl) { DARABONBA_PTR_SET_VALUE(gifDynamicUrl_, gifDynamicUrl) };


    // gifStaticUrl Field Functions 
    bool hasGifStaticUrl() const { return this->gifStaticUrl_ != nullptr;};
    void deleteGifStaticUrl() { this->gifStaticUrl_ = nullptr;};
    inline string getGifStaticUrl() const { DARABONBA_PTR_GET_DEFAULT(gifStaticUrl_, "") };
    inline GetAICoachScriptResponseBody& setGifStaticUrl(string gifStaticUrl) { DARABONBA_PTR_SET_VALUE(gifStaticUrl_, gifStaticUrl) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetAICoachScriptResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetAICoachScriptResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // initiator Field Functions 
    bool hasInitiator() const { return this->initiator_ != nullptr;};
    void deleteInitiator() { this->initiator_ = nullptr;};
    inline string getInitiator() const { DARABONBA_PTR_GET_DEFAULT(initiator_, "") };
    inline GetAICoachScriptResponseBody& setInitiator(string initiator) { DARABONBA_PTR_SET_VALUE(initiator_, initiator) };


    // interactionInputTypes Field Functions 
    bool hasInteractionInputTypes() const { return this->interactionInputTypes_ != nullptr;};
    void deleteInteractionInputTypes() { this->interactionInputTypes_ = nullptr;};
    inline const vector<string> & getInteractionInputTypes() const { DARABONBA_PTR_GET_CONST(interactionInputTypes_, vector<string>) };
    inline vector<string> getInteractionInputTypes() { DARABONBA_PTR_GET(interactionInputTypes_, vector<string>) };
    inline GetAICoachScriptResponseBody& setInteractionInputTypes(const vector<string> & interactionInputTypes) { DARABONBA_PTR_SET_VALUE(interactionInputTypes_, interactionInputTypes) };
    inline GetAICoachScriptResponseBody& setInteractionInputTypes(vector<string> && interactionInputTypes) { DARABONBA_PTR_SET_RVALUE(interactionInputTypes_, interactionInputTypes) };


    // interactionType Field Functions 
    bool hasInteractionType() const { return this->interactionType_ != nullptr;};
    void deleteInteractionType() { this->interactionType_ = nullptr;};
    inline int32_t getInteractionType() const { DARABONBA_PTR_GET_DEFAULT(interactionType_, 0) };
    inline GetAICoachScriptResponseBody& setInteractionType(int32_t interactionType) { DARABONBA_PTR_SET_VALUE(interactionType_, interactionType) };


    // introduce Field Functions 
    bool hasIntroduce() const { return this->introduce_ != nullptr;};
    void deleteIntroduce() { this->introduce_ = nullptr;};
    inline string getIntroduce() const { DARABONBA_PTR_GET_DEFAULT(introduce_, "") };
    inline GetAICoachScriptResponseBody& setIntroduce(string introduce) { DARABONBA_PTR_SET_VALUE(introduce_, introduce) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAICoachScriptResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // openingRemarks Field Functions 
    bool hasOpeningRemarks() const { return this->openingRemarks_ != nullptr;};
    void deleteOpeningRemarks() { this->openingRemarks_ = nullptr;};
    inline string getOpeningRemarks() const { DARABONBA_PTR_GET_DEFAULT(openingRemarks_, "") };
    inline GetAICoachScriptResponseBody& setOpeningRemarks(string openingRemarks) { DARABONBA_PTR_SET_VALUE(openingRemarks_, openingRemarks) };


    // orderAckFlag Field Functions 
    bool hasOrderAckFlag() const { return this->orderAckFlag_ != nullptr;};
    void deleteOrderAckFlag() { this->orderAckFlag_ = nullptr;};
    inline bool getOrderAckFlag() const { DARABONBA_PTR_GET_DEFAULT(orderAckFlag_, false) };
    inline GetAICoachScriptResponseBody& setOrderAckFlag(bool orderAckFlag) { DARABONBA_PTR_SET_VALUE(orderAckFlag_, orderAckFlag) };


    // pointDeductionRuleList Field Functions 
    bool hasPointDeductionRuleList() const { return this->pointDeductionRuleList_ != nullptr;};
    void deletePointDeductionRuleList() { this->pointDeductionRuleList_ = nullptr;};
    inline const vector<GetAICoachScriptResponseBody::PointDeductionRuleList> & getPointDeductionRuleList() const { DARABONBA_PTR_GET_CONST(pointDeductionRuleList_, vector<GetAICoachScriptResponseBody::PointDeductionRuleList>) };
    inline vector<GetAICoachScriptResponseBody::PointDeductionRuleList> getPointDeductionRuleList() { DARABONBA_PTR_GET(pointDeductionRuleList_, vector<GetAICoachScriptResponseBody::PointDeductionRuleList>) };
    inline GetAICoachScriptResponseBody& setPointDeductionRuleList(const vector<GetAICoachScriptResponseBody::PointDeductionRuleList> & pointDeductionRuleList) { DARABONBA_PTR_SET_VALUE(pointDeductionRuleList_, pointDeductionRuleList) };
    inline GetAICoachScriptResponseBody& setPointDeductionRuleList(vector<GetAICoachScriptResponseBody::PointDeductionRuleList> && pointDeductionRuleList) { DARABONBA_PTR_SET_RVALUE(pointDeductionRuleList_, pointDeductionRuleList) };


    // points Field Functions 
    bool hasPoints() const { return this->points_ != nullptr;};
    void deletePoints() { this->points_ = nullptr;};
    inline const vector<GetAICoachScriptResponseBody::Points> & getPoints() const { DARABONBA_PTR_GET_CONST(points_, vector<GetAICoachScriptResponseBody::Points>) };
    inline vector<GetAICoachScriptResponseBody::Points> getPoints() { DARABONBA_PTR_GET(points_, vector<GetAICoachScriptResponseBody::Points>) };
    inline GetAICoachScriptResponseBody& setPoints(const vector<GetAICoachScriptResponseBody::Points> & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
    inline GetAICoachScriptResponseBody& setPoints(vector<GetAICoachScriptResponseBody::Points> && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAICoachScriptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sampleDialogueList Field Functions 
    bool hasSampleDialogueList() const { return this->sampleDialogueList_ != nullptr;};
    void deleteSampleDialogueList() { this->sampleDialogueList_ = nullptr;};
    inline const vector<GetAICoachScriptResponseBody::SampleDialogueList> & getSampleDialogueList() const { DARABONBA_PTR_GET_CONST(sampleDialogueList_, vector<GetAICoachScriptResponseBody::SampleDialogueList>) };
    inline vector<GetAICoachScriptResponseBody::SampleDialogueList> getSampleDialogueList() { DARABONBA_PTR_GET(sampleDialogueList_, vector<GetAICoachScriptResponseBody::SampleDialogueList>) };
    inline GetAICoachScriptResponseBody& setSampleDialogueList(const vector<GetAICoachScriptResponseBody::SampleDialogueList> & sampleDialogueList) { DARABONBA_PTR_SET_VALUE(sampleDialogueList_, sampleDialogueList) };
    inline GetAICoachScriptResponseBody& setSampleDialogueList(vector<GetAICoachScriptResponseBody::SampleDialogueList> && sampleDialogueList) { DARABONBA_PTR_SET_RVALUE(sampleDialogueList_, sampleDialogueList) };


    // scoreConfig Field Functions 
    bool hasScoreConfig() const { return this->scoreConfig_ != nullptr;};
    void deleteScoreConfig() { this->scoreConfig_ = nullptr;};
    inline const GetAICoachScriptResponseBody::ScoreConfig & getScoreConfig() const { DARABONBA_PTR_GET_CONST(scoreConfig_, GetAICoachScriptResponseBody::ScoreConfig) };
    inline GetAICoachScriptResponseBody::ScoreConfig getScoreConfig() { DARABONBA_PTR_GET(scoreConfig_, GetAICoachScriptResponseBody::ScoreConfig) };
    inline GetAICoachScriptResponseBody& setScoreConfig(const GetAICoachScriptResponseBody::ScoreConfig & scoreConfig) { DARABONBA_PTR_SET_VALUE(scoreConfig_, scoreConfig) };
    inline GetAICoachScriptResponseBody& setScoreConfig(GetAICoachScriptResponseBody::ScoreConfig && scoreConfig) { DARABONBA_PTR_SET_RVALUE(scoreConfig_, scoreConfig) };


    // scriptRecordId Field Functions 
    bool hasScriptRecordId() const { return this->scriptRecordId_ != nullptr;};
    void deleteScriptRecordId() { this->scriptRecordId_ = nullptr;};
    inline string getScriptRecordId() const { DARABONBA_PTR_GET_DEFAULT(scriptRecordId_, "") };
    inline GetAICoachScriptResponseBody& setScriptRecordId(string scriptRecordId) { DARABONBA_PTR_SET_VALUE(scriptRecordId_, scriptRecordId) };


    // sparringTipContent Field Functions 
    bool hasSparringTipContent() const { return this->sparringTipContent_ != nullptr;};
    void deleteSparringTipContent() { this->sparringTipContent_ = nullptr;};
    inline string getSparringTipContent() const { DARABONBA_PTR_GET_DEFAULT(sparringTipContent_, "") };
    inline GetAICoachScriptResponseBody& setSparringTipContent(string sparringTipContent) { DARABONBA_PTR_SET_VALUE(sparringTipContent_, sparringTipContent) };


    // sparringTipTitle Field Functions 
    bool hasSparringTipTitle() const { return this->sparringTipTitle_ != nullptr;};
    void deleteSparringTipTitle() { this->sparringTipTitle_ = nullptr;};
    inline string getSparringTipTitle() const { DARABONBA_PTR_GET_DEFAULT(sparringTipTitle_, "") };
    inline GetAICoachScriptResponseBody& setSparringTipTitle(string sparringTipTitle) { DARABONBA_PTR_SET_VALUE(sparringTipTitle_, sparringTipTitle) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetAICoachScriptResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // studentThinkTimeFlag Field Functions 
    bool hasStudentThinkTimeFlag() const { return this->studentThinkTimeFlag_ != nullptr;};
    void deleteStudentThinkTimeFlag() { this->studentThinkTimeFlag_ = nullptr;};
    inline bool getStudentThinkTimeFlag() const { DARABONBA_PTR_GET_DEFAULT(studentThinkTimeFlag_, false) };
    inline GetAICoachScriptResponseBody& setStudentThinkTimeFlag(bool studentThinkTimeFlag) { DARABONBA_PTR_SET_VALUE(studentThinkTimeFlag_, studentThinkTimeFlag) };


    // studentThinkTimeLimit Field Functions 
    bool hasStudentThinkTimeLimit() const { return this->studentThinkTimeLimit_ != nullptr;};
    void deleteStudentThinkTimeLimit() { this->studentThinkTimeLimit_ = nullptr;};
    inline int32_t getStudentThinkTimeLimit() const { DARABONBA_PTR_GET_DEFAULT(studentThinkTimeLimit_, 0) };
    inline GetAICoachScriptResponseBody& setStudentThinkTimeLimit(int32_t studentThinkTimeLimit) { DARABONBA_PTR_SET_VALUE(studentThinkTimeLimit_, studentThinkTimeLimit) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetAICoachScriptResponseBody& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline string getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
    inline GetAICoachScriptResponseBody& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


    // voiceLanguage Field Functions 
    bool hasVoiceLanguage() const { return this->voiceLanguage_ != nullptr;};
    void deleteVoiceLanguage() { this->voiceLanguage_ = nullptr;};
    inline string getVoiceLanguage() const { DARABONBA_PTR_GET_DEFAULT(voiceLanguage_, "") };
    inline GetAICoachScriptResponseBody& setVoiceLanguage(string voiceLanguage) { DARABONBA_PTR_SET_VALUE(voiceLanguage_, voiceLanguage) };


    // weights Field Functions 
    bool hasWeights() const { return this->weights_ != nullptr;};
    void deleteWeights() { this->weights_ = nullptr;};
    inline const GetAICoachScriptResponseBody::Weights & getWeights() const { DARABONBA_PTR_GET_CONST(weights_, GetAICoachScriptResponseBody::Weights) };
    inline GetAICoachScriptResponseBody::Weights getWeights() { DARABONBA_PTR_GET(weights_, GetAICoachScriptResponseBody::Weights) };
    inline GetAICoachScriptResponseBody& setWeights(const GetAICoachScriptResponseBody::Weights & weights) { DARABONBA_PTR_SET_VALUE(weights_, weights) };
    inline GetAICoachScriptResponseBody& setWeights(GetAICoachScriptResponseBody::Weights && weights) { DARABONBA_PTR_SET_RVALUE(weights_, weights) };


  protected:
    shared_ptr<string> agentId_ {};
    shared_ptr<bool> appendQuestionFlag_ {};
    shared_ptr<string> assessmentScope_ {};
    shared_ptr<GetAICoachScriptResponseBody::CheckCheatConfig> checkCheatConfig_ {};
    shared_ptr<string> closingRemarks_ {};
    shared_ptr<GetAICoachScriptResponseBody::CompleteStrategy> completeStrategy_ {};
    shared_ptr<string> coverUrl_ {};
    shared_ptr<vector<GetAICoachScriptResponseBody::CustomReplyRules>> customReplyRules_ {};
    shared_ptr<int32_t> dialogueInputTextLimit_ {};
    shared_ptr<bool> dialogueTextFlag_ {};
    shared_ptr<bool> dialogueTipFlag_ {};
    shared_ptr<int32_t> dialogueVoiceLimit_ {};
    shared_ptr<bool> evaluateReportFlag_ {};
    shared_ptr<map<string, int32_t>> expressiveness_ {};
    shared_ptr<vector<GetAICoachScriptResponseBody::ExpressivenessList>> expressivenessList_ {};
    shared_ptr<string> gifDynamicUrl_ {};
    shared_ptr<string> gifStaticUrl_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> initiator_ {};
    shared_ptr<vector<string>> interactionInputTypes_ {};
    shared_ptr<int32_t> interactionType_ {};
    shared_ptr<string> introduce_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> openingRemarks_ {};
    shared_ptr<bool> orderAckFlag_ {};
    shared_ptr<vector<GetAICoachScriptResponseBody::PointDeductionRuleList>> pointDeductionRuleList_ {};
    shared_ptr<vector<GetAICoachScriptResponseBody::Points>> points_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetAICoachScriptResponseBody::SampleDialogueList>> sampleDialogueList_ {};
    shared_ptr<GetAICoachScriptResponseBody::ScoreConfig> scoreConfig_ {};
    shared_ptr<string> scriptRecordId_ {};
    shared_ptr<string> sparringTipContent_ {};
    shared_ptr<string> sparringTipTitle_ {};
    shared_ptr<int32_t> status_ {};
    shared_ptr<bool> studentThinkTimeFlag_ {};
    shared_ptr<int32_t> studentThinkTimeLimit_ {};
    shared_ptr<int32_t> type_ {};
    shared_ptr<string> voiceId_ {};
    shared_ptr<string> voiceLanguage_ {};
    shared_ptr<GetAICoachScriptResponseBody::Weights> weights_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
