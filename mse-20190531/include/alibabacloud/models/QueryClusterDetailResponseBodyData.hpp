// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLUSTERDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLUSTERDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryClusterDetailResponseBodyDataInstanceModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryClusterDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryClusterDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AclEntryList, aclEntryList_);
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClusterAliasName, clusterAliasName_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterSpecification, clusterSpecification_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(ClusterVersion, clusterVersion_);
      DARABONBA_PTR_TO_JSON(ConnectionType, connectionType_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DiskCapacity, diskCapacity_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(InitCostTime, initCostTime_);
      DARABONBA_PTR_TO_JSON(InitStatus, initStatus_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceModels, instanceModels_);
      DARABONBA_PTR_TO_JSON(InternetAddress, internetAddress_);
      DARABONBA_PTR_TO_JSON(InternetDomain, internetDomain_);
      DARABONBA_PTR_TO_JSON(InternetPort, internetPort_);
      DARABONBA_PTR_TO_JSON(IntranetAddress, intranetAddress_);
      DARABONBA_PTR_TO_JSON(IntranetDomain, intranetDomain_);
      DARABONBA_PTR_TO_JSON(IntranetPort, intranetPort_);
      DARABONBA_PTR_TO_JSON(MemoryCapacity, memoryCapacity_);
      DARABONBA_PTR_TO_JSON(MseVersion, mseVersion_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(OrderClusterVersion, orderClusterVersion_);
      DARABONBA_PTR_TO_JSON(PayInfo, payInfo_);
      DARABONBA_PTR_TO_JSON(PubNetworkFlow, pubNetworkFlow_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VersionLifecycle, versionLifecycle_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryClusterDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntryList, aclEntryList_);
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClusterAliasName, clusterAliasName_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterSpecification, clusterSpecification_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(ClusterVersion, clusterVersion_);
      DARABONBA_PTR_FROM_JSON(ConnectionType, connectionType_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DiskCapacity, diskCapacity_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(InitCostTime, initCostTime_);
      DARABONBA_PTR_FROM_JSON(InitStatus, initStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceModels, instanceModels_);
      DARABONBA_PTR_FROM_JSON(InternetAddress, internetAddress_);
      DARABONBA_PTR_FROM_JSON(InternetDomain, internetDomain_);
      DARABONBA_PTR_FROM_JSON(InternetPort, internetPort_);
      DARABONBA_PTR_FROM_JSON(IntranetAddress, intranetAddress_);
      DARABONBA_PTR_FROM_JSON(IntranetDomain, intranetDomain_);
      DARABONBA_PTR_FROM_JSON(IntranetPort, intranetPort_);
      DARABONBA_PTR_FROM_JSON(MemoryCapacity, memoryCapacity_);
      DARABONBA_PTR_FROM_JSON(MseVersion, mseVersion_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(OrderClusterVersion, orderClusterVersion_);
      DARABONBA_PTR_FROM_JSON(PayInfo, payInfo_);
      DARABONBA_PTR_FROM_JSON(PubNetworkFlow, pubNetworkFlow_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VersionLifecycle, versionLifecycle_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    QueryClusterDetailResponseBodyData() = default ;
    QueryClusterDetailResponseBodyData(const QueryClusterDetailResponseBodyData &) = default ;
    QueryClusterDetailResponseBodyData(QueryClusterDetailResponseBodyData &&) = default ;
    QueryClusterDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryClusterDetailResponseBodyData() = default ;
    QueryClusterDetailResponseBodyData& operator=(const QueryClusterDetailResponseBodyData &) = default ;
    QueryClusterDetailResponseBodyData& operator=(QueryClusterDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclEntryList_ == nullptr
        && return this->aclId_ == nullptr && return this->appVersion_ == nullptr && return this->chargeType_ == nullptr && return this->clusterAliasName_ == nullptr && return this->clusterName_ == nullptr
        && return this->clusterSpecification_ == nullptr && return this->clusterType_ == nullptr && return this->clusterVersion_ == nullptr && return this->connectionType_ == nullptr && return this->cpu_ == nullptr
        && return this->createTime_ == nullptr && return this->diskCapacity_ == nullptr && return this->diskType_ == nullptr && return this->healthStatus_ == nullptr && return this->initCostTime_ == nullptr
        && return this->initStatus_ == nullptr && return this->instanceCount_ == nullptr && return this->instanceId_ == nullptr && return this->instanceModels_ == nullptr && return this->internetAddress_ == nullptr
        && return this->internetDomain_ == nullptr && return this->internetPort_ == nullptr && return this->intranetAddress_ == nullptr && return this->intranetDomain_ == nullptr && return this->intranetPort_ == nullptr
        && return this->memoryCapacity_ == nullptr && return this->mseVersion_ == nullptr && return this->netType_ == nullptr && return this->orderClusterVersion_ == nullptr && return this->payInfo_ == nullptr
        && return this->pubNetworkFlow_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tags_ == nullptr && return this->vSwitchId_ == nullptr
        && return this->versionLifecycle_ == nullptr && return this->vpcId_ == nullptr; };
    // aclEntryList Field Functions 
    bool hasAclEntryList() const { return this->aclEntryList_ != nullptr;};
    void deleteAclEntryList() { this->aclEntryList_ = nullptr;};
    inline string aclEntryList() const { DARABONBA_PTR_GET_DEFAULT(aclEntryList_, "") };
    inline QueryClusterDetailResponseBodyData& setAclEntryList(string aclEntryList) { DARABONBA_PTR_SET_VALUE(aclEntryList_, aclEntryList) };


    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline QueryClusterDetailResponseBodyData& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline QueryClusterDetailResponseBodyData& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline QueryClusterDetailResponseBodyData& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clusterAliasName Field Functions 
    bool hasClusterAliasName() const { return this->clusterAliasName_ != nullptr;};
    void deleteClusterAliasName() { this->clusterAliasName_ = nullptr;};
    inline string clusterAliasName() const { DARABONBA_PTR_GET_DEFAULT(clusterAliasName_, "") };
    inline QueryClusterDetailResponseBodyData& setClusterAliasName(string clusterAliasName) { DARABONBA_PTR_SET_VALUE(clusterAliasName_, clusterAliasName) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline QueryClusterDetailResponseBodyData& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterSpecification Field Functions 
    bool hasClusterSpecification() const { return this->clusterSpecification_ != nullptr;};
    void deleteClusterSpecification() { this->clusterSpecification_ = nullptr;};
    inline string clusterSpecification() const { DARABONBA_PTR_GET_DEFAULT(clusterSpecification_, "") };
    inline QueryClusterDetailResponseBodyData& setClusterSpecification(string clusterSpecification) { DARABONBA_PTR_SET_VALUE(clusterSpecification_, clusterSpecification) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline QueryClusterDetailResponseBodyData& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // clusterVersion Field Functions 
    bool hasClusterVersion() const { return this->clusterVersion_ != nullptr;};
    void deleteClusterVersion() { this->clusterVersion_ = nullptr;};
    inline string clusterVersion() const { DARABONBA_PTR_GET_DEFAULT(clusterVersion_, "") };
    inline QueryClusterDetailResponseBodyData& setClusterVersion(string clusterVersion) { DARABONBA_PTR_SET_VALUE(clusterVersion_, clusterVersion) };


    // connectionType Field Functions 
    bool hasConnectionType() const { return this->connectionType_ != nullptr;};
    void deleteConnectionType() { this->connectionType_ = nullptr;};
    inline string connectionType() const { DARABONBA_PTR_GET_DEFAULT(connectionType_, "") };
    inline QueryClusterDetailResponseBodyData& setConnectionType(string connectionType) { DARABONBA_PTR_SET_VALUE(connectionType_, connectionType) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline QueryClusterDetailResponseBodyData& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryClusterDetailResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // diskCapacity Field Functions 
    bool hasDiskCapacity() const { return this->diskCapacity_ != nullptr;};
    void deleteDiskCapacity() { this->diskCapacity_ = nullptr;};
    inline int64_t diskCapacity() const { DARABONBA_PTR_GET_DEFAULT(diskCapacity_, 0L) };
    inline QueryClusterDetailResponseBodyData& setDiskCapacity(int64_t diskCapacity) { DARABONBA_PTR_SET_VALUE(diskCapacity_, diskCapacity) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline QueryClusterDetailResponseBodyData& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string healthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline QueryClusterDetailResponseBodyData& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // initCostTime Field Functions 
    bool hasInitCostTime() const { return this->initCostTime_ != nullptr;};
    void deleteInitCostTime() { this->initCostTime_ = nullptr;};
    inline int64_t initCostTime() const { DARABONBA_PTR_GET_DEFAULT(initCostTime_, 0L) };
    inline QueryClusterDetailResponseBodyData& setInitCostTime(int64_t initCostTime) { DARABONBA_PTR_SET_VALUE(initCostTime_, initCostTime) };


    // initStatus Field Functions 
    bool hasInitStatus() const { return this->initStatus_ != nullptr;};
    void deleteInitStatus() { this->initStatus_ = nullptr;};
    inline string initStatus() const { DARABONBA_PTR_GET_DEFAULT(initStatus_, "") };
    inline QueryClusterDetailResponseBodyData& setInitStatus(string initStatus) { DARABONBA_PTR_SET_VALUE(initStatus_, initStatus) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline QueryClusterDetailResponseBodyData& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryClusterDetailResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceModels Field Functions 
    bool hasInstanceModels() const { return this->instanceModels_ != nullptr;};
    void deleteInstanceModels() { this->instanceModels_ = nullptr;};
    inline const vector<Models::QueryClusterDetailResponseBodyDataInstanceModels> & instanceModels() const { DARABONBA_PTR_GET_CONST(instanceModels_, vector<Models::QueryClusterDetailResponseBodyDataInstanceModels>) };
    inline vector<Models::QueryClusterDetailResponseBodyDataInstanceModels> instanceModels() { DARABONBA_PTR_GET(instanceModels_, vector<Models::QueryClusterDetailResponseBodyDataInstanceModels>) };
    inline QueryClusterDetailResponseBodyData& setInstanceModels(const vector<Models::QueryClusterDetailResponseBodyDataInstanceModels> & instanceModels) { DARABONBA_PTR_SET_VALUE(instanceModels_, instanceModels) };
    inline QueryClusterDetailResponseBodyData& setInstanceModels(vector<Models::QueryClusterDetailResponseBodyDataInstanceModels> && instanceModels) { DARABONBA_PTR_SET_RVALUE(instanceModels_, instanceModels) };


    // internetAddress Field Functions 
    bool hasInternetAddress() const { return this->internetAddress_ != nullptr;};
    void deleteInternetAddress() { this->internetAddress_ = nullptr;};
    inline string internetAddress() const { DARABONBA_PTR_GET_DEFAULT(internetAddress_, "") };
    inline QueryClusterDetailResponseBodyData& setInternetAddress(string internetAddress) { DARABONBA_PTR_SET_VALUE(internetAddress_, internetAddress) };


    // internetDomain Field Functions 
    bool hasInternetDomain() const { return this->internetDomain_ != nullptr;};
    void deleteInternetDomain() { this->internetDomain_ = nullptr;};
    inline string internetDomain() const { DARABONBA_PTR_GET_DEFAULT(internetDomain_, "") };
    inline QueryClusterDetailResponseBodyData& setInternetDomain(string internetDomain) { DARABONBA_PTR_SET_VALUE(internetDomain_, internetDomain) };


    // internetPort Field Functions 
    bool hasInternetPort() const { return this->internetPort_ != nullptr;};
    void deleteInternetPort() { this->internetPort_ = nullptr;};
    inline string internetPort() const { DARABONBA_PTR_GET_DEFAULT(internetPort_, "") };
    inline QueryClusterDetailResponseBodyData& setInternetPort(string internetPort) { DARABONBA_PTR_SET_VALUE(internetPort_, internetPort) };


    // intranetAddress Field Functions 
    bool hasIntranetAddress() const { return this->intranetAddress_ != nullptr;};
    void deleteIntranetAddress() { this->intranetAddress_ = nullptr;};
    inline string intranetAddress() const { DARABONBA_PTR_GET_DEFAULT(intranetAddress_, "") };
    inline QueryClusterDetailResponseBodyData& setIntranetAddress(string intranetAddress) { DARABONBA_PTR_SET_VALUE(intranetAddress_, intranetAddress) };


    // intranetDomain Field Functions 
    bool hasIntranetDomain() const { return this->intranetDomain_ != nullptr;};
    void deleteIntranetDomain() { this->intranetDomain_ = nullptr;};
    inline string intranetDomain() const { DARABONBA_PTR_GET_DEFAULT(intranetDomain_, "") };
    inline QueryClusterDetailResponseBodyData& setIntranetDomain(string intranetDomain) { DARABONBA_PTR_SET_VALUE(intranetDomain_, intranetDomain) };


    // intranetPort Field Functions 
    bool hasIntranetPort() const { return this->intranetPort_ != nullptr;};
    void deleteIntranetPort() { this->intranetPort_ = nullptr;};
    inline string intranetPort() const { DARABONBA_PTR_GET_DEFAULT(intranetPort_, "") };
    inline QueryClusterDetailResponseBodyData& setIntranetPort(string intranetPort) { DARABONBA_PTR_SET_VALUE(intranetPort_, intranetPort) };


    // memoryCapacity Field Functions 
    bool hasMemoryCapacity() const { return this->memoryCapacity_ != nullptr;};
    void deleteMemoryCapacity() { this->memoryCapacity_ = nullptr;};
    inline int64_t memoryCapacity() const { DARABONBA_PTR_GET_DEFAULT(memoryCapacity_, 0L) };
    inline QueryClusterDetailResponseBodyData& setMemoryCapacity(int64_t memoryCapacity) { DARABONBA_PTR_SET_VALUE(memoryCapacity_, memoryCapacity) };


    // mseVersion Field Functions 
    bool hasMseVersion() const { return this->mseVersion_ != nullptr;};
    void deleteMseVersion() { this->mseVersion_ = nullptr;};
    inline string mseVersion() const { DARABONBA_PTR_GET_DEFAULT(mseVersion_, "") };
    inline QueryClusterDetailResponseBodyData& setMseVersion(string mseVersion) { DARABONBA_PTR_SET_VALUE(mseVersion_, mseVersion) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline QueryClusterDetailResponseBodyData& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // orderClusterVersion Field Functions 
    bool hasOrderClusterVersion() const { return this->orderClusterVersion_ != nullptr;};
    void deleteOrderClusterVersion() { this->orderClusterVersion_ = nullptr;};
    inline string orderClusterVersion() const { DARABONBA_PTR_GET_DEFAULT(orderClusterVersion_, "") };
    inline QueryClusterDetailResponseBodyData& setOrderClusterVersion(string orderClusterVersion) { DARABONBA_PTR_SET_VALUE(orderClusterVersion_, orderClusterVersion) };


    // payInfo Field Functions 
    bool hasPayInfo() const { return this->payInfo_ != nullptr;};
    void deletePayInfo() { this->payInfo_ = nullptr;};
    inline string payInfo() const { DARABONBA_PTR_GET_DEFAULT(payInfo_, "") };
    inline QueryClusterDetailResponseBodyData& setPayInfo(string payInfo) { DARABONBA_PTR_SET_VALUE(payInfo_, payInfo) };


    // pubNetworkFlow Field Functions 
    bool hasPubNetworkFlow() const { return this->pubNetworkFlow_ != nullptr;};
    void deletePubNetworkFlow() { this->pubNetworkFlow_ = nullptr;};
    inline string pubNetworkFlow() const { DARABONBA_PTR_GET_DEFAULT(pubNetworkFlow_, "") };
    inline QueryClusterDetailResponseBodyData& setPubNetworkFlow(string pubNetworkFlow) { DARABONBA_PTR_SET_VALUE(pubNetworkFlow_, pubNetworkFlow) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryClusterDetailResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline QueryClusterDetailResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline QueryClusterDetailResponseBodyData& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline QueryClusterDetailResponseBodyData& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline QueryClusterDetailResponseBodyData& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // versionLifecycle Field Functions 
    bool hasVersionLifecycle() const { return this->versionLifecycle_ != nullptr;};
    void deleteVersionLifecycle() { this->versionLifecycle_ = nullptr;};
    inline string versionLifecycle() const { DARABONBA_PTR_GET_DEFAULT(versionLifecycle_, "") };
    inline QueryClusterDetailResponseBodyData& setVersionLifecycle(string versionLifecycle) { DARABONBA_PTR_SET_VALUE(versionLifecycle_, versionLifecycle) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline QueryClusterDetailResponseBodyData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The whitelist.
    std::shared_ptr<string> aclEntryList_ = nullptr;
    // The ID of the whitelist.
    std::shared_ptr<string> aclId_ = nullptr;
    // The application version.
    std::shared_ptr<string> appVersion_ = nullptr;
    // The billing method, such as subscription or pay-as-you-go.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The alias of the instance.
    std::shared_ptr<string> clusterAliasName_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The engine specifications.
    std::shared_ptr<string> clusterSpecification_ = nullptr;
    // The type of the instance. Valid values: ZooKeeper, Nacos-Ans, and Eureka.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The version of the instance.
    std::shared_ptr<string> clusterVersion_ = nullptr;
    // The network connection type. Valid values:
    // 
    // *   slb
    // *   eni
    std::shared_ptr<string> connectionType_ = nullptr;
    // The number of vCPUs.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The capacity of the disk. Unit: GB.
    std::shared_ptr<int64_t> diskCapacity_ = nullptr;
    // The type of the disk.
    std::shared_ptr<string> diskType_ = nullptr;
    // The health status of the instance.
    std::shared_ptr<string> healthStatus_ = nullptr;
    // The amount of time taken to create the instance. Unit: milliseconds.
    std::shared_ptr<int64_t> initCostTime_ = nullptr;
    // The creation status of the instance.
    std::shared_ptr<string> initStatus_ = nullptr;
    // The number of instance nodes.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The list of instance nodes.
    std::shared_ptr<vector<Models::QueryClusterDetailResponseBodyDataInstanceModels>> instanceModels_ = nullptr;
    // The public IP address of the instance.
    std::shared_ptr<string> internetAddress_ = nullptr;
    // The public endpoint of the instance.
    std::shared_ptr<string> internetDomain_ = nullptr;
    // The private port number.
    std::shared_ptr<string> internetPort_ = nullptr;
    // The internal IP address.
    std::shared_ptr<string> intranetAddress_ = nullptr;
    // The internal endpoint of the instance.
    std::shared_ptr<string> intranetDomain_ = nullptr;
    // The private port number.
    std::shared_ptr<string> intranetPort_ = nullptr;
    // The size of the memory. Unit: GB.
    std::shared_ptr<int64_t> memoryCapacity_ = nullptr;
    // The edition of Microservices Engine (MSE).
    std::shared_ptr<string> mseVersion_ = nullptr;
    // The network type of the instance. Valid values:
    // 
    // *   `privatenet`: VPC
    // *   `pubnet`: Internet
    std::shared_ptr<string> netType_ = nullptr;
    // The version number of the original order.
    std::shared_ptr<string> orderClusterVersion_ = nullptr;
    // The billing method, such as subscription or pay-as-you-go.
    std::shared_ptr<string> payInfo_ = nullptr;
    // The public bandwidth. Unit: Mbit/s.\\
    // Valid values: 0 to 5000. The value 0 indicates no access to the Internet.
    std::shared_ptr<string> pubNetworkFlow_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags that are attached to the instance.
    Darabonba::Json tags_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> versionLifecycle_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
