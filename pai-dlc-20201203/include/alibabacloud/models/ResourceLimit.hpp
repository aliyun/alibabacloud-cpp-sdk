// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCELIMIT_HPP_
#define ALIBABACLOUD_MODELS_RESOURCELIMIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ResourceLimit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceLimit& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(GPU, GPU_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceLimit& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(GPU, GPU_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
    };
    ResourceLimit() = default ;
    ResourceLimit(const ResourceLimit &) = default ;
    ResourceLimit(ResourceLimit &&) = default ;
    ResourceLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceLimit() = default ;
    ResourceLimit& operator=(const ResourceLimit &) = default ;
    ResourceLimit& operator=(ResourceLimit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPU_ == nullptr
        && this->GPU_ == nullptr && this->memory_ == nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline string getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
    inline ResourceLimit& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // GPU Field Functions 
    bool hasGPU() const { return this->GPU_ != nullptr;};
    void deleteGPU() { this->GPU_ = nullptr;};
    inline string getGPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, "") };
    inline ResourceLimit& setGPU(string GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline ResourceLimit& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


  protected:
    // The number of GPU cores.
    shared_ptr<string> CPU_ {};
    // The number of GPU cores.
    shared_ptr<string> GPU_ {};
    // The memory capacity limit, in Gi.
    shared_ptr<string> memory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
