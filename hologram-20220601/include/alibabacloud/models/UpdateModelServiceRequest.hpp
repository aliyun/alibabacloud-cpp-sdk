// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class UpdateModelServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(gpu, gpu_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(modelServiceName, modelServiceName_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(serviceCount, serviceCount_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(modelServiceName, modelServiceName_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(serviceCount, serviceCount_);
    };
    UpdateModelServiceRequest() = default ;
    UpdateModelServiceRequest(const UpdateModelServiceRequest &) = default ;
    UpdateModelServiceRequest(UpdateModelServiceRequest &&) = default ;
    UpdateModelServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelServiceRequest() = default ;
    UpdateModelServiceRequest& operator=(const UpdateModelServiceRequest &) = default ;
    UpdateModelServiceRequest& operator=(UpdateModelServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpu_ == nullptr
        && this->gpu_ == nullptr && this->memory_ == nullptr && this->modelServiceName_ == nullptr && this->modelType_ == nullptr && this->serviceCount_ == nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int64_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
    inline UpdateModelServiceRequest& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline int64_t getGpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0L) };
    inline UpdateModelServiceRequest& setGpu(int64_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline UpdateModelServiceRequest& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // modelServiceName Field Functions 
    bool hasModelServiceName() const { return this->modelServiceName_ != nullptr;};
    void deleteModelServiceName() { this->modelServiceName_ = nullptr;};
    inline string getModelServiceName() const { DARABONBA_PTR_GET_DEFAULT(modelServiceName_, "") };
    inline UpdateModelServiceRequest& setModelServiceName(string modelServiceName) { DARABONBA_PTR_SET_VALUE(modelServiceName_, modelServiceName) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline UpdateModelServiceRequest& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // serviceCount Field Functions 
    bool hasServiceCount() const { return this->serviceCount_ != nullptr;};
    void deleteServiceCount() { this->serviceCount_ = nullptr;};
    inline int64_t getServiceCount() const { DARABONBA_PTR_GET_DEFAULT(serviceCount_, 0L) };
    inline UpdateModelServiceRequest& setServiceCount(int64_t serviceCount) { DARABONBA_PTR_SET_VALUE(serviceCount_, serviceCount) };


  protected:
    shared_ptr<int64_t> cpu_ {};
    shared_ptr<int64_t> gpu_ {};
    shared_ptr<int64_t> memory_ {};
    // This parameter is required.
    shared_ptr<string> modelServiceName_ {};
    shared_ptr<string> modelType_ {};
    shared_ptr<int64_t> serviceCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
