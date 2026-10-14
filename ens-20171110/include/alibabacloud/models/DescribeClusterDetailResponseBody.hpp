// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERDETAILRESPONSEBODY_HPP_
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
  class DescribeClusterDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_ANY_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ContainerCidr, containerCidr_);
      DARABONBA_PTR_TO_JSON(ControlPlaneConfig, controlPlaneConfig_);
      DARABONBA_PTR_TO_JSON(ControlPlaneMeta, controlPlaneMeta_);
      DARABONBA_PTR_TO_JSON(Created, created_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(JoinToken, joinToken_);
      DARABONBA_PTR_TO_JSON(KubernetesVersion, kubernetesVersion_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(PodStatus, podStatus_);
      DARABONBA_PTR_TO_JSON(PodVswitchIds, podVswitchIds_);
      DARABONBA_PTR_TO_JSON(PublicAccess, publicAccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceCidr, serviceCidr_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchIds, vswitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_ANY_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ContainerCidr, containerCidr_);
      DARABONBA_PTR_FROM_JSON(ControlPlaneConfig, controlPlaneConfig_);
      DARABONBA_PTR_FROM_JSON(ControlPlaneMeta, controlPlaneMeta_);
      DARABONBA_PTR_FROM_JSON(Created, created_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(JoinToken, joinToken_);
      DARABONBA_PTR_FROM_JSON(KubernetesVersion, kubernetesVersion_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(PodStatus, podStatus_);
      DARABONBA_PTR_FROM_JSON(PodVswitchIds, podVswitchIds_);
      DARABONBA_PTR_FROM_JSON(PublicAccess, publicAccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceCidr, serviceCidr_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchIds, vswitchIds_);
    };
    DescribeClusterDetailResponseBody() = default ;
    DescribeClusterDetailResponseBody(const DescribeClusterDetailResponseBody &) = default ;
    DescribeClusterDetailResponseBody(DescribeClusterDetailResponseBody &&) = default ;
    DescribeClusterDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterDetailResponseBody() = default ;
    DescribeClusterDetailResponseBody& operator=(const DescribeClusterDetailResponseBody &) = default ;
    DescribeClusterDetailResponseBody& operator=(DescribeClusterDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PodStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PodStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Running, running_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, PodStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Running, running_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      PodStatus() = default ;
      PodStatus(const PodStatus &) = default ;
      PodStatus(PodStatus &&) = default ;
      PodStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PodStatus() = default ;
      PodStatus& operator=(const PodStatus &) = default ;
      PodStatus& operator=(PodStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->running_ == nullptr
        && this->total_ == nullptr; };
      // running Field Functions 
      bool hasRunning() const { return this->running_ != nullptr;};
      void deleteRunning() { this->running_ = nullptr;};
      inline int32_t getRunning() const { DARABONBA_PTR_GET_DEFAULT(running_, 0) };
      inline PodStatus& setRunning(int32_t running) { DARABONBA_PTR_SET_VALUE(running_, running) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline PodStatus& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int32_t> running_ {};
      shared_ptr<int32_t> total_ {};
    };

    class NodeCount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeCount& obj) { 
        DARABONBA_PTR_TO_JSON(Ready, ready_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, NodeCount& obj) { 
        DARABONBA_PTR_FROM_JSON(Ready, ready_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      NodeCount() = default ;
      NodeCount(const NodeCount &) = default ;
      NodeCount(NodeCount &&) = default ;
      NodeCount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeCount() = default ;
      NodeCount& operator=(const NodeCount &) = default ;
      NodeCount& operator=(NodeCount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ready_ == nullptr
        && this->total_ == nullptr; };
      // ready Field Functions 
      bool hasReady() const { return this->ready_ != nullptr;};
      void deleteReady() { this->ready_ = nullptr;};
      inline int32_t getReady() const { DARABONBA_PTR_GET_DEFAULT(ready_, 0) };
      inline NodeCount& setReady(int32_t ready) { DARABONBA_PTR_SET_VALUE(ready_, ready) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline NodeCount& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int32_t> ready_ {};
      shared_ptr<int32_t> total_ {};
    };

    class ControlPlaneMeta : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ControlPlaneMeta& obj) { 
        DARABONBA_PTR_TO_JSON(MasterInstances, masterInstances_);
        DARABONBA_PTR_TO_JSON(MasterUrl, masterUrl_);
      };
      friend void from_json(const Darabonba::Json& j, ControlPlaneMeta& obj) { 
        DARABONBA_PTR_FROM_JSON(MasterInstances, masterInstances_);
        DARABONBA_PTR_FROM_JSON(MasterUrl, masterUrl_);
      };
      ControlPlaneMeta() = default ;
      ControlPlaneMeta(const ControlPlaneMeta &) = default ;
      ControlPlaneMeta(ControlPlaneMeta &&) = default ;
      ControlPlaneMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ControlPlaneMeta() = default ;
      ControlPlaneMeta& operator=(const ControlPlaneMeta &) = default ;
      ControlPlaneMeta& operator=(ControlPlaneMeta &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MasterUrl : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MasterUrl& obj) { 
          DARABONBA_PTR_TO_JSON(PrivateUrl, privateUrl_);
          DARABONBA_PTR_TO_JSON(PublicUrl, publicUrl_);
        };
        friend void from_json(const Darabonba::Json& j, MasterUrl& obj) { 
          DARABONBA_PTR_FROM_JSON(PrivateUrl, privateUrl_);
          DARABONBA_PTR_FROM_JSON(PublicUrl, publicUrl_);
        };
        MasterUrl() = default ;
        MasterUrl(const MasterUrl &) = default ;
        MasterUrl(MasterUrl &&) = default ;
        MasterUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MasterUrl() = default ;
        MasterUrl& operator=(const MasterUrl &) = default ;
        MasterUrl& operator=(MasterUrl &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->privateUrl_ == nullptr
        && this->publicUrl_ == nullptr; };
        // privateUrl Field Functions 
        bool hasPrivateUrl() const { return this->privateUrl_ != nullptr;};
        void deletePrivateUrl() { this->privateUrl_ = nullptr;};
        inline string getPrivateUrl() const { DARABONBA_PTR_GET_DEFAULT(privateUrl_, "") };
        inline MasterUrl& setPrivateUrl(string privateUrl) { DARABONBA_PTR_SET_VALUE(privateUrl_, privateUrl) };


        // publicUrl Field Functions 
        bool hasPublicUrl() const { return this->publicUrl_ != nullptr;};
        void deletePublicUrl() { this->publicUrl_ = nullptr;};
        inline string getPublicUrl() const { DARABONBA_PTR_GET_DEFAULT(publicUrl_, "") };
        inline MasterUrl& setPublicUrl(string publicUrl) { DARABONBA_PTR_SET_VALUE(publicUrl_, publicUrl) };


      protected:
        shared_ptr<string> privateUrl_ {};
        shared_ptr<string> publicUrl_ {};
      };

      class MasterInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MasterInstances& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, MasterInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        MasterInstances() = default ;
        MasterInstances(const MasterInstances &) = default ;
        MasterInstances(MasterInstances &&) = default ;
        MasterInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MasterInstances() = default ;
        MasterInstances& operator=(const MasterInstances &) = default ;
        MasterInstances& operator=(MasterInstances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->ip_ == nullptr && this->name_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline MasterInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline MasterInstances& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline MasterInstances& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> ip_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->masterInstances_ == nullptr
        && this->masterUrl_ == nullptr; };
      // masterInstances Field Functions 
      bool hasMasterInstances() const { return this->masterInstances_ != nullptr;};
      void deleteMasterInstances() { this->masterInstances_ = nullptr;};
      inline const vector<ControlPlaneMeta::MasterInstances> & getMasterInstances() const { DARABONBA_PTR_GET_CONST(masterInstances_, vector<ControlPlaneMeta::MasterInstances>) };
      inline vector<ControlPlaneMeta::MasterInstances> getMasterInstances() { DARABONBA_PTR_GET(masterInstances_, vector<ControlPlaneMeta::MasterInstances>) };
      inline ControlPlaneMeta& setMasterInstances(const vector<ControlPlaneMeta::MasterInstances> & masterInstances) { DARABONBA_PTR_SET_VALUE(masterInstances_, masterInstances) };
      inline ControlPlaneMeta& setMasterInstances(vector<ControlPlaneMeta::MasterInstances> && masterInstances) { DARABONBA_PTR_SET_RVALUE(masterInstances_, masterInstances) };


      // masterUrl Field Functions 
      bool hasMasterUrl() const { return this->masterUrl_ != nullptr;};
      void deleteMasterUrl() { this->masterUrl_ = nullptr;};
      inline const ControlPlaneMeta::MasterUrl & getMasterUrl() const { DARABONBA_PTR_GET_CONST(masterUrl_, ControlPlaneMeta::MasterUrl) };
      inline ControlPlaneMeta::MasterUrl getMasterUrl() { DARABONBA_PTR_GET(masterUrl_, ControlPlaneMeta::MasterUrl) };
      inline ControlPlaneMeta& setMasterUrl(const ControlPlaneMeta::MasterUrl & masterUrl) { DARABONBA_PTR_SET_VALUE(masterUrl_, masterUrl) };
      inline ControlPlaneMeta& setMasterUrl(ControlPlaneMeta::MasterUrl && masterUrl) { DARABONBA_PTR_SET_RVALUE(masterUrl_, masterUrl) };


    protected:
      shared_ptr<vector<ControlPlaneMeta::MasterInstances>> masterInstances_ {};
      shared_ptr<ControlPlaneMeta::MasterUrl> masterUrl_ {};
    };

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
      // The container runtime type.
      shared_ptr<string> containerRuntime_ {};
      // The image ID of the control plane virtual machine.
      shared_ptr<string> imageId_ {};
      // The node instance type.
      shared_ptr<string> instanceSpec_ {};
      // The node service port range.
      shared_ptr<string> nodePortRange_ {};
      // The number of control plane nodes.
      shared_ptr<int64_t> size_ {};
      // The system cloud disk type of the node.
      shared_ptr<string> systemDiskCategory_ {};
      // The system cloud disk size of the node.
      shared_ptr<int64_t> systemDiskSize_ {};
    };

    virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->clusterId_ == nullptr && this->config_ == nullptr && this->containerCidr_ == nullptr && this->controlPlaneConfig_ == nullptr && this->controlPlaneMeta_ == nullptr
        && this->created_ == nullptr && this->ensRegionId_ == nullptr && this->isp_ == nullptr && this->joinToken_ == nullptr && this->kubernetesVersion_ == nullptr
        && this->loadBalancerId_ == nullptr && this->name_ == nullptr && this->natGatewayId_ == nullptr && this->nodeCount_ == nullptr && this->podStatus_ == nullptr
        && this->podVswitchIds_ == nullptr && this->publicAccess_ == nullptr && this->requestId_ == nullptr && this->serviceCidr_ == nullptr && this->state_ == nullptr
        && this->vpcId_ == nullptr && this->vswitchIds_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline DescribeClusterDetailResponseBody& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClusterDetailResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline     const Darabonba::Json & getConfig() const { DARABONBA_GET(config_) };
    Darabonba::Json & getConfig() { DARABONBA_GET(config_) };
    inline DescribeClusterDetailResponseBody& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
    inline DescribeClusterDetailResponseBody& setConfig(Darabonba::Json && config) { DARABONBA_SET_RVALUE(config_, config) };


    // containerCidr Field Functions 
    bool hasContainerCidr() const { return this->containerCidr_ != nullptr;};
    void deleteContainerCidr() { this->containerCidr_ = nullptr;};
    inline string getContainerCidr() const { DARABONBA_PTR_GET_DEFAULT(containerCidr_, "") };
    inline DescribeClusterDetailResponseBody& setContainerCidr(string containerCidr) { DARABONBA_PTR_SET_VALUE(containerCidr_, containerCidr) };


    // controlPlaneConfig Field Functions 
    bool hasControlPlaneConfig() const { return this->controlPlaneConfig_ != nullptr;};
    void deleteControlPlaneConfig() { this->controlPlaneConfig_ = nullptr;};
    inline const DescribeClusterDetailResponseBody::ControlPlaneConfig & getControlPlaneConfig() const { DARABONBA_PTR_GET_CONST(controlPlaneConfig_, DescribeClusterDetailResponseBody::ControlPlaneConfig) };
    inline DescribeClusterDetailResponseBody::ControlPlaneConfig getControlPlaneConfig() { DARABONBA_PTR_GET(controlPlaneConfig_, DescribeClusterDetailResponseBody::ControlPlaneConfig) };
    inline DescribeClusterDetailResponseBody& setControlPlaneConfig(const DescribeClusterDetailResponseBody::ControlPlaneConfig & controlPlaneConfig) { DARABONBA_PTR_SET_VALUE(controlPlaneConfig_, controlPlaneConfig) };
    inline DescribeClusterDetailResponseBody& setControlPlaneConfig(DescribeClusterDetailResponseBody::ControlPlaneConfig && controlPlaneConfig) { DARABONBA_PTR_SET_RVALUE(controlPlaneConfig_, controlPlaneConfig) };


    // controlPlaneMeta Field Functions 
    bool hasControlPlaneMeta() const { return this->controlPlaneMeta_ != nullptr;};
    void deleteControlPlaneMeta() { this->controlPlaneMeta_ = nullptr;};
    inline const DescribeClusterDetailResponseBody::ControlPlaneMeta & getControlPlaneMeta() const { DARABONBA_PTR_GET_CONST(controlPlaneMeta_, DescribeClusterDetailResponseBody::ControlPlaneMeta) };
    inline DescribeClusterDetailResponseBody::ControlPlaneMeta getControlPlaneMeta() { DARABONBA_PTR_GET(controlPlaneMeta_, DescribeClusterDetailResponseBody::ControlPlaneMeta) };
    inline DescribeClusterDetailResponseBody& setControlPlaneMeta(const DescribeClusterDetailResponseBody::ControlPlaneMeta & controlPlaneMeta) { DARABONBA_PTR_SET_VALUE(controlPlaneMeta_, controlPlaneMeta) };
    inline DescribeClusterDetailResponseBody& setControlPlaneMeta(DescribeClusterDetailResponseBody::ControlPlaneMeta && controlPlaneMeta) { DARABONBA_PTR_SET_RVALUE(controlPlaneMeta_, controlPlaneMeta) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline DescribeClusterDetailResponseBody& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeClusterDetailResponseBody& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeClusterDetailResponseBody& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // joinToken Field Functions 
    bool hasJoinToken() const { return this->joinToken_ != nullptr;};
    void deleteJoinToken() { this->joinToken_ = nullptr;};
    inline string getJoinToken() const { DARABONBA_PTR_GET_DEFAULT(joinToken_, "") };
    inline DescribeClusterDetailResponseBody& setJoinToken(string joinToken) { DARABONBA_PTR_SET_VALUE(joinToken_, joinToken) };


    // kubernetesVersion Field Functions 
    bool hasKubernetesVersion() const { return this->kubernetesVersion_ != nullptr;};
    void deleteKubernetesVersion() { this->kubernetesVersion_ = nullptr;};
    inline string getKubernetesVersion() const { DARABONBA_PTR_GET_DEFAULT(kubernetesVersion_, "") };
    inline DescribeClusterDetailResponseBody& setKubernetesVersion(string kubernetesVersion) { DARABONBA_PTR_SET_VALUE(kubernetesVersion_, kubernetesVersion) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeClusterDetailResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClusterDetailResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeClusterDetailResponseBody& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline const DescribeClusterDetailResponseBody::NodeCount & getNodeCount() const { DARABONBA_PTR_GET_CONST(nodeCount_, DescribeClusterDetailResponseBody::NodeCount) };
    inline DescribeClusterDetailResponseBody::NodeCount getNodeCount() { DARABONBA_PTR_GET(nodeCount_, DescribeClusterDetailResponseBody::NodeCount) };
    inline DescribeClusterDetailResponseBody& setNodeCount(const DescribeClusterDetailResponseBody::NodeCount & nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };
    inline DescribeClusterDetailResponseBody& setNodeCount(DescribeClusterDetailResponseBody::NodeCount && nodeCount) { DARABONBA_PTR_SET_RVALUE(nodeCount_, nodeCount) };


    // podStatus Field Functions 
    bool hasPodStatus() const { return this->podStatus_ != nullptr;};
    void deletePodStatus() { this->podStatus_ = nullptr;};
    inline const DescribeClusterDetailResponseBody::PodStatus & getPodStatus() const { DARABONBA_PTR_GET_CONST(podStatus_, DescribeClusterDetailResponseBody::PodStatus) };
    inline DescribeClusterDetailResponseBody::PodStatus getPodStatus() { DARABONBA_PTR_GET(podStatus_, DescribeClusterDetailResponseBody::PodStatus) };
    inline DescribeClusterDetailResponseBody& setPodStatus(const DescribeClusterDetailResponseBody::PodStatus & podStatus) { DARABONBA_PTR_SET_VALUE(podStatus_, podStatus) };
    inline DescribeClusterDetailResponseBody& setPodStatus(DescribeClusterDetailResponseBody::PodStatus && podStatus) { DARABONBA_PTR_SET_RVALUE(podStatus_, podStatus) };


    // podVswitchIds Field Functions 
    bool hasPodVswitchIds() const { return this->podVswitchIds_ != nullptr;};
    void deletePodVswitchIds() { this->podVswitchIds_ = nullptr;};
    inline const vector<string> & getPodVswitchIds() const { DARABONBA_PTR_GET_CONST(podVswitchIds_, vector<string>) };
    inline vector<string> getPodVswitchIds() { DARABONBA_PTR_GET(podVswitchIds_, vector<string>) };
    inline DescribeClusterDetailResponseBody& setPodVswitchIds(const vector<string> & podVswitchIds) { DARABONBA_PTR_SET_VALUE(podVswitchIds_, podVswitchIds) };
    inline DescribeClusterDetailResponseBody& setPodVswitchIds(vector<string> && podVswitchIds) { DARABONBA_PTR_SET_RVALUE(podVswitchIds_, podVswitchIds) };


    // publicAccess Field Functions 
    bool hasPublicAccess() const { return this->publicAccess_ != nullptr;};
    void deletePublicAccess() { this->publicAccess_ = nullptr;};
    inline bool getPublicAccess() const { DARABONBA_PTR_GET_DEFAULT(publicAccess_, false) };
    inline DescribeClusterDetailResponseBody& setPublicAccess(bool publicAccess) { DARABONBA_PTR_SET_VALUE(publicAccess_, publicAccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceCidr Field Functions 
    bool hasServiceCidr() const { return this->serviceCidr_ != nullptr;};
    void deleteServiceCidr() { this->serviceCidr_ = nullptr;};
    inline string getServiceCidr() const { DARABONBA_PTR_GET_DEFAULT(serviceCidr_, "") };
    inline DescribeClusterDetailResponseBody& setServiceCidr(string serviceCidr) { DARABONBA_PTR_SET_VALUE(serviceCidr_, serviceCidr) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeClusterDetailResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeClusterDetailResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & getVswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> getVswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline DescribeClusterDetailResponseBody& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline DescribeClusterDetailResponseBody& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


  protected:
    // The user ID.
    shared_ptr<string> aliUid_ {};
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The cluster kubeconfig.
    Darabonba::Json config_ {};
    // The CIDR block for pods.
    shared_ptr<string> containerCidr_ {};
    // The control plane configuration.
    shared_ptr<DescribeClusterDetailResponseBody::ControlPlaneConfig> controlPlaneConfig_ {};
    shared_ptr<DescribeClusterDetailResponseBody::ControlPlaneMeta> controlPlaneMeta_ {};
    shared_ptr<string> created_ {};
    // The ENS edge zone ID.
    shared_ptr<string> ensRegionId_ {};
    shared_ptr<string> isp_ {};
    // The authentication token for cluster access.
    shared_ptr<string> joinToken_ {};
    // The cluster version, which is consistent with the Kubernetes community baseline version. We recommend that you select the latest version. If you do not specify this parameter, the latest version is used by default.
    shared_ptr<string> kubernetesVersion_ {};
    // The CLB instance ID of the API server.
    shared_ptr<string> loadBalancerId_ {};
    // The cluster name.
    shared_ptr<string> name_ {};
    shared_ptr<string> natGatewayId_ {};
    shared_ptr<DescribeClusterDetailResponseBody::NodeCount> nodeCount_ {};
    shared_ptr<DescribeClusterDetailResponseBody::PodStatus> podStatus_ {};
    // The vSwitch IDs for pods.
    shared_ptr<vector<string>> podVswitchIds_ {};
    // Indicates whether public network access is enabled.
    shared_ptr<bool> publicAccess_ {};
    // Id of the request。
    shared_ptr<string> requestId_ {};
    // The CIDR block for services.
    shared_ptr<string> serviceCidr_ {};
    // The cluster status. Valid values:
    // - **initial**: Being created.
    // - **failed**: Creation failed.
    // - **running**: Running.
    // - **deleting**: Being released.
    shared_ptr<string> state_ {};
    // The VPC used by the cluster.
    shared_ptr<string> vpcId_ {};
    // The vSwitch IDs of the cluster nodes.
    shared_ptr<vector<string>> vswitchIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
