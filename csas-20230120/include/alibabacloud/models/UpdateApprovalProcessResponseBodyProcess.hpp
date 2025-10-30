// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSRESPONSEBODYPROCESS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSRESPONSEBODYPROCESS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateApprovalProcessResponseBodyProcessAppUninstallPolicies.hpp>
#include <alibabacloud/models/UpdateApprovalProcessResponseBodyProcessDeviceRegistrationPolicies.hpp>
#include <alibabacloud/models/UpdateApprovalProcessResponseBodyProcessDlpSendPolicies.hpp>
#include <alibabacloud/models/UpdateApprovalProcessResponseBodyProcessDomainBlacklistPolicies.hpp>
#include <alibabacloud/models/UpdateApprovalProcessResponseBodyProcessDomainWhitelistPolicies.hpp>
#include <alibabacloud/models/UpdateApprovalProcessResponseBodyProcessEndpointHardeningPolicies.hpp>
#include <alibabacloud/models/UpdateApprovalProcessResponseBodyProcessPeripheraBlockPolicies.hpp>
#include <vector>
#include <alibabacloud/models/UpdateApprovalProcessResponseBodyProcessProcessNodes.hpp>
#include <alibabacloud/models/UpdateApprovalProcessResponseBodyProcessSoftwareBlockPolicies.hpp>
#include <alibabacloud/models/UpdateApprovalProcessResponseBodyProcessSoftwareHardeningPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateApprovalProcessResponseBodyProcess : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApprovalProcessResponseBodyProcess& obj) { 
      DARABONBA_PTR_TO_JSON(AppUninstallPolicies, appUninstallPolicies_);
      DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DeviceRegistrationPolicies, deviceRegistrationPolicies_);
      DARABONBA_PTR_TO_JSON(DlpSendPolicies, dlpSendPolicies_);
      DARABONBA_PTR_TO_JSON(DomainBlacklistPolicies, domainBlacklistPolicies_);
      DARABONBA_PTR_TO_JSON(DomainWhitelistPolicies, domainWhitelistPolicies_);
      DARABONBA_PTR_TO_JSON(EndpointHardeningPolicies, endpointHardeningPolicies_);
      DARABONBA_PTR_TO_JSON(EventLabel, eventLabel_);
      DARABONBA_PTR_TO_JSON(ExternalConfig, externalConfig_);
      DARABONBA_PTR_TO_JSON(PeripheraBlockPolicies, peripheraBlockPolicies_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(ProcessNodes, processNodes_);
      DARABONBA_PTR_TO_JSON(SoftwareBlockPolicies, softwareBlockPolicies_);
      DARABONBA_PTR_TO_JSON(SoftwareHardeningPolicies, softwareHardeningPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApprovalProcessResponseBodyProcess& obj) { 
      DARABONBA_PTR_FROM_JSON(AppUninstallPolicies, appUninstallPolicies_);
      DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DeviceRegistrationPolicies, deviceRegistrationPolicies_);
      DARABONBA_PTR_FROM_JSON(DlpSendPolicies, dlpSendPolicies_);
      DARABONBA_PTR_FROM_JSON(DomainBlacklistPolicies, domainBlacklistPolicies_);
      DARABONBA_PTR_FROM_JSON(DomainWhitelistPolicies, domainWhitelistPolicies_);
      DARABONBA_PTR_FROM_JSON(EndpointHardeningPolicies, endpointHardeningPolicies_);
      DARABONBA_PTR_FROM_JSON(EventLabel, eventLabel_);
      DARABONBA_PTR_FROM_JSON(ExternalConfig, externalConfig_);
      DARABONBA_PTR_FROM_JSON(PeripheraBlockPolicies, peripheraBlockPolicies_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(ProcessNodes, processNodes_);
      DARABONBA_PTR_FROM_JSON(SoftwareBlockPolicies, softwareBlockPolicies_);
      DARABONBA_PTR_FROM_JSON(SoftwareHardeningPolicies, softwareHardeningPolicies_);
    };
    UpdateApprovalProcessResponseBodyProcess() = default ;
    UpdateApprovalProcessResponseBodyProcess(const UpdateApprovalProcessResponseBodyProcess &) = default ;
    UpdateApprovalProcessResponseBodyProcess(UpdateApprovalProcessResponseBodyProcess &&) = default ;
    UpdateApprovalProcessResponseBodyProcess(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApprovalProcessResponseBodyProcess() = default ;
    UpdateApprovalProcessResponseBodyProcess& operator=(const UpdateApprovalProcessResponseBodyProcess &) = default ;
    UpdateApprovalProcessResponseBodyProcess& operator=(UpdateApprovalProcessResponseBodyProcess &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appUninstallPolicies_ == nullptr
        && return this->approvalType_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->deviceRegistrationPolicies_ == nullptr && return this->dlpSendPolicies_ == nullptr
        && return this->domainBlacklistPolicies_ == nullptr && return this->domainWhitelistPolicies_ == nullptr && return this->endpointHardeningPolicies_ == nullptr && return this->eventLabel_ == nullptr && return this->externalConfig_ == nullptr
        && return this->peripheraBlockPolicies_ == nullptr && return this->processId_ == nullptr && return this->processName_ == nullptr && return this->processNodes_ == nullptr && return this->softwareBlockPolicies_ == nullptr
        && return this->softwareHardeningPolicies_ == nullptr; };
    // appUninstallPolicies Field Functions 
    bool hasAppUninstallPolicies() const { return this->appUninstallPolicies_ != nullptr;};
    void deleteAppUninstallPolicies() { this->appUninstallPolicies_ = nullptr;};
    inline const Models::UpdateApprovalProcessResponseBodyProcessAppUninstallPolicies & appUninstallPolicies() const { DARABONBA_PTR_GET_CONST(appUninstallPolicies_, Models::UpdateApprovalProcessResponseBodyProcessAppUninstallPolicies) };
    inline Models::UpdateApprovalProcessResponseBodyProcessAppUninstallPolicies appUninstallPolicies() { DARABONBA_PTR_GET(appUninstallPolicies_, Models::UpdateApprovalProcessResponseBodyProcessAppUninstallPolicies) };
    inline UpdateApprovalProcessResponseBodyProcess& setAppUninstallPolicies(const Models::UpdateApprovalProcessResponseBodyProcessAppUninstallPolicies & appUninstallPolicies) { DARABONBA_PTR_SET_VALUE(appUninstallPolicies_, appUninstallPolicies) };
    inline UpdateApprovalProcessResponseBodyProcess& setAppUninstallPolicies(Models::UpdateApprovalProcessResponseBodyProcessAppUninstallPolicies && appUninstallPolicies) { DARABONBA_PTR_SET_RVALUE(appUninstallPolicies_, appUninstallPolicies) };


    // approvalType Field Functions 
    bool hasApprovalType() const { return this->approvalType_ != nullptr;};
    void deleteApprovalType() { this->approvalType_ = nullptr;};
    inline int32_t approvalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, 0) };
    inline UpdateApprovalProcessResponseBodyProcess& setApprovalType(int32_t approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline UpdateApprovalProcessResponseBodyProcess& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateApprovalProcessResponseBodyProcess& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deviceRegistrationPolicies Field Functions 
    bool hasDeviceRegistrationPolicies() const { return this->deviceRegistrationPolicies_ != nullptr;};
    void deleteDeviceRegistrationPolicies() { this->deviceRegistrationPolicies_ = nullptr;};
    inline const Models::UpdateApprovalProcessResponseBodyProcessDeviceRegistrationPolicies & deviceRegistrationPolicies() const { DARABONBA_PTR_GET_CONST(deviceRegistrationPolicies_, Models::UpdateApprovalProcessResponseBodyProcessDeviceRegistrationPolicies) };
    inline Models::UpdateApprovalProcessResponseBodyProcessDeviceRegistrationPolicies deviceRegistrationPolicies() { DARABONBA_PTR_GET(deviceRegistrationPolicies_, Models::UpdateApprovalProcessResponseBodyProcessDeviceRegistrationPolicies) };
    inline UpdateApprovalProcessResponseBodyProcess& setDeviceRegistrationPolicies(const Models::UpdateApprovalProcessResponseBodyProcessDeviceRegistrationPolicies & deviceRegistrationPolicies) { DARABONBA_PTR_SET_VALUE(deviceRegistrationPolicies_, deviceRegistrationPolicies) };
    inline UpdateApprovalProcessResponseBodyProcess& setDeviceRegistrationPolicies(Models::UpdateApprovalProcessResponseBodyProcessDeviceRegistrationPolicies && deviceRegistrationPolicies) { DARABONBA_PTR_SET_RVALUE(deviceRegistrationPolicies_, deviceRegistrationPolicies) };


    // dlpSendPolicies Field Functions 
    bool hasDlpSendPolicies() const { return this->dlpSendPolicies_ != nullptr;};
    void deleteDlpSendPolicies() { this->dlpSendPolicies_ = nullptr;};
    inline const Models::UpdateApprovalProcessResponseBodyProcessDlpSendPolicies & dlpSendPolicies() const { DARABONBA_PTR_GET_CONST(dlpSendPolicies_, Models::UpdateApprovalProcessResponseBodyProcessDlpSendPolicies) };
    inline Models::UpdateApprovalProcessResponseBodyProcessDlpSendPolicies dlpSendPolicies() { DARABONBA_PTR_GET(dlpSendPolicies_, Models::UpdateApprovalProcessResponseBodyProcessDlpSendPolicies) };
    inline UpdateApprovalProcessResponseBodyProcess& setDlpSendPolicies(const Models::UpdateApprovalProcessResponseBodyProcessDlpSendPolicies & dlpSendPolicies) { DARABONBA_PTR_SET_VALUE(dlpSendPolicies_, dlpSendPolicies) };
    inline UpdateApprovalProcessResponseBodyProcess& setDlpSendPolicies(Models::UpdateApprovalProcessResponseBodyProcessDlpSendPolicies && dlpSendPolicies) { DARABONBA_PTR_SET_RVALUE(dlpSendPolicies_, dlpSendPolicies) };


    // domainBlacklistPolicies Field Functions 
    bool hasDomainBlacklistPolicies() const { return this->domainBlacklistPolicies_ != nullptr;};
    void deleteDomainBlacklistPolicies() { this->domainBlacklistPolicies_ = nullptr;};
    inline const Models::UpdateApprovalProcessResponseBodyProcessDomainBlacklistPolicies & domainBlacklistPolicies() const { DARABONBA_PTR_GET_CONST(domainBlacklistPolicies_, Models::UpdateApprovalProcessResponseBodyProcessDomainBlacklistPolicies) };
    inline Models::UpdateApprovalProcessResponseBodyProcessDomainBlacklistPolicies domainBlacklistPolicies() { DARABONBA_PTR_GET(domainBlacklistPolicies_, Models::UpdateApprovalProcessResponseBodyProcessDomainBlacklistPolicies) };
    inline UpdateApprovalProcessResponseBodyProcess& setDomainBlacklistPolicies(const Models::UpdateApprovalProcessResponseBodyProcessDomainBlacklistPolicies & domainBlacklistPolicies) { DARABONBA_PTR_SET_VALUE(domainBlacklistPolicies_, domainBlacklistPolicies) };
    inline UpdateApprovalProcessResponseBodyProcess& setDomainBlacklistPolicies(Models::UpdateApprovalProcessResponseBodyProcessDomainBlacklistPolicies && domainBlacklistPolicies) { DARABONBA_PTR_SET_RVALUE(domainBlacklistPolicies_, domainBlacklistPolicies) };


    // domainWhitelistPolicies Field Functions 
    bool hasDomainWhitelistPolicies() const { return this->domainWhitelistPolicies_ != nullptr;};
    void deleteDomainWhitelistPolicies() { this->domainWhitelistPolicies_ = nullptr;};
    inline const Models::UpdateApprovalProcessResponseBodyProcessDomainWhitelistPolicies & domainWhitelistPolicies() const { DARABONBA_PTR_GET_CONST(domainWhitelistPolicies_, Models::UpdateApprovalProcessResponseBodyProcessDomainWhitelistPolicies) };
    inline Models::UpdateApprovalProcessResponseBodyProcessDomainWhitelistPolicies domainWhitelistPolicies() { DARABONBA_PTR_GET(domainWhitelistPolicies_, Models::UpdateApprovalProcessResponseBodyProcessDomainWhitelistPolicies) };
    inline UpdateApprovalProcessResponseBodyProcess& setDomainWhitelistPolicies(const Models::UpdateApprovalProcessResponseBodyProcessDomainWhitelistPolicies & domainWhitelistPolicies) { DARABONBA_PTR_SET_VALUE(domainWhitelistPolicies_, domainWhitelistPolicies) };
    inline UpdateApprovalProcessResponseBodyProcess& setDomainWhitelistPolicies(Models::UpdateApprovalProcessResponseBodyProcessDomainWhitelistPolicies && domainWhitelistPolicies) { DARABONBA_PTR_SET_RVALUE(domainWhitelistPolicies_, domainWhitelistPolicies) };


    // endpointHardeningPolicies Field Functions 
    bool hasEndpointHardeningPolicies() const { return this->endpointHardeningPolicies_ != nullptr;};
    void deleteEndpointHardeningPolicies() { this->endpointHardeningPolicies_ = nullptr;};
    inline const Models::UpdateApprovalProcessResponseBodyProcessEndpointHardeningPolicies & endpointHardeningPolicies() const { DARABONBA_PTR_GET_CONST(endpointHardeningPolicies_, Models::UpdateApprovalProcessResponseBodyProcessEndpointHardeningPolicies) };
    inline Models::UpdateApprovalProcessResponseBodyProcessEndpointHardeningPolicies endpointHardeningPolicies() { DARABONBA_PTR_GET(endpointHardeningPolicies_, Models::UpdateApprovalProcessResponseBodyProcessEndpointHardeningPolicies) };
    inline UpdateApprovalProcessResponseBodyProcess& setEndpointHardeningPolicies(const Models::UpdateApprovalProcessResponseBodyProcessEndpointHardeningPolicies & endpointHardeningPolicies) { DARABONBA_PTR_SET_VALUE(endpointHardeningPolicies_, endpointHardeningPolicies) };
    inline UpdateApprovalProcessResponseBodyProcess& setEndpointHardeningPolicies(Models::UpdateApprovalProcessResponseBodyProcessEndpointHardeningPolicies && endpointHardeningPolicies) { DARABONBA_PTR_SET_RVALUE(endpointHardeningPolicies_, endpointHardeningPolicies) };


    // eventLabel Field Functions 
    bool hasEventLabel() const { return this->eventLabel_ != nullptr;};
    void deleteEventLabel() { this->eventLabel_ = nullptr;};
    inline string eventLabel() const { DARABONBA_PTR_GET_DEFAULT(eventLabel_, "") };
    inline UpdateApprovalProcessResponseBodyProcess& setEventLabel(string eventLabel) { DARABONBA_PTR_SET_VALUE(eventLabel_, eventLabel) };


    // externalConfig Field Functions 
    bool hasExternalConfig() const { return this->externalConfig_ != nullptr;};
    void deleteExternalConfig() { this->externalConfig_ = nullptr;};
    inline string externalConfig() const { DARABONBA_PTR_GET_DEFAULT(externalConfig_, "") };
    inline UpdateApprovalProcessResponseBodyProcess& setExternalConfig(string externalConfig) { DARABONBA_PTR_SET_VALUE(externalConfig_, externalConfig) };


    // peripheraBlockPolicies Field Functions 
    bool hasPeripheraBlockPolicies() const { return this->peripheraBlockPolicies_ != nullptr;};
    void deletePeripheraBlockPolicies() { this->peripheraBlockPolicies_ = nullptr;};
    inline const Models::UpdateApprovalProcessResponseBodyProcessPeripheraBlockPolicies & peripheraBlockPolicies() const { DARABONBA_PTR_GET_CONST(peripheraBlockPolicies_, Models::UpdateApprovalProcessResponseBodyProcessPeripheraBlockPolicies) };
    inline Models::UpdateApprovalProcessResponseBodyProcessPeripheraBlockPolicies peripheraBlockPolicies() { DARABONBA_PTR_GET(peripheraBlockPolicies_, Models::UpdateApprovalProcessResponseBodyProcessPeripheraBlockPolicies) };
    inline UpdateApprovalProcessResponseBodyProcess& setPeripheraBlockPolicies(const Models::UpdateApprovalProcessResponseBodyProcessPeripheraBlockPolicies & peripheraBlockPolicies) { DARABONBA_PTR_SET_VALUE(peripheraBlockPolicies_, peripheraBlockPolicies) };
    inline UpdateApprovalProcessResponseBodyProcess& setPeripheraBlockPolicies(Models::UpdateApprovalProcessResponseBodyProcessPeripheraBlockPolicies && peripheraBlockPolicies) { DARABONBA_PTR_SET_RVALUE(peripheraBlockPolicies_, peripheraBlockPolicies) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline UpdateApprovalProcessResponseBodyProcess& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline UpdateApprovalProcessResponseBodyProcess& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // processNodes Field Functions 
    bool hasProcessNodes() const { return this->processNodes_ != nullptr;};
    void deleteProcessNodes() { this->processNodes_ = nullptr;};
    inline const vector<vector<Models::UpdateApprovalProcessResponseBodyProcessProcessNodes>> & processNodes() const { DARABONBA_PTR_GET_CONST(processNodes_, vector<vector<Models::UpdateApprovalProcessResponseBodyProcessProcessNodes>>) };
    inline vector<vector<Models::UpdateApprovalProcessResponseBodyProcessProcessNodes>> processNodes() { DARABONBA_PTR_GET(processNodes_, vector<vector<Models::UpdateApprovalProcessResponseBodyProcessProcessNodes>>) };
    inline UpdateApprovalProcessResponseBodyProcess& setProcessNodes(const vector<vector<Models::UpdateApprovalProcessResponseBodyProcessProcessNodes>> & processNodes) { DARABONBA_PTR_SET_VALUE(processNodes_, processNodes) };
    inline UpdateApprovalProcessResponseBodyProcess& setProcessNodes(vector<vector<Models::UpdateApprovalProcessResponseBodyProcessProcessNodes>> && processNodes) { DARABONBA_PTR_SET_RVALUE(processNodes_, processNodes) };


    // softwareBlockPolicies Field Functions 
    bool hasSoftwareBlockPolicies() const { return this->softwareBlockPolicies_ != nullptr;};
    void deleteSoftwareBlockPolicies() { this->softwareBlockPolicies_ = nullptr;};
    inline const Models::UpdateApprovalProcessResponseBodyProcessSoftwareBlockPolicies & softwareBlockPolicies() const { DARABONBA_PTR_GET_CONST(softwareBlockPolicies_, Models::UpdateApprovalProcessResponseBodyProcessSoftwareBlockPolicies) };
    inline Models::UpdateApprovalProcessResponseBodyProcessSoftwareBlockPolicies softwareBlockPolicies() { DARABONBA_PTR_GET(softwareBlockPolicies_, Models::UpdateApprovalProcessResponseBodyProcessSoftwareBlockPolicies) };
    inline UpdateApprovalProcessResponseBodyProcess& setSoftwareBlockPolicies(const Models::UpdateApprovalProcessResponseBodyProcessSoftwareBlockPolicies & softwareBlockPolicies) { DARABONBA_PTR_SET_VALUE(softwareBlockPolicies_, softwareBlockPolicies) };
    inline UpdateApprovalProcessResponseBodyProcess& setSoftwareBlockPolicies(Models::UpdateApprovalProcessResponseBodyProcessSoftwareBlockPolicies && softwareBlockPolicies) { DARABONBA_PTR_SET_RVALUE(softwareBlockPolicies_, softwareBlockPolicies) };


    // softwareHardeningPolicies Field Functions 
    bool hasSoftwareHardeningPolicies() const { return this->softwareHardeningPolicies_ != nullptr;};
    void deleteSoftwareHardeningPolicies() { this->softwareHardeningPolicies_ = nullptr;};
    inline const Models::UpdateApprovalProcessResponseBodyProcessSoftwareHardeningPolicies & softwareHardeningPolicies() const { DARABONBA_PTR_GET_CONST(softwareHardeningPolicies_, Models::UpdateApprovalProcessResponseBodyProcessSoftwareHardeningPolicies) };
    inline Models::UpdateApprovalProcessResponseBodyProcessSoftwareHardeningPolicies softwareHardeningPolicies() { DARABONBA_PTR_GET(softwareHardeningPolicies_, Models::UpdateApprovalProcessResponseBodyProcessSoftwareHardeningPolicies) };
    inline UpdateApprovalProcessResponseBodyProcess& setSoftwareHardeningPolicies(const Models::UpdateApprovalProcessResponseBodyProcessSoftwareHardeningPolicies & softwareHardeningPolicies) { DARABONBA_PTR_SET_VALUE(softwareHardeningPolicies_, softwareHardeningPolicies) };
    inline UpdateApprovalProcessResponseBodyProcess& setSoftwareHardeningPolicies(Models::UpdateApprovalProcessResponseBodyProcessSoftwareHardeningPolicies && softwareHardeningPolicies) { DARABONBA_PTR_SET_RVALUE(softwareHardeningPolicies_, softwareHardeningPolicies) };


  protected:
    std::shared_ptr<Models::UpdateApprovalProcessResponseBodyProcessAppUninstallPolicies> appUninstallPolicies_ = nullptr;
    std::shared_ptr<int32_t> approvalType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::UpdateApprovalProcessResponseBodyProcessDeviceRegistrationPolicies> deviceRegistrationPolicies_ = nullptr;
    std::shared_ptr<Models::UpdateApprovalProcessResponseBodyProcessDlpSendPolicies> dlpSendPolicies_ = nullptr;
    std::shared_ptr<Models::UpdateApprovalProcessResponseBodyProcessDomainBlacklistPolicies> domainBlacklistPolicies_ = nullptr;
    std::shared_ptr<Models::UpdateApprovalProcessResponseBodyProcessDomainWhitelistPolicies> domainWhitelistPolicies_ = nullptr;
    std::shared_ptr<Models::UpdateApprovalProcessResponseBodyProcessEndpointHardeningPolicies> endpointHardeningPolicies_ = nullptr;
    std::shared_ptr<string> eventLabel_ = nullptr;
    std::shared_ptr<string> externalConfig_ = nullptr;
    std::shared_ptr<Models::UpdateApprovalProcessResponseBodyProcessPeripheraBlockPolicies> peripheraBlockPolicies_ = nullptr;
    std::shared_ptr<string> processId_ = nullptr;
    std::shared_ptr<string> processName_ = nullptr;
    std::shared_ptr<vector<vector<Models::UpdateApprovalProcessResponseBodyProcessProcessNodes>>> processNodes_ = nullptr;
    std::shared_ptr<Models::UpdateApprovalProcessResponseBodyProcessSoftwareBlockPolicies> softwareBlockPolicies_ = nullptr;
    std::shared_ptr<Models::UpdateApprovalProcessResponseBodyProcessSoftwareHardeningPolicies> softwareHardeningPolicies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
