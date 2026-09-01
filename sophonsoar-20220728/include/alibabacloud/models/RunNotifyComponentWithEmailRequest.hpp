// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNNOTIFYCOMPONENTWITHEMAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNNOTIFYCOMPONENTWITHEMAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class RunNotifyComponentWithEmailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunNotifyComponentWithEmailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionName, actionName_);
      DARABONBA_PTR_TO_JSON(AssetId, assetId_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(Receivers, receivers_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(Subject, subject_);
    };
    friend void from_json(const Darabonba::Json& j, RunNotifyComponentWithEmailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionName, actionName_);
      DARABONBA_PTR_FROM_JSON(AssetId, assetId_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(Receivers, receivers_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(Subject, subject_);
    };
    RunNotifyComponentWithEmailRequest() = default ;
    RunNotifyComponentWithEmailRequest(const RunNotifyComponentWithEmailRequest &) = default ;
    RunNotifyComponentWithEmailRequest(RunNotifyComponentWithEmailRequest &&) = default ;
    RunNotifyComponentWithEmailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunNotifyComponentWithEmailRequest() = default ;
    RunNotifyComponentWithEmailRequest& operator=(const RunNotifyComponentWithEmailRequest &) = default ;
    RunNotifyComponentWithEmailRequest& operator=(RunNotifyComponentWithEmailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionName_ == nullptr
        && this->assetId_ == nullptr && this->componentName_ == nullptr && this->content_ == nullptr && this->lang_ == nullptr && this->nodeName_ == nullptr
        && this->playbookUuid_ == nullptr && this->receivers_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr && this->subject_ == nullptr; };
    // actionName Field Functions 
    bool hasActionName() const { return this->actionName_ != nullptr;};
    void deleteActionName() { this->actionName_ = nullptr;};
    inline string getActionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
    inline RunNotifyComponentWithEmailRequest& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


    // assetId Field Functions 
    bool hasAssetId() const { return this->assetId_ != nullptr;};
    void deleteAssetId() { this->assetId_ = nullptr;};
    inline string getAssetId() const { DARABONBA_PTR_GET_DEFAULT(assetId_, "") };
    inline RunNotifyComponentWithEmailRequest& setAssetId(string assetId) { DARABONBA_PTR_SET_VALUE(assetId_, assetId) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline RunNotifyComponentWithEmailRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunNotifyComponentWithEmailRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline RunNotifyComponentWithEmailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline RunNotifyComponentWithEmailRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline RunNotifyComponentWithEmailRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // receivers Field Functions 
    bool hasReceivers() const { return this->receivers_ != nullptr;};
    void deleteReceivers() { this->receivers_ = nullptr;};
    inline const vector<string> & getReceivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<string>) };
    inline vector<string> getReceivers() { DARABONBA_PTR_GET(receivers_, vector<string>) };
    inline RunNotifyComponentWithEmailRequest& setReceivers(const vector<string> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
    inline RunNotifyComponentWithEmailRequest& setReceivers(vector<string> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline RunNotifyComponentWithEmailRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline RunNotifyComponentWithEmailRequest& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline RunNotifyComponentWithEmailRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


  protected:
    // The name of the component action.
    // 
    // This parameter is required.
    shared_ptr<string> actionName_ {};
    // The ID of the asset that is used to send the email.
    // 
    // > Call the [DescribeComponentAssets](~~DescribeComponentAssets~~) operation to obtain this parameter.
    shared_ptr<string> assetId_ {};
    // The name of the playbook component.
    // 
    // This parameter is required.
    shared_ptr<string> componentName_ {};
    // The body of the email.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    // The language of the request and response. Valid values:
    // 
    // - **zh** (default): Chinese
    // 
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The name of the playbook node.
    // 
    // This parameter is required.
    shared_ptr<string> nodeName_ {};
    // The UUID of the playbook.
    // 
    // > Call the [DescribePlaybooks](~~DescribePlaybooks~~) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> playbookUuid_ {};
    // A list of email addresses.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> receivers_ {};
    // The UID of the member whose data an administrator wants to access.
    shared_ptr<int64_t> roleFor_ {};
    // The view type. Valid values:
    // 
    // - 0: The view of the current Alibaba Cloud account.
    // 
    // - 1: The view of all accounts that belong to the enterprise.
    shared_ptr<string> roleType_ {};
    // The title of the email.
    // 
    // This parameter is required.
    shared_ptr<string> subject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
