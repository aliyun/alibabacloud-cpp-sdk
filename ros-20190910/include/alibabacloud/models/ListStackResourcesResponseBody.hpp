// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    ListStackResourcesResponseBody() = default ;
    ListStackResourcesResponseBody(const ListStackResourcesResponseBody &) = default ;
    ListStackResourcesResponseBody(ListStackResourcesResponseBody &&) = default ;
    ListStackResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackResourcesResponseBody() = default ;
    ListStackResourcesResponseBody& operator=(const ListStackResourcesResponseBody &) = default ;
    ListStackResourcesResponseBody& operator=(ListStackResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
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
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ModuleInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModuleInfo& obj) { 
          DARABONBA_PTR_TO_JSON(LogicalIdHierarchy, logicalIdHierarchy_);
          DARABONBA_PTR_TO_JSON(TypeHierarchy, typeHierarchy_);
        };
        friend void from_json(const Darabonba::Json& j, ModuleInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(LogicalIdHierarchy, logicalIdHierarchy_);
          DARABONBA_PTR_FROM_JSON(TypeHierarchy, typeHierarchy_);
        };
        ModuleInfo() = default ;
        ModuleInfo(const ModuleInfo &) = default ;
        ModuleInfo(ModuleInfo &&) = default ;
        ModuleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModuleInfo() = default ;
        ModuleInfo& operator=(const ModuleInfo &) = default ;
        ModuleInfo& operator=(ModuleInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logicalIdHierarchy_ == nullptr
        && this->typeHierarchy_ == nullptr; };
        // logicalIdHierarchy Field Functions 
        bool hasLogicalIdHierarchy() const { return this->logicalIdHierarchy_ != nullptr;};
        void deleteLogicalIdHierarchy() { this->logicalIdHierarchy_ = nullptr;};
        inline string getLogicalIdHierarchy() const { DARABONBA_PTR_GET_DEFAULT(logicalIdHierarchy_, "") };
        inline ModuleInfo& setLogicalIdHierarchy(string logicalIdHierarchy) { DARABONBA_PTR_SET_VALUE(logicalIdHierarchy_, logicalIdHierarchy) };


        // typeHierarchy Field Functions 
        bool hasTypeHierarchy() const { return this->typeHierarchy_ != nullptr;};
        void deleteTypeHierarchy() { this->typeHierarchy_ = nullptr;};
        inline string getTypeHierarchy() const { DARABONBA_PTR_GET_DEFAULT(typeHierarchy_, "") };
        inline ModuleInfo& setTypeHierarchy(string typeHierarchy) { DARABONBA_PTR_SET_VALUE(typeHierarchy_, typeHierarchy) };


      protected:
        // The concatenated logical IDs of one or more modules that contain the resource. The modules are listed from the outermost layer and separated by forward slashes (`/`).
        // 
        // In the following example, the resource is created from Module B nested within Parent Module A:
        // 
        // `moduleA/moduleB`
        shared_ptr<string> logicalIdHierarchy_ {};
        // The concatenated types of one or more modules that contain the resource. The module types are listed from the outermost layer and separated by forward slashes (`/`).
        // 
        // In the following example, the resource is created from a module of the `MODULE::ROS::Child::Example` type that is nested within a parent module of the `MODULE::ROS::Parent::Example` type:
        // 
        // `MODULE::ROS::Parent::Example/MODULE::ROS::Child::Example`
        shared_ptr<string> typeHierarchy_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->driftDetectionTime_ == nullptr && this->logicalResourceId_ == nullptr && this->moduleInfo_ == nullptr && this->physicalResourceId_ == nullptr && this->resourceDriftStatus_ == nullptr
        && this->resourceType_ == nullptr && this->stackId_ == nullptr && this->stackName_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr
        && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Resources& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // driftDetectionTime Field Functions 
      bool hasDriftDetectionTime() const { return this->driftDetectionTime_ != nullptr;};
      void deleteDriftDetectionTime() { this->driftDetectionTime_ = nullptr;};
      inline string getDriftDetectionTime() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionTime_, "") };
      inline Resources& setDriftDetectionTime(string driftDetectionTime) { DARABONBA_PTR_SET_VALUE(driftDetectionTime_, driftDetectionTime) };


      // logicalResourceId Field Functions 
      bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
      void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
      inline string getLogicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceId_, "") };
      inline Resources& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


      // moduleInfo Field Functions 
      bool hasModuleInfo() const { return this->moduleInfo_ != nullptr;};
      void deleteModuleInfo() { this->moduleInfo_ = nullptr;};
      inline const Resources::ModuleInfo & getModuleInfo() const { DARABONBA_PTR_GET_CONST(moduleInfo_, Resources::ModuleInfo) };
      inline Resources::ModuleInfo getModuleInfo() { DARABONBA_PTR_GET(moduleInfo_, Resources::ModuleInfo) };
      inline Resources& setModuleInfo(const Resources::ModuleInfo & moduleInfo) { DARABONBA_PTR_SET_VALUE(moduleInfo_, moduleInfo) };
      inline Resources& setModuleInfo(Resources::ModuleInfo && moduleInfo) { DARABONBA_PTR_SET_RVALUE(moduleInfo_, moduleInfo) };


      // physicalResourceId Field Functions 
      bool hasPhysicalResourceId() const { return this->physicalResourceId_ != nullptr;};
      void deletePhysicalResourceId() { this->physicalResourceId_ = nullptr;};
      inline string getPhysicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(physicalResourceId_, "") };
      inline Resources& setPhysicalResourceId(string physicalResourceId) { DARABONBA_PTR_SET_VALUE(physicalResourceId_, physicalResourceId) };


      // resourceDriftStatus Field Functions 
      bool hasResourceDriftStatus() const { return this->resourceDriftStatus_ != nullptr;};
      void deleteResourceDriftStatus() { this->resourceDriftStatus_ = nullptr;};
      inline string getResourceDriftStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceDriftStatus_, "") };
      inline Resources& setResourceDriftStatus(string resourceDriftStatus) { DARABONBA_PTR_SET_VALUE(resourceDriftStatus_, resourceDriftStatus) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // stackId Field Functions 
      bool hasStackId() const { return this->stackId_ != nullptr;};
      void deleteStackId() { this->stackId_ = nullptr;};
      inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
      inline Resources& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


      // stackName Field Functions 
      bool hasStackName() const { return this->stackName_ != nullptr;};
      void deleteStackName() { this->stackName_ = nullptr;};
      inline string getStackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
      inline Resources& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Resources& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline Resources& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Resources& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the resource was created. The time is displayed in UTC. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format.
      shared_ptr<string> createTime_ {};
      // The time when the most recent successful drift detection was performed on the stack.
      shared_ptr<string> driftDetectionTime_ {};
      // The logical ID of the resource. The logical ID is the resource name that is defined in the template.
      shared_ptr<string> logicalResourceId_ {};
      // The information about the modules from which the resource is created. This parameter is returned only if the resource is created from modules.
      shared_ptr<Resources::ModuleInfo> moduleInfo_ {};
      // The physical ID of the resource.
      shared_ptr<string> physicalResourceId_ {};
      // The drift state of the resource in the most recent successful drift detection. Valid values:
      // 
      // *   DELETED: The actual configuration of the resource differs from its expected template configuration because the resource is deleted.
      // *   MODIFIED: The actual configuration of the resource differs from its expected template configuration.
      // *   NOT_CHECKED: Resource Orchestration Service (ROS) has not checked whether the actual configuration of the resource differs from its expected template configuration.
      // *   IN_SYNC: The actual configuration of the resource matches its expected template configuration.
      shared_ptr<string> resourceDriftStatus_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
      // The stack ID.
      shared_ptr<string> stackId_ {};
      // The stack name.\\
      // The name can be up to 255 characters in length, and can contain digits, letters, hyphens (-), and underscores (_). It must start with a digit or letter.
      shared_ptr<string> stackName_ {};
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
      shared_ptr<string> status_ {};
      // The reason why the resource is in its current state.
      shared_ptr<string> statusReason_ {};
      // The time when the resource was updated. The time is displayed in UTC. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resources_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStackResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<ListStackResourcesResponseBody::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<ListStackResourcesResponseBody::Resources>) };
    inline vector<ListStackResourcesResponseBody::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<ListStackResourcesResponseBody::Resources>) };
    inline ListStackResourcesResponseBody& setResources(const vector<ListStackResourcesResponseBody::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ListStackResourcesResponseBody& setResources(vector<ListStackResourcesResponseBody::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // Details about resources.
    shared_ptr<string> requestId_ {};
    // The resources.
    shared_ptr<vector<ListStackResourcesResponseBody::Resources>> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
