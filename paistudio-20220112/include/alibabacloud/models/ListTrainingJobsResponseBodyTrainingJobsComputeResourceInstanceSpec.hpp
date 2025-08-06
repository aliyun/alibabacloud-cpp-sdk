// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBSRESPONSEBODYTRAININGJOBSCOMPUTERESOURCEINSTANCESPEC_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBSRESPONSEBODYTRAININGJOBSCOMPUTERESOURCEINSTANCESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(GPU, GPU_);
      DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(SharedMemory, sharedMemory_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(GPU, GPU_);
      DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(SharedMemory, sharedMemory_);
    };
    ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec() = default ;
    ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec(const ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec &) = default ;
    ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec(ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec &&) = default ;
    ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec() = default ;
    ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec& operator=(const ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec &) = default ;
    ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec& operator=(ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->CPU_ != nullptr
        && this->GPU_ != nullptr && this->GPUType_ != nullptr && this->memory_ != nullptr && this->sharedMemory_ != nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline string CPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // GPU Field Functions 
    bool hasGPU() const { return this->GPU_ != nullptr;};
    void deleteGPU() { this->GPU_ = nullptr;};
    inline string GPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec& setGPU(string GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string GPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // sharedMemory Field Functions 
    bool hasSharedMemory() const { return this->sharedMemory_ != nullptr;};
    void deleteSharedMemory() { this->sharedMemory_ = nullptr;};
    inline string sharedMemory() const { DARABONBA_PTR_GET_DEFAULT(sharedMemory_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec& setSharedMemory(string sharedMemory) { DARABONBA_PTR_SET_VALUE(sharedMemory_, sharedMemory) };


  protected:
    std::shared_ptr<string> CPU_ = nullptr;
    std::shared_ptr<string> GPU_ = nullptr;
    std::shared_ptr<string> GPUType_ = nullptr;
    std::shared_ptr<string> memory_ = nullptr;
    std::shared_ptr<string> sharedMemory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
