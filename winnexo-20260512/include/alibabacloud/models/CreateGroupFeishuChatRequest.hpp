// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPFEISHUCHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPFEISHUCHATREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateGroupFeishuChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupFeishuChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(chatId, chatId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(historyStartTime, historyStartTime_);
      DARABONBA_PTR_TO_JSON(notes, notes_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(sourceTags, sourceTags_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(updateFrequency, updateFrequency_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupFeishuChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(chatId, chatId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(historyStartTime, historyStartTime_);
      DARABONBA_PTR_FROM_JSON(notes, notes_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(sourceTags, sourceTags_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(updateFrequency, updateFrequency_);
    };
    CreateGroupFeishuChatRequest() = default ;
    CreateGroupFeishuChatRequest(const CreateGroupFeishuChatRequest &) = default ;
    CreateGroupFeishuChatRequest(CreateGroupFeishuChatRequest &&) = default ;
    CreateGroupFeishuChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupFeishuChatRequest() = default ;
    CreateGroupFeishuChatRequest& operator=(const CreateGroupFeishuChatRequest &) = default ;
    CreateGroupFeishuChatRequest& operator=(CreateGroupFeishuChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateFrequency : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateFrequency& obj) { 
        DARABONBA_PTR_TO_JSON(cron, cron_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(preset, preset_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateFrequency& obj) { 
        DARABONBA_PTR_FROM_JSON(cron, cron_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(preset, preset_);
      };
      UpdateFrequency() = default ;
      UpdateFrequency(const UpdateFrequency &) = default ;
      UpdateFrequency(UpdateFrequency &&) = default ;
      UpdateFrequency(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateFrequency() = default ;
      UpdateFrequency& operator=(const UpdateFrequency &) = default ;
      UpdateFrequency& operator=(UpdateFrequency &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cron_ == nullptr
        && this->enabled_ == nullptr && this->preset_ == nullptr; };
      // cron Field Functions 
      bool hasCron() const { return this->cron_ != nullptr;};
      void deleteCron() { this->cron_ = nullptr;};
      inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
      inline UpdateFrequency& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline UpdateFrequency& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // preset Field Functions 
      bool hasPreset() const { return this->preset_ != nullptr;};
      void deletePreset() { this->preset_ = nullptr;};
      inline string getPreset() const { DARABONBA_PTR_GET_DEFAULT(preset_, "") };
      inline UpdateFrequency& setPreset(string preset) { DARABONBA_PTR_SET_VALUE(preset_, preset) };


    protected:
      // The cron expression for the timed scheduling task.
      shared_ptr<string> cron_ {};
      // **Enable/Disable**
      shared_ptr<bool> enabled_ {};
      // The synchronization preset: hourly or daily_2am.
      shared_ptr<string> preset_ {};
    };

    virtual bool empty() const override { return this->chatId_ == nullptr
        && this->description_ == nullptr && this->directoryId_ == nullptr && this->groupId_ == nullptr && this->historyStartTime_ == nullptr && this->notes_ == nullptr
        && this->operatingObjectName_ == nullptr && this->sourceTags_ == nullptr && this->tenantId_ == nullptr && this->updateFrequency_ == nullptr; };
    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline CreateGroupFeishuChatRequest& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateGroupFeishuChatRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreateGroupFeishuChatRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateGroupFeishuChatRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // historyStartTime Field Functions 
    bool hasHistoryStartTime() const { return this->historyStartTime_ != nullptr;};
    void deleteHistoryStartTime() { this->historyStartTime_ = nullptr;};
    inline string getHistoryStartTime() const { DARABONBA_PTR_GET_DEFAULT(historyStartTime_, "") };
    inline CreateGroupFeishuChatRequest& setHistoryStartTime(string historyStartTime) { DARABONBA_PTR_SET_VALUE(historyStartTime_, historyStartTime) };


    // notes Field Functions 
    bool hasNotes() const { return this->notes_ != nullptr;};
    void deleteNotes() { this->notes_ = nullptr;};
    inline string getNotes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
    inline CreateGroupFeishuChatRequest& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline CreateGroupFeishuChatRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // sourceTags Field Functions 
    bool hasSourceTags() const { return this->sourceTags_ != nullptr;};
    void deleteSourceTags() { this->sourceTags_ = nullptr;};
    inline string getSourceTags() const { DARABONBA_PTR_GET_DEFAULT(sourceTags_, "") };
    inline CreateGroupFeishuChatRequest& setSourceTags(string sourceTags) { DARABONBA_PTR_SET_VALUE(sourceTags_, sourceTags) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateGroupFeishuChatRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // updateFrequency Field Functions 
    bool hasUpdateFrequency() const { return this->updateFrequency_ != nullptr;};
    void deleteUpdateFrequency() { this->updateFrequency_ = nullptr;};
    inline const CreateGroupFeishuChatRequest::UpdateFrequency & getUpdateFrequency() const { DARABONBA_PTR_GET_CONST(updateFrequency_, CreateGroupFeishuChatRequest::UpdateFrequency) };
    inline CreateGroupFeishuChatRequest::UpdateFrequency getUpdateFrequency() { DARABONBA_PTR_GET(updateFrequency_, CreateGroupFeishuChatRequest::UpdateFrequency) };
    inline CreateGroupFeishuChatRequest& setUpdateFrequency(const CreateGroupFeishuChatRequest::UpdateFrequency & updateFrequency) { DARABONBA_PTR_SET_VALUE(updateFrequency_, updateFrequency) };
    inline CreateGroupFeishuChatRequest& setUpdateFrequency(CreateGroupFeishuChatRequest::UpdateFrequency && updateFrequency) { DARABONBA_PTR_SET_RVALUE(updateFrequency_, updateFrequency) };


  protected:
    // The DingTalk group chat session ID.
    // 
    // This parameter is required.
    shared_ptr<string> chatId_ {};
    // The pipeline description.
    shared_ptr<string> description_ {};
    // The folder ID.
    shared_ptr<string> directoryId_ {};
    // The project group ID.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The start time for historical messages. The value must be in the YYYY-MM-DD or YYYY-MM-DD HH:MM:SS format. If this parameter is not specified, all visible historical messages are retrieved.
    shared_ptr<string> historyStartTime_ {};
    // The meeting notes content (optional). The notes are used for auxiliary analysis.
    shared_ptr<string> notes_ {};
    // The digital employee name (operating object name, optional).
    shared_ptr<string> operatingObjectName_ {};
    // The source tags.
    shared_ptr<string> sourceTags_ {};
    // The tenant ID. This is a common parameter. You can pass it explicitly by using --tenant-id in winnexo-cli.
    shared_ptr<string> tenantId_ {};
    // The feature update frequency.
    shared_ptr<CreateGroupFeishuChatRequest::UpdateFrequency> updateFrequency_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
