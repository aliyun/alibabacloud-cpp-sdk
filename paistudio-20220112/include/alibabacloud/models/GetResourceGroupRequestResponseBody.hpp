// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPREQUESTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPREQUESTRESPONSEBODY_HPP_
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
  class GetResourceGroupRequestResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupRequestResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestCPU, requestCPU_);
      DARABONBA_PTR_TO_JSON(requestGPU, requestGPU_);
      DARABONBA_PTR_TO_JSON(requestGPUInfos, requestGPUInfos_);
      DARABONBA_PTR_TO_JSON(requestMemory, requestMemory_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupRequestResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestCPU, requestCPU_);
      DARABONBA_PTR_FROM_JSON(requestGPU, requestGPU_);
      DARABONBA_PTR_FROM_JSON(requestGPUInfos, requestGPUInfos_);
      DARABONBA_PTR_FROM_JSON(requestMemory, requestMemory_);
    };
    GetResourceGroupRequestResponseBody() = default ;
    GetResourceGroupRequestResponseBody(const GetResourceGroupRequestResponseBody &) = default ;
    GetResourceGroupRequestResponseBody(GetResourceGroupRequestResponseBody &&) = default ;
    GetResourceGroupRequestResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupRequestResponseBody() = default ;
    GetResourceGroupRequestResponseBody& operator=(const GetResourceGroupRequestResponseBody &) = default ;
    GetResourceGroupRequestResponseBody& operator=(GetResourceGroupRequestResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestCPU_ == nullptr
        && this->requestGPU_ == nullptr && this->requestGPUInfos_ == nullptr && this->requestMemory_ == nullptr; };
    // requestCPU Field Functions 
    bool hasRequestCPU() const { return this->requestCPU_ != nullptr;};
    void deleteRequestCPU() { this->requestCPU_ = nullptr;};
    inline int32_t getRequestCPU() const { DARABONBA_PTR_GET_DEFAULT(requestCPU_, 0) };
    inline GetResourceGroupRequestResponseBody& setRequestCPU(int32_t requestCPU) { DARABONBA_PTR_SET_VALUE(requestCPU_, requestCPU) };


    // requestGPU Field Functions 
    bool hasRequestGPU() const { return this->requestGPU_ != nullptr;};
    void deleteRequestGPU() { this->requestGPU_ = nullptr;};
    inline int32_t getRequestGPU() const { DARABONBA_PTR_GET_DEFAULT(requestGPU_, 0) };
    inline GetResourceGroupRequestResponseBody& setRequestGPU(int32_t requestGPU) { DARABONBA_PTR_SET_VALUE(requestGPU_, requestGPU) };


    // requestGPUInfos Field Functions 
    bool hasRequestGPUInfos() const { return this->requestGPUInfos_ != nullptr;};
    void deleteRequestGPUInfos() { this->requestGPUInfos_ = nullptr;};
    inline const vector<GPUInfo> & getRequestGPUInfos() const { DARABONBA_PTR_GET_CONST(requestGPUInfos_, vector<GPUInfo>) };
    inline vector<GPUInfo> getRequestGPUInfos() { DARABONBA_PTR_GET(requestGPUInfos_, vector<GPUInfo>) };
    inline GetResourceGroupRequestResponseBody& setRequestGPUInfos(const vector<GPUInfo> & requestGPUInfos) { DARABONBA_PTR_SET_VALUE(requestGPUInfos_, requestGPUInfos) };
    inline GetResourceGroupRequestResponseBody& setRequestGPUInfos(vector<GPUInfo> && requestGPUInfos) { DARABONBA_PTR_SET_RVALUE(requestGPUInfos_, requestGPUInfos) };


    // requestMemory Field Functions 
    bool hasRequestMemory() const { return this->requestMemory_ != nullptr;};
    void deleteRequestMemory() { this->requestMemory_ = nullptr;};
    inline int32_t getRequestMemory() const { DARABONBA_PTR_GET_DEFAULT(requestMemory_, 0) };
    inline GetResourceGroupRequestResponseBody& setRequestMemory(int32_t requestMemory) { DARABONBA_PTR_SET_VALUE(requestMemory_, requestMemory) };


  protected:
    shared_ptr<int32_t> requestCPU_ {};
    shared_ptr<int32_t> requestGPU_ {};
    shared_ptr<vector<GPUInfo>> requestGPUInfos_ {};
    shared_ptr<int32_t> requestMemory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
