// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCASESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCASESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class ListCasesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCasesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_TO_JSON(AccessChannelType, accessChannelType_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(CaseCompleted, caseCompleted_);
      DARABONBA_PTR_TO_JSON(CaseIds, caseIdsShrink_);
      DARABONBA_PTR_TO_JSON(DispositionCodes, dispositionCodesShrink_);
      DARABONBA_PTR_TO_JSON(DispositionReasons, dispositionReasonsShrink_);
      DARABONBA_PTR_TO_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LabelSearch, labelSearchShrink_);
      DARABONBA_PTR_TO_JSON(MaxRingingDuration, maxRingingDuration_);
      DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_TO_JSON(MaxTalkTurns, maxTalkTurns_);
      DARABONBA_PTR_TO_JSON(MinRingingDuration, minRingingDuration_);
      DARABONBA_PTR_TO_JSON(MinTalkTime, minTalkTime_);
      DARABONBA_PTR_TO_JSON(MinTalkTurns, minTalkTurns_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(States, statesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListCasesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_FROM_JSON(AccessChannelType, accessChannelType_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(CaseCompleted, caseCompleted_);
      DARABONBA_PTR_FROM_JSON(CaseIds, caseIdsShrink_);
      DARABONBA_PTR_FROM_JSON(DispositionCodes, dispositionCodesShrink_);
      DARABONBA_PTR_FROM_JSON(DispositionReasons, dispositionReasonsShrink_);
      DARABONBA_PTR_FROM_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LabelSearch, labelSearchShrink_);
      DARABONBA_PTR_FROM_JSON(MaxRingingDuration, maxRingingDuration_);
      DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_FROM_JSON(MaxTalkTurns, maxTalkTurns_);
      DARABONBA_PTR_FROM_JSON(MinRingingDuration, minRingingDuration_);
      DARABONBA_PTR_FROM_JSON(MinTalkTime, minTalkTime_);
      DARABONBA_PTR_FROM_JSON(MinTalkTurns, minTalkTurns_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(States, statesShrink_);
    };
    ListCasesShrinkRequest() = default ;
    ListCasesShrinkRequest(const ListCasesShrinkRequest &) = default ;
    ListCasesShrinkRequest(ListCasesShrinkRequest &&) = default ;
    ListCasesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCasesShrinkRequest() = default ;
    ListCasesShrinkRequest& operator=(const ListCasesShrinkRequest &) = default ;
    ListCasesShrinkRequest& operator=(ListCasesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessChannelId_ == nullptr
        && this->accessChannelType_ == nullptr && this->caller_ == nullptr && this->campaignId_ == nullptr && this->caseCompleted_ == nullptr && this->caseIdsShrink_ == nullptr
        && this->dispositionCodesShrink_ == nullptr && this->dispositionReasonsShrink_ == nullptr && this->draftVersion_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr
        && this->labelSearchShrink_ == nullptr && this->maxRingingDuration_ == nullptr && this->maxTalkTime_ == nullptr && this->maxTalkTurns_ == nullptr && this->minRingingDuration_ == nullptr
        && this->minTalkTime_ == nullptr && this->minTalkTurns_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->phoneNumber_ == nullptr
        && this->scriptId_ == nullptr && this->startTime_ == nullptr && this->statesShrink_ == nullptr; };
    // accessChannelId Field Functions 
    bool hasAccessChannelId() const { return this->accessChannelId_ != nullptr;};
    void deleteAccessChannelId() { this->accessChannelId_ = nullptr;};
    inline string getAccessChannelId() const { DARABONBA_PTR_GET_DEFAULT(accessChannelId_, "") };
    inline ListCasesShrinkRequest& setAccessChannelId(string accessChannelId) { DARABONBA_PTR_SET_VALUE(accessChannelId_, accessChannelId) };


    // accessChannelType Field Functions 
    bool hasAccessChannelType() const { return this->accessChannelType_ != nullptr;};
    void deleteAccessChannelType() { this->accessChannelType_ = nullptr;};
    inline string getAccessChannelType() const { DARABONBA_PTR_GET_DEFAULT(accessChannelType_, "") };
    inline ListCasesShrinkRequest& setAccessChannelType(string accessChannelType) { DARABONBA_PTR_SET_VALUE(accessChannelType_, accessChannelType) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline ListCasesShrinkRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string getCampaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline ListCasesShrinkRequest& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // caseCompleted Field Functions 
    bool hasCaseCompleted() const { return this->caseCompleted_ != nullptr;};
    void deleteCaseCompleted() { this->caseCompleted_ = nullptr;};
    inline bool getCaseCompleted() const { DARABONBA_PTR_GET_DEFAULT(caseCompleted_, false) };
    inline ListCasesShrinkRequest& setCaseCompleted(bool caseCompleted) { DARABONBA_PTR_SET_VALUE(caseCompleted_, caseCompleted) };


    // caseIdsShrink Field Functions 
    bool hasCaseIdsShrink() const { return this->caseIdsShrink_ != nullptr;};
    void deleteCaseIdsShrink() { this->caseIdsShrink_ = nullptr;};
    inline string getCaseIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(caseIdsShrink_, "") };
    inline ListCasesShrinkRequest& setCaseIdsShrink(string caseIdsShrink) { DARABONBA_PTR_SET_VALUE(caseIdsShrink_, caseIdsShrink) };


    // dispositionCodesShrink Field Functions 
    bool hasDispositionCodesShrink() const { return this->dispositionCodesShrink_ != nullptr;};
    void deleteDispositionCodesShrink() { this->dispositionCodesShrink_ = nullptr;};
    inline string getDispositionCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(dispositionCodesShrink_, "") };
    inline ListCasesShrinkRequest& setDispositionCodesShrink(string dispositionCodesShrink) { DARABONBA_PTR_SET_VALUE(dispositionCodesShrink_, dispositionCodesShrink) };


    // dispositionReasonsShrink Field Functions 
    bool hasDispositionReasonsShrink() const { return this->dispositionReasonsShrink_ != nullptr;};
    void deleteDispositionReasonsShrink() { this->dispositionReasonsShrink_ = nullptr;};
    inline string getDispositionReasonsShrink() const { DARABONBA_PTR_GET_DEFAULT(dispositionReasonsShrink_, "") };
    inline ListCasesShrinkRequest& setDispositionReasonsShrink(string dispositionReasonsShrink) { DARABONBA_PTR_SET_VALUE(dispositionReasonsShrink_, dispositionReasonsShrink) };


    // draftVersion Field Functions 
    bool hasDraftVersion() const { return this->draftVersion_ != nullptr;};
    void deleteDraftVersion() { this->draftVersion_ = nullptr;};
    inline bool getDraftVersion() const { DARABONBA_PTR_GET_DEFAULT(draftVersion_, false) };
    inline ListCasesShrinkRequest& setDraftVersion(bool draftVersion) { DARABONBA_PTR_SET_VALUE(draftVersion_, draftVersion) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListCasesShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCasesShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // labelSearchShrink Field Functions 
    bool hasLabelSearchShrink() const { return this->labelSearchShrink_ != nullptr;};
    void deleteLabelSearchShrink() { this->labelSearchShrink_ = nullptr;};
    inline string getLabelSearchShrink() const { DARABONBA_PTR_GET_DEFAULT(labelSearchShrink_, "") };
    inline ListCasesShrinkRequest& setLabelSearchShrink(string labelSearchShrink) { DARABONBA_PTR_SET_VALUE(labelSearchShrink_, labelSearchShrink) };


    // maxRingingDuration Field Functions 
    bool hasMaxRingingDuration() const { return this->maxRingingDuration_ != nullptr;};
    void deleteMaxRingingDuration() { this->maxRingingDuration_ = nullptr;};
    inline int64_t getMaxRingingDuration() const { DARABONBA_PTR_GET_DEFAULT(maxRingingDuration_, 0L) };
    inline ListCasesShrinkRequest& setMaxRingingDuration(int64_t maxRingingDuration) { DARABONBA_PTR_SET_VALUE(maxRingingDuration_, maxRingingDuration) };


    // maxTalkTime Field Functions 
    bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
    void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
    inline int64_t getMaxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
    inline ListCasesShrinkRequest& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


    // maxTalkTurns Field Functions 
    bool hasMaxTalkTurns() const { return this->maxTalkTurns_ != nullptr;};
    void deleteMaxTalkTurns() { this->maxTalkTurns_ = nullptr;};
    inline int64_t getMaxTalkTurns() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTurns_, 0L) };
    inline ListCasesShrinkRequest& setMaxTalkTurns(int64_t maxTalkTurns) { DARABONBA_PTR_SET_VALUE(maxTalkTurns_, maxTalkTurns) };


    // minRingingDuration Field Functions 
    bool hasMinRingingDuration() const { return this->minRingingDuration_ != nullptr;};
    void deleteMinRingingDuration() { this->minRingingDuration_ = nullptr;};
    inline int64_t getMinRingingDuration() const { DARABONBA_PTR_GET_DEFAULT(minRingingDuration_, 0L) };
    inline ListCasesShrinkRequest& setMinRingingDuration(int64_t minRingingDuration) { DARABONBA_PTR_SET_VALUE(minRingingDuration_, minRingingDuration) };


    // minTalkTime Field Functions 
    bool hasMinTalkTime() const { return this->minTalkTime_ != nullptr;};
    void deleteMinTalkTime() { this->minTalkTime_ = nullptr;};
    inline int64_t getMinTalkTime() const { DARABONBA_PTR_GET_DEFAULT(minTalkTime_, 0L) };
    inline ListCasesShrinkRequest& setMinTalkTime(int64_t minTalkTime) { DARABONBA_PTR_SET_VALUE(minTalkTime_, minTalkTime) };


    // minTalkTurns Field Functions 
    bool hasMinTalkTurns() const { return this->minTalkTurns_ != nullptr;};
    void deleteMinTalkTurns() { this->minTalkTurns_ = nullptr;};
    inline int64_t getMinTalkTurns() const { DARABONBA_PTR_GET_DEFAULT(minTalkTurns_, 0L) };
    inline ListCasesShrinkRequest& setMinTalkTurns(int64_t minTalkTurns) { DARABONBA_PTR_SET_VALUE(minTalkTurns_, minTalkTurns) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCasesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCasesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline ListCasesShrinkRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListCasesShrinkRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListCasesShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statesShrink Field Functions 
    bool hasStatesShrink() const { return this->statesShrink_ != nullptr;};
    void deleteStatesShrink() { this->statesShrink_ = nullptr;};
    inline string getStatesShrink() const { DARABONBA_PTR_GET_DEFAULT(statesShrink_, "") };
    inline ListCasesShrinkRequest& setStatesShrink(string statesShrink) { DARABONBA_PTR_SET_VALUE(statesShrink_, statesShrink) };


  protected:
    // The access channel ID.
    shared_ptr<string> accessChannelId_ {};
    // The access channel type.
    shared_ptr<string> accessChannelType_ {};
    // The caller number.
    shared_ptr<string> caller_ {};
    // The outbound campaign ID.
    shared_ptr<string> campaignId_ {};
    // Specifies whether the case is completed.
    shared_ptr<bool> caseCompleted_ {};
    // The list of case IDs.
    shared_ptr<string> caseIdsShrink_ {};
    // The list of disposition codes.
    shared_ptr<string> dispositionCodesShrink_ {};
    // The list of disposition reasons.
    shared_ptr<string> dispositionReasonsShrink_ {};
    // Specifies whether the version is a draft version.
    shared_ptr<bool> draftVersion_ {};
    // The end time.
    shared_ptr<int64_t> endTime_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The label search condition.
    shared_ptr<string> labelSearchShrink_ {};
    // The maximum ringing duration.
    shared_ptr<int64_t> maxRingingDuration_ {};
    // The maximum talk time.
    shared_ptr<int64_t> maxTalkTime_ {};
    // The maximum number of conversation turns.
    shared_ptr<int64_t> maxTalkTurns_ {};
    // The minimum ringing duration.
    shared_ptr<int64_t> minRingingDuration_ {};
    // The minimum talk time.
    shared_ptr<int64_t> minTalkTime_ {};
    // The minimum number of conversation turns.
    shared_ptr<int64_t> minTalkTurns_ {};
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The called number.
    shared_ptr<string> phoneNumber_ {};
    // The script ID.
    shared_ptr<string> scriptId_ {};
    // The start time.
    shared_ptr<int64_t> startTime_ {};
    // The list of case states.
    shared_ptr<string> statesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
