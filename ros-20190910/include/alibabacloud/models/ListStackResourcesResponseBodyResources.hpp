// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKRESOURCESRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKRESOURCESRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListStackResourcesResponseBodyResourcesModuleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackResourcesResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackResourcesResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_TO_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_PTR_TO_JSON(ModuleInfo, moduleInfo_);
      DARABONBA_PTR_TO_JSON(PhysicalResourceId, physicalResourceId_);
      DARABONBA_PTR_TO_JSON(ResourceDriftStatus, resourceDriftStatus_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(StackName, stackName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackResourcesResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_FROM_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_PTR_FROM_JSON(ModuleInfo, moduleInfo_);
      DARABONBA_PTR_FROM_JSON(PhysicalResourceId, physicalResourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceDriftStatus, resourceDriftStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(StackName, stackName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListStackResourcesResponseBodyResources() = default ;
    ListStackResourcesResponseBodyResources(const ListStackResourcesResponseBodyResources &) = default ;
    ListStackResourcesResponseBodyResources(ListStackResourcesResponseBodyResources &&) = default ;
    ListStackResourcesResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackResourcesResponseBodyResources() = default ;
    ListStackResourcesResponseBodyResources& operator=(const ListStackResourcesResponseBodyResources &) = default ;
    ListStackResourcesResponseBodyResources& operator=(ListStackResourcesResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->driftDetectionTime_ != nullptr && this->logicalResourceId_ != nullptr && this->moduleInfo_ != nullptr && this->physicalResourceId_ != nullptr && this->resourceDriftStatus_ != nullptr
        && this->resourceType_ != nullptr && this->stackId_ != nullptr && this->stackName_ != nullptr && this->status_ != nullptr && this->statusReason_ != nullptr
        && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListStackResourcesResponseBodyResources& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // driftDetectionTime Field Functions 
    bool hasDriftDetectionTime() const { return this->driftDetectionTime_ != nullptr;};
    void deleteDriftDetectionTime() { this->driftDetectionTime_ = nullptr;};
    inline string driftDetectionTime() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionTime_, "") };
    inline ListStackResourcesResponseBodyResources& setDriftDetectionTime(string driftDetectionTime) { DARABONBA_PTR_SET_VALUE(driftDetectionTime_, driftDetectionTime) };


    // logicalResourceId Field Functions 
    bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
    void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
    inline string logicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceId_, "") };
    inline ListStackResourcesResponseBodyResources& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


    // moduleInfo Field Functions 
    bool hasModuleInfo() const { return this->moduleInfo_ != nullptr;};
    void deleteModuleInfo() { this->moduleInfo_ = nullptr;};
    inline const Models::ListStackResourcesResponseBodyResourcesModuleInfo & moduleInfo() const { DARABONBA_PTR_GET_CONST(moduleInfo_, Models::ListStackResourcesResponseBodyResourcesModuleInfo) };
    inline Models::ListStackResourcesResponseBodyResourcesModuleInfo moduleInfo() { DARABONBA_PTR_GET(moduleInfo_, Models::ListStackResourcesResponseBodyResourcesModuleInfo) };
    inline ListStackResourcesResponseBodyResources& setModuleInfo(const Models::ListStackResourcesResponseBodyResourcesModuleInfo & moduleInfo) { DARABONBA_PTR_SET_VALUE(moduleInfo_, moduleInfo) };
    inline ListStackResourcesResponseBodyResources& setModuleInfo(Models::ListStackResourcesResponseBodyResourcesModuleInfo && moduleInfo) { DARABONBA_PTR_SET_RVALUE(moduleInfo_, moduleInfo) };


    // physicalResourceId Field Functions 
    bool hasPhysicalResourceId() const { return this->physicalResourceId_ != nullptr;};
    void deletePhysicalResourceId() { this->physicalResourceId_ = nullptr;};
    inline string physicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(physicalResourceId_, "") };
    inline ListStackResourcesResponseBodyResources& setPhysicalResourceId(string physicalResourceId) { DARABONBA_PTR_SET_VALUE(physicalResourceId_, physicalResourceId) };


    // resourceDriftStatus Field Functions 
    bool hasResourceDriftStatus() const { return this->resourceDriftStatus_ != nullptr;};
    void deleteResourceDriftStatus() { this->resourceDriftStatus_ = nullptr;};
    inline string resourceDriftStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceDriftStatus_, "") };
    inline ListStackResourcesResponseBodyResources& setResourceDriftStatus(string resourceDriftStatus) { DARABONBA_PTR_SET_VALUE(resourceDriftStatus_, resourceDriftStatus) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListStackResourcesResponseBodyResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline ListStackResourcesResponseBodyResources& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // stackName Field Functions 
    bool hasStackName() const { return this->stackName_ != nullptr;};
    void deleteStackName() { this->stackName_ = nullptr;};
    inline string stackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
    inline ListStackResourcesResponseBodyResources& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListStackResourcesResponseBodyResources& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline ListStackResourcesResponseBodyResources& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListStackResourcesResponseBodyResources& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the resource was created. The time is displayed in UTC. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the most recent successful drift detection was performed on the stack.
    std::shared_ptr<string> driftDetectionTime_ = nullptr;
    // The logical ID of the resource. The logical ID is the resource name that is defined in the template.
    std::shared_ptr<string> logicalResourceId_ = nullptr;
    // The information about the modules from which the resource is created. This parameter is returned only if the resource is created from modules.
    std::shared_ptr<Models::ListStackResourcesResponseBodyResourcesModuleInfo> moduleInfo_ = nullptr;
    // The physical ID of the resource.
    std::shared_ptr<string> physicalResourceId_ = nullptr;
    // The drift state of the resource in the most recent successful drift detection. Valid values:
    // 
    // *   DELETED: The actual configuration of the resource differs from its expected template configuration because the resource is deleted.
    // *   MODIFIED: The actual configuration of the resource differs from its expected template configuration.
    // *   NOT_CHECKED: Resource Orchestration Service (ROS) has not checked whether the actual configuration of the resource differs from its expected template configuration.
    // *   IN_SYNC: The actual configuration of the resource matches its expected template configuration.
    std::shared_ptr<string> resourceDriftStatus_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The stack ID.
    std::shared_ptr<string> stackId_ = nullptr;
    // The stack name.\\
    // The name can be up to 255 characters in length, and can contain digits, letters, hyphens (-), and underscores (_). It must start with a digit or letter.
    std::shared_ptr<string> stackName_ = nullptr;
    // The state of the resource. Valid values:
    // 
    // *   INIT_COMPLETE: The resource is pending to be created.
    // *   CREATE_COMPLETE: The resource is created.
    // *   CREATE_FAILED: The resource failed to be created.
    // *   CREATE_IN_PROGRESS: The resource is being created.
    // *   UPDATE_IN_PROGRESS: The resource is being updated.
    // *   UPDATE_FAILED: The resource failed to be updated.
    // *   UPDATE_COMPLETE: The resource is updated.
    // *   DELETE_IN_PROGRESS: The resource is being deleted.
    // *   DELETE_FAILED: The resource failed to be deleted.
    // *   DELETE_COMPLETE: The resource is deleted.
    // *   CHECK_IN_PROGRESS: The resource is being validated.
    // *   CHECK_FAILED: The resource failed to be validated.
    // *   CHECK_COMPLETE: The resource is validated.
    // *   IMPORT_IN_PROGRESS: The resource is being imported.
    // *   IMPORT_FAILED: The resource failed to be imported.
    // *   IMPORT_COMPLETE: The resource is imported.
    std::shared_ptr<string> status_ = nullptr;
    // The reason why the resource is in its current state.
    std::shared_ptr<string> statusReason_ = nullptr;
    // The time when the resource was updated. The time is displayed in UTC. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
