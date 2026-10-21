// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASTORAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASTORAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateDataStorageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataStorageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigurationVersion, configurationVersion_);
      DARABONBA_PTR_TO_JSON(DataStorageRegionId, dataStorageRegionId_);
      DARABONBA_PTR_TO_JSON(DeliveryStatus, deliveryStatus_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MultiAccountDeliveryEnabled, multiAccountDeliveryEnabled_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(TargetProject, targetProject_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataStorageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigurationVersion, configurationVersion_);
      DARABONBA_PTR_FROM_JSON(DataStorageRegionId, dataStorageRegionId_);
      DARABONBA_PTR_FROM_JSON(DeliveryStatus, deliveryStatus_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MultiAccountDeliveryEnabled, multiAccountDeliveryEnabled_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(TargetProject, targetProject_);
    };
    UpdateDataStorageRequest() = default ;
    UpdateDataStorageRequest(const UpdateDataStorageRequest &) = default ;
    UpdateDataStorageRequest(UpdateDataStorageRequest &&) = default ;
    UpdateDataStorageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataStorageRequest() = default ;
    UpdateDataStorageRequest& operator=(const UpdateDataStorageRequest &) = default ;
    UpdateDataStorageRequest& operator=(UpdateDataStorageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configurationVersion_ == nullptr
        && this->dataStorageRegionId_ == nullptr && this->deliveryStatus_ == nullptr && this->lang_ == nullptr && this->multiAccountDeliveryEnabled_ == nullptr && this->regionId_ == nullptr
        && this->roleFor_ == nullptr && this->targetProject_ == nullptr; };
    // configurationVersion Field Functions 
    bool hasConfigurationVersion() const { return this->configurationVersion_ != nullptr;};
    void deleteConfigurationVersion() { this->configurationVersion_ = nullptr;};
    inline int64_t getConfigurationVersion() const { DARABONBA_PTR_GET_DEFAULT(configurationVersion_, 0L) };
    inline UpdateDataStorageRequest& setConfigurationVersion(int64_t configurationVersion) { DARABONBA_PTR_SET_VALUE(configurationVersion_, configurationVersion) };


    // dataStorageRegionId Field Functions 
    bool hasDataStorageRegionId() const { return this->dataStorageRegionId_ != nullptr;};
    void deleteDataStorageRegionId() { this->dataStorageRegionId_ = nullptr;};
    inline string getDataStorageRegionId() const { DARABONBA_PTR_GET_DEFAULT(dataStorageRegionId_, "") };
    inline UpdateDataStorageRequest& setDataStorageRegionId(string dataStorageRegionId) { DARABONBA_PTR_SET_VALUE(dataStorageRegionId_, dataStorageRegionId) };


    // deliveryStatus Field Functions 
    bool hasDeliveryStatus() const { return this->deliveryStatus_ != nullptr;};
    void deleteDeliveryStatus() { this->deliveryStatus_ = nullptr;};
    inline string getDeliveryStatus() const { DARABONBA_PTR_GET_DEFAULT(deliveryStatus_, "") };
    inline UpdateDataStorageRequest& setDeliveryStatus(string deliveryStatus) { DARABONBA_PTR_SET_VALUE(deliveryStatus_, deliveryStatus) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataStorageRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // multiAccountDeliveryEnabled Field Functions 
    bool hasMultiAccountDeliveryEnabled() const { return this->multiAccountDeliveryEnabled_ != nullptr;};
    void deleteMultiAccountDeliveryEnabled() { this->multiAccountDeliveryEnabled_ = nullptr;};
    inline bool getMultiAccountDeliveryEnabled() const { DARABONBA_PTR_GET_DEFAULT(multiAccountDeliveryEnabled_, false) };
    inline UpdateDataStorageRequest& setMultiAccountDeliveryEnabled(bool multiAccountDeliveryEnabled) { DARABONBA_PTR_SET_VALUE(multiAccountDeliveryEnabled_, multiAccountDeliveryEnabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDataStorageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateDataStorageRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // targetProject Field Functions 
    bool hasTargetProject() const { return this->targetProject_ != nullptr;};
    void deleteTargetProject() { this->targetProject_ = nullptr;};
    inline string getTargetProject() const { DARABONBA_PTR_GET_DEFAULT(targetProject_, "") };
    inline UpdateDataStorageRequest& setTargetProject(string targetProject) { DARABONBA_PTR_SET_VALUE(targetProject_, targetProject) };


  protected:
    // The version of the delivery settings on which this modification is based. Call GetDataStorage first and pass the original value of Data.DeliverySettings.ConfigurationVersion. Example 1 only demonstrates the format and cannot be used as a fixed version. This parameter is required when modifying the global switch, account selection, automatic inclusion settings, or specified member delivery. If the version is missing or has changed, the OperationDenied.CentralizedDeliveryConfigChanged error is returned. In this case, re-query the data and then submit the request.
    shared_ptr<int64_t> configurationVersion_ {};
    // The region where logs are stored.
    shared_ptr<string> dataStorageRegionId_ {};
    // The global delivery switch for log management. This switch is not available for configuration. Valid values:
    // - enable: Enables all delivery.
    // - disable: Disables all delivery.
    shared_ptr<string> deliveryStatus_ {};
    // The language of the response message. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    // Note: This parameter is actually required. If it is not specified, the API returns a 400 error: \\"The specified Lang can not be empty.\\" Specify zh or en.
    shared_ptr<string> lang_ {};
    // The global switch for multi-account centralized delivery. A value of true indicates that centralized delivery from members to the current account is enabled. A value of false indicates that centralized delivery from members to the current account is disabled. When disabled, the account selection and automatic inclusion settings are retained, and the original log type switches for the current account are independently retained. When this parameter is specified, you must also specify ConfigurationVersion and TargetProject, and omit DataStorageRegionId and DeliveryStatus. If this parameter is omitted, the storage region modification process is used. Enabling this switch for the first time initializes the account scope for log types and the automatic inclusion settings.
    shared_ptr<bool> multiAccountDeliveryEnabled_ {};
    // The region of the data management center for threat analysis. Select the region of the management center based on the region where your assets are located. Valid values:
    // - cn-hangzhou: Assets are located in the Chinese mainland.
    // - ap-southeast-1: Assets are located outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the member whose perspective the administrator switches to.
    shared_ptr<int64_t> roleFor_ {};
    // The name of the current Simple Log Service project for log delivery. First invoke GetDataStorage and pass the original value of Data.DeliverySettings.TargetProject. This parameter is used to verify the target of this modification, not to specify a new project. This parameter is required when modifying the global switch, account selection, automatic inclusion settings, or specified member delivery. If this parameter is missing or differs from the current target, the OperationDenied.CentralizedDeliveryConfigChanged error is returned. Replace the account UID and region in the example with the query results.
    shared_ptr<string> targetProject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
