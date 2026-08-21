// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERSONALALIDINGCHATSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERSONALALIDINGCHATSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreatePersonalAliDingChatShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePersonalAliDingChatShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(chatId, chatId_);
      DARABONBA_PTR_TO_JSON(chatName, chatName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(historyStartTime, historyStartTime_);
      DARABONBA_PTR_TO_JSON(notes, notes_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(sourceTags, sourceTags_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(updateFrequency, updateFrequencyShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePersonalAliDingChatShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(chatId, chatId_);
      DARABONBA_PTR_FROM_JSON(chatName, chatName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(historyStartTime, historyStartTime_);
      DARABONBA_PTR_FROM_JSON(notes, notes_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(sourceTags, sourceTags_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(updateFrequency, updateFrequencyShrink_);
    };
    CreatePersonalAliDingChatShrinkRequest() = default ;
    CreatePersonalAliDingChatShrinkRequest(const CreatePersonalAliDingChatShrinkRequest &) = default ;
    CreatePersonalAliDingChatShrinkRequest(CreatePersonalAliDingChatShrinkRequest &&) = default ;
    CreatePersonalAliDingChatShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePersonalAliDingChatShrinkRequest() = default ;
    CreatePersonalAliDingChatShrinkRequest& operator=(const CreatePersonalAliDingChatShrinkRequest &) = default ;
    CreatePersonalAliDingChatShrinkRequest& operator=(CreatePersonalAliDingChatShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatId_ == nullptr
        && this->chatName_ == nullptr && this->description_ == nullptr && this->directoryId_ == nullptr && this->historyStartTime_ == nullptr && this->notes_ == nullptr
        && this->operatingObjectName_ == nullptr && this->sourceTags_ == nullptr && this->tenantId_ == nullptr && this->updateFrequencyShrink_ == nullptr; };
    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline CreatePersonalAliDingChatShrinkRequest& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // chatName Field Functions 
    bool hasChatName() const { return this->chatName_ != nullptr;};
    void deleteChatName() { this->chatName_ = nullptr;};
    inline string getChatName() const { DARABONBA_PTR_GET_DEFAULT(chatName_, "") };
    inline CreatePersonalAliDingChatShrinkRequest& setChatName(string chatName) { DARABONBA_PTR_SET_VALUE(chatName_, chatName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePersonalAliDingChatShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreatePersonalAliDingChatShrinkRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // historyStartTime Field Functions 
    bool hasHistoryStartTime() const { return this->historyStartTime_ != nullptr;};
    void deleteHistoryStartTime() { this->historyStartTime_ = nullptr;};
    inline string getHistoryStartTime() const { DARABONBA_PTR_GET_DEFAULT(historyStartTime_, "") };
    inline CreatePersonalAliDingChatShrinkRequest& setHistoryStartTime(string historyStartTime) { DARABONBA_PTR_SET_VALUE(historyStartTime_, historyStartTime) };


    // notes Field Functions 
    bool hasNotes() const { return this->notes_ != nullptr;};
    void deleteNotes() { this->notes_ = nullptr;};
    inline string getNotes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
    inline CreatePersonalAliDingChatShrinkRequest& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline CreatePersonalAliDingChatShrinkRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // sourceTags Field Functions 
    bool hasSourceTags() const { return this->sourceTags_ != nullptr;};
    void deleteSourceTags() { this->sourceTags_ = nullptr;};
    inline string getSourceTags() const { DARABONBA_PTR_GET_DEFAULT(sourceTags_, "") };
    inline CreatePersonalAliDingChatShrinkRequest& setSourceTags(string sourceTags) { DARABONBA_PTR_SET_VALUE(sourceTags_, sourceTags) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreatePersonalAliDingChatShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // updateFrequencyShrink Field Functions 
    bool hasUpdateFrequencyShrink() const { return this->updateFrequencyShrink_ != nullptr;};
    void deleteUpdateFrequencyShrink() { this->updateFrequencyShrink_ = nullptr;};
    inline string getUpdateFrequencyShrink() const { DARABONBA_PTR_GET_DEFAULT(updateFrequencyShrink_, "") };
    inline CreatePersonalAliDingChatShrinkRequest& setUpdateFrequencyShrink(string updateFrequencyShrink) { DARABONBA_PTR_SET_VALUE(updateFrequencyShrink_, updateFrequencyShrink) };


  protected:
    // The DingTalk group chat session ID.
    // 
    // This parameter is required.
    shared_ptr<string> chatId_ {};
    // The group chat name.
    shared_ptr<string> chatName_ {};
    // The pipeline description.
    shared_ptr<string> description_ {};
    // The folder ID.
    shared_ptr<string> directoryId_ {};
    // The start time for collecting chat history.
    // 
    // This parameter is required.
    shared_ptr<string> historyStartTime_ {};
    // The meeting notes content (optional). This participates in auxiliary analysis.
    shared_ptr<string> notes_ {};
    // The digital employee name (operating object name, optional).
    shared_ptr<string> operatingObjectName_ {};
    // The resource tags (optional, a JSON string list such as ["tagA","tagB"]).
    shared_ptr<string> sourceTags_ {};
    // The tenant ID. This is a common parameter. The winnexo-cli passes this value explicitly by using --tenant-id.
    shared_ptr<string> tenantId_ {};
    // The feature update frequency.
    shared_ptr<string> updateFrequencyShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
