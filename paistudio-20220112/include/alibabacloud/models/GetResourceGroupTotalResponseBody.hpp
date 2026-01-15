// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPTOTALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPTOTALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GPUInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetResourceGroupTotalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupTotalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(totalCPU, totalCPU_);
      DARABONBA_PTR_TO_JSON(totalGPU, totalGPU_);
      DARABONBA_PTR_TO_JSON(totalGPUInfos, totalGPUInfos_);
      DARABONBA_PTR_TO_JSON(totalMemory, totalMemory_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupTotalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(totalCPU, totalCPU_);
      DARABONBA_PTR_FROM_JSON(totalGPU, totalGPU_);
      DARABONBA_PTR_FROM_JSON(totalGPUInfos, totalGPUInfos_);
      DARABONBA_PTR_FROM_JSON(totalMemory, totalMemory_);
    };
    GetResourceGroupTotalResponseBody() = default ;
    GetResourceGroupTotalResponseBody(const GetResourceGroupTotalResponseBody &) = default ;
    GetResourceGroupTotalResponseBody(GetResourceGroupTotalResponseBody &&) = default ;
    GetResourceGroupTotalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupTotalResponseBody() = default ;
    GetResourceGroupTotalResponseBody& operator=(const GetResourceGroupTotalResponseBody &) = default ;
    GetResourceGroupTotalResponseBody& operator=(GetResourceGroupTotalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->totalCPU_ == nullptr
        && this->totalGPU_ == nullptr && this->totalGPUInfos_ == nullptr && this->totalMemory_ == nullptr; };
    // totalCPU Field Functions 
    bool hasTotalCPU() const { return this->totalCPU_ != nullptr;};
    void deleteTotalCPU() { this->totalCPU_ = nullptr;};
    inline int32_t getTotalCPU() const { DARABONBA_PTR_GET_DEFAULT(totalCPU_, 0) };
    inline GetResourceGroupTotalResponseBody& setTotalCPU(int32_t totalCPU) { DARABONBA_PTR_SET_VALUE(totalCPU_, totalCPU) };


    // totalGPU Field Functions 
    bool hasTotalGPU() const { return this->totalGPU_ != nullptr;};
    void deleteTotalGPU() { this->totalGPU_ = nullptr;};
    inline int32_t getTotalGPU() const { DARABONBA_PTR_GET_DEFAULT(totalGPU_, 0) };
    inline GetResourceGroupTotalResponseBody& setTotalGPU(int32_t totalGPU) { DARABONBA_PTR_SET_VALUE(totalGPU_, totalGPU) };


    // totalGPUInfos Field Functions 
    bool hasTotalGPUInfos() const { return this->totalGPUInfos_ != nullptr;};
    void deleteTotalGPUInfos() { this->totalGPUInfos_ = nullptr;};
    inline const vector<GPUInfo> & getTotalGPUInfos() const { DARABONBA_PTR_GET_CONST(totalGPUInfos_, vector<GPUInfo>) };
    inline vector<GPUInfo> getTotalGPUInfos() { DARABONBA_PTR_GET(totalGPUInfos_, vector<GPUInfo>) };
    inline GetResourceGroupTotalResponseBody& setTotalGPUInfos(const vector<GPUInfo> & totalGPUInfos) { DARABONBA_PTR_SET_VALUE(totalGPUInfos_, totalGPUInfos) };
    inline GetResourceGroupTotalResponseBody& setTotalGPUInfos(vector<GPUInfo> && totalGPUInfos) { DARABONBA_PTR_SET_RVALUE(totalGPUInfos_, totalGPUInfos) };


    // totalMemory Field Functions 
    bool hasTotalMemory() const { return this->totalMemory_ != nullptr;};
    void deleteTotalMemory() { this->totalMemory_ = nullptr;};
    inline int32_t getTotalMemory() const { DARABONBA_PTR_GET_DEFAULT(totalMemory_, 0) };
    inline GetResourceGroupTotalResponseBody& setTotalMemory(int32_t totalMemory) { DARABONBA_PTR_SET_VALUE(totalMemory_, totalMemory) };


  protected:
    shared_ptr<int32_t> totalCPU_ {};
    shared_ptr<int32_t> totalGPU_ {};
    shared_ptr<vector<GPUInfo>> totalGPUInfos_ {};
    shared_ptr<int32_t> totalMemory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
