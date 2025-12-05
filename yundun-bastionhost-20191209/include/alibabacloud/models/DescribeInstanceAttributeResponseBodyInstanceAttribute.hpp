// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODYINSTANCEATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODYINSTANCEATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceAttributeResponseBodyInstanceAttributePorts.hpp>
#include <alibabacloud/models/DescribeInstanceAttributeResponseBodyInstanceAttributeWhiteListPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DescribeInstanceAttributeResponseBodyInstanceAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAttributeResponseBodyInstanceAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(AppOperationModule, appOperationModule_);
      DARABONBA_PTR_TO_JSON(AuthorizedSecurityGroups, authorizedSecurityGroups_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BandwidthPackage, bandwidthPackage_);
      DARABONBA_PTR_TO_JSON(DbOperationModule, dbOperationModule_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EniInstanceId, eniInstanceId_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(HSMModule, HSMModule_);
      DARABONBA_PTR_TO_JSON(IDaaSModule, IDaaSModule_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(InternetEndpoint, internetEndpoint_);
      DARABONBA_PTR_TO_JSON(IntranetEndpoint, intranetEndpoint_);
      DARABONBA_PTR_TO_JSON(KmsSecretModule, kmsSecretModule_);
      DARABONBA_PTR_TO_JSON(LicenseCode, licenseCode_);
      DARABONBA_PTR_TO_JSON(ModifyPasswordModule, modifyPasswordModule_);
      DARABONBA_PTR_TO_JSON(NetworkProxyModule, networkProxyModule_);
      DARABONBA_PTR_TO_JSON(Ports, ports_);
      DARABONBA_PTR_TO_JSON(PrivateExportIps, privateExportIps_);
      DARABONBA_PTR_TO_JSON(PrivateWhiteList, privateWhiteList_);
      DARABONBA_PTR_TO_JSON(PublicExportIps, publicExportIps_);
      DARABONBA_PTR_TO_JSON(PublicIps, publicIps_);
      DARABONBA_PTR_TO_JSON(PublicNetworkAccess, publicNetworkAccess_);
      DARABONBA_PTR_TO_JSON(PublicWhiteList, publicWhiteList_);
      DARABONBA_PTR_TO_JSON(RDModule, RDModule_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RouterRules, routerRules_);
      DARABONBA_PTR_TO_JSON(ScriptDeliverModule, scriptDeliverModule_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(SlaveVswitchId, slaveVswitchId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(WebTerminalModule, webTerminalModule_);
      DARABONBA_PTR_TO_JSON(WhiteListPolicies, whiteListPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAttributeResponseBodyInstanceAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(AppOperationModule, appOperationModule_);
      DARABONBA_PTR_FROM_JSON(AuthorizedSecurityGroups, authorizedSecurityGroups_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackage, bandwidthPackage_);
      DARABONBA_PTR_FROM_JSON(DbOperationModule, dbOperationModule_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EniInstanceId, eniInstanceId_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(HSMModule, HSMModule_);
      DARABONBA_PTR_FROM_JSON(IDaaSModule, IDaaSModule_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(InternetEndpoint, internetEndpoint_);
      DARABONBA_PTR_FROM_JSON(IntranetEndpoint, intranetEndpoint_);
      DARABONBA_PTR_FROM_JSON(KmsSecretModule, kmsSecretModule_);
      DARABONBA_PTR_FROM_JSON(LicenseCode, licenseCode_);
      DARABONBA_PTR_FROM_JSON(ModifyPasswordModule, modifyPasswordModule_);
      DARABONBA_PTR_FROM_JSON(NetworkProxyModule, networkProxyModule_);
      DARABONBA_PTR_FROM_JSON(Ports, ports_);
      DARABONBA_PTR_FROM_JSON(PrivateExportIps, privateExportIps_);
      DARABONBA_PTR_FROM_JSON(PrivateWhiteList, privateWhiteList_);
      DARABONBA_PTR_FROM_JSON(PublicExportIps, publicExportIps_);
      DARABONBA_PTR_FROM_JSON(PublicIps, publicIps_);
      DARABONBA_PTR_FROM_JSON(PublicNetworkAccess, publicNetworkAccess_);
      DARABONBA_PTR_FROM_JSON(PublicWhiteList, publicWhiteList_);
      DARABONBA_PTR_FROM_JSON(RDModule, RDModule_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RouterRules, routerRules_);
      DARABONBA_PTR_FROM_JSON(ScriptDeliverModule, scriptDeliverModule_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(SlaveVswitchId, slaveVswitchId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(WebTerminalModule, webTerminalModule_);
      DARABONBA_PTR_FROM_JSON(WhiteListPolicies, whiteListPolicies_);
    };
    DescribeInstanceAttributeResponseBodyInstanceAttribute() = default ;
    DescribeInstanceAttributeResponseBodyInstanceAttribute(const DescribeInstanceAttributeResponseBodyInstanceAttribute &) = default ;
    DescribeInstanceAttributeResponseBodyInstanceAttribute(DescribeInstanceAttributeResponseBodyInstanceAttribute &&) = default ;
    DescribeInstanceAttributeResponseBodyInstanceAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAttributeResponseBodyInstanceAttribute() = default ;
    DescribeInstanceAttributeResponseBodyInstanceAttribute& operator=(const DescribeInstanceAttributeResponseBodyInstanceAttribute &) = default ;
    DescribeInstanceAttributeResponseBodyInstanceAttribute& operator=(DescribeInstanceAttributeResponseBodyInstanceAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appOperationModule_ == nullptr
        && return this->authorizedSecurityGroups_ == nullptr && return this->bandwidth_ == nullptr && return this->bandwidthPackage_ == nullptr && return this->dbOperationModule_ == nullptr && return this->description_ == nullptr
        && return this->eniInstanceId_ == nullptr && return this->expireTime_ == nullptr && return this->HSMModule_ == nullptr && return this->IDaaSModule_ == nullptr && return this->instanceId_ == nullptr
        && return this->instanceStatus_ == nullptr && return this->internetEndpoint_ == nullptr && return this->intranetEndpoint_ == nullptr && return this->kmsSecretModule_ == nullptr && return this->licenseCode_ == nullptr
        && return this->modifyPasswordModule_ == nullptr && return this->networkProxyModule_ == nullptr && return this->ports_ == nullptr && return this->privateExportIps_ == nullptr && return this->privateWhiteList_ == nullptr
        && return this->publicExportIps_ == nullptr && return this->publicIps_ == nullptr && return this->publicNetworkAccess_ == nullptr && return this->publicWhiteList_ == nullptr && return this->RDModule_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->routerRules_ == nullptr && return this->scriptDeliverModule_ == nullptr && return this->securityGroupIds_ == nullptr
        && return this->slaveVswitchId_ == nullptr && return this->startTime_ == nullptr && return this->storage_ == nullptr && return this->vpcId_ == nullptr && return this->vswitchId_ == nullptr
        && return this->webTerminalModule_ == nullptr && return this->whiteListPolicies_ == nullptr; };
    // appOperationModule Field Functions 
    bool hasAppOperationModule() const { return this->appOperationModule_ != nullptr;};
    void deleteAppOperationModule() { this->appOperationModule_ = nullptr;};
    inline string appOperationModule() const { DARABONBA_PTR_GET_DEFAULT(appOperationModule_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setAppOperationModule(string appOperationModule) { DARABONBA_PTR_SET_VALUE(appOperationModule_, appOperationModule) };


    // authorizedSecurityGroups Field Functions 
    bool hasAuthorizedSecurityGroups() const { return this->authorizedSecurityGroups_ != nullptr;};
    void deleteAuthorizedSecurityGroups() { this->authorizedSecurityGroups_ = nullptr;};
    inline const vector<string> & authorizedSecurityGroups() const { DARABONBA_PTR_GET_CONST(authorizedSecurityGroups_, vector<string>) };
    inline vector<string> authorizedSecurityGroups() { DARABONBA_PTR_GET(authorizedSecurityGroups_, vector<string>) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setAuthorizedSecurityGroups(const vector<string> & authorizedSecurityGroups) { DARABONBA_PTR_SET_VALUE(authorizedSecurityGroups_, authorizedSecurityGroups) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setAuthorizedSecurityGroups(vector<string> && authorizedSecurityGroups) { DARABONBA_PTR_SET_RVALUE(authorizedSecurityGroups_, authorizedSecurityGroups) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline string bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bandwidthPackage Field Functions 
    bool hasBandwidthPackage() const { return this->bandwidthPackage_ != nullptr;};
    void deleteBandwidthPackage() { this->bandwidthPackage_ = nullptr;};
    inline string bandwidthPackage() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackage_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setBandwidthPackage(string bandwidthPackage) { DARABONBA_PTR_SET_VALUE(bandwidthPackage_, bandwidthPackage) };


    // dbOperationModule Field Functions 
    bool hasDbOperationModule() const { return this->dbOperationModule_ != nullptr;};
    void deleteDbOperationModule() { this->dbOperationModule_ = nullptr;};
    inline string dbOperationModule() const { DARABONBA_PTR_GET_DEFAULT(dbOperationModule_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setDbOperationModule(string dbOperationModule) { DARABONBA_PTR_SET_VALUE(dbOperationModule_, dbOperationModule) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eniInstanceId Field Functions 
    bool hasEniInstanceId() const { return this->eniInstanceId_ != nullptr;};
    void deleteEniInstanceId() { this->eniInstanceId_ = nullptr;};
    inline string eniInstanceId() const { DARABONBA_PTR_GET_DEFAULT(eniInstanceId_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setEniInstanceId(string eniInstanceId) { DARABONBA_PTR_SET_VALUE(eniInstanceId_, eniInstanceId) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // HSMModule Field Functions 
    bool hasHSMModule() const { return this->HSMModule_ != nullptr;};
    void deleteHSMModule() { this->HSMModule_ = nullptr;};
    inline string HSMModule() const { DARABONBA_PTR_GET_DEFAULT(HSMModule_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setHSMModule(string HSMModule) { DARABONBA_PTR_SET_VALUE(HSMModule_, HSMModule) };


    // IDaaSModule Field Functions 
    bool hasIDaaSModule() const { return this->IDaaSModule_ != nullptr;};
    void deleteIDaaSModule() { this->IDaaSModule_ = nullptr;};
    inline string IDaaSModule() const { DARABONBA_PTR_GET_DEFAULT(IDaaSModule_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setIDaaSModule(string IDaaSModule) { DARABONBA_PTR_SET_VALUE(IDaaSModule_, IDaaSModule) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // internetEndpoint Field Functions 
    bool hasInternetEndpoint() const { return this->internetEndpoint_ != nullptr;};
    void deleteInternetEndpoint() { this->internetEndpoint_ = nullptr;};
    inline string internetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(internetEndpoint_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setInternetEndpoint(string internetEndpoint) { DARABONBA_PTR_SET_VALUE(internetEndpoint_, internetEndpoint) };


    // intranetEndpoint Field Functions 
    bool hasIntranetEndpoint() const { return this->intranetEndpoint_ != nullptr;};
    void deleteIntranetEndpoint() { this->intranetEndpoint_ = nullptr;};
    inline string intranetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(intranetEndpoint_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setIntranetEndpoint(string intranetEndpoint) { DARABONBA_PTR_SET_VALUE(intranetEndpoint_, intranetEndpoint) };


    // kmsSecretModule Field Functions 
    bool hasKmsSecretModule() const { return this->kmsSecretModule_ != nullptr;};
    void deleteKmsSecretModule() { this->kmsSecretModule_ = nullptr;};
    inline string kmsSecretModule() const { DARABONBA_PTR_GET_DEFAULT(kmsSecretModule_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setKmsSecretModule(string kmsSecretModule) { DARABONBA_PTR_SET_VALUE(kmsSecretModule_, kmsSecretModule) };


    // licenseCode Field Functions 
    bool hasLicenseCode() const { return this->licenseCode_ != nullptr;};
    void deleteLicenseCode() { this->licenseCode_ = nullptr;};
    inline string licenseCode() const { DARABONBA_PTR_GET_DEFAULT(licenseCode_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setLicenseCode(string licenseCode) { DARABONBA_PTR_SET_VALUE(licenseCode_, licenseCode) };


    // modifyPasswordModule Field Functions 
    bool hasModifyPasswordModule() const { return this->modifyPasswordModule_ != nullptr;};
    void deleteModifyPasswordModule() { this->modifyPasswordModule_ = nullptr;};
    inline string modifyPasswordModule() const { DARABONBA_PTR_GET_DEFAULT(modifyPasswordModule_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setModifyPasswordModule(string modifyPasswordModule) { DARABONBA_PTR_SET_VALUE(modifyPasswordModule_, modifyPasswordModule) };


    // networkProxyModule Field Functions 
    bool hasNetworkProxyModule() const { return this->networkProxyModule_ != nullptr;};
    void deleteNetworkProxyModule() { this->networkProxyModule_ = nullptr;};
    inline string networkProxyModule() const { DARABONBA_PTR_GET_DEFAULT(networkProxyModule_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setNetworkProxyModule(string networkProxyModule) { DARABONBA_PTR_SET_VALUE(networkProxyModule_, networkProxyModule) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<Models::DescribeInstanceAttributeResponseBodyInstanceAttributePorts> & ports() const { DARABONBA_PTR_GET_CONST(ports_, vector<Models::DescribeInstanceAttributeResponseBodyInstanceAttributePorts>) };
    inline vector<Models::DescribeInstanceAttributeResponseBodyInstanceAttributePorts> ports() { DARABONBA_PTR_GET(ports_, vector<Models::DescribeInstanceAttributeResponseBodyInstanceAttributePorts>) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setPorts(const vector<Models::DescribeInstanceAttributeResponseBodyInstanceAttributePorts> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setPorts(vector<Models::DescribeInstanceAttributeResponseBodyInstanceAttributePorts> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // privateExportIps Field Functions 
    bool hasPrivateExportIps() const { return this->privateExportIps_ != nullptr;};
    void deletePrivateExportIps() { this->privateExportIps_ = nullptr;};
    inline const vector<string> & privateExportIps() const { DARABONBA_PTR_GET_CONST(privateExportIps_, vector<string>) };
    inline vector<string> privateExportIps() { DARABONBA_PTR_GET(privateExportIps_, vector<string>) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setPrivateExportIps(const vector<string> & privateExportIps) { DARABONBA_PTR_SET_VALUE(privateExportIps_, privateExportIps) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setPrivateExportIps(vector<string> && privateExportIps) { DARABONBA_PTR_SET_RVALUE(privateExportIps_, privateExportIps) };


    // privateWhiteList Field Functions 
    bool hasPrivateWhiteList() const { return this->privateWhiteList_ != nullptr;};
    void deletePrivateWhiteList() { this->privateWhiteList_ = nullptr;};
    inline const vector<string> & privateWhiteList() const { DARABONBA_PTR_GET_CONST(privateWhiteList_, vector<string>) };
    inline vector<string> privateWhiteList() { DARABONBA_PTR_GET(privateWhiteList_, vector<string>) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setPrivateWhiteList(const vector<string> & privateWhiteList) { DARABONBA_PTR_SET_VALUE(privateWhiteList_, privateWhiteList) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setPrivateWhiteList(vector<string> && privateWhiteList) { DARABONBA_PTR_SET_RVALUE(privateWhiteList_, privateWhiteList) };


    // publicExportIps Field Functions 
    bool hasPublicExportIps() const { return this->publicExportIps_ != nullptr;};
    void deletePublicExportIps() { this->publicExportIps_ = nullptr;};
    inline const vector<string> & publicExportIps() const { DARABONBA_PTR_GET_CONST(publicExportIps_, vector<string>) };
    inline vector<string> publicExportIps() { DARABONBA_PTR_GET(publicExportIps_, vector<string>) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setPublicExportIps(const vector<string> & publicExportIps) { DARABONBA_PTR_SET_VALUE(publicExportIps_, publicExportIps) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setPublicExportIps(vector<string> && publicExportIps) { DARABONBA_PTR_SET_RVALUE(publicExportIps_, publicExportIps) };


    // publicIps Field Functions 
    bool hasPublicIps() const { return this->publicIps_ != nullptr;};
    void deletePublicIps() { this->publicIps_ = nullptr;};
    inline const vector<string> & publicIps() const { DARABONBA_PTR_GET_CONST(publicIps_, vector<string>) };
    inline vector<string> publicIps() { DARABONBA_PTR_GET(publicIps_, vector<string>) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setPublicIps(const vector<string> & publicIps) { DARABONBA_PTR_SET_VALUE(publicIps_, publicIps) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setPublicIps(vector<string> && publicIps) { DARABONBA_PTR_SET_RVALUE(publicIps_, publicIps) };


    // publicNetworkAccess Field Functions 
    bool hasPublicNetworkAccess() const { return this->publicNetworkAccess_ != nullptr;};
    void deletePublicNetworkAccess() { this->publicNetworkAccess_ = nullptr;};
    inline bool publicNetworkAccess() const { DARABONBA_PTR_GET_DEFAULT(publicNetworkAccess_, false) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setPublicNetworkAccess(bool publicNetworkAccess) { DARABONBA_PTR_SET_VALUE(publicNetworkAccess_, publicNetworkAccess) };


    // publicWhiteList Field Functions 
    bool hasPublicWhiteList() const { return this->publicWhiteList_ != nullptr;};
    void deletePublicWhiteList() { this->publicWhiteList_ = nullptr;};
    inline const vector<string> & publicWhiteList() const { DARABONBA_PTR_GET_CONST(publicWhiteList_, vector<string>) };
    inline vector<string> publicWhiteList() { DARABONBA_PTR_GET(publicWhiteList_, vector<string>) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setPublicWhiteList(const vector<string> & publicWhiteList) { DARABONBA_PTR_SET_VALUE(publicWhiteList_, publicWhiteList) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setPublicWhiteList(vector<string> && publicWhiteList) { DARABONBA_PTR_SET_RVALUE(publicWhiteList_, publicWhiteList) };


    // RDModule Field Functions 
    bool hasRDModule() const { return this->RDModule_ != nullptr;};
    void deleteRDModule() { this->RDModule_ = nullptr;};
    inline string RDModule() const { DARABONBA_PTR_GET_DEFAULT(RDModule_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setRDModule(string RDModule) { DARABONBA_PTR_SET_VALUE(RDModule_, RDModule) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // routerRules Field Functions 
    bool hasRouterRules() const { return this->routerRules_ != nullptr;};
    void deleteRouterRules() { this->routerRules_ = nullptr;};
    inline const vector<string> & routerRules() const { DARABONBA_PTR_GET_CONST(routerRules_, vector<string>) };
    inline vector<string> routerRules() { DARABONBA_PTR_GET(routerRules_, vector<string>) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setRouterRules(const vector<string> & routerRules) { DARABONBA_PTR_SET_VALUE(routerRules_, routerRules) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setRouterRules(vector<string> && routerRules) { DARABONBA_PTR_SET_RVALUE(routerRules_, routerRules) };


    // scriptDeliverModule Field Functions 
    bool hasScriptDeliverModule() const { return this->scriptDeliverModule_ != nullptr;};
    void deleteScriptDeliverModule() { this->scriptDeliverModule_ = nullptr;};
    inline string scriptDeliverModule() const { DARABONBA_PTR_GET_DEFAULT(scriptDeliverModule_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setScriptDeliverModule(string scriptDeliverModule) { DARABONBA_PTR_SET_VALUE(scriptDeliverModule_, scriptDeliverModule) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // slaveVswitchId Field Functions 
    bool hasSlaveVswitchId() const { return this->slaveVswitchId_ != nullptr;};
    void deleteSlaveVswitchId() { this->slaveVswitchId_ = nullptr;};
    inline string slaveVswitchId() const { DARABONBA_PTR_GET_DEFAULT(slaveVswitchId_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setSlaveVswitchId(string slaveVswitchId) { DARABONBA_PTR_SET_VALUE(slaveVswitchId_, slaveVswitchId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline int64_t storage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0L) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setStorage(int64_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // webTerminalModule Field Functions 
    bool hasWebTerminalModule() const { return this->webTerminalModule_ != nullptr;};
    void deleteWebTerminalModule() { this->webTerminalModule_ = nullptr;};
    inline string webTerminalModule() const { DARABONBA_PTR_GET_DEFAULT(webTerminalModule_, "") };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setWebTerminalModule(string webTerminalModule) { DARABONBA_PTR_SET_VALUE(webTerminalModule_, webTerminalModule) };


    // whiteListPolicies Field Functions 
    bool hasWhiteListPolicies() const { return this->whiteListPolicies_ != nullptr;};
    void deleteWhiteListPolicies() { this->whiteListPolicies_ = nullptr;};
    inline const vector<Models::DescribeInstanceAttributeResponseBodyInstanceAttributeWhiteListPolicies> & whiteListPolicies() const { DARABONBA_PTR_GET_CONST(whiteListPolicies_, vector<Models::DescribeInstanceAttributeResponseBodyInstanceAttributeWhiteListPolicies>) };
    inline vector<Models::DescribeInstanceAttributeResponseBodyInstanceAttributeWhiteListPolicies> whiteListPolicies() { DARABONBA_PTR_GET(whiteListPolicies_, vector<Models::DescribeInstanceAttributeResponseBodyInstanceAttributeWhiteListPolicies>) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setWhiteListPolicies(const vector<Models::DescribeInstanceAttributeResponseBodyInstanceAttributeWhiteListPolicies> & whiteListPolicies) { DARABONBA_PTR_SET_VALUE(whiteListPolicies_, whiteListPolicies) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute& setWhiteListPolicies(vector<Models::DescribeInstanceAttributeResponseBodyInstanceAttributeWhiteListPolicies> && whiteListPolicies) { DARABONBA_PTR_SET_RVALUE(whiteListPolicies_, whiteListPolicies) };


  protected:
    std::shared_ptr<string> appOperationModule_ = nullptr;
    // The IDs of authorized security groups.
    std::shared_ptr<vector<string>> authorizedSecurityGroups_ = nullptr;
    // The total bandwidth of the bastion host.
    std::shared_ptr<string> bandwidth_ = nullptr;
    // The bandwidth plan ID.
    std::shared_ptr<string> bandwidthPackage_ = nullptr;
    // The status of the database O&M feature.
    std::shared_ptr<string> dbOperationModule_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the Elastic Network Interface (ENI).
    std::shared_ptr<string> eniInstanceId_ = nullptr;
    // The time when the instance expires.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    std::shared_ptr<string> HSMModule_ = nullptr;
    std::shared_ptr<string> IDaaSModule_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The status of the instance. Valid values:
    // 
    // *   PENDING: The instance is not initialized.
    // *   CREATING: The instance is being created.
    // *   RUNNING: The instance is running.
    // *   EXPIRED: The instance expired.
    // *   CREATE_FAILED: The instance fails to be created.
    // *   UPGRADING: The configurations of the instance are being changed.
    // *   UPGRADE_FAILED: The configurations of the instance fail to be changed.
    std::shared_ptr<string> instanceStatus_ = nullptr;
    // The public endpoint.
    std::shared_ptr<string> internetEndpoint_ = nullptr;
    // The private endpoint.
    std::shared_ptr<string> intranetEndpoint_ = nullptr;
    std::shared_ptr<string> kmsSecretModule_ = nullptr;
    // The license code.
    std::shared_ptr<string> licenseCode_ = nullptr;
    // The status of the automatic password change feature.
    // 
    // - **Enable**
    // - **Disable**
    std::shared_ptr<string> modifyPasswordModule_ = nullptr;
    // The status of the network domain feature.
    // 
    // - **Enable**
    // - **Disable**
    std::shared_ptr<string> networkProxyModule_ = nullptr;
    // An array that consists of the O&M ports of the bastion host.
    std::shared_ptr<vector<Models::DescribeInstanceAttributeResponseBodyInstanceAttributePorts>> ports_ = nullptr;
    // An array that consists of the egress private IP addresses of the bastion host.
    std::shared_ptr<vector<string>> privateExportIps_ = nullptr;
    // The private IP addresses that are allowed to access the instance.
    std::shared_ptr<vector<string>> privateWhiteList_ = nullptr;
    // An array that consists of the egress public IP addresses of the bastion host.
    std::shared_ptr<vector<string>> publicExportIps_ = nullptr;
    // The public IP address.
    std::shared_ptr<vector<string>> publicIps_ = nullptr;
    // Indicates whether the Bastionhost instance can be accessed over the Internet.
    std::shared_ptr<bool> publicNetworkAccess_ = nullptr;
    // The public IP addresses that are allowed to access the instance.
    std::shared_ptr<vector<string>> publicWhiteList_ = nullptr;
    std::shared_ptr<string> RDModule_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<string>> routerRules_ = nullptr;
    std::shared_ptr<string> scriptDeliverModule_ = nullptr;
    // The IDs of the security groups to which the instance belongs.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    std::shared_ptr<string> slaveVswitchId_ = nullptr;
    // The time when the instance started.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The storage capacity of the bastion host. Unit: bytes.
    std::shared_ptr<int64_t> storage_ = nullptr;
    // The ID of the VPC to which the instance belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the vSwitch to which the instance connects.
    std::shared_ptr<string> vswitchId_ = nullptr;
    // The status of the web terminal.
    // 
    // - **Enable**
    // - **Disable**
    std::shared_ptr<string> webTerminalModule_ = nullptr;
    std::shared_ptr<vector<Models::DescribeInstanceAttributeResponseBodyInstanceAttributeWhiteListPolicies>> whiteListPolicies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
