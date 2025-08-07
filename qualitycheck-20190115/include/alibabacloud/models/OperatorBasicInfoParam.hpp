// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATORBASICINFOPARAM_HPP_
#define ALIBABACLOUD_MODELS_OPERATORBASICINFOPARAM_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class OperatorBasicInfoParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperatorBasicInfoParam& obj) { 
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
      DARABONBA_PTR_TO_JSON(EndType, endType_);
      DARABONBA_PTR_TO_JSON(Excludes, excludes_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(From_end, fromEnd_);
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
      DARABONBA_PTR_TO_JSON(LgfSentences, lgfSentences_);
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
    friend void from_json(const Darabonba::Json& j, OperatorBasicInfoParam& obj) { 
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
      DARABONBA_PTR_FROM_JSON(EndType, endType_);
      DARABONBA_PTR_FROM_JSON(Excludes, excludes_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(From_end, fromEnd_);
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
      DARABONBA_PTR_FROM_JSON(LgfSentences, lgfSentences_);
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
    OperatorBasicInfoParam() = default ;
    OperatorBasicInfoParam(const OperatorBasicInfoParam &) = default ;
    OperatorBasicInfoParam(OperatorBasicInfoParam &&) = default ;
    OperatorBasicInfoParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperatorBasicInfoParam() = default ;
    OperatorBasicInfoParam& operator=(const OperatorBasicInfoParam &) = default ;
    OperatorBasicInfoParam& operator=(OperatorBasicInfoParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->answerThreshold_ != nullptr
        && this->antModelInfo_ != nullptr && this->average_ != nullptr && this->beginType_ != nullptr && this->botId_ != nullptr && this->caseSensitive_ != nullptr
        && this->categoryPathCode_ != nullptr && this->checkFirstSentence_ != nullptr && this->checkType_ != nullptr && this->compareOperator_ != nullptr && this->contextChatMatch_ != nullptr
        && this->customerParam_ != nullptr && this->delayTime_ != nullptr && this->differentRole_ != nullptr && this->endType_ != nullptr && this->excludes_ != nullptr
        && this->from_ != nullptr && this->fromEnd_ != nullptr && this->hitTime_ != nullptr && this->inSentence_ != nullptr && this->interval_ != nullptr
        && this->intervalEnd_ != nullptr && this->keywordExtension_ != nullptr && this->keywordMatchSize_ != nullptr && this->keywords_ != nullptr && this->knowledgeInfo_ != nullptr
        && this->knowledgeSentenceNum_ != nullptr && this->knowledgeTargetId_ != nullptr && this->knowledgeTargetName_ != nullptr && this->knowledgeTargetType_ != nullptr && this->lgfSentences_ != nullptr
        && this->maxEmotionChangeValue_ != nullptr && this->minWordSize_ != nullptr && this->nearDialogue_ != nullptr && this->notRegex_ != nullptr && this->phrase_ != nullptr
        && this->pkey_ != nullptr && this->poutputType_ != nullptr && this->pvalues_ != nullptr && this->questionThreshold_ != nullptr && this->references_ != nullptr
        && this->regex_ != nullptr && this->roleId_ != nullptr && this->score_ != nullptr && this->similarityThreshold_ != nullptr && this->similarlySentences_ != nullptr
        && this->synonyms_ != nullptr && this->target_ != nullptr && this->targetRole_ != nullptr && this->threshold_ != nullptr && this->useEasAlgorithm_ != nullptr
        && this->velocity_ != nullptr && this->velocityInMint_ != nullptr; };
    // answerThreshold Field Functions 
    bool hasAnswerThreshold() const { return this->answerThreshold_ != nullptr;};
    void deleteAnswerThreshold() { this->answerThreshold_ = nullptr;};
    inline string answerThreshold() const { DARABONBA_PTR_GET_DEFAULT(answerThreshold_, "") };
    inline OperatorBasicInfoParam& setAnswerThreshold(string answerThreshold) { DARABONBA_PTR_SET_VALUE(answerThreshold_, answerThreshold) };


    // antModelInfo Field Functions 
    bool hasAntModelInfo() const { return this->antModelInfo_ != nullptr;};
    void deleteAntModelInfo() { this->antModelInfo_ = nullptr;};
    inline const map<string, string> & antModelInfo() const { DARABONBA_PTR_GET_CONST(antModelInfo_, map<string, string>) };
    inline map<string, string> antModelInfo() { DARABONBA_PTR_GET(antModelInfo_, map<string, string>) };
    inline OperatorBasicInfoParam& setAntModelInfo(const map<string, string> & antModelInfo) { DARABONBA_PTR_SET_VALUE(antModelInfo_, antModelInfo) };
    inline OperatorBasicInfoParam& setAntModelInfo(map<string, string> && antModelInfo) { DARABONBA_PTR_SET_RVALUE(antModelInfo_, antModelInfo) };


    // average Field Functions 
    bool hasAverage() const { return this->average_ != nullptr;};
    void deleteAverage() { this->average_ = nullptr;};
    inline bool average() const { DARABONBA_PTR_GET_DEFAULT(average_, false) };
    inline OperatorBasicInfoParam& setAverage(bool average) { DARABONBA_PTR_SET_VALUE(average_, average) };


    // beginType Field Functions 
    bool hasBeginType() const { return this->beginType_ != nullptr;};
    void deleteBeginType() { this->beginType_ = nullptr;};
    inline string beginType() const { DARABONBA_PTR_GET_DEFAULT(beginType_, "") };
    inline OperatorBasicInfoParam& setBeginType(string beginType) { DARABONBA_PTR_SET_VALUE(beginType_, beginType) };


    // botId Field Functions 
    bool hasBotId() const { return this->botId_ != nullptr;};
    void deleteBotId() { this->botId_ = nullptr;};
    inline string botId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
    inline OperatorBasicInfoParam& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


    // caseSensitive Field Functions 
    bool hasCaseSensitive() const { return this->caseSensitive_ != nullptr;};
    void deleteCaseSensitive() { this->caseSensitive_ = nullptr;};
    inline bool caseSensitive() const { DARABONBA_PTR_GET_DEFAULT(caseSensitive_, false) };
    inline OperatorBasicInfoParam& setCaseSensitive(bool caseSensitive) { DARABONBA_PTR_SET_VALUE(caseSensitive_, caseSensitive) };


    // categoryPathCode Field Functions 
    bool hasCategoryPathCode() const { return this->categoryPathCode_ != nullptr;};
    void deleteCategoryPathCode() { this->categoryPathCode_ = nullptr;};
    inline string categoryPathCode() const { DARABONBA_PTR_GET_DEFAULT(categoryPathCode_, "") };
    inline OperatorBasicInfoParam& setCategoryPathCode(string categoryPathCode) { DARABONBA_PTR_SET_VALUE(categoryPathCode_, categoryPathCode) };


    // checkFirstSentence Field Functions 
    bool hasCheckFirstSentence() const { return this->checkFirstSentence_ != nullptr;};
    void deleteCheckFirstSentence() { this->checkFirstSentence_ = nullptr;};
    inline bool checkFirstSentence() const { DARABONBA_PTR_GET_DEFAULT(checkFirstSentence_, false) };
    inline OperatorBasicInfoParam& setCheckFirstSentence(bool checkFirstSentence) { DARABONBA_PTR_SET_VALUE(checkFirstSentence_, checkFirstSentence) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int32_t checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
    inline OperatorBasicInfoParam& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // compareOperator Field Functions 
    bool hasCompareOperator() const { return this->compareOperator_ != nullptr;};
    void deleteCompareOperator() { this->compareOperator_ = nullptr;};
    inline string compareOperator() const { DARABONBA_PTR_GET_DEFAULT(compareOperator_, "") };
    inline OperatorBasicInfoParam& setCompareOperator(string compareOperator) { DARABONBA_PTR_SET_VALUE(compareOperator_, compareOperator) };


    // contextChatMatch Field Functions 
    bool hasContextChatMatch() const { return this->contextChatMatch_ != nullptr;};
    void deleteContextChatMatch() { this->contextChatMatch_ = nullptr;};
    inline bool contextChatMatch() const { DARABONBA_PTR_GET_DEFAULT(contextChatMatch_, false) };
    inline OperatorBasicInfoParam& setContextChatMatch(bool contextChatMatch) { DARABONBA_PTR_SET_VALUE(contextChatMatch_, contextChatMatch) };


    // customerParam Field Functions 
    bool hasCustomerParam() const { return this->customerParam_ != nullptr;};
    void deleteCustomerParam() { this->customerParam_ = nullptr;};
    inline const Models::JudgeNodeMetaDesc & customerParam() const { DARABONBA_PTR_GET_CONST(customerParam_, Models::JudgeNodeMetaDesc) };
    inline Models::JudgeNodeMetaDesc customerParam() { DARABONBA_PTR_GET(customerParam_, Models::JudgeNodeMetaDesc) };
    inline OperatorBasicInfoParam& setCustomerParam(const Models::JudgeNodeMetaDesc & customerParam) { DARABONBA_PTR_SET_VALUE(customerParam_, customerParam) };
    inline OperatorBasicInfoParam& setCustomerParam(Models::JudgeNodeMetaDesc && customerParam) { DARABONBA_PTR_SET_RVALUE(customerParam_, customerParam) };


    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline int32_t delayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
    inline OperatorBasicInfoParam& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // differentRole Field Functions 
    bool hasDifferentRole() const { return this->differentRole_ != nullptr;};
    void deleteDifferentRole() { this->differentRole_ = nullptr;};
    inline bool differentRole() const { DARABONBA_PTR_GET_DEFAULT(differentRole_, false) };
    inline OperatorBasicInfoParam& setDifferentRole(bool differentRole) { DARABONBA_PTR_SET_VALUE(differentRole_, differentRole) };


    // endType Field Functions 
    bool hasEndType() const { return this->endType_ != nullptr;};
    void deleteEndType() { this->endType_ = nullptr;};
    inline string endType() const { DARABONBA_PTR_GET_DEFAULT(endType_, "") };
    inline OperatorBasicInfoParam& setEndType(string endType) { DARABONBA_PTR_SET_VALUE(endType_, endType) };


    // excludes Field Functions 
    bool hasExcludes() const { return this->excludes_ != nullptr;};
    void deleteExcludes() { this->excludes_ = nullptr;};
    inline const vector<string> & excludes() const { DARABONBA_PTR_GET_CONST(excludes_, vector<string>) };
    inline vector<string> excludes() { DARABONBA_PTR_GET(excludes_, vector<string>) };
    inline OperatorBasicInfoParam& setExcludes(const vector<string> & excludes) { DARABONBA_PTR_SET_VALUE(excludes_, excludes) };
    inline OperatorBasicInfoParam& setExcludes(vector<string> && excludes) { DARABONBA_PTR_SET_RVALUE(excludes_, excludes) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int32_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
    inline OperatorBasicInfoParam& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // fromEnd Field Functions 
    bool hasFromEnd() const { return this->fromEnd_ != nullptr;};
    void deleteFromEnd() { this->fromEnd_ = nullptr;};
    inline bool fromEnd() const { DARABONBA_PTR_GET_DEFAULT(fromEnd_, false) };
    inline OperatorBasicInfoParam& setFromEnd(bool fromEnd) { DARABONBA_PTR_SET_VALUE(fromEnd_, fromEnd) };


    // hitTime Field Functions 
    bool hasHitTime() const { return this->hitTime_ != nullptr;};
    void deleteHitTime() { this->hitTime_ = nullptr;};
    inline int32_t hitTime() const { DARABONBA_PTR_GET_DEFAULT(hitTime_, 0) };
    inline OperatorBasicInfoParam& setHitTime(int32_t hitTime) { DARABONBA_PTR_SET_VALUE(hitTime_, hitTime) };


    // inSentence Field Functions 
    bool hasInSentence() const { return this->inSentence_ != nullptr;};
    void deleteInSentence() { this->inSentence_ = nullptr;};
    inline bool inSentence() const { DARABONBA_PTR_GET_DEFAULT(inSentence_, false) };
    inline OperatorBasicInfoParam& setInSentence(bool inSentence) { DARABONBA_PTR_SET_VALUE(inSentence_, inSentence) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline OperatorBasicInfoParam& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // intervalEnd Field Functions 
    bool hasIntervalEnd() const { return this->intervalEnd_ != nullptr;};
    void deleteIntervalEnd() { this->intervalEnd_ = nullptr;};
    inline int32_t intervalEnd() const { DARABONBA_PTR_GET_DEFAULT(intervalEnd_, 0) };
    inline OperatorBasicInfoParam& setIntervalEnd(int32_t intervalEnd) { DARABONBA_PTR_SET_VALUE(intervalEnd_, intervalEnd) };


    // keywordExtension Field Functions 
    bool hasKeywordExtension() const { return this->keywordExtension_ != nullptr;};
    void deleteKeywordExtension() { this->keywordExtension_ = nullptr;};
    inline int32_t keywordExtension() const { DARABONBA_PTR_GET_DEFAULT(keywordExtension_, 0) };
    inline OperatorBasicInfoParam& setKeywordExtension(int32_t keywordExtension) { DARABONBA_PTR_SET_VALUE(keywordExtension_, keywordExtension) };


    // keywordMatchSize Field Functions 
    bool hasKeywordMatchSize() const { return this->keywordMatchSize_ != nullptr;};
    void deleteKeywordMatchSize() { this->keywordMatchSize_ = nullptr;};
    inline int32_t keywordMatchSize() const { DARABONBA_PTR_GET_DEFAULT(keywordMatchSize_, 0) };
    inline OperatorBasicInfoParam& setKeywordMatchSize(int32_t keywordMatchSize) { DARABONBA_PTR_SET_VALUE(keywordMatchSize_, keywordMatchSize) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline const vector<string> & keywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
    inline vector<string> keywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
    inline OperatorBasicInfoParam& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
    inline OperatorBasicInfoParam& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


    // knowledgeInfo Field Functions 
    bool hasKnowledgeInfo() const { return this->knowledgeInfo_ != nullptr;};
    void deleteKnowledgeInfo() { this->knowledgeInfo_ = nullptr;};
    inline string knowledgeInfo() const { DARABONBA_PTR_GET_DEFAULT(knowledgeInfo_, "") };
    inline OperatorBasicInfoParam& setKnowledgeInfo(string knowledgeInfo) { DARABONBA_PTR_SET_VALUE(knowledgeInfo_, knowledgeInfo) };


    // knowledgeSentenceNum Field Functions 
    bool hasKnowledgeSentenceNum() const { return this->knowledgeSentenceNum_ != nullptr;};
    void deleteKnowledgeSentenceNum() { this->knowledgeSentenceNum_ = nullptr;};
    inline int32_t knowledgeSentenceNum() const { DARABONBA_PTR_GET_DEFAULT(knowledgeSentenceNum_, 0) };
    inline OperatorBasicInfoParam& setKnowledgeSentenceNum(int32_t knowledgeSentenceNum) { DARABONBA_PTR_SET_VALUE(knowledgeSentenceNum_, knowledgeSentenceNum) };


    // knowledgeTargetId Field Functions 
    bool hasKnowledgeTargetId() const { return this->knowledgeTargetId_ != nullptr;};
    void deleteKnowledgeTargetId() { this->knowledgeTargetId_ = nullptr;};
    inline string knowledgeTargetId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeTargetId_, "") };
    inline OperatorBasicInfoParam& setKnowledgeTargetId(string knowledgeTargetId) { DARABONBA_PTR_SET_VALUE(knowledgeTargetId_, knowledgeTargetId) };


    // knowledgeTargetName Field Functions 
    bool hasKnowledgeTargetName() const { return this->knowledgeTargetName_ != nullptr;};
    void deleteKnowledgeTargetName() { this->knowledgeTargetName_ = nullptr;};
    inline string knowledgeTargetName() const { DARABONBA_PTR_GET_DEFAULT(knowledgeTargetName_, "") };
    inline OperatorBasicInfoParam& setKnowledgeTargetName(string knowledgeTargetName) { DARABONBA_PTR_SET_VALUE(knowledgeTargetName_, knowledgeTargetName) };


    // knowledgeTargetType Field Functions 
    bool hasKnowledgeTargetType() const { return this->knowledgeTargetType_ != nullptr;};
    void deleteKnowledgeTargetType() { this->knowledgeTargetType_ = nullptr;};
    inline int32_t knowledgeTargetType() const { DARABONBA_PTR_GET_DEFAULT(knowledgeTargetType_, 0) };
    inline OperatorBasicInfoParam& setKnowledgeTargetType(int32_t knowledgeTargetType) { DARABONBA_PTR_SET_VALUE(knowledgeTargetType_, knowledgeTargetType) };


    // lgfSentences Field Functions 
    bool hasLgfSentences() const { return this->lgfSentences_ != nullptr;};
    void deleteLgfSentences() { this->lgfSentences_ = nullptr;};
    inline const vector<string> & lgfSentences() const { DARABONBA_PTR_GET_CONST(lgfSentences_, vector<string>) };
    inline vector<string> lgfSentences() { DARABONBA_PTR_GET(lgfSentences_, vector<string>) };
    inline OperatorBasicInfoParam& setLgfSentences(const vector<string> & lgfSentences) { DARABONBA_PTR_SET_VALUE(lgfSentences_, lgfSentences) };
    inline OperatorBasicInfoParam& setLgfSentences(vector<string> && lgfSentences) { DARABONBA_PTR_SET_RVALUE(lgfSentences_, lgfSentences) };


    // maxEmotionChangeValue Field Functions 
    bool hasMaxEmotionChangeValue() const { return this->maxEmotionChangeValue_ != nullptr;};
    void deleteMaxEmotionChangeValue() { this->maxEmotionChangeValue_ = nullptr;};
    inline int32_t maxEmotionChangeValue() const { DARABONBA_PTR_GET_DEFAULT(maxEmotionChangeValue_, 0) };
    inline OperatorBasicInfoParam& setMaxEmotionChangeValue(int32_t maxEmotionChangeValue) { DARABONBA_PTR_SET_VALUE(maxEmotionChangeValue_, maxEmotionChangeValue) };


    // minWordSize Field Functions 
    bool hasMinWordSize() const { return this->minWordSize_ != nullptr;};
    void deleteMinWordSize() { this->minWordSize_ = nullptr;};
    inline int32_t minWordSize() const { DARABONBA_PTR_GET_DEFAULT(minWordSize_, 0) };
    inline OperatorBasicInfoParam& setMinWordSize(int32_t minWordSize) { DARABONBA_PTR_SET_VALUE(minWordSize_, minWordSize) };


    // nearDialogue Field Functions 
    bool hasNearDialogue() const { return this->nearDialogue_ != nullptr;};
    void deleteNearDialogue() { this->nearDialogue_ = nullptr;};
    inline bool nearDialogue() const { DARABONBA_PTR_GET_DEFAULT(nearDialogue_, false) };
    inline OperatorBasicInfoParam& setNearDialogue(bool nearDialogue) { DARABONBA_PTR_SET_VALUE(nearDialogue_, nearDialogue) };


    // notRegex Field Functions 
    bool hasNotRegex() const { return this->notRegex_ != nullptr;};
    void deleteNotRegex() { this->notRegex_ = nullptr;};
    inline string notRegex() const { DARABONBA_PTR_GET_DEFAULT(notRegex_, "") };
    inline OperatorBasicInfoParam& setNotRegex(string notRegex) { DARABONBA_PTR_SET_VALUE(notRegex_, notRegex) };


    // phrase Field Functions 
    bool hasPhrase() const { return this->phrase_ != nullptr;};
    void deletePhrase() { this->phrase_ = nullptr;};
    inline string phrase() const { DARABONBA_PTR_GET_DEFAULT(phrase_, "") };
    inline OperatorBasicInfoParam& setPhrase(string phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };


    // pkey Field Functions 
    bool hasPkey() const { return this->pkey_ != nullptr;};
    void deletePkey() { this->pkey_ = nullptr;};
    inline string pkey() const { DARABONBA_PTR_GET_DEFAULT(pkey_, "") };
    inline OperatorBasicInfoParam& setPkey(string pkey) { DARABONBA_PTR_SET_VALUE(pkey_, pkey) };


    // poutputType Field Functions 
    bool hasPoutputType() const { return this->poutputType_ != nullptr;};
    void deletePoutputType() { this->poutputType_ = nullptr;};
    inline int32_t poutputType() const { DARABONBA_PTR_GET_DEFAULT(poutputType_, 0) };
    inline OperatorBasicInfoParam& setPoutputType(int32_t poutputType) { DARABONBA_PTR_SET_VALUE(poutputType_, poutputType) };


    // pvalues Field Functions 
    bool hasPvalues() const { return this->pvalues_ != nullptr;};
    void deletePvalues() { this->pvalues_ = nullptr;};
    inline const vector<string> & pvalues() const { DARABONBA_PTR_GET_CONST(pvalues_, vector<string>) };
    inline vector<string> pvalues() { DARABONBA_PTR_GET(pvalues_, vector<string>) };
    inline OperatorBasicInfoParam& setPvalues(const vector<string> & pvalues) { DARABONBA_PTR_SET_VALUE(pvalues_, pvalues) };
    inline OperatorBasicInfoParam& setPvalues(vector<string> && pvalues) { DARABONBA_PTR_SET_RVALUE(pvalues_, pvalues) };


    // questionThreshold Field Functions 
    bool hasQuestionThreshold() const { return this->questionThreshold_ != nullptr;};
    void deleteQuestionThreshold() { this->questionThreshold_ = nullptr;};
    inline string questionThreshold() const { DARABONBA_PTR_GET_DEFAULT(questionThreshold_, "") };
    inline OperatorBasicInfoParam& setQuestionThreshold(string questionThreshold) { DARABONBA_PTR_SET_VALUE(questionThreshold_, questionThreshold) };


    // references Field Functions 
    bool hasReferences() const { return this->references_ != nullptr;};
    void deleteReferences() { this->references_ = nullptr;};
    inline const vector<string> & references() const { DARABONBA_PTR_GET_CONST(references_, vector<string>) };
    inline vector<string> references() { DARABONBA_PTR_GET(references_, vector<string>) };
    inline OperatorBasicInfoParam& setReferences(const vector<string> & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
    inline OperatorBasicInfoParam& setReferences(vector<string> && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


    // regex Field Functions 
    bool hasRegex() const { return this->regex_ != nullptr;};
    void deleteRegex() { this->regex_ = nullptr;};
    inline string regex() const { DARABONBA_PTR_GET_DEFAULT(regex_, "") };
    inline OperatorBasicInfoParam& setRegex(string regex) { DARABONBA_PTR_SET_VALUE(regex_, regex) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int32_t roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0) };
    inline OperatorBasicInfoParam& setRoleId(int32_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline OperatorBasicInfoParam& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // similarityThreshold Field Functions 
    bool hasSimilarityThreshold() const { return this->similarityThreshold_ != nullptr;};
    void deleteSimilarityThreshold() { this->similarityThreshold_ = nullptr;};
    inline double similarityThreshold() const { DARABONBA_PTR_GET_DEFAULT(similarityThreshold_, 0.0) };
    inline OperatorBasicInfoParam& setSimilarityThreshold(double similarityThreshold) { DARABONBA_PTR_SET_VALUE(similarityThreshold_, similarityThreshold) };


    // similarlySentences Field Functions 
    bool hasSimilarlySentences() const { return this->similarlySentences_ != nullptr;};
    void deleteSimilarlySentences() { this->similarlySentences_ = nullptr;};
    inline const vector<string> & similarlySentences() const { DARABONBA_PTR_GET_CONST(similarlySentences_, vector<string>) };
    inline vector<string> similarlySentences() { DARABONBA_PTR_GET(similarlySentences_, vector<string>) };
    inline OperatorBasicInfoParam& setSimilarlySentences(const vector<string> & similarlySentences) { DARABONBA_PTR_SET_VALUE(similarlySentences_, similarlySentences) };
    inline OperatorBasicInfoParam& setSimilarlySentences(vector<string> && similarlySentences) { DARABONBA_PTR_SET_RVALUE(similarlySentences_, similarlySentences) };


    // synonyms Field Functions 
    bool hasSynonyms() const { return this->synonyms_ != nullptr;};
    void deleteSynonyms() { this->synonyms_ = nullptr;};
    inline const map<string, vector<string>> & synonyms() const { DARABONBA_PTR_GET_CONST(synonyms_, map<string, vector<string>>) };
    inline map<string, vector<string>> synonyms() { DARABONBA_PTR_GET(synonyms_, map<string, vector<string>>) };
    inline OperatorBasicInfoParam& setSynonyms(const map<string, vector<string>> & synonyms) { DARABONBA_PTR_SET_VALUE(synonyms_, synonyms) };
    inline OperatorBasicInfoParam& setSynonyms(map<string, vector<string>> && synonyms) { DARABONBA_PTR_SET_RVALUE(synonyms_, synonyms) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline int32_t target() const { DARABONBA_PTR_GET_DEFAULT(target_, 0) };
    inline OperatorBasicInfoParam& setTarget(int32_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetRole Field Functions 
    bool hasTargetRole() const { return this->targetRole_ != nullptr;};
    void deleteTargetRole() { this->targetRole_ = nullptr;};
    inline string targetRole() const { DARABONBA_PTR_GET_DEFAULT(targetRole_, "") };
    inline OperatorBasicInfoParam& setTargetRole(string targetRole) { DARABONBA_PTR_SET_VALUE(targetRole_, targetRole) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline OperatorBasicInfoParam& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // useEasAlgorithm Field Functions 
    bool hasUseEasAlgorithm() const { return this->useEasAlgorithm_ != nullptr;};
    void deleteUseEasAlgorithm() { this->useEasAlgorithm_ = nullptr;};
    inline bool useEasAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(useEasAlgorithm_, false) };
    inline OperatorBasicInfoParam& setUseEasAlgorithm(bool useEasAlgorithm) { DARABONBA_PTR_SET_VALUE(useEasAlgorithm_, useEasAlgorithm) };


    // velocity Field Functions 
    bool hasVelocity() const { return this->velocity_ != nullptr;};
    void deleteVelocity() { this->velocity_ = nullptr;};
    inline double velocity() const { DARABONBA_PTR_GET_DEFAULT(velocity_, 0.0) };
    inline OperatorBasicInfoParam& setVelocity(double velocity) { DARABONBA_PTR_SET_VALUE(velocity_, velocity) };


    // velocityInMint Field Functions 
    bool hasVelocityInMint() const { return this->velocityInMint_ != nullptr;};
    void deleteVelocityInMint() { this->velocityInMint_ = nullptr;};
    inline int32_t velocityInMint() const { DARABONBA_PTR_GET_DEFAULT(velocityInMint_, 0) };
    inline OperatorBasicInfoParam& setVelocityInMint(int32_t velocityInMint) { DARABONBA_PTR_SET_VALUE(velocityInMint_, velocityInMint) };


  protected:
    std::shared_ptr<string> answerThreshold_ = nullptr;
    std::shared_ptr<map<string, string>> antModelInfo_ = nullptr;
    std::shared_ptr<bool> average_ = nullptr;
    std::shared_ptr<string> beginType_ = nullptr;
    std::shared_ptr<string> botId_ = nullptr;
    std::shared_ptr<bool> caseSensitive_ = nullptr;
    std::shared_ptr<string> categoryPathCode_ = nullptr;
    std::shared_ptr<bool> checkFirstSentence_ = nullptr;
    std::shared_ptr<int32_t> checkType_ = nullptr;
    std::shared_ptr<string> compareOperator_ = nullptr;
    std::shared_ptr<bool> contextChatMatch_ = nullptr;
    std::shared_ptr<Models::JudgeNodeMetaDesc> customerParam_ = nullptr;
    std::shared_ptr<int32_t> delayTime_ = nullptr;
    std::shared_ptr<bool> differentRole_ = nullptr;
    std::shared_ptr<string> endType_ = nullptr;
    std::shared_ptr<vector<string>> excludes_ = nullptr;
    std::shared_ptr<int32_t> from_ = nullptr;
    std::shared_ptr<bool> fromEnd_ = nullptr;
    std::shared_ptr<int32_t> hitTime_ = nullptr;
    std::shared_ptr<bool> inSentence_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<int32_t> intervalEnd_ = nullptr;
    std::shared_ptr<int32_t> keywordExtension_ = nullptr;
    std::shared_ptr<int32_t> keywordMatchSize_ = nullptr;
    std::shared_ptr<vector<string>> keywords_ = nullptr;
    std::shared_ptr<string> knowledgeInfo_ = nullptr;
    std::shared_ptr<int32_t> knowledgeSentenceNum_ = nullptr;
    std::shared_ptr<string> knowledgeTargetId_ = nullptr;
    std::shared_ptr<string> knowledgeTargetName_ = nullptr;
    std::shared_ptr<int32_t> knowledgeTargetType_ = nullptr;
    std::shared_ptr<vector<string>> lgfSentences_ = nullptr;
    std::shared_ptr<int32_t> maxEmotionChangeValue_ = nullptr;
    std::shared_ptr<int32_t> minWordSize_ = nullptr;
    std::shared_ptr<bool> nearDialogue_ = nullptr;
    std::shared_ptr<string> notRegex_ = nullptr;
    std::shared_ptr<string> phrase_ = nullptr;
    std::shared_ptr<string> pkey_ = nullptr;
    std::shared_ptr<int32_t> poutputType_ = nullptr;
    std::shared_ptr<vector<string>> pvalues_ = nullptr;
    std::shared_ptr<string> questionThreshold_ = nullptr;
    std::shared_ptr<vector<string>> references_ = nullptr;
    std::shared_ptr<string> regex_ = nullptr;
    std::shared_ptr<int32_t> roleId_ = nullptr;
    std::shared_ptr<int32_t> score_ = nullptr;
    std::shared_ptr<double> similarityThreshold_ = nullptr;
    std::shared_ptr<vector<string>> similarlySentences_ = nullptr;
    std::shared_ptr<map<string, vector<string>>> synonyms_ = nullptr;
    std::shared_ptr<int32_t> target_ = nullptr;
    std::shared_ptr<string> targetRole_ = nullptr;
    std::shared_ptr<float> threshold_ = nullptr;
    std::shared_ptr<bool> useEasAlgorithm_ = nullptr;
    std::shared_ptr<double> velocity_ = nullptr;
    std::shared_ptr<int32_t> velocityInMint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
