// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewaysResponseBodyDataItemsLoadBalancers.hpp>
#include <alibabacloud/models/ListGatewaysResponseBodyDataItemsSecurityGroup.hpp>
#include <alibabacloud/APIG20240327.hpp>
#include <alibabacloud/models/ListGatewaysResponseBodyDataItemsTags.hpp>
#include <alibabacloud/models/ListGatewaysResponseBodyDataItemsVSwitch.hpp>
#include <alibabacloud/models/ListGatewaysResponseBodyDataItemsVpc.hpp>
#include <alibabacloud/models/ListGatewaysResponseBodyDataItemsZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewaysResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewaysResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(createFrom, createFrom_);
      DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(expireTimestamp, expireTimestamp_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(legacy, legacy_);
      DARABONBA_PTR_TO_JSON(loadBalancers, loadBalancers_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(replicas, replicas_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(securityGroup, securityGroup_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(subDomainInfos, subDomainInfos_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(targetVersion, targetVersion_);
      DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
      DARABONBA_PTR_TO_JSON(vSwitch, vSwitch_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(vpc, vpc_);
      DARABONBA_PTR_TO_JSON(zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewaysResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(createFrom, createFrom_);
      DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(expireTimestamp, expireTimestamp_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(legacy, legacy_);
      DARABONBA_PTR_FROM_JSON(loadBalancers, loadBalancers_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(securityGroup, securityGroup_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(subDomainInfos, subDomainInfos_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(targetVersion, targetVersion_);
      DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
      DARABONBA_PTR_FROM_JSON(vSwitch, vSwitch_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(vpc, vpc_);
      DARABONBA_PTR_FROM_JSON(zones, zones_);
    };
    ListGatewaysResponseBodyDataItems() = default ;
    ListGatewaysResponseBodyDataItems(const ListGatewaysResponseBodyDataItems &) = default ;
    ListGatewaysResponseBodyDataItems(ListGatewaysResponseBodyDataItems &&) = default ;
    ListGatewaysResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewaysResponseBodyDataItems() = default ;
    ListGatewaysResponseBodyDataItems& operator=(const ListGatewaysResponseBodyDataItems &) = default ;
    ListGatewaysResponseBodyDataItems& operator=(ListGatewaysResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chargeType_ != nullptr
        && this->createFrom_ != nullptr && this->createTimestamp_ != nullptr && this->expireTimestamp_ != nullptr && this->gatewayId_ != nullptr && this->gatewayType_ != nullptr
        && this->legacy_ != nullptr && this->loadBalancers_ != nullptr && this->name_ != nullptr && this->replicas_ != nullptr && this->resourceGroupId_ != nullptr
        && this->securityGroup_ != nullptr && this->spec_ != nullptr && this->status_ != nullptr && this->subDomainInfos_ != nullptr && this->tags_ != nullptr
        && this->targetVersion_ != nullptr && this->updateTimestamp_ != nullptr && this->vSwitch_ != nullptr && this->version_ != nullptr && this->vpc_ != nullptr
        && this->zones_ != nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ListGatewaysResponseBodyDataItems& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // createFrom Field Functions 
    bool hasCreateFrom() const { return this->createFrom_ != nullptr;};
    void deleteCreateFrom() { this->createFrom_ = nullptr;};
    inline string createFrom() const { DARABONBA_PTR_GET_DEFAULT(createFrom_, "") };
    inline ListGatewaysResponseBodyDataItems& setCreateFrom(string createFrom) { DARABONBA_PTR_SET_VALUE(createFrom_, createFrom) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline ListGatewaysResponseBodyDataItems& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // expireTimestamp Field Functions 
    bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
    void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
    inline int64_t expireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
    inline ListGatewaysResponseBodyDataItems& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListGatewaysResponseBodyDataItems& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string gatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline ListGatewaysResponseBodyDataItems& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // legacy Field Functions 
    bool hasLegacy() const { return this->legacy_ != nullptr;};
    void deleteLegacy() { this->legacy_ = nullptr;};
    inline bool legacy() const { DARABONBA_PTR_GET_DEFAULT(legacy_, false) };
    inline ListGatewaysResponseBodyDataItems& setLegacy(bool legacy) { DARABONBA_PTR_SET_VALUE(legacy_, legacy) };


    // loadBalancers Field Functions 
    bool hasLoadBalancers() const { return this->loadBalancers_ != nullptr;};
    void deleteLoadBalancers() { this->loadBalancers_ = nullptr;};
    inline const vector<Models::ListGatewaysResponseBodyDataItemsLoadBalancers> & loadBalancers() const { DARABONBA_PTR_GET_CONST(loadBalancers_, vector<Models::ListGatewaysResponseBodyDataItemsLoadBalancers>) };
    inline vector<Models::ListGatewaysResponseBodyDataItemsLoadBalancers> loadBalancers() { DARABONBA_PTR_GET(loadBalancers_, vector<Models::ListGatewaysResponseBodyDataItemsLoadBalancers>) };
    inline ListGatewaysResponseBodyDataItems& setLoadBalancers(const vector<Models::ListGatewaysResponseBodyDataItemsLoadBalancers> & loadBalancers) { DARABONBA_PTR_SET_VALUE(loadBalancers_, loadBalancers) };
    inline ListGatewaysResponseBodyDataItems& setLoadBalancers(vector<Models::ListGatewaysResponseBodyDataItemsLoadBalancers> && loadBalancers) { DARABONBA_PTR_SET_RVALUE(loadBalancers_, loadBalancers) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGatewaysResponseBodyDataItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline string replicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, "") };
    inline ListGatewaysResponseBodyDataItems& setReplicas(string replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListGatewaysResponseBodyDataItems& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroup Field Functions 
    bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
    void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
    inline const Models::ListGatewaysResponseBodyDataItemsSecurityGroup & securityGroup() const { DARABONBA_PTR_GET_CONST(securityGroup_, Models::ListGatewaysResponseBodyDataItemsSecurityGroup) };
    inline Models::ListGatewaysResponseBodyDataItemsSecurityGroup securityGroup() { DARABONBA_PTR_GET(securityGroup_, Models::ListGatewaysResponseBodyDataItemsSecurityGroup) };
    inline ListGatewaysResponseBodyDataItems& setSecurityGroup(const Models::ListGatewaysResponseBodyDataItemsSecurityGroup & securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };
    inline ListGatewaysResponseBodyDataItems& setSecurityGroup(Models::ListGatewaysResponseBodyDataItemsSecurityGroup && securityGroup) { DARABONBA_PTR_SET_RVALUE(securityGroup_, securityGroup) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline ListGatewaysResponseBodyDataItems& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListGatewaysResponseBodyDataItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subDomainInfos Field Functions 
    bool hasSubDomainInfos() const { return this->subDomainInfos_ != nullptr;};
    void deleteSubDomainInfos() { this->subDomainInfos_ = nullptr;};
    inline const vector<Models::SubDomainInfo> & subDomainInfos() const { DARABONBA_PTR_GET_CONST(subDomainInfos_, vector<Models::SubDomainInfo>) };
    inline vector<Models::SubDomainInfo> subDomainInfos() { DARABONBA_PTR_GET(subDomainInfos_, vector<Models::SubDomainInfo>) };
    inline ListGatewaysResponseBodyDataItems& setSubDomainInfos(const vector<Models::SubDomainInfo> & subDomainInfos) { DARABONBA_PTR_SET_VALUE(subDomainInfos_, subDomainInfos) };
    inline ListGatewaysResponseBodyDataItems& setSubDomainInfos(vector<Models::SubDomainInfo> && subDomainInfos) { DARABONBA_PTR_SET_RVALUE(subDomainInfos_, subDomainInfos) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListGatewaysResponseBodyDataItemsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListGatewaysResponseBodyDataItemsTags>) };
    inline vector<Models::ListGatewaysResponseBodyDataItemsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListGatewaysResponseBodyDataItemsTags>) };
    inline ListGatewaysResponseBodyDataItems& setTags(const vector<Models::ListGatewaysResponseBodyDataItemsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListGatewaysResponseBodyDataItems& setTags(vector<Models::ListGatewaysResponseBodyDataItemsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // targetVersion Field Functions 
    bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
    void deleteTargetVersion() { this->targetVersion_ = nullptr;};
    inline string targetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
    inline ListGatewaysResponseBodyDataItems& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline ListGatewaysResponseBodyDataItems& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    // vSwitch Field Functions 
    bool hasVSwitch() const { return this->vSwitch_ != nullptr;};
    void deleteVSwitch() { this->vSwitch_ = nullptr;};
    inline const Models::ListGatewaysResponseBodyDataItemsVSwitch & vSwitch() const { DARABONBA_PTR_GET_CONST(vSwitch_, Models::ListGatewaysResponseBodyDataItemsVSwitch) };
    inline Models::ListGatewaysResponseBodyDataItemsVSwitch vSwitch() { DARABONBA_PTR_GET(vSwitch_, Models::ListGatewaysResponseBodyDataItemsVSwitch) };
    inline ListGatewaysResponseBodyDataItems& setVSwitch(const Models::ListGatewaysResponseBodyDataItemsVSwitch & vSwitch) { DARABONBA_PTR_SET_VALUE(vSwitch_, vSwitch) };
    inline ListGatewaysResponseBodyDataItems& setVSwitch(Models::ListGatewaysResponseBodyDataItemsVSwitch && vSwitch) { DARABONBA_PTR_SET_RVALUE(vSwitch_, vSwitch) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListGatewaysResponseBodyDataItems& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpc Field Functions 
    bool hasVpc() const { return this->vpc_ != nullptr;};
    void deleteVpc() { this->vpc_ = nullptr;};
    inline const Models::ListGatewaysResponseBodyDataItemsVpc & vpc() const { DARABONBA_PTR_GET_CONST(vpc_, Models::ListGatewaysResponseBodyDataItemsVpc) };
    inline Models::ListGatewaysResponseBodyDataItemsVpc vpc() { DARABONBA_PTR_GET(vpc_, Models::ListGatewaysResponseBodyDataItemsVpc) };
    inline ListGatewaysResponseBodyDataItems& setVpc(const Models::ListGatewaysResponseBodyDataItemsVpc & vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };
    inline ListGatewaysResponseBodyDataItems& setVpc(Models::ListGatewaysResponseBodyDataItemsVpc && vpc) { DARABONBA_PTR_SET_RVALUE(vpc_, vpc) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<Models::ListGatewaysResponseBodyDataItemsZones> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<Models::ListGatewaysResponseBodyDataItemsZones>) };
    inline vector<Models::ListGatewaysResponseBodyDataItemsZones> zones() { DARABONBA_PTR_GET(zones_, vector<Models::ListGatewaysResponseBodyDataItemsZones>) };
    inline ListGatewaysResponseBodyDataItems& setZones(const vector<Models::ListGatewaysResponseBodyDataItemsZones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline ListGatewaysResponseBodyDataItems& setZones(vector<Models::ListGatewaysResponseBodyDataItemsZones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


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
    // The time when the instance was created. This value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The time when the instance expires. This value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> expireTimestamp_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> gatewayId_ = nullptr;
    std::shared_ptr<string> gatewayType_ = nullptr;
    std::shared_ptr<bool> legacy_ = nullptr;
    // The ingress addresses of the instance.
    std::shared_ptr<vector<Models::ListGatewaysResponseBodyDataItemsLoadBalancers>> loadBalancers_ = nullptr;
    // The instance name.
    std::shared_ptr<string> name_ = nullptr;
    // The node quantity of the instance.
    std::shared_ptr<string> replicas_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The security group information about the instance.
    std::shared_ptr<Models::ListGatewaysResponseBodyDataItemsSecurityGroup> securityGroup_ = nullptr;
    // The instance specification. Valid values:
    // 
    // *   apigw.small.x1
    std::shared_ptr<string> spec_ = nullptr;
    // The instance state. Valid values:
    // 
    // *   Running: The instance is running.
    // *   Creating: The instance is being created.
    // *   CreateFailed: The instance fails to be created.
    // *   Upgrading: The instance is being upgraded.
    // *   UpgradeFailed: The instance fails to be upgraded.
    // *   Restarting: The instance is being restarted.
    // *   RestartFailed: The instance fails to be restarted.
    // *   Deleting: The instance is being released.
    // *   DeleteFailed: The instance failed to be released.
    std::shared_ptr<string> status_ = nullptr;
    // The second-level domain names.
    std::shared_ptr<vector<Models::SubDomainInfo>> subDomainInfos_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListGatewaysResponseBodyDataItemsTags>> tags_ = nullptr;
    // The destination version of the instance. If the value is inconsistent with the current version, you can upgrade the instance.
    std::shared_ptr<string> targetVersion_ = nullptr;
    // The time when the instance was last updated. This value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
    // The vSwitch information.
    std::shared_ptr<Models::ListGatewaysResponseBodyDataItemsVSwitch> vSwitch_ = nullptr;
    // The instance version.
    std::shared_ptr<string> version_ = nullptr;
    // The virtual private cloud (VPC) information of the instance.
    std::shared_ptr<Models::ListGatewaysResponseBodyDataItemsVpc> vpc_ = nullptr;
    // The availability zones of the instance.
    std::shared_ptr<vector<Models::ListGatewaysResponseBodyDataItemsZones>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
