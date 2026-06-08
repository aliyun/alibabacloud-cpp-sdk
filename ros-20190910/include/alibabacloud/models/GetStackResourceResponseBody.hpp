// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKRESOURCERESPONSEBODY_HPP_
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
  class GetStackResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_TO_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(ModuleInfo, moduleInfo_);
      DARABONBA_PTR_TO_JSON(PhysicalResourceId, physicalResourceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceAttributes, resourceAttributes_);
      DARABONBA_PTR_TO_JSON(ResourceDriftStatus, resourceDriftStatus_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(StackName, stackName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_FROM_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(ModuleInfo, moduleInfo_);
      DARABONBA_PTR_FROM_JSON(PhysicalResourceId, physicalResourceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceAttributes, resourceAttributes_);
      DARABONBA_PTR_FROM_JSON(ResourceDriftStatus, resourceDriftStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(StackName, stackName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetStackResourceResponseBody() = default ;
    GetStackResourceResponseBody(const GetStackResourceResponseBody &) = default ;
    GetStackResourceResponseBody(GetStackResourceResponseBody &&) = default ;
    GetStackResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackResourceResponseBody() = default ;
    GetStackResourceResponseBody& operator=(const GetStackResourceResponseBody &) = default ;
    GetStackResourceResponseBody& operator=(GetStackResourceResponseBody &&) = default ;
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
        && this->description_ == nullptr && this->driftDetectionTime_ == nullptr && this->logicalResourceId_ == nullptr && this->metadata_ == nullptr && this->moduleInfo_ == nullptr
        && this->physicalResourceId_ == nullptr && this->requestId_ == nullptr && this->resourceAttributes_ == nullptr && this->resourceDriftStatus_ == nullptr && this->resourceType_ == nullptr
        && this->stackId_ == nullptr && this->stackName_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr && this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetStackResourceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetStackResourceResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // driftDetectionTime Field Functions 
    bool hasDriftDetectionTime() const { return this->driftDetectionTime_ != nullptr;};
    void deleteDriftDetectionTime() { this->driftDetectionTime_ = nullptr;};
    inline string getDriftDetectionTime() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionTime_, "") };
    inline GetStackResourceResponseBody& setDriftDetectionTime(string driftDetectionTime) { DARABONBA_PTR_SET_VALUE(driftDetectionTime_, driftDetectionTime) };


    // logicalResourceId Field Functions 
    bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
    void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
    inline string getLogicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceId_, "") };
    inline GetStackResourceResponseBody& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline GetStackResourceResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline GetStackResourceResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // moduleInfo Field Functions 
    bool hasModuleInfo() const { return this->moduleInfo_ != nullptr;};
    void deleteModuleInfo() { this->moduleInfo_ = nullptr;};
    inline const GetStackResourceResponseBody::ModuleInfo & getModuleInfo() const { DARABONBA_PTR_GET_CONST(moduleInfo_, GetStackResourceResponseBody::ModuleInfo) };
    inline GetStackResourceResponseBody::ModuleInfo getModuleInfo() { DARABONBA_PTR_GET(moduleInfo_, GetStackResourceResponseBody::ModuleInfo) };
    inline GetStackResourceResponseBody& setModuleInfo(const GetStackResourceResponseBody::ModuleInfo & moduleInfo) { DARABONBA_PTR_SET_VALUE(moduleInfo_, moduleInfo) };
    inline GetStackResourceResponseBody& setModuleInfo(GetStackResourceResponseBody::ModuleInfo && moduleInfo) { DARABONBA_PTR_SET_RVALUE(moduleInfo_, moduleInfo) };


    // physicalResourceId Field Functions 
    bool hasPhysicalResourceId() const { return this->physicalResourceId_ != nullptr;};
    void deletePhysicalResourceId() { this->physicalResourceId_ = nullptr;};
    inline string getPhysicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(physicalResourceId_, "") };
    inline GetStackResourceResponseBody& setPhysicalResourceId(string physicalResourceId) { DARABONBA_PTR_SET_VALUE(physicalResourceId_, physicalResourceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStackResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceAttributes Field Functions 
    bool hasResourceAttributes() const { return this->resourceAttributes_ != nullptr;};
    void deleteResourceAttributes() { this->resourceAttributes_ = nullptr;};
    inline const vector<Darabonba::Json> & getResourceAttributes() const { DARABONBA_PTR_GET_CONST(resourceAttributes_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getResourceAttributes() { DARABONBA_PTR_GET(resourceAttributes_, vector<Darabonba::Json>) };
    inline GetStackResourceResponseBody& setResourceAttributes(const vector<Darabonba::Json> & resourceAttributes) { DARABONBA_PTR_SET_VALUE(resourceAttributes_, resourceAttributes) };
    inline GetStackResourceResponseBody& setResourceAttributes(vector<Darabonba::Json> && resourceAttributes) { DARABONBA_PTR_SET_RVALUE(resourceAttributes_, resourceAttributes) };


    // resourceDriftStatus Field Functions 
    bool hasResourceDriftStatus() const { return this->resourceDriftStatus_ != nullptr;};
    void deleteResourceDriftStatus() { this->resourceDriftStatus_ = nullptr;};
    inline string getResourceDriftStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceDriftStatus_, "") };
    inline GetStackResourceResponseBody& setResourceDriftStatus(string resourceDriftStatus) { DARABONBA_PTR_SET_VALUE(resourceDriftStatus_, resourceDriftStatus) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetStackResourceResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline GetStackResourceResponseBody& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // stackName Field Functions 
    bool hasStackName() const { return this->stackName_ != nullptr;};
    void deleteStackName() { this->stackName_ = nullptr;};
    inline string getStackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
    inline GetStackResourceResponseBody& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetStackResourceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline GetStackResourceResponseBody& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetStackResourceResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The resource type.
    shared_ptr<string> createTime_ {};
    // The reason why the resource is in its current state.
    shared_ptr<string> description_ {};
    // The ID of the stack.
    shared_ptr<string> driftDetectionTime_ {};
    // The time when the resource was updated.
    // 
    // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    shared_ptr<string> logicalResourceId_ {};
    // The list of the resource properties.
    Darabonba::Json metadata_ {};
    // The information about the modules from which the resource is created. This parameter is returned only if the resource is created from modules.
    shared_ptr<GetStackResourceResponseBody::ModuleInfo> moduleInfo_ {};
    // The metadata.
    shared_ptr<string> physicalResourceId_ {};
    // The physical ID of the resource.
    shared_ptr<string> requestId_ {};
    // The status of the resource in the last successful drift detection. Valid values:
    // 
    // *   DELETED: The actual configuration of the resource differs from its expected template configuration because the resource is deleted.
    // *   MODIFIED: The actual configuration of the resource differs from its expected template configuration.
    // *   NOT_CHECKED: ROS has not checked whether the actual configuration of the resource differs from its expected template configuration.
    // *   IN_SYNC: The actual configuration of the resource matches its expected template configuration.
    shared_ptr<vector<Darabonba::Json>> resourceAttributes_ {};
    // The time when the last successful drift detection was performed on the stack.
    shared_ptr<string> resourceDriftStatus_ {};
    // The logical ID of the resource defined in the template.
    shared_ptr<string> resourceType_ {};
    // The ID of the stack.
    shared_ptr<string> stackId_ {};
    // The name of the stack.
    shared_ptr<string> stackName_ {};
    // The ID of the request.
    shared_ptr<string> status_ {};
    // The time when the resource was created.
    // 
    // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    shared_ptr<string> statusReason_ {};
    // The name of the stack.
    // 
    // The name can be up to 255 characters in length, and can contain digits, letters, hyphens (-), and underscores (_). The name must start with a digit or letter.
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
