// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERRESOURCEUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERRESOURCEUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIDBClusterResourceUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClusterResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(NodeItems, nodeItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClusterResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(NodeItems, nodeItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAIDBClusterResourceUsageResponseBody() = default ;
    DescribeAIDBClusterResourceUsageResponseBody(const DescribeAIDBClusterResourceUsageResponseBody &) = default ;
    DescribeAIDBClusterResourceUsageResponseBody(DescribeAIDBClusterResourceUsageResponseBody &&) = default ;
    DescribeAIDBClusterResourceUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClusterResourceUsageResponseBody() = default ;
    DescribeAIDBClusterResourceUsageResponseBody& operator=(const DescribeAIDBClusterResourceUsageResponseBody &) = default ;
    DescribeAIDBClusterResourceUsageResponseBody& operator=(DescribeAIDBClusterResourceUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeItems& obj) { 
        DARABONBA_PTR_TO_JSON(CPU, CPU_);
        DARABONBA_PTR_TO_JSON(CPUUsed, CPUUsed_);
        DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
        DARABONBA_PTR_TO_JSON(GPU, GPU_);
        DARABONBA_PTR_TO_JSON(GPUModel, GPUModel_);
        DARABONBA_PTR_TO_JSON(GPUUsed, GPUUsed_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(MemoryUsed, memoryUsed_);
        DARABONBA_PTR_TO_JSON(PodItems, podItems_);
        DARABONBA_PTR_TO_JSON(VNodeId, VNodeId_);
      };
      friend void from_json(const Darabonba::Json& j, NodeItems& obj) { 
        DARABONBA_PTR_FROM_JSON(CPU, CPU_);
        DARABONBA_PTR_FROM_JSON(CPUUsed, CPUUsed_);
        DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
        DARABONBA_PTR_FROM_JSON(GPU, GPU_);
        DARABONBA_PTR_FROM_JSON(GPUModel, GPUModel_);
        DARABONBA_PTR_FROM_JSON(GPUUsed, GPUUsed_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(MemoryUsed, memoryUsed_);
        DARABONBA_PTR_FROM_JSON(PodItems, podItems_);
        DARABONBA_PTR_FROM_JSON(VNodeId, VNodeId_);
      };
      NodeItems() = default ;
      NodeItems(const NodeItems &) = default ;
      NodeItems(NodeItems &&) = default ;
      NodeItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeItems() = default ;
      NodeItems& operator=(const NodeItems &) = default ;
      NodeItems& operator=(NodeItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PodItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PodItems& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NameSpace, nameSpace_);
          DARABONBA_PTR_TO_JSON(PodIP, podIP_);
          DARABONBA_PTR_TO_JSON(ResourceRequest, resourceRequest_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, PodItems& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NameSpace, nameSpace_);
          DARABONBA_PTR_FROM_JSON(PodIP, podIP_);
          DARABONBA_PTR_FROM_JSON(ResourceRequest, resourceRequest_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        PodItems() = default ;
        PodItems(const PodItems &) = default ;
        PodItems(PodItems &&) = default ;
        PodItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PodItems() = default ;
        PodItems& operator=(const PodItems &) = default ;
        PodItems& operator=(PodItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->name_ == nullptr && this->nameSpace_ == nullptr && this->podIP_ == nullptr && this->resourceRequest_ == nullptr && this->status_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline PodItems& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PodItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nameSpace Field Functions 
        bool hasNameSpace() const { return this->nameSpace_ != nullptr;};
        void deleteNameSpace() { this->nameSpace_ = nullptr;};
        inline string getNameSpace() const { DARABONBA_PTR_GET_DEFAULT(nameSpace_, "") };
        inline PodItems& setNameSpace(string nameSpace) { DARABONBA_PTR_SET_VALUE(nameSpace_, nameSpace) };


        // podIP Field Functions 
        bool hasPodIP() const { return this->podIP_ != nullptr;};
        void deletePodIP() { this->podIP_ = nullptr;};
        inline string getPodIP() const { DARABONBA_PTR_GET_DEFAULT(podIP_, "") };
        inline PodItems& setPodIP(string podIP) { DARABONBA_PTR_SET_VALUE(podIP_, podIP) };


        // resourceRequest Field Functions 
        bool hasResourceRequest() const { return this->resourceRequest_ != nullptr;};
        void deleteResourceRequest() { this->resourceRequest_ = nullptr;};
        inline string getResourceRequest() const { DARABONBA_PTR_GET_DEFAULT(resourceRequest_, "") };
        inline PodItems& setResourceRequest(string resourceRequest) { DARABONBA_PTR_SET_VALUE(resourceRequest_, resourceRequest) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PodItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The time when the pod was created, in ISO 8601 UTC format.
        shared_ptr<string> createTime_ {};
        // The name of the pod.
        shared_ptr<string> name_ {};
        // The namespace to which the pod belongs.
        shared_ptr<string> nameSpace_ {};
        // The IP address of the pod.
        shared_ptr<string> podIP_ {};
        // The resource configuration requested by the pod.
        shared_ptr<string> resourceRequest_ {};
        // The running status of the pod.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->CPU_ == nullptr
        && this->CPUUsed_ == nullptr && this->DBNodeId_ == nullptr && this->GPU_ == nullptr && this->GPUModel_ == nullptr && this->GPUUsed_ == nullptr
        && this->memory_ == nullptr && this->memoryUsed_ == nullptr && this->podItems_ == nullptr && this->VNodeId_ == nullptr; };
      // CPU Field Functions 
      bool hasCPU() const { return this->CPU_ != nullptr;};
      void deleteCPU() { this->CPU_ = nullptr;};
      inline string getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
      inline NodeItems& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


      // CPUUsed Field Functions 
      bool hasCPUUsed() const { return this->CPUUsed_ != nullptr;};
      void deleteCPUUsed() { this->CPUUsed_ = nullptr;};
      inline string getCPUUsed() const { DARABONBA_PTR_GET_DEFAULT(CPUUsed_, "") };
      inline NodeItems& setCPUUsed(string CPUUsed) { DARABONBA_PTR_SET_VALUE(CPUUsed_, CPUUsed) };


      // DBNodeId Field Functions 
      bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
      void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
      inline string getDBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
      inline NodeItems& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


      // GPU Field Functions 
      bool hasGPU() const { return this->GPU_ != nullptr;};
      void deleteGPU() { this->GPU_ = nullptr;};
      inline string getGPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, "") };
      inline NodeItems& setGPU(string GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


      // GPUModel Field Functions 
      bool hasGPUModel() const { return this->GPUModel_ != nullptr;};
      void deleteGPUModel() { this->GPUModel_ = nullptr;};
      inline string getGPUModel() const { DARABONBA_PTR_GET_DEFAULT(GPUModel_, "") };
      inline NodeItems& setGPUModel(string GPUModel) { DARABONBA_PTR_SET_VALUE(GPUModel_, GPUModel) };


      // GPUUsed Field Functions 
      bool hasGPUUsed() const { return this->GPUUsed_ != nullptr;};
      void deleteGPUUsed() { this->GPUUsed_ = nullptr;};
      inline string getGPUUsed() const { DARABONBA_PTR_GET_DEFAULT(GPUUsed_, "") };
      inline NodeItems& setGPUUsed(string GPUUsed) { DARABONBA_PTR_SET_VALUE(GPUUsed_, GPUUsed) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
      inline NodeItems& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // memoryUsed Field Functions 
      bool hasMemoryUsed() const { return this->memoryUsed_ != nullptr;};
      void deleteMemoryUsed() { this->memoryUsed_ = nullptr;};
      inline string getMemoryUsed() const { DARABONBA_PTR_GET_DEFAULT(memoryUsed_, "") };
      inline NodeItems& setMemoryUsed(string memoryUsed) { DARABONBA_PTR_SET_VALUE(memoryUsed_, memoryUsed) };


      // podItems Field Functions 
      bool hasPodItems() const { return this->podItems_ != nullptr;};
      void deletePodItems() { this->podItems_ = nullptr;};
      inline const vector<NodeItems::PodItems> & getPodItems() const { DARABONBA_PTR_GET_CONST(podItems_, vector<NodeItems::PodItems>) };
      inline vector<NodeItems::PodItems> getPodItems() { DARABONBA_PTR_GET(podItems_, vector<NodeItems::PodItems>) };
      inline NodeItems& setPodItems(const vector<NodeItems::PodItems> & podItems) { DARABONBA_PTR_SET_VALUE(podItems_, podItems) };
      inline NodeItems& setPodItems(vector<NodeItems::PodItems> && podItems) { DARABONBA_PTR_SET_RVALUE(podItems_, podItems) };


      // VNodeId Field Functions 
      bool hasVNodeId() const { return this->VNodeId_ != nullptr;};
      void deleteVNodeId() { this->VNodeId_ = nullptr;};
      inline string getVNodeId() const { DARABONBA_PTR_GET_DEFAULT(VNodeId_, "") };
      inline NodeItems& setVNodeId(string VNodeId) { DARABONBA_PTR_SET_VALUE(VNodeId_, VNodeId) };


    protected:
      // The total CPU resources of the node.
      shared_ptr<string> CPU_ {};
      // The amount of CPU resources used on the node.
      shared_ptr<string> CPUUsed_ {};
      // The ID of the database node.
      shared_ptr<string> DBNodeId_ {};
      // The total GPU resources of the node.
      shared_ptr<string> GPU_ {};
      // The GPU model of the node.
      shared_ptr<string> GPUModel_ {};
      // The amount of GPU resources used on the node.
      shared_ptr<string> GPUUsed_ {};
      // The total memory of the node.
      shared_ptr<string> memory_ {};
      // The amount of memory used on the node.
      shared_ptr<string> memoryUsed_ {};
      // The list of resource information for the pods on the node.
      shared_ptr<vector<NodeItems::PodItems>> podItems_ {};
      // The ID of the virtual node corresponding to the database node.
      shared_ptr<string> VNodeId_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->DBClusterId_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->nodeItems_ == nullptr && this->requestId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeAIDBClusterResourceUsageResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAIDBClusterResourceUsageResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeAIDBClusterResourceUsageResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeAIDBClusterResourceUsageResponseBody& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // nodeItems Field Functions 
    bool hasNodeItems() const { return this->nodeItems_ != nullptr;};
    void deleteNodeItems() { this->nodeItems_ = nullptr;};
    inline const vector<DescribeAIDBClusterResourceUsageResponseBody::NodeItems> & getNodeItems() const { DARABONBA_PTR_GET_CONST(nodeItems_, vector<DescribeAIDBClusterResourceUsageResponseBody::NodeItems>) };
    inline vector<DescribeAIDBClusterResourceUsageResponseBody::NodeItems> getNodeItems() { DARABONBA_PTR_GET(nodeItems_, vector<DescribeAIDBClusterResourceUsageResponseBody::NodeItems>) };
    inline DescribeAIDBClusterResourceUsageResponseBody& setNodeItems(const vector<DescribeAIDBClusterResourceUsageResponseBody::NodeItems> & nodeItems) { DARABONBA_PTR_SET_VALUE(nodeItems_, nodeItems) };
    inline DescribeAIDBClusterResourceUsageResponseBody& setNodeItems(vector<DescribeAIDBClusterResourceUsageResponseBody::NodeItems> && nodeItems) { DARABONBA_PTR_SET_RVALUE(nodeItems_, nodeItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAIDBClusterResourceUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time when the cluster was created, in ISO 8601 UTC format.
    shared_ptr<string> createTime_ {};
    // The ID of the AI database cluster.
    shared_ptr<string> DBClusterId_ {};
    // The database engine of the cluster.
    shared_ptr<string> engine_ {};
    // The database engine version of the cluster.
    shared_ptr<string> engineVersion_ {};
    // The list of resource usage details for the nodes in the cluster.
    shared_ptr<vector<DescribeAIDBClusterResourceUsageResponseBody::NodeItems>> nodeItems_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
