// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class ListCallDetailRecordsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallDetailRecordsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_TO_JSON(AccessChannelType, accessChannelType_);
      DARABONBA_PTR_TO_JSON(Callee, callee_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(DispositionCodes, dispositionCodesShrink_);
      DARABONBA_PTR_TO_JSON(DispositionReasons, dispositionReasonsShrink_);
      DARABONBA_PTR_TO_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IssueResolved, issueResolved_);
      DARABONBA_PTR_TO_JSON(MaxTalkTurns, maxTalkTurns_);
      DARABONBA_PTR_TO_JSON(MinTalkTurns, minTalkTurns_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(SessionIds, sessionIdsShrink_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallDetailRecordsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_FROM_JSON(AccessChannelType, accessChannelType_);
      DARABONBA_PTR_FROM_JSON(Callee, callee_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(DispositionCodes, dispositionCodesShrink_);
      DARABONBA_PTR_FROM_JSON(DispositionReasons, dispositionReasonsShrink_);
      DARABONBA_PTR_FROM_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IssueResolved, issueResolved_);
      DARABONBA_PTR_FROM_JSON(MaxTalkTurns, maxTalkTurns_);
      DARABONBA_PTR_FROM_JSON(MinTalkTurns, minTalkTurns_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(SessionIds, sessionIdsShrink_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListCallDetailRecordsShrinkRequest() = default ;
    ListCallDetailRecordsShrinkRequest(const ListCallDetailRecordsShrinkRequest &) = default ;
    ListCallDetailRecordsShrinkRequest(ListCallDetailRecordsShrinkRequest &&) = default ;
    ListCallDetailRecordsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallDetailRecordsShrinkRequest() = default ;
    ListCallDetailRecordsShrinkRequest& operator=(const ListCallDetailRecordsShrinkRequest &) = default ;
    ListCallDetailRecordsShrinkRequest& operator=(ListCallDetailRecordsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessChannelId_ == nullptr
        && this->accessChannelType_ == nullptr && this->callee_ == nullptr && this->caller_ == nullptr && this->dispositionCodesShrink_ == nullptr && this->dispositionReasonsShrink_ == nullptr
        && this->draftVersion_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->issueResolved_ == nullptr && this->maxTalkTurns_ == nullptr
        && this->minTalkTurns_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->scriptId_ == nullptr && this->sessionIdsShrink_ == nullptr
        && this->startTime_ == nullptr; };
    // accessChannelId Field Functions 
    bool hasAccessChannelId() const { return this->accessChannelId_ != nullptr;};
    void deleteAccessChannelId() { this->accessChannelId_ = nullptr;};
    inline string getAccessChannelId() const { DARABONBA_PTR_GET_DEFAULT(accessChannelId_, "") };
    inline ListCallDetailRecordsShrinkRequest& setAccessChannelId(string accessChannelId) { DARABONBA_PTR_SET_VALUE(accessChannelId_, accessChannelId) };


    // accessChannelType Field Functions 
    bool hasAccessChannelType() const { return this->accessChannelType_ != nullptr;};
    void deleteAccessChannelType() { this->accessChannelType_ = nullptr;};
    inline string getAccessChannelType() const { DARABONBA_PTR_GET_DEFAULT(accessChannelType_, "") };
    inline ListCallDetailRecordsShrinkRequest& setAccessChannelType(string accessChannelType) { DARABONBA_PTR_SET_VALUE(accessChannelType_, accessChannelType) };


    // callee Field Functions 
    bool hasCallee() const { return this->callee_ != nullptr;};
    void deleteCallee() { this->callee_ = nullptr;};
    inline string getCallee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
    inline ListCallDetailRecordsShrinkRequest& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline ListCallDetailRecordsShrinkRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // dispositionCodesShrink Field Functions 
    bool hasDispositionCodesShrink() const { return this->dispositionCodesShrink_ != nullptr;};
    void deleteDispositionCodesShrink() { this->dispositionCodesShrink_ = nullptr;};
    inline string getDispositionCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(dispositionCodesShrink_, "") };
    inline ListCallDetailRecordsShrinkRequest& setDispositionCodesShrink(string dispositionCodesShrink) { DARABONBA_PTR_SET_VALUE(dispositionCodesShrink_, dispositionCodesShrink) };


    // dispositionReasonsShrink Field Functions 
    bool hasDispositionReasonsShrink() const { return this->dispositionReasonsShrink_ != nullptr;};
    void deleteDispositionReasonsShrink() { this->dispositionReasonsShrink_ = nullptr;};
    inline string getDispositionReasonsShrink() const { DARABONBA_PTR_GET_DEFAULT(dispositionReasonsShrink_, "") };
    inline ListCallDetailRecordsShrinkRequest& setDispositionReasonsShrink(string dispositionReasonsShrink) { DARABONBA_PTR_SET_VALUE(dispositionReasonsShrink_, dispositionReasonsShrink) };


    // draftVersion Field Functions 
    bool hasDraftVersion() const { return this->draftVersion_ != nullptr;};
    void deleteDraftVersion() { this->draftVersion_ = nullptr;};
    inline bool getDraftVersion() const { DARABONBA_PTR_GET_DEFAULT(draftVersion_, false) };
    inline ListCallDetailRecordsShrinkRequest& setDraftVersion(bool draftVersion) { DARABONBA_PTR_SET_VALUE(draftVersion_, draftVersion) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListCallDetailRecordsShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCallDetailRecordsShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // issueResolved Field Functions 
    bool hasIssueResolved() const { return this->issueResolved_ != nullptr;};
    void deleteIssueResolved() { this->issueResolved_ = nullptr;};
    inline bool getIssueResolved() const { DARABONBA_PTR_GET_DEFAULT(issueResolved_, false) };
    inline ListCallDetailRecordsShrinkRequest& setIssueResolved(bool issueResolved) { DARABONBA_PTR_SET_VALUE(issueResolved_, issueResolved) };


    // maxTalkTurns Field Functions 
    bool hasMaxTalkTurns() const { return this->maxTalkTurns_ != nullptr;};
    void deleteMaxTalkTurns() { this->maxTalkTurns_ = nullptr;};
    inline int32_t getMaxTalkTurns() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTurns_, 0) };
    inline ListCallDetailRecordsShrinkRequest& setMaxTalkTurns(int32_t maxTalkTurns) { DARABONBA_PTR_SET_VALUE(maxTalkTurns_, maxTalkTurns) };


    // minTalkTurns Field Functions 
    bool hasMinTalkTurns() const { return this->minTalkTurns_ != nullptr;};
    void deleteMinTalkTurns() { this->minTalkTurns_ = nullptr;};
    inline int32_t getMinTalkTurns() const { DARABONBA_PTR_GET_DEFAULT(minTalkTurns_, 0) };
    inline ListCallDetailRecordsShrinkRequest& setMinTalkTurns(int32_t minTalkTurns) { DARABONBA_PTR_SET_VALUE(minTalkTurns_, minTalkTurns) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCallDetailRecordsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCallDetailRecordsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListCallDetailRecordsShrinkRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // sessionIdsShrink Field Functions 
    bool hasSessionIdsShrink() const { return this->sessionIdsShrink_ != nullptr;};
    void deleteSessionIdsShrink() { this->sessionIdsShrink_ = nullptr;};
    inline string getSessionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(sessionIdsShrink_, "") };
    inline ListCallDetailRecordsShrinkRequest& setSessionIdsShrink(string sessionIdsShrink) { DARABONBA_PTR_SET_VALUE(sessionIdsShrink_, sessionIdsShrink) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListCallDetailRecordsShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> accessChannelId_ {};
    shared_ptr<string> accessChannelType_ {};
    shared_ptr<string> callee_ {};
    shared_ptr<string> caller_ {};
    shared_ptr<string> dispositionCodesShrink_ {};
    shared_ptr<string> dispositionReasonsShrink_ {};
    shared_ptr<bool> draftVersion_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> issueResolved_ {};
    shared_ptr<int32_t> maxTalkTurns_ {};
    shared_ptr<int32_t> minTalkTurns_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> scriptId_ {};
    shared_ptr<string> sessionIdsShrink_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
