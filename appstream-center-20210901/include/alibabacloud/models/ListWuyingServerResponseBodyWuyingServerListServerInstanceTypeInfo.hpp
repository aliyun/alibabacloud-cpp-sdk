// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWUYINGSERVERRESPONSEBODYWUYINGSERVERLISTSERVERINSTANCETYPEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTWUYINGSERVERRESPONSEBODYWUYINGSERVERLISTSERVERINSTANCETYPEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Gpu, gpu_);
      DARABONBA_PTR_TO_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(ServerInstanceType, serverInstanceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(ServerInstanceType, serverInstanceType_);
    };
    ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo() = default ;
    ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo(const ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo &) = default ;
    ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo(ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo &&) = default ;
    ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo() = default ;
    ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo& operator=(const ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo &) = default ;
    ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo& operator=(ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpu_ == nullptr
        && return this->gpu_ == nullptr && return this->gpuMemory_ == nullptr && return this->memory_ == nullptr && return this->serverInstanceType_ == nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline string gpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, "") };
    inline ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo& setGpu(string gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // gpuMemory Field Functions 
    bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
    void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
    inline int32_t gpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0) };
    inline ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo& setGpuMemory(int32_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // serverInstanceType Field Functions 
    bool hasServerInstanceType() const { return this->serverInstanceType_ != nullptr;};
    void deleteServerInstanceType() { this->serverInstanceType_ = nullptr;};
    inline string serverInstanceType() const { DARABONBA_PTR_GET_DEFAULT(serverInstanceType_, "") };
    inline ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo& setServerInstanceType(string serverInstanceType) { DARABONBA_PTR_SET_VALUE(serverInstanceType_, serverInstanceType) };


  protected:
    // The number of vCPUs.
    std::shared_ptr<string> cpu_ = nullptr;
    // The number of GPUs.
    std::shared_ptr<string> gpu_ = nullptr;
    // The memory size. Unit: MB.
    std::shared_ptr<int32_t> gpuMemory_ = nullptr;
    // The memory size. Unit: MB.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // Workstation specifications.
    std::shared_ptr<string> serverInstanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
