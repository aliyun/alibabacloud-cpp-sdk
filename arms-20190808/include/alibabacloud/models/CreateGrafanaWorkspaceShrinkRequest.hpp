// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGRAFANAWORKSPACESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGRAFANAWORKSPACESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateGrafanaWorkspaceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGrafanaWorkspaceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNumber, accountNumber_);
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(CustomAccountNumber, customAccountNumber_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(GrafanaVersion, grafanaVersion_);
      DARABONBA_PTR_TO_JSON(GrafanaWorkspaceEdition, grafanaWorkspaceEdition_);
      DARABONBA_PTR_TO_JSON(GrafanaWorkspaceName, grafanaWorkspaceName_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGrafanaWorkspaceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNumber, accountNumber_);
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(CustomAccountNumber, customAccountNumber_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(GrafanaVersion, grafanaVersion_);
      DARABONBA_PTR_FROM_JSON(GrafanaWorkspaceEdition, grafanaWorkspaceEdition_);
      DARABONBA_PTR_FROM_JSON(GrafanaWorkspaceName, grafanaWorkspaceName_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    CreateGrafanaWorkspaceShrinkRequest() = default ;
    CreateGrafanaWorkspaceShrinkRequest(const CreateGrafanaWorkspaceShrinkRequest &) = default ;
    CreateGrafanaWorkspaceShrinkRequest(CreateGrafanaWorkspaceShrinkRequest &&) = default ;
    CreateGrafanaWorkspaceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGrafanaWorkspaceShrinkRequest() = default ;
    CreateGrafanaWorkspaceShrinkRequest& operator=(const CreateGrafanaWorkspaceShrinkRequest &) = default ;
    CreateGrafanaWorkspaceShrinkRequest& operator=(CreateGrafanaWorkspaceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountNumber_ != nullptr
        && this->aliyunLang_ != nullptr && this->autoRenew_ != nullptr && this->customAccountNumber_ != nullptr && this->description_ != nullptr && this->duration_ != nullptr
        && this->grafanaVersion_ != nullptr && this->grafanaWorkspaceEdition_ != nullptr && this->grafanaWorkspaceName_ != nullptr && this->password_ != nullptr && this->pricingCycle_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->tagsShrink_ != nullptr; };
    // accountNumber Field Functions 
    bool hasAccountNumber() const { return this->accountNumber_ != nullptr;};
    void deleteAccountNumber() { this->accountNumber_ = nullptr;};
    inline string accountNumber() const { DARABONBA_PTR_GET_DEFAULT(accountNumber_, "") };
    inline CreateGrafanaWorkspaceShrinkRequest& setAccountNumber(string accountNumber) { DARABONBA_PTR_SET_VALUE(accountNumber_, accountNumber) };


    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string aliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline CreateGrafanaWorkspaceShrinkRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline CreateGrafanaWorkspaceShrinkRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // customAccountNumber Field Functions 
    bool hasCustomAccountNumber() const { return this->customAccountNumber_ != nullptr;};
    void deleteCustomAccountNumber() { this->customAccountNumber_ = nullptr;};
    inline string customAccountNumber() const { DARABONBA_PTR_GET_DEFAULT(customAccountNumber_, "") };
    inline CreateGrafanaWorkspaceShrinkRequest& setCustomAccountNumber(string customAccountNumber) { DARABONBA_PTR_SET_VALUE(customAccountNumber_, customAccountNumber) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateGrafanaWorkspaceShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline CreateGrafanaWorkspaceShrinkRequest& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // grafanaVersion Field Functions 
    bool hasGrafanaVersion() const { return this->grafanaVersion_ != nullptr;};
    void deleteGrafanaVersion() { this->grafanaVersion_ = nullptr;};
    inline string grafanaVersion() const { DARABONBA_PTR_GET_DEFAULT(grafanaVersion_, "") };
    inline CreateGrafanaWorkspaceShrinkRequest& setGrafanaVersion(string grafanaVersion) { DARABONBA_PTR_SET_VALUE(grafanaVersion_, grafanaVersion) };


    // grafanaWorkspaceEdition Field Functions 
    bool hasGrafanaWorkspaceEdition() const { return this->grafanaWorkspaceEdition_ != nullptr;};
    void deleteGrafanaWorkspaceEdition() { this->grafanaWorkspaceEdition_ = nullptr;};
    inline string grafanaWorkspaceEdition() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceEdition_, "") };
    inline CreateGrafanaWorkspaceShrinkRequest& setGrafanaWorkspaceEdition(string grafanaWorkspaceEdition) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceEdition_, grafanaWorkspaceEdition) };


    // grafanaWorkspaceName Field Functions 
    bool hasGrafanaWorkspaceName() const { return this->grafanaWorkspaceName_ != nullptr;};
    void deleteGrafanaWorkspaceName() { this->grafanaWorkspaceName_ = nullptr;};
    inline string grafanaWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceName_, "") };
    inline CreateGrafanaWorkspaceShrinkRequest& setGrafanaWorkspaceName(string grafanaWorkspaceName) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceName_, grafanaWorkspaceName) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateGrafanaWorkspaceShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateGrafanaWorkspaceShrinkRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateGrafanaWorkspaceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateGrafanaWorkspaceShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateGrafanaWorkspaceShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    std::shared_ptr<string> accountNumber_ = nullptr;
    // The language. Default value: zh. Valid values:
    // 
    // *   zh
    // *   en
    std::shared_ptr<string> aliyunLang_ = nullptr;
    std::shared_ptr<string> autoRenew_ = nullptr;
    std::shared_ptr<string> customAccountNumber_ = nullptr;
    // The description of the workspace
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> duration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> grafanaVersion_ = nullptr;
    // The edition.
    // 
    // **Valid values:**
    // 
    // *   standard: `Beta Edition or Standard Edition`
    // *   personal_edition: Developer Edition
    // *   experts_edition: Pro Edition
    // *   advanced_edition: Advanced Edition
    // 
    // This parameter is required.
    std::shared_ptr<string> grafanaWorkspaceEdition_ = nullptr;
    // The name of the Grafana workspace.
    // 
    // This parameter is required.
    std::shared_ptr<string> grafanaWorkspaceName_ = nullptr;
    // The password of the workspace. The password must be 8 to 30 characters in length. It must include at least three of the following characters types: uppercase letter, lowercase letter, digit, and special character. Special characters include () \\" ~ ! @ # $ % ^ & \\* - _ + =.
    std::shared_ptr<string> password_ = nullptr;
    // 包年包月的计费周期，取值： Month（默认值）：按月购买。                                 Year：按年购买。
    std::shared_ptr<string> pricingCycle_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The list of tags.
    std::shared_ptr<string> tagsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
