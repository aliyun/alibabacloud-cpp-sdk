// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStackResourceResponseBodyModuleInfo.hpp>
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
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->driftDetectionTime_ != nullptr && this->logicalResourceId_ != nullptr && this->metadata_ != nullptr && this->moduleInfo_ != nullptr
        && this->physicalResourceId_ != nullptr && this->requestId_ != nullptr && this->resourceAttributes_ != nullptr && this->resourceDriftStatus_ != nullptr && this->resourceType_ != nullptr
        && this->stackId_ != nullptr && this->stackName_ != nullptr && this->status_ != nullptr && this->statusReason_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetStackResourceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetStackResourceResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // driftDetectionTime Field Functions 
    bool hasDriftDetectionTime() const { return this->driftDetectionTime_ != nullptr;};
    void deleteDriftDetectionTime() { this->driftDetectionTime_ = nullptr;};
    inline string driftDetectionTime() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionTime_, "") };
    inline GetStackResourceResponseBody& setDriftDetectionTime(string driftDetectionTime) { DARABONBA_PTR_SET_VALUE(driftDetectionTime_, driftDetectionTime) };


    // logicalResourceId Field Functions 
    bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
    void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
    inline string logicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceId_, "") };
    inline GetStackResourceResponseBody& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline GetStackResourceResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline GetStackResourceResponseBody& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // moduleInfo Field Functions 
    bool hasModuleInfo() const { return this->moduleInfo_ != nullptr;};
    void deleteModuleInfo() { this->moduleInfo_ = nullptr;};
    inline const GetStackResourceResponseBodyModuleInfo & moduleInfo() const { DARABONBA_PTR_GET_CONST(moduleInfo_, GetStackResourceResponseBodyModuleInfo) };
    inline GetStackResourceResponseBodyModuleInfo moduleInfo() { DARABONBA_PTR_GET(moduleInfo_, GetStackResourceResponseBodyModuleInfo) };
    inline GetStackResourceResponseBody& setModuleInfo(const GetStackResourceResponseBodyModuleInfo & moduleInfo) { DARABONBA_PTR_SET_VALUE(moduleInfo_, moduleInfo) };
    inline GetStackResourceResponseBody& setModuleInfo(GetStackResourceResponseBodyModuleInfo && moduleInfo) { DARABONBA_PTR_SET_RVALUE(moduleInfo_, moduleInfo) };


    // physicalResourceId Field Functions 
    bool hasPhysicalResourceId() const { return this->physicalResourceId_ != nullptr;};
    void deletePhysicalResourceId() { this->physicalResourceId_ = nullptr;};
    inline string physicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(physicalResourceId_, "") };
    inline GetStackResourceResponseBody& setPhysicalResourceId(string physicalResourceId) { DARABONBA_PTR_SET_VALUE(physicalResourceId_, physicalResourceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStackResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceAttributes Field Functions 
    bool hasResourceAttributes() const { return this->resourceAttributes_ != nullptr;};
    void deleteResourceAttributes() { this->resourceAttributes_ = nullptr;};
    inline const vector<Darabonba::Json> & resourceAttributes() const { DARABONBA_PTR_GET_CONST(resourceAttributes_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> resourceAttributes() { DARABONBA_PTR_GET(resourceAttributes_, vector<Darabonba::Json>) };
    inline GetStackResourceResponseBody& setResourceAttributes(const vector<Darabonba::Json> & resourceAttributes) { DARABONBA_PTR_SET_VALUE(resourceAttributes_, resourceAttributes) };
    inline GetStackResourceResponseBody& setResourceAttributes(vector<Darabonba::Json> && resourceAttributes) { DARABONBA_PTR_SET_RVALUE(resourceAttributes_, resourceAttributes) };


    // resourceDriftStatus Field Functions 
    bool hasResourceDriftStatus() const { return this->resourceDriftStatus_ != nullptr;};
    void deleteResourceDriftStatus() { this->resourceDriftStatus_ = nullptr;};
    inline string resourceDriftStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceDriftStatus_, "") };
    inline GetStackResourceResponseBody& setResourceDriftStatus(string resourceDriftStatus) { DARABONBA_PTR_SET_VALUE(resourceDriftStatus_, resourceDriftStatus) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetStackResourceResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline GetStackResourceResponseBody& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // stackName Field Functions 
    bool hasStackName() const { return this->stackName_ != nullptr;};
    void deleteStackName() { this->stackName_ = nullptr;};
    inline string stackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
    inline GetStackResourceResponseBody& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetStackResourceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline GetStackResourceResponseBody& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetStackResourceResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The resource type.
    std::shared_ptr<string> createTime_ = nullptr;
    // The reason why the resource is in its current state.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the stack.
    std::shared_ptr<string> driftDetectionTime_ = nullptr;
    // The time when the resource was updated.
    // 
    // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> logicalResourceId_ = nullptr;
    // The list of the resource properties.
    Darabonba::Json metadata_ = nullptr;
    // The information about the modules from which the resource is created. This parameter is returned only if the resource is created from modules.
    std::shared_ptr<GetStackResourceResponseBodyModuleInfo> moduleInfo_ = nullptr;
    // The metadata.
    std::shared_ptr<string> physicalResourceId_ = nullptr;
    // The physical ID of the resource.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the resource in the last successful drift detection. Valid values:
    // 
    // *   DELETED: The actual configuration of the resource differs from its expected template configuration because the resource is deleted.
    // *   MODIFIED: The actual configuration of the resource differs from its expected template configuration.
    // *   NOT_CHECKED: ROS has not checked whether the actual configuration of the resource differs from its expected template configuration.
    // *   IN_SYNC: The actual configuration of the resource matches its expected template configuration.
    std::shared_ptr<vector<Darabonba::Json>> resourceAttributes_ = nullptr;
    // The time when the last successful drift detection was performed on the stack.
    std::shared_ptr<string> resourceDriftStatus_ = nullptr;
    // The logical ID of the resource defined in the template.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The ID of the stack.
    std::shared_ptr<string> stackId_ = nullptr;
    // The name of the stack.
    std::shared_ptr<string> stackName_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the resource was created.
    // 
    // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> statusReason_ = nullptr;
    // The name of the stack.
    // 
    // The name can be up to 255 characters in length, and can contain digits, letters, hyphens (-), and underscores (_). The name must start with a digit or letter.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
