// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAICoachScriptPageResponseBodyListCompleteStrategy.hpp>
#include <vector>
#include <alibabacloud/models/ListAICoachScriptPageResponseBodyListCustomReplyRules.hpp>
#include <map>
#include <alibabacloud/models/ListAICoachScriptPageResponseBodyListSampleDialogueList.hpp>
#include <alibabacloud/models/ListAICoachScriptPageResponseBodyListScoreConfig.hpp>
#include <alibabacloud/models/ListAICoachScriptPageResponseBodyListWeights.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAICoachScriptPageResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICoachScriptPageResponseBodyList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListAICoachScriptPageResponseBodyList& obj) { 
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
    ListAICoachScriptPageResponseBodyList() = default ;
    ListAICoachScriptPageResponseBodyList(const ListAICoachScriptPageResponseBodyList &) = default ;
    ListAICoachScriptPageResponseBodyList(ListAICoachScriptPageResponseBodyList &&) = default ;
    ListAICoachScriptPageResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICoachScriptPageResponseBodyList() = default ;
    ListAICoachScriptPageResponseBodyList& operator=(const ListAICoachScriptPageResponseBodyList &) = default ;
    ListAICoachScriptPageResponseBodyList& operator=(ListAICoachScriptPageResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appendQuestionFlag_ == nullptr
        && return this->assessmentScope_ == nullptr && return this->closingRemarks_ == nullptr && return this->completeStrategy_ == nullptr && return this->coverUrl_ == nullptr && return this->customReplyRules_ == nullptr
        && return this->dialogueTextFlag_ == nullptr && return this->dialogueTipFlag_ == nullptr && return this->evaluateReportFlag_ == nullptr && return this->expressiveness_ == nullptr && return this->gifDynamicUrl_ == nullptr
        && return this->gifStaticUrl_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->initiator_ == nullptr && return this->interactionType_ == nullptr
        && return this->introduce_ == nullptr && return this->name_ == nullptr && return this->openingRemarks_ == nullptr && return this->orderAckFlag_ == nullptr && return this->sampleDialogueList_ == nullptr
        && return this->scoreConfig_ == nullptr && return this->scriptRecordId_ == nullptr && return this->sparringTipContent_ == nullptr && return this->sparringTipTitle_ == nullptr && return this->status_ == nullptr
        && return this->studentThinkTimeFlag_ == nullptr && return this->type_ == nullptr && return this->weights_ == nullptr; };
    // appendQuestionFlag Field Functions 
    bool hasAppendQuestionFlag() const { return this->appendQuestionFlag_ != nullptr;};
    void deleteAppendQuestionFlag() { this->appendQuestionFlag_ = nullptr;};
    inline string appendQuestionFlag() const { DARABONBA_PTR_GET_DEFAULT(appendQuestionFlag_, "") };
    inline ListAICoachScriptPageResponseBodyList& setAppendQuestionFlag(string appendQuestionFlag) { DARABONBA_PTR_SET_VALUE(appendQuestionFlag_, appendQuestionFlag) };


    // assessmentScope Field Functions 
    bool hasAssessmentScope() const { return this->assessmentScope_ != nullptr;};
    void deleteAssessmentScope() { this->assessmentScope_ = nullptr;};
    inline string assessmentScope() const { DARABONBA_PTR_GET_DEFAULT(assessmentScope_, "") };
    inline ListAICoachScriptPageResponseBodyList& setAssessmentScope(string assessmentScope) { DARABONBA_PTR_SET_VALUE(assessmentScope_, assessmentScope) };


    // closingRemarks Field Functions 
    bool hasClosingRemarks() const { return this->closingRemarks_ != nullptr;};
    void deleteClosingRemarks() { this->closingRemarks_ = nullptr;};
    inline string closingRemarks() const { DARABONBA_PTR_GET_DEFAULT(closingRemarks_, "") };
    inline ListAICoachScriptPageResponseBodyList& setClosingRemarks(string closingRemarks) { DARABONBA_PTR_SET_VALUE(closingRemarks_, closingRemarks) };


    // completeStrategy Field Functions 
    bool hasCompleteStrategy() const { return this->completeStrategy_ != nullptr;};
    void deleteCompleteStrategy() { this->completeStrategy_ = nullptr;};
    inline const Models::ListAICoachScriptPageResponseBodyListCompleteStrategy & completeStrategy() const { DARABONBA_PTR_GET_CONST(completeStrategy_, Models::ListAICoachScriptPageResponseBodyListCompleteStrategy) };
    inline Models::ListAICoachScriptPageResponseBodyListCompleteStrategy completeStrategy() { DARABONBA_PTR_GET(completeStrategy_, Models::ListAICoachScriptPageResponseBodyListCompleteStrategy) };
    inline ListAICoachScriptPageResponseBodyList& setCompleteStrategy(const Models::ListAICoachScriptPageResponseBodyListCompleteStrategy & completeStrategy) { DARABONBA_PTR_SET_VALUE(completeStrategy_, completeStrategy) };
    inline ListAICoachScriptPageResponseBodyList& setCompleteStrategy(Models::ListAICoachScriptPageResponseBodyListCompleteStrategy && completeStrategy) { DARABONBA_PTR_SET_RVALUE(completeStrategy_, completeStrategy) };


    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string coverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline ListAICoachScriptPageResponseBodyList& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // customReplyRules Field Functions 
    bool hasCustomReplyRules() const { return this->customReplyRules_ != nullptr;};
    void deleteCustomReplyRules() { this->customReplyRules_ = nullptr;};
    inline const vector<Models::ListAICoachScriptPageResponseBodyListCustomReplyRules> & customReplyRules() const { DARABONBA_PTR_GET_CONST(customReplyRules_, vector<Models::ListAICoachScriptPageResponseBodyListCustomReplyRules>) };
    inline vector<Models::ListAICoachScriptPageResponseBodyListCustomReplyRules> customReplyRules() { DARABONBA_PTR_GET(customReplyRules_, vector<Models::ListAICoachScriptPageResponseBodyListCustomReplyRules>) };
    inline ListAICoachScriptPageResponseBodyList& setCustomReplyRules(const vector<Models::ListAICoachScriptPageResponseBodyListCustomReplyRules> & customReplyRules) { DARABONBA_PTR_SET_VALUE(customReplyRules_, customReplyRules) };
    inline ListAICoachScriptPageResponseBodyList& setCustomReplyRules(vector<Models::ListAICoachScriptPageResponseBodyListCustomReplyRules> && customReplyRules) { DARABONBA_PTR_SET_RVALUE(customReplyRules_, customReplyRules) };


    // dialogueTextFlag Field Functions 
    bool hasDialogueTextFlag() const { return this->dialogueTextFlag_ != nullptr;};
    void deleteDialogueTextFlag() { this->dialogueTextFlag_ = nullptr;};
    inline bool dialogueTextFlag() const { DARABONBA_PTR_GET_DEFAULT(dialogueTextFlag_, false) };
    inline ListAICoachScriptPageResponseBodyList& setDialogueTextFlag(bool dialogueTextFlag) { DARABONBA_PTR_SET_VALUE(dialogueTextFlag_, dialogueTextFlag) };


    // dialogueTipFlag Field Functions 
    bool hasDialogueTipFlag() const { return this->dialogueTipFlag_ != nullptr;};
    void deleteDialogueTipFlag() { this->dialogueTipFlag_ = nullptr;};
    inline bool dialogueTipFlag() const { DARABONBA_PTR_GET_DEFAULT(dialogueTipFlag_, false) };
    inline ListAICoachScriptPageResponseBodyList& setDialogueTipFlag(bool dialogueTipFlag) { DARABONBA_PTR_SET_VALUE(dialogueTipFlag_, dialogueTipFlag) };


    // evaluateReportFlag Field Functions 
    bool hasEvaluateReportFlag() const { return this->evaluateReportFlag_ != nullptr;};
    void deleteEvaluateReportFlag() { this->evaluateReportFlag_ = nullptr;};
    inline bool evaluateReportFlag() const { DARABONBA_PTR_GET_DEFAULT(evaluateReportFlag_, false) };
    inline ListAICoachScriptPageResponseBodyList& setEvaluateReportFlag(bool evaluateReportFlag) { DARABONBA_PTR_SET_VALUE(evaluateReportFlag_, evaluateReportFlag) };


    // expressiveness Field Functions 
    bool hasExpressiveness() const { return this->expressiveness_ != nullptr;};
    void deleteExpressiveness() { this->expressiveness_ = nullptr;};
    inline const map<string, string> & expressiveness() const { DARABONBA_PTR_GET_CONST(expressiveness_, map<string, string>) };
    inline map<string, string> expressiveness() { DARABONBA_PTR_GET(expressiveness_, map<string, string>) };
    inline ListAICoachScriptPageResponseBodyList& setExpressiveness(const map<string, string> & expressiveness) { DARABONBA_PTR_SET_VALUE(expressiveness_, expressiveness) };
    inline ListAICoachScriptPageResponseBodyList& setExpressiveness(map<string, string> && expressiveness) { DARABONBA_PTR_SET_RVALUE(expressiveness_, expressiveness) };


    // gifDynamicUrl Field Functions 
    bool hasGifDynamicUrl() const { return this->gifDynamicUrl_ != nullptr;};
    void deleteGifDynamicUrl() { this->gifDynamicUrl_ = nullptr;};
    inline string gifDynamicUrl() const { DARABONBA_PTR_GET_DEFAULT(gifDynamicUrl_, "") };
    inline ListAICoachScriptPageResponseBodyList& setGifDynamicUrl(string gifDynamicUrl) { DARABONBA_PTR_SET_VALUE(gifDynamicUrl_, gifDynamicUrl) };


    // gifStaticUrl Field Functions 
    bool hasGifStaticUrl() const { return this->gifStaticUrl_ != nullptr;};
    void deleteGifStaticUrl() { this->gifStaticUrl_ = nullptr;};
    inline string gifStaticUrl() const { DARABONBA_PTR_GET_DEFAULT(gifStaticUrl_, "") };
    inline ListAICoachScriptPageResponseBodyList& setGifStaticUrl(string gifStaticUrl) { DARABONBA_PTR_SET_VALUE(gifStaticUrl_, gifStaticUrl) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListAICoachScriptPageResponseBodyList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListAICoachScriptPageResponseBodyList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // initiator Field Functions 
    bool hasInitiator() const { return this->initiator_ != nullptr;};
    void deleteInitiator() { this->initiator_ = nullptr;};
    inline string initiator() const { DARABONBA_PTR_GET_DEFAULT(initiator_, "") };
    inline ListAICoachScriptPageResponseBodyList& setInitiator(string initiator) { DARABONBA_PTR_SET_VALUE(initiator_, initiator) };


    // interactionType Field Functions 
    bool hasInteractionType() const { return this->interactionType_ != nullptr;};
    void deleteInteractionType() { this->interactionType_ = nullptr;};
    inline string interactionType() const { DARABONBA_PTR_GET_DEFAULT(interactionType_, "") };
    inline ListAICoachScriptPageResponseBodyList& setInteractionType(string interactionType) { DARABONBA_PTR_SET_VALUE(interactionType_, interactionType) };


    // introduce Field Functions 
    bool hasIntroduce() const { return this->introduce_ != nullptr;};
    void deleteIntroduce() { this->introduce_ = nullptr;};
    inline string introduce() const { DARABONBA_PTR_GET_DEFAULT(introduce_, "") };
    inline ListAICoachScriptPageResponseBodyList& setIntroduce(string introduce) { DARABONBA_PTR_SET_VALUE(introduce_, introduce) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAICoachScriptPageResponseBodyList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // openingRemarks Field Functions 
    bool hasOpeningRemarks() const { return this->openingRemarks_ != nullptr;};
    void deleteOpeningRemarks() { this->openingRemarks_ = nullptr;};
    inline string openingRemarks() const { DARABONBA_PTR_GET_DEFAULT(openingRemarks_, "") };
    inline ListAICoachScriptPageResponseBodyList& setOpeningRemarks(string openingRemarks) { DARABONBA_PTR_SET_VALUE(openingRemarks_, openingRemarks) };


    // orderAckFlag Field Functions 
    bool hasOrderAckFlag() const { return this->orderAckFlag_ != nullptr;};
    void deleteOrderAckFlag() { this->orderAckFlag_ = nullptr;};
    inline bool orderAckFlag() const { DARABONBA_PTR_GET_DEFAULT(orderAckFlag_, false) };
    inline ListAICoachScriptPageResponseBodyList& setOrderAckFlag(bool orderAckFlag) { DARABONBA_PTR_SET_VALUE(orderAckFlag_, orderAckFlag) };


    // sampleDialogueList Field Functions 
    bool hasSampleDialogueList() const { return this->sampleDialogueList_ != nullptr;};
    void deleteSampleDialogueList() { this->sampleDialogueList_ = nullptr;};
    inline const vector<Models::ListAICoachScriptPageResponseBodyListSampleDialogueList> & sampleDialogueList() const { DARABONBA_PTR_GET_CONST(sampleDialogueList_, vector<Models::ListAICoachScriptPageResponseBodyListSampleDialogueList>) };
    inline vector<Models::ListAICoachScriptPageResponseBodyListSampleDialogueList> sampleDialogueList() { DARABONBA_PTR_GET(sampleDialogueList_, vector<Models::ListAICoachScriptPageResponseBodyListSampleDialogueList>) };
    inline ListAICoachScriptPageResponseBodyList& setSampleDialogueList(const vector<Models::ListAICoachScriptPageResponseBodyListSampleDialogueList> & sampleDialogueList) { DARABONBA_PTR_SET_VALUE(sampleDialogueList_, sampleDialogueList) };
    inline ListAICoachScriptPageResponseBodyList& setSampleDialogueList(vector<Models::ListAICoachScriptPageResponseBodyListSampleDialogueList> && sampleDialogueList) { DARABONBA_PTR_SET_RVALUE(sampleDialogueList_, sampleDialogueList) };


    // scoreConfig Field Functions 
    bool hasScoreConfig() const { return this->scoreConfig_ != nullptr;};
    void deleteScoreConfig() { this->scoreConfig_ = nullptr;};
    inline const Models::ListAICoachScriptPageResponseBodyListScoreConfig & scoreConfig() const { DARABONBA_PTR_GET_CONST(scoreConfig_, Models::ListAICoachScriptPageResponseBodyListScoreConfig) };
    inline Models::ListAICoachScriptPageResponseBodyListScoreConfig scoreConfig() { DARABONBA_PTR_GET(scoreConfig_, Models::ListAICoachScriptPageResponseBodyListScoreConfig) };
    inline ListAICoachScriptPageResponseBodyList& setScoreConfig(const Models::ListAICoachScriptPageResponseBodyListScoreConfig & scoreConfig) { DARABONBA_PTR_SET_VALUE(scoreConfig_, scoreConfig) };
    inline ListAICoachScriptPageResponseBodyList& setScoreConfig(Models::ListAICoachScriptPageResponseBodyListScoreConfig && scoreConfig) { DARABONBA_PTR_SET_RVALUE(scoreConfig_, scoreConfig) };


    // scriptRecordId Field Functions 
    bool hasScriptRecordId() const { return this->scriptRecordId_ != nullptr;};
    void deleteScriptRecordId() { this->scriptRecordId_ = nullptr;};
    inline string scriptRecordId() const { DARABONBA_PTR_GET_DEFAULT(scriptRecordId_, "") };
    inline ListAICoachScriptPageResponseBodyList& setScriptRecordId(string scriptRecordId) { DARABONBA_PTR_SET_VALUE(scriptRecordId_, scriptRecordId) };


    // sparringTipContent Field Functions 
    bool hasSparringTipContent() const { return this->sparringTipContent_ != nullptr;};
    void deleteSparringTipContent() { this->sparringTipContent_ = nullptr;};
    inline string sparringTipContent() const { DARABONBA_PTR_GET_DEFAULT(sparringTipContent_, "") };
    inline ListAICoachScriptPageResponseBodyList& setSparringTipContent(string sparringTipContent) { DARABONBA_PTR_SET_VALUE(sparringTipContent_, sparringTipContent) };


    // sparringTipTitle Field Functions 
    bool hasSparringTipTitle() const { return this->sparringTipTitle_ != nullptr;};
    void deleteSparringTipTitle() { this->sparringTipTitle_ = nullptr;};
    inline string sparringTipTitle() const { DARABONBA_PTR_GET_DEFAULT(sparringTipTitle_, "") };
    inline ListAICoachScriptPageResponseBodyList& setSparringTipTitle(string sparringTipTitle) { DARABONBA_PTR_SET_VALUE(sparringTipTitle_, sparringTipTitle) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListAICoachScriptPageResponseBodyList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // studentThinkTimeFlag Field Functions 
    bool hasStudentThinkTimeFlag() const { return this->studentThinkTimeFlag_ != nullptr;};
    void deleteStudentThinkTimeFlag() { this->studentThinkTimeFlag_ = nullptr;};
    inline bool studentThinkTimeFlag() const { DARABONBA_PTR_GET_DEFAULT(studentThinkTimeFlag_, false) };
    inline ListAICoachScriptPageResponseBodyList& setStudentThinkTimeFlag(bool studentThinkTimeFlag) { DARABONBA_PTR_SET_VALUE(studentThinkTimeFlag_, studentThinkTimeFlag) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ListAICoachScriptPageResponseBodyList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weights Field Functions 
    bool hasWeights() const { return this->weights_ != nullptr;};
    void deleteWeights() { this->weights_ = nullptr;};
    inline const Models::ListAICoachScriptPageResponseBodyListWeights & weights() const { DARABONBA_PTR_GET_CONST(weights_, Models::ListAICoachScriptPageResponseBodyListWeights) };
    inline Models::ListAICoachScriptPageResponseBodyListWeights weights() { DARABONBA_PTR_GET(weights_, Models::ListAICoachScriptPageResponseBodyListWeights) };
    inline ListAICoachScriptPageResponseBodyList& setWeights(const Models::ListAICoachScriptPageResponseBodyListWeights & weights) { DARABONBA_PTR_SET_VALUE(weights_, weights) };
    inline ListAICoachScriptPageResponseBodyList& setWeights(Models::ListAICoachScriptPageResponseBodyListWeights && weights) { DARABONBA_PTR_SET_RVALUE(weights_, weights) };


  protected:
    std::shared_ptr<string> appendQuestionFlag_ = nullptr;
    std::shared_ptr<string> assessmentScope_ = nullptr;
    std::shared_ptr<string> closingRemarks_ = nullptr;
    std::shared_ptr<Models::ListAICoachScriptPageResponseBodyListCompleteStrategy> completeStrategy_ = nullptr;
    std::shared_ptr<string> coverUrl_ = nullptr;
    std::shared_ptr<vector<Models::ListAICoachScriptPageResponseBodyListCustomReplyRules>> customReplyRules_ = nullptr;
    std::shared_ptr<bool> dialogueTextFlag_ = nullptr;
    std::shared_ptr<bool> dialogueTipFlag_ = nullptr;
    std::shared_ptr<bool> evaluateReportFlag_ = nullptr;
    std::shared_ptr<map<string, string>> expressiveness_ = nullptr;
    std::shared_ptr<string> gifDynamicUrl_ = nullptr;
    std::shared_ptr<string> gifStaticUrl_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> initiator_ = nullptr;
    std::shared_ptr<string> interactionType_ = nullptr;
    std::shared_ptr<string> introduce_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> openingRemarks_ = nullptr;
    std::shared_ptr<bool> orderAckFlag_ = nullptr;
    std::shared_ptr<vector<Models::ListAICoachScriptPageResponseBodyListSampleDialogueList>> sampleDialogueList_ = nullptr;
    std::shared_ptr<Models::ListAICoachScriptPageResponseBodyListScoreConfig> scoreConfig_ = nullptr;
    std::shared_ptr<string> scriptRecordId_ = nullptr;
    std::shared_ptr<string> sparringTipContent_ = nullptr;
    std::shared_ptr<string> sparringTipTitle_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<bool> studentThinkTimeFlag_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<Models::ListAICoachScriptPageResponseBodyListWeights> weights_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
