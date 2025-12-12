// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTCONDITIONSCONDITIONSOPERATORSOPERATORPARAM_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTCONDITIONSCONDITIONSOPERATORSOPERATORPARAM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamExcludes.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamFlowNodePrerequisiteParam.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamKeywords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& obj) { 
      DARABONBA_PTR_TO_JSON(Average, average_);
      DARABONBA_PTR_TO_JSON(BeginType, beginType_);
      DARABONBA_PTR_TO_JSON(Case_sensitive, caseSensitive_);
      DARABONBA_PTR_TO_JSON(CheckFirstSentence, checkFirstSentence_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(CompareOperator, compareOperator_);
      DARABONBA_PTR_TO_JSON(ContextChatMatch, contextChatMatch_);
      DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_TO_JSON(EndType, endType_);
      DARABONBA_PTR_TO_JSON(Excludes, excludes_);
      DARABONBA_PTR_TO_JSON(FlowNodePrerequisiteParam, flowNodePrerequisiteParam_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(From_end, fromEnd_);
      DARABONBA_PTR_TO_JSON(Hit_time, hitTime_);
      DARABONBA_PTR_TO_JSON(In_sentence, inSentence_);
      DARABONBA_PTR_TO_JSON(IntentModelCheckParm, intentModelCheckParm_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IntervalEnd, intervalEnd_);
      DARABONBA_PTR_TO_JSON(KeywordExtension, keywordExtension_);
      DARABONBA_PTR_TO_JSON(KeywordMatchSize, keywordMatchSize_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(MaxEmotionChangeValue, maxEmotionChangeValue_);
      DARABONBA_PTR_TO_JSON(MinWordSize, minWordSize_);
      DARABONBA_PTR_TO_JSON(Near_dialogue, nearDialogue_);
      DARABONBA_PTR_TO_JSON(NotRegex, notRegex_);
      DARABONBA_PTR_TO_JSON(Phrase, phrase_);
      DARABONBA_PTR_TO_JSON(Regex, regex_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& obj) { 
      DARABONBA_PTR_FROM_JSON(Average, average_);
      DARABONBA_PTR_FROM_JSON(BeginType, beginType_);
      DARABONBA_PTR_FROM_JSON(Case_sensitive, caseSensitive_);
      DARABONBA_PTR_FROM_JSON(CheckFirstSentence, checkFirstSentence_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(CompareOperator, compareOperator_);
      DARABONBA_PTR_FROM_JSON(ContextChatMatch, contextChatMatch_);
      DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_FROM_JSON(EndType, endType_);
      DARABONBA_PTR_FROM_JSON(Excludes, excludes_);
      DARABONBA_PTR_FROM_JSON(FlowNodePrerequisiteParam, flowNodePrerequisiteParam_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(From_end, fromEnd_);
      DARABONBA_PTR_FROM_JSON(Hit_time, hitTime_);
      DARABONBA_PTR_FROM_JSON(In_sentence, inSentence_);
      DARABONBA_PTR_FROM_JSON(IntentModelCheckParm, intentModelCheckParm_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IntervalEnd, intervalEnd_);
      DARABONBA_PTR_FROM_JSON(KeywordExtension, keywordExtension_);
      DARABONBA_PTR_FROM_JSON(KeywordMatchSize, keywordMatchSize_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(MaxEmotionChangeValue, maxEmotionChangeValue_);
      DARABONBA_PTR_FROM_JSON(MinWordSize, minWordSize_);
      DARABONBA_PTR_FROM_JSON(Near_dialogue, nearDialogue_);
      DARABONBA_PTR_FROM_JSON(NotRegex, notRegex_);
      DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
      DARABONBA_PTR_FROM_JSON(Regex, regex_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam(const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam(GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam &&) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& operator=(const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& operator=(GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->average_ == nullptr
        && return this->beginType_ == nullptr && return this->caseSensitive_ == nullptr && return this->checkFirstSentence_ == nullptr && return this->checkType_ == nullptr && return this->compareOperator_ == nullptr
        && return this->contextChatMatch_ == nullptr && return this->delayTime_ == nullptr && return this->endType_ == nullptr && return this->excludes_ == nullptr && return this->flowNodePrerequisiteParam_ == nullptr
        && return this->from_ == nullptr && return this->fromEnd_ == nullptr && return this->hitTime_ == nullptr && return this->inSentence_ == nullptr && return this->intentModelCheckParm_ == nullptr
        && return this->interval_ == nullptr && return this->intervalEnd_ == nullptr && return this->keywordExtension_ == nullptr && return this->keywordMatchSize_ == nullptr && return this->keywords_ == nullptr
        && return this->maxEmotionChangeValue_ == nullptr && return this->minWordSize_ == nullptr && return this->nearDialogue_ == nullptr && return this->notRegex_ == nullptr && return this->phrase_ == nullptr
        && return this->regex_ == nullptr && return this->target_ == nullptr && return this->threshold_ == nullptr; };
    // average Field Functions 
    bool hasAverage() const { return this->average_ != nullptr;};
    void deleteAverage() { this->average_ = nullptr;};
    inline bool average() const { DARABONBA_PTR_GET_DEFAULT(average_, false) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setAverage(bool average) { DARABONBA_PTR_SET_VALUE(average_, average) };


    // beginType Field Functions 
    bool hasBeginType() const { return this->beginType_ != nullptr;};
    void deleteBeginType() { this->beginType_ = nullptr;};
    inline string beginType() const { DARABONBA_PTR_GET_DEFAULT(beginType_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setBeginType(string beginType) { DARABONBA_PTR_SET_VALUE(beginType_, beginType) };


    // caseSensitive Field Functions 
    bool hasCaseSensitive() const { return this->caseSensitive_ != nullptr;};
    void deleteCaseSensitive() { this->caseSensitive_ = nullptr;};
    inline bool caseSensitive() const { DARABONBA_PTR_GET_DEFAULT(caseSensitive_, false) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setCaseSensitive(bool caseSensitive) { DARABONBA_PTR_SET_VALUE(caseSensitive_, caseSensitive) };


    // checkFirstSentence Field Functions 
    bool hasCheckFirstSentence() const { return this->checkFirstSentence_ != nullptr;};
    void deleteCheckFirstSentence() { this->checkFirstSentence_ = nullptr;};
    inline bool checkFirstSentence() const { DARABONBA_PTR_GET_DEFAULT(checkFirstSentence_, false) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setCheckFirstSentence(bool checkFirstSentence) { DARABONBA_PTR_SET_VALUE(checkFirstSentence_, checkFirstSentence) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int32_t checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // compareOperator Field Functions 
    bool hasCompareOperator() const { return this->compareOperator_ != nullptr;};
    void deleteCompareOperator() { this->compareOperator_ = nullptr;};
    inline string compareOperator() const { DARABONBA_PTR_GET_DEFAULT(compareOperator_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setCompareOperator(string compareOperator) { DARABONBA_PTR_SET_VALUE(compareOperator_, compareOperator) };


    // contextChatMatch Field Functions 
    bool hasContextChatMatch() const { return this->contextChatMatch_ != nullptr;};
    void deleteContextChatMatch() { this->contextChatMatch_ = nullptr;};
    inline bool contextChatMatch() const { DARABONBA_PTR_GET_DEFAULT(contextChatMatch_, false) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setContextChatMatch(bool contextChatMatch) { DARABONBA_PTR_SET_VALUE(contextChatMatch_, contextChatMatch) };


    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline int32_t delayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // endType Field Functions 
    bool hasEndType() const { return this->endType_ != nullptr;};
    void deleteEndType() { this->endType_ = nullptr;};
    inline string endType() const { DARABONBA_PTR_GET_DEFAULT(endType_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setEndType(string endType) { DARABONBA_PTR_SET_VALUE(endType_, endType) };


    // excludes Field Functions 
    bool hasExcludes() const { return this->excludes_ != nullptr;};
    void deleteExcludes() { this->excludes_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamExcludes & excludes() const { DARABONBA_PTR_GET_CONST(excludes_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamExcludes) };
    inline Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamExcludes excludes() { DARABONBA_PTR_GET(excludes_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamExcludes) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setExcludes(const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamExcludes & excludes) { DARABONBA_PTR_SET_VALUE(excludes_, excludes) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setExcludes(Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamExcludes && excludes) { DARABONBA_PTR_SET_RVALUE(excludes_, excludes) };


    // flowNodePrerequisiteParam Field Functions 
    bool hasFlowNodePrerequisiteParam() const { return this->flowNodePrerequisiteParam_ != nullptr;};
    void deleteFlowNodePrerequisiteParam() { this->flowNodePrerequisiteParam_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamFlowNodePrerequisiteParam & flowNodePrerequisiteParam() const { DARABONBA_PTR_GET_CONST(flowNodePrerequisiteParam_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamFlowNodePrerequisiteParam) };
    inline Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamFlowNodePrerequisiteParam flowNodePrerequisiteParam() { DARABONBA_PTR_GET(flowNodePrerequisiteParam_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamFlowNodePrerequisiteParam) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setFlowNodePrerequisiteParam(const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamFlowNodePrerequisiteParam & flowNodePrerequisiteParam) { DARABONBA_PTR_SET_VALUE(flowNodePrerequisiteParam_, flowNodePrerequisiteParam) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setFlowNodePrerequisiteParam(Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamFlowNodePrerequisiteParam && flowNodePrerequisiteParam) { DARABONBA_PTR_SET_RVALUE(flowNodePrerequisiteParam_, flowNodePrerequisiteParam) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int32_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // fromEnd Field Functions 
    bool hasFromEnd() const { return this->fromEnd_ != nullptr;};
    void deleteFromEnd() { this->fromEnd_ = nullptr;};
    inline bool fromEnd() const { DARABONBA_PTR_GET_DEFAULT(fromEnd_, false) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setFromEnd(bool fromEnd) { DARABONBA_PTR_SET_VALUE(fromEnd_, fromEnd) };


    // hitTime Field Functions 
    bool hasHitTime() const { return this->hitTime_ != nullptr;};
    void deleteHitTime() { this->hitTime_ = nullptr;};
    inline int32_t hitTime() const { DARABONBA_PTR_GET_DEFAULT(hitTime_, 0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setHitTime(int32_t hitTime) { DARABONBA_PTR_SET_VALUE(hitTime_, hitTime) };


    // inSentence Field Functions 
    bool hasInSentence() const { return this->inSentence_ != nullptr;};
    void deleteInSentence() { this->inSentence_ = nullptr;};
    inline bool inSentence() const { DARABONBA_PTR_GET_DEFAULT(inSentence_, false) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setInSentence(bool inSentence) { DARABONBA_PTR_SET_VALUE(inSentence_, inSentence) };


    // intentModelCheckParm Field Functions 
    bool hasIntentModelCheckParm() const { return this->intentModelCheckParm_ != nullptr;};
    void deleteIntentModelCheckParm() { this->intentModelCheckParm_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm & intentModelCheckParm() const { DARABONBA_PTR_GET_CONST(intentModelCheckParm_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm) };
    inline Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm intentModelCheckParm() { DARABONBA_PTR_GET(intentModelCheckParm_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setIntentModelCheckParm(const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm & intentModelCheckParm) { DARABONBA_PTR_SET_VALUE(intentModelCheckParm_, intentModelCheckParm) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setIntentModelCheckParm(Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm && intentModelCheckParm) { DARABONBA_PTR_SET_RVALUE(intentModelCheckParm_, intentModelCheckParm) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // intervalEnd Field Functions 
    bool hasIntervalEnd() const { return this->intervalEnd_ != nullptr;};
    void deleteIntervalEnd() { this->intervalEnd_ = nullptr;};
    inline int32_t intervalEnd() const { DARABONBA_PTR_GET_DEFAULT(intervalEnd_, 0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setIntervalEnd(int32_t intervalEnd) { DARABONBA_PTR_SET_VALUE(intervalEnd_, intervalEnd) };


    // keywordExtension Field Functions 
    bool hasKeywordExtension() const { return this->keywordExtension_ != nullptr;};
    void deleteKeywordExtension() { this->keywordExtension_ = nullptr;};
    inline int32_t keywordExtension() const { DARABONBA_PTR_GET_DEFAULT(keywordExtension_, 0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setKeywordExtension(int32_t keywordExtension) { DARABONBA_PTR_SET_VALUE(keywordExtension_, keywordExtension) };


    // keywordMatchSize Field Functions 
    bool hasKeywordMatchSize() const { return this->keywordMatchSize_ != nullptr;};
    void deleteKeywordMatchSize() { this->keywordMatchSize_ = nullptr;};
    inline int32_t keywordMatchSize() const { DARABONBA_PTR_GET_DEFAULT(keywordMatchSize_, 0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setKeywordMatchSize(int32_t keywordMatchSize) { DARABONBA_PTR_SET_VALUE(keywordMatchSize_, keywordMatchSize) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamKeywords & keywords() const { DARABONBA_PTR_GET_CONST(keywords_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamKeywords) };
    inline Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamKeywords keywords() { DARABONBA_PTR_GET(keywords_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamKeywords) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setKeywords(const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamKeywords & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setKeywords(Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamKeywords && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


    // maxEmotionChangeValue Field Functions 
    bool hasMaxEmotionChangeValue() const { return this->maxEmotionChangeValue_ != nullptr;};
    void deleteMaxEmotionChangeValue() { this->maxEmotionChangeValue_ = nullptr;};
    inline int32_t maxEmotionChangeValue() const { DARABONBA_PTR_GET_DEFAULT(maxEmotionChangeValue_, 0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setMaxEmotionChangeValue(int32_t maxEmotionChangeValue) { DARABONBA_PTR_SET_VALUE(maxEmotionChangeValue_, maxEmotionChangeValue) };


    // minWordSize Field Functions 
    bool hasMinWordSize() const { return this->minWordSize_ != nullptr;};
    void deleteMinWordSize() { this->minWordSize_ = nullptr;};
    inline int32_t minWordSize() const { DARABONBA_PTR_GET_DEFAULT(minWordSize_, 0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setMinWordSize(int32_t minWordSize) { DARABONBA_PTR_SET_VALUE(minWordSize_, minWordSize) };


    // nearDialogue Field Functions 
    bool hasNearDialogue() const { return this->nearDialogue_ != nullptr;};
    void deleteNearDialogue() { this->nearDialogue_ = nullptr;};
    inline bool nearDialogue() const { DARABONBA_PTR_GET_DEFAULT(nearDialogue_, false) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setNearDialogue(bool nearDialogue) { DARABONBA_PTR_SET_VALUE(nearDialogue_, nearDialogue) };


    // notRegex Field Functions 
    bool hasNotRegex() const { return this->notRegex_ != nullptr;};
    void deleteNotRegex() { this->notRegex_ = nullptr;};
    inline string notRegex() const { DARABONBA_PTR_GET_DEFAULT(notRegex_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setNotRegex(string notRegex) { DARABONBA_PTR_SET_VALUE(notRegex_, notRegex) };


    // phrase Field Functions 
    bool hasPhrase() const { return this->phrase_ != nullptr;};
    void deletePhrase() { this->phrase_ = nullptr;};
    inline string phrase() const { DARABONBA_PTR_GET_DEFAULT(phrase_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setPhrase(string phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };


    // regex Field Functions 
    bool hasRegex() const { return this->regex_ != nullptr;};
    void deleteRegex() { this->regex_ = nullptr;};
    inline string regex() const { DARABONBA_PTR_GET_DEFAULT(regex_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setRegex(string regex) { DARABONBA_PTR_SET_VALUE(regex_, regex) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline int32_t target() const { DARABONBA_PTR_GET_DEFAULT(target_, 0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setTarget(int32_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // 语速检测，是否计算整个对话平均语速，默认false
    std::shared_ptr<bool> average_ = nullptr;
    // 时长算子，时长计算开始类型，录音开始，还是某句对话开始
    std::shared_ptr<string> beginType_ = nullptr;
    // 区分大小写
    std::shared_ptr<bool> caseSensitive_ = nullptr;
    // 静音检测：要不要检测第一句话
    std::shared_ptr<bool> checkFirstSentence_ = nullptr;
    // 检测方式，1 相邻句能量波动 2 最大能量跨度 默认1
    std::shared_ptr<int32_t> checkType_ = nullptr;
    // 大于，还是小于，gt/lt
    std::shared_ptr<string> compareOperator_ = nullptr;
    // 是否单句话匹配；
    std::shared_ptr<bool> contextChatMatch_ = nullptr;
    // 抢话算子 延时时长
    std::shared_ptr<int32_t> delayTime_ = nullptr;
    // 时长算子，时长计算结束类型，录音结束，还是某句对话结束
    std::shared_ptr<string> endType_ = nullptr;
    // 上下文重复算子：排除掉某些对话
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamExcludes> excludes_ = nullptr;
    // 流程节点前置条件参数
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamFlowNodePrerequisiteParam> flowNodePrerequisiteParam_ = nullptr;
    // 上下文重复算子：检测当前句的前from句是否有重复；0表示前面的所有句
    std::shared_ptr<int32_t> from_ = nullptr;
    // from_end
    std::shared_ptr<bool> fromEnd_ = nullptr;
    // 上下文重复算子：重复几次
    std::shared_ptr<int32_t> hitTime_ = nullptr;
    // 生效句子， true单个句子，false多个句子
    std::shared_ptr<bool> inSentence_ = nullptr;
    // 意图模型检查参数
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm> intentModelCheckParm_ = nullptr;
    // interval代表区间范围开始
    std::shared_ptr<int32_t> interval_ = nullptr;
    // intervalEnd 代表区间范围结束
    std::shared_ptr<int32_t> intervalEnd_ = nullptr;
    // 关键字扩展
    std::shared_ptr<int32_t> keywordExtension_ = nullptr;
    // 匹配到的关键字数量
    std::shared_ptr<int32_t> keywordMatchSize_ = nullptr;
    // 关键词
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamKeywords> keywords_ = nullptr;
    // 能量值变化，默认3, 1~9
    std::shared_ptr<int32_t> maxEmotionChangeValue_ = nullptr;
    // 句子中最少字数，小于此字数的句子不检查
    std::shared_ptr<int32_t> minWordSize_ = nullptr;
    // true表示取不同角色相邻的两句话，false表示取不同角色的第一句话比较响应时间（默认）
    std::shared_ptr<bool> nearDialogue_ = nullptr;
    // 排除的正则表达式
    std::shared_ptr<string> notRegex_ = nullptr;
    // 语句
    std::shared_ptr<string> phrase_ = nullptr;
    // 正则表达式
    std::shared_ptr<string> regex_ = nullptr;
    // target
    std::shared_ptr<int32_t> target_ = nullptr;
    // 阈值
    std::shared_ptr<float> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
