// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAININGJOBRESPONSEBODYCOMPUTERESOURCEINSTANCESPEC_HPP_
#define ALIBABACLOUD_MODELS_GETTRAININGJOBRESPONSEBODYCOMPUTERESOURCEINSTANCESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetTrainingJobResponseBodyComputeResourceInstanceSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrainingJobResponseBodyComputeResourceInstanceSpec& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(GPU, GPU_);
      DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(SharedMemory, sharedMemory_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrainingJobResponseBodyComputeResourceInstanceSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(GPU, GPU_);
      DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(SharedMemory, sharedMemory_);
    };
    GetTrainingJobResponseBodyComputeResourceInstanceSpec() = default ;
    GetTrainingJobResponseBodyComputeResourceInstanceSpec(const GetTrainingJobResponseBodyComputeResourceInstanceSpec &) = default ;
    GetTrainingJobResponseBodyComputeResourceInstanceSpec(GetTrainingJobResponseBodyComputeResourceInstanceSpec &&) = default ;
    GetTrainingJobResponseBodyComputeResourceInstanceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrainingJobResponseBodyComputeResourceInstanceSpec() = default ;
    GetTrainingJobResponseBodyComputeResourceInstanceSpec& operator=(const GetTrainingJobResponseBodyComputeResourceInstanceSpec &) = default ;
    GetTrainingJobResponseBodyComputeResourceInstanceSpec& operator=(GetTrainingJobResponseBodyComputeResourceInstanceSpec &&) = default ;
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
    inline GetTrainingJobResponseBodyComputeResourceInstanceSpec& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // GPU Field Functions 
    bool hasGPU() const { return this->GPU_ != nullptr;};
    void deleteGPU() { this->GPU_ = nullptr;};
    inline string GPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, "") };
    inline GetTrainingJobResponseBodyComputeResourceInstanceSpec& setGPU(string GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string GPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline GetTrainingJobResponseBodyComputeResourceInstanceSpec& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline GetTrainingJobResponseBodyComputeResourceInstanceSpec& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // sharedMemory Field Functions 
    bool hasSharedMemory() const { return this->sharedMemory_ != nullptr;};
    void deleteSharedMemory() { this->sharedMemory_ = nullptr;};
    inline string sharedMemory() const { DARABONBA_PTR_GET_DEFAULT(sharedMemory_, "") };
    inline GetTrainingJobResponseBodyComputeResourceInstanceSpec& setSharedMemory(string sharedMemory) { DARABONBA_PTR_SET_VALUE(sharedMemory_, sharedMemory) };


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
