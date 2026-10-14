// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(ContainerCidr, containerCidr_);
      DARABONBA_PTR_TO_JSON(ControlPlaneConfig, controlPlaneConfig_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(KubernetesVersion, kubernetesVersion_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(PodVswitchIds, podVswitchIds_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(PublicAccess, publicAccess_);
      DARABONBA_PTR_TO_JSON(ServiceCidr, serviceCidr_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchIds, vswitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(ContainerCidr, containerCidr_);
      DARABONBA_PTR_FROM_JSON(ControlPlaneConfig, controlPlaneConfig_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(KubernetesVersion, kubernetesVersion_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(PodVswitchIds, podVswitchIds_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(PublicAccess, publicAccess_);
      DARABONBA_PTR_FROM_JSON(ServiceCidr, serviceCidr_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchIds, vswitchIds_);
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
    class ControlPlaneConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ControlPlaneConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
        DARABONBA_PTR_TO_JSON(LoginPassword, loginPassword_);
        DARABONBA_PTR_TO_JSON(NodePortRange, nodePortRange_);
        DARABONBA_PTR_TO_JSON(Runtime, runtime_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      };
      friend void from_json(const Darabonba::Json& j, ControlPlaneConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
        DARABONBA_PTR_FROM_JSON(LoginPassword, loginPassword_);
        DARABONBA_PTR_FROM_JSON(NodePortRange, nodePortRange_);
        DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      };
      ControlPlaneConfig() = default ;
      ControlPlaneConfig(const ControlPlaneConfig &) = default ;
      ControlPlaneConfig(ControlPlaneConfig &&) = default ;
      ControlPlaneConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ControlPlaneConfig() = default ;
      ControlPlaneConfig& operator=(const ControlPlaneConfig &) = default ;
      ControlPlaneConfig& operator=(ControlPlaneConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageId_ == nullptr
        && this->instanceSpec_ == nullptr && this->loginPassword_ == nullptr && this->nodePortRange_ == nullptr && this->runtime_ == nullptr && this->size_ == nullptr
        && this->systemDiskCategory_ == nullptr && this->systemDiskSize_ == nullptr; };
      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline ControlPlaneConfig& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // instanceSpec Field Functions 
      bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
      void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
      inline string getInstanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
      inline ControlPlaneConfig& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


      // loginPassword Field Functions 
      bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
      void deleteLoginPassword() { this->loginPassword_ = nullptr;};
      inline string getLoginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
      inline ControlPlaneConfig& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


      // nodePortRange Field Functions 
      bool hasNodePortRange() const { return this->nodePortRange_ != nullptr;};
      void deleteNodePortRange() { this->nodePortRange_ = nullptr;};
      inline string getNodePortRange() const { DARABONBA_PTR_GET_DEFAULT(nodePortRange_, "") };
      inline ControlPlaneConfig& setNodePortRange(string nodePortRange) { DARABONBA_PTR_SET_VALUE(nodePortRange_, nodePortRange) };


      // runtime Field Functions 
      bool hasRuntime() const { return this->runtime_ != nullptr;};
      void deleteRuntime() { this->runtime_ = nullptr;};
      inline string getRuntime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
      inline ControlPlaneConfig& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline ControlPlaneConfig& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // systemDiskCategory Field Functions 
      bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
      void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
      inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
      inline ControlPlaneConfig& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int64_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0L) };
      inline ControlPlaneConfig& setSystemDiskSize(int64_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    protected:
      // The control plane virtual machine image ID.
      shared_ptr<string> imageId_ {};
      // The node instance type.
      shared_ptr<string> instanceSpec_ {};
      // The logon password for the cluster control plane machines.
      shared_ptr<string> loginPassword_ {};
      // The node service port range.
      shared_ptr<string> nodePortRange_ {};
      // The control plane node runtime name.
      shared_ptr<string> runtime_ {};
      // The number of control plane nodes. Valid values: 3 and 5.
      shared_ptr<int32_t> size_ {};
      // The node system cloud disk type. Valid values: "local_ssd", "cloud_ssd", "cloud_efficiency", "local_hdd".
      shared_ptr<string> systemDiskCategory_ {};
      // The node system cloud disk size.
      shared_ptr<int64_t> systemDiskSize_ {};
    };

    virtual bool empty() const override { return this->clusterType_ == nullptr
        && this->containerCidr_ == nullptr && this->controlPlaneConfig_ == nullptr && this->ensRegionId_ == nullptr && this->isp_ == nullptr && this->kubernetesVersion_ == nullptr
        && this->loadBalancerId_ == nullptr && this->name_ == nullptr && this->natGatewayId_ == nullptr && this->podVswitchIds_ == nullptr && this->profile_ == nullptr
        && this->publicAccess_ == nullptr && this->serviceCidr_ == nullptr && this->vpcId_ == nullptr && this->vswitchIds_ == nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline CreateClusterRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // containerCidr Field Functions 
    bool hasContainerCidr() const { return this->containerCidr_ != nullptr;};
    void deleteContainerCidr() { this->containerCidr_ = nullptr;};
    inline string getContainerCidr() const { DARABONBA_PTR_GET_DEFAULT(containerCidr_, "") };
    inline CreateClusterRequest& setContainerCidr(string containerCidr) { DARABONBA_PTR_SET_VALUE(containerCidr_, containerCidr) };


    // controlPlaneConfig Field Functions 
    bool hasControlPlaneConfig() const { return this->controlPlaneConfig_ != nullptr;};
    void deleteControlPlaneConfig() { this->controlPlaneConfig_ = nullptr;};
    inline const CreateClusterRequest::ControlPlaneConfig & getControlPlaneConfig() const { DARABONBA_PTR_GET_CONST(controlPlaneConfig_, CreateClusterRequest::ControlPlaneConfig) };
    inline CreateClusterRequest::ControlPlaneConfig getControlPlaneConfig() { DARABONBA_PTR_GET(controlPlaneConfig_, CreateClusterRequest::ControlPlaneConfig) };
    inline CreateClusterRequest& setControlPlaneConfig(const CreateClusterRequest::ControlPlaneConfig & controlPlaneConfig) { DARABONBA_PTR_SET_VALUE(controlPlaneConfig_, controlPlaneConfig) };
    inline CreateClusterRequest& setControlPlaneConfig(CreateClusterRequest::ControlPlaneConfig && controlPlaneConfig) { DARABONBA_PTR_SET_RVALUE(controlPlaneConfig_, controlPlaneConfig) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CreateClusterRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline CreateClusterRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // kubernetesVersion Field Functions 
    bool hasKubernetesVersion() const { return this->kubernetesVersion_ != nullptr;};
    void deleteKubernetesVersion() { this->kubernetesVersion_ = nullptr;};
    inline string getKubernetesVersion() const { DARABONBA_PTR_GET_DEFAULT(kubernetesVersion_, "") };
    inline CreateClusterRequest& setKubernetesVersion(string kubernetesVersion) { DARABONBA_PTR_SET_VALUE(kubernetesVersion_, kubernetesVersion) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline CreateClusterRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateClusterRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline CreateClusterRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // podVswitchIds Field Functions 
    bool hasPodVswitchIds() const { return this->podVswitchIds_ != nullptr;};
    void deletePodVswitchIds() { this->podVswitchIds_ = nullptr;};
    inline const vector<string> & getPodVswitchIds() const { DARABONBA_PTR_GET_CONST(podVswitchIds_, vector<string>) };
    inline vector<string> getPodVswitchIds() { DARABONBA_PTR_GET(podVswitchIds_, vector<string>) };
    inline CreateClusterRequest& setPodVswitchIds(const vector<string> & podVswitchIds) { DARABONBA_PTR_SET_VALUE(podVswitchIds_, podVswitchIds) };
    inline CreateClusterRequest& setPodVswitchIds(vector<string> && podVswitchIds) { DARABONBA_PTR_SET_RVALUE(podVswitchIds_, podVswitchIds) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline CreateClusterRequest& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // publicAccess Field Functions 
    bool hasPublicAccess() const { return this->publicAccess_ != nullptr;};
    void deletePublicAccess() { this->publicAccess_ = nullptr;};
    inline bool getPublicAccess() const { DARABONBA_PTR_GET_DEFAULT(publicAccess_, false) };
    inline CreateClusterRequest& setPublicAccess(bool publicAccess) { DARABONBA_PTR_SET_VALUE(publicAccess_, publicAccess) };


    // serviceCidr Field Functions 
    bool hasServiceCidr() const { return this->serviceCidr_ != nullptr;};
    void deleteServiceCidr() { this->serviceCidr_ = nullptr;};
    inline string getServiceCidr() const { DARABONBA_PTR_GET_DEFAULT(serviceCidr_, "") };
    inline CreateClusterRequest& setServiceCidr(string serviceCidr) { DARABONBA_PTR_SET_VALUE(serviceCidr_, serviceCidr) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateClusterRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & getVswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> getVswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline CreateClusterRequest& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline CreateClusterRequest& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


  protected:
    // Kubernetes or ManagedKubernetes. The former indicates an ECK cluster, and the latter indicates a serverless VC.
    // Must be used together with the profile parameter.
    // 
    // This parameter is required.
    shared_ptr<string> clusterType_ {};
    // The pod network CIDR block. The CIDR block must be a valid private CIDR block, which includes the following CIDR blocks and their subnets: 10.0.0.0/8, 172.16-31.0.0/12-16, and 192.168.0.0/16. The CIDR block cannot overlap with the CIDR blocks used by the VPC or existing Kubernetes clusters in the VPC. You cannot modify the CIDR block after the cluster is created.
    shared_ptr<string> containerCidr_ {};
    // The control plane configuration.
    shared_ptr<CreateClusterRequest::ControlPlaneConfig> controlPlaneConfig_ {};
    // The ENS Region ID of the cluster.
    shared_ptr<string> ensRegionId_ {};
    shared_ptr<string> isp_ {};
    // The cluster version, which is consistent with the Kubernetes community baseline version. Select the latest version. If you do not specify this parameter, the latest version is used by default.
    shared_ptr<string> kubernetesVersion_ {};
    // The ID of the CLB instance used for API Server access. If you specify this parameter, automatic creation of a CLB instance for the API Server is skipped.
    shared_ptr<string> loadBalancerId_ {};
    // The cluster name.
    shared_ptr<string> name_ {};
    shared_ptr<string> natGatewayId_ {};
    // Each pod vSwitch corresponds to a worker node vSwitch. The zone of the pod vSwitch must be the same as that of the worker node vSwitch. If you do not specify this parameter, vswitch_ids is used by default.
    shared_ptr<vector<string>> podVswitchIds_ {};
    // Default or Serverless. The former indicates an ECK cluster, and the latter indicates a serverless VC.
    // Must be used together with the cluster_type parameter.
    // 
    // This parameter is required.
    shared_ptr<string> profile_ {};
    // Specifies whether to enable public network access. The API Server is exposed through an EIP to enable public access to the cluster.
    // ● true: Enable public network access.
    // ● false: Disable public network access. If you select this option, you cannot access the cluster API Server from the Internet.
    // Default value: false.
    shared_ptr<bool> publicAccess_ {};
    // The service network CIDR block. Valid ranges: 10.0.0.0/16-24, 172.16-31.0.0/16-24, and 192.168.0.0/16-24. The CIDR block cannot overlap with the VPC CIDR block 10.1.0.0/21 or the CIDR blocks used by existing Kubernetes clusters in the VPC. You cannot modify the CIDR block after the cluster is created.
    shared_ptr<string> serviceCidr_ {};
    // The VPC used by the cluster.
    shared_ptr<string> vpcId_ {};
    // The IDs of the vSwitches for cluster nodes. The ENS Region of the vswitch_ids must be the same as the ens_region_id value.
    shared_ptr<vector<string>> vswitchIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
