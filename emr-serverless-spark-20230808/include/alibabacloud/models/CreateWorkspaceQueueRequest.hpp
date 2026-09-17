// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKSPACEQUEUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKSPACEQUEUEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateWorkspaceQueueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkspaceQueueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gpuSpec, gpuSpec_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(preheat, preheat_);
      DARABONBA_PTR_TO_JSON(queueCategory, queueCategory_);
      DARABONBA_PTR_TO_JSON(resourceSpec, resourceSpec_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(workspaceQueueName, workspaceQueueName_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkspaceQueueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gpuSpec, gpuSpec_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(preheat, preheat_);
      DARABONBA_PTR_FROM_JSON(queueCategory, queueCategory_);
      DARABONBA_PTR_FROM_JSON(resourceSpec, resourceSpec_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(workspaceQueueName, workspaceQueueName_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    CreateWorkspaceQueueRequest() = default ;
    CreateWorkspaceQueueRequest(const CreateWorkspaceQueueRequest &) = default ;
    CreateWorkspaceQueueRequest(CreateWorkspaceQueueRequest &&) = default ;
    CreateWorkspaceQueueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkspaceQueueRequest() = default ;
    CreateWorkspaceQueueRequest& operator=(const CreateWorkspaceQueueRequest &) = default ;
    CreateWorkspaceQueueRequest& operator=(CreateWorkspaceQueueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceSpec& obj) { 
        DARABONBA_PTR_TO_JSON(cu, cu_);
        DARABONBA_PTR_TO_JSON(gpu, gpu_);
        DARABONBA_PTR_TO_JSON(gpuMachineNum, gpuMachineNum_);
        DARABONBA_PTR_TO_JSON(maxCu, maxCu_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(cu, cu_);
        DARABONBA_PTR_FROM_JSON(gpu, gpu_);
        DARABONBA_PTR_FROM_JSON(gpuMachineNum, gpuMachineNum_);
        DARABONBA_PTR_FROM_JSON(maxCu, maxCu_);
      };
      ResourceSpec() = default ;
      ResourceSpec(const ResourceSpec &) = default ;
      ResourceSpec(ResourceSpec &&) = default ;
      ResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceSpec() = default ;
      ResourceSpec& operator=(const ResourceSpec &) = default ;
      ResourceSpec& operator=(ResourceSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cu_ == nullptr
        && this->gpu_ == nullptr && this->gpuMachineNum_ == nullptr && this->maxCu_ == nullptr; };
      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline int64_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0L) };
      inline ResourceSpec& setCu(int64_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


      // gpu Field Functions 
      bool hasGpu() const { return this->gpu_ != nullptr;};
      void deleteGpu() { this->gpu_ = nullptr;};
      inline int32_t getGpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0) };
      inline ResourceSpec& setGpu(int32_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


      // gpuMachineNum Field Functions 
      bool hasGpuMachineNum() const { return this->gpuMachineNum_ != nullptr;};
      void deleteGpuMachineNum() { this->gpuMachineNum_ = nullptr;};
      inline int32_t getGpuMachineNum() const { DARABONBA_PTR_GET_DEFAULT(gpuMachineNum_, 0) };
      inline ResourceSpec& setGpuMachineNum(int32_t gpuMachineNum) { DARABONBA_PTR_SET_VALUE(gpuMachineNum_, gpuMachineNum) };


      // maxCu Field Functions 
      bool hasMaxCu() const { return this->maxCu_ != nullptr;};
      void deleteMaxCu() { this->maxCu_ = nullptr;};
      inline int64_t getMaxCu() const { DARABONBA_PTR_GET_DEFAULT(maxCu_, 0L) };
      inline ResourceSpec& setMaxCu(int64_t maxCu) { DARABONBA_PTR_SET_VALUE(maxCu_, maxCu) };


    protected:
      // The maximum workspace resource capacity.
      shared_ptr<int64_t> cu_ {};
      // The number of GPUs.
      shared_ptr<int32_t> gpu_ {};
      // The number of GPU machines. This parameter is valid only for subscription instances.
      shared_ptr<int32_t> gpuMachineNum_ {};
      // The maximum number of CUs.
      shared_ptr<int64_t> maxCu_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->gpuSpec_ == nullptr && this->instanceId_ == nullptr && this->paymentType_ == nullptr && this->preheat_ == nullptr && this->queueCategory_ == nullptr
        && this->resourceSpec_ == nullptr && this->workspaceId_ == nullptr && this->workspaceQueueName_ == nullptr && this->regionId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateWorkspaceQueueRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gpuSpec Field Functions 
    bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
    void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
    inline const vector<string> & getGpuSpec() const { DARABONBA_PTR_GET_CONST(gpuSpec_, vector<string>) };
    inline vector<string> getGpuSpec() { DARABONBA_PTR_GET(gpuSpec_, vector<string>) };
    inline CreateWorkspaceQueueRequest& setGpuSpec(const vector<string> & gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };
    inline CreateWorkspaceQueueRequest& setGpuSpec(vector<string> && gpuSpec) { DARABONBA_PTR_SET_RVALUE(gpuSpec_, gpuSpec) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateWorkspaceQueueRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateWorkspaceQueueRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // preheat Field Functions 
    bool hasPreheat() const { return this->preheat_ != nullptr;};
    void deletePreheat() { this->preheat_ = nullptr;};
    inline bool getPreheat() const { DARABONBA_PTR_GET_DEFAULT(preheat_, false) };
    inline CreateWorkspaceQueueRequest& setPreheat(bool preheat) { DARABONBA_PTR_SET_VALUE(preheat_, preheat) };


    // queueCategory Field Functions 
    bool hasQueueCategory() const { return this->queueCategory_ != nullptr;};
    void deleteQueueCategory() { this->queueCategory_ = nullptr;};
    inline string getQueueCategory() const { DARABONBA_PTR_GET_DEFAULT(queueCategory_, "") };
    inline CreateWorkspaceQueueRequest& setQueueCategory(string queueCategory) { DARABONBA_PTR_SET_VALUE(queueCategory_, queueCategory) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline const CreateWorkspaceQueueRequest::ResourceSpec & getResourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, CreateWorkspaceQueueRequest::ResourceSpec) };
    inline CreateWorkspaceQueueRequest::ResourceSpec getResourceSpec() { DARABONBA_PTR_GET(resourceSpec_, CreateWorkspaceQueueRequest::ResourceSpec) };
    inline CreateWorkspaceQueueRequest& setResourceSpec(const CreateWorkspaceQueueRequest::ResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
    inline CreateWorkspaceQueueRequest& setResourceSpec(CreateWorkspaceQueueRequest::ResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateWorkspaceQueueRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceQueueName Field Functions 
    bool hasWorkspaceQueueName() const { return this->workspaceQueueName_ != nullptr;};
    void deleteWorkspaceQueueName() { this->workspaceQueueName_ = nullptr;};
    inline string getWorkspaceQueueName() const { DARABONBA_PTR_GET_DEFAULT(workspaceQueueName_, "") };
    inline CreateWorkspaceQueueRequest& setWorkspaceQueueName(string workspaceQueueName) { DARABONBA_PTR_SET_VALUE(workspaceQueueName_, workspaceQueueName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateWorkspaceQueueRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The description.
    shared_ptr<string> description_ {};
    // The list of GPU models.
    shared_ptr<vector<string>> gpuSpec_ {};
    // The Ray cluster instance ID.
    shared_ptr<string> instanceId_ {};
    // The billing method of the instance. Valid values:
    // 
    // - PayAsYouGo: pay-as-you-go
    // - Pre: subscription
    shared_ptr<string> paymentType_ {};
    // Indicates whether resource prefetch is enabled.
    shared_ptr<bool> preheat_ {};
    // The queue type. Valid values: CPU and GPU.
    shared_ptr<string> queueCategory_ {};
    // The resource specifications.
    shared_ptr<CreateWorkspaceQueueRequest::ResourceSpec> resourceSpec_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
    // The workspace queue name.
    shared_ptr<string> workspaceQueueName_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
