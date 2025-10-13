// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAININGJOBRESPONSEBODYCOMPUTERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_GETTRAININGJOBRESPONSEBODYCOMPUTERESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTrainingJobResponseBodyComputeResourceInstanceSpec.hpp>
#include <alibabacloud/models/GetTrainingJobResponseBodyComputeResourceSpotSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetTrainingJobResponseBodyComputeResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrainingJobResponseBodyComputeResource& obj) { 
      DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(SpotSpec, spotSpec_);
      DARABONBA_PTR_TO_JSON(UseSpotInstance, useSpotInstance_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrainingJobResponseBodyComputeResource& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(SpotSpec, spotSpec_);
      DARABONBA_PTR_FROM_JSON(UseSpotInstance, useSpotInstance_);
    };
    GetTrainingJobResponseBodyComputeResource() = default ;
    GetTrainingJobResponseBodyComputeResource(const GetTrainingJobResponseBodyComputeResource &) = default ;
    GetTrainingJobResponseBodyComputeResource(GetTrainingJobResponseBodyComputeResource &&) = default ;
    GetTrainingJobResponseBodyComputeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrainingJobResponseBodyComputeResource() = default ;
    GetTrainingJobResponseBodyComputeResource& operator=(const GetTrainingJobResponseBodyComputeResource &) = default ;
    GetTrainingJobResponseBodyComputeResource& operator=(GetTrainingJobResponseBodyComputeResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsCount_ == nullptr
        && return this->ecsSpec_ == nullptr && return this->instanceCount_ == nullptr && return this->instanceSpec_ == nullptr && return this->resourceId_ == nullptr && return this->resourceName_ == nullptr
        && return this->spotSpec_ == nullptr && return this->useSpotInstance_ == nullptr; };
    // ecsCount Field Functions 
    bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
    void deleteEcsCount() { this->ecsCount_ = nullptr;};
    inline int64_t ecsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0L) };
    inline GetTrainingJobResponseBodyComputeResource& setEcsCount(int64_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline string ecsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
    inline GetTrainingJobResponseBodyComputeResource& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int64_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0L) };
    inline GetTrainingJobResponseBodyComputeResource& setInstanceCount(int64_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline const Models::GetTrainingJobResponseBodyComputeResourceInstanceSpec & instanceSpec() const { DARABONBA_PTR_GET_CONST(instanceSpec_, Models::GetTrainingJobResponseBodyComputeResourceInstanceSpec) };
    inline Models::GetTrainingJobResponseBodyComputeResourceInstanceSpec instanceSpec() { DARABONBA_PTR_GET(instanceSpec_, Models::GetTrainingJobResponseBodyComputeResourceInstanceSpec) };
    inline GetTrainingJobResponseBodyComputeResource& setInstanceSpec(const Models::GetTrainingJobResponseBodyComputeResourceInstanceSpec & instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };
    inline GetTrainingJobResponseBodyComputeResource& setInstanceSpec(Models::GetTrainingJobResponseBodyComputeResourceInstanceSpec && instanceSpec) { DARABONBA_PTR_SET_RVALUE(instanceSpec_, instanceSpec) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetTrainingJobResponseBodyComputeResource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetTrainingJobResponseBodyComputeResource& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // spotSpec Field Functions 
    bool hasSpotSpec() const { return this->spotSpec_ != nullptr;};
    void deleteSpotSpec() { this->spotSpec_ = nullptr;};
    inline const Models::GetTrainingJobResponseBodyComputeResourceSpotSpec & spotSpec() const { DARABONBA_PTR_GET_CONST(spotSpec_, Models::GetTrainingJobResponseBodyComputeResourceSpotSpec) };
    inline Models::GetTrainingJobResponseBodyComputeResourceSpotSpec spotSpec() { DARABONBA_PTR_GET(spotSpec_, Models::GetTrainingJobResponseBodyComputeResourceSpotSpec) };
    inline GetTrainingJobResponseBodyComputeResource& setSpotSpec(const Models::GetTrainingJobResponseBodyComputeResourceSpotSpec & spotSpec) { DARABONBA_PTR_SET_VALUE(spotSpec_, spotSpec) };
    inline GetTrainingJobResponseBodyComputeResource& setSpotSpec(Models::GetTrainingJobResponseBodyComputeResourceSpotSpec && spotSpec) { DARABONBA_PTR_SET_RVALUE(spotSpec_, spotSpec) };


    // useSpotInstance Field Functions 
    bool hasUseSpotInstance() const { return this->useSpotInstance_ != nullptr;};
    void deleteUseSpotInstance() { this->useSpotInstance_ = nullptr;};
    inline bool useSpotInstance() const { DARABONBA_PTR_GET_DEFAULT(useSpotInstance_, false) };
    inline GetTrainingJobResponseBodyComputeResource& setUseSpotInstance(bool useSpotInstance) { DARABONBA_PTR_SET_VALUE(useSpotInstance_, useSpotInstance) };


  protected:
    std::shared_ptr<int64_t> ecsCount_ = nullptr;
    std::shared_ptr<string> ecsSpec_ = nullptr;
    std::shared_ptr<int64_t> instanceCount_ = nullptr;
    std::shared_ptr<Models::GetTrainingJobResponseBodyComputeResourceInstanceSpec> instanceSpec_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<Models::GetTrainingJobResponseBodyComputeResourceSpotSpec> spotSpec_ = nullptr;
    std::shared_ptr<bool> useSpotInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
