// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEADHOCWORKFLOWINSTANCEREQUESTTASKSRUNTIMERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEADHOCWORKFLOWINSTANCEREQUESTTASKSRUNTIMERESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource& obj) { 
      DARABONBA_PTR_TO_JSON(Cu, cu_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Cu, cu_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource() = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource(const ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource &) = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource(ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource &&) = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource() = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource& operator=(const ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource &) = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource& operator=(ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cu_ == nullptr
        && return this->image_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline string cu() const { DARABONBA_PTR_GET_DEFAULT(cu_, "") };
    inline ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource& setCu(string cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The default number of compute units (CUs) configured for task running.
    std::shared_ptr<string> cu_ = nullptr;
    // The ID of the image configured for task running.
    std::shared_ptr<string> image_ = nullptr;
    // The ID of the resource group for scheduling configured for task running.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
