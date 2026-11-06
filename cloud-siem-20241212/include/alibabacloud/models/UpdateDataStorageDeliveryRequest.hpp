// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASTORAGEDELIVERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASTORAGEDELIVERYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateDataStorageDeliveryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataStorageDeliveryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoIncludeNewAccounts, autoIncludeNewAccounts_);
      DARABONBA_PTR_TO_JSON(ConfigurationVersion, configurationVersion_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogCode, logCode_);
      DARABONBA_PTR_TO_JSON(LogDeliveryStatus, logDeliveryStatus_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(SelectedAccountIds, selectedAccountIds_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_TO_JSON(TargetProject, targetProject_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataStorageDeliveryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoIncludeNewAccounts, autoIncludeNewAccounts_);
      DARABONBA_PTR_FROM_JSON(ConfigurationVersion, configurationVersion_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
      DARABONBA_PTR_FROM_JSON(LogDeliveryStatus, logDeliveryStatus_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(SelectedAccountIds, selectedAccountIds_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_FROM_JSON(TargetProject, targetProject_);
    };
    UpdateDataStorageDeliveryRequest() = default ;
    UpdateDataStorageDeliveryRequest(const UpdateDataStorageDeliveryRequest &) = default ;
    UpdateDataStorageDeliveryRequest(UpdateDataStorageDeliveryRequest &&) = default ;
    UpdateDataStorageDeliveryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataStorageDeliveryRequest() = default ;
    UpdateDataStorageDeliveryRequest& operator=(const UpdateDataStorageDeliveryRequest &) = default ;
    UpdateDataStorageDeliveryRequest& operator=(UpdateDataStorageDeliveryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoIncludeNewAccounts_ == nullptr
        && this->configurationVersion_ == nullptr && this->lang_ == nullptr && this->logCode_ == nullptr && this->logDeliveryStatus_ == nullptr && this->regionId_ == nullptr
        && this->roleFor_ == nullptr && this->selectedAccountIds_ == nullptr && this->subUserId_ == nullptr && this->targetProject_ == nullptr; };
    // autoIncludeNewAccounts Field Functions 
    bool hasAutoIncludeNewAccounts() const { return this->autoIncludeNewAccounts_ != nullptr;};
    void deleteAutoIncludeNewAccounts() { this->autoIncludeNewAccounts_ = nullptr;};
    inline bool getAutoIncludeNewAccounts() const { DARABONBA_PTR_GET_DEFAULT(autoIncludeNewAccounts_, false) };
    inline UpdateDataStorageDeliveryRequest& setAutoIncludeNewAccounts(bool autoIncludeNewAccounts) { DARABONBA_PTR_SET_VALUE(autoIncludeNewAccounts_, autoIncludeNewAccounts) };


    // configurationVersion Field Functions 
    bool hasConfigurationVersion() const { return this->configurationVersion_ != nullptr;};
    void deleteConfigurationVersion() { this->configurationVersion_ = nullptr;};
    inline int64_t getConfigurationVersion() const { DARABONBA_PTR_GET_DEFAULT(configurationVersion_, 0L) };
    inline UpdateDataStorageDeliveryRequest& setConfigurationVersion(int64_t configurationVersion) { DARABONBA_PTR_SET_VALUE(configurationVersion_, configurationVersion) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataStorageDeliveryRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logCode Field Functions 
    bool hasLogCode() const { return this->logCode_ != nullptr;};
    void deleteLogCode() { this->logCode_ = nullptr;};
    inline string getLogCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
    inline UpdateDataStorageDeliveryRequest& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


    // logDeliveryStatus Field Functions 
    bool hasLogDeliveryStatus() const { return this->logDeliveryStatus_ != nullptr;};
    void deleteLogDeliveryStatus() { this->logDeliveryStatus_ = nullptr;};
    inline string getLogDeliveryStatus() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryStatus_, "") };
    inline UpdateDataStorageDeliveryRequest& setLogDeliveryStatus(string logDeliveryStatus) { DARABONBA_PTR_SET_VALUE(logDeliveryStatus_, logDeliveryStatus) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDataStorageDeliveryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateDataStorageDeliveryRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // selectedAccountIds Field Functions 
    bool hasSelectedAccountIds() const { return this->selectedAccountIds_ != nullptr;};
    void deleteSelectedAccountIds() { this->selectedAccountIds_ = nullptr;};
    inline const vector<string> & getSelectedAccountIds() const { DARABONBA_PTR_GET_CONST(selectedAccountIds_, vector<string>) };
    inline vector<string> getSelectedAccountIds() { DARABONBA_PTR_GET(selectedAccountIds_, vector<string>) };
    inline UpdateDataStorageDeliveryRequest& setSelectedAccountIds(const vector<string> & selectedAccountIds) { DARABONBA_PTR_SET_VALUE(selectedAccountIds_, selectedAccountIds) };
    inline UpdateDataStorageDeliveryRequest& setSelectedAccountIds(vector<string> && selectedAccountIds) { DARABONBA_PTR_SET_RVALUE(selectedAccountIds_, selectedAccountIds) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline int64_t getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
    inline UpdateDataStorageDeliveryRequest& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


    // targetProject Field Functions 
    bool hasTargetProject() const { return this->targetProject_ != nullptr;};
    void deleteTargetProject() { this->targetProject_ = nullptr;};
    inline string getTargetProject() const { DARABONBA_PTR_GET_DEFAULT(targetProject_, "") };
    inline UpdateDataStorageDeliveryRequest& setTargetProject(string targetProject) { DARABONBA_PTR_SET_VALUE(targetProject_, targetProject) };


  protected:
    // Specifies whether to automatically add subsequent new and available managed members to the account selection for the log type. A value of true indicates that the feature is enabled. A value of false indicates that the feature is disabled. Disabling the feature does not remove selected members. If this parameter is omitted, the original value is retained. You must also specify LogCode, ConfigurationVersion, and TargetProject. You can update this parameter together with SelectedAccountIds. You cannot specify LogDeliveryStatus or the member SubUserId at the same time. The actual delivery is also controlled by the global switch for multi-account delivery and the delivery switch for the log type.
    shared_ptr<bool> autoIncludeNewAccounts_ {};
    // The version of the delivery settings on which the current modification is based. Call GetDataStorage first and pass the original value of Data.DeliverySettings.ConfigurationVersion. Example 1 only shows the format and cannot be used as a fixed version. This parameter is required when you modify the global switch, account selection, auto-inclusion settings, or specified member delivery. If the version is missing or has changed, the OperationDenied.CentralizedDeliveryConfigChanged error is returned. In this case, query the version again before you submit the request.
    shared_ptr<int64_t> configurationVersion_ {};
    // The language of the response message. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    // This parameter is required. If this parameter is not specified, the API returns a 400 error.
    shared_ptr<string> lang_ {};
    // The log code.
    // 
    // This parameter is required.
    shared_ptr<string> logCode_ {};
    // The log delivery status. Valid values:
    // - enable: Enables delivery.
    // - disable: Disables delivery.
    shared_ptr<string> logDeliveryStatus_ {};
    // The region where the data management center for threat analysis is located. You must select the region of the management center based on the region where your assets are located. Valid values:
    // - cn-hangzhou: The assets are located in the Chinese mainland.
    // - ap-southeast-1: The assets are located outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the user whose perspective the administrator switches to.
    shared_ptr<int64_t> roleFor_ {};
    // The complete list of selected accounts for the log type. Each element is a decimal UID string. The list must include Data.DeliverySettings.DaAccountId (the current account) and can contain up to 10,000 items. A new member must be in the Accounts list returned by GetDataStorage and have Authorized set to true. If only the current account is retained, specify the UID of the current account. Do not use an empty string or an empty array. If this parameter is omitted, the original selection is retained. For HTTP requests, use the comma-separated format of array(simple): SelectedAccountIds=1234567890123456,1234567890123457. For a single account, specify only one UID. Do not use SelectedAccountIds.1/.2 or a JSON array string. You must also specify ConfigurationVersion and TargetProject, and omit LogDeliveryStatus and the member SubUserId.
    shared_ptr<vector<string>> selectedAccountIds_ {};
    // The UID of the source Alibaba Cloud account, which is a decimal integer. If this parameter is omitted or set to the UID of the current account, the delivery settings of the current account are modified. If a member UID is specified, the expected delivery status in the current configuration is applied only to the member. In this case, you must also specify LogDeliveryStatus, ConfigurationVersion, and TargetProject. The member must be within the selection scope of the log type or have existing delivery records. You must omit this parameter when you save the account selection or auto-inclusion settings. You cannot specify the UID of another member.
    shared_ptr<int64_t> subUserId_ {};
    // The name of the current Simple Log Service project for log delivery. Invoke GetDataStorage first and pass the original value of Data.DeliverySettings.TargetProject. This parameter is used to verify the target of the current modification, not to specify a new project. This parameter is required when you modify the global switch, account selection, auto-inclusion settings, or specified member log delivery. If this parameter is missing or different from the current target, the OperationDenied.CentralizedDeliveryConfigChanged error is returned. Replace the account UID and region in the example with the query results.
    shared_ptr<string> targetProject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
