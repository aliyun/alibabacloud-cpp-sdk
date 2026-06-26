// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVERECORDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVERECORDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class SaveRecordingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveRecordingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceOwnerId, instanceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VoiceSliceRecordingList, voiceSliceRecordingList_);
    };
    friend void from_json(const Darabonba::Json& j, SaveRecordingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceOwnerId, instanceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VoiceSliceRecordingList, voiceSliceRecordingList_);
    };
    SaveRecordingRequest() = default ;
    SaveRecordingRequest(const SaveRecordingRequest &) = default ;
    SaveRecordingRequest(SaveRecordingRequest &&) = default ;
    SaveRecordingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveRecordingRequest() = default ;
    SaveRecordingRequest& operator=(const SaveRecordingRequest &) = default ;
    SaveRecordingRequest& operator=(SaveRecordingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversationId_ == nullptr
        && this->duration_ == nullptr && this->fileName_ == nullptr && this->filePath_ == nullptr && this->instanceId_ == nullptr && this->instanceOwnerId_ == nullptr
        && this->startTime_ == nullptr && this->type_ == nullptr && this->voiceSliceRecordingList_ == nullptr; };
    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline SaveRecordingRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline SaveRecordingRequest& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SaveRecordingRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline SaveRecordingRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SaveRecordingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceOwnerId Field Functions 
    bool hasInstanceOwnerId() const { return this->instanceOwnerId_ != nullptr;};
    void deleteInstanceOwnerId() { this->instanceOwnerId_ = nullptr;};
    inline int64_t getInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(instanceOwnerId_, 0L) };
    inline SaveRecordingRequest& setInstanceOwnerId(int64_t instanceOwnerId) { DARABONBA_PTR_SET_VALUE(instanceOwnerId_, instanceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SaveRecordingRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SaveRecordingRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // voiceSliceRecordingList Field Functions 
    bool hasVoiceSliceRecordingList() const { return this->voiceSliceRecordingList_ != nullptr;};
    void deleteVoiceSliceRecordingList() { this->voiceSliceRecordingList_ = nullptr;};
    inline string getVoiceSliceRecordingList() const { DARABONBA_PTR_GET_DEFAULT(voiceSliceRecordingList_, "") };
    inline SaveRecordingRequest& setVoiceSliceRecordingList(string voiceSliceRecordingList) { DARABONBA_PTR_SET_VALUE(voiceSliceRecordingList_, voiceSliceRecordingList) };


  protected:
    // The ID of the conversation.
    // 
    // This parameter is required.
    shared_ptr<string> conversationId_ {};
    // The duration of the recording, in seconds.
    // 
    // This parameter is required.
    shared_ptr<string> duration_ {};
    // The name of the recording file.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The storage path of the recording file, such as a path in Object Storage Service (OSS).
    // 
    // This parameter is required.
    shared_ptr<string> filePath_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the account that owns the instance.
    shared_ptr<int64_t> instanceOwnerId_ {};
    // The Unix timestamp, in milliseconds, when the recording started.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // The type of the recording file. Example: Source.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    shared_ptr<string> voiceSliceRecordingList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
