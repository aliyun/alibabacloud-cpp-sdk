// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateClusterRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClusterSpecification, clusterSpecification_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(ClusterVersion, clusterVersion_);
      DARABONBA_PTR_TO_JSON(ConnectionType, connectionType_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(EipEnabled, eipEnabled_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(MseVersion, mseVersion_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(PrivateSlbSpecification, privateSlbSpecification_);
      DARABONBA_PTR_TO_JSON(PubNetworkFlow, pubNetworkFlow_);
      DARABONBA_PTR_TO_JSON(PubSlbSpecification, pubSlbSpecification_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupType, securityGroupType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClusterSpecification, clusterSpecification_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(ClusterVersion, clusterVersion_);
      DARABONBA_PTR_FROM_JSON(ConnectionType, connectionType_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(EipEnabled, eipEnabled_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(MseVersion, mseVersion_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(PrivateSlbSpecification, privateSlbSpecification_);
      DARABONBA_PTR_FROM_JSON(PubNetworkFlow, pubNetworkFlow_);
      DARABONBA_PTR_FROM_JSON(PubSlbSpecification, pubSlbSpecification_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupType, securityGroupType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateClusterRequest() = default ;
    CreateClusterRequest(const CreateClusterRequest &) = default ;
    CreateClusterRequest(CreateClusterRequest &&) = default ;
    CreateClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequest() = default ;
    CreateClusterRequest& operator=(const CreateClusterRequest &) = default ;
    CreateClusterRequest& operator=(CreateClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->chargeType_ == nullptr && return this->clusterSpecification_ == nullptr && return this->clusterType_ == nullptr && return this->clusterVersion_ == nullptr && return this->connectionType_ == nullptr
        && return this->diskType_ == nullptr && return this->eipEnabled_ == nullptr && return this->instanceCount_ == nullptr && return this->instanceName_ == nullptr && return this->mseVersion_ == nullptr
        && return this->netType_ == nullptr && return this->privateSlbSpecification_ == nullptr && return this->pubNetworkFlow_ == nullptr && return this->pubSlbSpecification_ == nullptr && return this->region_ == nullptr
        && return this->requestPars_ == nullptr && return this->resourceGroupId_ == nullptr && return this->securityGroupType_ == nullptr && return this->tag_ == nullptr && return this->vSwitchId_ == nullptr
        && return this->vpcId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateClusterRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateClusterRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clusterSpecification Field Functions 
    bool hasClusterSpecification() const { return this->clusterSpecification_ != nullptr;};
    void deleteClusterSpecification() { this->clusterSpecification_ = nullptr;};
    inline string clusterSpecification() const { DARABONBA_PTR_GET_DEFAULT(clusterSpecification_, "") };
    inline CreateClusterRequest& setClusterSpecification(string clusterSpecification) { DARABONBA_PTR_SET_VALUE(clusterSpecification_, clusterSpecification) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline CreateClusterRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // clusterVersion Field Functions 
    bool hasClusterVersion() const { return this->clusterVersion_ != nullptr;};
    void deleteClusterVersion() { this->clusterVersion_ = nullptr;};
    inline string clusterVersion() const { DARABONBA_PTR_GET_DEFAULT(clusterVersion_, "") };
    inline CreateClusterRequest& setClusterVersion(string clusterVersion) { DARABONBA_PTR_SET_VALUE(clusterVersion_, clusterVersion) };


    // connectionType Field Functions 
    bool hasConnectionType() const { return this->connectionType_ != nullptr;};
    void deleteConnectionType() { this->connectionType_ = nullptr;};
    inline string connectionType() const { DARABONBA_PTR_GET_DEFAULT(connectionType_, "") };
    inline CreateClusterRequest& setConnectionType(string connectionType) { DARABONBA_PTR_SET_VALUE(connectionType_, connectionType) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CreateClusterRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // eipEnabled Field Functions 
    bool hasEipEnabled() const { return this->eipEnabled_ != nullptr;};
    void deleteEipEnabled() { this->eipEnabled_ = nullptr;};
    inline bool eipEnabled() const { DARABONBA_PTR_GET_DEFAULT(eipEnabled_, false) };
    inline CreateClusterRequest& setEipEnabled(bool eipEnabled) { DARABONBA_PTR_SET_VALUE(eipEnabled_, eipEnabled) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline CreateClusterRequest& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateClusterRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // mseVersion Field Functions 
    bool hasMseVersion() const { return this->mseVersion_ != nullptr;};
    void deleteMseVersion() { this->mseVersion_ = nullptr;};
    inline string mseVersion() const { DARABONBA_PTR_GET_DEFAULT(mseVersion_, "") };
    inline CreateClusterRequest& setMseVersion(string mseVersion) { DARABONBA_PTR_SET_VALUE(mseVersion_, mseVersion) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline CreateClusterRequest& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // privateSlbSpecification Field Functions 
    bool hasPrivateSlbSpecification() const { return this->privateSlbSpecification_ != nullptr;};
    void deletePrivateSlbSpecification() { this->privateSlbSpecification_ = nullptr;};
    inline string privateSlbSpecification() const { DARABONBA_PTR_GET_DEFAULT(privateSlbSpecification_, "") };
    inline CreateClusterRequest& setPrivateSlbSpecification(string privateSlbSpecification) { DARABONBA_PTR_SET_VALUE(privateSlbSpecification_, privateSlbSpecification) };


    // pubNetworkFlow Field Functions 
    bool hasPubNetworkFlow() const { return this->pubNetworkFlow_ != nullptr;};
    void deletePubNetworkFlow() { this->pubNetworkFlow_ = nullptr;};
    inline string pubNetworkFlow() const { DARABONBA_PTR_GET_DEFAULT(pubNetworkFlow_, "") };
    inline CreateClusterRequest& setPubNetworkFlow(string pubNetworkFlow) { DARABONBA_PTR_SET_VALUE(pubNetworkFlow_, pubNetworkFlow) };


    // pubSlbSpecification Field Functions 
    bool hasPubSlbSpecification() const { return this->pubSlbSpecification_ != nullptr;};
    void deletePubSlbSpecification() { this->pubSlbSpecification_ = nullptr;};
    inline string pubSlbSpecification() const { DARABONBA_PTR_GET_DEFAULT(pubSlbSpecification_, "") };
    inline CreateClusterRequest& setPubSlbSpecification(string pubSlbSpecification) { DARABONBA_PTR_SET_VALUE(pubSlbSpecification_, pubSlbSpecification) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateClusterRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string requestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline CreateClusterRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupType Field Functions 
    bool hasSecurityGroupType() const { return this->securityGroupType_ != nullptr;};
    void deleteSecurityGroupType() { this->securityGroupType_ = nullptr;};
    inline string securityGroupType() const { DARABONBA_PTR_GET_DEFAULT(securityGroupType_, "") };
    inline CreateClusterRequest& setSecurityGroupType(string securityGroupType) { DARABONBA_PTR_SET_VALUE(securityGroupType_, securityGroupType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateClusterRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateClusterRequestTag>) };
    inline vector<CreateClusterRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateClusterRequestTag>) };
    inline CreateClusterRequest& setTag(const vector<CreateClusterRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateClusterRequest& setTag(vector<CreateClusterRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateClusterRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateClusterRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The language type of the returned information:
    // 
    // - zh: Chinese
    // - en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // Billing method, including PREPAY (Subscription) and POSTPAY (Pay-As-You-Go).
    // 
    // This parameter is ignored for the Serverless edition.
    std::shared_ptr<string> chargeType_ = nullptr;
    // Engine specifications, with the following values:
    // 
    // [Professional Edition] 
    // 
    // - `MSE_SC_2_4_60_c`: 2 cores, 4GB
    // - `MSE_SC_1_2_60_c`: 1 core, 2GB
    // - `MSE_SC_4_8_60_c`: 4 cores, 8GB
    // - `MSE_SC_8_16_60_c`: 8 cores, 16GB
    // - `MSE_SC_16_32_60_c`: 16 cores, 32GB
    // 
    // [Developer Edition] 
    // 
    // - `MSE_SC_1_2_60_c`: 1 core, 2GB
    // - `MSE_SC_2_4_60_c`: 2 cores, 4GB
    // 
    // [Serverless Edition]
    // 
    // Ignore this parameter, or you can fill in `MSE_SC_SERVERLESS`.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterSpecification_ = nullptr;
    // Cluster type, including ZooKeeper, Nacos-Ans.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterType_ = nullptr;
    // Cluster version, with the following values:
    // 
    // [Professional Edition] 
    // 
    // - `NACOS_2_0_0`: indicates Nacos 2.x.x version.
    // - `ZooKeeper_3_8_0`: indicates ZooKeeper 3.8.x version.
    // 
    // [Developer Edition] 
    // 
    // - `NACOS_2_0_0`: indicates Nacos 2.x version.
    // - `ZooKeeper_3_8_0`: indicates ZooKeeper 3.8.x version.
    // 
    // [Serverless Edition]
    // 
    // - `NACOS_2_0_0`: indicates Nacos 2.x version.
    // - `ZooKeeper_3_8_0`: indicates ZooKeeper 3.8.x version.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterVersion_ = nullptr;
    // Network access type, `slb` or `single_eni`; some regions\\" Developer Edition only support the `single_eni` type.
    std::shared_ptr<string> connectionType_ = nullptr;
    // No longer in use
    std::shared_ptr<string> diskType_ = nullptr;
    // Valid when `ConnectionType` is `single_eni`, indicating whether to enable public network access (Elastic IP).
    std::shared_ptr<bool> eipEnabled_ = nullptr;
    // Number of instance nodes, with a range limit of 1 to 9.
    // 
    // [Professional Edition] 
    // - The number of instances must be 3 or more and must be an odd number.
    // 
    // [Developer Edition] 
    // - The number of instances can only be 1.
    // 
    // [Serverless Edition]
    // 
    // Ignore this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // Custom instance name
    std::shared_ptr<string> instanceName_ = nullptr;
    // Required unless under special circumstances, with the following values:
    // 
    // - `mse_pro`: indicates Professional Edition.
    // - `mse_dev`: indicates Developer Edition.
    // - `mse_serverless`: indicates Serverless Edition.
    std::shared_ptr<string> mseVersion_ = nullptr;
    // Network type, with the following values:
    // - `privatenet`: indicates a private network.
    // - `pubnet`: indicates a public network.
    // 
    // This parameter is required.
    std::shared_ptr<string> netType_ = nullptr;
    // No longer in use
    std::shared_ptr<string> privateSlbSpecification_ = nullptr;
    // Valid when `ConnectionType` is `slb`. 0 indicates no public network access SLB creation, and values above 1 indicate a fixed bandwidth for public network access SLB; unit: Mbps.
    // 
    // Value range: 0~5000.
    std::shared_ptr<string> pubNetworkFlow_ = nullptr;
    // No longer in use
    std::shared_ptr<string> pubSlbSpecification_ = nullptr;
    // The region where the cluster is located, including but not limited to the following regions:
    // - `cn-hangzhou`: Hangzhou
    // - `cn-beijing`: Beijing
    // - `cn-shanghai`: Shanghai
    // - `cn-zhangjiakou`: Zhangjiakou
    // - `cn-shenzhen`: Shenzhen
    std::shared_ptr<string> region_ = nullptr;
    // Extended request parameters, in JSON format.
    std::shared_ptr<string> requestPars_ = nullptr;
    // Resource group ID. For more details about the resource group, see [Basic Information of Resource Group](https://help.aliyun.com/document_detail/457230.html).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Valid when `ConnectionType` is `single_eni`, indicating the security group type of the instance.
    std::shared_ptr<string> securityGroupType_ = nullptr;
    // List of tags to be added. Contains up to 20 items.
    std::shared_ptr<vector<CreateClusterRequestTag>> tag_ = nullptr;
    // Switch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
