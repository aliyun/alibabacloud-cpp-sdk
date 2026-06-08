// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKGROUPOPERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKGROUPOPERATIONRESPONSEBODY_HPP_
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
  class GetStackGroupOperationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackGroupOperationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackGroupOperation, stackGroupOperation_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackGroupOperationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackGroupOperation, stackGroupOperation_);
    };
    GetStackGroupOperationResponseBody() = default ;
    GetStackGroupOperationResponseBody(const GetStackGroupOperationResponseBody &) = default ;
    GetStackGroupOperationResponseBody(GetStackGroupOperationResponseBody &&) = default ;
    GetStackGroupOperationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackGroupOperationResponseBody() = default ;
    GetStackGroupOperationResponseBody& operator=(const GetStackGroupOperationResponseBody &) = default ;
    GetStackGroupOperationResponseBody& operator=(GetStackGroupOperationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StackGroupOperation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StackGroupOperation& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(AdministrationRoleName, administrationRoleName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DeploymentTargets, deploymentTargets_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ExecutionRoleName, executionRoleName_);
        DARABONBA_PTR_TO_JSON(OperationDescription, operationDescription_);
        DARABONBA_PTR_TO_JSON(OperationId, operationId_);
        DARABONBA_PTR_TO_JSON(OperationPreferences, operationPreferences_);
        DARABONBA_PTR_TO_JSON(RetainStacks, retainStacks_);
        DARABONBA_PTR_TO_JSON(StackGroupDriftDetectionDetail, stackGroupDriftDetectionDetail_);
        DARABONBA_PTR_TO_JSON(StackGroupId, stackGroupId_);
        DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, StackGroupOperation& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(AdministrationRoleName, administrationRoleName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DeploymentTargets, deploymentTargets_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ExecutionRoleName, executionRoleName_);
        DARABONBA_PTR_FROM_JSON(OperationDescription, operationDescription_);
        DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
        DARABONBA_PTR_FROM_JSON(OperationPreferences, operationPreferences_);
        DARABONBA_PTR_FROM_JSON(RetainStacks, retainStacks_);
        DARABONBA_PTR_FROM_JSON(StackGroupDriftDetectionDetail, stackGroupDriftDetectionDetail_);
        DARABONBA_PTR_FROM_JSON(StackGroupId, stackGroupId_);
        DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      StackGroupOperation() = default ;
      StackGroupOperation(const StackGroupOperation &) = default ;
      StackGroupOperation(StackGroupOperation &&) = default ;
      StackGroupOperation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StackGroupOperation() = default ;
      StackGroupOperation& operator=(const StackGroupOperation &) = default ;
      StackGroupOperation& operator=(StackGroupOperation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StackGroupDriftDetectionDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StackGroupDriftDetectionDetail& obj) { 
          DARABONBA_PTR_TO_JSON(CancelledStackInstancesCount, cancelledStackInstancesCount_);
          DARABONBA_PTR_TO_JSON(DriftDetectionStatus, driftDetectionStatus_);
          DARABONBA_PTR_TO_JSON(DriftDetectionTime, driftDetectionTime_);
          DARABONBA_PTR_TO_JSON(DriftedStackInstancesCount, driftedStackInstancesCount_);
          DARABONBA_PTR_TO_JSON(FailedStackInstancesCount, failedStackInstancesCount_);
          DARABONBA_PTR_TO_JSON(InProgressStackInstancesCount, inProgressStackInstancesCount_);
          DARABONBA_PTR_TO_JSON(InSyncStackInstancesCount, inSyncStackInstancesCount_);
          DARABONBA_PTR_TO_JSON(StackGroupDriftStatus, stackGroupDriftStatus_);
          DARABONBA_PTR_TO_JSON(TotalStackInstancesCount, totalStackInstancesCount_);
        };
        friend void from_json(const Darabonba::Json& j, StackGroupDriftDetectionDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(CancelledStackInstancesCount, cancelledStackInstancesCount_);
          DARABONBA_PTR_FROM_JSON(DriftDetectionStatus, driftDetectionStatus_);
          DARABONBA_PTR_FROM_JSON(DriftDetectionTime, driftDetectionTime_);
          DARABONBA_PTR_FROM_JSON(DriftedStackInstancesCount, driftedStackInstancesCount_);
          DARABONBA_PTR_FROM_JSON(FailedStackInstancesCount, failedStackInstancesCount_);
          DARABONBA_PTR_FROM_JSON(InProgressStackInstancesCount, inProgressStackInstancesCount_);
          DARABONBA_PTR_FROM_JSON(InSyncStackInstancesCount, inSyncStackInstancesCount_);
          DARABONBA_PTR_FROM_JSON(StackGroupDriftStatus, stackGroupDriftStatus_);
          DARABONBA_PTR_FROM_JSON(TotalStackInstancesCount, totalStackInstancesCount_);
        };
        StackGroupDriftDetectionDetail() = default ;
        StackGroupDriftDetectionDetail(const StackGroupDriftDetectionDetail &) = default ;
        StackGroupDriftDetectionDetail(StackGroupDriftDetectionDetail &&) = default ;
        StackGroupDriftDetectionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StackGroupDriftDetectionDetail() = default ;
        StackGroupDriftDetectionDetail& operator=(const StackGroupDriftDetectionDetail &) = default ;
        StackGroupDriftDetectionDetail& operator=(StackGroupDriftDetectionDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cancelledStackInstancesCount_ == nullptr
        && this->driftDetectionStatus_ == nullptr && this->driftDetectionTime_ == nullptr && this->driftedStackInstancesCount_ == nullptr && this->failedStackInstancesCount_ == nullptr && this->inProgressStackInstancesCount_ == nullptr
        && this->inSyncStackInstancesCount_ == nullptr && this->stackGroupDriftStatus_ == nullptr && this->totalStackInstancesCount_ == nullptr; };
        // cancelledStackInstancesCount Field Functions 
        bool hasCancelledStackInstancesCount() const { return this->cancelledStackInstancesCount_ != nullptr;};
        void deleteCancelledStackInstancesCount() { this->cancelledStackInstancesCount_ = nullptr;};
        inline int32_t getCancelledStackInstancesCount() const { DARABONBA_PTR_GET_DEFAULT(cancelledStackInstancesCount_, 0) };
        inline StackGroupDriftDetectionDetail& setCancelledStackInstancesCount(int32_t cancelledStackInstancesCount) { DARABONBA_PTR_SET_VALUE(cancelledStackInstancesCount_, cancelledStackInstancesCount) };


        // driftDetectionStatus Field Functions 
        bool hasDriftDetectionStatus() const { return this->driftDetectionStatus_ != nullptr;};
        void deleteDriftDetectionStatus() { this->driftDetectionStatus_ = nullptr;};
        inline string getDriftDetectionStatus() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionStatus_, "") };
        inline StackGroupDriftDetectionDetail& setDriftDetectionStatus(string driftDetectionStatus) { DARABONBA_PTR_SET_VALUE(driftDetectionStatus_, driftDetectionStatus) };


        // driftDetectionTime Field Functions 
        bool hasDriftDetectionTime() const { return this->driftDetectionTime_ != nullptr;};
        void deleteDriftDetectionTime() { this->driftDetectionTime_ = nullptr;};
        inline string getDriftDetectionTime() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionTime_, "") };
        inline StackGroupDriftDetectionDetail& setDriftDetectionTime(string driftDetectionTime) { DARABONBA_PTR_SET_VALUE(driftDetectionTime_, driftDetectionTime) };


        // driftedStackInstancesCount Field Functions 
        bool hasDriftedStackInstancesCount() const { return this->driftedStackInstancesCount_ != nullptr;};
        void deleteDriftedStackInstancesCount() { this->driftedStackInstancesCount_ = nullptr;};
        inline int32_t getDriftedStackInstancesCount() const { DARABONBA_PTR_GET_DEFAULT(driftedStackInstancesCount_, 0) };
        inline StackGroupDriftDetectionDetail& setDriftedStackInstancesCount(int32_t driftedStackInstancesCount) { DARABONBA_PTR_SET_VALUE(driftedStackInstancesCount_, driftedStackInstancesCount) };


        // failedStackInstancesCount Field Functions 
        bool hasFailedStackInstancesCount() const { return this->failedStackInstancesCount_ != nullptr;};
        void deleteFailedStackInstancesCount() { this->failedStackInstancesCount_ = nullptr;};
        inline int32_t getFailedStackInstancesCount() const { DARABONBA_PTR_GET_DEFAULT(failedStackInstancesCount_, 0) };
        inline StackGroupDriftDetectionDetail& setFailedStackInstancesCount(int32_t failedStackInstancesCount) { DARABONBA_PTR_SET_VALUE(failedStackInstancesCount_, failedStackInstancesCount) };


        // inProgressStackInstancesCount Field Functions 
        bool hasInProgressStackInstancesCount() const { return this->inProgressStackInstancesCount_ != nullptr;};
        void deleteInProgressStackInstancesCount() { this->inProgressStackInstancesCount_ = nullptr;};
        inline int32_t getInProgressStackInstancesCount() const { DARABONBA_PTR_GET_DEFAULT(inProgressStackInstancesCount_, 0) };
        inline StackGroupDriftDetectionDetail& setInProgressStackInstancesCount(int32_t inProgressStackInstancesCount) { DARABONBA_PTR_SET_VALUE(inProgressStackInstancesCount_, inProgressStackInstancesCount) };


        // inSyncStackInstancesCount Field Functions 
        bool hasInSyncStackInstancesCount() const { return this->inSyncStackInstancesCount_ != nullptr;};
        void deleteInSyncStackInstancesCount() { this->inSyncStackInstancesCount_ = nullptr;};
        inline int32_t getInSyncStackInstancesCount() const { DARABONBA_PTR_GET_DEFAULT(inSyncStackInstancesCount_, 0) };
        inline StackGroupDriftDetectionDetail& setInSyncStackInstancesCount(int32_t inSyncStackInstancesCount) { DARABONBA_PTR_SET_VALUE(inSyncStackInstancesCount_, inSyncStackInstancesCount) };


        // stackGroupDriftStatus Field Functions 
        bool hasStackGroupDriftStatus() const { return this->stackGroupDriftStatus_ != nullptr;};
        void deleteStackGroupDriftStatus() { this->stackGroupDriftStatus_ = nullptr;};
        inline string getStackGroupDriftStatus() const { DARABONBA_PTR_GET_DEFAULT(stackGroupDriftStatus_, "") };
        inline StackGroupDriftDetectionDetail& setStackGroupDriftStatus(string stackGroupDriftStatus) { DARABONBA_PTR_SET_VALUE(stackGroupDriftStatus_, stackGroupDriftStatus) };


        // totalStackInstancesCount Field Functions 
        bool hasTotalStackInstancesCount() const { return this->totalStackInstancesCount_ != nullptr;};
        void deleteTotalStackInstancesCount() { this->totalStackInstancesCount_ = nullptr;};
        inline int32_t getTotalStackInstancesCount() const { DARABONBA_PTR_GET_DEFAULT(totalStackInstancesCount_, 0) };
        inline StackGroupDriftDetectionDetail& setTotalStackInstancesCount(int32_t totalStackInstancesCount) { DARABONBA_PTR_SET_VALUE(totalStackInstancesCount_, totalStackInstancesCount) };


      protected:
        // The number of stack instances for which drift detection was canceled.
        shared_ptr<int32_t> cancelledStackInstancesCount_ {};
        // The drift detection state.
        // 
        // Valid values:
        // 
        // *   COMPLETED: Drift detection is performed on the stack group and all stack instances passed the drift detection.
        // *   FAILED: Drift detection is performed on the stack group. The number of stack instances that failed the drift detection exceeds the specified threshold.
        // *   PARTIAL_SUCCESS: Drift detection is performed on the stack group. The number of stack instances that failed the drift detection does not exceed the specified threshold.
        // *   IN_PROGRESS: Drift detection is being performed on the stack group.
        // *   STOPPED: Drift detection is canceled for the stack group.
        shared_ptr<string> driftDetectionStatus_ {};
        // The time when drift detection was performed.
        shared_ptr<string> driftDetectionTime_ {};
        // The number of stack instances that have drifted.
        shared_ptr<int32_t> driftedStackInstancesCount_ {};
        // The number of stack instances that failed drift detection.
        shared_ptr<int32_t> failedStackInstancesCount_ {};
        // The number of stack instances on which drift detection was being performed.
        shared_ptr<int32_t> inProgressStackInstancesCount_ {};
        // The number of stack instances that were being synchronized.
        shared_ptr<int32_t> inSyncStackInstancesCount_ {};
        // The drift state of the stack group.
        // 
        // Valid values:
        // 
        // *   DRIFTED: At least one stack instance in the stack group has drifted.
        // *   NOT_CHECKED: No successful drift detection is performed in the stack group.
        // *   IN_SYNC: All the stack instances in the stack group are being synchronized.
        shared_ptr<string> stackGroupDriftStatus_ {};
        // The number of stack instances.
        shared_ptr<int32_t> totalStackInstancesCount_ {};
      };

      class OperationPreferences : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OperationPreferences& obj) { 
          DARABONBA_PTR_TO_JSON(FailureToleranceCount, failureToleranceCount_);
          DARABONBA_PTR_TO_JSON(FailureTolerancePercentage, failureTolerancePercentage_);
          DARABONBA_PTR_TO_JSON(MaxConcurrentCount, maxConcurrentCount_);
          DARABONBA_PTR_TO_JSON(MaxConcurrentPercentage, maxConcurrentPercentage_);
          DARABONBA_PTR_TO_JSON(RegionIdsOrder, regionIdsOrder_);
        };
        friend void from_json(const Darabonba::Json& j, OperationPreferences& obj) { 
          DARABONBA_PTR_FROM_JSON(FailureToleranceCount, failureToleranceCount_);
          DARABONBA_PTR_FROM_JSON(FailureTolerancePercentage, failureTolerancePercentage_);
          DARABONBA_PTR_FROM_JSON(MaxConcurrentCount, maxConcurrentCount_);
          DARABONBA_PTR_FROM_JSON(MaxConcurrentPercentage, maxConcurrentPercentage_);
          DARABONBA_PTR_FROM_JSON(RegionIdsOrder, regionIdsOrder_);
        };
        OperationPreferences() = default ;
        OperationPreferences(const OperationPreferences &) = default ;
        OperationPreferences(OperationPreferences &&) = default ;
        OperationPreferences(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OperationPreferences() = default ;
        OperationPreferences& operator=(const OperationPreferences &) = default ;
        OperationPreferences& operator=(OperationPreferences &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->failureToleranceCount_ == nullptr
        && this->failureTolerancePercentage_ == nullptr && this->maxConcurrentCount_ == nullptr && this->maxConcurrentPercentage_ == nullptr && this->regionIdsOrder_ == nullptr; };
        // failureToleranceCount Field Functions 
        bool hasFailureToleranceCount() const { return this->failureToleranceCount_ != nullptr;};
        void deleteFailureToleranceCount() { this->failureToleranceCount_ = nullptr;};
        inline int32_t getFailureToleranceCount() const { DARABONBA_PTR_GET_DEFAULT(failureToleranceCount_, 0) };
        inline OperationPreferences& setFailureToleranceCount(int32_t failureToleranceCount) { DARABONBA_PTR_SET_VALUE(failureToleranceCount_, failureToleranceCount) };


        // failureTolerancePercentage Field Functions 
        bool hasFailureTolerancePercentage() const { return this->failureTolerancePercentage_ != nullptr;};
        void deleteFailureTolerancePercentage() { this->failureTolerancePercentage_ = nullptr;};
        inline int32_t getFailureTolerancePercentage() const { DARABONBA_PTR_GET_DEFAULT(failureTolerancePercentage_, 0) };
        inline OperationPreferences& setFailureTolerancePercentage(int32_t failureTolerancePercentage) { DARABONBA_PTR_SET_VALUE(failureTolerancePercentage_, failureTolerancePercentage) };


        // maxConcurrentCount Field Functions 
        bool hasMaxConcurrentCount() const { return this->maxConcurrentCount_ != nullptr;};
        void deleteMaxConcurrentCount() { this->maxConcurrentCount_ = nullptr;};
        inline int32_t getMaxConcurrentCount() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrentCount_, 0) };
        inline OperationPreferences& setMaxConcurrentCount(int32_t maxConcurrentCount) { DARABONBA_PTR_SET_VALUE(maxConcurrentCount_, maxConcurrentCount) };


        // maxConcurrentPercentage Field Functions 
        bool hasMaxConcurrentPercentage() const { return this->maxConcurrentPercentage_ != nullptr;};
        void deleteMaxConcurrentPercentage() { this->maxConcurrentPercentage_ = nullptr;};
        inline int32_t getMaxConcurrentPercentage() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrentPercentage_, 0) };
        inline OperationPreferences& setMaxConcurrentPercentage(int32_t maxConcurrentPercentage) { DARABONBA_PTR_SET_VALUE(maxConcurrentPercentage_, maxConcurrentPercentage) };


        // regionIdsOrder Field Functions 
        bool hasRegionIdsOrder() const { return this->regionIdsOrder_ != nullptr;};
        void deleteRegionIdsOrder() { this->regionIdsOrder_ = nullptr;};
        inline const vector<string> & getRegionIdsOrder() const { DARABONBA_PTR_GET_CONST(regionIdsOrder_, vector<string>) };
        inline vector<string> getRegionIdsOrder() { DARABONBA_PTR_GET(regionIdsOrder_, vector<string>) };
        inline OperationPreferences& setRegionIdsOrder(const vector<string> & regionIdsOrder) { DARABONBA_PTR_SET_VALUE(regionIdsOrder_, regionIdsOrder) };
        inline OperationPreferences& setRegionIdsOrder(vector<string> && regionIdsOrder) { DARABONBA_PTR_SET_RVALUE(regionIdsOrder_, regionIdsOrder) };


      protected:
        // The number of accounts within which stack operation failures are allowed to occur in each region. If the value of this parameter is exceeded in a region, Resource Orchestration Service (ROS) stops the operation in the region. If the operation is stopped in one region, the operation is no longer performed in other regions.
        // 
        // Valid values: 0 to 20.
        // 
        // > Only one of FailureToleranceCount and FailureTolerancePercentage can be returned.
        shared_ptr<int32_t> failureToleranceCount_ {};
        // The percentage of the number of accounts within which stack operation failures are allowed to occur to the total number of accounts in each region. If the value of this parameter is exceeded in a region, ROS stops the operation in the region.
        // 
        // Valid values: 0 to 100.
        // 
        // > Only one of FailureToleranceCount and FailureTolerancePercentage can be returned.
        shared_ptr<int32_t> failureTolerancePercentage_ {};
        // The maximum number of accounts within which stacks are deployed at the same time in each region.
        // 
        // Valid values: 1 to 20.
        // 
        // > Only one of MaxConcurrentCount and MaxConcurrentPercentage can be returned.
        shared_ptr<int32_t> maxConcurrentCount_ {};
        // The percentage of the maximum number of accounts within which stacks are deployed at the same time to the total number of accounts in each region.
        // 
        // Valid values: 1 to 100.
        // 
        // > Only one of MaxConcurrentCount and MaxConcurrentPercentage can be returned.
        shared_ptr<int32_t> maxConcurrentPercentage_ {};
        // The regions in the order of operation execution.
        shared_ptr<vector<string>> regionIdsOrder_ {};
      };

      class DeploymentTargets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeploymentTargets& obj) { 
          DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
          DARABONBA_PTR_TO_JSON(RdFolderIds, rdFolderIds_);
        };
        friend void from_json(const Darabonba::Json& j, DeploymentTargets& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
          DARABONBA_PTR_FROM_JSON(RdFolderIds, rdFolderIds_);
        };
        DeploymentTargets() = default ;
        DeploymentTargets(const DeploymentTargets &) = default ;
        DeploymentTargets(DeploymentTargets &&) = default ;
        DeploymentTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeploymentTargets() = default ;
        DeploymentTargets& operator=(const DeploymentTargets &) = default ;
        DeploymentTargets& operator=(DeploymentTargets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->rdFolderIds_ == nullptr; };
        // accountIds Field Functions 
        bool hasAccountIds() const { return this->accountIds_ != nullptr;};
        void deleteAccountIds() { this->accountIds_ = nullptr;};
        inline const vector<string> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
        inline vector<string> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
        inline DeploymentTargets& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
        inline DeploymentTargets& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


        // rdFolderIds Field Functions 
        bool hasRdFolderIds() const { return this->rdFolderIds_ != nullptr;};
        void deleteRdFolderIds() { this->rdFolderIds_ = nullptr;};
        inline const vector<string> & getRdFolderIds() const { DARABONBA_PTR_GET_CONST(rdFolderIds_, vector<string>) };
        inline vector<string> getRdFolderIds() { DARABONBA_PTR_GET(rdFolderIds_, vector<string>) };
        inline DeploymentTargets& setRdFolderIds(const vector<string> & rdFolderIds) { DARABONBA_PTR_SET_VALUE(rdFolderIds_, rdFolderIds) };
        inline DeploymentTargets& setRdFolderIds(vector<string> && rdFolderIds) { DARABONBA_PTR_SET_RVALUE(rdFolderIds_, rdFolderIds) };


      protected:
        // The IDs of the members in the resource directory.
        // 
        // > This parameter is returned only if AccountIds is specified when the [UpdateStackInstances](https://help.aliyun.com/document_detail/151716.html) operation is called to update stack instances.
        shared_ptr<vector<string>> accountIds_ {};
        // The IDs of the folders in the resource directory.
        shared_ptr<vector<string>> rdFolderIds_ {};
      };

      virtual bool empty() const override { return this->action_ == nullptr
        && this->administrationRoleName_ == nullptr && this->createTime_ == nullptr && this->deploymentTargets_ == nullptr && this->endTime_ == nullptr && this->executionRoleName_ == nullptr
        && this->operationDescription_ == nullptr && this->operationId_ == nullptr && this->operationPreferences_ == nullptr && this->retainStacks_ == nullptr && this->stackGroupDriftDetectionDetail_ == nullptr
        && this->stackGroupId_ == nullptr && this->stackGroupName_ == nullptr && this->status_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline StackGroupOperation& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // administrationRoleName Field Functions 
      bool hasAdministrationRoleName() const { return this->administrationRoleName_ != nullptr;};
      void deleteAdministrationRoleName() { this->administrationRoleName_ = nullptr;};
      inline string getAdministrationRoleName() const { DARABONBA_PTR_GET_DEFAULT(administrationRoleName_, "") };
      inline StackGroupOperation& setAdministrationRoleName(string administrationRoleName) { DARABONBA_PTR_SET_VALUE(administrationRoleName_, administrationRoleName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline StackGroupOperation& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deploymentTargets Field Functions 
      bool hasDeploymentTargets() const { return this->deploymentTargets_ != nullptr;};
      void deleteDeploymentTargets() { this->deploymentTargets_ = nullptr;};
      inline const StackGroupOperation::DeploymentTargets & getDeploymentTargets() const { DARABONBA_PTR_GET_CONST(deploymentTargets_, StackGroupOperation::DeploymentTargets) };
      inline StackGroupOperation::DeploymentTargets getDeploymentTargets() { DARABONBA_PTR_GET(deploymentTargets_, StackGroupOperation::DeploymentTargets) };
      inline StackGroupOperation& setDeploymentTargets(const StackGroupOperation::DeploymentTargets & deploymentTargets) { DARABONBA_PTR_SET_VALUE(deploymentTargets_, deploymentTargets) };
      inline StackGroupOperation& setDeploymentTargets(StackGroupOperation::DeploymentTargets && deploymentTargets) { DARABONBA_PTR_SET_RVALUE(deploymentTargets_, deploymentTargets) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline StackGroupOperation& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // executionRoleName Field Functions 
      bool hasExecutionRoleName() const { return this->executionRoleName_ != nullptr;};
      void deleteExecutionRoleName() { this->executionRoleName_ = nullptr;};
      inline string getExecutionRoleName() const { DARABONBA_PTR_GET_DEFAULT(executionRoleName_, "") };
      inline StackGroupOperation& setExecutionRoleName(string executionRoleName) { DARABONBA_PTR_SET_VALUE(executionRoleName_, executionRoleName) };


      // operationDescription Field Functions 
      bool hasOperationDescription() const { return this->operationDescription_ != nullptr;};
      void deleteOperationDescription() { this->operationDescription_ = nullptr;};
      inline string getOperationDescription() const { DARABONBA_PTR_GET_DEFAULT(operationDescription_, "") };
      inline StackGroupOperation& setOperationDescription(string operationDescription) { DARABONBA_PTR_SET_VALUE(operationDescription_, operationDescription) };


      // operationId Field Functions 
      bool hasOperationId() const { return this->operationId_ != nullptr;};
      void deleteOperationId() { this->operationId_ = nullptr;};
      inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
      inline StackGroupOperation& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


      // operationPreferences Field Functions 
      bool hasOperationPreferences() const { return this->operationPreferences_ != nullptr;};
      void deleteOperationPreferences() { this->operationPreferences_ = nullptr;};
      inline const StackGroupOperation::OperationPreferences & getOperationPreferences() const { DARABONBA_PTR_GET_CONST(operationPreferences_, StackGroupOperation::OperationPreferences) };
      inline StackGroupOperation::OperationPreferences getOperationPreferences() { DARABONBA_PTR_GET(operationPreferences_, StackGroupOperation::OperationPreferences) };
      inline StackGroupOperation& setOperationPreferences(const StackGroupOperation::OperationPreferences & operationPreferences) { DARABONBA_PTR_SET_VALUE(operationPreferences_, operationPreferences) };
      inline StackGroupOperation& setOperationPreferences(StackGroupOperation::OperationPreferences && operationPreferences) { DARABONBA_PTR_SET_RVALUE(operationPreferences_, operationPreferences) };


      // retainStacks Field Functions 
      bool hasRetainStacks() const { return this->retainStacks_ != nullptr;};
      void deleteRetainStacks() { this->retainStacks_ = nullptr;};
      inline bool getRetainStacks() const { DARABONBA_PTR_GET_DEFAULT(retainStacks_, false) };
      inline StackGroupOperation& setRetainStacks(bool retainStacks) { DARABONBA_PTR_SET_VALUE(retainStacks_, retainStacks) };


      // stackGroupDriftDetectionDetail Field Functions 
      bool hasStackGroupDriftDetectionDetail() const { return this->stackGroupDriftDetectionDetail_ != nullptr;};
      void deleteStackGroupDriftDetectionDetail() { this->stackGroupDriftDetectionDetail_ = nullptr;};
      inline const StackGroupOperation::StackGroupDriftDetectionDetail & getStackGroupDriftDetectionDetail() const { DARABONBA_PTR_GET_CONST(stackGroupDriftDetectionDetail_, StackGroupOperation::StackGroupDriftDetectionDetail) };
      inline StackGroupOperation::StackGroupDriftDetectionDetail getStackGroupDriftDetectionDetail() { DARABONBA_PTR_GET(stackGroupDriftDetectionDetail_, StackGroupOperation::StackGroupDriftDetectionDetail) };
      inline StackGroupOperation& setStackGroupDriftDetectionDetail(const StackGroupOperation::StackGroupDriftDetectionDetail & stackGroupDriftDetectionDetail) { DARABONBA_PTR_SET_VALUE(stackGroupDriftDetectionDetail_, stackGroupDriftDetectionDetail) };
      inline StackGroupOperation& setStackGroupDriftDetectionDetail(StackGroupOperation::StackGroupDriftDetectionDetail && stackGroupDriftDetectionDetail) { DARABONBA_PTR_SET_RVALUE(stackGroupDriftDetectionDetail_, stackGroupDriftDetectionDetail) };


      // stackGroupId Field Functions 
      bool hasStackGroupId() const { return this->stackGroupId_ != nullptr;};
      void deleteStackGroupId() { this->stackGroupId_ = nullptr;};
      inline string getStackGroupId() const { DARABONBA_PTR_GET_DEFAULT(stackGroupId_, "") };
      inline StackGroupOperation& setStackGroupId(string stackGroupId) { DARABONBA_PTR_SET_VALUE(stackGroupId_, stackGroupId) };


      // stackGroupName Field Functions 
      bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
      void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
      inline string getStackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
      inline StackGroupOperation& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline StackGroupOperation& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The operation type.
      // 
      // Valid values:
      // 
      // *   CREATE
      // *   UPDATE
      // *   DELETE
      // *   DETECT_DRIFT
      shared_ptr<string> action_ {};
      // The name of the RAM role that you specify for the administrator account when you create the self-managed stack group. ROS assumes the administrator role to perform operations. If this parameter is not specified, the default value AliyunROSStackGroupAdministrationRole is returned.
      shared_ptr<string> administrationRoleName_ {};
      // The time when the operation was initiated.
      shared_ptr<string> createTime_ {};
      // The destinations to deploy stack instances when the stack is granted service-managed permissions.
      shared_ptr<StackGroupOperation::DeploymentTargets> deploymentTargets_ {};
      // The time when the operation ended.
      shared_ptr<string> endTime_ {};
      // The name of the RAM role that you specify for the execution account when you create the self-managed stack group. The administrator role AliyunROSStackGroupAdministrationRole assumes the execution role to perform operations. If this parameter is not specified, the default value AliyunROSStackGroupExecutionRole is returned.
      shared_ptr<string> executionRoleName_ {};
      // The description of the operation.
      // 
      // > This parameter is returned only if OperationDescription is specified when the [CreateStackInstances](https://help.aliyun.com/document_detail/151338.html) operation is called to create stack instances.
      shared_ptr<string> operationDescription_ {};
      // The operation ID.
      shared_ptr<string> operationId_ {};
      // The operation settings.
      shared_ptr<StackGroupOperation::OperationPreferences> operationPreferences_ {};
      // Indicates whether stacks are retained when the associated stack instances are deleted. When you delete a stack instance, you can choose to delete or retain the stack with which the stack instance is associated.
      // 
      // Valid values:
      // 
      // *   true: Stacks are retained when the associated stack instances are deleted.
      // *   false: Stacks are deleted when the associated stack instances are deleted. Proceed with caution.
      // 
      // > This parameter is returned only if you delete stack instances.
      shared_ptr<bool> retainStacks_ {};
      // The information about drift detection.
      // 
      // > This parameter is returned only if drift detection is performed.
      shared_ptr<StackGroupOperation::StackGroupDriftDetectionDetail> stackGroupDriftDetectionDetail_ {};
      // The ID of the stack group.
      shared_ptr<string> stackGroupId_ {};
      // The name of the stack group.
      shared_ptr<string> stackGroupName_ {};
      // The state of the operation.
      // 
      // Valid values:
      // 
      // *   RUNNING
      // *   SUCCEEDED
      // *   FAILED
      // *   STOPPING
      // *   STOPPED
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->stackGroupOperation_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStackGroupOperationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackGroupOperation Field Functions 
    bool hasStackGroupOperation() const { return this->stackGroupOperation_ != nullptr;};
    void deleteStackGroupOperation() { this->stackGroupOperation_ = nullptr;};
    inline const GetStackGroupOperationResponseBody::StackGroupOperation & getStackGroupOperation() const { DARABONBA_PTR_GET_CONST(stackGroupOperation_, GetStackGroupOperationResponseBody::StackGroupOperation) };
    inline GetStackGroupOperationResponseBody::StackGroupOperation getStackGroupOperation() { DARABONBA_PTR_GET(stackGroupOperation_, GetStackGroupOperationResponseBody::StackGroupOperation) };
    inline GetStackGroupOperationResponseBody& setStackGroupOperation(const GetStackGroupOperationResponseBody::StackGroupOperation & stackGroupOperation) { DARABONBA_PTR_SET_VALUE(stackGroupOperation_, stackGroupOperation) };
    inline GetStackGroupOperationResponseBody& setStackGroupOperation(GetStackGroupOperationResponseBody::StackGroupOperation && stackGroupOperation) { DARABONBA_PTR_SET_RVALUE(stackGroupOperation_, stackGroupOperation) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the stack group operation.
    shared_ptr<GetStackGroupOperationResponseBody::StackGroupOperation> stackGroupOperation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
