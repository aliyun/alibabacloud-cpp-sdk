// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRESOURCESTATICSRESPONSEBODYDATASUMMARY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRESOURCESTATICSRESPONSEBODYDATASUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class QueryResourceStaticsResponseBodyDataSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryResourceStaticsResponseBodyDataSummary& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveCpu, activeCpu_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Cu, cu_);
      DARABONBA_PTR_TO_JSON(EphemeralStorage, ephemeralStorage_);
      DARABONBA_PTR_TO_JSON(GpuA10, gpuA10_);
      DARABONBA_PTR_TO_JSON(GpuPpu810e, gpuPpu810e_);
      DARABONBA_PTR_TO_JSON(IdleCpu, idleCpu_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, QueryResourceStaticsResponseBodyDataSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveCpu, activeCpu_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Cu, cu_);
      DARABONBA_PTR_FROM_JSON(EphemeralStorage, ephemeralStorage_);
      DARABONBA_PTR_FROM_JSON(GpuA10, gpuA10_);
      DARABONBA_PTR_FROM_JSON(GpuPpu810e, gpuPpu810e_);
      DARABONBA_PTR_FROM_JSON(IdleCpu, idleCpu_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
    };
    QueryResourceStaticsResponseBodyDataSummary() = default ;
    QueryResourceStaticsResponseBodyDataSummary(const QueryResourceStaticsResponseBodyDataSummary &) = default ;
    QueryResourceStaticsResponseBodyDataSummary(QueryResourceStaticsResponseBodyDataSummary &&) = default ;
    QueryResourceStaticsResponseBodyDataSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryResourceStaticsResponseBodyDataSummary() = default ;
    QueryResourceStaticsResponseBodyDataSummary& operator=(const QueryResourceStaticsResponseBodyDataSummary &) = default ;
    QueryResourceStaticsResponseBodyDataSummary& operator=(QueryResourceStaticsResponseBodyDataSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeCpu_ == nullptr
        && return this->cpu_ == nullptr && return this->cu_ == nullptr && return this->ephemeralStorage_ == nullptr && return this->gpuA10_ == nullptr && return this->gpuPpu810e_ == nullptr
        && return this->idleCpu_ == nullptr && return this->memory_ == nullptr; };
    // activeCpu Field Functions 
    bool hasActiveCpu() const { return this->activeCpu_ != nullptr;};
    void deleteActiveCpu() { this->activeCpu_ = nullptr;};
    inline float activeCpu() const { DARABONBA_PTR_GET_DEFAULT(activeCpu_, 0.0) };
    inline QueryResourceStaticsResponseBodyDataSummary& setActiveCpu(float activeCpu) { DARABONBA_PTR_SET_VALUE(activeCpu_, activeCpu) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline QueryResourceStaticsResponseBodyDataSummary& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline float cu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0.0) };
    inline QueryResourceStaticsResponseBodyDataSummary& setCu(float cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // ephemeralStorage Field Functions 
    bool hasEphemeralStorage() const { return this->ephemeralStorage_ != nullptr;};
    void deleteEphemeralStorage() { this->ephemeralStorage_ = nullptr;};
    inline float ephemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(ephemeralStorage_, 0.0) };
    inline QueryResourceStaticsResponseBodyDataSummary& setEphemeralStorage(float ephemeralStorage) { DARABONBA_PTR_SET_VALUE(ephemeralStorage_, ephemeralStorage) };


    // gpuA10 Field Functions 
    bool hasGpuA10() const { return this->gpuA10_ != nullptr;};
    void deleteGpuA10() { this->gpuA10_ = nullptr;};
    inline float gpuA10() const { DARABONBA_PTR_GET_DEFAULT(gpuA10_, 0.0) };
    inline QueryResourceStaticsResponseBodyDataSummary& setGpuA10(float gpuA10) { DARABONBA_PTR_SET_VALUE(gpuA10_, gpuA10) };


    // gpuPpu810e Field Functions 
    bool hasGpuPpu810e() const { return this->gpuPpu810e_ != nullptr;};
    void deleteGpuPpu810e() { this->gpuPpu810e_ = nullptr;};
    inline float gpuPpu810e() const { DARABONBA_PTR_GET_DEFAULT(gpuPpu810e_, 0.0) };
    inline QueryResourceStaticsResponseBodyDataSummary& setGpuPpu810e(float gpuPpu810e) { DARABONBA_PTR_SET_VALUE(gpuPpu810e_, gpuPpu810e) };


    // idleCpu Field Functions 
    bool hasIdleCpu() const { return this->idleCpu_ != nullptr;};
    void deleteIdleCpu() { this->idleCpu_ = nullptr;};
    inline float idleCpu() const { DARABONBA_PTR_GET_DEFAULT(idleCpu_, 0.0) };
    inline QueryResourceStaticsResponseBodyDataSummary& setIdleCpu(float idleCpu) { DARABONBA_PTR_SET_VALUE(idleCpu_, idleCpu) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline QueryResourceStaticsResponseBodyDataSummary& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


  protected:
    // The usage of active vCPU. Unit: Core*min.
    std::shared_ptr<float> activeCpu_ = nullptr;
    // The CPU usage. Unit: core per minute.
    std::shared_ptr<float> cpu_ = nullptr;
    // The CU usage.
    std::shared_ptr<float> cu_ = nullptr;
    // The storage size of the temporary storage space. Unit: GiB.
    std::shared_ptr<float> ephemeralStorage_ = nullptr;
    std::shared_ptr<float> gpuA10_ = nullptr;
    std::shared_ptr<float> gpuPpu810e_ = nullptr;
    // The usage of idle CPU. Unit: Core*min.
    std::shared_ptr<float> idleCpu_ = nullptr;
    // The memory usage. Unit: GiB per minute.
    std::shared_ptr<float> memory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
