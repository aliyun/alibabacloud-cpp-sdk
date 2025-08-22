// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCES_HPP_
#define ALIBABACLOUD_MODELS_RESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class Resources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Resources& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(GPU, GPU_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, Resources& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(GPU, GPU_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
    };
    Resources() = default ;
    Resources(const Resources &) = default ;
    Resources(Resources &&) = default ;
    Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Resources() = default ;
    Resources& operator=(const Resources &) = default ;
    Resources& operator=(Resources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->CPU_ != nullptr
        && this->GPU_ != nullptr && this->memory_ != nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline string CPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
    inline Resources& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // GPU Field Functions 
    bool hasGPU() const { return this->GPU_ != nullptr;};
    void deleteGPU() { this->GPU_ = nullptr;};
    inline string GPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, "") };
    inline Resources& setGPU(string GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline Resources& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


  protected:
    std::shared_ptr<string> CPU_ = nullptr;
    std::shared_ptr<string> GPU_ = nullptr;
    std::shared_ptr<string> memory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
