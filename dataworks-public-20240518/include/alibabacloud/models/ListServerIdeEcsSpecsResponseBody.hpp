// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERIDEECSSPECSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERIDEECSSPECSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListServerIdeEcsSpecsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerIdeEcsSpecsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EcsSpecs, ecsSpecs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServerIdeEcsSpecsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsSpecs, ecsSpecs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListServerIdeEcsSpecsResponseBody() = default ;
    ListServerIdeEcsSpecsResponseBody(const ListServerIdeEcsSpecsResponseBody &) = default ;
    ListServerIdeEcsSpecsResponseBody(ListServerIdeEcsSpecsResponseBody &&) = default ;
    ListServerIdeEcsSpecsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServerIdeEcsSpecsResponseBody() = default ;
    ListServerIdeEcsSpecsResponseBody& operator=(const ListServerIdeEcsSpecsResponseBody &) = default ;
    ListServerIdeEcsSpecsResponseBody& operator=(ListServerIdeEcsSpecsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EcsSpecs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EcsSpecs& obj) { 
        DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(Cu, cu_);
        DARABONBA_PTR_TO_JSON(Gpu, gpu_);
        DARABONBA_PTR_TO_JSON(GpuMemorySize, gpuMemorySize_);
        DARABONBA_PTR_TO_JSON(GpuType, gpuType_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(IsAvailable, isAvailable_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
      };
      friend void from_json(const Darabonba::Json& j, EcsSpecs& obj) { 
        DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(Cu, cu_);
        DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
        DARABONBA_PTR_FROM_JSON(GpuMemorySize, gpuMemorySize_);
        DARABONBA_PTR_FROM_JSON(GpuType, gpuType_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(IsAvailable, isAvailable_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
      };
      EcsSpecs() = default ;
      EcsSpecs(const EcsSpecs &) = default ;
      EcsSpecs(EcsSpecs &&) = default ;
      EcsSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EcsSpecs() = default ;
      EcsSpecs& operator=(const EcsSpecs &) = default ;
      EcsSpecs& operator=(EcsSpecs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->acceleratorType_ == nullptr
        && this->cpu_ == nullptr && this->cu_ == nullptr && this->gpu_ == nullptr && this->gpuMemorySize_ == nullptr && this->gpuType_ == nullptr
        && this->instanceType_ == nullptr && this->isAvailable_ == nullptr && this->memory_ == nullptr; };
      // acceleratorType Field Functions 
      bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
      void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
      inline string getAcceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
      inline EcsSpecs& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int64_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
      inline EcsSpecs& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline float getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0.0) };
      inline EcsSpecs& setCu(float cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


      // gpu Field Functions 
      bool hasGpu() const { return this->gpu_ != nullptr;};
      void deleteGpu() { this->gpu_ = nullptr;};
      inline int64_t getGpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0L) };
      inline EcsSpecs& setGpu(int64_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


      // gpuMemorySize Field Functions 
      bool hasGpuMemorySize() const { return this->gpuMemorySize_ != nullptr;};
      void deleteGpuMemorySize() { this->gpuMemorySize_ = nullptr;};
      inline float getGpuMemorySize() const { DARABONBA_PTR_GET_DEFAULT(gpuMemorySize_, 0.0) };
      inline EcsSpecs& setGpuMemorySize(float gpuMemorySize) { DARABONBA_PTR_SET_VALUE(gpuMemorySize_, gpuMemorySize) };


      // gpuType Field Functions 
      bool hasGpuType() const { return this->gpuType_ != nullptr;};
      void deleteGpuType() { this->gpuType_ = nullptr;};
      inline string getGpuType() const { DARABONBA_PTR_GET_DEFAULT(gpuType_, "") };
      inline EcsSpecs& setGpuType(string gpuType) { DARABONBA_PTR_SET_VALUE(gpuType_, gpuType) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline EcsSpecs& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // isAvailable Field Functions 
      bool hasIsAvailable() const { return this->isAvailable_ != nullptr;};
      void deleteIsAvailable() { this->isAvailable_ = nullptr;};
      inline bool getIsAvailable() const { DARABONBA_PTR_GET_DEFAULT(isAvailable_, false) };
      inline EcsSpecs& setIsAvailable(bool isAvailable) { DARABONBA_PTR_SET_VALUE(isAvailable_, isAvailable) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
      inline EcsSpecs& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    protected:
      // The accelerator type. Valid values:
      // - CPU: uses only CPU.
      // - GPU: uses GPU acceleration.
      shared_ptr<string> acceleratorType_ {};
      // The number of CPU cores.
      shared_ptr<int64_t> cpu_ {};
      // The number of compute units (CUs) consumed by this instance type.
      shared_ptr<float> cu_ {};
      // The number of GPU cards.
      shared_ptr<int64_t> gpu_ {};
      // The GPU memory size.
      shared_ptr<float> gpuMemorySize_ {};
      // The GPU model.
      shared_ptr<string> gpuType_ {};
      // The ECS instance type.
      shared_ptr<string> instanceType_ {};
      // Indicates whether the instance type is available.
      shared_ptr<bool> isAvailable_ {};
      // The memory size, in GB.
      shared_ptr<float> memory_ {};
    };

    virtual bool empty() const override { return this->ecsSpecs_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // ecsSpecs Field Functions 
    bool hasEcsSpecs() const { return this->ecsSpecs_ != nullptr;};
    void deleteEcsSpecs() { this->ecsSpecs_ = nullptr;};
    inline const vector<ListServerIdeEcsSpecsResponseBody::EcsSpecs> & getEcsSpecs() const { DARABONBA_PTR_GET_CONST(ecsSpecs_, vector<ListServerIdeEcsSpecsResponseBody::EcsSpecs>) };
    inline vector<ListServerIdeEcsSpecsResponseBody::EcsSpecs> getEcsSpecs() { DARABONBA_PTR_GET(ecsSpecs_, vector<ListServerIdeEcsSpecsResponseBody::EcsSpecs>) };
    inline ListServerIdeEcsSpecsResponseBody& setEcsSpecs(const vector<ListServerIdeEcsSpecsResponseBody::EcsSpecs> & ecsSpecs) { DARABONBA_PTR_SET_VALUE(ecsSpecs_, ecsSpecs) };
    inline ListServerIdeEcsSpecsResponseBody& setEcsSpecs(vector<ListServerIdeEcsSpecsResponseBody::EcsSpecs> && ecsSpecs) { DARABONBA_PTR_SET_RVALUE(ecsSpecs_, ecsSpecs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServerIdeEcsSpecsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServerIdeEcsSpecsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServerIdeEcsSpecsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of available ECS instance types for personal development environments.
    shared_ptr<vector<ListServerIdeEcsSpecsResponseBody::EcsSpecs>> ecsSpecs_ {};
    // The maximum number of records returned in this response.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page. An empty value indicates that no more results are available.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
