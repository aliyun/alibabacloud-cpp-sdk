// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTAINERRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_CONTAINERRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ContainerResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContainerResources& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, ContainerResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
    };
    ContainerResources() = default ;
    ContainerResources(const ContainerResources &) = default ;
    ContainerResources(ContainerResources &&) = default ;
    ContainerResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContainerResources() = default ;
    ContainerResources& operator=(const ContainerResources &) = default ;
    ContainerResources& operator=(ContainerResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpu_ == nullptr
        && this->memory_ == nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline ContainerResources& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline ContainerResources& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


  protected:
    // The CPU specifications that are required for each instance. Unit: millicore. This parameter cannot be set to 0. Valid values:
    // 
    // *   **500**
    // *   **1000**
    // *   **2000**
    // *   **4000**
    // *   **8000**
    // *   **16000**
    // *   **32000**
    // 
    // This parameter is required.
    shared_ptr<int32_t> cpu_ {};
    // The memory size that is required for each instance. Unit: MB. This parameter cannot be set to 0. The values of this parameter correspond to the values of the CPU parameter:
    // 
    // *   This parameter is set to **1024** if the CPU parameter is set to 500 or 1000.
    // *   This parameter is set to **2048** if the CPU parameter is set to 500, 1000, or 2000.
    // *   This parameter is set to **4096** if the CPU parameter is set to 1000, 2000, or 4000.
    // *   This parameter is set to **8192** if the CPU parameter is set to 2000, 4000, or 8000.
    // *   This parameter is set to **12288** if the CPU parameter is set to 12000.
    // *   This parameter is set to **16384** if the CPU parameter is set to 4000, 8000, or 16000.
    // *   This parameter is set to **24576** if the CPU parameter is set to 12000.
    // *   This parameter is set to **32768** if the CPU parameter is set to 16000.
    // *   This parameter is set to **65536** if the CPU parameter is set to 8000, 16000, or 32000.
    // *   This parameter is set to **131072** if the CPU parameter is set to 32000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> memory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
