// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNNOTIFYCOMPONENTWITHWEBHOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNNOTIFYCOMPONENTWITHWEBHOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class RunNotifyComponentWithWebhookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunNotifyComponentWithWebhookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionName, actionName_);
      DARABONBA_PTR_TO_JSON(AssetId, assetId_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MsgType, msgType_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(Secret, secret_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, RunNotifyComponentWithWebhookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionName, actionName_);
      DARABONBA_PTR_FROM_JSON(AssetId, assetId_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MsgType, msgType_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(Secret, secret_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    RunNotifyComponentWithWebhookRequest() = default ;
    RunNotifyComponentWithWebhookRequest(const RunNotifyComponentWithWebhookRequest &) = default ;
    RunNotifyComponentWithWebhookRequest(RunNotifyComponentWithWebhookRequest &&) = default ;
    RunNotifyComponentWithWebhookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunNotifyComponentWithWebhookRequest() = default ;
    RunNotifyComponentWithWebhookRequest& operator=(const RunNotifyComponentWithWebhookRequest &) = default ;
    RunNotifyComponentWithWebhookRequest& operator=(RunNotifyComponentWithWebhookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionName_ == nullptr
        && return this->assetId_ == nullptr && return this->componentName_ == nullptr && return this->content_ == nullptr && return this->lang_ == nullptr && return this->msgType_ == nullptr
        && return this->nodeName_ == nullptr && return this->playbookUuid_ == nullptr && return this->roleFor_ == nullptr && return this->roleType_ == nullptr && return this->secret_ == nullptr
        && return this->webhook_ == nullptr; };
    // actionName Field Functions 
    bool hasActionName() const { return this->actionName_ != nullptr;};
    void deleteActionName() { this->actionName_ = nullptr;};
    inline string actionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
    inline RunNotifyComponentWithWebhookRequest& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


    // assetId Field Functions 
    bool hasAssetId() const { return this->assetId_ != nullptr;};
    void deleteAssetId() { this->assetId_ = nullptr;};
    inline string assetId() const { DARABONBA_PTR_GET_DEFAULT(assetId_, "") };
    inline RunNotifyComponentWithWebhookRequest& setAssetId(string assetId) { DARABONBA_PTR_SET_VALUE(assetId_, assetId) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline RunNotifyComponentWithWebhookRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunNotifyComponentWithWebhookRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline RunNotifyComponentWithWebhookRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // msgType Field Functions 
    bool hasMsgType() const { return this->msgType_ != nullptr;};
    void deleteMsgType() { this->msgType_ = nullptr;};
    inline string msgType() const { DARABONBA_PTR_GET_DEFAULT(msgType_, "") };
    inline RunNotifyComponentWithWebhookRequest& setMsgType(string msgType) { DARABONBA_PTR_SET_VALUE(msgType_, msgType) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline RunNotifyComponentWithWebhookRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline RunNotifyComponentWithWebhookRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline RunNotifyComponentWithWebhookRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline RunNotifyComponentWithWebhookRequest& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // secret Field Functions 
    bool hasSecret() const { return this->secret_ != nullptr;};
    void deleteSecret() { this->secret_ = nullptr;};
    inline string secret() const { DARABONBA_PTR_GET_DEFAULT(secret_, "") };
    inline RunNotifyComponentWithWebhookRequest& setSecret(string secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline RunNotifyComponentWithWebhookRequest& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    // The name of the action in the playbook.
    // 
    // This parameter is required.
    std::shared_ptr<string> actionName_ = nullptr;
    // The ID of the resource. This parameter is deprecated.
    std::shared_ptr<string> assetId_ = nullptr;
    // The name of the component in the playbook.
    // 
    // This parameter is required.
    std::shared_ptr<string> componentName_ = nullptr;
    // The message body sent by the DingTalk group chatbot webhook.
    // 
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // The language of the content within the request and the response. Valid values:
    // 
    // *   **zh** (default): Chinese.
    // *   **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // The type of the webhook message. Valid values:
    // *   text.
    // *   markdown.
    // *   actionCard.
    // 
    // This parameter is required.
    std::shared_ptr<string> msgType_ = nullptr;
    // The name of the node in the playbook.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The UUID of the playbook.
    // 
    // >  You can call the [DescribePlaybooks](~~DescribePlaybooks~~) operation to query the UUIDs of playbooks.
    // 
    // This parameter is required.
    std::shared_ptr<string> playbookUuid_ = nullptr;
    // The ID of the user who switches from the current view to the destination view by using the management account.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    // The type of the view. Valid values:
    // 
    // *   0 (default): the view of the current Alibaba Cloud account.
    // *   1: the view of all accounts for the enterprise.
    std::shared_ptr<string> roleType_ = nullptr;
    // The message key of the DingTalk chatbot webhook. This parameter is deprecated.
    std::shared_ptr<string> secret_ = nullptr;
    // The IDs of chatbots that are configured in the message center. Only DingTalk chatbots are supported.
    // 
    // >  You can call the [ListEncryptWebhooks](~~ListEncryptWebhooks~~) operation to query the chatbot IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
