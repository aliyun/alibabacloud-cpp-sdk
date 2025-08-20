// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETTEMPLATEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETTEMPLATEPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class SetTemplatePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetTemplatePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(ShareOption, shareOption_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(VersionOption, versionOption_);
    };
    friend void from_json(const Darabonba::Json& j, SetTemplatePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(ShareOption, shareOption_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(VersionOption, versionOption_);
    };
    SetTemplatePermissionRequest() = default ;
    SetTemplatePermissionRequest(const SetTemplatePermissionRequest &) = default ;
    SetTemplatePermissionRequest(SetTemplatePermissionRequest &&) = default ;
    SetTemplatePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetTemplatePermissionRequest() = default ;
    SetTemplatePermissionRequest& operator=(const SetTemplatePermissionRequest &) = default ;
    SetTemplatePermissionRequest& operator=(SetTemplatePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountIds_ != nullptr
        && this->shareOption_ != nullptr && this->templateId_ != nullptr && this->templateVersion_ != nullptr && this->versionOption_ != nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<string> & accountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
    inline vector<string> accountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
    inline SetTemplatePermissionRequest& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline SetTemplatePermissionRequest& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // shareOption Field Functions 
    bool hasShareOption() const { return this->shareOption_ != nullptr;};
    void deleteShareOption() { this->shareOption_ = nullptr;};
    inline string shareOption() const { DARABONBA_PTR_GET_DEFAULT(shareOption_, "") };
    inline SetTemplatePermissionRequest& setShareOption(string shareOption) { DARABONBA_PTR_SET_VALUE(shareOption_, shareOption) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SetTemplatePermissionRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline SetTemplatePermissionRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // versionOption Field Functions 
    bool hasVersionOption() const { return this->versionOption_ != nullptr;};
    void deleteVersionOption() { this->versionOption_ = nullptr;};
    inline string versionOption() const { DARABONBA_PTR_GET_DEFAULT(versionOption_, "") };
    inline SetTemplatePermissionRequest& setVersionOption(string versionOption) { DARABONBA_PTR_SET_VALUE(versionOption_, versionOption) };


  protected:
    // The Alibaba Cloud accounts with or from which you want to share or unshare the template.\\
    // Valid values of N: 1, 2, 3, 4, and 5.
    // 
    // > - This parameter cannot be set to the ID of the Alibaba Cloud account that owns the template, or the RAM users of this Alibaba Cloud account.
    // > - When ShareOption is set to CancelSharing, you can unshare the template from all the specified Alibaba Cloud accounts by using an asterisk (\\*).
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> accountIds_ = nullptr;
    // The sharing option.
    // 
    // Valid values:
    // 
    // *   ShareToAccounts: shares the template with other Alibaba Cloud accounts.
    // *   CancelSharing: unshares the template.
    // 
    // This parameter is required.
    std::shared_ptr<string> shareOption_ = nullptr;
    // The ID of the template.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    // The version of the shared template. This parameter takes effect only if you set ShareOption to ShareToAccounts and set VersionOption to Specified.
    // 
    // Valid values: v1 to v100.
    std::shared_ptr<string> templateVersion_ = nullptr;
    // The version option for the shared template. This parameter takes effect only if you set ShareOption to ShareToAccounts.
    // 
    // Valid values:
    // 
    // *   AllVersions (default): shares all versions of the template.
    // *   Latest: shares only the latest version of template. When the version of the template is updated, ROS updates the shared version to the latest version.
    // *   Current: shares only the current version of the template. When the version of the template is updated, ROS does not update the shared version.
    // *   Specified: shares only the specified version of the template.
    std::shared_ptr<string> versionOption_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
