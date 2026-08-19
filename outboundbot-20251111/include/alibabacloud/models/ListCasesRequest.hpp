// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCASESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class ListCasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_TO_JSON(AccessChannelType, accessChannelType_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(CaseCompleted, caseCompleted_);
      DARABONBA_PTR_TO_JSON(CaseIds, caseIds_);
      DARABONBA_PTR_TO_JSON(DispositionCodes, dispositionCodes_);
      DARABONBA_PTR_TO_JSON(DispositionReasons, dispositionReasons_);
      DARABONBA_PTR_TO_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LabelSearch, labelSearch_);
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
      DARABONBA_PTR_TO_JSON(States, states_);
    };
    friend void from_json(const Darabonba::Json& j, ListCasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_FROM_JSON(AccessChannelType, accessChannelType_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(CaseCompleted, caseCompleted_);
      DARABONBA_PTR_FROM_JSON(CaseIds, caseIds_);
      DARABONBA_PTR_FROM_JSON(DispositionCodes, dispositionCodes_);
      DARABONBA_PTR_FROM_JSON(DispositionReasons, dispositionReasons_);
      DARABONBA_PTR_FROM_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LabelSearch, labelSearch_);
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
      DARABONBA_PTR_FROM_JSON(States, states_);
    };
    ListCasesRequest() = default ;
    ListCasesRequest(const ListCasesRequest &) = default ;
    ListCasesRequest(ListCasesRequest &&) = default ;
    ListCasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCasesRequest() = default ;
    ListCasesRequest& operator=(const ListCasesRequest &) = default ;
    ListCasesRequest& operator=(ListCasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessChannelId_ == nullptr
        && this->accessChannelType_ == nullptr && this->caller_ == nullptr && this->campaignId_ == nullptr && this->caseCompleted_ == nullptr && this->caseIds_ == nullptr
        && this->dispositionCodes_ == nullptr && this->dispositionReasons_ == nullptr && this->draftVersion_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr
        && this->labelSearch_ == nullptr && this->maxRingingDuration_ == nullptr && this->maxTalkTime_ == nullptr && this->maxTalkTurns_ == nullptr && this->minRingingDuration_ == nullptr
        && this->minTalkTime_ == nullptr && this->minTalkTurns_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->phoneNumber_ == nullptr
        && this->scriptId_ == nullptr && this->startTime_ == nullptr && this->states_ == nullptr; };
    // accessChannelId Field Functions 
    bool hasAccessChannelId() const { return this->accessChannelId_ != nullptr;};
    void deleteAccessChannelId() { this->accessChannelId_ = nullptr;};
    inline string getAccessChannelId() const { DARABONBA_PTR_GET_DEFAULT(accessChannelId_, "") };
    inline ListCasesRequest& setAccessChannelId(string accessChannelId) { DARABONBA_PTR_SET_VALUE(accessChannelId_, accessChannelId) };


    // accessChannelType Field Functions 
    bool hasAccessChannelType() const { return this->accessChannelType_ != nullptr;};
    void deleteAccessChannelType() { this->accessChannelType_ = nullptr;};
    inline string getAccessChannelType() const { DARABONBA_PTR_GET_DEFAULT(accessChannelType_, "") };
    inline ListCasesRequest& setAccessChannelType(string accessChannelType) { DARABONBA_PTR_SET_VALUE(accessChannelType_, accessChannelType) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline ListCasesRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string getCampaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline ListCasesRequest& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // caseCompleted Field Functions 
    bool hasCaseCompleted() const { return this->caseCompleted_ != nullptr;};
    void deleteCaseCompleted() { this->caseCompleted_ = nullptr;};
    inline bool getCaseCompleted() const { DARABONBA_PTR_GET_DEFAULT(caseCompleted_, false) };
    inline ListCasesRequest& setCaseCompleted(bool caseCompleted) { DARABONBA_PTR_SET_VALUE(caseCompleted_, caseCompleted) };


    // caseIds Field Functions 
    bool hasCaseIds() const { return this->caseIds_ != nullptr;};
    void deleteCaseIds() { this->caseIds_ = nullptr;};
    inline const vector<string> & getCaseIds() const { DARABONBA_PTR_GET_CONST(caseIds_, vector<string>) };
    inline vector<string> getCaseIds() { DARABONBA_PTR_GET(caseIds_, vector<string>) };
    inline ListCasesRequest& setCaseIds(const vector<string> & caseIds) { DARABONBA_PTR_SET_VALUE(caseIds_, caseIds) };
    inline ListCasesRequest& setCaseIds(vector<string> && caseIds) { DARABONBA_PTR_SET_RVALUE(caseIds_, caseIds) };


    // dispositionCodes Field Functions 
    bool hasDispositionCodes() const { return this->dispositionCodes_ != nullptr;};
    void deleteDispositionCodes() { this->dispositionCodes_ = nullptr;};
    inline const vector<string> & getDispositionCodes() const { DARABONBA_PTR_GET_CONST(dispositionCodes_, vector<string>) };
    inline vector<string> getDispositionCodes() { DARABONBA_PTR_GET(dispositionCodes_, vector<string>) };
    inline ListCasesRequest& setDispositionCodes(const vector<string> & dispositionCodes) { DARABONBA_PTR_SET_VALUE(dispositionCodes_, dispositionCodes) };
    inline ListCasesRequest& setDispositionCodes(vector<string> && dispositionCodes) { DARABONBA_PTR_SET_RVALUE(dispositionCodes_, dispositionCodes) };


    // dispositionReasons Field Functions 
    bool hasDispositionReasons() const { return this->dispositionReasons_ != nullptr;};
    void deleteDispositionReasons() { this->dispositionReasons_ = nullptr;};
    inline const vector<string> & getDispositionReasons() const { DARABONBA_PTR_GET_CONST(dispositionReasons_, vector<string>) };
    inline vector<string> getDispositionReasons() { DARABONBA_PTR_GET(dispositionReasons_, vector<string>) };
    inline ListCasesRequest& setDispositionReasons(const vector<string> & dispositionReasons) { DARABONBA_PTR_SET_VALUE(dispositionReasons_, dispositionReasons) };
    inline ListCasesRequest& setDispositionReasons(vector<string> && dispositionReasons) { DARABONBA_PTR_SET_RVALUE(dispositionReasons_, dispositionReasons) };


    // draftVersion Field Functions 
    bool hasDraftVersion() const { return this->draftVersion_ != nullptr;};
    void deleteDraftVersion() { this->draftVersion_ = nullptr;};
    inline bool getDraftVersion() const { DARABONBA_PTR_GET_DEFAULT(draftVersion_, false) };
    inline ListCasesRequest& setDraftVersion(bool draftVersion) { DARABONBA_PTR_SET_VALUE(draftVersion_, draftVersion) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListCasesRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCasesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // labelSearch Field Functions 
    bool hasLabelSearch() const { return this->labelSearch_ != nullptr;};
    void deleteLabelSearch() { this->labelSearch_ = nullptr;};
    inline const map<string, string> & getLabelSearch() const { DARABONBA_PTR_GET_CONST(labelSearch_, map<string, string>) };
    inline map<string, string> getLabelSearch() { DARABONBA_PTR_GET(labelSearch_, map<string, string>) };
    inline ListCasesRequest& setLabelSearch(const map<string, string> & labelSearch) { DARABONBA_PTR_SET_VALUE(labelSearch_, labelSearch) };
    inline ListCasesRequest& setLabelSearch(map<string, string> && labelSearch) { DARABONBA_PTR_SET_RVALUE(labelSearch_, labelSearch) };


    // maxRingingDuration Field Functions 
    bool hasMaxRingingDuration() const { return this->maxRingingDuration_ != nullptr;};
    void deleteMaxRingingDuration() { this->maxRingingDuration_ = nullptr;};
    inline int64_t getMaxRingingDuration() const { DARABONBA_PTR_GET_DEFAULT(maxRingingDuration_, 0L) };
    inline ListCasesRequest& setMaxRingingDuration(int64_t maxRingingDuration) { DARABONBA_PTR_SET_VALUE(maxRingingDuration_, maxRingingDuration) };


    // maxTalkTime Field Functions 
    bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
    void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
    inline int64_t getMaxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
    inline ListCasesRequest& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


    // maxTalkTurns Field Functions 
    bool hasMaxTalkTurns() const { return this->maxTalkTurns_ != nullptr;};
    void deleteMaxTalkTurns() { this->maxTalkTurns_ = nullptr;};
    inline int64_t getMaxTalkTurns() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTurns_, 0L) };
    inline ListCasesRequest& setMaxTalkTurns(int64_t maxTalkTurns) { DARABONBA_PTR_SET_VALUE(maxTalkTurns_, maxTalkTurns) };


    // minRingingDuration Field Functions 
    bool hasMinRingingDuration() const { return this->minRingingDuration_ != nullptr;};
    void deleteMinRingingDuration() { this->minRingingDuration_ = nullptr;};
    inline int64_t getMinRingingDuration() const { DARABONBA_PTR_GET_DEFAULT(minRingingDuration_, 0L) };
    inline ListCasesRequest& setMinRingingDuration(int64_t minRingingDuration) { DARABONBA_PTR_SET_VALUE(minRingingDuration_, minRingingDuration) };


    // minTalkTime Field Functions 
    bool hasMinTalkTime() const { return this->minTalkTime_ != nullptr;};
    void deleteMinTalkTime() { this->minTalkTime_ = nullptr;};
    inline int64_t getMinTalkTime() const { DARABONBA_PTR_GET_DEFAULT(minTalkTime_, 0L) };
    inline ListCasesRequest& setMinTalkTime(int64_t minTalkTime) { DARABONBA_PTR_SET_VALUE(minTalkTime_, minTalkTime) };


    // minTalkTurns Field Functions 
    bool hasMinTalkTurns() const { return this->minTalkTurns_ != nullptr;};
    void deleteMinTalkTurns() { this->minTalkTurns_ = nullptr;};
    inline int64_t getMinTalkTurns() const { DARABONBA_PTR_GET_DEFAULT(minTalkTurns_, 0L) };
    inline ListCasesRequest& setMinTalkTurns(int64_t minTalkTurns) { DARABONBA_PTR_SET_VALUE(minTalkTurns_, minTalkTurns) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCasesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCasesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline ListCasesRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListCasesRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListCasesRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // states Field Functions 
    bool hasStates() const { return this->states_ != nullptr;};
    void deleteStates() { this->states_ = nullptr;};
    inline const vector<string> & getStates() const { DARABONBA_PTR_GET_CONST(states_, vector<string>) };
    inline vector<string> getStates() { DARABONBA_PTR_GET(states_, vector<string>) };
    inline ListCasesRequest& setStates(const vector<string> & states) { DARABONBA_PTR_SET_VALUE(states_, states) };
    inline ListCasesRequest& setStates(vector<string> && states) { DARABONBA_PTR_SET_RVALUE(states_, states) };


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
    shared_ptr<vector<string>> caseIds_ {};
    // The list of disposition codes.
    shared_ptr<vector<string>> dispositionCodes_ {};
    // The list of disposition reasons.
    shared_ptr<vector<string>> dispositionReasons_ {};
    // Specifies whether the version is a draft version.
    shared_ptr<bool> draftVersion_ {};
    // The end time.
    shared_ptr<int64_t> endTime_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The label search condition.
    shared_ptr<map<string, string>> labelSearch_ {};
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
    shared_ptr<vector<string>> states_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
