// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEV1REQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEV1REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateInstanceV1RequestAgentNodeGroup.hpp>
#include <vector>
#include <alibabacloud/models/CreateInstanceV1RequestBackendNodeGroups.hpp>
#include <alibabacloud/models/CreateInstanceV1RequestFrontendNodeGroups.hpp>
#include <alibabacloud/models/CreateInstanceV1RequestObserverNodeGroups.hpp>
#include <alibabacloud/models/CreateInstanceV1RequestTags.hpp>
#include <alibabacloud/models/CreateInstanceV1RequestVSwitches.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class CreateInstanceV1Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceV1Request& obj) { 
      DARABONBA_PTR_TO_JSON(AdminPassword, adminPassword_);
      DARABONBA_PTR_TO_JSON(AgentNodeGroup, agentNodeGroup_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BackendNodeGroups, backendNodeGroups_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(FrontendNodeGroups, frontendNodeGroups_);
      DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(ObserverNodeGroups, observerNodeGroups_);
      DARABONBA_PTR_TO_JSON(OssAccessingRoleName, ossAccessingRoleName_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceV1Request& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminPassword, adminPassword_);
      DARABONBA_PTR_FROM_JSON(AgentNodeGroup, agentNodeGroup_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BackendNodeGroups, backendNodeGroups_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(FrontendNodeGroups, frontendNodeGroups_);
      DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(ObserverNodeGroups, observerNodeGroups_);
      DARABONBA_PTR_FROM_JSON(OssAccessingRoleName, ossAccessingRoleName_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateInstanceV1Request() = default ;
    CreateInstanceV1Request(const CreateInstanceV1Request &) = default ;
    CreateInstanceV1Request(CreateInstanceV1Request &&) = default ;
    CreateInstanceV1Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceV1Request() = default ;
    CreateInstanceV1Request& operator=(const CreateInstanceV1Request &) = default ;
    CreateInstanceV1Request& operator=(CreateInstanceV1Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminPassword_ == nullptr
        && return this->agentNodeGroup_ == nullptr && return this->autoPay_ == nullptr && return this->autoRenew_ == nullptr && return this->backendNodeGroups_ == nullptr && return this->clientToken_ == nullptr
        && return this->duration_ == nullptr && return this->encrypted_ == nullptr && return this->frontendNodeGroups_ == nullptr && return this->gatewayType_ == nullptr && return this->instanceName_ == nullptr
        && return this->kmsKeyId_ == nullptr && return this->observerNodeGroups_ == nullptr && return this->ossAccessingRoleName_ == nullptr && return this->packageType_ == nullptr && return this->payType_ == nullptr
        && return this->pricingCycle_ == nullptr && return this->promotionOptionNo_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->runMode_ == nullptr
        && return this->tags_ == nullptr && return this->vSwitches_ == nullptr && return this->version_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // adminPassword Field Functions 
    bool hasAdminPassword() const { return this->adminPassword_ != nullptr;};
    void deleteAdminPassword() { this->adminPassword_ = nullptr;};
    inline string adminPassword() const { DARABONBA_PTR_GET_DEFAULT(adminPassword_, "") };
    inline CreateInstanceV1Request& setAdminPassword(string adminPassword) { DARABONBA_PTR_SET_VALUE(adminPassword_, adminPassword) };


    // agentNodeGroup Field Functions 
    bool hasAgentNodeGroup() const { return this->agentNodeGroup_ != nullptr;};
    void deleteAgentNodeGroup() { this->agentNodeGroup_ = nullptr;};
    inline const CreateInstanceV1RequestAgentNodeGroup & agentNodeGroup() const { DARABONBA_PTR_GET_CONST(agentNodeGroup_, CreateInstanceV1RequestAgentNodeGroup) };
    inline CreateInstanceV1RequestAgentNodeGroup agentNodeGroup() { DARABONBA_PTR_GET(agentNodeGroup_, CreateInstanceV1RequestAgentNodeGroup) };
    inline CreateInstanceV1Request& setAgentNodeGroup(const CreateInstanceV1RequestAgentNodeGroup & agentNodeGroup) { DARABONBA_PTR_SET_VALUE(agentNodeGroup_, agentNodeGroup) };
    inline CreateInstanceV1Request& setAgentNodeGroup(CreateInstanceV1RequestAgentNodeGroup && agentNodeGroup) { DARABONBA_PTR_SET_RVALUE(agentNodeGroup_, agentNodeGroup) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateInstanceV1Request& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateInstanceV1Request& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // backendNodeGroups Field Functions 
    bool hasBackendNodeGroups() const { return this->backendNodeGroups_ != nullptr;};
    void deleteBackendNodeGroups() { this->backendNodeGroups_ = nullptr;};
    inline const vector<CreateInstanceV1RequestBackendNodeGroups> & backendNodeGroups() const { DARABONBA_PTR_GET_CONST(backendNodeGroups_, vector<CreateInstanceV1RequestBackendNodeGroups>) };
    inline vector<CreateInstanceV1RequestBackendNodeGroups> backendNodeGroups() { DARABONBA_PTR_GET(backendNodeGroups_, vector<CreateInstanceV1RequestBackendNodeGroups>) };
    inline CreateInstanceV1Request& setBackendNodeGroups(const vector<CreateInstanceV1RequestBackendNodeGroups> & backendNodeGroups) { DARABONBA_PTR_SET_VALUE(backendNodeGroups_, backendNodeGroups) };
    inline CreateInstanceV1Request& setBackendNodeGroups(vector<CreateInstanceV1RequestBackendNodeGroups> && backendNodeGroups) { DARABONBA_PTR_SET_RVALUE(backendNodeGroups_, backendNodeGroups) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateInstanceV1Request& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateInstanceV1Request& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline CreateInstanceV1Request& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // frontendNodeGroups Field Functions 
    bool hasFrontendNodeGroups() const { return this->frontendNodeGroups_ != nullptr;};
    void deleteFrontendNodeGroups() { this->frontendNodeGroups_ = nullptr;};
    inline const vector<CreateInstanceV1RequestFrontendNodeGroups> & frontendNodeGroups() const { DARABONBA_PTR_GET_CONST(frontendNodeGroups_, vector<CreateInstanceV1RequestFrontendNodeGroups>) };
    inline vector<CreateInstanceV1RequestFrontendNodeGroups> frontendNodeGroups() { DARABONBA_PTR_GET(frontendNodeGroups_, vector<CreateInstanceV1RequestFrontendNodeGroups>) };
    inline CreateInstanceV1Request& setFrontendNodeGroups(const vector<CreateInstanceV1RequestFrontendNodeGroups> & frontendNodeGroups) { DARABONBA_PTR_SET_VALUE(frontendNodeGroups_, frontendNodeGroups) };
    inline CreateInstanceV1Request& setFrontendNodeGroups(vector<CreateInstanceV1RequestFrontendNodeGroups> && frontendNodeGroups) { DARABONBA_PTR_SET_RVALUE(frontendNodeGroups_, frontendNodeGroups) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string gatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline CreateInstanceV1Request& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateInstanceV1Request& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string kmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline CreateInstanceV1Request& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // observerNodeGroups Field Functions 
    bool hasObserverNodeGroups() const { return this->observerNodeGroups_ != nullptr;};
    void deleteObserverNodeGroups() { this->observerNodeGroups_ = nullptr;};
    inline const vector<CreateInstanceV1RequestObserverNodeGroups> & observerNodeGroups() const { DARABONBA_PTR_GET_CONST(observerNodeGroups_, vector<CreateInstanceV1RequestObserverNodeGroups>) };
    inline vector<CreateInstanceV1RequestObserverNodeGroups> observerNodeGroups() { DARABONBA_PTR_GET(observerNodeGroups_, vector<CreateInstanceV1RequestObserverNodeGroups>) };
    inline CreateInstanceV1Request& setObserverNodeGroups(const vector<CreateInstanceV1RequestObserverNodeGroups> & observerNodeGroups) { DARABONBA_PTR_SET_VALUE(observerNodeGroups_, observerNodeGroups) };
    inline CreateInstanceV1Request& setObserverNodeGroups(vector<CreateInstanceV1RequestObserverNodeGroups> && observerNodeGroups) { DARABONBA_PTR_SET_RVALUE(observerNodeGroups_, observerNodeGroups) };


    // ossAccessingRoleName Field Functions 
    bool hasOssAccessingRoleName() const { return this->ossAccessingRoleName_ != nullptr;};
    void deleteOssAccessingRoleName() { this->ossAccessingRoleName_ = nullptr;};
    inline string ossAccessingRoleName() const { DARABONBA_PTR_GET_DEFAULT(ossAccessingRoleName_, "") };
    inline CreateInstanceV1Request& setOssAccessingRoleName(string ossAccessingRoleName) { DARABONBA_PTR_SET_VALUE(ossAccessingRoleName_, ossAccessingRoleName) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline CreateInstanceV1Request& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateInstanceV1Request& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateInstanceV1Request& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string promotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline CreateInstanceV1Request& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateInstanceV1Request& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateInstanceV1Request& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string runMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline CreateInstanceV1Request& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateInstanceV1RequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateInstanceV1RequestTags>) };
    inline vector<CreateInstanceV1RequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateInstanceV1RequestTags>) };
    inline CreateInstanceV1Request& setTags(const vector<CreateInstanceV1RequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateInstanceV1Request& setTags(vector<CreateInstanceV1RequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const vector<CreateInstanceV1RequestVSwitches> & vSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<CreateInstanceV1RequestVSwitches>) };
    inline vector<CreateInstanceV1RequestVSwitches> vSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<CreateInstanceV1RequestVSwitches>) };
    inline CreateInstanceV1Request& setVSwitches(const vector<CreateInstanceV1RequestVSwitches> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline CreateInstanceV1Request& setVSwitches(vector<CreateInstanceV1RequestVSwitches> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateInstanceV1Request& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateInstanceV1Request& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateInstanceV1Request& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> adminPassword_ = nullptr;
    std::shared_ptr<CreateInstanceV1RequestAgentNodeGroup> agentNodeGroup_ = nullptr;
    std::shared_ptr<bool> autoPay_ = nullptr;
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<vector<CreateInstanceV1RequestBackendNodeGroups>> backendNodeGroups_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<bool> encrypted_ = nullptr;
    std::shared_ptr<vector<CreateInstanceV1RequestFrontendNodeGroups>> frontendNodeGroups_ = nullptr;
    std::shared_ptr<string> gatewayType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> kmsKeyId_ = nullptr;
    std::shared_ptr<vector<CreateInstanceV1RequestObserverNodeGroups>> observerNodeGroups_ = nullptr;
    std::shared_ptr<string> ossAccessingRoleName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> packageType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> pricingCycle_ = nullptr;
    std::shared_ptr<string> promotionOptionNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> runMode_ = nullptr;
    std::shared_ptr<vector<CreateInstanceV1RequestTags>> tags_ = nullptr;
    std::shared_ptr<vector<CreateInstanceV1RequestVSwitches>> vSwitches_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> version_ = nullptr;
    // VPC ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
