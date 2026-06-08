// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKINSTANCERESPONSEBODY_HPP_
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
  class GetStackInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackInstance, stackInstance_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackInstance, stackInstance_);
    };
    GetStackInstanceResponseBody() = default ;
    GetStackInstanceResponseBody(const GetStackInstanceResponseBody &) = default ;
    GetStackInstanceResponseBody(GetStackInstanceResponseBody &&) = default ;
    GetStackInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackInstanceResponseBody() = default ;
    GetStackInstanceResponseBody& operator=(const GetStackInstanceResponseBody &) = default ;
    GetStackInstanceResponseBody& operator=(GetStackInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StackInstance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StackInstance& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(DriftDetectionTime, driftDetectionTime_);
        DARABONBA_PTR_TO_JSON(Outputs, outputs_);
        DARABONBA_PTR_TO_JSON(ParameterOverrides, parameterOverrides_);
        DARABONBA_PTR_TO_JSON(RdFolderId, rdFolderId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(StackDriftStatus, stackDriftStatus_);
        DARABONBA_PTR_TO_JSON(StackGroupId, stackGroupId_);
        DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
        DARABONBA_PTR_TO_JSON(StackId, stackId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
      };
      friend void from_json(const Darabonba::Json& j, StackInstance& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(DriftDetectionTime, driftDetectionTime_);
        DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(ParameterOverrides, parameterOverrides_);
        DARABONBA_PTR_FROM_JSON(RdFolderId, rdFolderId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(StackDriftStatus, stackDriftStatus_);
        DARABONBA_PTR_FROM_JSON(StackGroupId, stackGroupId_);
        DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
        DARABONBA_PTR_FROM_JSON(StackId, stackId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
      };
      StackInstance() = default ;
      StackInstance(const StackInstance &) = default ;
      StackInstance(StackInstance &&) = default ;
      StackInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StackInstance() = default ;
      StackInstance& operator=(const StackInstance &) = default ;
      StackInstance& operator=(StackInstance &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ParameterOverrides : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParameterOverrides& obj) { 
          DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
          DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
        };
        friend void from_json(const Darabonba::Json& j, ParameterOverrides& obj) { 
          DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
          DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
        };
        ParameterOverrides() = default ;
        ParameterOverrides(const ParameterOverrides &) = default ;
        ParameterOverrides(ParameterOverrides &&) = default ;
        ParameterOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParameterOverrides() = default ;
        ParameterOverrides& operator=(const ParameterOverrides &) = default ;
        ParameterOverrides& operator=(ParameterOverrides &&) = default ;
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
        inline ParameterOverrides& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


        // parameterValue Field Functions 
        bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
        void deleteParameterValue() { this->parameterValue_ = nullptr;};
        inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
        inline ParameterOverrides& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


      protected:
        // The name of the parameter that is used to override a specific parameter.
        shared_ptr<string> parameterKey_ {};
        // The value of the parameter that is used to override a specific parameter.
        shared_ptr<string> parameterValue_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->driftDetectionTime_ == nullptr && this->outputs_ == nullptr && this->parameterOverrides_ == nullptr && this->rdFolderId_ == nullptr && this->regionId_ == nullptr
        && this->stackDriftStatus_ == nullptr && this->stackGroupId_ == nullptr && this->stackGroupName_ == nullptr && this->stackId_ == nullptr && this->status_ == nullptr
        && this->statusReason_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline StackInstance& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // driftDetectionTime Field Functions 
      bool hasDriftDetectionTime() const { return this->driftDetectionTime_ != nullptr;};
      void deleteDriftDetectionTime() { this->driftDetectionTime_ = nullptr;};
      inline string getDriftDetectionTime() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionTime_, "") };
      inline StackInstance& setDriftDetectionTime(string driftDetectionTime) { DARABONBA_PTR_SET_VALUE(driftDetectionTime_, driftDetectionTime) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline const vector<Darabonba::Json> & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getOutputs() { DARABONBA_PTR_GET(outputs_, vector<Darabonba::Json>) };
      inline StackInstance& setOutputs(const vector<Darabonba::Json> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
      inline StackInstance& setOutputs(vector<Darabonba::Json> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


      // parameterOverrides Field Functions 
      bool hasParameterOverrides() const { return this->parameterOverrides_ != nullptr;};
      void deleteParameterOverrides() { this->parameterOverrides_ = nullptr;};
      inline const vector<StackInstance::ParameterOverrides> & getParameterOverrides() const { DARABONBA_PTR_GET_CONST(parameterOverrides_, vector<StackInstance::ParameterOverrides>) };
      inline vector<StackInstance::ParameterOverrides> getParameterOverrides() { DARABONBA_PTR_GET(parameterOverrides_, vector<StackInstance::ParameterOverrides>) };
      inline StackInstance& setParameterOverrides(const vector<StackInstance::ParameterOverrides> & parameterOverrides) { DARABONBA_PTR_SET_VALUE(parameterOverrides_, parameterOverrides) };
      inline StackInstance& setParameterOverrides(vector<StackInstance::ParameterOverrides> && parameterOverrides) { DARABONBA_PTR_SET_RVALUE(parameterOverrides_, parameterOverrides) };


      // rdFolderId Field Functions 
      bool hasRdFolderId() const { return this->rdFolderId_ != nullptr;};
      void deleteRdFolderId() { this->rdFolderId_ = nullptr;};
      inline string getRdFolderId() const { DARABONBA_PTR_GET_DEFAULT(rdFolderId_, "") };
      inline StackInstance& setRdFolderId(string rdFolderId) { DARABONBA_PTR_SET_VALUE(rdFolderId_, rdFolderId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline StackInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // stackDriftStatus Field Functions 
      bool hasStackDriftStatus() const { return this->stackDriftStatus_ != nullptr;};
      void deleteStackDriftStatus() { this->stackDriftStatus_ = nullptr;};
      inline string getStackDriftStatus() const { DARABONBA_PTR_GET_DEFAULT(stackDriftStatus_, "") };
      inline StackInstance& setStackDriftStatus(string stackDriftStatus) { DARABONBA_PTR_SET_VALUE(stackDriftStatus_, stackDriftStatus) };


      // stackGroupId Field Functions 
      bool hasStackGroupId() const { return this->stackGroupId_ != nullptr;};
      void deleteStackGroupId() { this->stackGroupId_ = nullptr;};
      inline string getStackGroupId() const { DARABONBA_PTR_GET_DEFAULT(stackGroupId_, "") };
      inline StackInstance& setStackGroupId(string stackGroupId) { DARABONBA_PTR_SET_VALUE(stackGroupId_, stackGroupId) };


      // stackGroupName Field Functions 
      bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
      void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
      inline string getStackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
      inline StackInstance& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


      // stackId Field Functions 
      bool hasStackId() const { return this->stackId_ != nullptr;};
      void deleteStackId() { this->stackId_ = nullptr;};
      inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
      inline StackInstance& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline StackInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline StackInstance& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    protected:
      // The ID of the destination account to which the stack belongs.
      shared_ptr<string> accountId_ {};
      // The time when the most recent successful drift detection was performed on the stack group.
      // 
      // > This parameter is returned only if drift detection is performed on the stack group.
      shared_ptr<string> driftDetectionTime_ {};
      // The outputs of the stack.
      // 
      // >  This parameter is returned if OutputOption is set to Enabled.
      shared_ptr<vector<Darabonba::Json>> outputs_ {};
      // The parameters that are used to override specific parameters.
      shared_ptr<vector<StackInstance::ParameterOverrides>> parameterOverrides_ {};
      // The ID of the folder in the resource directory.
      // 
      // > This parameter is returned only if the stack group is granted service-managed permissions.
      shared_ptr<string> rdFolderId_ {};
      // The region ID of the stack.
      shared_ptr<string> regionId_ {};
      // The state of the stack when the most recent successful drift detection was performed on the stack group.
      // 
      // Valid values:
      // 
      // *   DRIFTED: The stack has drifted.
      // *   NOT_CHECKED: No successful drift detection is performed on the stack.
      // *   IN_SYNC: The stack is being synchronized.
      // 
      // > This parameter is returned only if drift detection is performed on the stack group.
      shared_ptr<string> stackDriftStatus_ {};
      // The ID of the stack group.
      shared_ptr<string> stackGroupId_ {};
      // The name of the stack group.
      shared_ptr<string> stackGroupName_ {};
      // The stack ID.
      // 
      // > This parameter is returned only if the stack is in the CURRENT state.
      shared_ptr<string> stackId_ {};
      // The state of the stack.
      // 
      // Valid values:
      // 
      // *   CURRENT: The stack is up-to-date with the stack group.
      // 
      // *   OUTDATED: The stack is not up-to-date with the stack group. Stacks are in the OUTDATED state due to the following possible reasons:
      // 
      //     *   When the CreateStackInstances operation is called to create stacks, the stacks fail to be created.
      //     *   When the UpdateStackInstances or UpdateStackGroup operation is called to update stacks, the stacks fail to be updated, or only specific stacks are updated.
      //     *   The creation or update operation is not complete.
      shared_ptr<string> status_ {};
      // The reason why the stack instance is in the OUTDATED state.
      // 
      // > This parameter is returned only if the stack instance is in the OUTDATED state.
      shared_ptr<string> statusReason_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->stackInstance_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStackInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackInstance Field Functions 
    bool hasStackInstance() const { return this->stackInstance_ != nullptr;};
    void deleteStackInstance() { this->stackInstance_ = nullptr;};
    inline const GetStackInstanceResponseBody::StackInstance & getStackInstance() const { DARABONBA_PTR_GET_CONST(stackInstance_, GetStackInstanceResponseBody::StackInstance) };
    inline GetStackInstanceResponseBody::StackInstance getStackInstance() { DARABONBA_PTR_GET(stackInstance_, GetStackInstanceResponseBody::StackInstance) };
    inline GetStackInstanceResponseBody& setStackInstance(const GetStackInstanceResponseBody::StackInstance & stackInstance) { DARABONBA_PTR_SET_VALUE(stackInstance_, stackInstance) };
    inline GetStackInstanceResponseBody& setStackInstance(GetStackInstanceResponseBody::StackInstance && stackInstance) { DARABONBA_PTR_SET_RVALUE(stackInstance_, stackInstance) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the stack.
    shared_ptr<GetStackInstanceResponseBody::StackInstance> stackInstance_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
