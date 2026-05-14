// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class GetInstanceModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(aiInstanceId, aiInstanceId_);
      DARABONBA_PTR_TO_JSON(autoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(cpuUsed, cpuUsed_);
      DARABONBA_PTR_TO_JSON(expirationTime, expirationTime_);
      DARABONBA_PTR_TO_JSON(gpu, gpu_);
      DARABONBA_PTR_TO_JSON(gpuMemory, gpuMemory_);
      DARABONBA_PTR_TO_JSON(gpuMemoryUsed, gpuMemoryUsed_);
      DARABONBA_PTR_TO_JSON(gpuUsed, gpuUsed_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(memoryUsed, memoryUsed_);
      DARABONBA_PTR_TO_JSON(modelServiceList, modelServiceList_);
      DARABONBA_PTR_TO_JSON(nodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(aiInstanceId, aiInstanceId_);
      DARABONBA_PTR_FROM_JSON(autoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(cpuUsed, cpuUsed_);
      DARABONBA_PTR_FROM_JSON(expirationTime, expirationTime_);
      DARABONBA_PTR_FROM_JSON(gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(gpuMemory, gpuMemory_);
      DARABONBA_PTR_FROM_JSON(gpuMemoryUsed, gpuMemoryUsed_);
      DARABONBA_PTR_FROM_JSON(gpuUsed, gpuUsed_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(memoryUsed, memoryUsed_);
      DARABONBA_PTR_FROM_JSON(modelServiceList, modelServiceList_);
      DARABONBA_PTR_FROM_JSON(nodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetInstanceModelResponseBody() = default ;
    GetInstanceModelResponseBody(const GetInstanceModelResponseBody &) = default ;
    GetInstanceModelResponseBody(GetInstanceModelResponseBody &&) = default ;
    GetInstanceModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceModelResponseBody() = default ;
    GetInstanceModelResponseBody& operator=(const GetInstanceModelResponseBody &) = default ;
    GetInstanceModelResponseBody& operator=(GetInstanceModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModelServiceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelServiceList& obj) { 
        DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(cpu, cpu_);
        DARABONBA_PTR_TO_JSON(gpu, gpu_);
        DARABONBA_PTR_TO_JSON(gpuMemory, gpuMemory_);
        DARABONBA_PTR_TO_JSON(instanceRegion, instanceRegion_);
        DARABONBA_PTR_TO_JSON(memory, memory_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(modelName, modelName_);
        DARABONBA_PTR_TO_JSON(modelParams, modelParams_);
        DARABONBA_PTR_TO_JSON(modelType, modelType_);
        DARABONBA_PTR_TO_JSON(provider, provider_);
        DARABONBA_PTR_TO_JSON(serviceCount, serviceCount_);
        DARABONBA_PTR_TO_JSON(serviceDeployRegion, serviceDeployRegion_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskType, taskType_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, ModelServiceList& obj) { 
        DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(gpu, gpu_);
        DARABONBA_PTR_FROM_JSON(gpuMemory, gpuMemory_);
        DARABONBA_PTR_FROM_JSON(instanceRegion, instanceRegion_);
        DARABONBA_PTR_FROM_JSON(memory, memory_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(modelName, modelName_);
        DARABONBA_PTR_FROM_JSON(modelParams, modelParams_);
        DARABONBA_PTR_FROM_JSON(modelType, modelType_);
        DARABONBA_PTR_FROM_JSON(provider, provider_);
        DARABONBA_PTR_FROM_JSON(serviceCount, serviceCount_);
        DARABONBA_PTR_FROM_JSON(serviceDeployRegion, serviceDeployRegion_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskType, taskType_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      ModelServiceList() = default ;
      ModelServiceList(const ModelServiceList &) = default ;
      ModelServiceList(ModelServiceList &&) = default ;
      ModelServiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelServiceList() = default ;
      ModelServiceList& operator=(const ModelServiceList &) = default ;
      ModelServiceList& operator=(ModelServiceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->cpu_ == nullptr && this->gpu_ == nullptr && this->gpuMemory_ == nullptr && this->instanceRegion_ == nullptr && this->memory_ == nullptr
        && this->message_ == nullptr && this->modelName_ == nullptr && this->modelParams_ == nullptr && this->modelType_ == nullptr && this->provider_ == nullptr
        && this->serviceCount_ == nullptr && this->serviceDeployRegion_ == nullptr && this->status_ == nullptr && this->taskType_ == nullptr && this->version_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline ModelServiceList& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int64_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
      inline ModelServiceList& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // gpu Field Functions 
      bool hasGpu() const { return this->gpu_ != nullptr;};
      void deleteGpu() { this->gpu_ = nullptr;};
      inline int64_t getGpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0L) };
      inline ModelServiceList& setGpu(int64_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


      // gpuMemory Field Functions 
      bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
      void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
      inline int64_t getGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0L) };
      inline ModelServiceList& setGpuMemory(int64_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


      // instanceRegion Field Functions 
      bool hasInstanceRegion() const { return this->instanceRegion_ != nullptr;};
      void deleteInstanceRegion() { this->instanceRegion_ = nullptr;};
      inline string getInstanceRegion() const { DARABONBA_PTR_GET_DEFAULT(instanceRegion_, "") };
      inline ModelServiceList& setInstanceRegion(string instanceRegion) { DARABONBA_PTR_SET_VALUE(instanceRegion_, instanceRegion) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
      inline ModelServiceList& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline ModelServiceList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline ModelServiceList& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // modelParams Field Functions 
      bool hasModelParams() const { return this->modelParams_ != nullptr;};
      void deleteModelParams() { this->modelParams_ = nullptr;};
      inline string getModelParams() const { DARABONBA_PTR_GET_DEFAULT(modelParams_, "") };
      inline ModelServiceList& setModelParams(string modelParams) { DARABONBA_PTR_SET_VALUE(modelParams_, modelParams) };


      // modelType Field Functions 
      bool hasModelType() const { return this->modelType_ != nullptr;};
      void deleteModelType() { this->modelType_ = nullptr;};
      inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
      inline ModelServiceList& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
      inline ModelServiceList& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


      // serviceCount Field Functions 
      bool hasServiceCount() const { return this->serviceCount_ != nullptr;};
      void deleteServiceCount() { this->serviceCount_ = nullptr;};
      inline int64_t getServiceCount() const { DARABONBA_PTR_GET_DEFAULT(serviceCount_, 0L) };
      inline ModelServiceList& setServiceCount(int64_t serviceCount) { DARABONBA_PTR_SET_VALUE(serviceCount_, serviceCount) };


      // serviceDeployRegion Field Functions 
      bool hasServiceDeployRegion() const { return this->serviceDeployRegion_ != nullptr;};
      void deleteServiceDeployRegion() { this->serviceDeployRegion_ = nullptr;};
      inline string getServiceDeployRegion() const { DARABONBA_PTR_GET_DEFAULT(serviceDeployRegion_, "") };
      inline ModelServiceList& setServiceDeployRegion(string serviceDeployRegion) { DARABONBA_PTR_SET_VALUE(serviceDeployRegion_, serviceDeployRegion) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ModelServiceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline ModelServiceList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline ModelServiceList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> apiKey_ {};
      shared_ptr<int64_t> cpu_ {};
      shared_ptr<int64_t> gpu_ {};
      shared_ptr<int64_t> gpuMemory_ {};
      shared_ptr<string> instanceRegion_ {};
      shared_ptr<int64_t> memory_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> modelName_ {};
      shared_ptr<string> modelParams_ {};
      shared_ptr<string> modelType_ {};
      shared_ptr<string> provider_ {};
      shared_ptr<int64_t> serviceCount_ {};
      shared_ptr<string> serviceDeployRegion_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->aiInstanceId_ == nullptr
        && this->autoRenewal_ == nullptr && this->chargeType_ == nullptr && this->commodityCode_ == nullptr && this->cpu_ == nullptr && this->cpuUsed_ == nullptr
        && this->expirationTime_ == nullptr && this->gpu_ == nullptr && this->gpuMemory_ == nullptr && this->gpuMemoryUsed_ == nullptr && this->gpuUsed_ == nullptr
        && this->memory_ == nullptr && this->memoryUsed_ == nullptr && this->modelServiceList_ == nullptr && this->nodeCount_ == nullptr && this->regionId_ == nullptr
        && this->requestId_ == nullptr && this->resourceType_ == nullptr && this->status_ == nullptr; };
    // aiInstanceId Field Functions 
    bool hasAiInstanceId() const { return this->aiInstanceId_ != nullptr;};
    void deleteAiInstanceId() { this->aiInstanceId_ = nullptr;};
    inline string getAiInstanceId() const { DARABONBA_PTR_GET_DEFAULT(aiInstanceId_, "") };
    inline GetInstanceModelResponseBody& setAiInstanceId(string aiInstanceId) { DARABONBA_PTR_SET_VALUE(aiInstanceId_, aiInstanceId) };


    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline bool getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
    inline GetInstanceModelResponseBody& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline GetInstanceModelResponseBody& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline GetInstanceModelResponseBody& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int64_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
    inline GetInstanceModelResponseBody& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // cpuUsed Field Functions 
    bool hasCpuUsed() const { return this->cpuUsed_ != nullptr;};
    void deleteCpuUsed() { this->cpuUsed_ = nullptr;};
    inline int64_t getCpuUsed() const { DARABONBA_PTR_GET_DEFAULT(cpuUsed_, 0L) };
    inline GetInstanceModelResponseBody& setCpuUsed(int64_t cpuUsed) { DARABONBA_PTR_SET_VALUE(cpuUsed_, cpuUsed) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline string getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, "") };
    inline GetInstanceModelResponseBody& setExpirationTime(string expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline int64_t getGpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0L) };
    inline GetInstanceModelResponseBody& setGpu(int64_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // gpuMemory Field Functions 
    bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
    void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
    inline int64_t getGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0L) };
    inline GetInstanceModelResponseBody& setGpuMemory(int64_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


    // gpuMemoryUsed Field Functions 
    bool hasGpuMemoryUsed() const { return this->gpuMemoryUsed_ != nullptr;};
    void deleteGpuMemoryUsed() { this->gpuMemoryUsed_ = nullptr;};
    inline int64_t getGpuMemoryUsed() const { DARABONBA_PTR_GET_DEFAULT(gpuMemoryUsed_, 0L) };
    inline GetInstanceModelResponseBody& setGpuMemoryUsed(int64_t gpuMemoryUsed) { DARABONBA_PTR_SET_VALUE(gpuMemoryUsed_, gpuMemoryUsed) };


    // gpuUsed Field Functions 
    bool hasGpuUsed() const { return this->gpuUsed_ != nullptr;};
    void deleteGpuUsed() { this->gpuUsed_ = nullptr;};
    inline int64_t getGpuUsed() const { DARABONBA_PTR_GET_DEFAULT(gpuUsed_, 0L) };
    inline GetInstanceModelResponseBody& setGpuUsed(int64_t gpuUsed) { DARABONBA_PTR_SET_VALUE(gpuUsed_, gpuUsed) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline GetInstanceModelResponseBody& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // memoryUsed Field Functions 
    bool hasMemoryUsed() const { return this->memoryUsed_ != nullptr;};
    void deleteMemoryUsed() { this->memoryUsed_ = nullptr;};
    inline int64_t getMemoryUsed() const { DARABONBA_PTR_GET_DEFAULT(memoryUsed_, 0L) };
    inline GetInstanceModelResponseBody& setMemoryUsed(int64_t memoryUsed) { DARABONBA_PTR_SET_VALUE(memoryUsed_, memoryUsed) };


    // modelServiceList Field Functions 
    bool hasModelServiceList() const { return this->modelServiceList_ != nullptr;};
    void deleteModelServiceList() { this->modelServiceList_ = nullptr;};
    inline const vector<GetInstanceModelResponseBody::ModelServiceList> & getModelServiceList() const { DARABONBA_PTR_GET_CONST(modelServiceList_, vector<GetInstanceModelResponseBody::ModelServiceList>) };
    inline vector<GetInstanceModelResponseBody::ModelServiceList> getModelServiceList() { DARABONBA_PTR_GET(modelServiceList_, vector<GetInstanceModelResponseBody::ModelServiceList>) };
    inline GetInstanceModelResponseBody& setModelServiceList(const vector<GetInstanceModelResponseBody::ModelServiceList> & modelServiceList) { DARABONBA_PTR_SET_VALUE(modelServiceList_, modelServiceList) };
    inline GetInstanceModelResponseBody& setModelServiceList(vector<GetInstanceModelResponseBody::ModelServiceList> && modelServiceList) { DARABONBA_PTR_SET_RVALUE(modelServiceList_, modelServiceList) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int64_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0L) };
    inline GetInstanceModelResponseBody& setNodeCount(int64_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetInstanceModelResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetInstanceModelResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetInstanceModelResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> aiInstanceId_ {};
    shared_ptr<bool> autoRenewal_ {};
    shared_ptr<string> chargeType_ {};
    shared_ptr<string> commodityCode_ {};
    shared_ptr<int64_t> cpu_ {};
    shared_ptr<int64_t> cpuUsed_ {};
    shared_ptr<string> expirationTime_ {};
    shared_ptr<int64_t> gpu_ {};
    shared_ptr<int64_t> gpuMemory_ {};
    shared_ptr<int64_t> gpuMemoryUsed_ {};
    shared_ptr<int64_t> gpuUsed_ {};
    shared_ptr<int64_t> memory_ {};
    shared_ptr<int64_t> memoryUsed_ {};
    shared_ptr<vector<GetInstanceModelResponseBody::ModelServiceList>> modelServiceList_ {};
    shared_ptr<int64_t> nodeCount_ {};
    shared_ptr<string> regionId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resourceType_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
