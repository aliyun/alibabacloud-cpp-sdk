// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALPROCESSRESPONSEBODYPROCESS_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALPROCESSRESPONSEBODYPROCESS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApprovalProcessResponseBodyProcessAppUninstallPolicies.hpp>
#include <alibabacloud/models/GetApprovalProcessResponseBodyProcessDeviceRegistrationPolicies.hpp>
#include <alibabacloud/models/GetApprovalProcessResponseBodyProcessDlpSendPolicies.hpp>
#include <alibabacloud/models/GetApprovalProcessResponseBodyProcessDomainBlacklistPolicies.hpp>
#include <alibabacloud/models/GetApprovalProcessResponseBodyProcessDomainWhitelistPolicies.hpp>
#include <alibabacloud/models/GetApprovalProcessResponseBodyProcessEndpointHardeningPolicies.hpp>
#include <alibabacloud/models/GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies.hpp>
#include <vector>
#include <alibabacloud/models/GetApprovalProcessResponseBodyProcessProcessNodes.hpp>
#include <alibabacloud/models/GetApprovalProcessResponseBodyProcessSoftwareBlockPolicies.hpp>
#include <alibabacloud/models/GetApprovalProcessResponseBodyProcessSoftwareHardeningPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetApprovalProcessResponseBodyProcess : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalProcessResponseBodyProcess& obj) { 
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
      DARABONBA_PTR_TO_JSON(PeripheralBlockPolicies, peripheralBlockPolicies_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(ProcessNodes, processNodes_);
      DARABONBA_PTR_TO_JSON(SoftwareBlockPolicies, softwareBlockPolicies_);
      DARABONBA_PTR_TO_JSON(SoftwareHardeningPolicies, softwareHardeningPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalProcessResponseBodyProcess& obj) { 
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
      DARABONBA_PTR_FROM_JSON(PeripheralBlockPolicies, peripheralBlockPolicies_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(ProcessNodes, processNodes_);
      DARABONBA_PTR_FROM_JSON(SoftwareBlockPolicies, softwareBlockPolicies_);
      DARABONBA_PTR_FROM_JSON(SoftwareHardeningPolicies, softwareHardeningPolicies_);
    };
    GetApprovalProcessResponseBodyProcess() = default ;
    GetApprovalProcessResponseBodyProcess(const GetApprovalProcessResponseBodyProcess &) = default ;
    GetApprovalProcessResponseBodyProcess(GetApprovalProcessResponseBodyProcess &&) = default ;
    GetApprovalProcessResponseBodyProcess(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalProcessResponseBodyProcess() = default ;
    GetApprovalProcessResponseBodyProcess& operator=(const GetApprovalProcessResponseBodyProcess &) = default ;
    GetApprovalProcessResponseBodyProcess& operator=(GetApprovalProcessResponseBodyProcess &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appUninstallPolicies_ == nullptr
        && return this->approvalType_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->deviceRegistrationPolicies_ == nullptr && return this->dlpSendPolicies_ == nullptr
        && return this->domainBlacklistPolicies_ == nullptr && return this->domainWhitelistPolicies_ == nullptr && return this->endpointHardeningPolicies_ == nullptr && return this->eventLabel_ == nullptr && return this->externalConfig_ == nullptr
        && return this->peripheralBlockPolicies_ == nullptr && return this->processId_ == nullptr && return this->processName_ == nullptr && return this->processNodes_ == nullptr && return this->softwareBlockPolicies_ == nullptr
        && return this->softwareHardeningPolicies_ == nullptr; };
    // appUninstallPolicies Field Functions 
    bool hasAppUninstallPolicies() const { return this->appUninstallPolicies_ != nullptr;};
    void deleteAppUninstallPolicies() { this->appUninstallPolicies_ = nullptr;};
    inline const Models::GetApprovalProcessResponseBodyProcessAppUninstallPolicies & appUninstallPolicies() const { DARABONBA_PTR_GET_CONST(appUninstallPolicies_, Models::GetApprovalProcessResponseBodyProcessAppUninstallPolicies) };
    inline Models::GetApprovalProcessResponseBodyProcessAppUninstallPolicies appUninstallPolicies() { DARABONBA_PTR_GET(appUninstallPolicies_, Models::GetApprovalProcessResponseBodyProcessAppUninstallPolicies) };
    inline GetApprovalProcessResponseBodyProcess& setAppUninstallPolicies(const Models::GetApprovalProcessResponseBodyProcessAppUninstallPolicies & appUninstallPolicies) { DARABONBA_PTR_SET_VALUE(appUninstallPolicies_, appUninstallPolicies) };
    inline GetApprovalProcessResponseBodyProcess& setAppUninstallPolicies(Models::GetApprovalProcessResponseBodyProcessAppUninstallPolicies && appUninstallPolicies) { DARABONBA_PTR_SET_RVALUE(appUninstallPolicies_, appUninstallPolicies) };


    // approvalType Field Functions 
    bool hasApprovalType() const { return this->approvalType_ != nullptr;};
    void deleteApprovalType() { this->approvalType_ = nullptr;};
    inline int32_t approvalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, 0) };
    inline GetApprovalProcessResponseBodyProcess& setApprovalType(int32_t approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetApprovalProcessResponseBodyProcess& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetApprovalProcessResponseBodyProcess& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deviceRegistrationPolicies Field Functions 
    bool hasDeviceRegistrationPolicies() const { return this->deviceRegistrationPolicies_ != nullptr;};
    void deleteDeviceRegistrationPolicies() { this->deviceRegistrationPolicies_ = nullptr;};
    inline const Models::GetApprovalProcessResponseBodyProcessDeviceRegistrationPolicies & deviceRegistrationPolicies() const { DARABONBA_PTR_GET_CONST(deviceRegistrationPolicies_, Models::GetApprovalProcessResponseBodyProcessDeviceRegistrationPolicies) };
    inline Models::GetApprovalProcessResponseBodyProcessDeviceRegistrationPolicies deviceRegistrationPolicies() { DARABONBA_PTR_GET(deviceRegistrationPolicies_, Models::GetApprovalProcessResponseBodyProcessDeviceRegistrationPolicies) };
    inline GetApprovalProcessResponseBodyProcess& setDeviceRegistrationPolicies(const Models::GetApprovalProcessResponseBodyProcessDeviceRegistrationPolicies & deviceRegistrationPolicies) { DARABONBA_PTR_SET_VALUE(deviceRegistrationPolicies_, deviceRegistrationPolicies) };
    inline GetApprovalProcessResponseBodyProcess& setDeviceRegistrationPolicies(Models::GetApprovalProcessResponseBodyProcessDeviceRegistrationPolicies && deviceRegistrationPolicies) { DARABONBA_PTR_SET_RVALUE(deviceRegistrationPolicies_, deviceRegistrationPolicies) };


    // dlpSendPolicies Field Functions 
    bool hasDlpSendPolicies() const { return this->dlpSendPolicies_ != nullptr;};
    void deleteDlpSendPolicies() { this->dlpSendPolicies_ = nullptr;};
    inline const Models::GetApprovalProcessResponseBodyProcessDlpSendPolicies & dlpSendPolicies() const { DARABONBA_PTR_GET_CONST(dlpSendPolicies_, Models::GetApprovalProcessResponseBodyProcessDlpSendPolicies) };
    inline Models::GetApprovalProcessResponseBodyProcessDlpSendPolicies dlpSendPolicies() { DARABONBA_PTR_GET(dlpSendPolicies_, Models::GetApprovalProcessResponseBodyProcessDlpSendPolicies) };
    inline GetApprovalProcessResponseBodyProcess& setDlpSendPolicies(const Models::GetApprovalProcessResponseBodyProcessDlpSendPolicies & dlpSendPolicies) { DARABONBA_PTR_SET_VALUE(dlpSendPolicies_, dlpSendPolicies) };
    inline GetApprovalProcessResponseBodyProcess& setDlpSendPolicies(Models::GetApprovalProcessResponseBodyProcessDlpSendPolicies && dlpSendPolicies) { DARABONBA_PTR_SET_RVALUE(dlpSendPolicies_, dlpSendPolicies) };


    // domainBlacklistPolicies Field Functions 
    bool hasDomainBlacklistPolicies() const { return this->domainBlacklistPolicies_ != nullptr;};
    void deleteDomainBlacklistPolicies() { this->domainBlacklistPolicies_ = nullptr;};
    inline const Models::GetApprovalProcessResponseBodyProcessDomainBlacklistPolicies & domainBlacklistPolicies() const { DARABONBA_PTR_GET_CONST(domainBlacklistPolicies_, Models::GetApprovalProcessResponseBodyProcessDomainBlacklistPolicies) };
    inline Models::GetApprovalProcessResponseBodyProcessDomainBlacklistPolicies domainBlacklistPolicies() { DARABONBA_PTR_GET(domainBlacklistPolicies_, Models::GetApprovalProcessResponseBodyProcessDomainBlacklistPolicies) };
    inline GetApprovalProcessResponseBodyProcess& setDomainBlacklistPolicies(const Models::GetApprovalProcessResponseBodyProcessDomainBlacklistPolicies & domainBlacklistPolicies) { DARABONBA_PTR_SET_VALUE(domainBlacklistPolicies_, domainBlacklistPolicies) };
    inline GetApprovalProcessResponseBodyProcess& setDomainBlacklistPolicies(Models::GetApprovalProcessResponseBodyProcessDomainBlacklistPolicies && domainBlacklistPolicies) { DARABONBA_PTR_SET_RVALUE(domainBlacklistPolicies_, domainBlacklistPolicies) };


    // domainWhitelistPolicies Field Functions 
    bool hasDomainWhitelistPolicies() const { return this->domainWhitelistPolicies_ != nullptr;};
    void deleteDomainWhitelistPolicies() { this->domainWhitelistPolicies_ = nullptr;};
    inline const Models::GetApprovalProcessResponseBodyProcessDomainWhitelistPolicies & domainWhitelistPolicies() const { DARABONBA_PTR_GET_CONST(domainWhitelistPolicies_, Models::GetApprovalProcessResponseBodyProcessDomainWhitelistPolicies) };
    inline Models::GetApprovalProcessResponseBodyProcessDomainWhitelistPolicies domainWhitelistPolicies() { DARABONBA_PTR_GET(domainWhitelistPolicies_, Models::GetApprovalProcessResponseBodyProcessDomainWhitelistPolicies) };
    inline GetApprovalProcessResponseBodyProcess& setDomainWhitelistPolicies(const Models::GetApprovalProcessResponseBodyProcessDomainWhitelistPolicies & domainWhitelistPolicies) { DARABONBA_PTR_SET_VALUE(domainWhitelistPolicies_, domainWhitelistPolicies) };
    inline GetApprovalProcessResponseBodyProcess& setDomainWhitelistPolicies(Models::GetApprovalProcessResponseBodyProcessDomainWhitelistPolicies && domainWhitelistPolicies) { DARABONBA_PTR_SET_RVALUE(domainWhitelistPolicies_, domainWhitelistPolicies) };


    // endpointHardeningPolicies Field Functions 
    bool hasEndpointHardeningPolicies() const { return this->endpointHardeningPolicies_ != nullptr;};
    void deleteEndpointHardeningPolicies() { this->endpointHardeningPolicies_ = nullptr;};
    inline const Models::GetApprovalProcessResponseBodyProcessEndpointHardeningPolicies & endpointHardeningPolicies() const { DARABONBA_PTR_GET_CONST(endpointHardeningPolicies_, Models::GetApprovalProcessResponseBodyProcessEndpointHardeningPolicies) };
    inline Models::GetApprovalProcessResponseBodyProcessEndpointHardeningPolicies endpointHardeningPolicies() { DARABONBA_PTR_GET(endpointHardeningPolicies_, Models::GetApprovalProcessResponseBodyProcessEndpointHardeningPolicies) };
    inline GetApprovalProcessResponseBodyProcess& setEndpointHardeningPolicies(const Models::GetApprovalProcessResponseBodyProcessEndpointHardeningPolicies & endpointHardeningPolicies) { DARABONBA_PTR_SET_VALUE(endpointHardeningPolicies_, endpointHardeningPolicies) };
    inline GetApprovalProcessResponseBodyProcess& setEndpointHardeningPolicies(Models::GetApprovalProcessResponseBodyProcessEndpointHardeningPolicies && endpointHardeningPolicies) { DARABONBA_PTR_SET_RVALUE(endpointHardeningPolicies_, endpointHardeningPolicies) };


    // eventLabel Field Functions 
    bool hasEventLabel() const { return this->eventLabel_ != nullptr;};
    void deleteEventLabel() { this->eventLabel_ = nullptr;};
    inline string eventLabel() const { DARABONBA_PTR_GET_DEFAULT(eventLabel_, "") };
    inline GetApprovalProcessResponseBodyProcess& setEventLabel(string eventLabel) { DARABONBA_PTR_SET_VALUE(eventLabel_, eventLabel) };


    // externalConfig Field Functions 
    bool hasExternalConfig() const { return this->externalConfig_ != nullptr;};
    void deleteExternalConfig() { this->externalConfig_ = nullptr;};
    inline string externalConfig() const { DARABONBA_PTR_GET_DEFAULT(externalConfig_, "") };
    inline GetApprovalProcessResponseBodyProcess& setExternalConfig(string externalConfig) { DARABONBA_PTR_SET_VALUE(externalConfig_, externalConfig) };


    // peripheralBlockPolicies Field Functions 
    bool hasPeripheralBlockPolicies() const { return this->peripheralBlockPolicies_ != nullptr;};
    void deletePeripheralBlockPolicies() { this->peripheralBlockPolicies_ = nullptr;};
    inline const Models::GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies & peripheralBlockPolicies() const { DARABONBA_PTR_GET_CONST(peripheralBlockPolicies_, Models::GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies) };
    inline Models::GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies peripheralBlockPolicies() { DARABONBA_PTR_GET(peripheralBlockPolicies_, Models::GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies) };
    inline GetApprovalProcessResponseBodyProcess& setPeripheralBlockPolicies(const Models::GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies & peripheralBlockPolicies) { DARABONBA_PTR_SET_VALUE(peripheralBlockPolicies_, peripheralBlockPolicies) };
    inline GetApprovalProcessResponseBodyProcess& setPeripheralBlockPolicies(Models::GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies && peripheralBlockPolicies) { DARABONBA_PTR_SET_RVALUE(peripheralBlockPolicies_, peripheralBlockPolicies) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline GetApprovalProcessResponseBodyProcess& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline GetApprovalProcessResponseBodyProcess& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // processNodes Field Functions 
    bool hasProcessNodes() const { return this->processNodes_ != nullptr;};
    void deleteProcessNodes() { this->processNodes_ = nullptr;};
    inline const vector<vector<Models::GetApprovalProcessResponseBodyProcessProcessNodes>> & processNodes() const { DARABONBA_PTR_GET_CONST(processNodes_, vector<vector<Models::GetApprovalProcessResponseBodyProcessProcessNodes>>) };
    inline vector<vector<Models::GetApprovalProcessResponseBodyProcessProcessNodes>> processNodes() { DARABONBA_PTR_GET(processNodes_, vector<vector<Models::GetApprovalProcessResponseBodyProcessProcessNodes>>) };
    inline GetApprovalProcessResponseBodyProcess& setProcessNodes(const vector<vector<Models::GetApprovalProcessResponseBodyProcessProcessNodes>> & processNodes) { DARABONBA_PTR_SET_VALUE(processNodes_, processNodes) };
    inline GetApprovalProcessResponseBodyProcess& setProcessNodes(vector<vector<Models::GetApprovalProcessResponseBodyProcessProcessNodes>> && processNodes) { DARABONBA_PTR_SET_RVALUE(processNodes_, processNodes) };


    // softwareBlockPolicies Field Functions 
    bool hasSoftwareBlockPolicies() const { return this->softwareBlockPolicies_ != nullptr;};
    void deleteSoftwareBlockPolicies() { this->softwareBlockPolicies_ = nullptr;};
    inline const Models::GetApprovalProcessResponseBodyProcessSoftwareBlockPolicies & softwareBlockPolicies() const { DARABONBA_PTR_GET_CONST(softwareBlockPolicies_, Models::GetApprovalProcessResponseBodyProcessSoftwareBlockPolicies) };
    inline Models::GetApprovalProcessResponseBodyProcessSoftwareBlockPolicies softwareBlockPolicies() { DARABONBA_PTR_GET(softwareBlockPolicies_, Models::GetApprovalProcessResponseBodyProcessSoftwareBlockPolicies) };
    inline GetApprovalProcessResponseBodyProcess& setSoftwareBlockPolicies(const Models::GetApprovalProcessResponseBodyProcessSoftwareBlockPolicies & softwareBlockPolicies) { DARABONBA_PTR_SET_VALUE(softwareBlockPolicies_, softwareBlockPolicies) };
    inline GetApprovalProcessResponseBodyProcess& setSoftwareBlockPolicies(Models::GetApprovalProcessResponseBodyProcessSoftwareBlockPolicies && softwareBlockPolicies) { DARABONBA_PTR_SET_RVALUE(softwareBlockPolicies_, softwareBlockPolicies) };


    // softwareHardeningPolicies Field Functions 
    bool hasSoftwareHardeningPolicies() const { return this->softwareHardeningPolicies_ != nullptr;};
    void deleteSoftwareHardeningPolicies() { this->softwareHardeningPolicies_ = nullptr;};
    inline const Models::GetApprovalProcessResponseBodyProcessSoftwareHardeningPolicies & softwareHardeningPolicies() const { DARABONBA_PTR_GET_CONST(softwareHardeningPolicies_, Models::GetApprovalProcessResponseBodyProcessSoftwareHardeningPolicies) };
    inline Models::GetApprovalProcessResponseBodyProcessSoftwareHardeningPolicies softwareHardeningPolicies() { DARABONBA_PTR_GET(softwareHardeningPolicies_, Models::GetApprovalProcessResponseBodyProcessSoftwareHardeningPolicies) };
    inline GetApprovalProcessResponseBodyProcess& setSoftwareHardeningPolicies(const Models::GetApprovalProcessResponseBodyProcessSoftwareHardeningPolicies & softwareHardeningPolicies) { DARABONBA_PTR_SET_VALUE(softwareHardeningPolicies_, softwareHardeningPolicies) };
    inline GetApprovalProcessResponseBodyProcess& setSoftwareHardeningPolicies(Models::GetApprovalProcessResponseBodyProcessSoftwareHardeningPolicies && softwareHardeningPolicies) { DARABONBA_PTR_SET_RVALUE(softwareHardeningPolicies_, softwareHardeningPolicies) };


  protected:
    std::shared_ptr<Models::GetApprovalProcessResponseBodyProcessAppUninstallPolicies> appUninstallPolicies_ = nullptr;
    std::shared_ptr<int32_t> approvalType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::GetApprovalProcessResponseBodyProcessDeviceRegistrationPolicies> deviceRegistrationPolicies_ = nullptr;
    std::shared_ptr<Models::GetApprovalProcessResponseBodyProcessDlpSendPolicies> dlpSendPolicies_ = nullptr;
    std::shared_ptr<Models::GetApprovalProcessResponseBodyProcessDomainBlacklistPolicies> domainBlacklistPolicies_ = nullptr;
    std::shared_ptr<Models::GetApprovalProcessResponseBodyProcessDomainWhitelistPolicies> domainWhitelistPolicies_ = nullptr;
    std::shared_ptr<Models::GetApprovalProcessResponseBodyProcessEndpointHardeningPolicies> endpointHardeningPolicies_ = nullptr;
    std::shared_ptr<string> eventLabel_ = nullptr;
    std::shared_ptr<string> externalConfig_ = nullptr;
    std::shared_ptr<Models::GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies> peripheralBlockPolicies_ = nullptr;
    std::shared_ptr<string> processId_ = nullptr;
    std::shared_ptr<string> processName_ = nullptr;
    std::shared_ptr<vector<vector<Models::GetApprovalProcessResponseBodyProcessProcessNodes>>> processNodes_ = nullptr;
    std::shared_ptr<Models::GetApprovalProcessResponseBodyProcessSoftwareBlockPolicies> softwareBlockPolicies_ = nullptr;
    std::shared_ptr<Models::GetApprovalProcessResponseBodyProcessSoftwareHardeningPolicies> softwareHardeningPolicies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
