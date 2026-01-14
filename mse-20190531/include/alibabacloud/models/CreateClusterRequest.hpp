// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Tag key.
      shared_ptr<string> key_ {};
      // Tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->chargeType_ == nullptr && this->clusterSpecification_ == nullptr && this->clusterType_ == nullptr && this->clusterVersion_ == nullptr && this->connectionType_ == nullptr
        && this->diskType_ == nullptr && this->eipEnabled_ == nullptr && this->instanceCount_ == nullptr && this->instanceName_ == nullptr && this->mseVersion_ == nullptr
        && this->netType_ == nullptr && this->privateSlbSpecification_ == nullptr && this->pubNetworkFlow_ == nullptr && this->pubSlbSpecification_ == nullptr && this->region_ == nullptr
        && this->requestPars_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroupType_ == nullptr && this->tag_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateClusterRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateClusterRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clusterSpecification Field Functions 
    bool hasClusterSpecification() const { return this->clusterSpecification_ != nullptr;};
    void deleteClusterSpecification() { this->clusterSpecification_ = nullptr;};
    inline string getClusterSpecification() const { DARABONBA_PTR_GET_DEFAULT(clusterSpecification_, "") };
    inline CreateClusterRequest& setClusterSpecification(string clusterSpecification) { DARABONBA_PTR_SET_VALUE(clusterSpecification_, clusterSpecification) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline CreateClusterRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // clusterVersion Field Functions 
    bool hasClusterVersion() const { return this->clusterVersion_ != nullptr;};
    void deleteClusterVersion() { this->clusterVersion_ = nullptr;};
    inline string getClusterVersion() const { DARABONBA_PTR_GET_DEFAULT(clusterVersion_, "") };
    inline CreateClusterRequest& setClusterVersion(string clusterVersion) { DARABONBA_PTR_SET_VALUE(clusterVersion_, clusterVersion) };


    // connectionType Field Functions 
    bool hasConnectionType() const { return this->connectionType_ != nullptr;};
    void deleteConnectionType() { this->connectionType_ = nullptr;};
    inline string getConnectionType() const { DARABONBA_PTR_GET_DEFAULT(connectionType_, "") };
    inline CreateClusterRequest& setConnectionType(string connectionType) { DARABONBA_PTR_SET_VALUE(connectionType_, connectionType) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CreateClusterRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // eipEnabled Field Functions 
    bool hasEipEnabled() const { return this->eipEnabled_ != nullptr;};
    void deleteEipEnabled() { this->eipEnabled_ = nullptr;};
    inline bool getEipEnabled() const { DARABONBA_PTR_GET_DEFAULT(eipEnabled_, false) };
    inline CreateClusterRequest& setEipEnabled(bool eipEnabled) { DARABONBA_PTR_SET_VALUE(eipEnabled_, eipEnabled) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline CreateClusterRequest& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateClusterRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // mseVersion Field Functions 
    bool hasMseVersion() const { return this->mseVersion_ != nullptr;};
    void deleteMseVersion() { this->mseVersion_ = nullptr;};
    inline string getMseVersion() const { DARABONBA_PTR_GET_DEFAULT(mseVersion_, "") };
    inline CreateClusterRequest& setMseVersion(string mseVersion) { DARABONBA_PTR_SET_VALUE(mseVersion_, mseVersion) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline CreateClusterRequest& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // privateSlbSpecification Field Functions 
    bool hasPrivateSlbSpecification() const { return this->privateSlbSpecification_ != nullptr;};
    void deletePrivateSlbSpecification() { this->privateSlbSpecification_ = nullptr;};
    inline string getPrivateSlbSpecification() const { DARABONBA_PTR_GET_DEFAULT(privateSlbSpecification_, "") };
    inline CreateClusterRequest& setPrivateSlbSpecification(string privateSlbSpecification) { DARABONBA_PTR_SET_VALUE(privateSlbSpecification_, privateSlbSpecification) };


    // pubNetworkFlow Field Functions 
    bool hasPubNetworkFlow() const { return this->pubNetworkFlow_ != nullptr;};
    void deletePubNetworkFlow() { this->pubNetworkFlow_ = nullptr;};
    inline string getPubNetworkFlow() const { DARABONBA_PTR_GET_DEFAULT(pubNetworkFlow_, "") };
    inline CreateClusterRequest& setPubNetworkFlow(string pubNetworkFlow) { DARABONBA_PTR_SET_VALUE(pubNetworkFlow_, pubNetworkFlow) };


    // pubSlbSpecification Field Functions 
    bool hasPubSlbSpecification() const { return this->pubSlbSpecification_ != nullptr;};
    void deletePubSlbSpecification() { this->pubSlbSpecification_ = nullptr;};
    inline string getPubSlbSpecification() const { DARABONBA_PTR_GET_DEFAULT(pubSlbSpecification_, "") };
    inline CreateClusterRequest& setPubSlbSpecification(string pubSlbSpecification) { DARABONBA_PTR_SET_VALUE(pubSlbSpecification_, pubSlbSpecification) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateClusterRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string getRequestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline CreateClusterRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupType Field Functions 
    bool hasSecurityGroupType() const { return this->securityGroupType_ != nullptr;};
    void deleteSecurityGroupType() { this->securityGroupType_ = nullptr;};
    inline string getSecurityGroupType() const { DARABONBA_PTR_GET_DEFAULT(securityGroupType_, "") };
    inline CreateClusterRequest& setSecurityGroupType(string securityGroupType) { DARABONBA_PTR_SET_VALUE(securityGroupType_, securityGroupType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateClusterRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateClusterRequest::Tag>) };
    inline vector<CreateClusterRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateClusterRequest::Tag>) };
    inline CreateClusterRequest& setTag(const vector<CreateClusterRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateClusterRequest& setTag(vector<CreateClusterRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateClusterRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateClusterRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The language type of the returned information:
    // 
    // - zh: Chinese
    // - en: English
    shared_ptr<string> acceptLanguage_ {};
    // Billing method, including PREPAY (Subscription) and POSTPAY (Pay-As-You-Go).
    // 
    // This parameter is ignored for the Serverless edition.
    shared_ptr<string> chargeType_ {};
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
    shared_ptr<string> clusterSpecification_ {};
    // Cluster type, including ZooKeeper, Nacos-Ans.
    // 
    // This parameter is required.
    shared_ptr<string> clusterType_ {};
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
    shared_ptr<string> clusterVersion_ {};
    // Network access type, `slb` or `single_eni`; some regions\\" Developer Edition only support the `single_eni` type.
    shared_ptr<string> connectionType_ {};
    // No longer in use
    shared_ptr<string> diskType_ {};
    // Valid when `ConnectionType` is `single_eni`, indicating whether to enable public network access (Elastic IP).
    shared_ptr<bool> eipEnabled_ {};
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
    shared_ptr<int32_t> instanceCount_ {};
    // Custom instance name
    shared_ptr<string> instanceName_ {};
    // Required unless under special circumstances, with the following values:
    // 
    // - `mse_pro`: indicates Professional Edition.
    // - `mse_dev`: indicates Developer Edition.
    // - `mse_serverless`: indicates Serverless Edition.
    shared_ptr<string> mseVersion_ {};
    // Network type, with the following values:
    // - `privatenet`: indicates a private network.
    // - `pubnet`: indicates a public network.
    // 
    // This parameter is required.
    shared_ptr<string> netType_ {};
    // No longer in use
    shared_ptr<string> privateSlbSpecification_ {};
    // Valid when `ConnectionType` is `slb`. 0 indicates no public network access SLB creation, and values above 1 indicate a fixed bandwidth for public network access SLB; unit: Mbps.
    // 
    // Value range: 0~5000.
    shared_ptr<string> pubNetworkFlow_ {};
    // No longer in use
    shared_ptr<string> pubSlbSpecification_ {};
    // The region where the cluster is located, including but not limited to the following regions:
    // - `cn-hangzhou`: Hangzhou
    // - `cn-beijing`: Beijing
    // - `cn-shanghai`: Shanghai
    // - `cn-zhangjiakou`: Zhangjiakou
    // - `cn-shenzhen`: Shenzhen
    shared_ptr<string> region_ {};
    // Extended request parameters, in JSON format.
    shared_ptr<string> requestPars_ {};
    // Resource group ID. For more details about the resource group, see [Basic Information of Resource Group](https://help.aliyun.com/document_detail/457230.html).
    shared_ptr<string> resourceGroupId_ {};
    // Valid when `ConnectionType` is `single_eni`, indicating the security group type of the instance.
    shared_ptr<string> securityGroupType_ {};
    // List of tags to be added. Contains up to 20 items.
    shared_ptr<vector<CreateClusterRequest::Tag>> tag_ {};
    // Switch ID.
    shared_ptr<string> vSwitchId_ {};
    // VPC ID.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
