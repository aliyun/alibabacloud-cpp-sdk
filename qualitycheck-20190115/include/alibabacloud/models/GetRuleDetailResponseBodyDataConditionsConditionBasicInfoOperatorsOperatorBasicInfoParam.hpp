// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFOOPERATORSOPERATORBASICINFOPARAM_HPP_
#define ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFOOPERATORSOPERATORBASICINFOPARAM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo.hpp>
#include <alibabacloud/models/GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes.hpp>
#include <alibabacloud/models/GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords.hpp>
#include <alibabacloud/models/GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues.hpp>
#include <alibabacloud/models/GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamReferences.hpp>
#include <alibabacloud/models/GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamSimilarlySentences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& obj) { 
      DARABONBA_PTR_TO_JSON(AntModelInfo, antModelInfo_);
      DARABONBA_PTR_TO_JSON(Average, average_);
      DARABONBA_PTR_TO_JSON(BeginType, beginType_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(CompareOperator, compareOperator_);
      DARABONBA_PTR_TO_JSON(ContextChatMatch, contextChatMatch_);
      DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_TO_JSON(DifferentRole, differentRole_);
      DARABONBA_PTR_TO_JSON(Excludes, excludes_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(FromEnd, fromEnd_);
      DARABONBA_PTR_TO_JSON(HitTime, hitTime_);
      DARABONBA_PTR_TO_JSON(InSentence, inSentence_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(KeywordExtension, keywordExtension_);
      DARABONBA_PTR_TO_JSON(KeywordMatchSize, keywordMatchSize_);
      DARABONBA_PTR_TO_JSON(MaxEmotionChangeValue, maxEmotionChangeValue_);
      DARABONBA_PTR_TO_JSON(MinWordSize, minWordSize_);
      DARABONBA_PTR_TO_JSON(NotRegex, notRegex_);
      DARABONBA_PTR_TO_JSON(OperKeyWords, operKeyWords_);
      DARABONBA_PTR_TO_JSON(Phrase, phrase_);
      DARABONBA_PTR_TO_JSON(Pvalues, pvalues_);
      DARABONBA_PTR_TO_JSON(References, references_);
      DARABONBA_PTR_TO_JSON(Regex, regex_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Similarity_threshold, similarityThreshold_);
      DARABONBA_PTR_TO_JSON(SimilarlySentences, similarlySentences_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetRole, targetRole_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(VelocityInMint, velocityInMint_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& obj) { 
      DARABONBA_PTR_FROM_JSON(AntModelInfo, antModelInfo_);
      DARABONBA_PTR_FROM_JSON(Average, average_);
      DARABONBA_PTR_FROM_JSON(BeginType, beginType_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(CompareOperator, compareOperator_);
      DARABONBA_PTR_FROM_JSON(ContextChatMatch, contextChatMatch_);
      DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_FROM_JSON(DifferentRole, differentRole_);
      DARABONBA_PTR_FROM_JSON(Excludes, excludes_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(FromEnd, fromEnd_);
      DARABONBA_PTR_FROM_JSON(HitTime, hitTime_);
      DARABONBA_PTR_FROM_JSON(InSentence, inSentence_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(KeywordExtension, keywordExtension_);
      DARABONBA_PTR_FROM_JSON(KeywordMatchSize, keywordMatchSize_);
      DARABONBA_PTR_FROM_JSON(MaxEmotionChangeValue, maxEmotionChangeValue_);
      DARABONBA_PTR_FROM_JSON(MinWordSize, minWordSize_);
      DARABONBA_PTR_FROM_JSON(NotRegex, notRegex_);
      DARABONBA_PTR_FROM_JSON(OperKeyWords, operKeyWords_);
      DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
      DARABONBA_PTR_FROM_JSON(Pvalues, pvalues_);
      DARABONBA_PTR_FROM_JSON(References, references_);
      DARABONBA_PTR_FROM_JSON(Regex, regex_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Similarity_threshold, similarityThreshold_);
      DARABONBA_PTR_FROM_JSON(SimilarlySentences, similarlySentences_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetRole, targetRole_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(VelocityInMint, velocityInMint_);
    };
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam(GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam &&) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& operator=(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& operator=(GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->antModelInfo_ != nullptr
        && this->average_ != nullptr && this->beginType_ != nullptr && this->checkType_ != nullptr && this->compareOperator_ != nullptr && this->contextChatMatch_ != nullptr
        && this->delayTime_ != nullptr && this->differentRole_ != nullptr && this->excludes_ != nullptr && this->from_ != nullptr && this->fromEnd_ != nullptr
        && this->hitTime_ != nullptr && this->inSentence_ != nullptr && this->interval_ != nullptr && this->keywordExtension_ != nullptr && this->keywordMatchSize_ != nullptr
        && this->maxEmotionChangeValue_ != nullptr && this->minWordSize_ != nullptr && this->notRegex_ != nullptr && this->operKeyWords_ != nullptr && this->phrase_ != nullptr
        && this->pvalues_ != nullptr && this->references_ != nullptr && this->regex_ != nullptr && this->score_ != nullptr && this->similarityThreshold_ != nullptr
        && this->similarlySentences_ != nullptr && this->target_ != nullptr && this->targetRole_ != nullptr && this->threshold_ != nullptr && this->velocityInMint_ != nullptr; };
    // antModelInfo Field Functions 
    bool hasAntModelInfo() const { return this->antModelInfo_ != nullptr;};
    void deleteAntModelInfo() { this->antModelInfo_ = nullptr;};
    inline const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo & antModelInfo() const { DARABONBA_PTR_GET_CONST(antModelInfo_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo) };
    inline Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo antModelInfo() { DARABONBA_PTR_GET(antModelInfo_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setAntModelInfo(const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo & antModelInfo) { DARABONBA_PTR_SET_VALUE(antModelInfo_, antModelInfo) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setAntModelInfo(Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo && antModelInfo) { DARABONBA_PTR_SET_RVALUE(antModelInfo_, antModelInfo) };


    // average Field Functions 
    bool hasAverage() const { return this->average_ != nullptr;};
    void deleteAverage() { this->average_ = nullptr;};
    inline bool average() const { DARABONBA_PTR_GET_DEFAULT(average_, false) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setAverage(bool average) { DARABONBA_PTR_SET_VALUE(average_, average) };


    // beginType Field Functions 
    bool hasBeginType() const { return this->beginType_ != nullptr;};
    void deleteBeginType() { this->beginType_ = nullptr;};
    inline string beginType() const { DARABONBA_PTR_GET_DEFAULT(beginType_, "") };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setBeginType(string beginType) { DARABONBA_PTR_SET_VALUE(beginType_, beginType) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int32_t checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // compareOperator Field Functions 
    bool hasCompareOperator() const { return this->compareOperator_ != nullptr;};
    void deleteCompareOperator() { this->compareOperator_ = nullptr;};
    inline string compareOperator() const { DARABONBA_PTR_GET_DEFAULT(compareOperator_, "") };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setCompareOperator(string compareOperator) { DARABONBA_PTR_SET_VALUE(compareOperator_, compareOperator) };


    // contextChatMatch Field Functions 
    bool hasContextChatMatch() const { return this->contextChatMatch_ != nullptr;};
    void deleteContextChatMatch() { this->contextChatMatch_ = nullptr;};
    inline bool contextChatMatch() const { DARABONBA_PTR_GET_DEFAULT(contextChatMatch_, false) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setContextChatMatch(bool contextChatMatch) { DARABONBA_PTR_SET_VALUE(contextChatMatch_, contextChatMatch) };


    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline int32_t delayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // differentRole Field Functions 
    bool hasDifferentRole() const { return this->differentRole_ != nullptr;};
    void deleteDifferentRole() { this->differentRole_ = nullptr;};
    inline bool differentRole() const { DARABONBA_PTR_GET_DEFAULT(differentRole_, false) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setDifferentRole(bool differentRole) { DARABONBA_PTR_SET_VALUE(differentRole_, differentRole) };


    // excludes Field Functions 
    bool hasExcludes() const { return this->excludes_ != nullptr;};
    void deleteExcludes() { this->excludes_ = nullptr;};
    inline const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes & excludes() const { DARABONBA_PTR_GET_CONST(excludes_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes) };
    inline Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes excludes() { DARABONBA_PTR_GET(excludes_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setExcludes(const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes & excludes) { DARABONBA_PTR_SET_VALUE(excludes_, excludes) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setExcludes(Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes && excludes) { DARABONBA_PTR_SET_RVALUE(excludes_, excludes) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int32_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // fromEnd Field Functions 
    bool hasFromEnd() const { return this->fromEnd_ != nullptr;};
    void deleteFromEnd() { this->fromEnd_ = nullptr;};
    inline bool fromEnd() const { DARABONBA_PTR_GET_DEFAULT(fromEnd_, false) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setFromEnd(bool fromEnd) { DARABONBA_PTR_SET_VALUE(fromEnd_, fromEnd) };


    // hitTime Field Functions 
    bool hasHitTime() const { return this->hitTime_ != nullptr;};
    void deleteHitTime() { this->hitTime_ = nullptr;};
    inline int32_t hitTime() const { DARABONBA_PTR_GET_DEFAULT(hitTime_, 0) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setHitTime(int32_t hitTime) { DARABONBA_PTR_SET_VALUE(hitTime_, hitTime) };


    // inSentence Field Functions 
    bool hasInSentence() const { return this->inSentence_ != nullptr;};
    void deleteInSentence() { this->inSentence_ = nullptr;};
    inline bool inSentence() const { DARABONBA_PTR_GET_DEFAULT(inSentence_, false) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setInSentence(bool inSentence) { DARABONBA_PTR_SET_VALUE(inSentence_, inSentence) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // keywordExtension Field Functions 
    bool hasKeywordExtension() const { return this->keywordExtension_ != nullptr;};
    void deleteKeywordExtension() { this->keywordExtension_ = nullptr;};
    inline bool keywordExtension() const { DARABONBA_PTR_GET_DEFAULT(keywordExtension_, false) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setKeywordExtension(bool keywordExtension) { DARABONBA_PTR_SET_VALUE(keywordExtension_, keywordExtension) };


    // keywordMatchSize Field Functions 
    bool hasKeywordMatchSize() const { return this->keywordMatchSize_ != nullptr;};
    void deleteKeywordMatchSize() { this->keywordMatchSize_ = nullptr;};
    inline int32_t keywordMatchSize() const { DARABONBA_PTR_GET_DEFAULT(keywordMatchSize_, 0) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setKeywordMatchSize(int32_t keywordMatchSize) { DARABONBA_PTR_SET_VALUE(keywordMatchSize_, keywordMatchSize) };


    // maxEmotionChangeValue Field Functions 
    bool hasMaxEmotionChangeValue() const { return this->maxEmotionChangeValue_ != nullptr;};
    void deleteMaxEmotionChangeValue() { this->maxEmotionChangeValue_ = nullptr;};
    inline int32_t maxEmotionChangeValue() const { DARABONBA_PTR_GET_DEFAULT(maxEmotionChangeValue_, 0) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setMaxEmotionChangeValue(int32_t maxEmotionChangeValue) { DARABONBA_PTR_SET_VALUE(maxEmotionChangeValue_, maxEmotionChangeValue) };


    // minWordSize Field Functions 
    bool hasMinWordSize() const { return this->minWordSize_ != nullptr;};
    void deleteMinWordSize() { this->minWordSize_ = nullptr;};
    inline int32_t minWordSize() const { DARABONBA_PTR_GET_DEFAULT(minWordSize_, 0) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setMinWordSize(int32_t minWordSize) { DARABONBA_PTR_SET_VALUE(minWordSize_, minWordSize) };


    // notRegex Field Functions 
    bool hasNotRegex() const { return this->notRegex_ != nullptr;};
    void deleteNotRegex() { this->notRegex_ = nullptr;};
    inline string notRegex() const { DARABONBA_PTR_GET_DEFAULT(notRegex_, "") };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setNotRegex(string notRegex) { DARABONBA_PTR_SET_VALUE(notRegex_, notRegex) };


    // operKeyWords Field Functions 
    bool hasOperKeyWords() const { return this->operKeyWords_ != nullptr;};
    void deleteOperKeyWords() { this->operKeyWords_ = nullptr;};
    inline const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords & operKeyWords() const { DARABONBA_PTR_GET_CONST(operKeyWords_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords) };
    inline Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords operKeyWords() { DARABONBA_PTR_GET(operKeyWords_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setOperKeyWords(const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords & operKeyWords) { DARABONBA_PTR_SET_VALUE(operKeyWords_, operKeyWords) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setOperKeyWords(Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords && operKeyWords) { DARABONBA_PTR_SET_RVALUE(operKeyWords_, operKeyWords) };


    // phrase Field Functions 
    bool hasPhrase() const { return this->phrase_ != nullptr;};
    void deletePhrase() { this->phrase_ = nullptr;};
    inline string phrase() const { DARABONBA_PTR_GET_DEFAULT(phrase_, "") };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setPhrase(string phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };


    // pvalues Field Functions 
    bool hasPvalues() const { return this->pvalues_ != nullptr;};
    void deletePvalues() { this->pvalues_ = nullptr;};
    inline const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues & pvalues() const { DARABONBA_PTR_GET_CONST(pvalues_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues) };
    inline Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues pvalues() { DARABONBA_PTR_GET(pvalues_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setPvalues(const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues & pvalues) { DARABONBA_PTR_SET_VALUE(pvalues_, pvalues) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setPvalues(Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues && pvalues) { DARABONBA_PTR_SET_RVALUE(pvalues_, pvalues) };


    // references Field Functions 
    bool hasReferences() const { return this->references_ != nullptr;};
    void deleteReferences() { this->references_ = nullptr;};
    inline const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamReferences & references() const { DARABONBA_PTR_GET_CONST(references_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamReferences) };
    inline Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamReferences references() { DARABONBA_PTR_GET(references_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamReferences) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setReferences(const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamReferences & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setReferences(Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamReferences && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


    // regex Field Functions 
    bool hasRegex() const { return this->regex_ != nullptr;};
    void deleteRegex() { this->regex_ = nullptr;};
    inline string regex() const { DARABONBA_PTR_GET_DEFAULT(regex_, "") };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setRegex(string regex) { DARABONBA_PTR_SET_VALUE(regex_, regex) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // similarityThreshold Field Functions 
    bool hasSimilarityThreshold() const { return this->similarityThreshold_ != nullptr;};
    void deleteSimilarityThreshold() { this->similarityThreshold_ = nullptr;};
    inline float similarityThreshold() const { DARABONBA_PTR_GET_DEFAULT(similarityThreshold_, 0.0) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setSimilarityThreshold(float similarityThreshold) { DARABONBA_PTR_SET_VALUE(similarityThreshold_, similarityThreshold) };


    // similarlySentences Field Functions 
    bool hasSimilarlySentences() const { return this->similarlySentences_ != nullptr;};
    void deleteSimilarlySentences() { this->similarlySentences_ = nullptr;};
    inline const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamSimilarlySentences & similarlySentences() const { DARABONBA_PTR_GET_CONST(similarlySentences_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamSimilarlySentences) };
    inline Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamSimilarlySentences similarlySentences() { DARABONBA_PTR_GET(similarlySentences_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamSimilarlySentences) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setSimilarlySentences(const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamSimilarlySentences & similarlySentences) { DARABONBA_PTR_SET_VALUE(similarlySentences_, similarlySentences) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setSimilarlySentences(Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamSimilarlySentences && similarlySentences) { DARABONBA_PTR_SET_RVALUE(similarlySentences_, similarlySentences) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline int32_t target() const { DARABONBA_PTR_GET_DEFAULT(target_, 0) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setTarget(int32_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetRole Field Functions 
    bool hasTargetRole() const { return this->targetRole_ != nullptr;};
    void deleteTargetRole() { this->targetRole_ = nullptr;};
    inline string targetRole() const { DARABONBA_PTR_GET_DEFAULT(targetRole_, "") };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setTargetRole(string targetRole) { DARABONBA_PTR_SET_VALUE(targetRole_, targetRole) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // velocityInMint Field Functions 
    bool hasVelocityInMint() const { return this->velocityInMint_ != nullptr;};
    void deleteVelocityInMint() { this->velocityInMint_ = nullptr;};
    inline int32_t velocityInMint() const { DARABONBA_PTR_GET_DEFAULT(velocityInMint_, 0) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam& setVelocityInMint(int32_t velocityInMint) { DARABONBA_PTR_SET_VALUE(velocityInMint_, velocityInMint) };


  protected:
    std::shared_ptr<Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo> antModelInfo_ = nullptr;
    std::shared_ptr<bool> average_ = nullptr;
    std::shared_ptr<string> beginType_ = nullptr;
    std::shared_ptr<int32_t> checkType_ = nullptr;
    std::shared_ptr<string> compareOperator_ = nullptr;
    std::shared_ptr<bool> contextChatMatch_ = nullptr;
    std::shared_ptr<int32_t> delayTime_ = nullptr;
    std::shared_ptr<bool> differentRole_ = nullptr;
    std::shared_ptr<Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes> excludes_ = nullptr;
    std::shared_ptr<int32_t> from_ = nullptr;
    std::shared_ptr<bool> fromEnd_ = nullptr;
    std::shared_ptr<int32_t> hitTime_ = nullptr;
    std::shared_ptr<bool> inSentence_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<bool> keywordExtension_ = nullptr;
    std::shared_ptr<int32_t> keywordMatchSize_ = nullptr;
    std::shared_ptr<int32_t> maxEmotionChangeValue_ = nullptr;
    std::shared_ptr<int32_t> minWordSize_ = nullptr;
    std::shared_ptr<string> notRegex_ = nullptr;
    std::shared_ptr<Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords> operKeyWords_ = nullptr;
    std::shared_ptr<string> phrase_ = nullptr;
    std::shared_ptr<Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues> pvalues_ = nullptr;
    std::shared_ptr<Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamReferences> references_ = nullptr;
    std::shared_ptr<string> regex_ = nullptr;
    std::shared_ptr<int32_t> score_ = nullptr;
    std::shared_ptr<float> similarityThreshold_ = nullptr;
    std::shared_ptr<Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamSimilarlySentences> similarlySentences_ = nullptr;
    std::shared_ptr<int32_t> target_ = nullptr;
    std::shared_ptr<string> targetRole_ = nullptr;
    std::shared_ptr<float> threshold_ = nullptr;
    std::shared_ptr<int32_t> velocityInMint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
