// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBSRESPONSEBODYTRAININGJOBSCOMPUTERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBSRESPONSEBODYTRAININGJOBSCOMPUTERESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobsResponseBodyTrainingJobsComputeResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobsResponseBodyTrainingJobsComputeResource& obj) { 
      DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobsResponseBodyTrainingJobsComputeResource& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
    };
    ListTrainingJobsResponseBodyTrainingJobsComputeResource() = default ;
    ListTrainingJobsResponseBodyTrainingJobsComputeResource(const ListTrainingJobsResponseBodyTrainingJobsComputeResource &) = default ;
    ListTrainingJobsResponseBodyTrainingJobsComputeResource(ListTrainingJobsResponseBodyTrainingJobsComputeResource &&) = default ;
    ListTrainingJobsResponseBodyTrainingJobsComputeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobsResponseBodyTrainingJobsComputeResource() = default ;
    ListTrainingJobsResponseBodyTrainingJobsComputeResource& operator=(const ListTrainingJobsResponseBodyTrainingJobsComputeResource &) = default ;
    ListTrainingJobsResponseBodyTrainingJobsComputeResource& operator=(ListTrainingJobsResponseBodyTrainingJobsComputeResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ecsCount_ != nullptr
        && this->ecsSpec_ != nullptr && this->instanceCount_ != nullptr && this->instanceSpec_ != nullptr && this->resourceId_ != nullptr && this->resourceName_ != nullptr; };
    // ecsCount Field Functions 
    bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
    void deleteEcsCount() { this->ecsCount_ = nullptr;};
    inline int64_t ecsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0L) };
    inline ListTrainingJobsResponseBodyTrainingJobsComputeResource& setEcsCount(int64_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline string ecsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsComputeResource& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int64_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0L) };
    inline ListTrainingJobsResponseBodyTrainingJobsComputeResource& setInstanceCount(int64_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline const Models::ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec & instanceSpec() const { DARABONBA_PTR_GET_CONST(instanceSpec_, Models::ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec) };
    inline Models::ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec instanceSpec() { DARABONBA_PTR_GET(instanceSpec_, Models::ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec) };
    inline ListTrainingJobsResponseBodyTrainingJobsComputeResource& setInstanceSpec(const Models::ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec & instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };
    inline ListTrainingJobsResponseBodyTrainingJobsComputeResource& setInstanceSpec(Models::ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec && instanceSpec) { DARABONBA_PTR_SET_RVALUE(instanceSpec_, instanceSpec) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsComputeResource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsComputeResource& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


  protected:
    std::shared_ptr<int64_t> ecsCount_ = nullptr;
    std::shared_ptr<string> ecsSpec_ = nullptr;
    std::shared_ptr<int64_t> instanceCount_ = nullptr;
    std::shared_ptr<Models::ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec> instanceSpec_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
