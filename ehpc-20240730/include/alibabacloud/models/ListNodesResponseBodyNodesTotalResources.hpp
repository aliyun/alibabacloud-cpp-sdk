// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYNODESTOTALRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYNODESTOTALRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListNodesResponseBodyNodesTotalResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBodyNodesTotalResources& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Gpu, gpu_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBodyNodesTotalResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
    };
    ListNodesResponseBodyNodesTotalResources() = default ;
    ListNodesResponseBodyNodesTotalResources(const ListNodesResponseBodyNodesTotalResources &) = default ;
    ListNodesResponseBodyNodesTotalResources(ListNodesResponseBodyNodesTotalResources &&) = default ;
    ListNodesResponseBodyNodesTotalResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBodyNodesTotalResources() = default ;
    ListNodesResponseBodyNodesTotalResources& operator=(const ListNodesResponseBodyNodesTotalResources &) = default ;
    ListNodesResponseBodyNodesTotalResources& operator=(ListNodesResponseBodyNodesTotalResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpu_ == nullptr
        && return this->gpu_ == nullptr && return this->memory_ == nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline ListNodesResponseBodyNodesTotalResources& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline int32_t gpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0) };
    inline ListNodesResponseBodyNodesTotalResources& setGpu(int32_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline ListNodesResponseBodyNodesTotalResources& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


  protected:
    // The number of vCPUs.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The number of GPUs.
    std::shared_ptr<int32_t> gpu_ = nullptr;
    // The amount of memory. Unit: GiB.
    std::shared_ptr<int32_t> memory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
