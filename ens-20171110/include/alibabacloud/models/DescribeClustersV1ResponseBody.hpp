// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSV1RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSV1RESPONSEBODY_HPP_
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
  class DescribeClustersV1ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersV1ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Clusters, clusters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersV1ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClustersV1ResponseBody() = default ;
    DescribeClustersV1ResponseBody(const DescribeClustersV1ResponseBody &) = default ;
    DescribeClustersV1ResponseBody(DescribeClustersV1ResponseBody &&) = default ;
    DescribeClustersV1ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersV1ResponseBody() = default ;
    DescribeClustersV1ResponseBody& operator=(const DescribeClustersV1ResponseBody &) = default ;
    DescribeClustersV1ResponseBody& operator=(DescribeClustersV1ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Clusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Clusters& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_ANY_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(ContainerCidr, containerCidr_);
        DARABONBA_PTR_TO_JSON(ControlPlaneConfig, controlPlaneConfig_);
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(JoinToken, joinToken_);
        DARABONBA_PTR_TO_JSON(KubernetesVersion, kubernetesVersion_);
        DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PodVswitchIds, podVswitchIds_);
        DARABONBA_PTR_TO_JSON(PublicAccess, publicAccess_);
        DARABONBA_PTR_TO_JSON(ServiceCidr, serviceCidr_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VswitchIds, vswitchIds_);
      };
      friend void from_json(const Darabonba::Json& j, Clusters& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_ANY_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(ContainerCidr, containerCidr_);
        DARABONBA_PTR_FROM_JSON(ControlPlaneConfig, controlPlaneConfig_);
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(JoinToken, joinToken_);
        DARABONBA_PTR_FROM_JSON(KubernetesVersion, kubernetesVersion_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PodVswitchIds, podVswitchIds_);
        DARABONBA_PTR_FROM_JSON(PublicAccess, publicAccess_);
        DARABONBA_PTR_FROM_JSON(ServiceCidr, serviceCidr_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VswitchIds, vswitchIds_);
      };
      Clusters() = default ;
      Clusters(const Clusters &) = default ;
      Clusters(Clusters &&) = default ;
      Clusters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Clusters() = default ;
      Clusters& operator=(const Clusters &) = default ;
      Clusters& operator=(Clusters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ControlPlaneConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ControlPlaneConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ContainerRuntime, containerRuntime_);
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
          DARABONBA_PTR_TO_JSON(NodePortRange, nodePortRange_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
          DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
        };
        friend void from_json(const Darabonba::Json& j, ControlPlaneConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ContainerRuntime, containerRuntime_);
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
          DARABONBA_PTR_FROM_JSON(NodePortRange, nodePortRange_);
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
        virtual bool empty() const override { return this->containerRuntime_ == nullptr
        && this->imageId_ == nullptr && this->instanceSpec_ == nullptr && this->nodePortRange_ == nullptr && this->size_ == nullptr && this->systemDiskCategory_ == nullptr
        && this->systemDiskSize_ == nullptr; };
        // containerRuntime Field Functions 
        bool hasContainerRuntime() const { return this->containerRuntime_ != nullptr;};
        void deleteContainerRuntime() { this->containerRuntime_ = nullptr;};
        inline string getContainerRuntime() const { DARABONBA_PTR_GET_DEFAULT(containerRuntime_, "") };
        inline ControlPlaneConfig& setContainerRuntime(string containerRuntime) { DARABONBA_PTR_SET_VALUE(containerRuntime_, containerRuntime) };


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


        // nodePortRange Field Functions 
        bool hasNodePortRange() const { return this->nodePortRange_ != nullptr;};
        void deleteNodePortRange() { this->nodePortRange_ = nullptr;};
        inline string getNodePortRange() const { DARABONBA_PTR_GET_DEFAULT(nodePortRange_, "") };
        inline ControlPlaneConfig& setNodePortRange(string nodePortRange) { DARABONBA_PTR_SET_VALUE(nodePortRange_, nodePortRange) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline ControlPlaneConfig& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


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
        // The runtime type used by the nodes.
        shared_ptr<string> containerRuntime_ {};
        // The ID of the custom image.
        shared_ptr<string> imageId_ {};
        // The instance type.
        shared_ptr<string> instanceSpec_ {};
        // The node port range.
        shared_ptr<string> nodePortRange_ {};
        // The number of control plane nodes.
        shared_ptr<int64_t> size_ {};
        // The system disk type of the node. Valid value: local_ssd, cloud_ssd, cloud_efficiency, and local_hdd.
        shared_ptr<string> systemDiskCategory_ {};
        // The size of the system disk. Unit: GB.
        shared_ptr<int64_t> systemDiskSize_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->clusterId_ == nullptr && this->config_ == nullptr && this->containerCidr_ == nullptr && this->controlPlaneConfig_ == nullptr && this->ensRegionId_ == nullptr
        && this->joinToken_ == nullptr && this->kubernetesVersion_ == nullptr && this->loadBalancerId_ == nullptr && this->name_ == nullptr && this->podVswitchIds_ == nullptr
        && this->publicAccess_ == nullptr && this->serviceCidr_ == nullptr && this->state_ == nullptr && this->vpcId_ == nullptr && this->vswitchIds_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
      inline Clusters& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Clusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline       const Darabonba::Json & getConfig() const { DARABONBA_GET(config_) };
      Darabonba::Json & getConfig() { DARABONBA_GET(config_) };
      inline Clusters& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
      inline Clusters& setConfig(Darabonba::Json && config) { DARABONBA_SET_RVALUE(config_, config) };


      // containerCidr Field Functions 
      bool hasContainerCidr() const { return this->containerCidr_ != nullptr;};
      void deleteContainerCidr() { this->containerCidr_ = nullptr;};
      inline string getContainerCidr() const { DARABONBA_PTR_GET_DEFAULT(containerCidr_, "") };
      inline Clusters& setContainerCidr(string containerCidr) { DARABONBA_PTR_SET_VALUE(containerCidr_, containerCidr) };


      // controlPlaneConfig Field Functions 
      bool hasControlPlaneConfig() const { return this->controlPlaneConfig_ != nullptr;};
      void deleteControlPlaneConfig() { this->controlPlaneConfig_ = nullptr;};
      inline const Clusters::ControlPlaneConfig & getControlPlaneConfig() const { DARABONBA_PTR_GET_CONST(controlPlaneConfig_, Clusters::ControlPlaneConfig) };
      inline Clusters::ControlPlaneConfig getControlPlaneConfig() { DARABONBA_PTR_GET(controlPlaneConfig_, Clusters::ControlPlaneConfig) };
      inline Clusters& setControlPlaneConfig(const Clusters::ControlPlaneConfig & controlPlaneConfig) { DARABONBA_PTR_SET_VALUE(controlPlaneConfig_, controlPlaneConfig) };
      inline Clusters& setControlPlaneConfig(Clusters::ControlPlaneConfig && controlPlaneConfig) { DARABONBA_PTR_SET_RVALUE(controlPlaneConfig_, controlPlaneConfig) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline Clusters& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // joinToken Field Functions 
      bool hasJoinToken() const { return this->joinToken_ != nullptr;};
      void deleteJoinToken() { this->joinToken_ = nullptr;};
      inline string getJoinToken() const { DARABONBA_PTR_GET_DEFAULT(joinToken_, "") };
      inline Clusters& setJoinToken(string joinToken) { DARABONBA_PTR_SET_VALUE(joinToken_, joinToken) };


      // kubernetesVersion Field Functions 
      bool hasKubernetesVersion() const { return this->kubernetesVersion_ != nullptr;};
      void deleteKubernetesVersion() { this->kubernetesVersion_ = nullptr;};
      inline string getKubernetesVersion() const { DARABONBA_PTR_GET_DEFAULT(kubernetesVersion_, "") };
      inline Clusters& setKubernetesVersion(string kubernetesVersion) { DARABONBA_PTR_SET_VALUE(kubernetesVersion_, kubernetesVersion) };


      // loadBalancerId Field Functions 
      bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
      void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
      inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
      inline Clusters& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Clusters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // podVswitchIds Field Functions 
      bool hasPodVswitchIds() const { return this->podVswitchIds_ != nullptr;};
      void deletePodVswitchIds() { this->podVswitchIds_ = nullptr;};
      inline const vector<string> & getPodVswitchIds() const { DARABONBA_PTR_GET_CONST(podVswitchIds_, vector<string>) };
      inline vector<string> getPodVswitchIds() { DARABONBA_PTR_GET(podVswitchIds_, vector<string>) };
      inline Clusters& setPodVswitchIds(const vector<string> & podVswitchIds) { DARABONBA_PTR_SET_VALUE(podVswitchIds_, podVswitchIds) };
      inline Clusters& setPodVswitchIds(vector<string> && podVswitchIds) { DARABONBA_PTR_SET_RVALUE(podVswitchIds_, podVswitchIds) };


      // publicAccess Field Functions 
      bool hasPublicAccess() const { return this->publicAccess_ != nullptr;};
      void deletePublicAccess() { this->publicAccess_ = nullptr;};
      inline bool getPublicAccess() const { DARABONBA_PTR_GET_DEFAULT(publicAccess_, false) };
      inline Clusters& setPublicAccess(bool publicAccess) { DARABONBA_PTR_SET_VALUE(publicAccess_, publicAccess) };


      // serviceCidr Field Functions 
      bool hasServiceCidr() const { return this->serviceCidr_ != nullptr;};
      void deleteServiceCidr() { this->serviceCidr_ = nullptr;};
      inline string getServiceCidr() const { DARABONBA_PTR_GET_DEFAULT(serviceCidr_, "") };
      inline Clusters& setServiceCidr(string serviceCidr) { DARABONBA_PTR_SET_VALUE(serviceCidr_, serviceCidr) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Clusters& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Clusters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchIds Field Functions 
      bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
      void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
      inline const vector<string> & getVswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
      inline vector<string> getVswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
      inline Clusters& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
      inline Clusters& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


    protected:
      // The user IDs.
      shared_ptr<string> aliUid_ {};
      // The cluster instance ID.
      shared_ptr<string> clusterId_ {};
      // The kubeconfig file of the cluster.
      Darabonba::Json config_ {};
      // The pod CIDR block. You can specify 10.0.0.0/8, 172.16-31.0.0/12-16, 192.168.0.0/16, or their subnets as the pod CIDR block. The pod CIDR block cannot overlap with the CIDR block of the VPC in which the cluster is deployed and the CIDR blocks of existing clusters in the VPC. You cannot modify the pod CIDR block after you create the cluster.
      shared_ptr<string> containerCidr_ {};
      // Control plane configuration.
      shared_ptr<Clusters::ControlPlaneConfig> controlPlaneConfig_ {};
      // The ID of the ENS node.
      shared_ptr<string> ensRegionId_ {};
      // The cluster access authentication token.
      shared_ptr<string> joinToken_ {};
      // The Kubernetes version of the cluster. The Kubernetes versions supported are the same as the Kubernetes versions supported by open source Kubernetes. We recommend that you specify the latest Kubernetes version. If you do not specify this parameter, the latest Kubernetes version is used.
      shared_ptr<string> kubernetesVersion_ {};
      // The ID of the ALB instance.
      shared_ptr<string> loadBalancerId_ {};
      // The name of the monitoring object.
      shared_ptr<string> name_ {};
      // For each vSwitch that allocates IP addresses to worker nodes, you must select a vSwitch in the same zone to allocate IP addresses to pods. If you do not specify this parameter, vswitch_ids is used by default.
      shared_ptr<vector<string>> podVswitchIds_ {};
      // Specifies whether to enable Internet access for the application. You can use an elastic IP address (EIP) to expose the API server. This way, you can access the cluster over the Internet. Valid values: true: enables Internet access for the application. false: disables Internet access to the API server of the cluster. If you set the value to false, the API server cannot be accessed over the Internet.
      shared_ptr<bool> publicAccess_ {};
      // Valid values: 10.0.0.0/16-24, 172.16-31.0.0/16-24, and 192.168.0.0/16-24. The Service CIDR block cannot overlap with the VPC CIDR block 10.1.0.0/21 or the CIDR blocks of existing ACK clusters in the VPC. You cannot change the Service CIDR block after you create the cluster.
      shared_ptr<string> serviceCidr_ {};
      shared_ptr<string> state_ {};
      // The VPC of the cluster.
      shared_ptr<string> vpcId_ {};
      // the id of the vswitch to which the cluster node belongs. The ENS region of the vswitch_ids service must be the same as that of the ens_region_id.
      shared_ptr<vector<string>> vswitchIds_ {};
    };

    virtual bool empty() const override { return this->clusters_ == nullptr
        && this->requestId_ == nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<DescribeClustersV1ResponseBody::Clusters> & getClusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<DescribeClustersV1ResponseBody::Clusters>) };
    inline vector<DescribeClustersV1ResponseBody::Clusters> getClusters() { DARABONBA_PTR_GET(clusters_, vector<DescribeClustersV1ResponseBody::Clusters>) };
    inline DescribeClustersV1ResponseBody& setClusters(const vector<DescribeClustersV1ResponseBody::Clusters> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline DescribeClustersV1ResponseBody& setClusters(vector<DescribeClustersV1ResponseBody::Clusters> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClustersV1ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the information about clusters.
    shared_ptr<vector<DescribeClustersV1ResponseBody::Clusters>> clusters_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
