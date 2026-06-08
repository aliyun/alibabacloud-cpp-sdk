// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKGROUPRESPONSEBODY_HPP_
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
  class GetStackGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackGroup, stackGroup_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackGroup, stackGroup_);
    };
    GetStackGroupResponseBody() = default ;
    GetStackGroupResponseBody(const GetStackGroupResponseBody &) = default ;
    GetStackGroupResponseBody(GetStackGroupResponseBody &&) = default ;
    GetStackGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackGroupResponseBody() = default ;
    GetStackGroupResponseBody& operator=(const GetStackGroupResponseBody &) = default ;
    GetStackGroupResponseBody& operator=(GetStackGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StackGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StackGroup& obj) { 
        DARABONBA_PTR_TO_JSON(AdministrationRoleName, administrationRoleName_);
        DARABONBA_PTR_TO_JSON(AutoDeployment, autoDeployment_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExecutionRoleName, executionRoleName_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(PermissionModel, permissionModel_);
        DARABONBA_PTR_TO_JSON(RdFolderIds, rdFolderIds_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(StackGroupDriftDetectionDetail, stackGroupDriftDetectionDetail_);
        DARABONBA_PTR_TO_JSON(StackGroupId, stackGroupId_);
        DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
        DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, StackGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(AdministrationRoleName, administrationRoleName_);
        DARABONBA_PTR_FROM_JSON(AutoDeployment, autoDeployment_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExecutionRoleName, executionRoleName_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(PermissionModel, permissionModel_);
        DARABONBA_PTR_FROM_JSON(RdFolderIds, rdFolderIds_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(StackGroupDriftDetectionDetail, stackGroupDriftDetectionDetail_);
        DARABONBA_PTR_FROM_JSON(StackGroupId, stackGroupId_);
        DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
        DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      StackGroup() = default ;
      StackGroup(const StackGroup &) = default ;
      StackGroup(StackGroup &&) = default ;
      StackGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StackGroup() = default ;
      StackGroup& operator=(const StackGroup &) = default ;
      StackGroup& operator=(StackGroup &&) = default ;
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
        // The number of stack instances that have drifted.
        shared_ptr<int32_t> cancelledStackInstancesCount_ {};
        // The drift status of the stack group.
        // 
        // Valid values:
        // 
        // *   DRIFTED: At least one stack instance in the stack group has drifted.
        // *   NOT_CHECKED: No drift detection is completed on the stack group.
        // *   IN_SYNC: All the stack instances in the stack group are being synchronized.
        shared_ptr<string> driftDetectionStatus_ {};
        // The number of stack instances.
        shared_ptr<string> driftDetectionTime_ {};
        // The ID of the resource group. This parameter is specified when you create the stack group.
        shared_ptr<int32_t> driftedStackInstancesCount_ {};
        // The status of drift detection on the stack group.
        // 
        // Valid values:
        // 
        // *   COMPLETED: Drift detection is performed and completed on all stack instances.
        // *   FAILED: Drift detection is performed. The number of stack instances that failed the drift detection exceeds the specified threshold.
        // *   PARTIAL_SUCCESS: Drift detection is performed. The number of stack instances that failed the drift detection does not exceed the specified threshold.
        // *   IN_PROGRESS: Drift detection is being performed on the stack group.
        // *   STOPPED: Drift detection is canceled for the stack group.
        shared_ptr<int32_t> failedStackInstancesCount_ {};
        // The number of stack instances that were being synchronized.
        shared_ptr<int32_t> inProgressStackInstancesCount_ {};
        // The number of stack instances for which drift detection was canceled.
        shared_ptr<int32_t> inSyncStackInstancesCount_ {};
        // The number of stack instances on which drift detection was being performed.
        shared_ptr<string> stackGroupDriftStatus_ {};
        // The number of stack instances that failed drift detection.
        shared_ptr<int32_t> totalStackInstancesCount_ {};
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
        // The name of the parameter.
        shared_ptr<string> parameterKey_ {};
        // The value of the parameter.
        shared_ptr<string> parameterValue_ {};
      };

      class AutoDeployment : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoDeployment& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(RetainStacksOnAccountRemoval, retainStacksOnAccountRemoval_);
        };
        friend void from_json(const Darabonba::Json& j, AutoDeployment& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(RetainStacksOnAccountRemoval, retainStacksOnAccountRemoval_);
        };
        AutoDeployment() = default ;
        AutoDeployment(const AutoDeployment &) = default ;
        AutoDeployment(AutoDeployment &&) = default ;
        AutoDeployment(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoDeployment() = default ;
        AutoDeployment& operator=(const AutoDeployment &) = default ;
        AutoDeployment& operator=(AutoDeployment &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->retainStacksOnAccountRemoval_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline AutoDeployment& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // retainStacksOnAccountRemoval Field Functions 
        bool hasRetainStacksOnAccountRemoval() const { return this->retainStacksOnAccountRemoval_ != nullptr;};
        void deleteRetainStacksOnAccountRemoval() { this->retainStacksOnAccountRemoval_ = nullptr;};
        inline bool getRetainStacksOnAccountRemoval() const { DARABONBA_PTR_GET_DEFAULT(retainStacksOnAccountRemoval_, false) };
        inline AutoDeployment& setRetainStacksOnAccountRemoval(bool retainStacksOnAccountRemoval) { DARABONBA_PTR_SET_VALUE(retainStacksOnAccountRemoval_, retainStacksOnAccountRemoval) };


      protected:
        // Indicates whether stacks in the member account are retained when the member account is deleted from the folder.
        // 
        // Valid values:
        // 
        // *   true: The stacks are retained.
        // *   false: The stacks are deleted.
        // 
        // >  This parameter is returned only when the Enabled parameter is set to true.
        shared_ptr<bool> enabled_ {};
        // The folder IDs of the resource directory. This parameter is used to deploy stack instances within all the accounts in the folders.
        // 
        // >  This parameter is returned only when the PermissionModel parameter is set to SERVICE_MANAGED.
        shared_ptr<bool> retainStacksOnAccountRemoval_ {};
      };

      virtual bool empty() const override { return this->administrationRoleName_ == nullptr
        && this->autoDeployment_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->executionRoleName_ == nullptr && this->parameters_ == nullptr
        && this->permissionModel_ == nullptr && this->rdFolderIds_ == nullptr && this->resourceGroupId_ == nullptr && this->stackGroupDriftDetectionDetail_ == nullptr && this->stackGroupId_ == nullptr
        && this->stackGroupName_ == nullptr && this->status_ == nullptr && this->templateBody_ == nullptr && this->templateContent_ == nullptr && this->updateTime_ == nullptr; };
      // administrationRoleName Field Functions 
      bool hasAdministrationRoleName() const { return this->administrationRoleName_ != nullptr;};
      void deleteAdministrationRoleName() { this->administrationRoleName_ = nullptr;};
      inline string getAdministrationRoleName() const { DARABONBA_PTR_GET_DEFAULT(administrationRoleName_, "") };
      inline StackGroup& setAdministrationRoleName(string administrationRoleName) { DARABONBA_PTR_SET_VALUE(administrationRoleName_, administrationRoleName) };


      // autoDeployment Field Functions 
      bool hasAutoDeployment() const { return this->autoDeployment_ != nullptr;};
      void deleteAutoDeployment() { this->autoDeployment_ = nullptr;};
      inline const StackGroup::AutoDeployment & getAutoDeployment() const { DARABONBA_PTR_GET_CONST(autoDeployment_, StackGroup::AutoDeployment) };
      inline StackGroup::AutoDeployment getAutoDeployment() { DARABONBA_PTR_GET(autoDeployment_, StackGroup::AutoDeployment) };
      inline StackGroup& setAutoDeployment(const StackGroup::AutoDeployment & autoDeployment) { DARABONBA_PTR_SET_VALUE(autoDeployment_, autoDeployment) };
      inline StackGroup& setAutoDeployment(StackGroup::AutoDeployment && autoDeployment) { DARABONBA_PTR_SET_RVALUE(autoDeployment_, autoDeployment) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline StackGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline StackGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // executionRoleName Field Functions 
      bool hasExecutionRoleName() const { return this->executionRoleName_ != nullptr;};
      void deleteExecutionRoleName() { this->executionRoleName_ = nullptr;};
      inline string getExecutionRoleName() const { DARABONBA_PTR_GET_DEFAULT(executionRoleName_, "") };
      inline StackGroup& setExecutionRoleName(string executionRoleName) { DARABONBA_PTR_SET_VALUE(executionRoleName_, executionRoleName) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const vector<StackGroup::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<StackGroup::Parameters>) };
      inline vector<StackGroup::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<StackGroup::Parameters>) };
      inline StackGroup& setParameters(const vector<StackGroup::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline StackGroup& setParameters(vector<StackGroup::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // permissionModel Field Functions 
      bool hasPermissionModel() const { return this->permissionModel_ != nullptr;};
      void deletePermissionModel() { this->permissionModel_ = nullptr;};
      inline string getPermissionModel() const { DARABONBA_PTR_GET_DEFAULT(permissionModel_, "") };
      inline StackGroup& setPermissionModel(string permissionModel) { DARABONBA_PTR_SET_VALUE(permissionModel_, permissionModel) };


      // rdFolderIds Field Functions 
      bool hasRdFolderIds() const { return this->rdFolderIds_ != nullptr;};
      void deleteRdFolderIds() { this->rdFolderIds_ = nullptr;};
      inline const vector<string> & getRdFolderIds() const { DARABONBA_PTR_GET_CONST(rdFolderIds_, vector<string>) };
      inline vector<string> getRdFolderIds() { DARABONBA_PTR_GET(rdFolderIds_, vector<string>) };
      inline StackGroup& setRdFolderIds(const vector<string> & rdFolderIds) { DARABONBA_PTR_SET_VALUE(rdFolderIds_, rdFolderIds) };
      inline StackGroup& setRdFolderIds(vector<string> && rdFolderIds) { DARABONBA_PTR_SET_RVALUE(rdFolderIds_, rdFolderIds) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline StackGroup& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // stackGroupDriftDetectionDetail Field Functions 
      bool hasStackGroupDriftDetectionDetail() const { return this->stackGroupDriftDetectionDetail_ != nullptr;};
      void deleteStackGroupDriftDetectionDetail() { this->stackGroupDriftDetectionDetail_ = nullptr;};
      inline const StackGroup::StackGroupDriftDetectionDetail & getStackGroupDriftDetectionDetail() const { DARABONBA_PTR_GET_CONST(stackGroupDriftDetectionDetail_, StackGroup::StackGroupDriftDetectionDetail) };
      inline StackGroup::StackGroupDriftDetectionDetail getStackGroupDriftDetectionDetail() { DARABONBA_PTR_GET(stackGroupDriftDetectionDetail_, StackGroup::StackGroupDriftDetectionDetail) };
      inline StackGroup& setStackGroupDriftDetectionDetail(const StackGroup::StackGroupDriftDetectionDetail & stackGroupDriftDetectionDetail) { DARABONBA_PTR_SET_VALUE(stackGroupDriftDetectionDetail_, stackGroupDriftDetectionDetail) };
      inline StackGroup& setStackGroupDriftDetectionDetail(StackGroup::StackGroupDriftDetectionDetail && stackGroupDriftDetectionDetail) { DARABONBA_PTR_SET_RVALUE(stackGroupDriftDetectionDetail_, stackGroupDriftDetectionDetail) };


      // stackGroupId Field Functions 
      bool hasStackGroupId() const { return this->stackGroupId_ != nullptr;};
      void deleteStackGroupId() { this->stackGroupId_ = nullptr;};
      inline string getStackGroupId() const { DARABONBA_PTR_GET_DEFAULT(stackGroupId_, "") };
      inline StackGroup& setStackGroupId(string stackGroupId) { DARABONBA_PTR_SET_VALUE(stackGroupId_, stackGroupId) };


      // stackGroupName Field Functions 
      bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
      void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
      inline string getStackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
      inline StackGroup& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline StackGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateBody Field Functions 
      bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
      void deleteTemplateBody() { this->templateBody_ = nullptr;};
      inline string getTemplateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
      inline StackGroup& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


      // templateContent Field Functions 
      bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
      void deleteTemplateContent() { this->templateContent_ = nullptr;};
      inline string getTemplateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
      inline StackGroup& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline StackGroup& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The parameters of the stack group.
      shared_ptr<string> administrationRoleName_ {};
      // Indicates whether automatic deployment is enabled.
      // 
      // Valid values:
      // 
      // *   true: Automatic deployment is enabled. If a member account is added to the folder to which the stack group belongs after automatic deployment is enabled, the stack group deploys its stack instances in the specified region where the added account is deployed. If the account is deleted from the folder, the stack instances in the specified region are deleted from the stack group.
      // *   false: Automatic deployment is disabled. After automatic deployment is disabled, the stack instances remain unchanged when the member account in the folder is changed.
      shared_ptr<StackGroup::AutoDeployment> autoDeployment_ {};
      shared_ptr<string> createTime_ {};
      // The name of the stack group.
      shared_ptr<string> description_ {};
      // The template body.
      shared_ptr<string> executionRoleName_ {};
      // The key of the parameter.
      shared_ptr<vector<StackGroup::Parameters>> parameters_ {};
      // The information about automatic deployment settings.
      // 
      // >  This parameter is returned only when the PermissionModel parameter is set to SERVICE_MANAGED.
      shared_ptr<string> permissionModel_ {};
      // The folder IDs of the resource directory. This parameter is used to deploy stack instances within all the accounts in the folders.
      // 
      // >  This parameter is returned only when the PermissionModel parameter is set to SERVICE_MANAGED.
      shared_ptr<vector<string>> rdFolderIds_ {};
      // The permission model.
      // 
      // Valid values:
      // 
      // *   SELF_MANAGED: the self-managed permission model
      // *   SERVICE_MANAGED: the service-managed permission model
      // 
      // >  For more information about the permission models of stack groups, see [Overview](https://help.aliyun.com/document_detail/154578.html).
      shared_ptr<string> resourceGroupId_ {};
      // The time when drift detection was performed on the stack group.
      shared_ptr<StackGroup::StackGroupDriftDetectionDetail> stackGroupDriftDetectionDetail_ {};
      // The status of the stack group.
      // 
      // Valid values:
      // 
      // *   ACTIVE
      // *   DELETED
      shared_ptr<string> stackGroupId_ {};
      // The name of the RAM role that is specified for the execution account when you create the self-managed stack group. The administrator role AliyunROSStackGroupAdministrationRole assumes the execution role. If this parameter is not specified, the default value AliyunROSStackGroupExecutionRole is returned.
      shared_ptr<string> stackGroupName_ {};
      // The name of the RAM role that is specified for the administrator account in Resource Orchestration Service (ROS) when you create the self-managed stack group. If this parameter is not specified, the default value AliyunROSStackGroupAdministrationRole is returned.
      shared_ptr<string> status_ {};
      // The structure that contains the template body.
      // 
      // > We recommend that you use TemplateContent instead of TemplateBody.
      shared_ptr<string> templateBody_ {};
      // The JSON-formatted structure that contains the template body. For more information, see [Template syntax](https://help.aliyun.com/document_detail/28857.html).
      shared_ptr<string> templateContent_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->stackGroup_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStackGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackGroup Field Functions 
    bool hasStackGroup() const { return this->stackGroup_ != nullptr;};
    void deleteStackGroup() { this->stackGroup_ = nullptr;};
    inline const GetStackGroupResponseBody::StackGroup & getStackGroup() const { DARABONBA_PTR_GET_CONST(stackGroup_, GetStackGroupResponseBody::StackGroup) };
    inline GetStackGroupResponseBody::StackGroup getStackGroup() { DARABONBA_PTR_GET(stackGroup_, GetStackGroupResponseBody::StackGroup) };
    inline GetStackGroupResponseBody& setStackGroup(const GetStackGroupResponseBody::StackGroup & stackGroup) { DARABONBA_PTR_SET_VALUE(stackGroup_, stackGroup) };
    inline GetStackGroupResponseBody& setStackGroup(GetStackGroupResponseBody::StackGroup && stackGroup) { DARABONBA_PTR_SET_RVALUE(stackGroup_, stackGroup) };


  protected:
    // The details of the stack group.
    shared_ptr<string> requestId_ {};
    // Details of the stack group.
    shared_ptr<GetStackGroupResponseBody::StackGroup> stackGroup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
