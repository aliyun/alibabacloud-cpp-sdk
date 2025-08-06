// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAININGJOBREQUESTCOMPUTERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAININGJOBREQUESTCOMPUTERESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTrainingJobRequestComputeResourceInstanceSpec.hpp>
#include <alibabacloud/models/CreateTrainingJobRequestComputeResourceSpotSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CreateTrainingJobRequestComputeResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrainingJobRequestComputeResource& obj) { 
      DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(SpotSpec, spotSpec_);
      DARABONBA_PTR_TO_JSON(UseSpotInstance, useSpotInstance_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrainingJobRequestComputeResource& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(SpotSpec, spotSpec_);
      DARABONBA_PTR_FROM_JSON(UseSpotInstance, useSpotInstance_);
    };
    CreateTrainingJobRequestComputeResource() = default ;
    CreateTrainingJobRequestComputeResource(const CreateTrainingJobRequestComputeResource &) = default ;
    CreateTrainingJobRequestComputeResource(CreateTrainingJobRequestComputeResource &&) = default ;
    CreateTrainingJobRequestComputeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrainingJobRequestComputeResource() = default ;
    CreateTrainingJobRequestComputeResource& operator=(const CreateTrainingJobRequestComputeResource &) = default ;
    CreateTrainingJobRequestComputeResource& operator=(CreateTrainingJobRequestComputeResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ecsCount_ != nullptr
        && this->ecsSpec_ != nullptr && this->instanceCount_ != nullptr && this->instanceSpec_ != nullptr && this->resourceId_ != nullptr && this->spotSpec_ != nullptr
        && this->useSpotInstance_ != nullptr; };
    // ecsCount Field Functions 
    bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
    void deleteEcsCount() { this->ecsCount_ = nullptr;};
    inline int64_t ecsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0L) };
    inline CreateTrainingJobRequestComputeResource& setEcsCount(int64_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline string ecsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
    inline CreateTrainingJobRequestComputeResource& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int64_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0L) };
    inline CreateTrainingJobRequestComputeResource& setInstanceCount(int64_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline const Models::CreateTrainingJobRequestComputeResourceInstanceSpec & instanceSpec() const { DARABONBA_PTR_GET_CONST(instanceSpec_, Models::CreateTrainingJobRequestComputeResourceInstanceSpec) };
    inline Models::CreateTrainingJobRequestComputeResourceInstanceSpec instanceSpec() { DARABONBA_PTR_GET(instanceSpec_, Models::CreateTrainingJobRequestComputeResourceInstanceSpec) };
    inline CreateTrainingJobRequestComputeResource& setInstanceSpec(const Models::CreateTrainingJobRequestComputeResourceInstanceSpec & instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };
    inline CreateTrainingJobRequestComputeResource& setInstanceSpec(Models::CreateTrainingJobRequestComputeResourceInstanceSpec && instanceSpec) { DARABONBA_PTR_SET_RVALUE(instanceSpec_, instanceSpec) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateTrainingJobRequestComputeResource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // spotSpec Field Functions 
    bool hasSpotSpec() const { return this->spotSpec_ != nullptr;};
    void deleteSpotSpec() { this->spotSpec_ = nullptr;};
    inline const Models::CreateTrainingJobRequestComputeResourceSpotSpec & spotSpec() const { DARABONBA_PTR_GET_CONST(spotSpec_, Models::CreateTrainingJobRequestComputeResourceSpotSpec) };
    inline Models::CreateTrainingJobRequestComputeResourceSpotSpec spotSpec() { DARABONBA_PTR_GET(spotSpec_, Models::CreateTrainingJobRequestComputeResourceSpotSpec) };
    inline CreateTrainingJobRequestComputeResource& setSpotSpec(const Models::CreateTrainingJobRequestComputeResourceSpotSpec & spotSpec) { DARABONBA_PTR_SET_VALUE(spotSpec_, spotSpec) };
    inline CreateTrainingJobRequestComputeResource& setSpotSpec(Models::CreateTrainingJobRequestComputeResourceSpotSpec && spotSpec) { DARABONBA_PTR_SET_RVALUE(spotSpec_, spotSpec) };


    // useSpotInstance Field Functions 
    bool hasUseSpotInstance() const { return this->useSpotInstance_ != nullptr;};
    void deleteUseSpotInstance() { this->useSpotInstance_ = nullptr;};
    inline bool useSpotInstance() const { DARABONBA_PTR_GET_DEFAULT(useSpotInstance_, false) };
    inline CreateTrainingJobRequestComputeResource& setUseSpotInstance(bool useSpotInstance) { DARABONBA_PTR_SET_VALUE(useSpotInstance_, useSpotInstance) };


  protected:
    std::shared_ptr<int64_t> ecsCount_ = nullptr;
    std::shared_ptr<string> ecsSpec_ = nullptr;
    std::shared_ptr<int64_t> instanceCount_ = nullptr;
    std::shared_ptr<Models::CreateTrainingJobRequestComputeResourceInstanceSpec> instanceSpec_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<Models::CreateTrainingJobRequestComputeResourceSpotSpec> spotSpec_ = nullptr;
    std::shared_ptr<bool> useSpotInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
