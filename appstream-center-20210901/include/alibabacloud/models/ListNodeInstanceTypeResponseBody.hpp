// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEINSTANCETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEINSTANCETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListNodeInstanceTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeInstanceTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NodeInstanceTypeModels, nodeInstanceTypeModels_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeInstanceTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeInstanceTypeModels, nodeInstanceTypeModels_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNodeInstanceTypeResponseBody() = default ;
    ListNodeInstanceTypeResponseBody(const ListNodeInstanceTypeResponseBody &) = default ;
    ListNodeInstanceTypeResponseBody(ListNodeInstanceTypeResponseBody &&) = default ;
    ListNodeInstanceTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeInstanceTypeResponseBody() = default ;
    ListNodeInstanceTypeResponseBody& operator=(const ListNodeInstanceTypeResponseBody &) = default ;
    ListNodeInstanceTypeResponseBody& operator=(ListNodeInstanceTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeInstanceTypeModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeInstanceTypeModels& obj) { 
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(Gpu, gpu_);
        DARABONBA_PTR_TO_JSON(GpuMemory, gpuMemory_);
        DARABONBA_PTR_TO_JSON(MaxCapacity, maxCapacity_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(NodeInstanceType, nodeInstanceType_);
        DARABONBA_PTR_TO_JSON(NodeInstanceTypeFamily, nodeInstanceTypeFamily_);
        DARABONBA_PTR_TO_JSON(NodeTypeName, nodeTypeName_);
      };
      friend void from_json(const Darabonba::Json& j, NodeInstanceTypeModels& obj) { 
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
        DARABONBA_PTR_FROM_JSON(GpuMemory, gpuMemory_);
        DARABONBA_PTR_FROM_JSON(MaxCapacity, maxCapacity_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(NodeInstanceType, nodeInstanceType_);
        DARABONBA_PTR_FROM_JSON(NodeInstanceTypeFamily, nodeInstanceTypeFamily_);
        DARABONBA_PTR_FROM_JSON(NodeTypeName, nodeTypeName_);
      };
      NodeInstanceTypeModels() = default ;
      NodeInstanceTypeModels(const NodeInstanceTypeModels &) = default ;
      NodeInstanceTypeModels(NodeInstanceTypeModels &&) = default ;
      NodeInstanceTypeModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeInstanceTypeModels() = default ;
      NodeInstanceTypeModels& operator=(const NodeInstanceTypeModels &) = default ;
      NodeInstanceTypeModels& operator=(NodeInstanceTypeModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cpu_ == nullptr
        && this->gpu_ == nullptr && this->gpuMemory_ == nullptr && this->maxCapacity_ == nullptr && this->memory_ == nullptr && this->nodeInstanceType_ == nullptr
        && this->nodeInstanceTypeFamily_ == nullptr && this->nodeTypeName_ == nullptr; };
      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
      inline NodeInstanceTypeModels& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // gpu Field Functions 
      bool hasGpu() const { return this->gpu_ != nullptr;};
      void deleteGpu() { this->gpu_ = nullptr;};
      inline string getGpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, "") };
      inline NodeInstanceTypeModels& setGpu(string gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


      // gpuMemory Field Functions 
      bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
      void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
      inline int64_t getGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0L) };
      inline NodeInstanceTypeModels& setGpuMemory(int64_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


      // maxCapacity Field Functions 
      bool hasMaxCapacity() const { return this->maxCapacity_ != nullptr;};
      void deleteMaxCapacity() { this->maxCapacity_ = nullptr;};
      inline int32_t getMaxCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxCapacity_, 0) };
      inline NodeInstanceTypeModels& setMaxCapacity(int32_t maxCapacity) { DARABONBA_PTR_SET_VALUE(maxCapacity_, maxCapacity) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
      inline NodeInstanceTypeModels& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // nodeInstanceType Field Functions 
      bool hasNodeInstanceType() const { return this->nodeInstanceType_ != nullptr;};
      void deleteNodeInstanceType() { this->nodeInstanceType_ = nullptr;};
      inline string getNodeInstanceType() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceType_, "") };
      inline NodeInstanceTypeModels& setNodeInstanceType(string nodeInstanceType) { DARABONBA_PTR_SET_VALUE(nodeInstanceType_, nodeInstanceType) };


      // nodeInstanceTypeFamily Field Functions 
      bool hasNodeInstanceTypeFamily() const { return this->nodeInstanceTypeFamily_ != nullptr;};
      void deleteNodeInstanceTypeFamily() { this->nodeInstanceTypeFamily_ = nullptr;};
      inline string getNodeInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceTypeFamily_, "") };
      inline NodeInstanceTypeModels& setNodeInstanceTypeFamily(string nodeInstanceTypeFamily) { DARABONBA_PTR_SET_VALUE(nodeInstanceTypeFamily_, nodeInstanceTypeFamily) };


      // nodeTypeName Field Functions 
      bool hasNodeTypeName() const { return this->nodeTypeName_ != nullptr;};
      void deleteNodeTypeName() { this->nodeTypeName_ = nullptr;};
      inline string getNodeTypeName() const { DARABONBA_PTR_GET_DEFAULT(nodeTypeName_, "") };
      inline NodeInstanceTypeModels& setNodeTypeName(string nodeTypeName) { DARABONBA_PTR_SET_VALUE(nodeTypeName_, nodeTypeName) };


    protected:
      // The number of vCPUs.
      shared_ptr<string> cpu_ {};
      // The number of GPUs.
      shared_ptr<string> gpu_ {};
      // The GPU size. Unit: MB.
      shared_ptr<int64_t> gpuMemory_ {};
      // The maximum number of sessions to which a resource can connect at the same time. If a resource connects to a large number of sessions at the same time, user experience can be compromised. The value range varies based on the resource type. The following items describe the value ranges of different resource types:
      // 
      // *   appstreaming.general.4c8g: 1 to 2
      // *   appstreaming.general.8c16g: 1 to 4
      // *   appstreaming.vgpu.8c16g.4g: 1 to 4
      // *   appstreaming.vgpu.8c31g.16g: 1 to 4
      // *   appstreaming.vgpu.14c93g.12g: 1 to 6
      shared_ptr<int32_t> maxCapacity_ {};
      // The memory size. Unit: MB.
      shared_ptr<int64_t> memory_ {};
      // The ID of the resource type.
      shared_ptr<string> nodeInstanceType_ {};
      // The resource type family.
      // 
      // Valid values:
      // 
      // *   appstreaming.general: WUYING - General
      // *   appstreaming.vgpu: WUYING - Graphics
      shared_ptr<string> nodeInstanceTypeFamily_ {};
      // The name of the resource type.
      shared_ptr<string> nodeTypeName_ {};
    };

    virtual bool empty() const override { return this->nodeInstanceTypeModels_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // nodeInstanceTypeModels Field Functions 
    bool hasNodeInstanceTypeModels() const { return this->nodeInstanceTypeModels_ != nullptr;};
    void deleteNodeInstanceTypeModels() { this->nodeInstanceTypeModels_ = nullptr;};
    inline const vector<ListNodeInstanceTypeResponseBody::NodeInstanceTypeModels> & getNodeInstanceTypeModels() const { DARABONBA_PTR_GET_CONST(nodeInstanceTypeModels_, vector<ListNodeInstanceTypeResponseBody::NodeInstanceTypeModels>) };
    inline vector<ListNodeInstanceTypeResponseBody::NodeInstanceTypeModels> getNodeInstanceTypeModels() { DARABONBA_PTR_GET(nodeInstanceTypeModels_, vector<ListNodeInstanceTypeResponseBody::NodeInstanceTypeModels>) };
    inline ListNodeInstanceTypeResponseBody& setNodeInstanceTypeModels(const vector<ListNodeInstanceTypeResponseBody::NodeInstanceTypeModels> & nodeInstanceTypeModels) { DARABONBA_PTR_SET_VALUE(nodeInstanceTypeModels_, nodeInstanceTypeModels) };
    inline ListNodeInstanceTypeResponseBody& setNodeInstanceTypeModels(vector<ListNodeInstanceTypeResponseBody::NodeInstanceTypeModels> && nodeInstanceTypeModels) { DARABONBA_PTR_SET_RVALUE(nodeInstanceTypeModels_, nodeInstanceTypeModels) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNodeInstanceTypeResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNodeInstanceTypeResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodeInstanceTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNodeInstanceTypeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The resource types.
    shared_ptr<vector<ListNodeInstanceTypeResponseBody::NodeInstanceTypeModels>> nodeInstanceTypeModels_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
