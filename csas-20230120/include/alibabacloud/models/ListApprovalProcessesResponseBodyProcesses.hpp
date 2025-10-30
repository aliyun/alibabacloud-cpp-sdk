// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESRESPONSEBODYPROCESSES_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESRESPONSEBODYPROCESSES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListApprovalProcessesResponseBodyProcessesAppUninstallPolicies.hpp>
#include <alibabacloud/models/ListApprovalProcessesResponseBodyProcessesDeviceRegistrationPolicies.hpp>
#include <alibabacloud/models/ListApprovalProcessesResponseBodyProcessesDlpSendPolicies.hpp>
#include <alibabacloud/models/ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies.hpp>
#include <alibabacloud/models/ListApprovalProcessesResponseBodyProcessesDomainWhitelistPolicies.hpp>
#include <alibabacloud/models/ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies.hpp>
#include <alibabacloud/models/ListApprovalProcessesResponseBodyProcessesPeripheralBlockPolicies.hpp>
#include <vector>
#include <alibabacloud/models/ListApprovalProcessesResponseBodyProcessesProcessNodes.hpp>
#include <alibabacloud/models/ListApprovalProcessesResponseBodyProcessesSoftwareBlockPolicies.hpp>
#include <alibabacloud/models/ListApprovalProcessesResponseBodyProcessesSoftwareHardeningPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListApprovalProcessesResponseBodyProcesses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalProcessesResponseBodyProcesses& obj) { 
      DARABONBA_PTR_TO_JSON(AppUninstallPolicies, appUninstallPolicies_);
      DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DeviceRegistrationPolicies, deviceRegistrationPolicies_);
      DARABONBA_PTR_TO_JSON(DlpSendPolicies, dlpSendPolicies_);
      DARABONBA_PTR_TO_JSON(DomainBlacklistPolicies, domainBlacklistPolicies_);
      DARABONBA_PTR_TO_JSON(DomainWhitelistPolicies, domainWhitelistPolicies_);
      DARABONBA_PTR_TO_JSON(EndpointHardeningPolicies, endpointHardeningPolicies_);
      DARABONBA_PTR_TO_JSON(PeripheralBlockPolicies, peripheralBlockPolicies_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(ProcessNodes, processNodes_);
      DARABONBA_PTR_TO_JSON(SoftwareBlockPolicies, softwareBlockPolicies_);
      DARABONBA_PTR_TO_JSON(SoftwareHardeningPolicies, softwareHardeningPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalProcessesResponseBodyProcesses& obj) { 
      DARABONBA_PTR_FROM_JSON(AppUninstallPolicies, appUninstallPolicies_);
      DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DeviceRegistrationPolicies, deviceRegistrationPolicies_);
      DARABONBA_PTR_FROM_JSON(DlpSendPolicies, dlpSendPolicies_);
      DARABONBA_PTR_FROM_JSON(DomainBlacklistPolicies, domainBlacklistPolicies_);
      DARABONBA_PTR_FROM_JSON(DomainWhitelistPolicies, domainWhitelistPolicies_);
      DARABONBA_PTR_FROM_JSON(EndpointHardeningPolicies, endpointHardeningPolicies_);
      DARABONBA_PTR_FROM_JSON(PeripheralBlockPolicies, peripheralBlockPolicies_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(ProcessNodes, processNodes_);
      DARABONBA_PTR_FROM_JSON(SoftwareBlockPolicies, softwareBlockPolicies_);
      DARABONBA_PTR_FROM_JSON(SoftwareHardeningPolicies, softwareHardeningPolicies_);
    };
    ListApprovalProcessesResponseBodyProcesses() = default ;
    ListApprovalProcessesResponseBodyProcesses(const ListApprovalProcessesResponseBodyProcesses &) = default ;
    ListApprovalProcessesResponseBodyProcesses(ListApprovalProcessesResponseBodyProcesses &&) = default ;
    ListApprovalProcessesResponseBodyProcesses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalProcessesResponseBodyProcesses() = default ;
    ListApprovalProcessesResponseBodyProcesses& operator=(const ListApprovalProcessesResponseBodyProcesses &) = default ;
    ListApprovalProcessesResponseBodyProcesses& operator=(ListApprovalProcessesResponseBodyProcesses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appUninstallPolicies_ == nullptr
        && return this->approvalType_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->deviceRegistrationPolicies_ == nullptr && return this->dlpSendPolicies_ == nullptr
        && return this->domainBlacklistPolicies_ == nullptr && return this->domainWhitelistPolicies_ == nullptr && return this->endpointHardeningPolicies_ == nullptr && return this->peripheralBlockPolicies_ == nullptr && return this->processId_ == nullptr
        && return this->processName_ == nullptr && return this->processNodes_ == nullptr && return this->softwareBlockPolicies_ == nullptr && return this->softwareHardeningPolicies_ == nullptr; };
    // appUninstallPolicies Field Functions 
    bool hasAppUninstallPolicies() const { return this->appUninstallPolicies_ != nullptr;};
    void deleteAppUninstallPolicies() { this->appUninstallPolicies_ = nullptr;};
    inline const Models::ListApprovalProcessesResponseBodyProcessesAppUninstallPolicies & appUninstallPolicies() const { DARABONBA_PTR_GET_CONST(appUninstallPolicies_, Models::ListApprovalProcessesResponseBodyProcessesAppUninstallPolicies) };
    inline Models::ListApprovalProcessesResponseBodyProcessesAppUninstallPolicies appUninstallPolicies() { DARABONBA_PTR_GET(appUninstallPolicies_, Models::ListApprovalProcessesResponseBodyProcessesAppUninstallPolicies) };
    inline ListApprovalProcessesResponseBodyProcesses& setAppUninstallPolicies(const Models::ListApprovalProcessesResponseBodyProcessesAppUninstallPolicies & appUninstallPolicies) { DARABONBA_PTR_SET_VALUE(appUninstallPolicies_, appUninstallPolicies) };
    inline ListApprovalProcessesResponseBodyProcesses& setAppUninstallPolicies(Models::ListApprovalProcessesResponseBodyProcessesAppUninstallPolicies && appUninstallPolicies) { DARABONBA_PTR_SET_RVALUE(appUninstallPolicies_, appUninstallPolicies) };


    // approvalType Field Functions 
    bool hasApprovalType() const { return this->approvalType_ != nullptr;};
    void deleteApprovalType() { this->approvalType_ = nullptr;};
    inline int32_t approvalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, 0) };
    inline ListApprovalProcessesResponseBodyProcesses& setApprovalType(int32_t approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListApprovalProcessesResponseBodyProcesses& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListApprovalProcessesResponseBodyProcesses& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deviceRegistrationPolicies Field Functions 
    bool hasDeviceRegistrationPolicies() const { return this->deviceRegistrationPolicies_ != nullptr;};
    void deleteDeviceRegistrationPolicies() { this->deviceRegistrationPolicies_ = nullptr;};
    inline const Models::ListApprovalProcessesResponseBodyProcessesDeviceRegistrationPolicies & deviceRegistrationPolicies() const { DARABONBA_PTR_GET_CONST(deviceRegistrationPolicies_, Models::ListApprovalProcessesResponseBodyProcessesDeviceRegistrationPolicies) };
    inline Models::ListApprovalProcessesResponseBodyProcessesDeviceRegistrationPolicies deviceRegistrationPolicies() { DARABONBA_PTR_GET(deviceRegistrationPolicies_, Models::ListApprovalProcessesResponseBodyProcessesDeviceRegistrationPolicies) };
    inline ListApprovalProcessesResponseBodyProcesses& setDeviceRegistrationPolicies(const Models::ListApprovalProcessesResponseBodyProcessesDeviceRegistrationPolicies & deviceRegistrationPolicies) { DARABONBA_PTR_SET_VALUE(deviceRegistrationPolicies_, deviceRegistrationPolicies) };
    inline ListApprovalProcessesResponseBodyProcesses& setDeviceRegistrationPolicies(Models::ListApprovalProcessesResponseBodyProcessesDeviceRegistrationPolicies && deviceRegistrationPolicies) { DARABONBA_PTR_SET_RVALUE(deviceRegistrationPolicies_, deviceRegistrationPolicies) };


    // dlpSendPolicies Field Functions 
    bool hasDlpSendPolicies() const { return this->dlpSendPolicies_ != nullptr;};
    void deleteDlpSendPolicies() { this->dlpSendPolicies_ = nullptr;};
    inline const Models::ListApprovalProcessesResponseBodyProcessesDlpSendPolicies & dlpSendPolicies() const { DARABONBA_PTR_GET_CONST(dlpSendPolicies_, Models::ListApprovalProcessesResponseBodyProcessesDlpSendPolicies) };
    inline Models::ListApprovalProcessesResponseBodyProcessesDlpSendPolicies dlpSendPolicies() { DARABONBA_PTR_GET(dlpSendPolicies_, Models::ListApprovalProcessesResponseBodyProcessesDlpSendPolicies) };
    inline ListApprovalProcessesResponseBodyProcesses& setDlpSendPolicies(const Models::ListApprovalProcessesResponseBodyProcessesDlpSendPolicies & dlpSendPolicies) { DARABONBA_PTR_SET_VALUE(dlpSendPolicies_, dlpSendPolicies) };
    inline ListApprovalProcessesResponseBodyProcesses& setDlpSendPolicies(Models::ListApprovalProcessesResponseBodyProcessesDlpSendPolicies && dlpSendPolicies) { DARABONBA_PTR_SET_RVALUE(dlpSendPolicies_, dlpSendPolicies) };


    // domainBlacklistPolicies Field Functions 
    bool hasDomainBlacklistPolicies() const { return this->domainBlacklistPolicies_ != nullptr;};
    void deleteDomainBlacklistPolicies() { this->domainBlacklistPolicies_ = nullptr;};
    inline const Models::ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies & domainBlacklistPolicies() const { DARABONBA_PTR_GET_CONST(domainBlacklistPolicies_, Models::ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies) };
    inline Models::ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies domainBlacklistPolicies() { DARABONBA_PTR_GET(domainBlacklistPolicies_, Models::ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies) };
    inline ListApprovalProcessesResponseBodyProcesses& setDomainBlacklistPolicies(const Models::ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies & domainBlacklistPolicies) { DARABONBA_PTR_SET_VALUE(domainBlacklistPolicies_, domainBlacklistPolicies) };
    inline ListApprovalProcessesResponseBodyProcesses& setDomainBlacklistPolicies(Models::ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies && domainBlacklistPolicies) { DARABONBA_PTR_SET_RVALUE(domainBlacklistPolicies_, domainBlacklistPolicies) };


    // domainWhitelistPolicies Field Functions 
    bool hasDomainWhitelistPolicies() const { return this->domainWhitelistPolicies_ != nullptr;};
    void deleteDomainWhitelistPolicies() { this->domainWhitelistPolicies_ = nullptr;};
    inline const Models::ListApprovalProcessesResponseBodyProcessesDomainWhitelistPolicies & domainWhitelistPolicies() const { DARABONBA_PTR_GET_CONST(domainWhitelistPolicies_, Models::ListApprovalProcessesResponseBodyProcessesDomainWhitelistPolicies) };
    inline Models::ListApprovalProcessesResponseBodyProcessesDomainWhitelistPolicies domainWhitelistPolicies() { DARABONBA_PTR_GET(domainWhitelistPolicies_, Models::ListApprovalProcessesResponseBodyProcessesDomainWhitelistPolicies) };
    inline ListApprovalProcessesResponseBodyProcesses& setDomainWhitelistPolicies(const Models::ListApprovalProcessesResponseBodyProcessesDomainWhitelistPolicies & domainWhitelistPolicies) { DARABONBA_PTR_SET_VALUE(domainWhitelistPolicies_, domainWhitelistPolicies) };
    inline ListApprovalProcessesResponseBodyProcesses& setDomainWhitelistPolicies(Models::ListApprovalProcessesResponseBodyProcessesDomainWhitelistPolicies && domainWhitelistPolicies) { DARABONBA_PTR_SET_RVALUE(domainWhitelistPolicies_, domainWhitelistPolicies) };


    // endpointHardeningPolicies Field Functions 
    bool hasEndpointHardeningPolicies() const { return this->endpointHardeningPolicies_ != nullptr;};
    void deleteEndpointHardeningPolicies() { this->endpointHardeningPolicies_ = nullptr;};
    inline const Models::ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies & endpointHardeningPolicies() const { DARABONBA_PTR_GET_CONST(endpointHardeningPolicies_, Models::ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies) };
    inline Models::ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies endpointHardeningPolicies() { DARABONBA_PTR_GET(endpointHardeningPolicies_, Models::ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies) };
    inline ListApprovalProcessesResponseBodyProcesses& setEndpointHardeningPolicies(const Models::ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies & endpointHardeningPolicies) { DARABONBA_PTR_SET_VALUE(endpointHardeningPolicies_, endpointHardeningPolicies) };
    inline ListApprovalProcessesResponseBodyProcesses& setEndpointHardeningPolicies(Models::ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies && endpointHardeningPolicies) { DARABONBA_PTR_SET_RVALUE(endpointHardeningPolicies_, endpointHardeningPolicies) };


    // peripheralBlockPolicies Field Functions 
    bool hasPeripheralBlockPolicies() const { return this->peripheralBlockPolicies_ != nullptr;};
    void deletePeripheralBlockPolicies() { this->peripheralBlockPolicies_ = nullptr;};
    inline const Models::ListApprovalProcessesResponseBodyProcessesPeripheralBlockPolicies & peripheralBlockPolicies() const { DARABONBA_PTR_GET_CONST(peripheralBlockPolicies_, Models::ListApprovalProcessesResponseBodyProcessesPeripheralBlockPolicies) };
    inline Models::ListApprovalProcessesResponseBodyProcessesPeripheralBlockPolicies peripheralBlockPolicies() { DARABONBA_PTR_GET(peripheralBlockPolicies_, Models::ListApprovalProcessesResponseBodyProcessesPeripheralBlockPolicies) };
    inline ListApprovalProcessesResponseBodyProcesses& setPeripheralBlockPolicies(const Models::ListApprovalProcessesResponseBodyProcessesPeripheralBlockPolicies & peripheralBlockPolicies) { DARABONBA_PTR_SET_VALUE(peripheralBlockPolicies_, peripheralBlockPolicies) };
    inline ListApprovalProcessesResponseBodyProcesses& setPeripheralBlockPolicies(Models::ListApprovalProcessesResponseBodyProcessesPeripheralBlockPolicies && peripheralBlockPolicies) { DARABONBA_PTR_SET_RVALUE(peripheralBlockPolicies_, peripheralBlockPolicies) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline ListApprovalProcessesResponseBodyProcesses& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline ListApprovalProcessesResponseBodyProcesses& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // processNodes Field Functions 
    bool hasProcessNodes() const { return this->processNodes_ != nullptr;};
    void deleteProcessNodes() { this->processNodes_ = nullptr;};
    inline const vector<vector<Models::ListApprovalProcessesResponseBodyProcessesProcessNodes>> & processNodes() const { DARABONBA_PTR_GET_CONST(processNodes_, vector<vector<Models::ListApprovalProcessesResponseBodyProcessesProcessNodes>>) };
    inline vector<vector<Models::ListApprovalProcessesResponseBodyProcessesProcessNodes>> processNodes() { DARABONBA_PTR_GET(processNodes_, vector<vector<Models::ListApprovalProcessesResponseBodyProcessesProcessNodes>>) };
    inline ListApprovalProcessesResponseBodyProcesses& setProcessNodes(const vector<vector<Models::ListApprovalProcessesResponseBodyProcessesProcessNodes>> & processNodes) { DARABONBA_PTR_SET_VALUE(processNodes_, processNodes) };
    inline ListApprovalProcessesResponseBodyProcesses& setProcessNodes(vector<vector<Models::ListApprovalProcessesResponseBodyProcessesProcessNodes>> && processNodes) { DARABONBA_PTR_SET_RVALUE(processNodes_, processNodes) };


    // softwareBlockPolicies Field Functions 
    bool hasSoftwareBlockPolicies() const { return this->softwareBlockPolicies_ != nullptr;};
    void deleteSoftwareBlockPolicies() { this->softwareBlockPolicies_ = nullptr;};
    inline const Models::ListApprovalProcessesResponseBodyProcessesSoftwareBlockPolicies & softwareBlockPolicies() const { DARABONBA_PTR_GET_CONST(softwareBlockPolicies_, Models::ListApprovalProcessesResponseBodyProcessesSoftwareBlockPolicies) };
    inline Models::ListApprovalProcessesResponseBodyProcessesSoftwareBlockPolicies softwareBlockPolicies() { DARABONBA_PTR_GET(softwareBlockPolicies_, Models::ListApprovalProcessesResponseBodyProcessesSoftwareBlockPolicies) };
    inline ListApprovalProcessesResponseBodyProcesses& setSoftwareBlockPolicies(const Models::ListApprovalProcessesResponseBodyProcessesSoftwareBlockPolicies & softwareBlockPolicies) { DARABONBA_PTR_SET_VALUE(softwareBlockPolicies_, softwareBlockPolicies) };
    inline ListApprovalProcessesResponseBodyProcesses& setSoftwareBlockPolicies(Models::ListApprovalProcessesResponseBodyProcessesSoftwareBlockPolicies && softwareBlockPolicies) { DARABONBA_PTR_SET_RVALUE(softwareBlockPolicies_, softwareBlockPolicies) };


    // softwareHardeningPolicies Field Functions 
    bool hasSoftwareHardeningPolicies() const { return this->softwareHardeningPolicies_ != nullptr;};
    void deleteSoftwareHardeningPolicies() { this->softwareHardeningPolicies_ = nullptr;};
    inline const Models::ListApprovalProcessesResponseBodyProcessesSoftwareHardeningPolicies & softwareHardeningPolicies() const { DARABONBA_PTR_GET_CONST(softwareHardeningPolicies_, Models::ListApprovalProcessesResponseBodyProcessesSoftwareHardeningPolicies) };
    inline Models::ListApprovalProcessesResponseBodyProcessesSoftwareHardeningPolicies softwareHardeningPolicies() { DARABONBA_PTR_GET(softwareHardeningPolicies_, Models::ListApprovalProcessesResponseBodyProcessesSoftwareHardeningPolicies) };
    inline ListApprovalProcessesResponseBodyProcesses& setSoftwareHardeningPolicies(const Models::ListApprovalProcessesResponseBodyProcessesSoftwareHardeningPolicies & softwareHardeningPolicies) { DARABONBA_PTR_SET_VALUE(softwareHardeningPolicies_, softwareHardeningPolicies) };
    inline ListApprovalProcessesResponseBodyProcesses& setSoftwareHardeningPolicies(Models::ListApprovalProcessesResponseBodyProcessesSoftwareHardeningPolicies && softwareHardeningPolicies) { DARABONBA_PTR_SET_RVALUE(softwareHardeningPolicies_, softwareHardeningPolicies) };


  protected:
    std::shared_ptr<Models::ListApprovalProcessesResponseBodyProcessesAppUninstallPolicies> appUninstallPolicies_ = nullptr;
    std::shared_ptr<int32_t> approvalType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::ListApprovalProcessesResponseBodyProcessesDeviceRegistrationPolicies> deviceRegistrationPolicies_ = nullptr;
    std::shared_ptr<Models::ListApprovalProcessesResponseBodyProcessesDlpSendPolicies> dlpSendPolicies_ = nullptr;
    std::shared_ptr<Models::ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies> domainBlacklistPolicies_ = nullptr;
    std::shared_ptr<Models::ListApprovalProcessesResponseBodyProcessesDomainWhitelistPolicies> domainWhitelistPolicies_ = nullptr;
    std::shared_ptr<Models::ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies> endpointHardeningPolicies_ = nullptr;
    std::shared_ptr<Models::ListApprovalProcessesResponseBodyProcessesPeripheralBlockPolicies> peripheralBlockPolicies_ = nullptr;
    std::shared_ptr<string> processId_ = nullptr;
    std::shared_ptr<string> processName_ = nullptr;
    std::shared_ptr<vector<vector<Models::ListApprovalProcessesResponseBodyProcessesProcessNodes>>> processNodes_ = nullptr;
    std::shared_ptr<Models::ListApprovalProcessesResponseBodyProcessesSoftwareBlockPolicies> softwareBlockPolicies_ = nullptr;
    std::shared_ptr<Models::ListApprovalProcessesResponseBodyProcessesSoftwareHardeningPolicies> softwareHardeningPolicies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
