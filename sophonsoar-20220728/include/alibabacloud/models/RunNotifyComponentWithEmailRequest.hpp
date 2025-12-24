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
        && return this->assetId_ == nullptr && return this->componentName_ == nullptr && return this->content_ == nullptr && return this->lang_ == nullptr && return this->nodeName_ == nullptr
        && return this->playbookUuid_ == nullptr && return this->receivers_ == nullptr && return this->roleFor_ == nullptr && return this->roleType_ == nullptr && return this->subject_ == nullptr; };
    // actionName Field Functions 
    bool hasActionName() const { return this->actionName_ != nullptr;};
    void deleteActionName() { this->actionName_ = nullptr;};
    inline string actionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
    inline RunNotifyComponentWithEmailRequest& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


    // assetId Field Functions 
    bool hasAssetId() const { return this->assetId_ != nullptr;};
    void deleteAssetId() { this->assetId_ = nullptr;};
    inline string assetId() const { DARABONBA_PTR_GET_DEFAULT(assetId_, "") };
    inline RunNotifyComponentWithEmailRequest& setAssetId(string assetId) { DARABONBA_PTR_SET_VALUE(assetId_, assetId) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline RunNotifyComponentWithEmailRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunNotifyComponentWithEmailRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline RunNotifyComponentWithEmailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline RunNotifyComponentWithEmailRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline RunNotifyComponentWithEmailRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // receivers Field Functions 
    bool hasReceivers() const { return this->receivers_ != nullptr;};
    void deleteReceivers() { this->receivers_ = nullptr;};
    inline const vector<string> & receivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<string>) };
    inline vector<string> receivers() { DARABONBA_PTR_GET(receivers_, vector<string>) };
    inline RunNotifyComponentWithEmailRequest& setReceivers(const vector<string> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
    inline RunNotifyComponentWithEmailRequest& setReceivers(vector<string> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline RunNotifyComponentWithEmailRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline RunNotifyComponentWithEmailRequest& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline RunNotifyComponentWithEmailRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


  protected:
    // The action name of the component.
    // 
    // This parameter is required.
    std::shared_ptr<string> actionName_ = nullptr;
    // The resource instance ID of the email sender.
    // 
    // >  You can call the [DescribeComponentAssets](~~DescribeComponentAssets~~) operation to query the ID.
    std::shared_ptr<string> assetId_ = nullptr;
    // The name of component in the playbook.
    // 
    // This parameter is required.
    std::shared_ptr<string> componentName_ = nullptr;
    // The body of the email.
    // 
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // The language of the content within the request and the response. Valid value:
    // 
    // *   **zh** (default): Chinese.
    // *   **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
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
    // The email addresses.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> receivers_ = nullptr;
    // The ID of the user who switches from the current view to the destination view by using the management account.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    // The type of the view. Valid values:
    // 
    // *   0: the view of the current Alibaba Cloud account.
    // *   1: the view of all accounts for the enterprise.
    std::shared_ptr<string> roleType_ = nullptr;
    // The subject of the email.
    // 
    // This parameter is required.
    std::shared_ptr<string> subject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
