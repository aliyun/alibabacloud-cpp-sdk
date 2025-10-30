// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSREQUESTMATCHSCHEMAS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSREQUESTMATCHSCHEMAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateApprovalProcessRequestMatchSchemas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApprovalProcessRequestMatchSchemas& obj) { 
      DARABONBA_PTR_TO_JSON(AppUninstallSchemaId, appUninstallSchemaId_);
      DARABONBA_PTR_TO_JSON(DeviceRegistrationSchemaId, deviceRegistrationSchemaId_);
      DARABONBA_PTR_TO_JSON(DlpSendSchemaId, dlpSendSchemaId_);
      DARABONBA_PTR_TO_JSON(DomainBlacklistSchemaId, domainBlacklistSchemaId_);
      DARABONBA_PTR_TO_JSON(DomainWhitelistSchemaId, domainWhitelistSchemaId_);
      DARABONBA_PTR_TO_JSON(EndpointHardeningSchemaId, endpointHardeningSchemaId_);
      DARABONBA_PTR_TO_JSON(PeripheralBlockSchemaId, peripheralBlockSchemaId_);
      DARABONBA_PTR_TO_JSON(SoftwareBlockSchemaId, softwareBlockSchemaId_);
      DARABONBA_PTR_TO_JSON(SoftwareHardeningSchemaId, softwareHardeningSchemaId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApprovalProcessRequestMatchSchemas& obj) { 
      DARABONBA_PTR_FROM_JSON(AppUninstallSchemaId, appUninstallSchemaId_);
      DARABONBA_PTR_FROM_JSON(DeviceRegistrationSchemaId, deviceRegistrationSchemaId_);
      DARABONBA_PTR_FROM_JSON(DlpSendSchemaId, dlpSendSchemaId_);
      DARABONBA_PTR_FROM_JSON(DomainBlacklistSchemaId, domainBlacklistSchemaId_);
      DARABONBA_PTR_FROM_JSON(DomainWhitelistSchemaId, domainWhitelistSchemaId_);
      DARABONBA_PTR_FROM_JSON(EndpointHardeningSchemaId, endpointHardeningSchemaId_);
      DARABONBA_PTR_FROM_JSON(PeripheralBlockSchemaId, peripheralBlockSchemaId_);
      DARABONBA_PTR_FROM_JSON(SoftwareBlockSchemaId, softwareBlockSchemaId_);
      DARABONBA_PTR_FROM_JSON(SoftwareHardeningSchemaId, softwareHardeningSchemaId_);
    };
    UpdateApprovalProcessRequestMatchSchemas() = default ;
    UpdateApprovalProcessRequestMatchSchemas(const UpdateApprovalProcessRequestMatchSchemas &) = default ;
    UpdateApprovalProcessRequestMatchSchemas(UpdateApprovalProcessRequestMatchSchemas &&) = default ;
    UpdateApprovalProcessRequestMatchSchemas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApprovalProcessRequestMatchSchemas() = default ;
    UpdateApprovalProcessRequestMatchSchemas& operator=(const UpdateApprovalProcessRequestMatchSchemas &) = default ;
    UpdateApprovalProcessRequestMatchSchemas& operator=(UpdateApprovalProcessRequestMatchSchemas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appUninstallSchemaId_ == nullptr
        && return this->deviceRegistrationSchemaId_ == nullptr && return this->dlpSendSchemaId_ == nullptr && return this->domainBlacklistSchemaId_ == nullptr && return this->domainWhitelistSchemaId_ == nullptr && return this->endpointHardeningSchemaId_ == nullptr
        && return this->peripheralBlockSchemaId_ == nullptr && return this->softwareBlockSchemaId_ == nullptr && return this->softwareHardeningSchemaId_ == nullptr; };
    // appUninstallSchemaId Field Functions 
    bool hasAppUninstallSchemaId() const { return this->appUninstallSchemaId_ != nullptr;};
    void deleteAppUninstallSchemaId() { this->appUninstallSchemaId_ = nullptr;};
    inline string appUninstallSchemaId() const { DARABONBA_PTR_GET_DEFAULT(appUninstallSchemaId_, "") };
    inline UpdateApprovalProcessRequestMatchSchemas& setAppUninstallSchemaId(string appUninstallSchemaId) { DARABONBA_PTR_SET_VALUE(appUninstallSchemaId_, appUninstallSchemaId) };


    // deviceRegistrationSchemaId Field Functions 
    bool hasDeviceRegistrationSchemaId() const { return this->deviceRegistrationSchemaId_ != nullptr;};
    void deleteDeviceRegistrationSchemaId() { this->deviceRegistrationSchemaId_ = nullptr;};
    inline string deviceRegistrationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(deviceRegistrationSchemaId_, "") };
    inline UpdateApprovalProcessRequestMatchSchemas& setDeviceRegistrationSchemaId(string deviceRegistrationSchemaId) { DARABONBA_PTR_SET_VALUE(deviceRegistrationSchemaId_, deviceRegistrationSchemaId) };


    // dlpSendSchemaId Field Functions 
    bool hasDlpSendSchemaId() const { return this->dlpSendSchemaId_ != nullptr;};
    void deleteDlpSendSchemaId() { this->dlpSendSchemaId_ = nullptr;};
    inline string dlpSendSchemaId() const { DARABONBA_PTR_GET_DEFAULT(dlpSendSchemaId_, "") };
    inline UpdateApprovalProcessRequestMatchSchemas& setDlpSendSchemaId(string dlpSendSchemaId) { DARABONBA_PTR_SET_VALUE(dlpSendSchemaId_, dlpSendSchemaId) };


    // domainBlacklistSchemaId Field Functions 
    bool hasDomainBlacklistSchemaId() const { return this->domainBlacklistSchemaId_ != nullptr;};
    void deleteDomainBlacklistSchemaId() { this->domainBlacklistSchemaId_ = nullptr;};
    inline string domainBlacklistSchemaId() const { DARABONBA_PTR_GET_DEFAULT(domainBlacklistSchemaId_, "") };
    inline UpdateApprovalProcessRequestMatchSchemas& setDomainBlacklistSchemaId(string domainBlacklistSchemaId) { DARABONBA_PTR_SET_VALUE(domainBlacklistSchemaId_, domainBlacklistSchemaId) };


    // domainWhitelistSchemaId Field Functions 
    bool hasDomainWhitelistSchemaId() const { return this->domainWhitelistSchemaId_ != nullptr;};
    void deleteDomainWhitelistSchemaId() { this->domainWhitelistSchemaId_ = nullptr;};
    inline string domainWhitelistSchemaId() const { DARABONBA_PTR_GET_DEFAULT(domainWhitelistSchemaId_, "") };
    inline UpdateApprovalProcessRequestMatchSchemas& setDomainWhitelistSchemaId(string domainWhitelistSchemaId) { DARABONBA_PTR_SET_VALUE(domainWhitelistSchemaId_, domainWhitelistSchemaId) };


    // endpointHardeningSchemaId Field Functions 
    bool hasEndpointHardeningSchemaId() const { return this->endpointHardeningSchemaId_ != nullptr;};
    void deleteEndpointHardeningSchemaId() { this->endpointHardeningSchemaId_ = nullptr;};
    inline string endpointHardeningSchemaId() const { DARABONBA_PTR_GET_DEFAULT(endpointHardeningSchemaId_, "") };
    inline UpdateApprovalProcessRequestMatchSchemas& setEndpointHardeningSchemaId(string endpointHardeningSchemaId) { DARABONBA_PTR_SET_VALUE(endpointHardeningSchemaId_, endpointHardeningSchemaId) };


    // peripheralBlockSchemaId Field Functions 
    bool hasPeripheralBlockSchemaId() const { return this->peripheralBlockSchemaId_ != nullptr;};
    void deletePeripheralBlockSchemaId() { this->peripheralBlockSchemaId_ = nullptr;};
    inline string peripheralBlockSchemaId() const { DARABONBA_PTR_GET_DEFAULT(peripheralBlockSchemaId_, "") };
    inline UpdateApprovalProcessRequestMatchSchemas& setPeripheralBlockSchemaId(string peripheralBlockSchemaId) { DARABONBA_PTR_SET_VALUE(peripheralBlockSchemaId_, peripheralBlockSchemaId) };


    // softwareBlockSchemaId Field Functions 
    bool hasSoftwareBlockSchemaId() const { return this->softwareBlockSchemaId_ != nullptr;};
    void deleteSoftwareBlockSchemaId() { this->softwareBlockSchemaId_ = nullptr;};
    inline string softwareBlockSchemaId() const { DARABONBA_PTR_GET_DEFAULT(softwareBlockSchemaId_, "") };
    inline UpdateApprovalProcessRequestMatchSchemas& setSoftwareBlockSchemaId(string softwareBlockSchemaId) { DARABONBA_PTR_SET_VALUE(softwareBlockSchemaId_, softwareBlockSchemaId) };


    // softwareHardeningSchemaId Field Functions 
    bool hasSoftwareHardeningSchemaId() const { return this->softwareHardeningSchemaId_ != nullptr;};
    void deleteSoftwareHardeningSchemaId() { this->softwareHardeningSchemaId_ = nullptr;};
    inline string softwareHardeningSchemaId() const { DARABONBA_PTR_GET_DEFAULT(softwareHardeningSchemaId_, "") };
    inline UpdateApprovalProcessRequestMatchSchemas& setSoftwareHardeningSchemaId(string softwareHardeningSchemaId) { DARABONBA_PTR_SET_VALUE(softwareHardeningSchemaId_, softwareHardeningSchemaId) };


  protected:
    std::shared_ptr<string> appUninstallSchemaId_ = nullptr;
    std::shared_ptr<string> deviceRegistrationSchemaId_ = nullptr;
    std::shared_ptr<string> dlpSendSchemaId_ = nullptr;
    std::shared_ptr<string> domainBlacklistSchemaId_ = nullptr;
    std::shared_ptr<string> domainWhitelistSchemaId_ = nullptr;
    std::shared_ptr<string> endpointHardeningSchemaId_ = nullptr;
    std::shared_ptr<string> peripheralBlockSchemaId_ = nullptr;
    std::shared_ptr<string> softwareBlockSchemaId_ = nullptr;
    std::shared_ptr<string> softwareHardeningSchemaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
