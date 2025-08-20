// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStackResponseBodyLog.hpp>
#include <vector>
#include <alibabacloud/models/GetStackResponseBodyOperationInfo.hpp>
#include <alibabacloud/models/GetStackResponseBodyParameters.hpp>
#include <alibabacloud/models/GetStackResponseBodyResourceProgress.hpp>
#include <alibabacloud/models/GetStackResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckedStackResourceCount, checkedStackResourceCount_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_TO_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_TO_JSON(Interface, interface_);
      DARABONBA_PTR_TO_JSON(Log, log_);
      DARABONBA_PTR_TO_JSON(NotCheckedStackResourceCount, notCheckedStackResourceCount_);
      DARABONBA_PTR_TO_JSON(NotificationURLs, notificationURLs_);
      DARABONBA_PTR_TO_JSON(OperationInfo, operationInfo_);
      DARABONBA_PTR_TO_JSON(OrderIds, orderIds_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ParentStackId, parentStackId_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceProgress, resourceProgress_);
      DARABONBA_PTR_TO_JSON(RollbackFailedRootReason, rollbackFailedRootReason_);
      DARABONBA_PTR_TO_JSON(RootStackId, rootStackId_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(StackDriftStatus, stackDriftStatus_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(StackName, stackName_);
      DARABONBA_PTR_TO_JSON(StackType, stackType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateDescription, templateDescription_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateScratchId, templateScratchId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(TimeoutInMinutes, timeoutInMinutes_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckedStackResourceCount, checkedStackResourceCount_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_FROM_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_FROM_JSON(Interface, interface_);
      DARABONBA_PTR_FROM_JSON(Log, log_);
      DARABONBA_PTR_FROM_JSON(NotCheckedStackResourceCount, notCheckedStackResourceCount_);
      DARABONBA_PTR_FROM_JSON(NotificationURLs, notificationURLs_);
      DARABONBA_PTR_FROM_JSON(OperationInfo, operationInfo_);
      DARABONBA_PTR_FROM_JSON(OrderIds, orderIds_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ParentStackId, parentStackId_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceProgress, resourceProgress_);
      DARABONBA_PTR_FROM_JSON(RollbackFailedRootReason, rollbackFailedRootReason_);
      DARABONBA_PTR_FROM_JSON(RootStackId, rootStackId_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(StackDriftStatus, stackDriftStatus_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(StackName, stackName_);
      DARABONBA_PTR_FROM_JSON(StackType, stackType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateDescription, templateDescription_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchId, templateScratchId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(TimeoutInMinutes, timeoutInMinutes_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetStackResponseBody() = default ;
    GetStackResponseBody(const GetStackResponseBody &) = default ;
    GetStackResponseBody(GetStackResponseBody &&) = default ;
    GetStackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackResponseBody() = default ;
    GetStackResponseBody& operator=(const GetStackResponseBody &) = default ;
    GetStackResponseBody& operator=(GetStackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkedStackResourceCount_ != nullptr
        && this->createTime_ != nullptr && this->deletionProtection_ != nullptr && this->description_ != nullptr && this->disableRollback_ != nullptr && this->driftDetectionTime_ != nullptr
        && this->interface_ != nullptr && this->log_ != nullptr && this->notCheckedStackResourceCount_ != nullptr && this->notificationURLs_ != nullptr && this->operationInfo_ != nullptr
        && this->orderIds_ != nullptr && this->outputs_ != nullptr && this->parameters_ != nullptr && this->parentStackId_ != nullptr && this->ramRoleName_ != nullptr
        && this->regionId_ != nullptr && this->requestId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceProgress_ != nullptr && this->rollbackFailedRootReason_ != nullptr
        && this->rootStackId_ != nullptr && this->serviceManaged_ != nullptr && this->serviceName_ != nullptr && this->stackDriftStatus_ != nullptr && this->stackId_ != nullptr
        && this->stackName_ != nullptr && this->stackType_ != nullptr && this->status_ != nullptr && this->statusReason_ != nullptr && this->tags_ != nullptr
        && this->templateDescription_ != nullptr && this->templateId_ != nullptr && this->templateScratchId_ != nullptr && this->templateURL_ != nullptr && this->templateVersion_ != nullptr
        && this->timeoutInMinutes_ != nullptr && this->updateTime_ != nullptr; };
    // checkedStackResourceCount Field Functions 
    bool hasCheckedStackResourceCount() const { return this->checkedStackResourceCount_ != nullptr;};
    void deleteCheckedStackResourceCount() { this->checkedStackResourceCount_ = nullptr;};
    inline int32_t checkedStackResourceCount() const { DARABONBA_PTR_GET_DEFAULT(checkedStackResourceCount_, 0) };
    inline GetStackResponseBody& setCheckedStackResourceCount(int32_t checkedStackResourceCount) { DARABONBA_PTR_SET_VALUE(checkedStackResourceCount_, checkedStackResourceCount) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetStackResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline string deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, "") };
    inline GetStackResponseBody& setDeletionProtection(string deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetStackResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableRollback Field Functions 
    bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
    void deleteDisableRollback() { this->disableRollback_ = nullptr;};
    inline bool disableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
    inline GetStackResponseBody& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


    // driftDetectionTime Field Functions 
    bool hasDriftDetectionTime() const { return this->driftDetectionTime_ != nullptr;};
    void deleteDriftDetectionTime() { this->driftDetectionTime_ = nullptr;};
    inline string driftDetectionTime() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionTime_, "") };
    inline GetStackResponseBody& setDriftDetectionTime(string driftDetectionTime) { DARABONBA_PTR_SET_VALUE(driftDetectionTime_, driftDetectionTime) };


    // interface Field Functions 
    bool hasInterface() const { return this->interface_ != nullptr;};
    void deleteInterface() { this->interface_ = nullptr;};
    inline string interface() const { DARABONBA_PTR_GET_DEFAULT(interface_, "") };
    inline GetStackResponseBody& setInterface(string interface) { DARABONBA_PTR_SET_VALUE(interface_, interface) };


    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline const GetStackResponseBodyLog & log() const { DARABONBA_PTR_GET_CONST(log_, GetStackResponseBodyLog) };
    inline GetStackResponseBodyLog log() { DARABONBA_PTR_GET(log_, GetStackResponseBodyLog) };
    inline GetStackResponseBody& setLog(const GetStackResponseBodyLog & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
    inline GetStackResponseBody& setLog(GetStackResponseBodyLog && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


    // notCheckedStackResourceCount Field Functions 
    bool hasNotCheckedStackResourceCount() const { return this->notCheckedStackResourceCount_ != nullptr;};
    void deleteNotCheckedStackResourceCount() { this->notCheckedStackResourceCount_ = nullptr;};
    inline int32_t notCheckedStackResourceCount() const { DARABONBA_PTR_GET_DEFAULT(notCheckedStackResourceCount_, 0) };
    inline GetStackResponseBody& setNotCheckedStackResourceCount(int32_t notCheckedStackResourceCount) { DARABONBA_PTR_SET_VALUE(notCheckedStackResourceCount_, notCheckedStackResourceCount) };


    // notificationURLs Field Functions 
    bool hasNotificationURLs() const { return this->notificationURLs_ != nullptr;};
    void deleteNotificationURLs() { this->notificationURLs_ = nullptr;};
    inline const vector<string> & notificationURLs() const { DARABONBA_PTR_GET_CONST(notificationURLs_, vector<string>) };
    inline vector<string> notificationURLs() { DARABONBA_PTR_GET(notificationURLs_, vector<string>) };
    inline GetStackResponseBody& setNotificationURLs(const vector<string> & notificationURLs) { DARABONBA_PTR_SET_VALUE(notificationURLs_, notificationURLs) };
    inline GetStackResponseBody& setNotificationURLs(vector<string> && notificationURLs) { DARABONBA_PTR_SET_RVALUE(notificationURLs_, notificationURLs) };


    // operationInfo Field Functions 
    bool hasOperationInfo() const { return this->operationInfo_ != nullptr;};
    void deleteOperationInfo() { this->operationInfo_ = nullptr;};
    inline const GetStackResponseBodyOperationInfo & operationInfo() const { DARABONBA_PTR_GET_CONST(operationInfo_, GetStackResponseBodyOperationInfo) };
    inline GetStackResponseBodyOperationInfo operationInfo() { DARABONBA_PTR_GET(operationInfo_, GetStackResponseBodyOperationInfo) };
    inline GetStackResponseBody& setOperationInfo(const GetStackResponseBodyOperationInfo & operationInfo) { DARABONBA_PTR_SET_VALUE(operationInfo_, operationInfo) };
    inline GetStackResponseBody& setOperationInfo(GetStackResponseBodyOperationInfo && operationInfo) { DARABONBA_PTR_SET_RVALUE(operationInfo_, operationInfo) };


    // orderIds Field Functions 
    bool hasOrderIds() const { return this->orderIds_ != nullptr;};
    void deleteOrderIds() { this->orderIds_ = nullptr;};
    inline const vector<string> & orderIds() const { DARABONBA_PTR_GET_CONST(orderIds_, vector<string>) };
    inline vector<string> orderIds() { DARABONBA_PTR_GET(orderIds_, vector<string>) };
    inline GetStackResponseBody& setOrderIds(const vector<string> & orderIds) { DARABONBA_PTR_SET_VALUE(orderIds_, orderIds) };
    inline GetStackResponseBody& setOrderIds(vector<string> && orderIds) { DARABONBA_PTR_SET_RVALUE(orderIds_, orderIds) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const vector<Darabonba::Json> & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> outputs() { DARABONBA_PTR_GET(outputs_, vector<Darabonba::Json>) };
    inline GetStackResponseBody& setOutputs(const vector<Darabonba::Json> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline GetStackResponseBody& setOutputs(vector<Darabonba::Json> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<GetStackResponseBodyParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<GetStackResponseBodyParameters>) };
    inline vector<GetStackResponseBodyParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<GetStackResponseBodyParameters>) };
    inline GetStackResponseBody& setParameters(const vector<GetStackResponseBodyParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetStackResponseBody& setParameters(vector<GetStackResponseBodyParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // parentStackId Field Functions 
    bool hasParentStackId() const { return this->parentStackId_ != nullptr;};
    void deleteParentStackId() { this->parentStackId_ = nullptr;};
    inline string parentStackId() const { DARABONBA_PTR_GET_DEFAULT(parentStackId_, "") };
    inline GetStackResponseBody& setParentStackId(string parentStackId) { DARABONBA_PTR_SET_VALUE(parentStackId_, parentStackId) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline GetStackResponseBody& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetStackResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetStackResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceProgress Field Functions 
    bool hasResourceProgress() const { return this->resourceProgress_ != nullptr;};
    void deleteResourceProgress() { this->resourceProgress_ = nullptr;};
    inline const GetStackResponseBodyResourceProgress & resourceProgress() const { DARABONBA_PTR_GET_CONST(resourceProgress_, GetStackResponseBodyResourceProgress) };
    inline GetStackResponseBodyResourceProgress resourceProgress() { DARABONBA_PTR_GET(resourceProgress_, GetStackResponseBodyResourceProgress) };
    inline GetStackResponseBody& setResourceProgress(const GetStackResponseBodyResourceProgress & resourceProgress) { DARABONBA_PTR_SET_VALUE(resourceProgress_, resourceProgress) };
    inline GetStackResponseBody& setResourceProgress(GetStackResponseBodyResourceProgress && resourceProgress) { DARABONBA_PTR_SET_RVALUE(resourceProgress_, resourceProgress) };


    // rollbackFailedRootReason Field Functions 
    bool hasRollbackFailedRootReason() const { return this->rollbackFailedRootReason_ != nullptr;};
    void deleteRollbackFailedRootReason() { this->rollbackFailedRootReason_ = nullptr;};
    inline string rollbackFailedRootReason() const { DARABONBA_PTR_GET_DEFAULT(rollbackFailedRootReason_, "") };
    inline GetStackResponseBody& setRollbackFailedRootReason(string rollbackFailedRootReason) { DARABONBA_PTR_SET_VALUE(rollbackFailedRootReason_, rollbackFailedRootReason) };


    // rootStackId Field Functions 
    bool hasRootStackId() const { return this->rootStackId_ != nullptr;};
    void deleteRootStackId() { this->rootStackId_ = nullptr;};
    inline string rootStackId() const { DARABONBA_PTR_GET_DEFAULT(rootStackId_, "") };
    inline GetStackResponseBody& setRootStackId(string rootStackId) { DARABONBA_PTR_SET_VALUE(rootStackId_, rootStackId) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool serviceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline GetStackResponseBody& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetStackResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // stackDriftStatus Field Functions 
    bool hasStackDriftStatus() const { return this->stackDriftStatus_ != nullptr;};
    void deleteStackDriftStatus() { this->stackDriftStatus_ = nullptr;};
    inline string stackDriftStatus() const { DARABONBA_PTR_GET_DEFAULT(stackDriftStatus_, "") };
    inline GetStackResponseBody& setStackDriftStatus(string stackDriftStatus) { DARABONBA_PTR_SET_VALUE(stackDriftStatus_, stackDriftStatus) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline GetStackResponseBody& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // stackName Field Functions 
    bool hasStackName() const { return this->stackName_ != nullptr;};
    void deleteStackName() { this->stackName_ = nullptr;};
    inline string stackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
    inline GetStackResponseBody& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


    // stackType Field Functions 
    bool hasStackType() const { return this->stackType_ != nullptr;};
    void deleteStackType() { this->stackType_ = nullptr;};
    inline string stackType() const { DARABONBA_PTR_GET_DEFAULT(stackType_, "") };
    inline GetStackResponseBody& setStackType(string stackType) { DARABONBA_PTR_SET_VALUE(stackType_, stackType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetStackResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline GetStackResponseBody& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetStackResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetStackResponseBodyTags>) };
    inline vector<GetStackResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetStackResponseBodyTags>) };
    inline GetStackResponseBody& setTags(const vector<GetStackResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetStackResponseBody& setTags(vector<GetStackResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateDescription Field Functions 
    bool hasTemplateDescription() const { return this->templateDescription_ != nullptr;};
    void deleteTemplateDescription() { this->templateDescription_ = nullptr;};
    inline string templateDescription() const { DARABONBA_PTR_GET_DEFAULT(templateDescription_, "") };
    inline GetStackResponseBody& setTemplateDescription(string templateDescription) { DARABONBA_PTR_SET_VALUE(templateDescription_, templateDescription) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetStackResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateScratchId Field Functions 
    bool hasTemplateScratchId() const { return this->templateScratchId_ != nullptr;};
    void deleteTemplateScratchId() { this->templateScratchId_ = nullptr;};
    inline string templateScratchId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchId_, "") };
    inline GetStackResponseBody& setTemplateScratchId(string templateScratchId) { DARABONBA_PTR_SET_VALUE(templateScratchId_, templateScratchId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline GetStackResponseBody& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline GetStackResponseBody& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // timeoutInMinutes Field Functions 
    bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
    void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
    inline int32_t timeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0) };
    inline GetStackResponseBody& setTimeoutInMinutes(int32_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetStackResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The number of resources on which drift detection was performed.
    // 
    // >  This parameter is returned only if the most recent drift detection on the stack was successful.
    std::shared_ptr<int32_t> checkedStackResourceCount_ = nullptr;
    // The time when the stack was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether deletion protection is enabled for the stack. Valid values:
    // 
    // *   Enabled: Deletion protection is enabled for the stack.
    // *   Disabled: Deletion protection is disabled for the stack. You can delete the stack by using the ROS console or by calling the DeleteStack operation.
    // 
    // >  Deletion protection of a nested stack is the same as deletion protection of its root stack.
    std::shared_ptr<string> deletionProtection_ = nullptr;
    // The description of the stack.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether rollback is disabled when the stack fails to be created. Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> disableRollback_ = nullptr;
    // The time when the most recent successful drift detection was performed on the stack.
    std::shared_ptr<string> driftDetectionTime_ = nullptr;
    // The description of the console user interface (UI).
    std::shared_ptr<string> interface_ = nullptr;
    // The log of the stack.
    std::shared_ptr<GetStackResponseBodyLog> log_ = nullptr;
    // The number of resources on which drift detection was not performed.
    // 
    // >  This parameter is returned only if the most recent drift detection on the stack was successful.
    std::shared_ptr<int32_t> notCheckedStackResourceCount_ = nullptr;
    // The callback URLs for receiving stack events.
    std::shared_ptr<vector<string>> notificationURLs_ = nullptr;
    // The supplementary information that is returned if an error occurs on a stack operation.
    // 
    // >  This parameter is returned together with at least one sub-parameter and only under specific conditions. For example, the supplementary information is returned when an API operation of another Alibaba Cloud service fails to be called.
    std::shared_ptr<GetStackResponseBodyOperationInfo> operationInfo_ = nullptr;
    // The order IDs. This parameter is returned only if you configured manual payment when you created a subscription stack.
    std::shared_ptr<vector<string>> orderIds_ = nullptr;
    // The outputs of the stack.
    std::shared_ptr<vector<Darabonba::Json>> outputs_ = nullptr;
    // The parameters of the stack.
    std::shared_ptr<vector<GetStackResponseBodyParameters>> parameters_ = nullptr;
    // The ID of the parent stack.
    std::shared_ptr<string> parentStackId_ = nullptr;
    // The name of the Resource Access Management (RAM) role. ROS assumes the RAM role to create the stack and uses the credentials of the role to call the APIs of Alibaba Cloud services.\\
    // ROS assumes the RAM role to perform operations on the stack. If you have permissions to perform operations on the stack, ROS assumes the RAM role even if you do not have permissions to use the RAM role. You must make sure that permissions are granted to the RAM role based on the principle of least privilege.\\
    // If this parameter is not specified, ROS uses the existing role that is associated with the stack. If no roles are available, ROS uses a temporary credential that is generated from the credentials of your account.\\
    // The RAM role name can be up to 64 characters in length.
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // The region ID of the stack. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The resource creation progress.
    std::shared_ptr<GetStackResponseBodyResourceProgress> resourceProgress_ = nullptr;
    // 当资源栈状态为回滚失败时，该字段展示导致回滚的前一阶段执行失败的原因。
    std::shared_ptr<string> rollbackFailedRootReason_ = nullptr;
    // The ID of the root stack. This parameter is returned if the specified stack is a nested stack.
    std::shared_ptr<string> rootStackId_ = nullptr;
    // Indicates whether the stack is a managed stack. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> serviceManaged_ = nullptr;
    // The name of the service to which the managed stack belongs.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The state of the stack on which the most recent successful drift detection was performed. Valid values:
    // 
    // *   DRIFTED: The stack has drifted.
    // *   NOT_CHECKED: No successful drift detection is performed on the stack.
    // *   IN_SYNC: The stack is being synchronized.
    std::shared_ptr<string> stackDriftStatus_ = nullptr;
    // The stack ID.
    std::shared_ptr<string> stackId_ = nullptr;
    // The stack name.\\
    // The name can be up to 255 characters in length, and can contain digits, letters, hyphens (-), and underscores (_). The name must start with a digit or letter.
    std::shared_ptr<string> stackName_ = nullptr;
    // The stack type. Valid values:
    // 
    // *   ROS: ROS stack. The stack is created by using a ROS template.
    // *   Terraform: Terraform stack. The stack is created by using a Terraform template.
    std::shared_ptr<string> stackType_ = nullptr;
    // The state of the stack. Valid values:
    // 
    // *   CREATE_IN_PROGRESS: The stack is being created.
    // *   CREATE_FAILED: The stack failed to be created.
    // *   CREATE_COMPLETE: The stack is created.
    // *   UPDATE_IN_PROGRESS: The stack is being updated.
    // *   UPDATE_FAILED: The stack failed to be updated.
    // *   UPDATE_COMPLETE: The stack is updated.
    // *   DELETE_IN_PROGRESS: The stack is being deleted.
    // *   DELETE_FAILED: The stack failed to be deleted.
    // *   CREATE_ROLLBACK_IN_PROGRESS: The resources are being rolled back after the stack failed to be created.
    // *   CREATE_ROLLBACK_FAILED: The resources failed to be rolled back after the stack failed to be created.
    // *   CREATE_ROLLBACK_COMPLETE: The resources are rolled back after the stack failed to be created.
    // *   ROLLBACK_IN_PROGRESS: The resources of the stack are being rolled back.
    // *   ROLLBACK_FAILED: The resources of the stack failed to be rolled back.
    // *   ROLLBACK_COMPLETE: The resources of the stack are rolled back.
    // *   CHECK_IN_PROGRESS: The stack is being validated.
    // *   CHECK_FAILED: The stack failed to be validated.
    // *   CHECK_COMPLETE: The stack is validated.
    // *   REVIEW_IN_PROGRESS: The stack is being reviewed.
    // *   IMPORT_CREATE_IN_PROGRESS: The stack is being created by using imported resources.
    // *   IMPORT_CREATE_FAILED: The stack failed to be created by using imported resources.
    // *   IMPORT_CREATE_COMPLETE: The stack is created by using imported resources.
    // *   IMPORT_CREATE_ROLLBACK_IN_PROGRESS: The resources are being rolled back after the stack failed to be created by using imported resources.
    // *   IMPORT_CREATE_ROLLBACK_FAILED: The resources failed to be rolled back after the stack failed to be created by using imported resources.
    // *   IMPORT_CREATE_ROLLBACK_COMPLETE: The resources are rolled back after the stack failed to be created by using imported resources.
    // *   IMPORT_UPDATE_IN_PROGRESS: The stack is being updated by using imported resources.
    // *   IMPORT_UPDATE_FAILED: The stack failed to be updated by using imported resources.
    // *   IMPORT_UPDATE_COMPLETE: The stack is updated by using imported resources.
    // *   IMPORT_UPDATE_ROLLBACK_IN_PROGRESS: The resources are being rolled back after the stack failed to be updated by using imported resources.
    // *   IMPORT_UPDATE_ROLLBACK_FAILED: The resources failed to be rolled back after the stack failed to be updated by using imported resources.
    // *   IMPORT_UPDATE_ROLLBACK_COMPLETE: The resources are rolled back after the stack failed to be updated by using imported resources.
    std::shared_ptr<string> status_ = nullptr;
    // The reason why the stack is in its current state.
    std::shared_ptr<string> statusReason_ = nullptr;
    // The tags of the stack.
    std::shared_ptr<vector<GetStackResponseBodyTags>> tags_ = nullptr;
    // The description of the template.
    std::shared_ptr<string> templateDescription_ = nullptr;
    // The template ID. This parameter is returned only if the current stack template is a custom template or shared template.
    // 
    // If the template is a shared template, the value of this parameter is the same as the value of TemplateARN.
    std::shared_ptr<string> templateId_ = nullptr;
    // The ID of the resource scenario. This parameter is returned only if the current template of the stack is generated from a resource scenario.
    std::shared_ptr<string> templateScratchId_ = nullptr;
    // The URL of the file that contains the template body. This parameter is returned only if the current template of the stack is from a URL. The URL can point to a template that is located on an HTTP or HTTPS web server or in an Object Storage Service (OSS) bucket.
    std::shared_ptr<string> templateURL_ = nullptr;
    // The version of the template. This parameter is returned only if the current stack template is a custom template or shared template.
    // 
    // If the template is a shared template, this parameter is returned only if VersionOption is set to AllVersions.
    // 
    // Valid values: v1 to v100.
    std::shared_ptr<string> templateVersion_ = nullptr;
    // The timeout period for creating the stack. Unit: minutes.
    std::shared_ptr<int32_t> timeoutInMinutes_ = nullptr;
    // The time when the stack was updated. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
