// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCE_HPP_
#define ALIBABACLOUD_MODELS_RESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Resource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Resource& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(ECSInstance, ECSInstance_);
      DARABONBA_PTR_TO_JSON(GPUModel, GPUModel_);
      DARABONBA_PTR_TO_JSON(GPUNum, GPUNum_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RAM, RAM_);
    };
    friend void from_json(const Darabonba::Json& j, Resource& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(ECSInstance, ECSInstance_);
      DARABONBA_PTR_FROM_JSON(GPUModel, GPUModel_);
      DARABONBA_PTR_FROM_JSON(GPUNum, GPUNum_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RAM, RAM_);
    };
    Resource() = default ;
    Resource(const Resource &) = default ;
    Resource(Resource &&) = default ;
    Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Resource() = default ;
    Resource& operator=(const Resource &) = default ;
    Resource& operator=(Resource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPU_ == nullptr
        && return this->ECSInstance_ == nullptr && return this->GPUModel_ == nullptr && return this->GPUNum_ == nullptr && return this->name_ == nullptr && return this->RAM_ == nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline int64_t CPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, 0L) };
    inline Resource& setCPU(int64_t CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // ECSInstance Field Functions 
    bool hasECSInstance() const { return this->ECSInstance_ != nullptr;};
    void deleteECSInstance() { this->ECSInstance_ = nullptr;};
    inline string ECSInstance() const { DARABONBA_PTR_GET_DEFAULT(ECSInstance_, "") };
    inline Resource& setECSInstance(string ECSInstance) { DARABONBA_PTR_SET_VALUE(ECSInstance_, ECSInstance) };


    // GPUModel Field Functions 
    bool hasGPUModel() const { return this->GPUModel_ != nullptr;};
    void deleteGPUModel() { this->GPUModel_ = nullptr;};
    inline string GPUModel() const { DARABONBA_PTR_GET_DEFAULT(GPUModel_, "") };
    inline Resource& setGPUModel(string GPUModel) { DARABONBA_PTR_SET_VALUE(GPUModel_, GPUModel) };


    // GPUNum Field Functions 
    bool hasGPUNum() const { return this->GPUNum_ != nullptr;};
    void deleteGPUNum() { this->GPUNum_ = nullptr;};
    inline int64_t GPUNum() const { DARABONBA_PTR_GET_DEFAULT(GPUNum_, 0L) };
    inline Resource& setGPUNum(int64_t GPUNum) { DARABONBA_PTR_SET_VALUE(GPUNum_, GPUNum) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Resource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // RAM Field Functions 
    bool hasRAM() const { return this->RAM_ != nullptr;};
    void deleteRAM() { this->RAM_ = nullptr;};
    inline int64_t RAM() const { DARABONBA_PTR_GET_DEFAULT(RAM_, 0L) };
    inline Resource& setRAM(int64_t RAM) { DARABONBA_PTR_SET_VALUE(RAM_, RAM) };


  protected:
    std::shared_ptr<int64_t> CPU_ = nullptr;
    std::shared_ptr<string> ECSInstance_ = nullptr;
    std::shared_ptr<string> GPUModel_ = nullptr;
    std::shared_ptr<int64_t> GPUNum_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> RAM_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
