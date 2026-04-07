// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class ListCallDetailRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallDetailRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_TO_JSON(AccessChannelType, accessChannelType_);
      DARABONBA_PTR_TO_JSON(Callee, callee_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(DispositionCodes, dispositionCodes_);
      DARABONBA_PTR_TO_JSON(DispositionReasons, dispositionReasons_);
      DARABONBA_PTR_TO_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IssueResolved, issueResolved_);
      DARABONBA_PTR_TO_JSON(MaxTalkTurns, maxTalkTurns_);
      DARABONBA_PTR_TO_JSON(MinTalkTurns, minTalkTurns_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(SessionIds, sessionIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallDetailRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_FROM_JSON(AccessChannelType, accessChannelType_);
      DARABONBA_PTR_FROM_JSON(Callee, callee_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(DispositionCodes, dispositionCodes_);
      DARABONBA_PTR_FROM_JSON(DispositionReasons, dispositionReasons_);
      DARABONBA_PTR_FROM_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IssueResolved, issueResolved_);
      DARABONBA_PTR_FROM_JSON(MaxTalkTurns, maxTalkTurns_);
      DARABONBA_PTR_FROM_JSON(MinTalkTurns, minTalkTurns_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(SessionIds, sessionIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListCallDetailRecordsRequest() = default ;
    ListCallDetailRecordsRequest(const ListCallDetailRecordsRequest &) = default ;
    ListCallDetailRecordsRequest(ListCallDetailRecordsRequest &&) = default ;
    ListCallDetailRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallDetailRecordsRequest() = default ;
    ListCallDetailRecordsRequest& operator=(const ListCallDetailRecordsRequest &) = default ;
    ListCallDetailRecordsRequest& operator=(ListCallDetailRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessChannelId_ == nullptr
        && this->accessChannelType_ == nullptr && this->callee_ == nullptr && this->caller_ == nullptr && this->dispositionCodes_ == nullptr && this->dispositionReasons_ == nullptr
        && this->draftVersion_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->issueResolved_ == nullptr && this->maxTalkTurns_ == nullptr
        && this->minTalkTurns_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->scriptId_ == nullptr && this->sessionIds_ == nullptr
        && this->startTime_ == nullptr; };
    // accessChannelId Field Functions 
    bool hasAccessChannelId() const { return this->accessChannelId_ != nullptr;};
    void deleteAccessChannelId() { this->accessChannelId_ = nullptr;};
    inline string getAccessChannelId() const { DARABONBA_PTR_GET_DEFAULT(accessChannelId_, "") };
    inline ListCallDetailRecordsRequest& setAccessChannelId(string accessChannelId) { DARABONBA_PTR_SET_VALUE(accessChannelId_, accessChannelId) };


    // accessChannelType Field Functions 
    bool hasAccessChannelType() const { return this->accessChannelType_ != nullptr;};
    void deleteAccessChannelType() { this->accessChannelType_ = nullptr;};
    inline string getAccessChannelType() const { DARABONBA_PTR_GET_DEFAULT(accessChannelType_, "") };
    inline ListCallDetailRecordsRequest& setAccessChannelType(string accessChannelType) { DARABONBA_PTR_SET_VALUE(accessChannelType_, accessChannelType) };


    // callee Field Functions 
    bool hasCallee() const { return this->callee_ != nullptr;};
    void deleteCallee() { this->callee_ = nullptr;};
    inline string getCallee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
    inline ListCallDetailRecordsRequest& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline ListCallDetailRecordsRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // dispositionCodes Field Functions 
    bool hasDispositionCodes() const { return this->dispositionCodes_ != nullptr;};
    void deleteDispositionCodes() { this->dispositionCodes_ = nullptr;};
    inline const vector<string> & getDispositionCodes() const { DARABONBA_PTR_GET_CONST(dispositionCodes_, vector<string>) };
    inline vector<string> getDispositionCodes() { DARABONBA_PTR_GET(dispositionCodes_, vector<string>) };
    inline ListCallDetailRecordsRequest& setDispositionCodes(const vector<string> & dispositionCodes) { DARABONBA_PTR_SET_VALUE(dispositionCodes_, dispositionCodes) };
    inline ListCallDetailRecordsRequest& setDispositionCodes(vector<string> && dispositionCodes) { DARABONBA_PTR_SET_RVALUE(dispositionCodes_, dispositionCodes) };


    // dispositionReasons Field Functions 
    bool hasDispositionReasons() const { return this->dispositionReasons_ != nullptr;};
    void deleteDispositionReasons() { this->dispositionReasons_ = nullptr;};
    inline const vector<string> & getDispositionReasons() const { DARABONBA_PTR_GET_CONST(dispositionReasons_, vector<string>) };
    inline vector<string> getDispositionReasons() { DARABONBA_PTR_GET(dispositionReasons_, vector<string>) };
    inline ListCallDetailRecordsRequest& setDispositionReasons(const vector<string> & dispositionReasons) { DARABONBA_PTR_SET_VALUE(dispositionReasons_, dispositionReasons) };
    inline ListCallDetailRecordsRequest& setDispositionReasons(vector<string> && dispositionReasons) { DARABONBA_PTR_SET_RVALUE(dispositionReasons_, dispositionReasons) };


    // draftVersion Field Functions 
    bool hasDraftVersion() const { return this->draftVersion_ != nullptr;};
    void deleteDraftVersion() { this->draftVersion_ = nullptr;};
    inline bool getDraftVersion() const { DARABONBA_PTR_GET_DEFAULT(draftVersion_, false) };
    inline ListCallDetailRecordsRequest& setDraftVersion(bool draftVersion) { DARABONBA_PTR_SET_VALUE(draftVersion_, draftVersion) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListCallDetailRecordsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCallDetailRecordsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // issueResolved Field Functions 
    bool hasIssueResolved() const { return this->issueResolved_ != nullptr;};
    void deleteIssueResolved() { this->issueResolved_ = nullptr;};
    inline bool getIssueResolved() const { DARABONBA_PTR_GET_DEFAULT(issueResolved_, false) };
    inline ListCallDetailRecordsRequest& setIssueResolved(bool issueResolved) { DARABONBA_PTR_SET_VALUE(issueResolved_, issueResolved) };


    // maxTalkTurns Field Functions 
    bool hasMaxTalkTurns() const { return this->maxTalkTurns_ != nullptr;};
    void deleteMaxTalkTurns() { this->maxTalkTurns_ = nullptr;};
    inline int32_t getMaxTalkTurns() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTurns_, 0) };
    inline ListCallDetailRecordsRequest& setMaxTalkTurns(int32_t maxTalkTurns) { DARABONBA_PTR_SET_VALUE(maxTalkTurns_, maxTalkTurns) };


    // minTalkTurns Field Functions 
    bool hasMinTalkTurns() const { return this->minTalkTurns_ != nullptr;};
    void deleteMinTalkTurns() { this->minTalkTurns_ = nullptr;};
    inline int32_t getMinTalkTurns() const { DARABONBA_PTR_GET_DEFAULT(minTalkTurns_, 0) };
    inline ListCallDetailRecordsRequest& setMinTalkTurns(int32_t minTalkTurns) { DARABONBA_PTR_SET_VALUE(minTalkTurns_, minTalkTurns) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCallDetailRecordsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCallDetailRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListCallDetailRecordsRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // sessionIds Field Functions 
    bool hasSessionIds() const { return this->sessionIds_ != nullptr;};
    void deleteSessionIds() { this->sessionIds_ = nullptr;};
    inline const vector<string> & getSessionIds() const { DARABONBA_PTR_GET_CONST(sessionIds_, vector<string>) };
    inline vector<string> getSessionIds() { DARABONBA_PTR_GET(sessionIds_, vector<string>) };
    inline ListCallDetailRecordsRequest& setSessionIds(const vector<string> & sessionIds) { DARABONBA_PTR_SET_VALUE(sessionIds_, sessionIds) };
    inline ListCallDetailRecordsRequest& setSessionIds(vector<string> && sessionIds) { DARABONBA_PTR_SET_RVALUE(sessionIds_, sessionIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListCallDetailRecordsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> accessChannelId_ {};
    shared_ptr<string> accessChannelType_ {};
    shared_ptr<string> callee_ {};
    shared_ptr<string> caller_ {};
    shared_ptr<vector<string>> dispositionCodes_ {};
    shared_ptr<vector<string>> dispositionReasons_ {};
    shared_ptr<bool> draftVersion_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> issueResolved_ {};
    shared_ptr<int32_t> maxTalkTurns_ {};
    shared_ptr<int32_t> minTalkTurns_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> scriptId_ {};
    shared_ptr<vector<string>> sessionIds_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
