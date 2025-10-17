// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GPUDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GPUDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GPUDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GPUDetail& obj) { 
      DARABONBA_PTR_TO_JSON(GPU, GPU_);
      DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
      DARABONBA_PTR_TO_JSON(GPUTypeFullName, GPUTypeFullName_);
    };
    friend void from_json(const Darabonba::Json& j, GPUDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(GPU, GPU_);
      DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
      DARABONBA_PTR_FROM_JSON(GPUTypeFullName, GPUTypeFullName_);
    };
    GPUDetail() = default ;
    GPUDetail(const GPUDetail &) = default ;
    GPUDetail(GPUDetail &&) = default ;
    GPUDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GPUDetail() = default ;
    GPUDetail& operator=(const GPUDetail &) = default ;
    GPUDetail& operator=(GPUDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->GPU_ == nullptr
        && return this->GPUType_ == nullptr && return this->GPUTypeFullName_ == nullptr; };
    // GPU Field Functions 
    bool hasGPU() const { return this->GPU_ != nullptr;};
    void deleteGPU() { this->GPU_ = nullptr;};
    inline string GPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, "") };
    inline GPUDetail& setGPU(string GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string GPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline GPUDetail& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // GPUTypeFullName Field Functions 
    bool hasGPUTypeFullName() const { return this->GPUTypeFullName_ != nullptr;};
    void deleteGPUTypeFullName() { this->GPUTypeFullName_ = nullptr;};
    inline string GPUTypeFullName() const { DARABONBA_PTR_GET_DEFAULT(GPUTypeFullName_, "") };
    inline GPUDetail& setGPUTypeFullName(string GPUTypeFullName) { DARABONBA_PTR_SET_VALUE(GPUTypeFullName_, GPUTypeFullName) };


  protected:
    std::shared_ptr<string> GPU_ = nullptr;
    std::shared_ptr<string> GPUType_ = nullptr;
    std::shared_ptr<string> GPUTypeFullName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
