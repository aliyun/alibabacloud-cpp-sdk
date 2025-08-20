// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATERESPONSEBODYPERMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATERESPONSEBODYPERMISSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateResponseBodyPermissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateResponseBodyPermissions& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(ShareOption, shareOption_);
      DARABONBA_PTR_TO_JSON(ShareSource, shareSource_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(VersionOption, versionOption_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateResponseBodyPermissions& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(ShareOption, shareOption_);
      DARABONBA_PTR_FROM_JSON(ShareSource, shareSource_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(VersionOption, versionOption_);
    };
    GetTemplateResponseBodyPermissions() = default ;
    GetTemplateResponseBodyPermissions(const GetTemplateResponseBodyPermissions &) = default ;
    GetTemplateResponseBodyPermissions(GetTemplateResponseBodyPermissions &&) = default ;
    GetTemplateResponseBodyPermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateResponseBodyPermissions() = default ;
    GetTemplateResponseBodyPermissions& operator=(const GetTemplateResponseBodyPermissions &) = default ;
    GetTemplateResponseBodyPermissions& operator=(GetTemplateResponseBodyPermissions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->shareOption_ != nullptr && this->shareSource_ != nullptr && this->templateVersion_ != nullptr && this->versionOption_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetTemplateResponseBodyPermissions& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // shareOption Field Functions 
    bool hasShareOption() const { return this->shareOption_ != nullptr;};
    void deleteShareOption() { this->shareOption_ = nullptr;};
    inline string shareOption() const { DARABONBA_PTR_GET_DEFAULT(shareOption_, "") };
    inline GetTemplateResponseBodyPermissions& setShareOption(string shareOption) { DARABONBA_PTR_SET_VALUE(shareOption_, shareOption) };


    // shareSource Field Functions 
    bool hasShareSource() const { return this->shareSource_ != nullptr;};
    void deleteShareSource() { this->shareSource_ = nullptr;};
    inline string shareSource() const { DARABONBA_PTR_GET_DEFAULT(shareSource_, "") };
    inline GetTemplateResponseBodyPermissions& setShareSource(string shareSource) { DARABONBA_PTR_SET_VALUE(shareSource_, shareSource) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline GetTemplateResponseBodyPermissions& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // versionOption Field Functions 
    bool hasVersionOption() const { return this->versionOption_ != nullptr;};
    void deleteVersionOption() { this->versionOption_ = nullptr;};
    inline string versionOption() const { DARABONBA_PTR_GET_DEFAULT(versionOption_, "") };
    inline GetTemplateResponseBodyPermissions& setVersionOption(string versionOption) { DARABONBA_PTR_SET_VALUE(versionOption_, versionOption) };


  protected:
    // The ID of the Alibaba Cloud account with which the template is shared.
    std::shared_ptr<string> accountId_ = nullptr;
    // The sharing option.
    // 
    // The value ShareToAccounts indicates that the template is shared with one or more Alibaba Cloud accounts.
    std::shared_ptr<string> shareOption_ = nullptr;
    // The service that is used for resource sharing. Valid values:
    // 
    // - ROS: Resources are shared from ROS by using the ROS console or calling the ROS API.
    // - ResourceDirectory: Resources are shared with accounts in a resource directory from Resource Management by using the resource sharing feature.
    // > -  The number of accounts with which resources are shared from ROS is independent of the number of accounts with which resources are shared from the resource directory.
    // > -  The shared resources from ROS cannot override or overwrite the shared resources from the resource directory.
    // > -  The shared resources from the resource directory can overwrite the shared resources from ROS.
    std::shared_ptr<string> shareSource_ = nullptr;
    // The version of the shared template. This parameter is returned only if you set ShareOption to ShareToAccounts and set VersionOption to Specified or Current.
    // 
    // Valid values: v1 to v100.
    std::shared_ptr<string> templateVersion_ = nullptr;
    // The version option for the shared template. This parameter is returned only if you set ShareOption to ShareToAccounts.
    // 
    // Valid values:
    // 
    // *   AllVersions: All template versions are shared.
    // *   Latest: Only the latest template version is shared. When the version of the template is updated, Resource Orchestration Service (ROS) updates the shared version to the latest version.
    // *   Current: Only the latest template version is shared. When the version of the template is updated, ROS does not update the shared version.
    // *   Specified: Only the specified template version is shared.
    std::shared_ptr<string> versionOption_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
