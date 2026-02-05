// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCRIPTRECORDINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCRIPTRECORDINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListScriptRecordingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScriptRecordingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScriptRecordings, scriptRecordings_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListScriptRecordingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScriptRecordings, scriptRecordings_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListScriptRecordingResponseBody() = default ;
    ListScriptRecordingResponseBody(const ListScriptRecordingResponseBody &) = default ;
    ListScriptRecordingResponseBody(ListScriptRecordingResponseBody &&) = default ;
    ListScriptRecordingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScriptRecordingResponseBody() = default ;
    ListScriptRecordingResponseBody& operator=(const ListScriptRecordingResponseBody &) = default ;
    ListScriptRecordingResponseBody& operator=(ListScriptRecordingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScriptRecordings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScriptRecordings& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(GmtUpload, gmtUpload_);
        DARABONBA_PTR_TO_JSON(InnerId, innerId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RecordingContent, recordingContent_);
        DARABONBA_PTR_TO_JSON(RecordingDuration, recordingDuration_);
        DARABONBA_PTR_TO_JSON(RecordingName, recordingName_);
        DARABONBA_PTR_TO_JSON(RefId, refId_);
        DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(StateExtend, stateExtend_);
        DARABONBA_PTR_TO_JSON(StorageUuid, storageUuid_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, ScriptRecordings& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(GmtUpload, gmtUpload_);
        DARABONBA_PTR_FROM_JSON(InnerId, innerId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RecordingContent, recordingContent_);
        DARABONBA_PTR_FROM_JSON(RecordingDuration, recordingDuration_);
        DARABONBA_PTR_FROM_JSON(RecordingName, recordingName_);
        DARABONBA_PTR_FROM_JSON(RefId, refId_);
        DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(StateExtend, stateExtend_);
        DARABONBA_PTR_FROM_JSON(StorageUuid, storageUuid_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      ScriptRecordings() = default ;
      ScriptRecordings(const ScriptRecordings &) = default ;
      ScriptRecordings(ScriptRecordings &&) = default ;
      ScriptRecordings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScriptRecordings() = default ;
      ScriptRecordings& operator=(const ScriptRecordings &) = default ;
      ScriptRecordings& operator=(ScriptRecordings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->gmtUpload_ == nullptr && this->innerId_ == nullptr && this->instanceId_ == nullptr && this->recordingContent_ == nullptr
        && this->recordingDuration_ == nullptr && this->recordingName_ == nullptr && this->refId_ == nullptr && this->scriptId_ == nullptr && this->state_ == nullptr
        && this->stateExtend_ == nullptr && this->storageUuid_ == nullptr && this->uuid_ == nullptr; };
      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ScriptRecordings& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline ScriptRecordings& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // gmtUpload Field Functions 
      bool hasGmtUpload() const { return this->gmtUpload_ != nullptr;};
      void deleteGmtUpload() { this->gmtUpload_ = nullptr;};
      inline int64_t getGmtUpload() const { DARABONBA_PTR_GET_DEFAULT(gmtUpload_, 0L) };
      inline ScriptRecordings& setGmtUpload(int64_t gmtUpload) { DARABONBA_PTR_SET_VALUE(gmtUpload_, gmtUpload) };


      // innerId Field Functions 
      bool hasInnerId() const { return this->innerId_ != nullptr;};
      void deleteInnerId() { this->innerId_ = nullptr;};
      inline string getInnerId() const { DARABONBA_PTR_GET_DEFAULT(innerId_, "") };
      inline ScriptRecordings& setInnerId(string innerId) { DARABONBA_PTR_SET_VALUE(innerId_, innerId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ScriptRecordings& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // recordingContent Field Functions 
      bool hasRecordingContent() const { return this->recordingContent_ != nullptr;};
      void deleteRecordingContent() { this->recordingContent_ = nullptr;};
      inline string getRecordingContent() const { DARABONBA_PTR_GET_DEFAULT(recordingContent_, "") };
      inline ScriptRecordings& setRecordingContent(string recordingContent) { DARABONBA_PTR_SET_VALUE(recordingContent_, recordingContent) };


      // recordingDuration Field Functions 
      bool hasRecordingDuration() const { return this->recordingDuration_ != nullptr;};
      void deleteRecordingDuration() { this->recordingDuration_ = nullptr;};
      inline int32_t getRecordingDuration() const { DARABONBA_PTR_GET_DEFAULT(recordingDuration_, 0) };
      inline ScriptRecordings& setRecordingDuration(int32_t recordingDuration) { DARABONBA_PTR_SET_VALUE(recordingDuration_, recordingDuration) };


      // recordingName Field Functions 
      bool hasRecordingName() const { return this->recordingName_ != nullptr;};
      void deleteRecordingName() { this->recordingName_ = nullptr;};
      inline string getRecordingName() const { DARABONBA_PTR_GET_DEFAULT(recordingName_, "") };
      inline ScriptRecordings& setRecordingName(string recordingName) { DARABONBA_PTR_SET_VALUE(recordingName_, recordingName) };


      // refId Field Functions 
      bool hasRefId() const { return this->refId_ != nullptr;};
      void deleteRefId() { this->refId_ = nullptr;};
      inline string getRefId() const { DARABONBA_PTR_GET_DEFAULT(refId_, "") };
      inline ScriptRecordings& setRefId(string refId) { DARABONBA_PTR_SET_VALUE(refId_, refId) };


      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
      inline ScriptRecordings& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline int32_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
      inline ScriptRecordings& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // stateExtend Field Functions 
      bool hasStateExtend() const { return this->stateExtend_ != nullptr;};
      void deleteStateExtend() { this->stateExtend_ = nullptr;};
      inline string getStateExtend() const { DARABONBA_PTR_GET_DEFAULT(stateExtend_, "") };
      inline ScriptRecordings& setStateExtend(string stateExtend) { DARABONBA_PTR_SET_VALUE(stateExtend_, stateExtend) };


      // storageUuid Field Functions 
      bool hasStorageUuid() const { return this->storageUuid_ != nullptr;};
      void deleteStorageUuid() { this->storageUuid_ = nullptr;};
      inline string getStorageUuid() const { DARABONBA_PTR_GET_DEFAULT(storageUuid_, "") };
      inline ScriptRecordings& setStorageUuid(string storageUuid) { DARABONBA_PTR_SET_VALUE(storageUuid_, storageUuid) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline ScriptRecordings& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<int64_t> gmtModified_ {};
      shared_ptr<int64_t> gmtUpload_ {};
      shared_ptr<string> innerId_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> recordingContent_ {};
      shared_ptr<int32_t> recordingDuration_ {};
      shared_ptr<string> recordingName_ {};
      shared_ptr<string> refId_ {};
      shared_ptr<string> scriptId_ {};
      shared_ptr<int32_t> state_ {};
      shared_ptr<string> stateExtend_ {};
      shared_ptr<string> storageUuid_ {};
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->scriptRecordings_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListScriptRecordingResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListScriptRecordingResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListScriptRecordingResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListScriptRecordingResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListScriptRecordingResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScriptRecordingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scriptRecordings Field Functions 
    bool hasScriptRecordings() const { return this->scriptRecordings_ != nullptr;};
    void deleteScriptRecordings() { this->scriptRecordings_ = nullptr;};
    inline const vector<ListScriptRecordingResponseBody::ScriptRecordings> & getScriptRecordings() const { DARABONBA_PTR_GET_CONST(scriptRecordings_, vector<ListScriptRecordingResponseBody::ScriptRecordings>) };
    inline vector<ListScriptRecordingResponseBody::ScriptRecordings> getScriptRecordings() { DARABONBA_PTR_GET(scriptRecordings_, vector<ListScriptRecordingResponseBody::ScriptRecordings>) };
    inline ListScriptRecordingResponseBody& setScriptRecordings(const vector<ListScriptRecordingResponseBody::ScriptRecordings> & scriptRecordings) { DARABONBA_PTR_SET_VALUE(scriptRecordings_, scriptRecordings) };
    inline ListScriptRecordingResponseBody& setScriptRecordings(vector<ListScriptRecordingResponseBody::ScriptRecordings> && scriptRecordings) { DARABONBA_PTR_SET_RVALUE(scriptRecordings_, scriptRecordings) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListScriptRecordingResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListScriptRecordingResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListScriptRecordingResponseBody::ScriptRecordings>> scriptRecordings_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
