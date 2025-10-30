// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSREQUESTMATCHSCHEMACONFIGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSREQUESTMATCHSCHEMACONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateApprovalProcessRequestMatchSchemaConfigsAppUninstallSchemaConfig.hpp>
#include <alibabacloud/models/UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig.hpp>
#include <alibabacloud/models/UpdateApprovalProcessRequestMatchSchemaConfigsDlpSendSchemaConfig.hpp>
#include <alibabacloud/models/UpdateApprovalProcessRequestMatchSchemaConfigsDomainBlacklistSchemaConfig.hpp>
#include <alibabacloud/models/UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig.hpp>
#include <alibabacloud/models/UpdateApprovalProcessRequestMatchSchemaConfigsEndpointHardeningSchemaConfig.hpp>
#include <alibabacloud/models/UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfig.hpp>
#include <alibabacloud/models/UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareBlockSchemaConfig.hpp>
#include <alibabacloud/models/UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateApprovalProcessRequestMatchSchemaConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApprovalProcessRequestMatchSchemaConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(AppUninstallSchemaConfig, appUninstallSchemaConfig_);
      DARABONBA_PTR_TO_JSON(DeviceRegistrationSchemaConfig, deviceRegistrationSchemaConfig_);
      DARABONBA_PTR_TO_JSON(DlpSendSchemaConfig, dlpSendSchemaConfig_);
      DARABONBA_PTR_TO_JSON(DomainBlacklistSchemaConfig, domainBlacklistSchemaConfig_);
      DARABONBA_PTR_TO_JSON(DomainWhitelistSchemaConfig, domainWhitelistSchemaConfig_);
      DARABONBA_PTR_TO_JSON(EndpointHardeningSchemaConfig, endpointHardeningSchemaConfig_);
      DARABONBA_PTR_TO_JSON(PeripheralBlockSchemaConfig, peripheralBlockSchemaConfig_);
      DARABONBA_PTR_TO_JSON(SoftwareBlockSchemaConfig, softwareBlockSchemaConfig_);
      DARABONBA_PTR_TO_JSON(SoftwareHardeningSchemaConfig, softwareHardeningSchemaConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApprovalProcessRequestMatchSchemaConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(AppUninstallSchemaConfig, appUninstallSchemaConfig_);
      DARABONBA_PTR_FROM_JSON(DeviceRegistrationSchemaConfig, deviceRegistrationSchemaConfig_);
      DARABONBA_PTR_FROM_JSON(DlpSendSchemaConfig, dlpSendSchemaConfig_);
      DARABONBA_PTR_FROM_JSON(DomainBlacklistSchemaConfig, domainBlacklistSchemaConfig_);
      DARABONBA_PTR_FROM_JSON(DomainWhitelistSchemaConfig, domainWhitelistSchemaConfig_);
      DARABONBA_PTR_FROM_JSON(EndpointHardeningSchemaConfig, endpointHardeningSchemaConfig_);
      DARABONBA_PTR_FROM_JSON(PeripheralBlockSchemaConfig, peripheralBlockSchemaConfig_);
      DARABONBA_PTR_FROM_JSON(SoftwareBlockSchemaConfig, softwareBlockSchemaConfig_);
      DARABONBA_PTR_FROM_JSON(SoftwareHardeningSchemaConfig, softwareHardeningSchemaConfig_);
    };
    UpdateApprovalProcessRequestMatchSchemaConfigs() = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigs(const UpdateApprovalProcessRequestMatchSchemaConfigs &) = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigs(UpdateApprovalProcessRequestMatchSchemaConfigs &&) = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApprovalProcessRequestMatchSchemaConfigs() = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigs& operator=(const UpdateApprovalProcessRequestMatchSchemaConfigs &) = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigs& operator=(UpdateApprovalProcessRequestMatchSchemaConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appUninstallSchemaConfig_ == nullptr
        && return this->deviceRegistrationSchemaConfig_ == nullptr && return this->dlpSendSchemaConfig_ == nullptr && return this->domainBlacklistSchemaConfig_ == nullptr && return this->domainWhitelistSchemaConfig_ == nullptr && return this->endpointHardeningSchemaConfig_ == nullptr
        && return this->peripheralBlockSchemaConfig_ == nullptr && return this->softwareBlockSchemaConfig_ == nullptr && return this->softwareHardeningSchemaConfig_ == nullptr; };
    // appUninstallSchemaConfig Field Functions 
    bool hasAppUninstallSchemaConfig() const { return this->appUninstallSchemaConfig_ != nullptr;};
    void deleteAppUninstallSchemaConfig() { this->appUninstallSchemaConfig_ = nullptr;};
    inline const Models::UpdateApprovalProcessRequestMatchSchemaConfigsAppUninstallSchemaConfig & appUninstallSchemaConfig() const { DARABONBA_PTR_GET_CONST(appUninstallSchemaConfig_, Models::UpdateApprovalProcessRequestMatchSchemaConfigsAppUninstallSchemaConfig) };
    inline Models::UpdateApprovalProcessRequestMatchSchemaConfigsAppUninstallSchemaConfig appUninstallSchemaConfig() { DARABONBA_PTR_GET(appUninstallSchemaConfig_, Models::UpdateApprovalProcessRequestMatchSchemaConfigsAppUninstallSchemaConfig) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigs& setAppUninstallSchemaConfig(const Models::UpdateApprovalProcessRequestMatchSchemaConfigsAppUninstallSchemaConfig & appUninstallSchemaConfig) { DARABONBA_PTR_SET_VALUE(appUninstallSchemaConfig_, appUninstallSchemaConfig) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigs& setAppUninstallSchemaConfig(Models::UpdateApprovalProcessRequestMatchSchemaConfigsAppUninstallSchemaConfig && appUninstallSchemaConfig) { DARABONBA_PTR_SET_RVALUE(appUninstallSchemaConfig_, appUninstallSchemaConfig) };


    // deviceRegistrationSchemaConfig Field Functions 
    bool hasDeviceRegistrationSchemaConfig() const { return this->deviceRegistrationSchemaConfig_ != nullptr;};
    void deleteDeviceRegistrationSchemaConfig() { this->deviceRegistrationSchemaConfig_ = nullptr;};
    inline const Models::UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig & deviceRegistrationSchemaConfig() const { DARABONBA_PTR_GET_CONST(deviceRegistrationSchemaConfig_, Models::UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig) };
    inline Models::UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig deviceRegistrationSchemaConfig() { DARABONBA_PTR_GET(deviceRegistrationSchemaConfig_, Models::UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigs& setDeviceRegistrationSchemaConfig(const Models::UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig & deviceRegistrationSchemaConfig) { DARABONBA_PTR_SET_VALUE(deviceRegistrationSchemaConfig_, deviceRegistrationSchemaConfig) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigs& setDeviceRegistrationSchemaConfig(Models::UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig && deviceRegistrationSchemaConfig) { DARABONBA_PTR_SET_RVALUE(deviceRegistrationSchemaConfig_, deviceRegistrationSchemaConfig) };


    // dlpSendSchemaConfig Field Functions 
    bool hasDlpSendSchemaConfig() const { return this->dlpSendSchemaConfig_ != nullptr;};
    void deleteDlpSendSchemaConfig() { this->dlpSendSchemaConfig_ = nullptr;};
    inline const Models::UpdateApprovalProcessRequestMatchSchemaConfigsDlpSendSchemaConfig & dlpSendSchemaConfig() const { DARABONBA_PTR_GET_CONST(dlpSendSchemaConfig_, Models::UpdateApprovalProcessRequestMatchSchemaConfigsDlpSendSchemaConfig) };
    inline Models::UpdateApprovalProcessRequestMatchSchemaConfigsDlpSendSchemaConfig dlpSendSchemaConfig() { DARABONBA_PTR_GET(dlpSendSchemaConfig_, Models::UpdateApprovalProcessRequestMatchSchemaConfigsDlpSendSchemaConfig) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigs& setDlpSendSchemaConfig(const Models::UpdateApprovalProcessRequestMatchSchemaConfigsDlpSendSchemaConfig & dlpSendSchemaConfig) { DARABONBA_PTR_SET_VALUE(dlpSendSchemaConfig_, dlpSendSchemaConfig) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigs& setDlpSendSchemaConfig(Models::UpdateApprovalProcessRequestMatchSchemaConfigsDlpSendSchemaConfig && dlpSendSchemaConfig) { DARABONBA_PTR_SET_RVALUE(dlpSendSchemaConfig_, dlpSendSchemaConfig) };


    // domainBlacklistSchemaConfig Field Functions 
    bool hasDomainBlacklistSchemaConfig() const { return this->domainBlacklistSchemaConfig_ != nullptr;};
    void deleteDomainBlacklistSchemaConfig() { this->domainBlacklistSchemaConfig_ = nullptr;};
    inline const Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainBlacklistSchemaConfig & domainBlacklistSchemaConfig() const { DARABONBA_PTR_GET_CONST(domainBlacklistSchemaConfig_, Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainBlacklistSchemaConfig) };
    inline Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainBlacklistSchemaConfig domainBlacklistSchemaConfig() { DARABONBA_PTR_GET(domainBlacklistSchemaConfig_, Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainBlacklistSchemaConfig) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigs& setDomainBlacklistSchemaConfig(const Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainBlacklistSchemaConfig & domainBlacklistSchemaConfig) { DARABONBA_PTR_SET_VALUE(domainBlacklistSchemaConfig_, domainBlacklistSchemaConfig) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigs& setDomainBlacklistSchemaConfig(Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainBlacklistSchemaConfig && domainBlacklistSchemaConfig) { DARABONBA_PTR_SET_RVALUE(domainBlacklistSchemaConfig_, domainBlacklistSchemaConfig) };


    // domainWhitelistSchemaConfig Field Functions 
    bool hasDomainWhitelistSchemaConfig() const { return this->domainWhitelistSchemaConfig_ != nullptr;};
    void deleteDomainWhitelistSchemaConfig() { this->domainWhitelistSchemaConfig_ = nullptr;};
    inline const Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig & domainWhitelistSchemaConfig() const { DARABONBA_PTR_GET_CONST(domainWhitelistSchemaConfig_, Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig) };
    inline Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig domainWhitelistSchemaConfig() { DARABONBA_PTR_GET(domainWhitelistSchemaConfig_, Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigs& setDomainWhitelistSchemaConfig(const Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig & domainWhitelistSchemaConfig) { DARABONBA_PTR_SET_VALUE(domainWhitelistSchemaConfig_, domainWhitelistSchemaConfig) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigs& setDomainWhitelistSchemaConfig(Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig && domainWhitelistSchemaConfig) { DARABONBA_PTR_SET_RVALUE(domainWhitelistSchemaConfig_, domainWhitelistSchemaConfig) };


    // endpointHardeningSchemaConfig Field Functions 
    bool hasEndpointHardeningSchemaConfig() const { return this->endpointHardeningSchemaConfig_ != nullptr;};
    void deleteEndpointHardeningSchemaConfig() { this->endpointHardeningSchemaConfig_ = nullptr;};
    inline const Models::UpdateApprovalProcessRequestMatchSchemaConfigsEndpointHardeningSchemaConfig & endpointHardeningSchemaConfig() const { DARABONBA_PTR_GET_CONST(endpointHardeningSchemaConfig_, Models::UpdateApprovalProcessRequestMatchSchemaConfigsEndpointHardeningSchemaConfig) };
    inline Models::UpdateApprovalProcessRequestMatchSchemaConfigsEndpointHardeningSchemaConfig endpointHardeningSchemaConfig() { DARABONBA_PTR_GET(endpointHardeningSchemaConfig_, Models::UpdateApprovalProcessRequestMatchSchemaConfigsEndpointHardeningSchemaConfig) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigs& setEndpointHardeningSchemaConfig(const Models::UpdateApprovalProcessRequestMatchSchemaConfigsEndpointHardeningSchemaConfig & endpointHardeningSchemaConfig) { DARABONBA_PTR_SET_VALUE(endpointHardeningSchemaConfig_, endpointHardeningSchemaConfig) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigs& setEndpointHardeningSchemaConfig(Models::UpdateApprovalProcessRequestMatchSchemaConfigsEndpointHardeningSchemaConfig && endpointHardeningSchemaConfig) { DARABONBA_PTR_SET_RVALUE(endpointHardeningSchemaConfig_, endpointHardeningSchemaConfig) };


    // peripheralBlockSchemaConfig Field Functions 
    bool hasPeripheralBlockSchemaConfig() const { return this->peripheralBlockSchemaConfig_ != nullptr;};
    void deletePeripheralBlockSchemaConfig() { this->peripheralBlockSchemaConfig_ = nullptr;};
    inline const Models::UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfig & peripheralBlockSchemaConfig() const { DARABONBA_PTR_GET_CONST(peripheralBlockSchemaConfig_, Models::UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfig) };
    inline Models::UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfig peripheralBlockSchemaConfig() { DARABONBA_PTR_GET(peripheralBlockSchemaConfig_, Models::UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfig) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigs& setPeripheralBlockSchemaConfig(const Models::UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfig & peripheralBlockSchemaConfig) { DARABONBA_PTR_SET_VALUE(peripheralBlockSchemaConfig_, peripheralBlockSchemaConfig) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigs& setPeripheralBlockSchemaConfig(Models::UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfig && peripheralBlockSchemaConfig) { DARABONBA_PTR_SET_RVALUE(peripheralBlockSchemaConfig_, peripheralBlockSchemaConfig) };


    // softwareBlockSchemaConfig Field Functions 
    bool hasSoftwareBlockSchemaConfig() const { return this->softwareBlockSchemaConfig_ != nullptr;};
    void deleteSoftwareBlockSchemaConfig() { this->softwareBlockSchemaConfig_ = nullptr;};
    inline const Models::UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareBlockSchemaConfig & softwareBlockSchemaConfig() const { DARABONBA_PTR_GET_CONST(softwareBlockSchemaConfig_, Models::UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareBlockSchemaConfig) };
    inline Models::UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareBlockSchemaConfig softwareBlockSchemaConfig() { DARABONBA_PTR_GET(softwareBlockSchemaConfig_, Models::UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareBlockSchemaConfig) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigs& setSoftwareBlockSchemaConfig(const Models::UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareBlockSchemaConfig & softwareBlockSchemaConfig) { DARABONBA_PTR_SET_VALUE(softwareBlockSchemaConfig_, softwareBlockSchemaConfig) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigs& setSoftwareBlockSchemaConfig(Models::UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareBlockSchemaConfig && softwareBlockSchemaConfig) { DARABONBA_PTR_SET_RVALUE(softwareBlockSchemaConfig_, softwareBlockSchemaConfig) };


    // softwareHardeningSchemaConfig Field Functions 
    bool hasSoftwareHardeningSchemaConfig() const { return this->softwareHardeningSchemaConfig_ != nullptr;};
    void deleteSoftwareHardeningSchemaConfig() { this->softwareHardeningSchemaConfig_ = nullptr;};
    inline const Models::UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfig & softwareHardeningSchemaConfig() const { DARABONBA_PTR_GET_CONST(softwareHardeningSchemaConfig_, Models::UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfig) };
    inline Models::UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfig softwareHardeningSchemaConfig() { DARABONBA_PTR_GET(softwareHardeningSchemaConfig_, Models::UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfig) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigs& setSoftwareHardeningSchemaConfig(const Models::UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfig & softwareHardeningSchemaConfig) { DARABONBA_PTR_SET_VALUE(softwareHardeningSchemaConfig_, softwareHardeningSchemaConfig) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigs& setSoftwareHardeningSchemaConfig(Models::UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfig && softwareHardeningSchemaConfig) { DARABONBA_PTR_SET_RVALUE(softwareHardeningSchemaConfig_, softwareHardeningSchemaConfig) };


  protected:
    std::shared_ptr<Models::UpdateApprovalProcessRequestMatchSchemaConfigsAppUninstallSchemaConfig> appUninstallSchemaConfig_ = nullptr;
    std::shared_ptr<Models::UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig> deviceRegistrationSchemaConfig_ = nullptr;
    std::shared_ptr<Models::UpdateApprovalProcessRequestMatchSchemaConfigsDlpSendSchemaConfig> dlpSendSchemaConfig_ = nullptr;
    std::shared_ptr<Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainBlacklistSchemaConfig> domainBlacklistSchemaConfig_ = nullptr;
    std::shared_ptr<Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig> domainWhitelistSchemaConfig_ = nullptr;
    std::shared_ptr<Models::UpdateApprovalProcessRequestMatchSchemaConfigsEndpointHardeningSchemaConfig> endpointHardeningSchemaConfig_ = nullptr;
    std::shared_ptr<Models::UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfig> peripheralBlockSchemaConfig_ = nullptr;
    std::shared_ptr<Models::UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareBlockSchemaConfig> softwareBlockSchemaConfig_ = nullptr;
    std::shared_ptr<Models::UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfig> softwareHardeningSchemaConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
