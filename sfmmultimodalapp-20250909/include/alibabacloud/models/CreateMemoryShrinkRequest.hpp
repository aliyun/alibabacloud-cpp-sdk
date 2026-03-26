// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMORYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMORYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class CreateMemoryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemoryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AutoUpdate, autoUpdate_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_TO_JSON(MessagesJson, messagesJson_);
      DARABONBA_PTR_TO_JSON(MetaData, metaDataShrink_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(UserDefinedId, userDefinedId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemoryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AutoUpdate, autoUpdate_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_FROM_JSON(MessagesJson, messagesJson_);
      DARABONBA_PTR_FROM_JSON(MetaData, metaDataShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(UserDefinedId, userDefinedId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateMemoryShrinkRequest() = default ;
    CreateMemoryShrinkRequest(const CreateMemoryShrinkRequest &) = default ;
    CreateMemoryShrinkRequest(CreateMemoryShrinkRequest &&) = default ;
    CreateMemoryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemoryShrinkRequest() = default ;
    CreateMemoryShrinkRequest& operator=(const CreateMemoryShrinkRequest &) = default ;
    CreateMemoryShrinkRequest& operator=(CreateMemoryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->autoUpdate_ == nullptr && this->content_ == nullptr && this->expirationTime_ == nullptr && this->messagesJson_ == nullptr && this->metaDataShrink_ == nullptr
        && this->projectId_ == nullptr && this->prompt_ == nullptr && this->userDefinedId_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateMemoryShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // autoUpdate Field Functions 
    bool hasAutoUpdate() const { return this->autoUpdate_ != nullptr;};
    void deleteAutoUpdate() { this->autoUpdate_ = nullptr;};
    inline bool getAutoUpdate() const { DARABONBA_PTR_GET_DEFAULT(autoUpdate_, false) };
    inline CreateMemoryShrinkRequest& setAutoUpdate(bool autoUpdate) { DARABONBA_PTR_SET_VALUE(autoUpdate_, autoUpdate) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateMemoryShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline int32_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0) };
    inline CreateMemoryShrinkRequest& setExpirationTime(int32_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // messagesJson Field Functions 
    bool hasMessagesJson() const { return this->messagesJson_ != nullptr;};
    void deleteMessagesJson() { this->messagesJson_ = nullptr;};
    inline string getMessagesJson() const { DARABONBA_PTR_GET_DEFAULT(messagesJson_, "") };
    inline CreateMemoryShrinkRequest& setMessagesJson(string messagesJson) { DARABONBA_PTR_SET_VALUE(messagesJson_, messagesJson) };


    // metaDataShrink Field Functions 
    bool hasMetaDataShrink() const { return this->metaDataShrink_ != nullptr;};
    void deleteMetaDataShrink() { this->metaDataShrink_ = nullptr;};
    inline string getMetaDataShrink() const { DARABONBA_PTR_GET_DEFAULT(metaDataShrink_, "") };
    inline CreateMemoryShrinkRequest& setMetaDataShrink(string metaDataShrink) { DARABONBA_PTR_SET_VALUE(metaDataShrink_, metaDataShrink) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateMemoryShrinkRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline CreateMemoryShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // userDefinedId Field Functions 
    bool hasUserDefinedId() const { return this->userDefinedId_ != nullptr;};
    void deleteUserDefinedId() { this->userDefinedId_ = nullptr;};
    inline string getUserDefinedId() const { DARABONBA_PTR_GET_DEFAULT(userDefinedId_, "") };
    inline CreateMemoryShrinkRequest& setUserDefinedId(string userDefinedId) { DARABONBA_PTR_SET_VALUE(userDefinedId_, userDefinedId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateMemoryShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<bool> autoUpdate_ {};
    shared_ptr<string> content_ {};
    shared_ptr<int32_t> expirationTime_ {};
    shared_ptr<string> messagesJson_ {};
    shared_ptr<string> metaDataShrink_ {};
    shared_ptr<string> projectId_ {};
    shared_ptr<string> prompt_ {};
    // This parameter is required.
    shared_ptr<string> userDefinedId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
