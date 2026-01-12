// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTADETAIL_HPP_
#define ALIBABACLOUD_MODELS_QUOTADETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GPUDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class QuotaDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(GPU, GPU_);
      DARABONBA_PTR_TO_JSON(GPUDetails, GPUDetails_);
      DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
      DARABONBA_PTR_TO_JSON(GPUTypeFullName, GPUTypeFullName_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(GPU, GPU_);
      DARABONBA_PTR_FROM_JSON(GPUDetails, GPUDetails_);
      DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
      DARABONBA_PTR_FROM_JSON(GPUTypeFullName, GPUTypeFullName_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
    };
    QuotaDetail() = default ;
    QuotaDetail(const QuotaDetail &) = default ;
    QuotaDetail(QuotaDetail &&) = default ;
    QuotaDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotaDetail() = default ;
    QuotaDetail& operator=(const QuotaDetail &) = default ;
    QuotaDetail& operator=(QuotaDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPU_ == nullptr
        && this->GPU_ == nullptr && this->GPUDetails_ == nullptr && this->GPUType_ == nullptr && this->GPUTypeFullName_ == nullptr && this->memory_ == nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline string getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
    inline QuotaDetail& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // GPU Field Functions 
    bool hasGPU() const { return this->GPU_ != nullptr;};
    void deleteGPU() { this->GPU_ = nullptr;};
    inline string getGPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, "") };
    inline QuotaDetail& setGPU(string GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


    // GPUDetails Field Functions 
    bool hasGPUDetails() const { return this->GPUDetails_ != nullptr;};
    void deleteGPUDetails() { this->GPUDetails_ = nullptr;};
    inline const vector<GPUDetail> & getGPUDetails() const { DARABONBA_PTR_GET_CONST(GPUDetails_, vector<GPUDetail>) };
    inline vector<GPUDetail> getGPUDetails() { DARABONBA_PTR_GET(GPUDetails_, vector<GPUDetail>) };
    inline QuotaDetail& setGPUDetails(const vector<GPUDetail> & GPUDetails) { DARABONBA_PTR_SET_VALUE(GPUDetails_, GPUDetails) };
    inline QuotaDetail& setGPUDetails(vector<GPUDetail> && GPUDetails) { DARABONBA_PTR_SET_RVALUE(GPUDetails_, GPUDetails) };


    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string getGPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline QuotaDetail& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // GPUTypeFullName Field Functions 
    bool hasGPUTypeFullName() const { return this->GPUTypeFullName_ != nullptr;};
    void deleteGPUTypeFullName() { this->GPUTypeFullName_ = nullptr;};
    inline string getGPUTypeFullName() const { DARABONBA_PTR_GET_DEFAULT(GPUTypeFullName_, "") };
    inline QuotaDetail& setGPUTypeFullName(string GPUTypeFullName) { DARABONBA_PTR_SET_VALUE(GPUTypeFullName_, GPUTypeFullName) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline QuotaDetail& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


  protected:
    shared_ptr<string> CPU_ {};
    shared_ptr<string> GPU_ {};
    shared_ptr<vector<GPUDetail>> GPUDetails_ {};
    shared_ptr<string> GPUType_ {};
    shared_ptr<string> GPUTypeFullName_ {};
    shared_ptr<string> memory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
