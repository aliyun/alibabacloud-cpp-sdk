// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class CreateModelServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(gpu, gpu_);
      DARABONBA_PTR_TO_JSON(gpuMemory, gpuMemory_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(modelParams, modelParams_);
      DARABONBA_PTR_TO_JSON(modelServiceName, modelServiceName_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(serviceCount, serviceCount_);
      DARABONBA_PTR_TO_JSON(taskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(gpuMemory, gpuMemory_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(modelParams, modelParams_);
      DARABONBA_PTR_FROM_JSON(modelServiceName, modelServiceName_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(serviceCount, serviceCount_);
      DARABONBA_PTR_FROM_JSON(taskType, taskType_);
    };
    CreateModelServiceRequest() = default ;
    CreateModelServiceRequest(const CreateModelServiceRequest &) = default ;
    CreateModelServiceRequest(CreateModelServiceRequest &&) = default ;
    CreateModelServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelServiceRequest() = default ;
    CreateModelServiceRequest& operator=(const CreateModelServiceRequest &) = default ;
    CreateModelServiceRequest& operator=(CreateModelServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->cpu_ == nullptr && this->gpu_ == nullptr && this->gpuMemory_ == nullptr && this->memory_ == nullptr && this->modelParams_ == nullptr
        && this->modelServiceName_ == nullptr && this->modelType_ == nullptr && this->provider_ == nullptr && this->serviceCount_ == nullptr && this->taskType_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline CreateModelServiceRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int64_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
    inline CreateModelServiceRequest& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline int64_t getGpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0L) };
    inline CreateModelServiceRequest& setGpu(int64_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // gpuMemory Field Functions 
    bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
    void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
    inline int64_t getGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0L) };
    inline CreateModelServiceRequest& setGpuMemory(int64_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline CreateModelServiceRequest& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // modelParams Field Functions 
    bool hasModelParams() const { return this->modelParams_ != nullptr;};
    void deleteModelParams() { this->modelParams_ = nullptr;};
    inline string getModelParams() const { DARABONBA_PTR_GET_DEFAULT(modelParams_, "") };
    inline CreateModelServiceRequest& setModelParams(string modelParams) { DARABONBA_PTR_SET_VALUE(modelParams_, modelParams) };


    // modelServiceName Field Functions 
    bool hasModelServiceName() const { return this->modelServiceName_ != nullptr;};
    void deleteModelServiceName() { this->modelServiceName_ = nullptr;};
    inline string getModelServiceName() const { DARABONBA_PTR_GET_DEFAULT(modelServiceName_, "") };
    inline CreateModelServiceRequest& setModelServiceName(string modelServiceName) { DARABONBA_PTR_SET_VALUE(modelServiceName_, modelServiceName) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline CreateModelServiceRequest& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline CreateModelServiceRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // serviceCount Field Functions 
    bool hasServiceCount() const { return this->serviceCount_ != nullptr;};
    void deleteServiceCount() { this->serviceCount_ = nullptr;};
    inline int64_t getServiceCount() const { DARABONBA_PTR_GET_DEFAULT(serviceCount_, 0L) };
    inline CreateModelServiceRequest& setServiceCount(int64_t serviceCount) { DARABONBA_PTR_SET_VALUE(serviceCount_, serviceCount) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateModelServiceRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    shared_ptr<string> apiKey_ {};
    shared_ptr<int64_t> cpu_ {};
    shared_ptr<int64_t> gpu_ {};
    shared_ptr<int64_t> gpuMemory_ {};
    shared_ptr<int64_t> memory_ {};
    shared_ptr<string> modelParams_ {};
    // This parameter is required.
    shared_ptr<string> modelServiceName_ {};
    // This parameter is required.
    shared_ptr<string> modelType_ {};
    shared_ptr<string> provider_ {};
    shared_ptr<int64_t> serviceCount_ {};
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
