// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPROVALPROCESSRESPONSEBODYPROCESS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPROVALPROCESSRESPONSEBODYPROCESS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateApprovalProcessResponseBodyProcessAppUninstallPolicies.hpp>
#include <alibabacloud/models/CreateApprovalProcessResponseBodyProcessDeviceRegistrationPolicies.hpp>
#include <alibabacloud/models/CreateApprovalProcessResponseBodyProcessDlpSendPolicies.hpp>
#include <alibabacloud/models/CreateApprovalProcessResponseBodyProcessDomainBlacklistPolicies.hpp>
#include <alibabacloud/models/CreateApprovalProcessResponseBodyProcessDomainWhitelistPolicies.hpp>
#include <alibabacloud/models/CreateApprovalProcessResponseBodyProcessEndpointHardeningPolicies.hpp>
#include <alibabacloud/models/CreateApprovalProcessResponseBodyProcessPeripheralBlockPolicies.hpp>
#include <vector>
#include <alibabacloud/models/CreateApprovalProcessResponseBodyProcessProcessNodes.hpp>
#include <alibabacloud/models/CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies.hpp>
#include <alibabacloud/models/CreateApprovalProcessResponseBodyProcessSoftwareHardeningPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateApprovalProcessResponseBodyProcess : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApprovalProcessResponseBodyProcess& obj) { 
      DARABONBA_PTR_TO_JSON(AppUninstallPolicies, appUninstallPolicies_);
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
    friend void from_json(const Darabonba::Json& j, CreateApprovalProcessResponseBodyProcess& obj) { 
      DARABONBA_PTR_FROM_JSON(AppUninstallPolicies, appUninstallPolicies_);
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
    CreateApprovalProcessResponseBodyProcess() = default ;
    CreateApprovalProcessResponseBodyProcess(const CreateApprovalProcessResponseBodyProcess &) = default ;
    CreateApprovalProcessResponseBodyProcess(CreateApprovalProcessResponseBodyProcess &&) = default ;
    CreateApprovalProcessResponseBodyProcess(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApprovalProcessResponseBodyProcess() = default ;
    CreateApprovalProcessResponseBodyProcess& operator=(const CreateApprovalProcessResponseBodyProcess &) = default ;
    CreateApprovalProcessResponseBodyProcess& operator=(CreateApprovalProcessResponseBodyProcess &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appUninstallPolicies_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->deviceRegistrationPolicies_ == nullptr && return this->dlpSendPolicies_ == nullptr && return this->domainBlacklistPolicies_ == nullptr
        && return this->domainWhitelistPolicies_ == nullptr && return this->endpointHardeningPolicies_ == nullptr && return this->peripheralBlockPolicies_ == nullptr && return this->processId_ == nullptr && return this->processName_ == nullptr
        && return this->processNodes_ == nullptr && return this->softwareBlockPolicies_ == nullptr && return this->softwareHardeningPolicies_ == nullptr; };
    // appUninstallPolicies Field Functions 
    bool hasAppUninstallPolicies() const { return this->appUninstallPolicies_ != nullptr;};
    void deleteAppUninstallPolicies() { this->appUninstallPolicies_ = nullptr;};
    inline const Models::CreateApprovalProcessResponseBodyProcessAppUninstallPolicies & appUninstallPolicies() const { DARABONBA_PTR_GET_CONST(appUninstallPolicies_, Models::CreateApprovalProcessResponseBodyProcessAppUninstallPolicies) };
    inline Models::CreateApprovalProcessResponseBodyProcessAppUninstallPolicies appUninstallPolicies() { DARABONBA_PTR_GET(appUninstallPolicies_, Models::CreateApprovalProcessResponseBodyProcessAppUninstallPolicies) };
    inline CreateApprovalProcessResponseBodyProcess& setAppUninstallPolicies(const Models::CreateApprovalProcessResponseBodyProcessAppUninstallPolicies & appUninstallPolicies) { DARABONBA_PTR_SET_VALUE(appUninstallPolicies_, appUninstallPolicies) };
    inline CreateApprovalProcessResponseBodyProcess& setAppUninstallPolicies(Models::CreateApprovalProcessResponseBodyProcessAppUninstallPolicies && appUninstallPolicies) { DARABONBA_PTR_SET_RVALUE(appUninstallPolicies_, appUninstallPolicies) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateApprovalProcessResponseBodyProcess& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApprovalProcessResponseBodyProcess& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deviceRegistrationPolicies Field Functions 
    bool hasDeviceRegistrationPolicies() const { return this->deviceRegistrationPolicies_ != nullptr;};
    void deleteDeviceRegistrationPolicies() { this->deviceRegistrationPolicies_ = nullptr;};
    inline const Models::CreateApprovalProcessResponseBodyProcessDeviceRegistrationPolicies & deviceRegistrationPolicies() const { DARABONBA_PTR_GET_CONST(deviceRegistrationPolicies_, Models::CreateApprovalProcessResponseBodyProcessDeviceRegistrationPolicies) };
    inline Models::CreateApprovalProcessResponseBodyProcessDeviceRegistrationPolicies deviceRegistrationPolicies() { DARABONBA_PTR_GET(deviceRegistrationPolicies_, Models::CreateApprovalProcessResponseBodyProcessDeviceRegistrationPolicies) };
    inline CreateApprovalProcessResponseBodyProcess& setDeviceRegistrationPolicies(const Models::CreateApprovalProcessResponseBodyProcessDeviceRegistrationPolicies & deviceRegistrationPolicies) { DARABONBA_PTR_SET_VALUE(deviceRegistrationPolicies_, deviceRegistrationPolicies) };
    inline CreateApprovalProcessResponseBodyProcess& setDeviceRegistrationPolicies(Models::CreateApprovalProcessResponseBodyProcessDeviceRegistrationPolicies && deviceRegistrationPolicies) { DARABONBA_PTR_SET_RVALUE(deviceRegistrationPolicies_, deviceRegistrationPolicies) };


    // dlpSendPolicies Field Functions 
    bool hasDlpSendPolicies() const { return this->dlpSendPolicies_ != nullptr;};
    void deleteDlpSendPolicies() { this->dlpSendPolicies_ = nullptr;};
    inline const Models::CreateApprovalProcessResponseBodyProcessDlpSendPolicies & dlpSendPolicies() const { DARABONBA_PTR_GET_CONST(dlpSendPolicies_, Models::CreateApprovalProcessResponseBodyProcessDlpSendPolicies) };
    inline Models::CreateApprovalProcessResponseBodyProcessDlpSendPolicies dlpSendPolicies() { DARABONBA_PTR_GET(dlpSendPolicies_, Models::CreateApprovalProcessResponseBodyProcessDlpSendPolicies) };
    inline CreateApprovalProcessResponseBodyProcess& setDlpSendPolicies(const Models::CreateApprovalProcessResponseBodyProcessDlpSendPolicies & dlpSendPolicies) { DARABONBA_PTR_SET_VALUE(dlpSendPolicies_, dlpSendPolicies) };
    inline CreateApprovalProcessResponseBodyProcess& setDlpSendPolicies(Models::CreateApprovalProcessResponseBodyProcessDlpSendPolicies && dlpSendPolicies) { DARABONBA_PTR_SET_RVALUE(dlpSendPolicies_, dlpSendPolicies) };


    // domainBlacklistPolicies Field Functions 
    bool hasDomainBlacklistPolicies() const { return this->domainBlacklistPolicies_ != nullptr;};
    void deleteDomainBlacklistPolicies() { this->domainBlacklistPolicies_ = nullptr;};
    inline const Models::CreateApprovalProcessResponseBodyProcessDomainBlacklistPolicies & domainBlacklistPolicies() const { DARABONBA_PTR_GET_CONST(domainBlacklistPolicies_, Models::CreateApprovalProcessResponseBodyProcessDomainBlacklistPolicies) };
    inline Models::CreateApprovalProcessResponseBodyProcessDomainBlacklistPolicies domainBlacklistPolicies() { DARABONBA_PTR_GET(domainBlacklistPolicies_, Models::CreateApprovalProcessResponseBodyProcessDomainBlacklistPolicies) };
    inline CreateApprovalProcessResponseBodyProcess& setDomainBlacklistPolicies(const Models::CreateApprovalProcessResponseBodyProcessDomainBlacklistPolicies & domainBlacklistPolicies) { DARABONBA_PTR_SET_VALUE(domainBlacklistPolicies_, domainBlacklistPolicies) };
    inline CreateApprovalProcessResponseBodyProcess& setDomainBlacklistPolicies(Models::CreateApprovalProcessResponseBodyProcessDomainBlacklistPolicies && domainBlacklistPolicies) { DARABONBA_PTR_SET_RVALUE(domainBlacklistPolicies_, domainBlacklistPolicies) };


    // domainWhitelistPolicies Field Functions 
    bool hasDomainWhitelistPolicies() const { return this->domainWhitelistPolicies_ != nullptr;};
    void deleteDomainWhitelistPolicies() { this->domainWhitelistPolicies_ = nullptr;};
    inline const Models::CreateApprovalProcessResponseBodyProcessDomainWhitelistPolicies & domainWhitelistPolicies() const { DARABONBA_PTR_GET_CONST(domainWhitelistPolicies_, Models::CreateApprovalProcessResponseBodyProcessDomainWhitelistPolicies) };
    inline Models::CreateApprovalProcessResponseBodyProcessDomainWhitelistPolicies domainWhitelistPolicies() { DARABONBA_PTR_GET(domainWhitelistPolicies_, Models::CreateApprovalProcessResponseBodyProcessDomainWhitelistPolicies) };
    inline CreateApprovalProcessResponseBodyProcess& setDomainWhitelistPolicies(const Models::CreateApprovalProcessResponseBodyProcessDomainWhitelistPolicies & domainWhitelistPolicies) { DARABONBA_PTR_SET_VALUE(domainWhitelistPolicies_, domainWhitelistPolicies) };
    inline CreateApprovalProcessResponseBodyProcess& setDomainWhitelistPolicies(Models::CreateApprovalProcessResponseBodyProcessDomainWhitelistPolicies && domainWhitelistPolicies) { DARABONBA_PTR_SET_RVALUE(domainWhitelistPolicies_, domainWhitelistPolicies) };


    // endpointHardeningPolicies Field Functions 
    bool hasEndpointHardeningPolicies() const { return this->endpointHardeningPolicies_ != nullptr;};
    void deleteEndpointHardeningPolicies() { this->endpointHardeningPolicies_ = nullptr;};
    inline const Models::CreateApprovalProcessResponseBodyProcessEndpointHardeningPolicies & endpointHardeningPolicies() const { DARABONBA_PTR_GET_CONST(endpointHardeningPolicies_, Models::CreateApprovalProcessResponseBodyProcessEndpointHardeningPolicies) };
    inline Models::CreateApprovalProcessResponseBodyProcessEndpointHardeningPolicies endpointHardeningPolicies() { DARABONBA_PTR_GET(endpointHardeningPolicies_, Models::CreateApprovalProcessResponseBodyProcessEndpointHardeningPolicies) };
    inline CreateApprovalProcessResponseBodyProcess& setEndpointHardeningPolicies(const Models::CreateApprovalProcessResponseBodyProcessEndpointHardeningPolicies & endpointHardeningPolicies) { DARABONBA_PTR_SET_VALUE(endpointHardeningPolicies_, endpointHardeningPolicies) };
    inline CreateApprovalProcessResponseBodyProcess& setEndpointHardeningPolicies(Models::CreateApprovalProcessResponseBodyProcessEndpointHardeningPolicies && endpointHardeningPolicies) { DARABONBA_PTR_SET_RVALUE(endpointHardeningPolicies_, endpointHardeningPolicies) };


    // peripheralBlockPolicies Field Functions 
    bool hasPeripheralBlockPolicies() const { return this->peripheralBlockPolicies_ != nullptr;};
    void deletePeripheralBlockPolicies() { this->peripheralBlockPolicies_ = nullptr;};
    inline const Models::CreateApprovalProcessResponseBodyProcessPeripheralBlockPolicies & peripheralBlockPolicies() const { DARABONBA_PTR_GET_CONST(peripheralBlockPolicies_, Models::CreateApprovalProcessResponseBodyProcessPeripheralBlockPolicies) };
    inline Models::CreateApprovalProcessResponseBodyProcessPeripheralBlockPolicies peripheralBlockPolicies() { DARABONBA_PTR_GET(peripheralBlockPolicies_, Models::CreateApprovalProcessResponseBodyProcessPeripheralBlockPolicies) };
    inline CreateApprovalProcessResponseBodyProcess& setPeripheralBlockPolicies(const Models::CreateApprovalProcessResponseBodyProcessPeripheralBlockPolicies & peripheralBlockPolicies) { DARABONBA_PTR_SET_VALUE(peripheralBlockPolicies_, peripheralBlockPolicies) };
    inline CreateApprovalProcessResponseBodyProcess& setPeripheralBlockPolicies(Models::CreateApprovalProcessResponseBodyProcessPeripheralBlockPolicies && peripheralBlockPolicies) { DARABONBA_PTR_SET_RVALUE(peripheralBlockPolicies_, peripheralBlockPolicies) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline CreateApprovalProcessResponseBodyProcess& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline CreateApprovalProcessResponseBodyProcess& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // processNodes Field Functions 
    bool hasProcessNodes() const { return this->processNodes_ != nullptr;};
    void deleteProcessNodes() { this->processNodes_ = nullptr;};
    inline const vector<vector<Models::CreateApprovalProcessResponseBodyProcessProcessNodes>> & processNodes() const { DARABONBA_PTR_GET_CONST(processNodes_, vector<vector<Models::CreateApprovalProcessResponseBodyProcessProcessNodes>>) };
    inline vector<vector<Models::CreateApprovalProcessResponseBodyProcessProcessNodes>> processNodes() { DARABONBA_PTR_GET(processNodes_, vector<vector<Models::CreateApprovalProcessResponseBodyProcessProcessNodes>>) };
    inline CreateApprovalProcessResponseBodyProcess& setProcessNodes(const vector<vector<Models::CreateApprovalProcessResponseBodyProcessProcessNodes>> & processNodes) { DARABONBA_PTR_SET_VALUE(processNodes_, processNodes) };
    inline CreateApprovalProcessResponseBodyProcess& setProcessNodes(vector<vector<Models::CreateApprovalProcessResponseBodyProcessProcessNodes>> && processNodes) { DARABONBA_PTR_SET_RVALUE(processNodes_, processNodes) };


    // softwareBlockPolicies Field Functions 
    bool hasSoftwareBlockPolicies() const { return this->softwareBlockPolicies_ != nullptr;};
    void deleteSoftwareBlockPolicies() { this->softwareBlockPolicies_ = nullptr;};
    inline const Models::CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies & softwareBlockPolicies() const { DARABONBA_PTR_GET_CONST(softwareBlockPolicies_, Models::CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies) };
    inline Models::CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies softwareBlockPolicies() { DARABONBA_PTR_GET(softwareBlockPolicies_, Models::CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies) };
    inline CreateApprovalProcessResponseBodyProcess& setSoftwareBlockPolicies(const Models::CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies & softwareBlockPolicies) { DARABONBA_PTR_SET_VALUE(softwareBlockPolicies_, softwareBlockPolicies) };
    inline CreateApprovalProcessResponseBodyProcess& setSoftwareBlockPolicies(Models::CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies && softwareBlockPolicies) { DARABONBA_PTR_SET_RVALUE(softwareBlockPolicies_, softwareBlockPolicies) };


    // softwareHardeningPolicies Field Functions 
    bool hasSoftwareHardeningPolicies() const { return this->softwareHardeningPolicies_ != nullptr;};
    void deleteSoftwareHardeningPolicies() { this->softwareHardeningPolicies_ = nullptr;};
    inline const Models::CreateApprovalProcessResponseBodyProcessSoftwareHardeningPolicies & softwareHardeningPolicies() const { DARABONBA_PTR_GET_CONST(softwareHardeningPolicies_, Models::CreateApprovalProcessResponseBodyProcessSoftwareHardeningPolicies) };
    inline Models::CreateApprovalProcessResponseBodyProcessSoftwareHardeningPolicies softwareHardeningPolicies() { DARABONBA_PTR_GET(softwareHardeningPolicies_, Models::CreateApprovalProcessResponseBodyProcessSoftwareHardeningPolicies) };
    inline CreateApprovalProcessResponseBodyProcess& setSoftwareHardeningPolicies(const Models::CreateApprovalProcessResponseBodyProcessSoftwareHardeningPolicies & softwareHardeningPolicies) { DARABONBA_PTR_SET_VALUE(softwareHardeningPolicies_, softwareHardeningPolicies) };
    inline CreateApprovalProcessResponseBodyProcess& setSoftwareHardeningPolicies(Models::CreateApprovalProcessResponseBodyProcessSoftwareHardeningPolicies && softwareHardeningPolicies) { DARABONBA_PTR_SET_RVALUE(softwareHardeningPolicies_, softwareHardeningPolicies) };


  protected:
    std::shared_ptr<Models::CreateApprovalProcessResponseBodyProcessAppUninstallPolicies> appUninstallPolicies_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::CreateApprovalProcessResponseBodyProcessDeviceRegistrationPolicies> deviceRegistrationPolicies_ = nullptr;
    std::shared_ptr<Models::CreateApprovalProcessResponseBodyProcessDlpSendPolicies> dlpSendPolicies_ = nullptr;
    std::shared_ptr<Models::CreateApprovalProcessResponseBodyProcessDomainBlacklistPolicies> domainBlacklistPolicies_ = nullptr;
    std::shared_ptr<Models::CreateApprovalProcessResponseBodyProcessDomainWhitelistPolicies> domainWhitelistPolicies_ = nullptr;
    std::shared_ptr<Models::CreateApprovalProcessResponseBodyProcessEndpointHardeningPolicies> endpointHardeningPolicies_ = nullptr;
    std::shared_ptr<Models::CreateApprovalProcessResponseBodyProcessPeripheralBlockPolicies> peripheralBlockPolicies_ = nullptr;
    std::shared_ptr<string> processId_ = nullptr;
    std::shared_ptr<string> processName_ = nullptr;
    std::shared_ptr<vector<vector<Models::CreateApprovalProcessResponseBodyProcessProcessNodes>>> processNodes_ = nullptr;
    std::shared_ptr<Models::CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies> softwareBlockPolicies_ = nullptr;
    std::shared_ptr<Models::CreateApprovalProcessResponseBodyProcessSoftwareHardeningPolicies> softwareHardeningPolicies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
