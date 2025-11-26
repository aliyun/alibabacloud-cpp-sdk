// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCRIPTRECORDINGRESPONSEBODYSCRIPTRECORDINGS_HPP_
#define ALIBABACLOUD_MODELS_LISTSCRIPTRECORDINGRESPONSEBODYSCRIPTRECORDINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListScriptRecordingResponseBodyScriptRecordings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScriptRecordingResponseBodyScriptRecordings& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListScriptRecordingResponseBodyScriptRecordings& obj) { 
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
    ListScriptRecordingResponseBodyScriptRecordings() = default ;
    ListScriptRecordingResponseBodyScriptRecordings(const ListScriptRecordingResponseBodyScriptRecordings &) = default ;
    ListScriptRecordingResponseBodyScriptRecordings(ListScriptRecordingResponseBodyScriptRecordings &&) = default ;
    ListScriptRecordingResponseBodyScriptRecordings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScriptRecordingResponseBodyScriptRecordings() = default ;
    ListScriptRecordingResponseBodyScriptRecordings& operator=(const ListScriptRecordingResponseBodyScriptRecordings &) = default ;
    ListScriptRecordingResponseBodyScriptRecordings& operator=(ListScriptRecordingResponseBodyScriptRecordings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->gmtUpload_ == nullptr && return this->innerId_ == nullptr && return this->instanceId_ == nullptr && return this->recordingContent_ == nullptr
        && return this->recordingDuration_ == nullptr && return this->recordingName_ == nullptr && return this->refId_ == nullptr && return this->scriptId_ == nullptr && return this->state_ == nullptr
        && return this->stateExtend_ == nullptr && return this->storageUuid_ == nullptr && return this->uuid_ == nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListScriptRecordingResponseBodyScriptRecordings& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ListScriptRecordingResponseBodyScriptRecordings& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // gmtUpload Field Functions 
    bool hasGmtUpload() const { return this->gmtUpload_ != nullptr;};
    void deleteGmtUpload() { this->gmtUpload_ = nullptr;};
    inline int64_t gmtUpload() const { DARABONBA_PTR_GET_DEFAULT(gmtUpload_, 0L) };
    inline ListScriptRecordingResponseBodyScriptRecordings& setGmtUpload(int64_t gmtUpload) { DARABONBA_PTR_SET_VALUE(gmtUpload_, gmtUpload) };


    // innerId Field Functions 
    bool hasInnerId() const { return this->innerId_ != nullptr;};
    void deleteInnerId() { this->innerId_ = nullptr;};
    inline string innerId() const { DARABONBA_PTR_GET_DEFAULT(innerId_, "") };
    inline ListScriptRecordingResponseBodyScriptRecordings& setInnerId(string innerId) { DARABONBA_PTR_SET_VALUE(innerId_, innerId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListScriptRecordingResponseBodyScriptRecordings& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // recordingContent Field Functions 
    bool hasRecordingContent() const { return this->recordingContent_ != nullptr;};
    void deleteRecordingContent() { this->recordingContent_ = nullptr;};
    inline string recordingContent() const { DARABONBA_PTR_GET_DEFAULT(recordingContent_, "") };
    inline ListScriptRecordingResponseBodyScriptRecordings& setRecordingContent(string recordingContent) { DARABONBA_PTR_SET_VALUE(recordingContent_, recordingContent) };


    // recordingDuration Field Functions 
    bool hasRecordingDuration() const { return this->recordingDuration_ != nullptr;};
    void deleteRecordingDuration() { this->recordingDuration_ = nullptr;};
    inline int32_t recordingDuration() const { DARABONBA_PTR_GET_DEFAULT(recordingDuration_, 0) };
    inline ListScriptRecordingResponseBodyScriptRecordings& setRecordingDuration(int32_t recordingDuration) { DARABONBA_PTR_SET_VALUE(recordingDuration_, recordingDuration) };


    // recordingName Field Functions 
    bool hasRecordingName() const { return this->recordingName_ != nullptr;};
    void deleteRecordingName() { this->recordingName_ = nullptr;};
    inline string recordingName() const { DARABONBA_PTR_GET_DEFAULT(recordingName_, "") };
    inline ListScriptRecordingResponseBodyScriptRecordings& setRecordingName(string recordingName) { DARABONBA_PTR_SET_VALUE(recordingName_, recordingName) };


    // refId Field Functions 
    bool hasRefId() const { return this->refId_ != nullptr;};
    void deleteRefId() { this->refId_ = nullptr;};
    inline string refId() const { DARABONBA_PTR_GET_DEFAULT(refId_, "") };
    inline ListScriptRecordingResponseBodyScriptRecordings& setRefId(string refId) { DARABONBA_PTR_SET_VALUE(refId_, refId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListScriptRecordingResponseBodyScriptRecordings& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t state() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline ListScriptRecordingResponseBodyScriptRecordings& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // stateExtend Field Functions 
    bool hasStateExtend() const { return this->stateExtend_ != nullptr;};
    void deleteStateExtend() { this->stateExtend_ = nullptr;};
    inline string stateExtend() const { DARABONBA_PTR_GET_DEFAULT(stateExtend_, "") };
    inline ListScriptRecordingResponseBodyScriptRecordings& setStateExtend(string stateExtend) { DARABONBA_PTR_SET_VALUE(stateExtend_, stateExtend) };


    // storageUuid Field Functions 
    bool hasStorageUuid() const { return this->storageUuid_ != nullptr;};
    void deleteStorageUuid() { this->storageUuid_ = nullptr;};
    inline string storageUuid() const { DARABONBA_PTR_GET_DEFAULT(storageUuid_, "") };
    inline ListScriptRecordingResponseBodyScriptRecordings& setStorageUuid(string storageUuid) { DARABONBA_PTR_SET_VALUE(storageUuid_, storageUuid) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListScriptRecordingResponseBodyScriptRecordings& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> gmtUpload_ = nullptr;
    std::shared_ptr<string> innerId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> recordingContent_ = nullptr;
    std::shared_ptr<int32_t> recordingDuration_ = nullptr;
    std::shared_ptr<string> recordingName_ = nullptr;
    std::shared_ptr<string> refId_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<int32_t> state_ = nullptr;
    std::shared_ptr<string> stateExtend_ = nullptr;
    std::shared_ptr<string> storageUuid_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
