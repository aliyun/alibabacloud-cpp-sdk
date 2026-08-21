// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPALIDINGCHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPALIDINGCHATREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateGroupAliDingChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupAliDingChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(chatId, chatId_);
      DARABONBA_PTR_TO_JSON(chatName, chatName_);
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
    friend void from_json(const Darabonba::Json& j, CreateGroupAliDingChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(chatId, chatId_);
      DARABONBA_PTR_FROM_JSON(chatName, chatName_);
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
    CreateGroupAliDingChatRequest() = default ;
    CreateGroupAliDingChatRequest(const CreateGroupAliDingChatRequest &) = default ;
    CreateGroupAliDingChatRequest(CreateGroupAliDingChatRequest &&) = default ;
    CreateGroupAliDingChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupAliDingChatRequest() = default ;
    CreateGroupAliDingChatRequest& operator=(const CreateGroupAliDingChatRequest &) = default ;
    CreateGroupAliDingChatRequest& operator=(CreateGroupAliDingChatRequest &&) = default ;
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
      // The cron expression for timed scheduling.
      shared_ptr<string> cron_ {};
      // Specifies whether the throttling rule is enabled. Valid values:
      // - true: Enabled.
      // - false: Disabled.
      shared_ptr<bool> enabled_ {};
      // The preset mode. You can ignore this parameter.
      shared_ptr<string> preset_ {};
    };

    virtual bool empty() const override { return this->chatId_ == nullptr
        && this->chatName_ == nullptr && this->description_ == nullptr && this->directoryId_ == nullptr && this->groupId_ == nullptr && this->historyStartTime_ == nullptr
        && this->notes_ == nullptr && this->operatingObjectName_ == nullptr && this->sourceTags_ == nullptr && this->tenantId_ == nullptr && this->updateFrequency_ == nullptr; };
    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline CreateGroupAliDingChatRequest& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // chatName Field Functions 
    bool hasChatName() const { return this->chatName_ != nullptr;};
    void deleteChatName() { this->chatName_ = nullptr;};
    inline string getChatName() const { DARABONBA_PTR_GET_DEFAULT(chatName_, "") };
    inline CreateGroupAliDingChatRequest& setChatName(string chatName) { DARABONBA_PTR_SET_VALUE(chatName_, chatName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateGroupAliDingChatRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreateGroupAliDingChatRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateGroupAliDingChatRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // historyStartTime Field Functions 
    bool hasHistoryStartTime() const { return this->historyStartTime_ != nullptr;};
    void deleteHistoryStartTime() { this->historyStartTime_ = nullptr;};
    inline string getHistoryStartTime() const { DARABONBA_PTR_GET_DEFAULT(historyStartTime_, "") };
    inline CreateGroupAliDingChatRequest& setHistoryStartTime(string historyStartTime) { DARABONBA_PTR_SET_VALUE(historyStartTime_, historyStartTime) };


    // notes Field Functions 
    bool hasNotes() const { return this->notes_ != nullptr;};
    void deleteNotes() { this->notes_ = nullptr;};
    inline string getNotes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
    inline CreateGroupAliDingChatRequest& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline CreateGroupAliDingChatRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // sourceTags Field Functions 
    bool hasSourceTags() const { return this->sourceTags_ != nullptr;};
    void deleteSourceTags() { this->sourceTags_ = nullptr;};
    inline string getSourceTags() const { DARABONBA_PTR_GET_DEFAULT(sourceTags_, "") };
    inline CreateGroupAliDingChatRequest& setSourceTags(string sourceTags) { DARABONBA_PTR_SET_VALUE(sourceTags_, sourceTags) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateGroupAliDingChatRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // updateFrequency Field Functions 
    bool hasUpdateFrequency() const { return this->updateFrequency_ != nullptr;};
    void deleteUpdateFrequency() { this->updateFrequency_ = nullptr;};
    inline const CreateGroupAliDingChatRequest::UpdateFrequency & getUpdateFrequency() const { DARABONBA_PTR_GET_CONST(updateFrequency_, CreateGroupAliDingChatRequest::UpdateFrequency) };
    inline CreateGroupAliDingChatRequest::UpdateFrequency getUpdateFrequency() { DARABONBA_PTR_GET(updateFrequency_, CreateGroupAliDingChatRequest::UpdateFrequency) };
    inline CreateGroupAliDingChatRequest& setUpdateFrequency(const CreateGroupAliDingChatRequest::UpdateFrequency & updateFrequency) { DARABONBA_PTR_SET_VALUE(updateFrequency_, updateFrequency) };
    inline CreateGroupAliDingChatRequest& setUpdateFrequency(CreateGroupAliDingChatRequest::UpdateFrequency && updateFrequency) { DARABONBA_PTR_SET_RVALUE(updateFrequency_, updateFrequency) };


  protected:
    // The session ID, typically used for JSSDK.
    // 
    // This parameter is required.
    shared_ptr<string> chatId_ {};
    // The group chat name.
    shared_ptr<string> chatName_ {};
    // The description of the AI assistant.
    shared_ptr<string> description_ {};
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // The group ID.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The start time for collecting chat history.
    // 
    // This parameter is required.
    shared_ptr<string> historyStartTime_ {};
    // The meeting notes content (optional). The notes are used for auxiliary analysis.
    shared_ptr<string> notes_ {};
    // The name of the digital employee (operating object name, optional).
    shared_ptr<string> operatingObjectName_ {};
    // The resource tags (optional, a JSON string list, such as ["tagA","tagB"]).
    shared_ptr<string> sourceTags_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
    // The feature update frequency.
    shared_ptr<CreateGroupAliDingChatRequest::UpdateFrequency> updateFrequency_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
