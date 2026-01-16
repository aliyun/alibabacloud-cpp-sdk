// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATORBASICINFO_HPP_
#define ALIBABACLOUD_MODELS_OPERATORBASICINFO_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/JudgeNodeMetaDesc.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class OperatorBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperatorBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Oid, oid_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(QualityCheckType, qualityCheckType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserGroup, userGroup_);
    };
    friend void from_json(const Darabonba::Json& j, OperatorBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Oid, oid_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(QualityCheckType, qualityCheckType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserGroup, userGroup_);
    };
    OperatorBasicInfo() = default ;
    OperatorBasicInfo(const OperatorBasicInfo &) = default ;
    OperatorBasicInfo(OperatorBasicInfo &&) = default ;
    OperatorBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperatorBasicInfo() = default ;
    OperatorBasicInfo& operator=(const OperatorBasicInfo &) = default ;
    OperatorBasicInfo& operator=(OperatorBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Param : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Param& obj) { 
        DARABONBA_PTR_TO_JSON(AnswerThreshold, answerThreshold_);
        DARABONBA_PTR_TO_JSON(AntModelInfo, antModelInfo_);
        DARABONBA_PTR_TO_JSON(Average, average_);
        DARABONBA_PTR_TO_JSON(BeginType, beginType_);
        DARABONBA_PTR_TO_JSON(BotId, botId_);
        DARABONBA_PTR_TO_JSON(Case_sensitive, caseSensitive_);
        DARABONBA_PTR_TO_JSON(CategoryPathCode, categoryPathCode_);
        DARABONBA_PTR_TO_JSON(CheckFirstSentence, checkFirstSentence_);
        DARABONBA_PTR_TO_JSON(CheckType, checkType_);
        DARABONBA_PTR_TO_JSON(CompareOperator, compareOperator_);
        DARABONBA_PTR_TO_JSON(ContextChatMatch, contextChatMatch_);
        DARABONBA_PTR_TO_JSON(CustomerParam, customerParam_);
        DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
        DARABONBA_PTR_TO_JSON(Different_role, differentRole_);
        DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_TO_JSON(EndType, endType_);
        DARABONBA_PTR_TO_JSON(Excludes, excludes_);
        DARABONBA_PTR_TO_JSON(From, from_);
        DARABONBA_PTR_TO_JSON(From_end, fromEnd_);
        DARABONBA_PTR_TO_JSON(HitCondition, hitCondition_);
        DARABONBA_PTR_TO_JSON(Hit_time, hitTime_);
        DARABONBA_PTR_TO_JSON(In_sentence, inSentence_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(IntervalEnd, intervalEnd_);
        DARABONBA_PTR_TO_JSON(KeywordExtension, keywordExtension_);
        DARABONBA_PTR_TO_JSON(KeywordMatchSize, keywordMatchSize_);
        DARABONBA_PTR_TO_JSON(Keywords, keywords_);
        DARABONBA_PTR_TO_JSON(KnowledgeInfo, knowledgeInfo_);
        DARABONBA_PTR_TO_JSON(KnowledgeSentenceNum, knowledgeSentenceNum_);
        DARABONBA_PTR_TO_JSON(KnowledgeTargetId, knowledgeTargetId_);
        DARABONBA_PTR_TO_JSON(KnowledgeTargetName, knowledgeTargetName_);
        DARABONBA_PTR_TO_JSON(KnowledgeTargetType, knowledgeTargetType_);
        DARABONBA_PTR_TO_JSON(Knowledges, knowledges_);
        DARABONBA_PTR_TO_JSON(LgfSentences, lgfSentences_);
        DARABONBA_PTR_TO_JSON(LlmModelCode, llmModelCode_);
        DARABONBA_PTR_TO_JSON(MaxEmotionChangeValue, maxEmotionChangeValue_);
        DARABONBA_PTR_TO_JSON(MinWordSize, minWordSize_);
        DARABONBA_PTR_TO_JSON(Near_dialogue, nearDialogue_);
        DARABONBA_PTR_TO_JSON(NotRegex, notRegex_);
        DARABONBA_PTR_TO_JSON(Phrase, phrase_);
        DARABONBA_PTR_TO_JSON(Pkey, pkey_);
        DARABONBA_PTR_TO_JSON(Poutput_type, poutputType_);
        DARABONBA_PTR_TO_JSON(Pvalues, pvalues_);
        DARABONBA_PTR_TO_JSON(QuestionThreshold, questionThreshold_);
        DARABONBA_PTR_TO_JSON(References, references_);
        DARABONBA_PTR_TO_JSON(Regex, regex_);
        DARABONBA_PTR_TO_JSON(RoleId, roleId_);
        DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(Similarity_threshold, similarityThreshold_);
        DARABONBA_PTR_TO_JSON(SimilarlySentences, similarlySentences_);
        DARABONBA_PTR_TO_JSON(Synonyms, synonyms_);
        DARABONBA_PTR_TO_JSON(Target, target_);
        DARABONBA_PTR_TO_JSON(Target_role, targetRole_);
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        DARABONBA_PTR_TO_JSON(UseEasAlgorithm, useEasAlgorithm_);
        DARABONBA_PTR_TO_JSON(Velocity, velocity_);
        DARABONBA_PTR_TO_JSON(VelocityInMint, velocityInMint_);
      };
      friend void from_json(const Darabonba::Json& j, Param& obj) { 
        DARABONBA_PTR_FROM_JSON(AnswerThreshold, answerThreshold_);
        DARABONBA_PTR_FROM_JSON(AntModelInfo, antModelInfo_);
        DARABONBA_PTR_FROM_JSON(Average, average_);
        DARABONBA_PTR_FROM_JSON(BeginType, beginType_);
        DARABONBA_PTR_FROM_JSON(BotId, botId_);
        DARABONBA_PTR_FROM_JSON(Case_sensitive, caseSensitive_);
        DARABONBA_PTR_FROM_JSON(CategoryPathCode, categoryPathCode_);
        DARABONBA_PTR_FROM_JSON(CheckFirstSentence, checkFirstSentence_);
        DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
        DARABONBA_PTR_FROM_JSON(CompareOperator, compareOperator_);
        DARABONBA_PTR_FROM_JSON(ContextChatMatch, contextChatMatch_);
        DARABONBA_PTR_FROM_JSON(CustomerParam, customerParam_);
        DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
        DARABONBA_PTR_FROM_JSON(Different_role, differentRole_);
        DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_FROM_JSON(EndType, endType_);
        DARABONBA_PTR_FROM_JSON(Excludes, excludes_);
        DARABONBA_PTR_FROM_JSON(From, from_);
        DARABONBA_PTR_FROM_JSON(From_end, fromEnd_);
        DARABONBA_PTR_FROM_JSON(HitCondition, hitCondition_);
        DARABONBA_PTR_FROM_JSON(Hit_time, hitTime_);
        DARABONBA_PTR_FROM_JSON(In_sentence, inSentence_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(IntervalEnd, intervalEnd_);
        DARABONBA_PTR_FROM_JSON(KeywordExtension, keywordExtension_);
        DARABONBA_PTR_FROM_JSON(KeywordMatchSize, keywordMatchSize_);
        DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
        DARABONBA_PTR_FROM_JSON(KnowledgeInfo, knowledgeInfo_);
        DARABONBA_PTR_FROM_JSON(KnowledgeSentenceNum, knowledgeSentenceNum_);
        DARABONBA_PTR_FROM_JSON(KnowledgeTargetId, knowledgeTargetId_);
        DARABONBA_PTR_FROM_JSON(KnowledgeTargetName, knowledgeTargetName_);
        DARABONBA_PTR_FROM_JSON(KnowledgeTargetType, knowledgeTargetType_);
        DARABONBA_PTR_FROM_JSON(Knowledges, knowledges_);
        DARABONBA_PTR_FROM_JSON(LgfSentences, lgfSentences_);
        DARABONBA_PTR_FROM_JSON(LlmModelCode, llmModelCode_);
        DARABONBA_PTR_FROM_JSON(MaxEmotionChangeValue, maxEmotionChangeValue_);
        DARABONBA_PTR_FROM_JSON(MinWordSize, minWordSize_);
        DARABONBA_PTR_FROM_JSON(Near_dialogue, nearDialogue_);
        DARABONBA_PTR_FROM_JSON(NotRegex, notRegex_);
        DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
        DARABONBA_PTR_FROM_JSON(Pkey, pkey_);
        DARABONBA_PTR_FROM_JSON(Poutput_type, poutputType_);
        DARABONBA_PTR_FROM_JSON(Pvalues, pvalues_);
        DARABONBA_PTR_FROM_JSON(QuestionThreshold, questionThreshold_);
        DARABONBA_PTR_FROM_JSON(References, references_);
        DARABONBA_PTR_FROM_JSON(Regex, regex_);
        DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
        DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(Similarity_threshold, similarityThreshold_);
        DARABONBA_PTR_FROM_JSON(SimilarlySentences, similarlySentences_);
        DARABONBA_PTR_FROM_JSON(Synonyms, synonyms_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
        DARABONBA_PTR_FROM_JSON(Target_role, targetRole_);
        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        DARABONBA_PTR_FROM_JSON(UseEasAlgorithm, useEasAlgorithm_);
        DARABONBA_PTR_FROM_JSON(Velocity, velocity_);
        DARABONBA_PTR_FROM_JSON(VelocityInMint, velocityInMint_);
      };
      Param() = default ;
      Param(const Param &) = default ;
      Param(Param &&) = default ;
      Param(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Param() = default ;
      Param& operator=(const Param &) = default ;
      Param& operator=(Param &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Dimensions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dimensions& obj) { 
          DARABONBA_PTR_TO_JSON(Desc, desc_);
          DARABONBA_PTR_TO_JSON(Dimension, dimension_);
          DARABONBA_PTR_TO_JSON(ExcludeCondition, excludeCondition_);
          DARABONBA_PTR_TO_JSON(IncludeCondition, includeCondition_);
        };
        friend void from_json(const Darabonba::Json& j, Dimensions& obj) { 
          DARABONBA_PTR_FROM_JSON(Desc, desc_);
          DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
          DARABONBA_PTR_FROM_JSON(ExcludeCondition, excludeCondition_);
          DARABONBA_PTR_FROM_JSON(IncludeCondition, includeCondition_);
        };
        Dimensions() = default ;
        Dimensions(const Dimensions &) = default ;
        Dimensions(Dimensions &&) = default ;
        Dimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dimensions() = default ;
        Dimensions& operator=(const Dimensions &) = default ;
        Dimensions& operator=(Dimensions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->desc_ == nullptr
        && this->dimension_ == nullptr && this->excludeCondition_ == nullptr && this->includeCondition_ == nullptr; };
        // desc Field Functions 
        bool hasDesc() const { return this->desc_ != nullptr;};
        void deleteDesc() { this->desc_ = nullptr;};
        inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
        inline Dimensions& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


        // dimension Field Functions 
        bool hasDimension() const { return this->dimension_ != nullptr;};
        void deleteDimension() { this->dimension_ = nullptr;};
        inline string getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
        inline Dimensions& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


        // excludeCondition Field Functions 
        bool hasExcludeCondition() const { return this->excludeCondition_ != nullptr;};
        void deleteExcludeCondition() { this->excludeCondition_ = nullptr;};
        inline string getExcludeCondition() const { DARABONBA_PTR_GET_DEFAULT(excludeCondition_, "") };
        inline Dimensions& setExcludeCondition(string excludeCondition) { DARABONBA_PTR_SET_VALUE(excludeCondition_, excludeCondition) };


        // includeCondition Field Functions 
        bool hasIncludeCondition() const { return this->includeCondition_ != nullptr;};
        void deleteIncludeCondition() { this->includeCondition_ = nullptr;};
        inline string getIncludeCondition() const { DARABONBA_PTR_GET_DEFAULT(includeCondition_, "") };
        inline Dimensions& setIncludeCondition(string includeCondition) { DARABONBA_PTR_SET_VALUE(includeCondition_, includeCondition) };


      protected:
        shared_ptr<string> desc_ {};
        shared_ptr<string> dimension_ {};
        shared_ptr<string> excludeCondition_ {};
        shared_ptr<string> includeCondition_ {};
      };

      virtual bool empty() const override { return this->answerThreshold_ == nullptr
        && this->antModelInfo_ == nullptr && this->average_ == nullptr && this->beginType_ == nullptr && this->botId_ == nullptr && this->caseSensitive_ == nullptr
        && this->categoryPathCode_ == nullptr && this->checkFirstSentence_ == nullptr && this->checkType_ == nullptr && this->compareOperator_ == nullptr && this->contextChatMatch_ == nullptr
        && this->customerParam_ == nullptr && this->delayTime_ == nullptr && this->differentRole_ == nullptr && this->dimensions_ == nullptr && this->endType_ == nullptr
        && this->excludes_ == nullptr && this->from_ == nullptr && this->fromEnd_ == nullptr && this->hitCondition_ == nullptr && this->hitTime_ == nullptr
        && this->inSentence_ == nullptr && this->interval_ == nullptr && this->intervalEnd_ == nullptr && this->keywordExtension_ == nullptr && this->keywordMatchSize_ == nullptr
        && this->keywords_ == nullptr && this->knowledgeInfo_ == nullptr && this->knowledgeSentenceNum_ == nullptr && this->knowledgeTargetId_ == nullptr && this->knowledgeTargetName_ == nullptr
        && this->knowledgeTargetType_ == nullptr && this->knowledges_ == nullptr && this->lgfSentences_ == nullptr && this->llmModelCode_ == nullptr && this->maxEmotionChangeValue_ == nullptr
        && this->minWordSize_ == nullptr && this->nearDialogue_ == nullptr && this->notRegex_ == nullptr && this->phrase_ == nullptr && this->pkey_ == nullptr
        && this->poutputType_ == nullptr && this->pvalues_ == nullptr && this->questionThreshold_ == nullptr && this->references_ == nullptr && this->regex_ == nullptr
        && this->roleId_ == nullptr && this->sceneName_ == nullptr && this->score_ == nullptr && this->similarityThreshold_ == nullptr && this->similarlySentences_ == nullptr
        && this->synonyms_ == nullptr && this->target_ == nullptr && this->targetRole_ == nullptr && this->threshold_ == nullptr && this->useEasAlgorithm_ == nullptr
        && this->velocity_ == nullptr && this->velocityInMint_ == nullptr; };
      // answerThreshold Field Functions 
      bool hasAnswerThreshold() const { return this->answerThreshold_ != nullptr;};
      void deleteAnswerThreshold() { this->answerThreshold_ = nullptr;};
      inline string getAnswerThreshold() const { DARABONBA_PTR_GET_DEFAULT(answerThreshold_, "") };
      inline Param& setAnswerThreshold(string answerThreshold) { DARABONBA_PTR_SET_VALUE(answerThreshold_, answerThreshold) };


      // antModelInfo Field Functions 
      bool hasAntModelInfo() const { return this->antModelInfo_ != nullptr;};
      void deleteAntModelInfo() { this->antModelInfo_ = nullptr;};
      inline const map<string, string> & getAntModelInfo() const { DARABONBA_PTR_GET_CONST(antModelInfo_, map<string, string>) };
      inline map<string, string> getAntModelInfo() { DARABONBA_PTR_GET(antModelInfo_, map<string, string>) };
      inline Param& setAntModelInfo(const map<string, string> & antModelInfo) { DARABONBA_PTR_SET_VALUE(antModelInfo_, antModelInfo) };
      inline Param& setAntModelInfo(map<string, string> && antModelInfo) { DARABONBA_PTR_SET_RVALUE(antModelInfo_, antModelInfo) };


      // average Field Functions 
      bool hasAverage() const { return this->average_ != nullptr;};
      void deleteAverage() { this->average_ = nullptr;};
      inline bool getAverage() const { DARABONBA_PTR_GET_DEFAULT(average_, false) };
      inline Param& setAverage(bool average) { DARABONBA_PTR_SET_VALUE(average_, average) };


      // beginType Field Functions 
      bool hasBeginType() const { return this->beginType_ != nullptr;};
      void deleteBeginType() { this->beginType_ = nullptr;};
      inline string getBeginType() const { DARABONBA_PTR_GET_DEFAULT(beginType_, "") };
      inline Param& setBeginType(string beginType) { DARABONBA_PTR_SET_VALUE(beginType_, beginType) };


      // botId Field Functions 
      bool hasBotId() const { return this->botId_ != nullptr;};
      void deleteBotId() { this->botId_ = nullptr;};
      inline string getBotId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
      inline Param& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


      // caseSensitive Field Functions 
      bool hasCaseSensitive() const { return this->caseSensitive_ != nullptr;};
      void deleteCaseSensitive() { this->caseSensitive_ = nullptr;};
      inline bool getCaseSensitive() const { DARABONBA_PTR_GET_DEFAULT(caseSensitive_, false) };
      inline Param& setCaseSensitive(bool caseSensitive) { DARABONBA_PTR_SET_VALUE(caseSensitive_, caseSensitive) };


      // categoryPathCode Field Functions 
      bool hasCategoryPathCode() const { return this->categoryPathCode_ != nullptr;};
      void deleteCategoryPathCode() { this->categoryPathCode_ = nullptr;};
      inline string getCategoryPathCode() const { DARABONBA_PTR_GET_DEFAULT(categoryPathCode_, "") };
      inline Param& setCategoryPathCode(string categoryPathCode) { DARABONBA_PTR_SET_VALUE(categoryPathCode_, categoryPathCode) };


      // checkFirstSentence Field Functions 
      bool hasCheckFirstSentence() const { return this->checkFirstSentence_ != nullptr;};
      void deleteCheckFirstSentence() { this->checkFirstSentence_ = nullptr;};
      inline bool getCheckFirstSentence() const { DARABONBA_PTR_GET_DEFAULT(checkFirstSentence_, false) };
      inline Param& setCheckFirstSentence(bool checkFirstSentence) { DARABONBA_PTR_SET_VALUE(checkFirstSentence_, checkFirstSentence) };


      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
      inline Param& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


      // compareOperator Field Functions 
      bool hasCompareOperator() const { return this->compareOperator_ != nullptr;};
      void deleteCompareOperator() { this->compareOperator_ = nullptr;};
      inline string getCompareOperator() const { DARABONBA_PTR_GET_DEFAULT(compareOperator_, "") };
      inline Param& setCompareOperator(string compareOperator) { DARABONBA_PTR_SET_VALUE(compareOperator_, compareOperator) };


      // contextChatMatch Field Functions 
      bool hasContextChatMatch() const { return this->contextChatMatch_ != nullptr;};
      void deleteContextChatMatch() { this->contextChatMatch_ = nullptr;};
      inline bool getContextChatMatch() const { DARABONBA_PTR_GET_DEFAULT(contextChatMatch_, false) };
      inline Param& setContextChatMatch(bool contextChatMatch) { DARABONBA_PTR_SET_VALUE(contextChatMatch_, contextChatMatch) };


      // customerParam Field Functions 
      bool hasCustomerParam() const { return this->customerParam_ != nullptr;};
      void deleteCustomerParam() { this->customerParam_ = nullptr;};
      inline const JudgeNodeMetaDesc & getCustomerParam() const { DARABONBA_PTR_GET_CONST(customerParam_, JudgeNodeMetaDesc) };
      inline JudgeNodeMetaDesc getCustomerParam() { DARABONBA_PTR_GET(customerParam_, JudgeNodeMetaDesc) };
      inline Param& setCustomerParam(const JudgeNodeMetaDesc & customerParam) { DARABONBA_PTR_SET_VALUE(customerParam_, customerParam) };
      inline Param& setCustomerParam(JudgeNodeMetaDesc && customerParam) { DARABONBA_PTR_SET_RVALUE(customerParam_, customerParam) };


      // delayTime Field Functions 
      bool hasDelayTime() const { return this->delayTime_ != nullptr;};
      void deleteDelayTime() { this->delayTime_ = nullptr;};
      inline int32_t getDelayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
      inline Param& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


      // differentRole Field Functions 
      bool hasDifferentRole() const { return this->differentRole_ != nullptr;};
      void deleteDifferentRole() { this->differentRole_ = nullptr;};
      inline bool getDifferentRole() const { DARABONBA_PTR_GET_DEFAULT(differentRole_, false) };
      inline Param& setDifferentRole(bool differentRole) { DARABONBA_PTR_SET_VALUE(differentRole_, differentRole) };


      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline const vector<Param::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<Param::Dimensions>) };
      inline vector<Param::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<Param::Dimensions>) };
      inline Param& setDimensions(const vector<Param::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
      inline Param& setDimensions(vector<Param::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


      // endType Field Functions 
      bool hasEndType() const { return this->endType_ != nullptr;};
      void deleteEndType() { this->endType_ = nullptr;};
      inline string getEndType() const { DARABONBA_PTR_GET_DEFAULT(endType_, "") };
      inline Param& setEndType(string endType) { DARABONBA_PTR_SET_VALUE(endType_, endType) };


      // excludes Field Functions 
      bool hasExcludes() const { return this->excludes_ != nullptr;};
      void deleteExcludes() { this->excludes_ = nullptr;};
      inline const vector<string> & getExcludes() const { DARABONBA_PTR_GET_CONST(excludes_, vector<string>) };
      inline vector<string> getExcludes() { DARABONBA_PTR_GET(excludes_, vector<string>) };
      inline Param& setExcludes(const vector<string> & excludes) { DARABONBA_PTR_SET_VALUE(excludes_, excludes) };
      inline Param& setExcludes(vector<string> && excludes) { DARABONBA_PTR_SET_RVALUE(excludes_, excludes) };


      // from Field Functions 
      bool hasFrom() const { return this->from_ != nullptr;};
      void deleteFrom() { this->from_ = nullptr;};
      inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
      inline Param& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


      // fromEnd Field Functions 
      bool hasFromEnd() const { return this->fromEnd_ != nullptr;};
      void deleteFromEnd() { this->fromEnd_ = nullptr;};
      inline bool getFromEnd() const { DARABONBA_PTR_GET_DEFAULT(fromEnd_, false) };
      inline Param& setFromEnd(bool fromEnd) { DARABONBA_PTR_SET_VALUE(fromEnd_, fromEnd) };


      // hitCondition Field Functions 
      bool hasHitCondition() const { return this->hitCondition_ != nullptr;};
      void deleteHitCondition() { this->hitCondition_ = nullptr;};
      inline string getHitCondition() const { DARABONBA_PTR_GET_DEFAULT(hitCondition_, "") };
      inline Param& setHitCondition(string hitCondition) { DARABONBA_PTR_SET_VALUE(hitCondition_, hitCondition) };


      // hitTime Field Functions 
      bool hasHitTime() const { return this->hitTime_ != nullptr;};
      void deleteHitTime() { this->hitTime_ = nullptr;};
      inline int32_t getHitTime() const { DARABONBA_PTR_GET_DEFAULT(hitTime_, 0) };
      inline Param& setHitTime(int32_t hitTime) { DARABONBA_PTR_SET_VALUE(hitTime_, hitTime) };


      // inSentence Field Functions 
      bool hasInSentence() const { return this->inSentence_ != nullptr;};
      void deleteInSentence() { this->inSentence_ = nullptr;};
      inline bool getInSentence() const { DARABONBA_PTR_GET_DEFAULT(inSentence_, false) };
      inline Param& setInSentence(bool inSentence) { DARABONBA_PTR_SET_VALUE(inSentence_, inSentence) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
      inline Param& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // intervalEnd Field Functions 
      bool hasIntervalEnd() const { return this->intervalEnd_ != nullptr;};
      void deleteIntervalEnd() { this->intervalEnd_ = nullptr;};
      inline int32_t getIntervalEnd() const { DARABONBA_PTR_GET_DEFAULT(intervalEnd_, 0) };
      inline Param& setIntervalEnd(int32_t intervalEnd) { DARABONBA_PTR_SET_VALUE(intervalEnd_, intervalEnd) };


      // keywordExtension Field Functions 
      bool hasKeywordExtension() const { return this->keywordExtension_ != nullptr;};
      void deleteKeywordExtension() { this->keywordExtension_ = nullptr;};
      inline int32_t getKeywordExtension() const { DARABONBA_PTR_GET_DEFAULT(keywordExtension_, 0) };
      inline Param& setKeywordExtension(int32_t keywordExtension) { DARABONBA_PTR_SET_VALUE(keywordExtension_, keywordExtension) };


      // keywordMatchSize Field Functions 
      bool hasKeywordMatchSize() const { return this->keywordMatchSize_ != nullptr;};
      void deleteKeywordMatchSize() { this->keywordMatchSize_ = nullptr;};
      inline int32_t getKeywordMatchSize() const { DARABONBA_PTR_GET_DEFAULT(keywordMatchSize_, 0) };
      inline Param& setKeywordMatchSize(int32_t keywordMatchSize) { DARABONBA_PTR_SET_VALUE(keywordMatchSize_, keywordMatchSize) };


      // keywords Field Functions 
      bool hasKeywords() const { return this->keywords_ != nullptr;};
      void deleteKeywords() { this->keywords_ = nullptr;};
      inline const vector<string> & getKeywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
      inline vector<string> getKeywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
      inline Param& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
      inline Param& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


      // knowledgeInfo Field Functions 
      bool hasKnowledgeInfo() const { return this->knowledgeInfo_ != nullptr;};
      void deleteKnowledgeInfo() { this->knowledgeInfo_ = nullptr;};
      inline string getKnowledgeInfo() const { DARABONBA_PTR_GET_DEFAULT(knowledgeInfo_, "") };
      inline Param& setKnowledgeInfo(string knowledgeInfo) { DARABONBA_PTR_SET_VALUE(knowledgeInfo_, knowledgeInfo) };


      // knowledgeSentenceNum Field Functions 
      bool hasKnowledgeSentenceNum() const { return this->knowledgeSentenceNum_ != nullptr;};
      void deleteKnowledgeSentenceNum() { this->knowledgeSentenceNum_ = nullptr;};
      inline int32_t getKnowledgeSentenceNum() const { DARABONBA_PTR_GET_DEFAULT(knowledgeSentenceNum_, 0) };
      inline Param& setKnowledgeSentenceNum(int32_t knowledgeSentenceNum) { DARABONBA_PTR_SET_VALUE(knowledgeSentenceNum_, knowledgeSentenceNum) };


      // knowledgeTargetId Field Functions 
      bool hasKnowledgeTargetId() const { return this->knowledgeTargetId_ != nullptr;};
      void deleteKnowledgeTargetId() { this->knowledgeTargetId_ = nullptr;};
      inline string getKnowledgeTargetId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeTargetId_, "") };
      inline Param& setKnowledgeTargetId(string knowledgeTargetId) { DARABONBA_PTR_SET_VALUE(knowledgeTargetId_, knowledgeTargetId) };


      // knowledgeTargetName Field Functions 
      bool hasKnowledgeTargetName() const { return this->knowledgeTargetName_ != nullptr;};
      void deleteKnowledgeTargetName() { this->knowledgeTargetName_ = nullptr;};
      inline string getKnowledgeTargetName() const { DARABONBA_PTR_GET_DEFAULT(knowledgeTargetName_, "") };
      inline Param& setKnowledgeTargetName(string knowledgeTargetName) { DARABONBA_PTR_SET_VALUE(knowledgeTargetName_, knowledgeTargetName) };


      // knowledgeTargetType Field Functions 
      bool hasKnowledgeTargetType() const { return this->knowledgeTargetType_ != nullptr;};
      void deleteKnowledgeTargetType() { this->knowledgeTargetType_ = nullptr;};
      inline int32_t getKnowledgeTargetType() const { DARABONBA_PTR_GET_DEFAULT(knowledgeTargetType_, 0) };
      inline Param& setKnowledgeTargetType(int32_t knowledgeTargetType) { DARABONBA_PTR_SET_VALUE(knowledgeTargetType_, knowledgeTargetType) };


      // knowledges Field Functions 
      bool hasKnowledges() const { return this->knowledges_ != nullptr;};
      void deleteKnowledges() { this->knowledges_ = nullptr;};
      inline string getKnowledges() const { DARABONBA_PTR_GET_DEFAULT(knowledges_, "") };
      inline Param& setKnowledges(string knowledges) { DARABONBA_PTR_SET_VALUE(knowledges_, knowledges) };


      // lgfSentences Field Functions 
      bool hasLgfSentences() const { return this->lgfSentences_ != nullptr;};
      void deleteLgfSentences() { this->lgfSentences_ = nullptr;};
      inline const vector<string> & getLgfSentences() const { DARABONBA_PTR_GET_CONST(lgfSentences_, vector<string>) };
      inline vector<string> getLgfSentences() { DARABONBA_PTR_GET(lgfSentences_, vector<string>) };
      inline Param& setLgfSentences(const vector<string> & lgfSentences) { DARABONBA_PTR_SET_VALUE(lgfSentences_, lgfSentences) };
      inline Param& setLgfSentences(vector<string> && lgfSentences) { DARABONBA_PTR_SET_RVALUE(lgfSentences_, lgfSentences) };


      // llmModelCode Field Functions 
      bool hasLlmModelCode() const { return this->llmModelCode_ != nullptr;};
      void deleteLlmModelCode() { this->llmModelCode_ = nullptr;};
      inline string getLlmModelCode() const { DARABONBA_PTR_GET_DEFAULT(llmModelCode_, "") };
      inline Param& setLlmModelCode(string llmModelCode) { DARABONBA_PTR_SET_VALUE(llmModelCode_, llmModelCode) };


      // maxEmotionChangeValue Field Functions 
      bool hasMaxEmotionChangeValue() const { return this->maxEmotionChangeValue_ != nullptr;};
      void deleteMaxEmotionChangeValue() { this->maxEmotionChangeValue_ = nullptr;};
      inline int32_t getMaxEmotionChangeValue() const { DARABONBA_PTR_GET_DEFAULT(maxEmotionChangeValue_, 0) };
      inline Param& setMaxEmotionChangeValue(int32_t maxEmotionChangeValue) { DARABONBA_PTR_SET_VALUE(maxEmotionChangeValue_, maxEmotionChangeValue) };


      // minWordSize Field Functions 
      bool hasMinWordSize() const { return this->minWordSize_ != nullptr;};
      void deleteMinWordSize() { this->minWordSize_ = nullptr;};
      inline int32_t getMinWordSize() const { DARABONBA_PTR_GET_DEFAULT(minWordSize_, 0) };
      inline Param& setMinWordSize(int32_t minWordSize) { DARABONBA_PTR_SET_VALUE(minWordSize_, minWordSize) };


      // nearDialogue Field Functions 
      bool hasNearDialogue() const { return this->nearDialogue_ != nullptr;};
      void deleteNearDialogue() { this->nearDialogue_ = nullptr;};
      inline bool getNearDialogue() const { DARABONBA_PTR_GET_DEFAULT(nearDialogue_, false) };
      inline Param& setNearDialogue(bool nearDialogue) { DARABONBA_PTR_SET_VALUE(nearDialogue_, nearDialogue) };


      // notRegex Field Functions 
      bool hasNotRegex() const { return this->notRegex_ != nullptr;};
      void deleteNotRegex() { this->notRegex_ = nullptr;};
      inline string getNotRegex() const { DARABONBA_PTR_GET_DEFAULT(notRegex_, "") };
      inline Param& setNotRegex(string notRegex) { DARABONBA_PTR_SET_VALUE(notRegex_, notRegex) };


      // phrase Field Functions 
      bool hasPhrase() const { return this->phrase_ != nullptr;};
      void deletePhrase() { this->phrase_ = nullptr;};
      inline string getPhrase() const { DARABONBA_PTR_GET_DEFAULT(phrase_, "") };
      inline Param& setPhrase(string phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };


      // pkey Field Functions 
      bool hasPkey() const { return this->pkey_ != nullptr;};
      void deletePkey() { this->pkey_ = nullptr;};
      inline string getPkey() const { DARABONBA_PTR_GET_DEFAULT(pkey_, "") };
      inline Param& setPkey(string pkey) { DARABONBA_PTR_SET_VALUE(pkey_, pkey) };


      // poutputType Field Functions 
      bool hasPoutputType() const { return this->poutputType_ != nullptr;};
      void deletePoutputType() { this->poutputType_ = nullptr;};
      inline int32_t getPoutputType() const { DARABONBA_PTR_GET_DEFAULT(poutputType_, 0) };
      inline Param& setPoutputType(int32_t poutputType) { DARABONBA_PTR_SET_VALUE(poutputType_, poutputType) };


      // pvalues Field Functions 
      bool hasPvalues() const { return this->pvalues_ != nullptr;};
      void deletePvalues() { this->pvalues_ = nullptr;};
      inline const vector<string> & getPvalues() const { DARABONBA_PTR_GET_CONST(pvalues_, vector<string>) };
      inline vector<string> getPvalues() { DARABONBA_PTR_GET(pvalues_, vector<string>) };
      inline Param& setPvalues(const vector<string> & pvalues) { DARABONBA_PTR_SET_VALUE(pvalues_, pvalues) };
      inline Param& setPvalues(vector<string> && pvalues) { DARABONBA_PTR_SET_RVALUE(pvalues_, pvalues) };


      // questionThreshold Field Functions 
      bool hasQuestionThreshold() const { return this->questionThreshold_ != nullptr;};
      void deleteQuestionThreshold() { this->questionThreshold_ = nullptr;};
      inline string getQuestionThreshold() const { DARABONBA_PTR_GET_DEFAULT(questionThreshold_, "") };
      inline Param& setQuestionThreshold(string questionThreshold) { DARABONBA_PTR_SET_VALUE(questionThreshold_, questionThreshold) };


      // references Field Functions 
      bool hasReferences() const { return this->references_ != nullptr;};
      void deleteReferences() { this->references_ = nullptr;};
      inline const vector<string> & getReferences() const { DARABONBA_PTR_GET_CONST(references_, vector<string>) };
      inline vector<string> getReferences() { DARABONBA_PTR_GET(references_, vector<string>) };
      inline Param& setReferences(const vector<string> & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
      inline Param& setReferences(vector<string> && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


      // regex Field Functions 
      bool hasRegex() const { return this->regex_ != nullptr;};
      void deleteRegex() { this->regex_ = nullptr;};
      inline string getRegex() const { DARABONBA_PTR_GET_DEFAULT(regex_, "") };
      inline Param& setRegex(string regex) { DARABONBA_PTR_SET_VALUE(regex_, regex) };


      // roleId Field Functions 
      bool hasRoleId() const { return this->roleId_ != nullptr;};
      void deleteRoleId() { this->roleId_ = nullptr;};
      inline int32_t getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0) };
      inline Param& setRoleId(int32_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


      // sceneName Field Functions 
      bool hasSceneName() const { return this->sceneName_ != nullptr;};
      void deleteSceneName() { this->sceneName_ = nullptr;};
      inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
      inline Param& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
      inline Param& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // similarityThreshold Field Functions 
      bool hasSimilarityThreshold() const { return this->similarityThreshold_ != nullptr;};
      void deleteSimilarityThreshold() { this->similarityThreshold_ = nullptr;};
      inline double getSimilarityThreshold() const { DARABONBA_PTR_GET_DEFAULT(similarityThreshold_, 0.0) };
      inline Param& setSimilarityThreshold(double similarityThreshold) { DARABONBA_PTR_SET_VALUE(similarityThreshold_, similarityThreshold) };


      // similarlySentences Field Functions 
      bool hasSimilarlySentences() const { return this->similarlySentences_ != nullptr;};
      void deleteSimilarlySentences() { this->similarlySentences_ = nullptr;};
      inline const vector<string> & getSimilarlySentences() const { DARABONBA_PTR_GET_CONST(similarlySentences_, vector<string>) };
      inline vector<string> getSimilarlySentences() { DARABONBA_PTR_GET(similarlySentences_, vector<string>) };
      inline Param& setSimilarlySentences(const vector<string> & similarlySentences) { DARABONBA_PTR_SET_VALUE(similarlySentences_, similarlySentences) };
      inline Param& setSimilarlySentences(vector<string> && similarlySentences) { DARABONBA_PTR_SET_RVALUE(similarlySentences_, similarlySentences) };


      // synonyms Field Functions 
      bool hasSynonyms() const { return this->synonyms_ != nullptr;};
      void deleteSynonyms() { this->synonyms_ = nullptr;};
      inline const map<string, vector<string>> & getSynonyms() const { DARABONBA_PTR_GET_CONST(synonyms_, map<string, vector<string>>) };
      inline map<string, vector<string>> getSynonyms() { DARABONBA_PTR_GET(synonyms_, map<string, vector<string>>) };
      inline Param& setSynonyms(const map<string, vector<string>> & synonyms) { DARABONBA_PTR_SET_VALUE(synonyms_, synonyms) };
      inline Param& setSynonyms(map<string, vector<string>> && synonyms) { DARABONBA_PTR_SET_RVALUE(synonyms_, synonyms) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline int32_t getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, 0) };
      inline Param& setTarget(int32_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // targetRole Field Functions 
      bool hasTargetRole() const { return this->targetRole_ != nullptr;};
      void deleteTargetRole() { this->targetRole_ = nullptr;};
      inline string getTargetRole() const { DARABONBA_PTR_GET_DEFAULT(targetRole_, "") };
      inline Param& setTargetRole(string targetRole) { DARABONBA_PTR_SET_VALUE(targetRole_, targetRole) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
      inline Param& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      // useEasAlgorithm Field Functions 
      bool hasUseEasAlgorithm() const { return this->useEasAlgorithm_ != nullptr;};
      void deleteUseEasAlgorithm() { this->useEasAlgorithm_ = nullptr;};
      inline bool getUseEasAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(useEasAlgorithm_, false) };
      inline Param& setUseEasAlgorithm(bool useEasAlgorithm) { DARABONBA_PTR_SET_VALUE(useEasAlgorithm_, useEasAlgorithm) };


      // velocity Field Functions 
      bool hasVelocity() const { return this->velocity_ != nullptr;};
      void deleteVelocity() { this->velocity_ = nullptr;};
      inline double getVelocity() const { DARABONBA_PTR_GET_DEFAULT(velocity_, 0.0) };
      inline Param& setVelocity(double velocity) { DARABONBA_PTR_SET_VALUE(velocity_, velocity) };


      // velocityInMint Field Functions 
      bool hasVelocityInMint() const { return this->velocityInMint_ != nullptr;};
      void deleteVelocityInMint() { this->velocityInMint_ = nullptr;};
      inline int32_t getVelocityInMint() const { DARABONBA_PTR_GET_DEFAULT(velocityInMint_, 0) };
      inline Param& setVelocityInMint(int32_t velocityInMint) { DARABONBA_PTR_SET_VALUE(velocityInMint_, velocityInMint) };


    protected:
      shared_ptr<string> answerThreshold_ {};
      shared_ptr<map<string, string>> antModelInfo_ {};
      shared_ptr<bool> average_ {};
      shared_ptr<string> beginType_ {};
      shared_ptr<string> botId_ {};
      shared_ptr<bool> caseSensitive_ {};
      shared_ptr<string> categoryPathCode_ {};
      shared_ptr<bool> checkFirstSentence_ {};
      shared_ptr<int32_t> checkType_ {};
      shared_ptr<string> compareOperator_ {};
      shared_ptr<bool> contextChatMatch_ {};
      shared_ptr<JudgeNodeMetaDesc> customerParam_ {};
      shared_ptr<int32_t> delayTime_ {};
      shared_ptr<bool> differentRole_ {};
      shared_ptr<vector<Param::Dimensions>> dimensions_ {};
      shared_ptr<string> endType_ {};
      shared_ptr<vector<string>> excludes_ {};
      shared_ptr<int32_t> from_ {};
      shared_ptr<bool> fromEnd_ {};
      shared_ptr<string> hitCondition_ {};
      shared_ptr<int32_t> hitTime_ {};
      shared_ptr<bool> inSentence_ {};
      shared_ptr<int32_t> interval_ {};
      shared_ptr<int32_t> intervalEnd_ {};
      shared_ptr<int32_t> keywordExtension_ {};
      shared_ptr<int32_t> keywordMatchSize_ {};
      shared_ptr<vector<string>> keywords_ {};
      shared_ptr<string> knowledgeInfo_ {};
      shared_ptr<int32_t> knowledgeSentenceNum_ {};
      shared_ptr<string> knowledgeTargetId_ {};
      shared_ptr<string> knowledgeTargetName_ {};
      shared_ptr<int32_t> knowledgeTargetType_ {};
      shared_ptr<string> knowledges_ {};
      shared_ptr<vector<string>> lgfSentences_ {};
      shared_ptr<string> llmModelCode_ {};
      shared_ptr<int32_t> maxEmotionChangeValue_ {};
      shared_ptr<int32_t> minWordSize_ {};
      shared_ptr<bool> nearDialogue_ {};
      shared_ptr<string> notRegex_ {};
      shared_ptr<string> phrase_ {};
      shared_ptr<string> pkey_ {};
      shared_ptr<int32_t> poutputType_ {};
      shared_ptr<vector<string>> pvalues_ {};
      shared_ptr<string> questionThreshold_ {};
      shared_ptr<vector<string>> references_ {};
      shared_ptr<string> regex_ {};
      shared_ptr<int32_t> roleId_ {};
      shared_ptr<string> sceneName_ {};
      shared_ptr<int32_t> score_ {};
      shared_ptr<double> similarityThreshold_ {};
      shared_ptr<vector<string>> similarlySentences_ {};
      shared_ptr<map<string, vector<string>>> synonyms_ {};
      shared_ptr<int32_t> target_ {};
      shared_ptr<string> targetRole_ {};
      shared_ptr<float> threshold_ {};
      shared_ptr<bool> useEasAlgorithm_ {};
      shared_ptr<double> velocity_ {};
      shared_ptr<int32_t> velocityInMint_ {};
    };

    virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->oid_ == nullptr && this->param_ == nullptr && this->qualityCheckType_ == nullptr && this->type_ == nullptr
        && this->userGroup_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline OperatorBasicInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline OperatorBasicInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // oid Field Functions 
    bool hasOid() const { return this->oid_ != nullptr;};
    void deleteOid() { this->oid_ = nullptr;};
    inline string getOid() const { DARABONBA_PTR_GET_DEFAULT(oid_, "") };
    inline OperatorBasicInfo& setOid(string oid) { DARABONBA_PTR_SET_VALUE(oid_, oid) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const OperatorBasicInfo::Param & getParam() const { DARABONBA_PTR_GET_CONST(param_, OperatorBasicInfo::Param) };
    inline OperatorBasicInfo::Param getParam() { DARABONBA_PTR_GET(param_, OperatorBasicInfo::Param) };
    inline OperatorBasicInfo& setParam(const OperatorBasicInfo::Param & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline OperatorBasicInfo& setParam(OperatorBasicInfo::Param && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // qualityCheckType Field Functions 
    bool hasQualityCheckType() const { return this->qualityCheckType_ != nullptr;};
    void deleteQualityCheckType() { this->qualityCheckType_ = nullptr;};
    inline int32_t getQualityCheckType() const { DARABONBA_PTR_GET_DEFAULT(qualityCheckType_, 0) };
    inline OperatorBasicInfo& setQualityCheckType(int32_t qualityCheckType) { DARABONBA_PTR_SET_VALUE(qualityCheckType_, qualityCheckType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline OperatorBasicInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userGroup Field Functions 
    bool hasUserGroup() const { return this->userGroup_ != nullptr;};
    void deleteUserGroup() { this->userGroup_ = nullptr;};
    inline string getUserGroup() const { DARABONBA_PTR_GET_DEFAULT(userGroup_, "") };
    inline OperatorBasicInfo& setUserGroup(string userGroup) { DARABONBA_PTR_SET_VALUE(userGroup_, userGroup) };


  protected:
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> oid_ {};
    shared_ptr<OperatorBasicInfo::Param> param_ {};
    shared_ptr<int32_t> qualityCheckType_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> userGroup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
