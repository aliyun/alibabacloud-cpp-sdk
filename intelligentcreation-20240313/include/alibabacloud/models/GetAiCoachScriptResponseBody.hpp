// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAICoachScriptResponseBodyCheckCheatConfig.hpp>
#include <alibabacloud/models/GetAICoachScriptResponseBodyCompleteStrategy.hpp>
#include <vector>
#include <alibabacloud/models/GetAICoachScriptResponseBodyCustomReplyRules.hpp>
#include <map>
#include <alibabacloud/models/GetAICoachScriptResponseBodyExpressivenessList.hpp>
#include <alibabacloud/models/GetAICoachScriptResponseBodyPointDeductionRuleList.hpp>
#include <alibabacloud/models/GetAICoachScriptResponseBodyPoints.hpp>
#include <alibabacloud/models/GetAICoachScriptResponseBodySampleDialogueList.hpp>
#include <alibabacloud/models/GetAICoachScriptResponseBodyScoreConfig.hpp>
#include <alibabacloud/models/GetAICoachScriptResponseBodyWeights.hpp>
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
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->appendQuestionFlag_ == nullptr && return this->assessmentScope_ == nullptr && return this->checkCheatConfig_ == nullptr && return this->closingRemarks_ == nullptr && return this->completeStrategy_ == nullptr
        && return this->coverUrl_ == nullptr && return this->customReplyRules_ == nullptr && return this->dialogueInputTextLimit_ == nullptr && return this->dialogueTextFlag_ == nullptr && return this->dialogueTipFlag_ == nullptr
        && return this->dialogueVoiceLimit_ == nullptr && return this->evaluateReportFlag_ == nullptr && return this->expressiveness_ == nullptr && return this->expressivenessList_ == nullptr && return this->gifDynamicUrl_ == nullptr
        && return this->gifStaticUrl_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->initiator_ == nullptr && return this->interactionInputTypes_ == nullptr
        && return this->interactionType_ == nullptr && return this->introduce_ == nullptr && return this->name_ == nullptr && return this->openingRemarks_ == nullptr && return this->orderAckFlag_ == nullptr
        && return this->pointDeductionRuleList_ == nullptr && return this->points_ == nullptr && return this->requestId_ == nullptr && return this->sampleDialogueList_ == nullptr && return this->scoreConfig_ == nullptr
        && return this->scriptRecordId_ == nullptr && return this->sparringTipContent_ == nullptr && return this->sparringTipTitle_ == nullptr && return this->status_ == nullptr && return this->studentThinkTimeFlag_ == nullptr
        && return this->studentThinkTimeLimit_ == nullptr && return this->type_ == nullptr && return this->voiceId_ == nullptr && return this->voiceLanguage_ == nullptr && return this->weights_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline GetAICoachScriptResponseBody& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // appendQuestionFlag Field Functions 
    bool hasAppendQuestionFlag() const { return this->appendQuestionFlag_ != nullptr;};
    void deleteAppendQuestionFlag() { this->appendQuestionFlag_ = nullptr;};
    inline bool appendQuestionFlag() const { DARABONBA_PTR_GET_DEFAULT(appendQuestionFlag_, false) };
    inline GetAICoachScriptResponseBody& setAppendQuestionFlag(bool appendQuestionFlag) { DARABONBA_PTR_SET_VALUE(appendQuestionFlag_, appendQuestionFlag) };


    // assessmentScope Field Functions 
    bool hasAssessmentScope() const { return this->assessmentScope_ != nullptr;};
    void deleteAssessmentScope() { this->assessmentScope_ = nullptr;};
    inline string assessmentScope() const { DARABONBA_PTR_GET_DEFAULT(assessmentScope_, "") };
    inline GetAICoachScriptResponseBody& setAssessmentScope(string assessmentScope) { DARABONBA_PTR_SET_VALUE(assessmentScope_, assessmentScope) };


    // checkCheatConfig Field Functions 
    bool hasCheckCheatConfig() const { return this->checkCheatConfig_ != nullptr;};
    void deleteCheckCheatConfig() { this->checkCheatConfig_ = nullptr;};
    inline const GetAICoachScriptResponseBodyCheckCheatConfig & checkCheatConfig() const { DARABONBA_PTR_GET_CONST(checkCheatConfig_, GetAICoachScriptResponseBodyCheckCheatConfig) };
    inline GetAICoachScriptResponseBodyCheckCheatConfig checkCheatConfig() { DARABONBA_PTR_GET(checkCheatConfig_, GetAICoachScriptResponseBodyCheckCheatConfig) };
    inline GetAICoachScriptResponseBody& setCheckCheatConfig(const GetAICoachScriptResponseBodyCheckCheatConfig & checkCheatConfig) { DARABONBA_PTR_SET_VALUE(checkCheatConfig_, checkCheatConfig) };
    inline GetAICoachScriptResponseBody& setCheckCheatConfig(GetAICoachScriptResponseBodyCheckCheatConfig && checkCheatConfig) { DARABONBA_PTR_SET_RVALUE(checkCheatConfig_, checkCheatConfig) };


    // closingRemarks Field Functions 
    bool hasClosingRemarks() const { return this->closingRemarks_ != nullptr;};
    void deleteClosingRemarks() { this->closingRemarks_ = nullptr;};
    inline string closingRemarks() const { DARABONBA_PTR_GET_DEFAULT(closingRemarks_, "") };
    inline GetAICoachScriptResponseBody& setClosingRemarks(string closingRemarks) { DARABONBA_PTR_SET_VALUE(closingRemarks_, closingRemarks) };


    // completeStrategy Field Functions 
    bool hasCompleteStrategy() const { return this->completeStrategy_ != nullptr;};
    void deleteCompleteStrategy() { this->completeStrategy_ = nullptr;};
    inline const GetAICoachScriptResponseBodyCompleteStrategy & completeStrategy() const { DARABONBA_PTR_GET_CONST(completeStrategy_, GetAICoachScriptResponseBodyCompleteStrategy) };
    inline GetAICoachScriptResponseBodyCompleteStrategy completeStrategy() { DARABONBA_PTR_GET(completeStrategy_, GetAICoachScriptResponseBodyCompleteStrategy) };
    inline GetAICoachScriptResponseBody& setCompleteStrategy(const GetAICoachScriptResponseBodyCompleteStrategy & completeStrategy) { DARABONBA_PTR_SET_VALUE(completeStrategy_, completeStrategy) };
    inline GetAICoachScriptResponseBody& setCompleteStrategy(GetAICoachScriptResponseBodyCompleteStrategy && completeStrategy) { DARABONBA_PTR_SET_RVALUE(completeStrategy_, completeStrategy) };


    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string coverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline GetAICoachScriptResponseBody& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // customReplyRules Field Functions 
    bool hasCustomReplyRules() const { return this->customReplyRules_ != nullptr;};
    void deleteCustomReplyRules() { this->customReplyRules_ = nullptr;};
    inline const vector<GetAICoachScriptResponseBodyCustomReplyRules> & customReplyRules() const { DARABONBA_PTR_GET_CONST(customReplyRules_, vector<GetAICoachScriptResponseBodyCustomReplyRules>) };
    inline vector<GetAICoachScriptResponseBodyCustomReplyRules> customReplyRules() { DARABONBA_PTR_GET(customReplyRules_, vector<GetAICoachScriptResponseBodyCustomReplyRules>) };
    inline GetAICoachScriptResponseBody& setCustomReplyRules(const vector<GetAICoachScriptResponseBodyCustomReplyRules> & customReplyRules) { DARABONBA_PTR_SET_VALUE(customReplyRules_, customReplyRules) };
    inline GetAICoachScriptResponseBody& setCustomReplyRules(vector<GetAICoachScriptResponseBodyCustomReplyRules> && customReplyRules) { DARABONBA_PTR_SET_RVALUE(customReplyRules_, customReplyRules) };


    // dialogueInputTextLimit Field Functions 
    bool hasDialogueInputTextLimit() const { return this->dialogueInputTextLimit_ != nullptr;};
    void deleteDialogueInputTextLimit() { this->dialogueInputTextLimit_ = nullptr;};
    inline int32_t dialogueInputTextLimit() const { DARABONBA_PTR_GET_DEFAULT(dialogueInputTextLimit_, 0) };
    inline GetAICoachScriptResponseBody& setDialogueInputTextLimit(int32_t dialogueInputTextLimit) { DARABONBA_PTR_SET_VALUE(dialogueInputTextLimit_, dialogueInputTextLimit) };


    // dialogueTextFlag Field Functions 
    bool hasDialogueTextFlag() const { return this->dialogueTextFlag_ != nullptr;};
    void deleteDialogueTextFlag() { this->dialogueTextFlag_ = nullptr;};
    inline bool dialogueTextFlag() const { DARABONBA_PTR_GET_DEFAULT(dialogueTextFlag_, false) };
    inline GetAICoachScriptResponseBody& setDialogueTextFlag(bool dialogueTextFlag) { DARABONBA_PTR_SET_VALUE(dialogueTextFlag_, dialogueTextFlag) };


    // dialogueTipFlag Field Functions 
    bool hasDialogueTipFlag() const { return this->dialogueTipFlag_ != nullptr;};
    void deleteDialogueTipFlag() { this->dialogueTipFlag_ = nullptr;};
    inline bool dialogueTipFlag() const { DARABONBA_PTR_GET_DEFAULT(dialogueTipFlag_, false) };
    inline GetAICoachScriptResponseBody& setDialogueTipFlag(bool dialogueTipFlag) { DARABONBA_PTR_SET_VALUE(dialogueTipFlag_, dialogueTipFlag) };


    // dialogueVoiceLimit Field Functions 
    bool hasDialogueVoiceLimit() const { return this->dialogueVoiceLimit_ != nullptr;};
    void deleteDialogueVoiceLimit() { this->dialogueVoiceLimit_ = nullptr;};
    inline int32_t dialogueVoiceLimit() const { DARABONBA_PTR_GET_DEFAULT(dialogueVoiceLimit_, 0) };
    inline GetAICoachScriptResponseBody& setDialogueVoiceLimit(int32_t dialogueVoiceLimit) { DARABONBA_PTR_SET_VALUE(dialogueVoiceLimit_, dialogueVoiceLimit) };


    // evaluateReportFlag Field Functions 
    bool hasEvaluateReportFlag() const { return this->evaluateReportFlag_ != nullptr;};
    void deleteEvaluateReportFlag() { this->evaluateReportFlag_ = nullptr;};
    inline bool evaluateReportFlag() const { DARABONBA_PTR_GET_DEFAULT(evaluateReportFlag_, false) };
    inline GetAICoachScriptResponseBody& setEvaluateReportFlag(bool evaluateReportFlag) { DARABONBA_PTR_SET_VALUE(evaluateReportFlag_, evaluateReportFlag) };


    // expressiveness Field Functions 
    bool hasExpressiveness() const { return this->expressiveness_ != nullptr;};
    void deleteExpressiveness() { this->expressiveness_ = nullptr;};
    inline const map<string, int32_t> & expressiveness() const { DARABONBA_PTR_GET_CONST(expressiveness_, map<string, int32_t>) };
    inline map<string, int32_t> expressiveness() { DARABONBA_PTR_GET(expressiveness_, map<string, int32_t>) };
    inline GetAICoachScriptResponseBody& setExpressiveness(const map<string, int32_t> & expressiveness) { DARABONBA_PTR_SET_VALUE(expressiveness_, expressiveness) };
    inline GetAICoachScriptResponseBody& setExpressiveness(map<string, int32_t> && expressiveness) { DARABONBA_PTR_SET_RVALUE(expressiveness_, expressiveness) };


    // expressivenessList Field Functions 
    bool hasExpressivenessList() const { return this->expressivenessList_ != nullptr;};
    void deleteExpressivenessList() { this->expressivenessList_ = nullptr;};
    inline const vector<GetAICoachScriptResponseBodyExpressivenessList> & expressivenessList() const { DARABONBA_PTR_GET_CONST(expressivenessList_, vector<GetAICoachScriptResponseBodyExpressivenessList>) };
    inline vector<GetAICoachScriptResponseBodyExpressivenessList> expressivenessList() { DARABONBA_PTR_GET(expressivenessList_, vector<GetAICoachScriptResponseBodyExpressivenessList>) };
    inline GetAICoachScriptResponseBody& setExpressivenessList(const vector<GetAICoachScriptResponseBodyExpressivenessList> & expressivenessList) { DARABONBA_PTR_SET_VALUE(expressivenessList_, expressivenessList) };
    inline GetAICoachScriptResponseBody& setExpressivenessList(vector<GetAICoachScriptResponseBodyExpressivenessList> && expressivenessList) { DARABONBA_PTR_SET_RVALUE(expressivenessList_, expressivenessList) };


    // gifDynamicUrl Field Functions 
    bool hasGifDynamicUrl() const { return this->gifDynamicUrl_ != nullptr;};
    void deleteGifDynamicUrl() { this->gifDynamicUrl_ = nullptr;};
    inline string gifDynamicUrl() const { DARABONBA_PTR_GET_DEFAULT(gifDynamicUrl_, "") };
    inline GetAICoachScriptResponseBody& setGifDynamicUrl(string gifDynamicUrl) { DARABONBA_PTR_SET_VALUE(gifDynamicUrl_, gifDynamicUrl) };


    // gifStaticUrl Field Functions 
    bool hasGifStaticUrl() const { return this->gifStaticUrl_ != nullptr;};
    void deleteGifStaticUrl() { this->gifStaticUrl_ = nullptr;};
    inline string gifStaticUrl() const { DARABONBA_PTR_GET_DEFAULT(gifStaticUrl_, "") };
    inline GetAICoachScriptResponseBody& setGifStaticUrl(string gifStaticUrl) { DARABONBA_PTR_SET_VALUE(gifStaticUrl_, gifStaticUrl) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetAICoachScriptResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetAICoachScriptResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // initiator Field Functions 
    bool hasInitiator() const { return this->initiator_ != nullptr;};
    void deleteInitiator() { this->initiator_ = nullptr;};
    inline string initiator() const { DARABONBA_PTR_GET_DEFAULT(initiator_, "") };
    inline GetAICoachScriptResponseBody& setInitiator(string initiator) { DARABONBA_PTR_SET_VALUE(initiator_, initiator) };


    // interactionInputTypes Field Functions 
    bool hasInteractionInputTypes() const { return this->interactionInputTypes_ != nullptr;};
    void deleteInteractionInputTypes() { this->interactionInputTypes_ = nullptr;};
    inline const vector<string> & interactionInputTypes() const { DARABONBA_PTR_GET_CONST(interactionInputTypes_, vector<string>) };
    inline vector<string> interactionInputTypes() { DARABONBA_PTR_GET(interactionInputTypes_, vector<string>) };
    inline GetAICoachScriptResponseBody& setInteractionInputTypes(const vector<string> & interactionInputTypes) { DARABONBA_PTR_SET_VALUE(interactionInputTypes_, interactionInputTypes) };
    inline GetAICoachScriptResponseBody& setInteractionInputTypes(vector<string> && interactionInputTypes) { DARABONBA_PTR_SET_RVALUE(interactionInputTypes_, interactionInputTypes) };


    // interactionType Field Functions 
    bool hasInteractionType() const { return this->interactionType_ != nullptr;};
    void deleteInteractionType() { this->interactionType_ = nullptr;};
    inline int32_t interactionType() const { DARABONBA_PTR_GET_DEFAULT(interactionType_, 0) };
    inline GetAICoachScriptResponseBody& setInteractionType(int32_t interactionType) { DARABONBA_PTR_SET_VALUE(interactionType_, interactionType) };


    // introduce Field Functions 
    bool hasIntroduce() const { return this->introduce_ != nullptr;};
    void deleteIntroduce() { this->introduce_ = nullptr;};
    inline string introduce() const { DARABONBA_PTR_GET_DEFAULT(introduce_, "") };
    inline GetAICoachScriptResponseBody& setIntroduce(string introduce) { DARABONBA_PTR_SET_VALUE(introduce_, introduce) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAICoachScriptResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // openingRemarks Field Functions 
    bool hasOpeningRemarks() const { return this->openingRemarks_ != nullptr;};
    void deleteOpeningRemarks() { this->openingRemarks_ = nullptr;};
    inline string openingRemarks() const { DARABONBA_PTR_GET_DEFAULT(openingRemarks_, "") };
    inline GetAICoachScriptResponseBody& setOpeningRemarks(string openingRemarks) { DARABONBA_PTR_SET_VALUE(openingRemarks_, openingRemarks) };


    // orderAckFlag Field Functions 
    bool hasOrderAckFlag() const { return this->orderAckFlag_ != nullptr;};
    void deleteOrderAckFlag() { this->orderAckFlag_ = nullptr;};
    inline bool orderAckFlag() const { DARABONBA_PTR_GET_DEFAULT(orderAckFlag_, false) };
    inline GetAICoachScriptResponseBody& setOrderAckFlag(bool orderAckFlag) { DARABONBA_PTR_SET_VALUE(orderAckFlag_, orderAckFlag) };


    // pointDeductionRuleList Field Functions 
    bool hasPointDeductionRuleList() const { return this->pointDeductionRuleList_ != nullptr;};
    void deletePointDeductionRuleList() { this->pointDeductionRuleList_ = nullptr;};
    inline const vector<GetAICoachScriptResponseBodyPointDeductionRuleList> & pointDeductionRuleList() const { DARABONBA_PTR_GET_CONST(pointDeductionRuleList_, vector<GetAICoachScriptResponseBodyPointDeductionRuleList>) };
    inline vector<GetAICoachScriptResponseBodyPointDeductionRuleList> pointDeductionRuleList() { DARABONBA_PTR_GET(pointDeductionRuleList_, vector<GetAICoachScriptResponseBodyPointDeductionRuleList>) };
    inline GetAICoachScriptResponseBody& setPointDeductionRuleList(const vector<GetAICoachScriptResponseBodyPointDeductionRuleList> & pointDeductionRuleList) { DARABONBA_PTR_SET_VALUE(pointDeductionRuleList_, pointDeductionRuleList) };
    inline GetAICoachScriptResponseBody& setPointDeductionRuleList(vector<GetAICoachScriptResponseBodyPointDeductionRuleList> && pointDeductionRuleList) { DARABONBA_PTR_SET_RVALUE(pointDeductionRuleList_, pointDeductionRuleList) };


    // points Field Functions 
    bool hasPoints() const { return this->points_ != nullptr;};
    void deletePoints() { this->points_ = nullptr;};
    inline const vector<GetAICoachScriptResponseBodyPoints> & points() const { DARABONBA_PTR_GET_CONST(points_, vector<GetAICoachScriptResponseBodyPoints>) };
    inline vector<GetAICoachScriptResponseBodyPoints> points() { DARABONBA_PTR_GET(points_, vector<GetAICoachScriptResponseBodyPoints>) };
    inline GetAICoachScriptResponseBody& setPoints(const vector<GetAICoachScriptResponseBodyPoints> & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
    inline GetAICoachScriptResponseBody& setPoints(vector<GetAICoachScriptResponseBodyPoints> && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAICoachScriptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sampleDialogueList Field Functions 
    bool hasSampleDialogueList() const { return this->sampleDialogueList_ != nullptr;};
    void deleteSampleDialogueList() { this->sampleDialogueList_ = nullptr;};
    inline const vector<GetAICoachScriptResponseBodySampleDialogueList> & sampleDialogueList() const { DARABONBA_PTR_GET_CONST(sampleDialogueList_, vector<GetAICoachScriptResponseBodySampleDialogueList>) };
    inline vector<GetAICoachScriptResponseBodySampleDialogueList> sampleDialogueList() { DARABONBA_PTR_GET(sampleDialogueList_, vector<GetAICoachScriptResponseBodySampleDialogueList>) };
    inline GetAICoachScriptResponseBody& setSampleDialogueList(const vector<GetAICoachScriptResponseBodySampleDialogueList> & sampleDialogueList) { DARABONBA_PTR_SET_VALUE(sampleDialogueList_, sampleDialogueList) };
    inline GetAICoachScriptResponseBody& setSampleDialogueList(vector<GetAICoachScriptResponseBodySampleDialogueList> && sampleDialogueList) { DARABONBA_PTR_SET_RVALUE(sampleDialogueList_, sampleDialogueList) };


    // scoreConfig Field Functions 
    bool hasScoreConfig() const { return this->scoreConfig_ != nullptr;};
    void deleteScoreConfig() { this->scoreConfig_ = nullptr;};
    inline const GetAICoachScriptResponseBodyScoreConfig & scoreConfig() const { DARABONBA_PTR_GET_CONST(scoreConfig_, GetAICoachScriptResponseBodyScoreConfig) };
    inline GetAICoachScriptResponseBodyScoreConfig scoreConfig() { DARABONBA_PTR_GET(scoreConfig_, GetAICoachScriptResponseBodyScoreConfig) };
    inline GetAICoachScriptResponseBody& setScoreConfig(const GetAICoachScriptResponseBodyScoreConfig & scoreConfig) { DARABONBA_PTR_SET_VALUE(scoreConfig_, scoreConfig) };
    inline GetAICoachScriptResponseBody& setScoreConfig(GetAICoachScriptResponseBodyScoreConfig && scoreConfig) { DARABONBA_PTR_SET_RVALUE(scoreConfig_, scoreConfig) };


    // scriptRecordId Field Functions 
    bool hasScriptRecordId() const { return this->scriptRecordId_ != nullptr;};
    void deleteScriptRecordId() { this->scriptRecordId_ = nullptr;};
    inline string scriptRecordId() const { DARABONBA_PTR_GET_DEFAULT(scriptRecordId_, "") };
    inline GetAICoachScriptResponseBody& setScriptRecordId(string scriptRecordId) { DARABONBA_PTR_SET_VALUE(scriptRecordId_, scriptRecordId) };


    // sparringTipContent Field Functions 
    bool hasSparringTipContent() const { return this->sparringTipContent_ != nullptr;};
    void deleteSparringTipContent() { this->sparringTipContent_ = nullptr;};
    inline string sparringTipContent() const { DARABONBA_PTR_GET_DEFAULT(sparringTipContent_, "") };
    inline GetAICoachScriptResponseBody& setSparringTipContent(string sparringTipContent) { DARABONBA_PTR_SET_VALUE(sparringTipContent_, sparringTipContent) };


    // sparringTipTitle Field Functions 
    bool hasSparringTipTitle() const { return this->sparringTipTitle_ != nullptr;};
    void deleteSparringTipTitle() { this->sparringTipTitle_ = nullptr;};
    inline string sparringTipTitle() const { DARABONBA_PTR_GET_DEFAULT(sparringTipTitle_, "") };
    inline GetAICoachScriptResponseBody& setSparringTipTitle(string sparringTipTitle) { DARABONBA_PTR_SET_VALUE(sparringTipTitle_, sparringTipTitle) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetAICoachScriptResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // studentThinkTimeFlag Field Functions 
    bool hasStudentThinkTimeFlag() const { return this->studentThinkTimeFlag_ != nullptr;};
    void deleteStudentThinkTimeFlag() { this->studentThinkTimeFlag_ = nullptr;};
    inline bool studentThinkTimeFlag() const { DARABONBA_PTR_GET_DEFAULT(studentThinkTimeFlag_, false) };
    inline GetAICoachScriptResponseBody& setStudentThinkTimeFlag(bool studentThinkTimeFlag) { DARABONBA_PTR_SET_VALUE(studentThinkTimeFlag_, studentThinkTimeFlag) };


    // studentThinkTimeLimit Field Functions 
    bool hasStudentThinkTimeLimit() const { return this->studentThinkTimeLimit_ != nullptr;};
    void deleteStudentThinkTimeLimit() { this->studentThinkTimeLimit_ = nullptr;};
    inline int32_t studentThinkTimeLimit() const { DARABONBA_PTR_GET_DEFAULT(studentThinkTimeLimit_, 0) };
    inline GetAICoachScriptResponseBody& setStudentThinkTimeLimit(int32_t studentThinkTimeLimit) { DARABONBA_PTR_SET_VALUE(studentThinkTimeLimit_, studentThinkTimeLimit) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetAICoachScriptResponseBody& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline string voiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
    inline GetAICoachScriptResponseBody& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


    // voiceLanguage Field Functions 
    bool hasVoiceLanguage() const { return this->voiceLanguage_ != nullptr;};
    void deleteVoiceLanguage() { this->voiceLanguage_ = nullptr;};
    inline string voiceLanguage() const { DARABONBA_PTR_GET_DEFAULT(voiceLanguage_, "") };
    inline GetAICoachScriptResponseBody& setVoiceLanguage(string voiceLanguage) { DARABONBA_PTR_SET_VALUE(voiceLanguage_, voiceLanguage) };


    // weights Field Functions 
    bool hasWeights() const { return this->weights_ != nullptr;};
    void deleteWeights() { this->weights_ = nullptr;};
    inline const GetAICoachScriptResponseBodyWeights & weights() const { DARABONBA_PTR_GET_CONST(weights_, GetAICoachScriptResponseBodyWeights) };
    inline GetAICoachScriptResponseBodyWeights weights() { DARABONBA_PTR_GET(weights_, GetAICoachScriptResponseBodyWeights) };
    inline GetAICoachScriptResponseBody& setWeights(const GetAICoachScriptResponseBodyWeights & weights) { DARABONBA_PTR_SET_VALUE(weights_, weights) };
    inline GetAICoachScriptResponseBody& setWeights(GetAICoachScriptResponseBodyWeights && weights) { DARABONBA_PTR_SET_RVALUE(weights_, weights) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<bool> appendQuestionFlag_ = nullptr;
    std::shared_ptr<string> assessmentScope_ = nullptr;
    std::shared_ptr<GetAICoachScriptResponseBodyCheckCheatConfig> checkCheatConfig_ = nullptr;
    std::shared_ptr<string> closingRemarks_ = nullptr;
    std::shared_ptr<GetAICoachScriptResponseBodyCompleteStrategy> completeStrategy_ = nullptr;
    std::shared_ptr<string> coverUrl_ = nullptr;
    std::shared_ptr<vector<GetAICoachScriptResponseBodyCustomReplyRules>> customReplyRules_ = nullptr;
    std::shared_ptr<int32_t> dialogueInputTextLimit_ = nullptr;
    std::shared_ptr<bool> dialogueTextFlag_ = nullptr;
    std::shared_ptr<bool> dialogueTipFlag_ = nullptr;
    std::shared_ptr<int32_t> dialogueVoiceLimit_ = nullptr;
    std::shared_ptr<bool> evaluateReportFlag_ = nullptr;
    std::shared_ptr<map<string, int32_t>> expressiveness_ = nullptr;
    std::shared_ptr<vector<GetAICoachScriptResponseBodyExpressivenessList>> expressivenessList_ = nullptr;
    std::shared_ptr<string> gifDynamicUrl_ = nullptr;
    std::shared_ptr<string> gifStaticUrl_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> initiator_ = nullptr;
    std::shared_ptr<vector<string>> interactionInputTypes_ = nullptr;
    std::shared_ptr<int32_t> interactionType_ = nullptr;
    std::shared_ptr<string> introduce_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> openingRemarks_ = nullptr;
    std::shared_ptr<bool> orderAckFlag_ = nullptr;
    std::shared_ptr<vector<GetAICoachScriptResponseBodyPointDeductionRuleList>> pointDeductionRuleList_ = nullptr;
    std::shared_ptr<vector<GetAICoachScriptResponseBodyPoints>> points_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetAICoachScriptResponseBodySampleDialogueList>> sampleDialogueList_ = nullptr;
    std::shared_ptr<GetAICoachScriptResponseBodyScoreConfig> scoreConfig_ = nullptr;
    std::shared_ptr<string> scriptRecordId_ = nullptr;
    std::shared_ptr<string> sparringTipContent_ = nullptr;
    std::shared_ptr<string> sparringTipTitle_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<bool> studentThinkTimeFlag_ = nullptr;
    std::shared_ptr<int32_t> studentThinkTimeLimit_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> voiceId_ = nullptr;
    std::shared_ptr<string> voiceLanguage_ = nullptr;
    std::shared_ptr<GetAICoachScriptResponseBodyWeights> weights_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
