// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cluster, cluster_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetClusterResponseBody() = default ;
    GetClusterResponseBody(const GetClusterResponseBody &) = default ;
    GetClusterResponseBody(GetClusterResponseBody &&) = default ;
    GetClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterResponseBody() = default ;
    GetClusterResponseBody& operator=(const GetClusterResponseBody &) = default ;
    GetClusterResponseBody& operator=(GetClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Cluster : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Cluster& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterImportStatus, clusterImportStatus_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(CpuUsed, cpuUsed_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CsClusterId, csClusterId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(IaasProvider, iaasProvider_);
        DARABONBA_PTR_TO_JSON(Mem, mem_);
        DARABONBA_PTR_TO_JSON(MemUsed, memUsed_);
        DARABONBA_PTR_TO_JSON(NetworkMode, networkMode_);
        DARABONBA_PTR_TO_JSON(NodeNum, nodeNum_);
        DARABONBA_PTR_TO_JSON(OversoldFactor, oversoldFactor_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SubClusterType, subClusterType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Cluster& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterImportStatus, clusterImportStatus_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(CpuUsed, cpuUsed_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CsClusterId, csClusterId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(IaasProvider, iaasProvider_);
        DARABONBA_PTR_FROM_JSON(Mem, mem_);
        DARABONBA_PTR_FROM_JSON(MemUsed, memUsed_);
        DARABONBA_PTR_FROM_JSON(NetworkMode, networkMode_);
        DARABONBA_PTR_FROM_JSON(NodeNum, nodeNum_);
        DARABONBA_PTR_FROM_JSON(OversoldFactor, oversoldFactor_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SubClusterType, subClusterType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      Cluster() = default ;
      Cluster(const Cluster &) = default ;
      Cluster(Cluster &&) = default ;
      Cluster(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Cluster() = default ;
      Cluster& operator=(const Cluster &) = default ;
      Cluster& operator=(Cluster &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterImportStatus_ == nullptr && this->clusterName_ == nullptr && this->clusterType_ == nullptr && this->cpu_ == nullptr && this->cpuUsed_ == nullptr
        && this->createTime_ == nullptr && this->csClusterId_ == nullptr && this->description_ == nullptr && this->iaasProvider_ == nullptr && this->mem_ == nullptr
        && this->memUsed_ == nullptr && this->networkMode_ == nullptr && this->nodeNum_ == nullptr && this->oversoldFactor_ == nullptr && this->regionId_ == nullptr
        && this->subClusterType_ == nullptr && this->updateTime_ == nullptr && this->vpcId_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Cluster& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterImportStatus Field Functions 
      bool hasClusterImportStatus() const { return this->clusterImportStatus_ != nullptr;};
      void deleteClusterImportStatus() { this->clusterImportStatus_ = nullptr;};
      inline int32_t getClusterImportStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterImportStatus_, 0) };
      inline Cluster& setClusterImportStatus(int32_t clusterImportStatus) { DARABONBA_PTR_SET_VALUE(clusterImportStatus_, clusterImportStatus) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Cluster& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline int32_t getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, 0) };
      inline Cluster& setClusterType(int32_t clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
      inline Cluster& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // cpuUsed Field Functions 
      bool hasCpuUsed() const { return this->cpuUsed_ != nullptr;};
      void deleteCpuUsed() { this->cpuUsed_ = nullptr;};
      inline int32_t getCpuUsed() const { DARABONBA_PTR_GET_DEFAULT(cpuUsed_, 0) };
      inline Cluster& setCpuUsed(int32_t cpuUsed) { DARABONBA_PTR_SET_VALUE(cpuUsed_, cpuUsed) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Cluster& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // csClusterId Field Functions 
      bool hasCsClusterId() const { return this->csClusterId_ != nullptr;};
      void deleteCsClusterId() { this->csClusterId_ = nullptr;};
      inline string getCsClusterId() const { DARABONBA_PTR_GET_DEFAULT(csClusterId_, "") };
      inline Cluster& setCsClusterId(string csClusterId) { DARABONBA_PTR_SET_VALUE(csClusterId_, csClusterId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Cluster& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // iaasProvider Field Functions 
      bool hasIaasProvider() const { return this->iaasProvider_ != nullptr;};
      void deleteIaasProvider() { this->iaasProvider_ = nullptr;};
      inline string getIaasProvider() const { DARABONBA_PTR_GET_DEFAULT(iaasProvider_, "") };
      inline Cluster& setIaasProvider(string iaasProvider) { DARABONBA_PTR_SET_VALUE(iaasProvider_, iaasProvider) };


      // mem Field Functions 
      bool hasMem() const { return this->mem_ != nullptr;};
      void deleteMem() { this->mem_ = nullptr;};
      inline int32_t getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
      inline Cluster& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


      // memUsed Field Functions 
      bool hasMemUsed() const { return this->memUsed_ != nullptr;};
      void deleteMemUsed() { this->memUsed_ = nullptr;};
      inline int32_t getMemUsed() const { DARABONBA_PTR_GET_DEFAULT(memUsed_, 0) };
      inline Cluster& setMemUsed(int32_t memUsed) { DARABONBA_PTR_SET_VALUE(memUsed_, memUsed) };


      // networkMode Field Functions 
      bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
      void deleteNetworkMode() { this->networkMode_ = nullptr;};
      inline int32_t getNetworkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, 0) };
      inline Cluster& setNetworkMode(int32_t networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


      // nodeNum Field Functions 
      bool hasNodeNum() const { return this->nodeNum_ != nullptr;};
      void deleteNodeNum() { this->nodeNum_ = nullptr;};
      inline int32_t getNodeNum() const { DARABONBA_PTR_GET_DEFAULT(nodeNum_, 0) };
      inline Cluster& setNodeNum(int32_t nodeNum) { DARABONBA_PTR_SET_VALUE(nodeNum_, nodeNum) };


      // oversoldFactor Field Functions 
      bool hasOversoldFactor() const { return this->oversoldFactor_ != nullptr;};
      void deleteOversoldFactor() { this->oversoldFactor_ = nullptr;};
      inline int32_t getOversoldFactor() const { DARABONBA_PTR_GET_DEFAULT(oversoldFactor_, 0) };
      inline Cluster& setOversoldFactor(int32_t oversoldFactor) { DARABONBA_PTR_SET_VALUE(oversoldFactor_, oversoldFactor) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Cluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // subClusterType Field Functions 
      bool hasSubClusterType() const { return this->subClusterType_ != nullptr;};
      void deleteSubClusterType() { this->subClusterType_ = nullptr;};
      inline string getSubClusterType() const { DARABONBA_PTR_GET_DEFAULT(subClusterType_, "") };
      inline Cluster& setSubClusterType(string subClusterType) { DARABONBA_PTR_SET_VALUE(subClusterType_, subClusterType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Cluster& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Cluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The ID of the cluster.
      shared_ptr<string> clusterId_ {};
      // The import status of the cluster. Valid values:
      // 
      // - 1: The cluster is imported.
      // 
      // - 2: The cluster fails to be imported.
      // 
      // - 3: The cluster is being imported.
      // 
      // - 4: The cluster is deleted.
      // 
      // - 0: The cluster is not imported.
      shared_ptr<int32_t> clusterImportStatus_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      // The type of the cluster. Valid values:
      // 
      // - 0: regular Docker cluster
      // 
      // - 1: Swarm cluster
      // 
      // - 2: Elastic Compute Service (ECS) cluster
      // 
      // - 3: self-managed Kubernetes cluster in EDAS
      // 
      // - 4: cluster in which Pandora automatically registers applications
      // 
      // - 5: ACK cluster
      shared_ptr<int32_t> clusterType_ {};
      // The total number of CPU cores.
      shared_ptr<int32_t> cpu_ {};
      // The number of used CPU cores.
      shared_ptr<int32_t> cpuUsed_ {};
      // The time when the cluster was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> createTime_ {};
      // The ID of the Container Service for Kubernetes (ACK) cluster.
      shared_ptr<string> csClusterId_ {};
      // The description of the cluster.
      shared_ptr<string> description_ {};
      // The provider of Infrastructure as a Service (IaaS) resources used in the cluster.
      shared_ptr<string> iaasProvider_ {};
      // The total size of memory. Unit: MB.
      shared_ptr<int32_t> mem_ {};
      // The size of used memory. Unit: MB.
      shared_ptr<int32_t> memUsed_ {};
      // The network type of the cluster. Valid values:
      // 
      // - 1: classic network
      // 
      // - 2: virtual private cloud (VPC)
      shared_ptr<int32_t> networkMode_ {};
      // The number of ECS instances.
      shared_ptr<int32_t> nodeNum_ {};
      // The overcommit ratio supported by a Docker cluster. Valid values:
      // 
      // - 1: 1:1, which means that resources are not overcommitted.
      // 
      // - 2: 1:2, which means that resources are overcommitted by 1:2.
      // 
      // - 4: 1:4, which means that resources are overcommitted by 1:4.
      // 
      // - 8: 1:8, which means that resources are overcommitted by 1:8.
      shared_ptr<int32_t> oversoldFactor_ {};
      // The ID of the region where the cluster resides.
      shared_ptr<string> regionId_ {};
      // The subtype of the Kubernetes cluster. Valid values: ManagedKubernetes, Ask, and ExternalKubernetes. ManagedKubernetes refers to the ACK cluster. Ask refers to the Serverless Kubernetes (ASK) cluster. ExternalKubernetes refers to the external cluster.
      shared_ptr<string> subClusterType_ {};
      // The time when the cluster was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> updateTime_ {};
      // The ID of the virtual private cloud (VPC).
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->cluster_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline const GetClusterResponseBody::Cluster & getCluster() const { DARABONBA_PTR_GET_CONST(cluster_, GetClusterResponseBody::Cluster) };
    inline GetClusterResponseBody::Cluster getCluster() { DARABONBA_PTR_GET(cluster_, GetClusterResponseBody::Cluster) };
    inline GetClusterResponseBody& setCluster(const GetClusterResponseBody::Cluster & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
    inline GetClusterResponseBody& setCluster(GetClusterResponseBody::Cluster && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetClusterResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetClusterResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the cluster.
    shared_ptr<GetClusterResponseBody::Cluster> cluster_ {};
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The detailed information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
