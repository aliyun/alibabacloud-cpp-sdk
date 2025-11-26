// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONKUBECLUSTERRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_ONKUBECLUSTERRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class OnKubeClusterResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnKubeClusterResource& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, OnKubeClusterResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
    };
    OnKubeClusterResource() = default ;
    OnKubeClusterResource(const OnKubeClusterResource &) = default ;
    OnKubeClusterResource(OnKubeClusterResource &&) = default ;
    OnKubeClusterResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnKubeClusterResource() = default ;
    OnKubeClusterResource& operator=(const OnKubeClusterResource &) = default ;
    OnKubeClusterResource& operator=(OnKubeClusterResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpu_ == nullptr
        && return this->memory_ == nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline OnKubeClusterResource& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline OnKubeClusterResource& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


  protected:
    std::shared_ptr<string> cpu_ = nullptr;
    std::shared_ptr<string> memory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
