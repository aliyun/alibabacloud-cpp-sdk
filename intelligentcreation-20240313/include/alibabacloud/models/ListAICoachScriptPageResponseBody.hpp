// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODY_HPP_
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
  class ListAICoachScriptPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICoachScriptPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICoachScriptPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAICoachScriptPageResponseBody() = default ;
    ListAICoachScriptPageResponseBody(const ListAICoachScriptPageResponseBody &) = default ;
    ListAICoachScriptPageResponseBody(ListAICoachScriptPageResponseBody &&) = default ;
    ListAICoachScriptPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICoachScriptPageResponseBody() = default ;
    ListAICoachScriptPageResponseBody& operator=(const ListAICoachScriptPageResponseBody &) = default ;
    ListAICoachScriptPageResponseBody& operator=(ListAICoachScriptPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(appendQuestionFlag, appendQuestionFlag_);
        DARABONBA_PTR_TO_JSON(assessmentScope, assessmentScope_);
        DARABONBA_PTR_TO_JSON(closingRemarks, closingRemarks_);
        DARABONBA_PTR_TO_JSON(completeStrategy, completeStrategy_);
        DARABONBA_PTR_TO_JSON(coverUrl, coverUrl_);
        DARABONBA_PTR_TO_JSON(customReplyRules, customReplyRules_);
        DARABONBA_PTR_TO_JSON(dialogueTextFlag, dialogueTextFlag_);
        DARABONBA_PTR_TO_JSON(dialogueTipFlag, dialogueTipFlag_);
        DARABONBA_PTR_TO_JSON(evaluateReportFlag, evaluateReportFlag_);
        DARABONBA_PTR_TO_JSON(expressiveness, expressiveness_);
        DARABONBA_PTR_TO_JSON(gifDynamicUrl, gifDynamicUrl_);
        DARABONBA_PTR_TO_JSON(gifStaticUrl, gifStaticUrl_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(initiator, initiator_);
        DARABONBA_PTR_TO_JSON(interactionType, interactionType_);
        DARABONBA_PTR_TO_JSON(introduce, introduce_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(openingRemarks, openingRemarks_);
        DARABONBA_PTR_TO_JSON(orderAckFlag, orderAckFlag_);
        DARABONBA_PTR_TO_JSON(sampleDialogueList, sampleDialogueList_);
        DARABONBA_PTR_TO_JSON(scoreConfig, scoreConfig_);
        DARABONBA_PTR_TO_JSON(scriptRecordId, scriptRecordId_);
        DARABONBA_PTR_TO_JSON(sparringTipContent, sparringTipContent_);
        DARABONBA_PTR_TO_JSON(sparringTipTitle, sparringTipTitle_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(studentThinkTimeFlag, studentThinkTimeFlag_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(weights, weights_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(appendQuestionFlag, appendQuestionFlag_);
        DARABONBA_PTR_FROM_JSON(assessmentScope, assessmentScope_);
        DARABONBA_PTR_FROM_JSON(closingRemarks, closingRemarks_);
        DARABONBA_PTR_FROM_JSON(completeStrategy, completeStrategy_);
        DARABONBA_PTR_FROM_JSON(coverUrl, coverUrl_);
        DARABONBA_PTR_FROM_JSON(customReplyRules, customReplyRules_);
        DARABONBA_PTR_FROM_JSON(dialogueTextFlag, dialogueTextFlag_);
        DARABONBA_PTR_FROM_JSON(dialogueTipFlag, dialogueTipFlag_);
        DARABONBA_PTR_FROM_JSON(evaluateReportFlag, evaluateReportFlag_);
        DARABONBA_PTR_FROM_JSON(expressiveness, expressiveness_);
        DARABONBA_PTR_FROM_JSON(gifDynamicUrl, gifDynamicUrl_);
        DARABONBA_PTR_FROM_JSON(gifStaticUrl, gifStaticUrl_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(initiator, initiator_);
        DARABONBA_PTR_FROM_JSON(interactionType, interactionType_);
        DARABONBA_PTR_FROM_JSON(introduce, introduce_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(openingRemarks, openingRemarks_);
        DARABONBA_PTR_FROM_JSON(orderAckFlag, orderAckFlag_);
        DARABONBA_PTR_FROM_JSON(sampleDialogueList, sampleDialogueList_);
        DARABONBA_PTR_FROM_JSON(scoreConfig, scoreConfig_);
        DARABONBA_PTR_FROM_JSON(scriptRecordId, scriptRecordId_);
        DARABONBA_PTR_FROM_JSON(sparringTipContent, sparringTipContent_);
        DARABONBA_PTR_FROM_JSON(sparringTipTitle, sparringTipTitle_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(studentThinkTimeFlag, studentThinkTimeFlag_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(weights, weights_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Weights : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Weights& obj) { 
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
        virtual bool empty() const override { return this->assessmentPoint_ == nullptr
        && this->assessmentPointEnabled_ == nullptr && this->customReplyRuleEnabled_ == nullptr && this->expressiveness_ == nullptr && this->expressivenessEnabled_ == nullptr && this->pointDeductionRule_ == nullptr
        && this->pointDeductionRuleEnabled_ == nullptr && this->similarPronunciationScoringEnabled_ == nullptr && this->standard_ == nullptr && this->standardEnabled_ == nullptr; };
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
        inline int32_t getPassScore() const { DARABONBA_PTR_GET_DEFAULT(passScore_, 0) };
        inline ScoreConfig& setPassScore(int32_t passScore) { DARABONBA_PTR_SET_VALUE(passScore_, passScore) };


      protected:
        shared_ptr<bool> enabled_ {};
        shared_ptr<bool> levelEnabled_ {};
        shared_ptr<vector<ScoreConfig::Levels>> levels_ {};
        shared_ptr<int32_t> passScore_ {};
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

      class CustomReplyRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomReplyRules& obj) { 
          DARABONBA_PTR_TO_JSON(action, action_);
          DARABONBA_PTR_TO_JSON(logic, logic_);
          DARABONBA_PTR_TO_JSON(mainCondition, mainCondition_);
          DARABONBA_PTR_TO_JSON(priority, priority_);
          DARABONBA_PTR_TO_JSON(sortNo, sortNo_);
          DARABONBA_PTR_TO_JSON(subCondition, subCondition_);
        };
        friend void from_json(const Darabonba::Json& j, CustomReplyRules& obj) { 
          DARABONBA_PTR_FROM_JSON(action, action_);
          DARABONBA_PTR_FROM_JSON(logic, logic_);
          DARABONBA_PTR_FROM_JSON(mainCondition, mainCondition_);
          DARABONBA_PTR_FROM_JSON(priority, priority_);
          DARABONBA_PTR_FROM_JSON(sortNo, sortNo_);
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
              DARABONBA_PTR_TO_JSON(assessPoint, assessPoint_);
            };
            friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
              DARABONBA_PTR_FROM_JSON(assessPoint, assessPoint_);
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
            virtual bool empty() const override { return this->assessPoint_ == nullptr; };
            // assessPoint Field Functions 
            bool hasAssessPoint() const { return this->assessPoint_ != nullptr;};
            void deleteAssessPoint() { this->assessPoint_ = nullptr;};
            inline string getAssessPoint() const { DARABONBA_PTR_GET_DEFAULT(assessPoint_, "") };
            inline Parameters& setAssessPoint(string assessPoint) { DARABONBA_PTR_SET_VALUE(assessPoint_, assessPoint) };


          protected:
            shared_ptr<string> assessPoint_ {};
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
              DARABONBA_PTR_TO_JSON(assessPoint, assessPoint_);
              DARABONBA_PTR_TO_JSON(customContent, customContent_);
            };
            friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
              DARABONBA_PTR_FROM_JSON(assessPoint, assessPoint_);
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
            virtual bool empty() const override { return this->assessPoint_ == nullptr
        && this->customContent_ == nullptr; };
            // assessPoint Field Functions 
            bool hasAssessPoint() const { return this->assessPoint_ != nullptr;};
            void deleteAssessPoint() { this->assessPoint_ = nullptr;};
            inline string getAssessPoint() const { DARABONBA_PTR_GET_DEFAULT(assessPoint_, "") };
            inline Parameters& setAssessPoint(string assessPoint) { DARABONBA_PTR_SET_VALUE(assessPoint_, assessPoint) };


            // customContent Field Functions 
            bool hasCustomContent() const { return this->customContent_ != nullptr;};
            void deleteCustomContent() { this->customContent_ = nullptr;};
            inline string getCustomContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
            inline Parameters& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


          protected:
            shared_ptr<string> assessPoint_ {};
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
        && this->logic_ == nullptr && this->mainCondition_ == nullptr && this->priority_ == nullptr && this->sortNo_ == nullptr && this->subCondition_ == nullptr; };
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


        // sortNo Field Functions 
        bool hasSortNo() const { return this->sortNo_ != nullptr;};
        void deleteSortNo() { this->sortNo_ = nullptr;};
        inline int32_t getSortNo() const { DARABONBA_PTR_GET_DEFAULT(sortNo_, 0) };
        inline CustomReplyRules& setSortNo(int32_t sortNo) { DARABONBA_PTR_SET_VALUE(sortNo_, sortNo) };


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
        shared_ptr<int32_t> sortNo_ {};
        shared_ptr<CustomReplyRules::SubCondition> subCondition_ {};
      };

      class CompleteStrategy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CompleteStrategy& obj) { 
          DARABONBA_PTR_TO_JSON(clickCompleteAutoEnd, clickCompleteAutoEnd_);
          DARABONBA_PTR_TO_JSON(duration, duration_);
          DARABONBA_PTR_TO_JSON(fullCoverageAutoEnd, fullCoverageAutoEnd_);
        };
        friend void from_json(const Darabonba::Json& j, CompleteStrategy& obj) { 
          DARABONBA_PTR_FROM_JSON(clickCompleteAutoEnd, clickCompleteAutoEnd_);
          DARABONBA_PTR_FROM_JSON(duration, duration_);
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
        virtual bool empty() const override { return this->clickCompleteAutoEnd_ == nullptr
        && this->duration_ == nullptr && this->fullCoverageAutoEnd_ == nullptr; };
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


        // fullCoverageAutoEnd Field Functions 
        bool hasFullCoverageAutoEnd() const { return this->fullCoverageAutoEnd_ != nullptr;};
        void deleteFullCoverageAutoEnd() { this->fullCoverageAutoEnd_ = nullptr;};
        inline bool getFullCoverageAutoEnd() const { DARABONBA_PTR_GET_DEFAULT(fullCoverageAutoEnd_, false) };
        inline CompleteStrategy& setFullCoverageAutoEnd(bool fullCoverageAutoEnd) { DARABONBA_PTR_SET_VALUE(fullCoverageAutoEnd_, fullCoverageAutoEnd) };


      protected:
        shared_ptr<bool> clickCompleteAutoEnd_ {};
        shared_ptr<int32_t> duration_ {};
        shared_ptr<bool> fullCoverageAutoEnd_ {};
      };

      virtual bool empty() const override { return this->appendQuestionFlag_ == nullptr
        && this->assessmentScope_ == nullptr && this->closingRemarks_ == nullptr && this->completeStrategy_ == nullptr && this->coverUrl_ == nullptr && this->customReplyRules_ == nullptr
        && this->dialogueTextFlag_ == nullptr && this->dialogueTipFlag_ == nullptr && this->evaluateReportFlag_ == nullptr && this->expressiveness_ == nullptr && this->gifDynamicUrl_ == nullptr
        && this->gifStaticUrl_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->initiator_ == nullptr && this->interactionType_ == nullptr
        && this->introduce_ == nullptr && this->name_ == nullptr && this->openingRemarks_ == nullptr && this->orderAckFlag_ == nullptr && this->sampleDialogueList_ == nullptr
        && this->scoreConfig_ == nullptr && this->scriptRecordId_ == nullptr && this->sparringTipContent_ == nullptr && this->sparringTipTitle_ == nullptr && this->status_ == nullptr
        && this->studentThinkTimeFlag_ == nullptr && this->type_ == nullptr && this->weights_ == nullptr; };
      // appendQuestionFlag Field Functions 
      bool hasAppendQuestionFlag() const { return this->appendQuestionFlag_ != nullptr;};
      void deleteAppendQuestionFlag() { this->appendQuestionFlag_ = nullptr;};
      inline string getAppendQuestionFlag() const { DARABONBA_PTR_GET_DEFAULT(appendQuestionFlag_, "") };
      inline List& setAppendQuestionFlag(string appendQuestionFlag) { DARABONBA_PTR_SET_VALUE(appendQuestionFlag_, appendQuestionFlag) };


      // assessmentScope Field Functions 
      bool hasAssessmentScope() const { return this->assessmentScope_ != nullptr;};
      void deleteAssessmentScope() { this->assessmentScope_ = nullptr;};
      inline string getAssessmentScope() const { DARABONBA_PTR_GET_DEFAULT(assessmentScope_, "") };
      inline List& setAssessmentScope(string assessmentScope) { DARABONBA_PTR_SET_VALUE(assessmentScope_, assessmentScope) };


      // closingRemarks Field Functions 
      bool hasClosingRemarks() const { return this->closingRemarks_ != nullptr;};
      void deleteClosingRemarks() { this->closingRemarks_ = nullptr;};
      inline string getClosingRemarks() const { DARABONBA_PTR_GET_DEFAULT(closingRemarks_, "") };
      inline List& setClosingRemarks(string closingRemarks) { DARABONBA_PTR_SET_VALUE(closingRemarks_, closingRemarks) };


      // completeStrategy Field Functions 
      bool hasCompleteStrategy() const { return this->completeStrategy_ != nullptr;};
      void deleteCompleteStrategy() { this->completeStrategy_ = nullptr;};
      inline const List::CompleteStrategy & getCompleteStrategy() const { DARABONBA_PTR_GET_CONST(completeStrategy_, List::CompleteStrategy) };
      inline List::CompleteStrategy getCompleteStrategy() { DARABONBA_PTR_GET(completeStrategy_, List::CompleteStrategy) };
      inline List& setCompleteStrategy(const List::CompleteStrategy & completeStrategy) { DARABONBA_PTR_SET_VALUE(completeStrategy_, completeStrategy) };
      inline List& setCompleteStrategy(List::CompleteStrategy && completeStrategy) { DARABONBA_PTR_SET_RVALUE(completeStrategy_, completeStrategy) };


      // coverUrl Field Functions 
      bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
      void deleteCoverUrl() { this->coverUrl_ = nullptr;};
      inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
      inline List& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


      // customReplyRules Field Functions 
      bool hasCustomReplyRules() const { return this->customReplyRules_ != nullptr;};
      void deleteCustomReplyRules() { this->customReplyRules_ = nullptr;};
      inline const vector<List::CustomReplyRules> & getCustomReplyRules() const { DARABONBA_PTR_GET_CONST(customReplyRules_, vector<List::CustomReplyRules>) };
      inline vector<List::CustomReplyRules> getCustomReplyRules() { DARABONBA_PTR_GET(customReplyRules_, vector<List::CustomReplyRules>) };
      inline List& setCustomReplyRules(const vector<List::CustomReplyRules> & customReplyRules) { DARABONBA_PTR_SET_VALUE(customReplyRules_, customReplyRules) };
      inline List& setCustomReplyRules(vector<List::CustomReplyRules> && customReplyRules) { DARABONBA_PTR_SET_RVALUE(customReplyRules_, customReplyRules) };


      // dialogueTextFlag Field Functions 
      bool hasDialogueTextFlag() const { return this->dialogueTextFlag_ != nullptr;};
      void deleteDialogueTextFlag() { this->dialogueTextFlag_ = nullptr;};
      inline bool getDialogueTextFlag() const { DARABONBA_PTR_GET_DEFAULT(dialogueTextFlag_, false) };
      inline List& setDialogueTextFlag(bool dialogueTextFlag) { DARABONBA_PTR_SET_VALUE(dialogueTextFlag_, dialogueTextFlag) };


      // dialogueTipFlag Field Functions 
      bool hasDialogueTipFlag() const { return this->dialogueTipFlag_ != nullptr;};
      void deleteDialogueTipFlag() { this->dialogueTipFlag_ = nullptr;};
      inline bool getDialogueTipFlag() const { DARABONBA_PTR_GET_DEFAULT(dialogueTipFlag_, false) };
      inline List& setDialogueTipFlag(bool dialogueTipFlag) { DARABONBA_PTR_SET_VALUE(dialogueTipFlag_, dialogueTipFlag) };


      // evaluateReportFlag Field Functions 
      bool hasEvaluateReportFlag() const { return this->evaluateReportFlag_ != nullptr;};
      void deleteEvaluateReportFlag() { this->evaluateReportFlag_ = nullptr;};
      inline bool getEvaluateReportFlag() const { DARABONBA_PTR_GET_DEFAULT(evaluateReportFlag_, false) };
      inline List& setEvaluateReportFlag(bool evaluateReportFlag) { DARABONBA_PTR_SET_VALUE(evaluateReportFlag_, evaluateReportFlag) };


      // expressiveness Field Functions 
      bool hasExpressiveness() const { return this->expressiveness_ != nullptr;};
      void deleteExpressiveness() { this->expressiveness_ = nullptr;};
      inline const map<string, string> & getExpressiveness() const { DARABONBA_PTR_GET_CONST(expressiveness_, map<string, string>) };
      inline map<string, string> getExpressiveness() { DARABONBA_PTR_GET(expressiveness_, map<string, string>) };
      inline List& setExpressiveness(const map<string, string> & expressiveness) { DARABONBA_PTR_SET_VALUE(expressiveness_, expressiveness) };
      inline List& setExpressiveness(map<string, string> && expressiveness) { DARABONBA_PTR_SET_RVALUE(expressiveness_, expressiveness) };


      // gifDynamicUrl Field Functions 
      bool hasGifDynamicUrl() const { return this->gifDynamicUrl_ != nullptr;};
      void deleteGifDynamicUrl() { this->gifDynamicUrl_ = nullptr;};
      inline string getGifDynamicUrl() const { DARABONBA_PTR_GET_DEFAULT(gifDynamicUrl_, "") };
      inline List& setGifDynamicUrl(string gifDynamicUrl) { DARABONBA_PTR_SET_VALUE(gifDynamicUrl_, gifDynamicUrl) };


      // gifStaticUrl Field Functions 
      bool hasGifStaticUrl() const { return this->gifStaticUrl_ != nullptr;};
      void deleteGifStaticUrl() { this->gifStaticUrl_ = nullptr;};
      inline string getGifStaticUrl() const { DARABONBA_PTR_GET_DEFAULT(gifStaticUrl_, "") };
      inline List& setGifStaticUrl(string gifStaticUrl) { DARABONBA_PTR_SET_VALUE(gifStaticUrl_, gifStaticUrl) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline List& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline List& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // initiator Field Functions 
      bool hasInitiator() const { return this->initiator_ != nullptr;};
      void deleteInitiator() { this->initiator_ = nullptr;};
      inline string getInitiator() const { DARABONBA_PTR_GET_DEFAULT(initiator_, "") };
      inline List& setInitiator(string initiator) { DARABONBA_PTR_SET_VALUE(initiator_, initiator) };


      // interactionType Field Functions 
      bool hasInteractionType() const { return this->interactionType_ != nullptr;};
      void deleteInteractionType() { this->interactionType_ = nullptr;};
      inline string getInteractionType() const { DARABONBA_PTR_GET_DEFAULT(interactionType_, "") };
      inline List& setInteractionType(string interactionType) { DARABONBA_PTR_SET_VALUE(interactionType_, interactionType) };


      // introduce Field Functions 
      bool hasIntroduce() const { return this->introduce_ != nullptr;};
      void deleteIntroduce() { this->introduce_ = nullptr;};
      inline string getIntroduce() const { DARABONBA_PTR_GET_DEFAULT(introduce_, "") };
      inline List& setIntroduce(string introduce) { DARABONBA_PTR_SET_VALUE(introduce_, introduce) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline List& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // openingRemarks Field Functions 
      bool hasOpeningRemarks() const { return this->openingRemarks_ != nullptr;};
      void deleteOpeningRemarks() { this->openingRemarks_ = nullptr;};
      inline string getOpeningRemarks() const { DARABONBA_PTR_GET_DEFAULT(openingRemarks_, "") };
      inline List& setOpeningRemarks(string openingRemarks) { DARABONBA_PTR_SET_VALUE(openingRemarks_, openingRemarks) };


      // orderAckFlag Field Functions 
      bool hasOrderAckFlag() const { return this->orderAckFlag_ != nullptr;};
      void deleteOrderAckFlag() { this->orderAckFlag_ = nullptr;};
      inline bool getOrderAckFlag() const { DARABONBA_PTR_GET_DEFAULT(orderAckFlag_, false) };
      inline List& setOrderAckFlag(bool orderAckFlag) { DARABONBA_PTR_SET_VALUE(orderAckFlag_, orderAckFlag) };


      // sampleDialogueList Field Functions 
      bool hasSampleDialogueList() const { return this->sampleDialogueList_ != nullptr;};
      void deleteSampleDialogueList() { this->sampleDialogueList_ = nullptr;};
      inline const vector<List::SampleDialogueList> & getSampleDialogueList() const { DARABONBA_PTR_GET_CONST(sampleDialogueList_, vector<List::SampleDialogueList>) };
      inline vector<List::SampleDialogueList> getSampleDialogueList() { DARABONBA_PTR_GET(sampleDialogueList_, vector<List::SampleDialogueList>) };
      inline List& setSampleDialogueList(const vector<List::SampleDialogueList> & sampleDialogueList) { DARABONBA_PTR_SET_VALUE(sampleDialogueList_, sampleDialogueList) };
      inline List& setSampleDialogueList(vector<List::SampleDialogueList> && sampleDialogueList) { DARABONBA_PTR_SET_RVALUE(sampleDialogueList_, sampleDialogueList) };


      // scoreConfig Field Functions 
      bool hasScoreConfig() const { return this->scoreConfig_ != nullptr;};
      void deleteScoreConfig() { this->scoreConfig_ = nullptr;};
      inline const List::ScoreConfig & getScoreConfig() const { DARABONBA_PTR_GET_CONST(scoreConfig_, List::ScoreConfig) };
      inline List::ScoreConfig getScoreConfig() { DARABONBA_PTR_GET(scoreConfig_, List::ScoreConfig) };
      inline List& setScoreConfig(const List::ScoreConfig & scoreConfig) { DARABONBA_PTR_SET_VALUE(scoreConfig_, scoreConfig) };
      inline List& setScoreConfig(List::ScoreConfig && scoreConfig) { DARABONBA_PTR_SET_RVALUE(scoreConfig_, scoreConfig) };


      // scriptRecordId Field Functions 
      bool hasScriptRecordId() const { return this->scriptRecordId_ != nullptr;};
      void deleteScriptRecordId() { this->scriptRecordId_ = nullptr;};
      inline string getScriptRecordId() const { DARABONBA_PTR_GET_DEFAULT(scriptRecordId_, "") };
      inline List& setScriptRecordId(string scriptRecordId) { DARABONBA_PTR_SET_VALUE(scriptRecordId_, scriptRecordId) };


      // sparringTipContent Field Functions 
      bool hasSparringTipContent() const { return this->sparringTipContent_ != nullptr;};
      void deleteSparringTipContent() { this->sparringTipContent_ = nullptr;};
      inline string getSparringTipContent() const { DARABONBA_PTR_GET_DEFAULT(sparringTipContent_, "") };
      inline List& setSparringTipContent(string sparringTipContent) { DARABONBA_PTR_SET_VALUE(sparringTipContent_, sparringTipContent) };


      // sparringTipTitle Field Functions 
      bool hasSparringTipTitle() const { return this->sparringTipTitle_ != nullptr;};
      void deleteSparringTipTitle() { this->sparringTipTitle_ = nullptr;};
      inline string getSparringTipTitle() const { DARABONBA_PTR_GET_DEFAULT(sparringTipTitle_, "") };
      inline List& setSparringTipTitle(string sparringTipTitle) { DARABONBA_PTR_SET_VALUE(sparringTipTitle_, sparringTipTitle) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline List& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // studentThinkTimeFlag Field Functions 
      bool hasStudentThinkTimeFlag() const { return this->studentThinkTimeFlag_ != nullptr;};
      void deleteStudentThinkTimeFlag() { this->studentThinkTimeFlag_ = nullptr;};
      inline bool getStudentThinkTimeFlag() const { DARABONBA_PTR_GET_DEFAULT(studentThinkTimeFlag_, false) };
      inline List& setStudentThinkTimeFlag(bool studentThinkTimeFlag) { DARABONBA_PTR_SET_VALUE(studentThinkTimeFlag_, studentThinkTimeFlag) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline List& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // weights Field Functions 
      bool hasWeights() const { return this->weights_ != nullptr;};
      void deleteWeights() { this->weights_ = nullptr;};
      inline const List::Weights & getWeights() const { DARABONBA_PTR_GET_CONST(weights_, List::Weights) };
      inline List::Weights getWeights() { DARABONBA_PTR_GET(weights_, List::Weights) };
      inline List& setWeights(const List::Weights & weights) { DARABONBA_PTR_SET_VALUE(weights_, weights) };
      inline List& setWeights(List::Weights && weights) { DARABONBA_PTR_SET_RVALUE(weights_, weights) };


    protected:
      shared_ptr<string> appendQuestionFlag_ {};
      shared_ptr<string> assessmentScope_ {};
      shared_ptr<string> closingRemarks_ {};
      shared_ptr<List::CompleteStrategy> completeStrategy_ {};
      shared_ptr<string> coverUrl_ {};
      shared_ptr<vector<List::CustomReplyRules>> customReplyRules_ {};
      shared_ptr<bool> dialogueTextFlag_ {};
      shared_ptr<bool> dialogueTipFlag_ {};
      shared_ptr<bool> evaluateReportFlag_ {};
      shared_ptr<map<string, string>> expressiveness_ {};
      shared_ptr<string> gifDynamicUrl_ {};
      shared_ptr<string> gifStaticUrl_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> initiator_ {};
      shared_ptr<string> interactionType_ {};
      shared_ptr<string> introduce_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> openingRemarks_ {};
      shared_ptr<bool> orderAckFlag_ {};
      shared_ptr<vector<List::SampleDialogueList>> sampleDialogueList_ {};
      shared_ptr<List::ScoreConfig> scoreConfig_ {};
      shared_ptr<string> scriptRecordId_ {};
      shared_ptr<string> sparringTipContent_ {};
      shared_ptr<string> sparringTipTitle_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<bool> studentThinkTimeFlag_ {};
      shared_ptr<int32_t> type_ {};
      shared_ptr<List::Weights> weights_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->list_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListAICoachScriptPageResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListAICoachScriptPageResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListAICoachScriptPageResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListAICoachScriptPageResponseBody::List>) };
    inline vector<ListAICoachScriptPageResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListAICoachScriptPageResponseBody::List>) };
    inline ListAICoachScriptPageResponseBody& setList(const vector<ListAICoachScriptPageResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListAICoachScriptPageResponseBody& setList(vector<ListAICoachScriptPageResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAICoachScriptPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAICoachScriptPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListAICoachScriptPageResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<vector<ListAICoachScriptPageResponseBody::List>> list_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
