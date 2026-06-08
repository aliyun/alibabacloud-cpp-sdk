// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODY_HPP_
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the stack.
      shared_ptr<string> key_ {};
      // The tag value of the stack.
      shared_ptr<string> value_ {};
    };

    class ResourceProgress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceProgress& obj) { 
        DARABONBA_PTR_TO_JSON(FailedResourceCount, failedResourceCount_);
        DARABONBA_PTR_TO_JSON(InProgressResourceCount, inProgressResourceCount_);
        DARABONBA_PTR_TO_JSON(InProgressResourceDetails, inProgressResourceDetails_);
        DARABONBA_PTR_TO_JSON(PendingResourceCount, pendingResourceCount_);
        DARABONBA_PTR_TO_JSON(StackActionProgress, stackActionProgress_);
        DARABONBA_PTR_TO_JSON(StackOperationProgress, stackOperationProgress_);
        DARABONBA_PTR_TO_JSON(SuccessResourceCount, successResourceCount_);
        DARABONBA_PTR_TO_JSON(TotalResourceCount, totalResourceCount_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceProgress& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedResourceCount, failedResourceCount_);
        DARABONBA_PTR_FROM_JSON(InProgressResourceCount, inProgressResourceCount_);
        DARABONBA_PTR_FROM_JSON(InProgressResourceDetails, inProgressResourceDetails_);
        DARABONBA_PTR_FROM_JSON(PendingResourceCount, pendingResourceCount_);
        DARABONBA_PTR_FROM_JSON(StackActionProgress, stackActionProgress_);
        DARABONBA_PTR_FROM_JSON(StackOperationProgress, stackOperationProgress_);
        DARABONBA_PTR_FROM_JSON(SuccessResourceCount, successResourceCount_);
        DARABONBA_PTR_FROM_JSON(TotalResourceCount, totalResourceCount_);
      };
      ResourceProgress() = default ;
      ResourceProgress(const ResourceProgress &) = default ;
      ResourceProgress(ResourceProgress &&) = default ;
      ResourceProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceProgress() = default ;
      ResourceProgress& operator=(const ResourceProgress &) = default ;
      ResourceProgress& operator=(ResourceProgress &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InProgressResourceDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InProgressResourceDetails& obj) { 
          DARABONBA_PTR_TO_JSON(ProgressTargetValue, progressTargetValue_);
          DARABONBA_PTR_TO_JSON(ProgressValue, progressValue_);
          DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, InProgressResourceDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(ProgressTargetValue, progressTargetValue_);
          DARABONBA_PTR_FROM_JSON(ProgressValue, progressValue_);
          DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        };
        InProgressResourceDetails() = default ;
        InProgressResourceDetails(const InProgressResourceDetails &) = default ;
        InProgressResourceDetails(InProgressResourceDetails &&) = default ;
        InProgressResourceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InProgressResourceDetails() = default ;
        InProgressResourceDetails& operator=(const InProgressResourceDetails &) = default ;
        InProgressResourceDetails& operator=(InProgressResourceDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->progressTargetValue_ == nullptr
        && this->progressValue_ == nullptr && this->resourceName_ == nullptr && this->resourceType_ == nullptr; };
        // progressTargetValue Field Functions 
        bool hasProgressTargetValue() const { return this->progressTargetValue_ != nullptr;};
        void deleteProgressTargetValue() { this->progressTargetValue_ = nullptr;};
        inline float getProgressTargetValue() const { DARABONBA_PTR_GET_DEFAULT(progressTargetValue_, 0.0) };
        inline InProgressResourceDetails& setProgressTargetValue(float progressTargetValue) { DARABONBA_PTR_SET_VALUE(progressTargetValue_, progressTargetValue) };


        // progressValue Field Functions 
        bool hasProgressValue() const { return this->progressValue_ != nullptr;};
        void deleteProgressValue() { this->progressValue_ = nullptr;};
        inline float getProgressValue() const { DARABONBA_PTR_GET_DEFAULT(progressValue_, 0.0) };
        inline InProgressResourceDetails& setProgressValue(float progressValue) { DARABONBA_PTR_SET_VALUE(progressValue_, progressValue) };


        // resourceName Field Functions 
        bool hasResourceName() const { return this->resourceName_ != nullptr;};
        void deleteResourceName() { this->resourceName_ = nullptr;};
        inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
        inline InProgressResourceDetails& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline InProgressResourceDetails& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        // The desired progress value of the resource.
        shared_ptr<float> progressTargetValue_ {};
        // The current progress value of the resource.
        shared_ptr<float> progressValue_ {};
        // The resource name.
        shared_ptr<string> resourceName_ {};
        // The resource type.
        shared_ptr<string> resourceType_ {};
      };

      virtual bool empty() const override { return this->failedResourceCount_ == nullptr
        && this->inProgressResourceCount_ == nullptr && this->inProgressResourceDetails_ == nullptr && this->pendingResourceCount_ == nullptr && this->stackActionProgress_ == nullptr && this->stackOperationProgress_ == nullptr
        && this->successResourceCount_ == nullptr && this->totalResourceCount_ == nullptr; };
      // failedResourceCount Field Functions 
      bool hasFailedResourceCount() const { return this->failedResourceCount_ != nullptr;};
      void deleteFailedResourceCount() { this->failedResourceCount_ = nullptr;};
      inline int32_t getFailedResourceCount() const { DARABONBA_PTR_GET_DEFAULT(failedResourceCount_, 0) };
      inline ResourceProgress& setFailedResourceCount(int32_t failedResourceCount) { DARABONBA_PTR_SET_VALUE(failedResourceCount_, failedResourceCount) };


      // inProgressResourceCount Field Functions 
      bool hasInProgressResourceCount() const { return this->inProgressResourceCount_ != nullptr;};
      void deleteInProgressResourceCount() { this->inProgressResourceCount_ = nullptr;};
      inline int32_t getInProgressResourceCount() const { DARABONBA_PTR_GET_DEFAULT(inProgressResourceCount_, 0) };
      inline ResourceProgress& setInProgressResourceCount(int32_t inProgressResourceCount) { DARABONBA_PTR_SET_VALUE(inProgressResourceCount_, inProgressResourceCount) };


      // inProgressResourceDetails Field Functions 
      bool hasInProgressResourceDetails() const { return this->inProgressResourceDetails_ != nullptr;};
      void deleteInProgressResourceDetails() { this->inProgressResourceDetails_ = nullptr;};
      inline const vector<ResourceProgress::InProgressResourceDetails> & getInProgressResourceDetails() const { DARABONBA_PTR_GET_CONST(inProgressResourceDetails_, vector<ResourceProgress::InProgressResourceDetails>) };
      inline vector<ResourceProgress::InProgressResourceDetails> getInProgressResourceDetails() { DARABONBA_PTR_GET(inProgressResourceDetails_, vector<ResourceProgress::InProgressResourceDetails>) };
      inline ResourceProgress& setInProgressResourceDetails(const vector<ResourceProgress::InProgressResourceDetails> & inProgressResourceDetails) { DARABONBA_PTR_SET_VALUE(inProgressResourceDetails_, inProgressResourceDetails) };
      inline ResourceProgress& setInProgressResourceDetails(vector<ResourceProgress::InProgressResourceDetails> && inProgressResourceDetails) { DARABONBA_PTR_SET_RVALUE(inProgressResourceDetails_, inProgressResourceDetails) };


      // pendingResourceCount Field Functions 
      bool hasPendingResourceCount() const { return this->pendingResourceCount_ != nullptr;};
      void deletePendingResourceCount() { this->pendingResourceCount_ = nullptr;};
      inline int32_t getPendingResourceCount() const { DARABONBA_PTR_GET_DEFAULT(pendingResourceCount_, 0) };
      inline ResourceProgress& setPendingResourceCount(int32_t pendingResourceCount) { DARABONBA_PTR_SET_VALUE(pendingResourceCount_, pendingResourceCount) };


      // stackActionProgress Field Functions 
      bool hasStackActionProgress() const { return this->stackActionProgress_ != nullptr;};
      void deleteStackActionProgress() { this->stackActionProgress_ = nullptr;};
      inline float getStackActionProgress() const { DARABONBA_PTR_GET_DEFAULT(stackActionProgress_, 0.0) };
      inline ResourceProgress& setStackActionProgress(float stackActionProgress) { DARABONBA_PTR_SET_VALUE(stackActionProgress_, stackActionProgress) };


      // stackOperationProgress Field Functions 
      bool hasStackOperationProgress() const { return this->stackOperationProgress_ != nullptr;};
      void deleteStackOperationProgress() { this->stackOperationProgress_ = nullptr;};
      inline float getStackOperationProgress() const { DARABONBA_PTR_GET_DEFAULT(stackOperationProgress_, 0.0) };
      inline ResourceProgress& setStackOperationProgress(float stackOperationProgress) { DARABONBA_PTR_SET_VALUE(stackOperationProgress_, stackOperationProgress) };


      // successResourceCount Field Functions 
      bool hasSuccessResourceCount() const { return this->successResourceCount_ != nullptr;};
      void deleteSuccessResourceCount() { this->successResourceCount_ = nullptr;};
      inline int32_t getSuccessResourceCount() const { DARABONBA_PTR_GET_DEFAULT(successResourceCount_, 0) };
      inline ResourceProgress& setSuccessResourceCount(int32_t successResourceCount) { DARABONBA_PTR_SET_VALUE(successResourceCount_, successResourceCount) };


      // totalResourceCount Field Functions 
      bool hasTotalResourceCount() const { return this->totalResourceCount_ != nullptr;};
      void deleteTotalResourceCount() { this->totalResourceCount_ = nullptr;};
      inline int32_t getTotalResourceCount() const { DARABONBA_PTR_GET_DEFAULT(totalResourceCount_, 0) };
      inline ResourceProgress& setTotalResourceCount(int32_t totalResourceCount) { DARABONBA_PTR_SET_VALUE(totalResourceCount_, totalResourceCount) };


    protected:
      // The number of resources that failed to be created.
      // 
      // >  This parameter is returned only if `ShowResourceProgress` is set to `EnabledIfCreateStack`.
      shared_ptr<int32_t> failedResourceCount_ {};
      // The number of resources that are being created.
      // 
      // >  This parameter is returned only if `ShowResourceProgress` is set to `EnabledIfCreateStack`.
      shared_ptr<int32_t> inProgressResourceCount_ {};
      // The progress details of resources that are being created.
      // 
      // >  This parameter is returned only if `ShowResourceProgress` is set to `EnabledIfCreateStack`.
      shared_ptr<vector<ResourceProgress::InProgressResourceDetails>> inProgressResourceDetails_ {};
      // The number of resources to be created.
      // 
      // >  This parameter is returned only if `ShowResourceProgress` is set to `EnabledIfCreateStack`.
      shared_ptr<int32_t> pendingResourceCount_ {};
      // The creation or rollback progress of the stack, in percentage. Valid values: 0 to 100.
      // 
      // The value progressively increases from 0 to 100 during a stack creation operation. If the stack is created, the value reaches 100. If the stack fails to be created, a rollback is started for the stack resources, and the value progressively increases from the percentage of the remaining progress (100 - Progress value generated when the stack fails to be created). The value increases to 100 when the stack resources are rolled back. This parameter indicates the creation progress during a stack creation operation and indicates the rollback progress during a stack rollback operation.
      // 
      // >  This parameter is returned only if `ShowResourceProgress` is set to `PercentageOnly`.
      shared_ptr<float> stackActionProgress_ {};
      // The overall creation progress of the stack, in percentage. Valid values: 0 to 100.
      // 
      // The value progressively increases from 0 to 100 during a stack creation operation. If the stack is created, the value reaches 100. If the stack fails to be created, a rollback is started for the stack resources, and the value progressively decreases. The value decreases to 0 when the stack resources are rolled back. This parameter indicates only the overall creation progress, regardless of whether during a stack creation or rollback operation.
      // 
      // >  This parameter is returned only if `ShowResourceProgress` is set to `PercentageOnly`.
      shared_ptr<float> stackOperationProgress_ {};
      // The number of resources that are created.
      // 
      // >  This parameter is returned only if `ShowResourceProgress` is set to `EnabledIfCreateStack`.
      shared_ptr<int32_t> successResourceCount_ {};
      // The total number of resources.
      // 
      // >  This parameter is returned only if `ShowResourceProgress` is set to `EnabledIfCreateStack`.
      shared_ptr<int32_t> totalResourceCount_ {};
    };

    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->parameterKey_ == nullptr
        && this->parameterValue_ == nullptr; };
      // parameterKey Field Functions 
      bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
      void deleteParameterKey() { this->parameterKey_ = nullptr;};
      inline string getParameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
      inline Parameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


      // parameterValue Field Functions 
      bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
      void deleteParameterValue() { this->parameterValue_ = nullptr;};
      inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
      inline Parameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    protected:
      // The parameter name.
      shared_ptr<string> parameterKey_ {};
      // The parameter value.
      shared_ptr<string> parameterValue_ {};
    };

    class OperationInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(LogicalResourceId, logicalResourceId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, OperationInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(LogicalResourceId, logicalResourceId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      OperationInfo() = default ;
      OperationInfo(const OperationInfo &) = default ;
      OperationInfo(OperationInfo &&) = default ;
      OperationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationInfo() = default ;
      OperationInfo& operator=(const OperationInfo &) = default ;
      OperationInfo& operator=(OperationInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->code_ == nullptr && this->logicalResourceId_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resourceType_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline OperationInfo& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline OperationInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // logicalResourceId Field Functions 
      bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
      void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
      inline string getLogicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceId_, "") };
      inline OperationInfo& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline OperationInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline OperationInfo& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline OperationInfo& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The name of the API operation that belongs to another Alibaba Cloud service.
      shared_ptr<string> action_ {};
      // The error code.
      shared_ptr<string> code_ {};
      // The logical ID of the resource on which the operation error occurs.
      shared_ptr<string> logicalResourceId_ {};
      // The error message.
      shared_ptr<string> message_ {};
      // The ID of the request that is initiated to call the API operation of another Alibaba Cloud service.
      shared_ptr<string> requestId_ {};
      // The type of the resource on which the operation error occurs.
      shared_ptr<string> resourceType_ {};
    };

    class Log : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Log& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceLogs, resourceLogs_);
        DARABONBA_PTR_TO_JSON(TerraformLogs, terraformLogs_);
      };
      friend void from_json(const Darabonba::Json& j, Log& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceLogs, resourceLogs_);
        DARABONBA_PTR_FROM_JSON(TerraformLogs, terraformLogs_);
      };
      Log() = default ;
      Log(const Log &) = default ;
      Log(Log &&) = default ;
      Log(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Log() = default ;
      Log& operator=(const Log &) = default ;
      Log& operator=(Log &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TerraformLogs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TerraformLogs& obj) { 
          DARABONBA_PTR_TO_JSON(Command, command_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Stream, stream_);
        };
        friend void from_json(const Darabonba::Json& j, TerraformLogs& obj) { 
          DARABONBA_PTR_FROM_JSON(Command, command_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Stream, stream_);
        };
        TerraformLogs() = default ;
        TerraformLogs(const TerraformLogs &) = default ;
        TerraformLogs(TerraformLogs &&) = default ;
        TerraformLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TerraformLogs() = default ;
        TerraformLogs& operator=(const TerraformLogs &) = default ;
        TerraformLogs& operator=(TerraformLogs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->command_ == nullptr
        && this->content_ == nullptr && this->stream_ == nullptr; };
        // command Field Functions 
        bool hasCommand() const { return this->command_ != nullptr;};
        void deleteCommand() { this->command_ = nullptr;};
        inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
        inline TerraformLogs& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline TerraformLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // stream Field Functions 
        bool hasStream() const { return this->stream_ != nullptr;};
        void deleteStream() { this->stream_ = nullptr;};
        inline string getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
        inline TerraformLogs& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


      protected:
        // The name of the Terraform command that is run. Valid values:
        // 
        // *   apply
        // *   plan
        // *   destroy
        // *   version
        // 
        // For more information about Terraform commands, see [Basic CLI Features](https://www.terraform.io/cli/commands).
        shared_ptr<string> command_ {};
        // The content of the output stream that is returned after the command is run.
        shared_ptr<string> content_ {};
        // The output stream. Valid values:
        // 
        // *   stdout: standard output stream
        // *   stderr: standard error stream
        shared_ptr<string> stream_ {};
      };

      class ResourceLogs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceLogs& obj) { 
          DARABONBA_PTR_TO_JSON(Logs, logs_);
          DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceLogs& obj) { 
          DARABONBA_PTR_FROM_JSON(Logs, logs_);
          DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
        };
        ResourceLogs() = default ;
        ResourceLogs(const ResourceLogs &) = default ;
        ResourceLogs(ResourceLogs &&) = default ;
        ResourceLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceLogs() = default ;
        ResourceLogs& operator=(const ResourceLogs &) = default ;
        ResourceLogs& operator=(ResourceLogs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Logs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Logs& obj) { 
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Keys, keys_);
          };
          friend void from_json(const Darabonba::Json& j, Logs& obj) { 
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Keys, keys_);
          };
          Logs() = default ;
          Logs(const Logs &) = default ;
          Logs(Logs &&) = default ;
          Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Logs() = default ;
          Logs& operator=(const Logs &) = default ;
          Logs& operator=(Logs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->content_ == nullptr
        && this->keys_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline Logs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // keys Field Functions 
          bool hasKeys() const { return this->keys_ != nullptr;};
          void deleteKeys() { this->keys_ = nullptr;};
          inline const vector<string> & getKeys() const { DARABONBA_PTR_GET_CONST(keys_, vector<string>) };
          inline vector<string> getKeys() { DARABONBA_PTR_GET(keys_, vector<string>) };
          inline Logs& setKeys(const vector<string> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
          inline Logs& setKeys(vector<string> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


        protected:
          // The content of a resource log.
          shared_ptr<string> content_ {};
          // The keywords of a resource log.
          shared_ptr<vector<string>> keys_ {};
        };

        virtual bool empty() const override { return this->logs_ == nullptr
        && this->resourceName_ == nullptr; };
        // logs Field Functions 
        bool hasLogs() const { return this->logs_ != nullptr;};
        void deleteLogs() { this->logs_ = nullptr;};
        inline const vector<ResourceLogs::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<ResourceLogs::Logs>) };
        inline vector<ResourceLogs::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<ResourceLogs::Logs>) };
        inline ResourceLogs& setLogs(const vector<ResourceLogs::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
        inline ResourceLogs& setLogs(vector<ResourceLogs::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


        // resourceName Field Functions 
        bool hasResourceName() const { return this->resourceName_ != nullptr;};
        void deleteResourceName() { this->resourceName_ = nullptr;};
        inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
        inline ResourceLogs& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      protected:
        // All the logs that are associated with the resources.
        shared_ptr<vector<ResourceLogs::Logs>> logs_ {};
        // The name of the resource that is defined in the template.
        shared_ptr<string> resourceName_ {};
      };

      virtual bool empty() const override { return this->resourceLogs_ == nullptr
        && this->terraformLogs_ == nullptr; };
      // resourceLogs Field Functions 
      bool hasResourceLogs() const { return this->resourceLogs_ != nullptr;};
      void deleteResourceLogs() { this->resourceLogs_ = nullptr;};
      inline const vector<Log::ResourceLogs> & getResourceLogs() const { DARABONBA_PTR_GET_CONST(resourceLogs_, vector<Log::ResourceLogs>) };
      inline vector<Log::ResourceLogs> getResourceLogs() { DARABONBA_PTR_GET(resourceLogs_, vector<Log::ResourceLogs>) };
      inline Log& setResourceLogs(const vector<Log::ResourceLogs> & resourceLogs) { DARABONBA_PTR_SET_VALUE(resourceLogs_, resourceLogs) };
      inline Log& setResourceLogs(vector<Log::ResourceLogs> && resourceLogs) { DARABONBA_PTR_SET_RVALUE(resourceLogs_, resourceLogs) };


      // terraformLogs Field Functions 
      bool hasTerraformLogs() const { return this->terraformLogs_ != nullptr;};
      void deleteTerraformLogs() { this->terraformLogs_ = nullptr;};
      inline const vector<Log::TerraformLogs> & getTerraformLogs() const { DARABONBA_PTR_GET_CONST(terraformLogs_, vector<Log::TerraformLogs>) };
      inline vector<Log::TerraformLogs> getTerraformLogs() { DARABONBA_PTR_GET(terraformLogs_, vector<Log::TerraformLogs>) };
      inline Log& setTerraformLogs(const vector<Log::TerraformLogs> & terraformLogs) { DARABONBA_PTR_SET_VALUE(terraformLogs_, terraformLogs) };
      inline Log& setTerraformLogs(vector<Log::TerraformLogs> && terraformLogs) { DARABONBA_PTR_SET_RVALUE(terraformLogs_, terraformLogs) };


    protected:
      // The logs of resources in the stack. This parameter is returned if LogOption is set to Resource or All.
      // 
      // >  The logs are returned only for resources of specific types, such as the `ALIYUN::ROS::ResourceCleaner` type.
      shared_ptr<vector<Log::ResourceLogs>> resourceLogs_ {};
      // The logs generated when the Terraform stack is run. This parameter is returned only for a Terraform stack. This parameter is returned if LogOption is left empty or set to Stack or All.
      // 
      // >  This parameter is not returned for a running stack. The logs are generated from the most recent operation on the stack, such as the creation, resumed creation, update, or deletion operation.
      shared_ptr<vector<Log::TerraformLogs>> terraformLogs_ {};
    };

    virtual bool empty() const override { return this->checkedStackResourceCount_ == nullptr
        && this->createTime_ == nullptr && this->deletionProtection_ == nullptr && this->description_ == nullptr && this->disableRollback_ == nullptr && this->driftDetectionTime_ == nullptr
        && this->interface_ == nullptr && this->log_ == nullptr && this->notCheckedStackResourceCount_ == nullptr && this->notificationURLs_ == nullptr && this->operationInfo_ == nullptr
        && this->orderIds_ == nullptr && this->outputs_ == nullptr && this->parameters_ == nullptr && this->parentStackId_ == nullptr && this->ramRoleName_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceProgress_ == nullptr && this->rollbackFailedRootReason_ == nullptr
        && this->rootStackId_ == nullptr && this->serviceManaged_ == nullptr && this->serviceName_ == nullptr && this->stackDriftStatus_ == nullptr && this->stackId_ == nullptr
        && this->stackName_ == nullptr && this->stackType_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr && this->tags_ == nullptr
        && this->templateDescription_ == nullptr && this->templateId_ == nullptr && this->templateScratchId_ == nullptr && this->templateURL_ == nullptr && this->templateVersion_ == nullptr
        && this->timeoutInMinutes_ == nullptr && this->updateTime_ == nullptr; };
    // checkedStackResourceCount Field Functions 
    bool hasCheckedStackResourceCount() const { return this->checkedStackResourceCount_ != nullptr;};
    void deleteCheckedStackResourceCount() { this->checkedStackResourceCount_ = nullptr;};
    inline int32_t getCheckedStackResourceCount() const { DARABONBA_PTR_GET_DEFAULT(checkedStackResourceCount_, 0) };
    inline GetStackResponseBody& setCheckedStackResourceCount(int32_t checkedStackResourceCount) { DARABONBA_PTR_SET_VALUE(checkedStackResourceCount_, checkedStackResourceCount) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetStackResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline string getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, "") };
    inline GetStackResponseBody& setDeletionProtection(string deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetStackResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableRollback Field Functions 
    bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
    void deleteDisableRollback() { this->disableRollback_ = nullptr;};
    inline bool getDisableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
    inline GetStackResponseBody& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


    // driftDetectionTime Field Functions 
    bool hasDriftDetectionTime() const { return this->driftDetectionTime_ != nullptr;};
    void deleteDriftDetectionTime() { this->driftDetectionTime_ = nullptr;};
    inline string getDriftDetectionTime() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionTime_, "") };
    inline GetStackResponseBody& setDriftDetectionTime(string driftDetectionTime) { DARABONBA_PTR_SET_VALUE(driftDetectionTime_, driftDetectionTime) };


    // interface Field Functions 
    bool hasInterface() const { return this->interface_ != nullptr;};
    void deleteInterface() { this->interface_ = nullptr;};
    inline string getInterface() const { DARABONBA_PTR_GET_DEFAULT(interface_, "") };
    inline GetStackResponseBody& setInterface(string interface) { DARABONBA_PTR_SET_VALUE(interface_, interface) };


    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline const GetStackResponseBody::Log & getLog() const { DARABONBA_PTR_GET_CONST(log_, GetStackResponseBody::Log) };
    inline GetStackResponseBody::Log getLog() { DARABONBA_PTR_GET(log_, GetStackResponseBody::Log) };
    inline GetStackResponseBody& setLog(const GetStackResponseBody::Log & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
    inline GetStackResponseBody& setLog(GetStackResponseBody::Log && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


    // notCheckedStackResourceCount Field Functions 
    bool hasNotCheckedStackResourceCount() const { return this->notCheckedStackResourceCount_ != nullptr;};
    void deleteNotCheckedStackResourceCount() { this->notCheckedStackResourceCount_ = nullptr;};
    inline int32_t getNotCheckedStackResourceCount() const { DARABONBA_PTR_GET_DEFAULT(notCheckedStackResourceCount_, 0) };
    inline GetStackResponseBody& setNotCheckedStackResourceCount(int32_t notCheckedStackResourceCount) { DARABONBA_PTR_SET_VALUE(notCheckedStackResourceCount_, notCheckedStackResourceCount) };


    // notificationURLs Field Functions 
    bool hasNotificationURLs() const { return this->notificationURLs_ != nullptr;};
    void deleteNotificationURLs() { this->notificationURLs_ = nullptr;};
    inline const vector<string> & getNotificationURLs() const { DARABONBA_PTR_GET_CONST(notificationURLs_, vector<string>) };
    inline vector<string> getNotificationURLs() { DARABONBA_PTR_GET(notificationURLs_, vector<string>) };
    inline GetStackResponseBody& setNotificationURLs(const vector<string> & notificationURLs) { DARABONBA_PTR_SET_VALUE(notificationURLs_, notificationURLs) };
    inline GetStackResponseBody& setNotificationURLs(vector<string> && notificationURLs) { DARABONBA_PTR_SET_RVALUE(notificationURLs_, notificationURLs) };


    // operationInfo Field Functions 
    bool hasOperationInfo() const { return this->operationInfo_ != nullptr;};
    void deleteOperationInfo() { this->operationInfo_ = nullptr;};
    inline const GetStackResponseBody::OperationInfo & getOperationInfo() const { DARABONBA_PTR_GET_CONST(operationInfo_, GetStackResponseBody::OperationInfo) };
    inline GetStackResponseBody::OperationInfo getOperationInfo() { DARABONBA_PTR_GET(operationInfo_, GetStackResponseBody::OperationInfo) };
    inline GetStackResponseBody& setOperationInfo(const GetStackResponseBody::OperationInfo & operationInfo) { DARABONBA_PTR_SET_VALUE(operationInfo_, operationInfo) };
    inline GetStackResponseBody& setOperationInfo(GetStackResponseBody::OperationInfo && operationInfo) { DARABONBA_PTR_SET_RVALUE(operationInfo_, operationInfo) };


    // orderIds Field Functions 
    bool hasOrderIds() const { return this->orderIds_ != nullptr;};
    void deleteOrderIds() { this->orderIds_ = nullptr;};
    inline const vector<string> & getOrderIds() const { DARABONBA_PTR_GET_CONST(orderIds_, vector<string>) };
    inline vector<string> getOrderIds() { DARABONBA_PTR_GET(orderIds_, vector<string>) };
    inline GetStackResponseBody& setOrderIds(const vector<string> & orderIds) { DARABONBA_PTR_SET_VALUE(orderIds_, orderIds) };
    inline GetStackResponseBody& setOrderIds(vector<string> && orderIds) { DARABONBA_PTR_SET_RVALUE(orderIds_, orderIds) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const vector<Darabonba::Json> & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getOutputs() { DARABONBA_PTR_GET(outputs_, vector<Darabonba::Json>) };
    inline GetStackResponseBody& setOutputs(const vector<Darabonba::Json> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline GetStackResponseBody& setOutputs(vector<Darabonba::Json> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<GetStackResponseBody::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<GetStackResponseBody::Parameters>) };
    inline vector<GetStackResponseBody::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<GetStackResponseBody::Parameters>) };
    inline GetStackResponseBody& setParameters(const vector<GetStackResponseBody::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetStackResponseBody& setParameters(vector<GetStackResponseBody::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // parentStackId Field Functions 
    bool hasParentStackId() const { return this->parentStackId_ != nullptr;};
    void deleteParentStackId() { this->parentStackId_ = nullptr;};
    inline string getParentStackId() const { DARABONBA_PTR_GET_DEFAULT(parentStackId_, "") };
    inline GetStackResponseBody& setParentStackId(string parentStackId) { DARABONBA_PTR_SET_VALUE(parentStackId_, parentStackId) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline GetStackResponseBody& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetStackResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetStackResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceProgress Field Functions 
    bool hasResourceProgress() const { return this->resourceProgress_ != nullptr;};
    void deleteResourceProgress() { this->resourceProgress_ = nullptr;};
    inline const GetStackResponseBody::ResourceProgress & getResourceProgress() const { DARABONBA_PTR_GET_CONST(resourceProgress_, GetStackResponseBody::ResourceProgress) };
    inline GetStackResponseBody::ResourceProgress getResourceProgress() { DARABONBA_PTR_GET(resourceProgress_, GetStackResponseBody::ResourceProgress) };
    inline GetStackResponseBody& setResourceProgress(const GetStackResponseBody::ResourceProgress & resourceProgress) { DARABONBA_PTR_SET_VALUE(resourceProgress_, resourceProgress) };
    inline GetStackResponseBody& setResourceProgress(GetStackResponseBody::ResourceProgress && resourceProgress) { DARABONBA_PTR_SET_RVALUE(resourceProgress_, resourceProgress) };


    // rollbackFailedRootReason Field Functions 
    bool hasRollbackFailedRootReason() const { return this->rollbackFailedRootReason_ != nullptr;};
    void deleteRollbackFailedRootReason() { this->rollbackFailedRootReason_ = nullptr;};
    inline string getRollbackFailedRootReason() const { DARABONBA_PTR_GET_DEFAULT(rollbackFailedRootReason_, "") };
    inline GetStackResponseBody& setRollbackFailedRootReason(string rollbackFailedRootReason) { DARABONBA_PTR_SET_VALUE(rollbackFailedRootReason_, rollbackFailedRootReason) };


    // rootStackId Field Functions 
    bool hasRootStackId() const { return this->rootStackId_ != nullptr;};
    void deleteRootStackId() { this->rootStackId_ = nullptr;};
    inline string getRootStackId() const { DARABONBA_PTR_GET_DEFAULT(rootStackId_, "") };
    inline GetStackResponseBody& setRootStackId(string rootStackId) { DARABONBA_PTR_SET_VALUE(rootStackId_, rootStackId) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline GetStackResponseBody& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetStackResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // stackDriftStatus Field Functions 
    bool hasStackDriftStatus() const { return this->stackDriftStatus_ != nullptr;};
    void deleteStackDriftStatus() { this->stackDriftStatus_ = nullptr;};
    inline string getStackDriftStatus() const { DARABONBA_PTR_GET_DEFAULT(stackDriftStatus_, "") };
    inline GetStackResponseBody& setStackDriftStatus(string stackDriftStatus) { DARABONBA_PTR_SET_VALUE(stackDriftStatus_, stackDriftStatus) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline GetStackResponseBody& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // stackName Field Functions 
    bool hasStackName() const { return this->stackName_ != nullptr;};
    void deleteStackName() { this->stackName_ = nullptr;};
    inline string getStackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
    inline GetStackResponseBody& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


    // stackType Field Functions 
    bool hasStackType() const { return this->stackType_ != nullptr;};
    void deleteStackType() { this->stackType_ = nullptr;};
    inline string getStackType() const { DARABONBA_PTR_GET_DEFAULT(stackType_, "") };
    inline GetStackResponseBody& setStackType(string stackType) { DARABONBA_PTR_SET_VALUE(stackType_, stackType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetStackResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline GetStackResponseBody& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetStackResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetStackResponseBody::Tags>) };
    inline vector<GetStackResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetStackResponseBody::Tags>) };
    inline GetStackResponseBody& setTags(const vector<GetStackResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetStackResponseBody& setTags(vector<GetStackResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateDescription Field Functions 
    bool hasTemplateDescription() const { return this->templateDescription_ != nullptr;};
    void deleteTemplateDescription() { this->templateDescription_ = nullptr;};
    inline string getTemplateDescription() const { DARABONBA_PTR_GET_DEFAULT(templateDescription_, "") };
    inline GetStackResponseBody& setTemplateDescription(string templateDescription) { DARABONBA_PTR_SET_VALUE(templateDescription_, templateDescription) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetStackResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateScratchId Field Functions 
    bool hasTemplateScratchId() const { return this->templateScratchId_ != nullptr;};
    void deleteTemplateScratchId() { this->templateScratchId_ = nullptr;};
    inline string getTemplateScratchId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchId_, "") };
    inline GetStackResponseBody& setTemplateScratchId(string templateScratchId) { DARABONBA_PTR_SET_VALUE(templateScratchId_, templateScratchId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string getTemplateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline GetStackResponseBody& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline GetStackResponseBody& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // timeoutInMinutes Field Functions 
    bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
    void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
    inline int32_t getTimeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0) };
    inline GetStackResponseBody& setTimeoutInMinutes(int32_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetStackResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The number of resources on which drift detection was performed.
    // 
    // >  This parameter is returned only if the most recent drift detection on the stack was successful.
    shared_ptr<int32_t> checkedStackResourceCount_ {};
    // The time when the stack was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    shared_ptr<string> createTime_ {};
    // Indicates whether deletion protection is enabled for the stack. Valid values:
    // 
    // *   Enabled: Deletion protection is enabled for the stack.
    // *   Disabled: Deletion protection is disabled for the stack. You can delete the stack by using the ROS console or by calling the DeleteStack operation.
    // 
    // >  Deletion protection of a nested stack is the same as deletion protection of its root stack.
    shared_ptr<string> deletionProtection_ {};
    // The description of the stack.
    shared_ptr<string> description_ {};
    // Indicates whether rollback is disabled when the stack fails to be created. Valid values:
    // 
    // *   true
    // *   false (default)
    shared_ptr<bool> disableRollback_ {};
    // The time when the most recent successful drift detection was performed on the stack.
    shared_ptr<string> driftDetectionTime_ {};
    // The description of the console user interface (UI).
    shared_ptr<string> interface_ {};
    // The log of the stack.
    shared_ptr<GetStackResponseBody::Log> log_ {};
    // The number of resources on which drift detection was not performed.
    // 
    // >  This parameter is returned only if the most recent drift detection on the stack was successful.
    shared_ptr<int32_t> notCheckedStackResourceCount_ {};
    // The callback URLs for receiving stack events.
    shared_ptr<vector<string>> notificationURLs_ {};
    // The supplementary information that is returned if an error occurs on a stack operation.
    // 
    // >  This parameter is returned together with at least one sub-parameter and only under specific conditions. For example, the supplementary information is returned when an API operation of another Alibaba Cloud service fails to be called.
    shared_ptr<GetStackResponseBody::OperationInfo> operationInfo_ {};
    // The order IDs. This parameter is returned only if you configured manual payment when you created a subscription stack.
    shared_ptr<vector<string>> orderIds_ {};
    // The outputs of the stack.
    shared_ptr<vector<Darabonba::Json>> outputs_ {};
    // The parameters of the stack.
    shared_ptr<vector<GetStackResponseBody::Parameters>> parameters_ {};
    // The ID of the parent stack.
    shared_ptr<string> parentStackId_ {};
    // The name of the Resource Access Management (RAM) role. ROS assumes the RAM role to create the stack and uses the credentials of the role to call the APIs of Alibaba Cloud services.\\
    // ROS assumes the RAM role to perform operations on the stack. If you have permissions to perform operations on the stack, ROS assumes the RAM role even if you do not have permissions to use the RAM role. You must make sure that permissions are granted to the RAM role based on the principle of least privilege.\\
    // If this parameter is not specified, ROS uses the existing role that is associated with the stack. If no roles are available, ROS uses a temporary credential that is generated from the credentials of your account.\\
    // The RAM role name can be up to 64 characters in length.
    shared_ptr<string> ramRoleName_ {};
    // The region ID of the stack. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The resource creation progress.
    shared_ptr<GetStackResponseBody::ResourceProgress> resourceProgress_ {};
    // 当资源栈状态为回滚失败时，该字段展示导致回滚的前一阶段执行失败的原因。
    shared_ptr<string> rollbackFailedRootReason_ {};
    // The ID of the root stack. This parameter is returned if the specified stack is a nested stack.
    shared_ptr<string> rootStackId_ {};
    // Indicates whether the stack is a managed stack. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> serviceManaged_ {};
    // The name of the service to which the managed stack belongs.
    shared_ptr<string> serviceName_ {};
    // The state of the stack on which the most recent successful drift detection was performed. Valid values:
    // 
    // *   DRIFTED: The stack has drifted.
    // *   NOT_CHECKED: No successful drift detection is performed on the stack.
    // *   IN_SYNC: The stack is being synchronized.
    shared_ptr<string> stackDriftStatus_ {};
    // The stack ID.
    shared_ptr<string> stackId_ {};
    // The stack name.\\
    // The name can be up to 255 characters in length, and can contain digits, letters, hyphens (-), and underscores (_). The name must start with a digit or letter.
    shared_ptr<string> stackName_ {};
    // The stack type. Valid values:
    // 
    // *   ROS: ROS stack. The stack is created by using a ROS template.
    // *   Terraform: Terraform stack. The stack is created by using a Terraform template.
    shared_ptr<string> stackType_ {};
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
    shared_ptr<string> status_ {};
    // The reason why the stack is in its current state.
    shared_ptr<string> statusReason_ {};
    // The tags of the stack.
    shared_ptr<vector<GetStackResponseBody::Tags>> tags_ {};
    // The description of the template.
    shared_ptr<string> templateDescription_ {};
    // The template ID. This parameter is returned only if the current stack template is a custom template or shared template.
    // 
    // If the template is a shared template, the value of this parameter is the same as the value of TemplateARN.
    shared_ptr<string> templateId_ {};
    // The ID of the resource scenario. This parameter is returned only if the current template of the stack is generated from a resource scenario.
    shared_ptr<string> templateScratchId_ {};
    // The URL of the file that contains the template body. This parameter is returned only if the current template of the stack is from a URL. The URL can point to a template that is located on an HTTP or HTTPS web server or in an Object Storage Service (OSS) bucket.
    shared_ptr<string> templateURL_ {};
    // The version of the template. This parameter is returned only if the current stack template is a custom template or shared template.
    // 
    // If the template is a shared template, this parameter is returned only if VersionOption is set to AllVersions.
    // 
    // Valid values: v1 to v100.
    shared_ptr<string> templateVersion_ {};
    // The timeout period for creating the stack. Unit: minutes.
    shared_ptr<int32_t> timeoutInMinutes_ {};
    // The time when the stack was updated. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
