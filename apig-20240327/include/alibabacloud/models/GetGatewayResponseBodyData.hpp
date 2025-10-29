// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGatewayResponseBodyDataEnvironments.hpp>
#include <alibabacloud/models/GetGatewayResponseBodyDataLoadBalancers.hpp>
#include <alibabacloud/models/GetGatewayResponseBodyDataMaintenancePeriod.hpp>
#include <alibabacloud/models/GetGatewayResponseBodyDataSecurityGroup.hpp>
#include <alibabacloud/models/GetGatewayResponseBodyDataTags.hpp>
#include <alibabacloud/models/GetGatewayResponseBodyDataVSwitch.hpp>
#include <alibabacloud/models/GetGatewayResponseBodyDataVpc.hpp>
#include <alibabacloud/models/GetGatewayResponseBodyDataZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetGatewayResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(createFrom, createFrom_);
      DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(environments, environments_);
      DARABONBA_PTR_TO_JSON(expireTimestamp, expireTimestamp_);
      DARABONBA_PTR_TO_JSON(gatewayEdition, gatewayEdition_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(isp, isp_);
      DARABONBA_PTR_TO_JSON(loadBalancers, loadBalancers_);
      DARABONBA_PTR_TO_JSON(maintenancePeriod, maintenancePeriod_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(replicas, replicas_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(securityGroup, securityGroup_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(targetVersion, targetVersion_);
      DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
      DARABONBA_PTR_TO_JSON(vSwitch, vSwitch_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(vpc, vpc_);
      DARABONBA_PTR_TO_JSON(zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(createFrom, createFrom_);
      DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(environments, environments_);
      DARABONBA_PTR_FROM_JSON(expireTimestamp, expireTimestamp_);
      DARABONBA_PTR_FROM_JSON(gatewayEdition, gatewayEdition_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(isp, isp_);
      DARABONBA_PTR_FROM_JSON(loadBalancers, loadBalancers_);
      DARABONBA_PTR_FROM_JSON(maintenancePeriod, maintenancePeriod_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(securityGroup, securityGroup_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(targetVersion, targetVersion_);
      DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
      DARABONBA_PTR_FROM_JSON(vSwitch, vSwitch_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(vpc, vpc_);
      DARABONBA_PTR_FROM_JSON(zones, zones_);
    };
    GetGatewayResponseBodyData() = default ;
    GetGatewayResponseBodyData(const GetGatewayResponseBodyData &) = default ;
    GetGatewayResponseBodyData(GetGatewayResponseBodyData &&) = default ;
    GetGatewayResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayResponseBodyData() = default ;
    GetGatewayResponseBodyData& operator=(const GetGatewayResponseBodyData &) = default ;
    GetGatewayResponseBodyData& operator=(GetGatewayResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && return this->createFrom_ == nullptr && return this->createTimestamp_ == nullptr && return this->environments_ == nullptr && return this->expireTimestamp_ == nullptr && return this->gatewayEdition_ == nullptr
        && return this->gatewayId_ == nullptr && return this->gatewayType_ == nullptr && return this->isp_ == nullptr && return this->loadBalancers_ == nullptr && return this->maintenancePeriod_ == nullptr
        && return this->name_ == nullptr && return this->replicas_ == nullptr && return this->resourceGroupId_ == nullptr && return this->securityGroup_ == nullptr && return this->spec_ == nullptr
        && return this->status_ == nullptr && return this->tags_ == nullptr && return this->targetVersion_ == nullptr && return this->updateTimestamp_ == nullptr && return this->vSwitch_ == nullptr
        && return this->version_ == nullptr && return this->vpc_ == nullptr && return this->zones_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline GetGatewayResponseBodyData& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // createFrom Field Functions 
    bool hasCreateFrom() const { return this->createFrom_ != nullptr;};
    void deleteCreateFrom() { this->createFrom_ = nullptr;};
    inline string createFrom() const { DARABONBA_PTR_GET_DEFAULT(createFrom_, "") };
    inline GetGatewayResponseBodyData& setCreateFrom(string createFrom) { DARABONBA_PTR_SET_VALUE(createFrom_, createFrom) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline GetGatewayResponseBodyData& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // environments Field Functions 
    bool hasEnvironments() const { return this->environments_ != nullptr;};
    void deleteEnvironments() { this->environments_ = nullptr;};
    inline const vector<Models::GetGatewayResponseBodyDataEnvironments> & environments() const { DARABONBA_PTR_GET_CONST(environments_, vector<Models::GetGatewayResponseBodyDataEnvironments>) };
    inline vector<Models::GetGatewayResponseBodyDataEnvironments> environments() { DARABONBA_PTR_GET(environments_, vector<Models::GetGatewayResponseBodyDataEnvironments>) };
    inline GetGatewayResponseBodyData& setEnvironments(const vector<Models::GetGatewayResponseBodyDataEnvironments> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
    inline GetGatewayResponseBodyData& setEnvironments(vector<Models::GetGatewayResponseBodyDataEnvironments> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


    // expireTimestamp Field Functions 
    bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
    void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
    inline int64_t expireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
    inline GetGatewayResponseBodyData& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


    // gatewayEdition Field Functions 
    bool hasGatewayEdition() const { return this->gatewayEdition_ != nullptr;};
    void deleteGatewayEdition() { this->gatewayEdition_ = nullptr;};
    inline string gatewayEdition() const { DARABONBA_PTR_GET_DEFAULT(gatewayEdition_, "") };
    inline GetGatewayResponseBodyData& setGatewayEdition(string gatewayEdition) { DARABONBA_PTR_SET_VALUE(gatewayEdition_, gatewayEdition) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline GetGatewayResponseBodyData& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string gatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline GetGatewayResponseBodyData& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline GetGatewayResponseBodyData& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // loadBalancers Field Functions 
    bool hasLoadBalancers() const { return this->loadBalancers_ != nullptr;};
    void deleteLoadBalancers() { this->loadBalancers_ = nullptr;};
    inline const vector<Models::GetGatewayResponseBodyDataLoadBalancers> & loadBalancers() const { DARABONBA_PTR_GET_CONST(loadBalancers_, vector<Models::GetGatewayResponseBodyDataLoadBalancers>) };
    inline vector<Models::GetGatewayResponseBodyDataLoadBalancers> loadBalancers() { DARABONBA_PTR_GET(loadBalancers_, vector<Models::GetGatewayResponseBodyDataLoadBalancers>) };
    inline GetGatewayResponseBodyData& setLoadBalancers(const vector<Models::GetGatewayResponseBodyDataLoadBalancers> & loadBalancers) { DARABONBA_PTR_SET_VALUE(loadBalancers_, loadBalancers) };
    inline GetGatewayResponseBodyData& setLoadBalancers(vector<Models::GetGatewayResponseBodyDataLoadBalancers> && loadBalancers) { DARABONBA_PTR_SET_RVALUE(loadBalancers_, loadBalancers) };


    // maintenancePeriod Field Functions 
    bool hasMaintenancePeriod() const { return this->maintenancePeriod_ != nullptr;};
    void deleteMaintenancePeriod() { this->maintenancePeriod_ = nullptr;};
    inline const Models::GetGatewayResponseBodyDataMaintenancePeriod & maintenancePeriod() const { DARABONBA_PTR_GET_CONST(maintenancePeriod_, Models::GetGatewayResponseBodyDataMaintenancePeriod) };
    inline Models::GetGatewayResponseBodyDataMaintenancePeriod maintenancePeriod() { DARABONBA_PTR_GET(maintenancePeriod_, Models::GetGatewayResponseBodyDataMaintenancePeriod) };
    inline GetGatewayResponseBodyData& setMaintenancePeriod(const Models::GetGatewayResponseBodyDataMaintenancePeriod & maintenancePeriod) { DARABONBA_PTR_SET_VALUE(maintenancePeriod_, maintenancePeriod) };
    inline GetGatewayResponseBodyData& setMaintenancePeriod(Models::GetGatewayResponseBodyDataMaintenancePeriod && maintenancePeriod) { DARABONBA_PTR_SET_RVALUE(maintenancePeriod_, maintenancePeriod) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGatewayResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline string replicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, "") };
    inline GetGatewayResponseBodyData& setReplicas(string replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetGatewayResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroup Field Functions 
    bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
    void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
    inline const Models::GetGatewayResponseBodyDataSecurityGroup & securityGroup() const { DARABONBA_PTR_GET_CONST(securityGroup_, Models::GetGatewayResponseBodyDataSecurityGroup) };
    inline Models::GetGatewayResponseBodyDataSecurityGroup securityGroup() { DARABONBA_PTR_GET(securityGroup_, Models::GetGatewayResponseBodyDataSecurityGroup) };
    inline GetGatewayResponseBodyData& setSecurityGroup(const Models::GetGatewayResponseBodyDataSecurityGroup & securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };
    inline GetGatewayResponseBodyData& setSecurityGroup(Models::GetGatewayResponseBodyDataSecurityGroup && securityGroup) { DARABONBA_PTR_SET_RVALUE(securityGroup_, securityGroup) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline GetGatewayResponseBodyData& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetGatewayResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetGatewayResponseBodyDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetGatewayResponseBodyDataTags>) };
    inline vector<Models::GetGatewayResponseBodyDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetGatewayResponseBodyDataTags>) };
    inline GetGatewayResponseBodyData& setTags(const vector<Models::GetGatewayResponseBodyDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetGatewayResponseBodyData& setTags(vector<Models::GetGatewayResponseBodyDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // targetVersion Field Functions 
    bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
    void deleteTargetVersion() { this->targetVersion_ = nullptr;};
    inline string targetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
    inline GetGatewayResponseBodyData& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline GetGatewayResponseBodyData& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    // vSwitch Field Functions 
    bool hasVSwitch() const { return this->vSwitch_ != nullptr;};
    void deleteVSwitch() { this->vSwitch_ = nullptr;};
    inline const Models::GetGatewayResponseBodyDataVSwitch & vSwitch() const { DARABONBA_PTR_GET_CONST(vSwitch_, Models::GetGatewayResponseBodyDataVSwitch) };
    inline Models::GetGatewayResponseBodyDataVSwitch vSwitch() { DARABONBA_PTR_GET(vSwitch_, Models::GetGatewayResponseBodyDataVSwitch) };
    inline GetGatewayResponseBodyData& setVSwitch(const Models::GetGatewayResponseBodyDataVSwitch & vSwitch) { DARABONBA_PTR_SET_VALUE(vSwitch_, vSwitch) };
    inline GetGatewayResponseBodyData& setVSwitch(Models::GetGatewayResponseBodyDataVSwitch && vSwitch) { DARABONBA_PTR_SET_RVALUE(vSwitch_, vSwitch) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetGatewayResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpc Field Functions 
    bool hasVpc() const { return this->vpc_ != nullptr;};
    void deleteVpc() { this->vpc_ = nullptr;};
    inline const Models::GetGatewayResponseBodyDataVpc & vpc() const { DARABONBA_PTR_GET_CONST(vpc_, Models::GetGatewayResponseBodyDataVpc) };
    inline Models::GetGatewayResponseBodyDataVpc vpc() { DARABONBA_PTR_GET(vpc_, Models::GetGatewayResponseBodyDataVpc) };
    inline GetGatewayResponseBodyData& setVpc(const Models::GetGatewayResponseBodyDataVpc & vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };
    inline GetGatewayResponseBodyData& setVpc(Models::GetGatewayResponseBodyDataVpc && vpc) { DARABONBA_PTR_SET_RVALUE(vpc_, vpc) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<Models::GetGatewayResponseBodyDataZones> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<Models::GetGatewayResponseBodyDataZones>) };
    inline vector<Models::GetGatewayResponseBodyDataZones> zones() { DARABONBA_PTR_GET(zones_, vector<Models::GetGatewayResponseBodyDataZones>) };
    inline GetGatewayResponseBodyData& setZones(const vector<Models::GetGatewayResponseBodyDataZones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline GetGatewayResponseBodyData& setZones(vector<Models::GetGatewayResponseBodyDataZones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // The billing method. Valid values:
    // 
    // *   POSTPAY: pay-as-you-go
    // *   PREPAY: subscription
    std::shared_ptr<string> chargeType_ = nullptr;
    // The creation source of the instance. Valid values:
    // 
    // *   Console
    std::shared_ptr<string> createFrom_ = nullptr;
    // The creation timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The list of environments associated with the instance.
    std::shared_ptr<vector<Models::GetGatewayResponseBodyDataEnvironments>> environments_ = nullptr;
    // The time when the instance expires. This value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> expireTimestamp_ = nullptr;
    std::shared_ptr<string> gatewayEdition_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // the gateway type, which is categorized into the following two types:
    // - API: indicates an API gateway
    // - AI: Indicates an AI gateway
    std::shared_ptr<string> gatewayType_ = nullptr;
    std::shared_ptr<string> isp_ = nullptr;
    // The ingress addresses of the instance.
    std::shared_ptr<vector<Models::GetGatewayResponseBodyDataLoadBalancers>> loadBalancers_ = nullptr;
    std::shared_ptr<Models::GetGatewayResponseBodyDataMaintenancePeriod> maintenancePeriod_ = nullptr;
    // The instance name.
    std::shared_ptr<string> name_ = nullptr;
    // The node quantity of the instance.
    std::shared_ptr<string> replicas_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The security group of the instance.
    std::shared_ptr<Models::GetGatewayResponseBodyDataSecurityGroup> securityGroup_ = nullptr;
    // The instance specification. Valid values:
    // 
    // *   apigw.small.x1
    std::shared_ptr<string> spec_ = nullptr;
    // The instance state. Valid values:
    // 
    // *   Running: The instance is running.
    // *   Creating: The instance is being created.
    // *   CreateFailed: The instance failed to be created.
    // *   Upgrading: The instance is being upgraded.
    // *   UpgradeFailed: The instance failed to be upgraded.
    // *   Restarting: The instance is being restarted.
    // *   RestartFailed: The instance failed to be restarted.
    // *   Deleting: The instance is being released.
    // *   DeleteFailed: The instance failed to be released.
    std::shared_ptr<string> status_ = nullptr;
    // The resource tags.
    std::shared_ptr<vector<Models::GetGatewayResponseBodyDataTags>> tags_ = nullptr;
    // The destination version of the instance. If the value is inconsistent with the version value, you can upgrade the instance.
    std::shared_ptr<string> targetVersion_ = nullptr;
    // The last update timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
    // The vSwitch associated with the instance.
    std::shared_ptr<Models::GetGatewayResponseBodyDataVSwitch> vSwitch_ = nullptr;
    // The instance version.
    std::shared_ptr<string> version_ = nullptr;
    // The VPC associated with the instance.
    std::shared_ptr<Models::GetGatewayResponseBodyDataVpc> vpc_ = nullptr;
    // The list of zones associated with the instance.
    std::shared_ptr<vector<Models::GetGatewayResponseBodyDataZones>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
