// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKSRESPONSEBODY_HPP_
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
  class ListStacksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStacksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Stacks, stacks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStacksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Stacks, stacks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListStacksResponseBody() = default ;
    ListStacksResponseBody(const ListStacksResponseBody &) = default ;
    ListStacksResponseBody(ListStacksResponseBody &&) = default ;
    ListStacksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStacksResponseBody() = default ;
    ListStacksResponseBody& operator=(const ListStacksResponseBody &) = default ;
    ListStacksResponseBody& operator=(ListStacksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Stacks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Stacks& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
        DARABONBA_PTR_TO_JSON(DisableRollback, disableRollback_);
        DARABONBA_PTR_TO_JSON(DriftDetectionTime, driftDetectionTime_);
        DARABONBA_PTR_TO_JSON(OperationInfo, operationInfo_);
        DARABONBA_PTR_TO_JSON(ParentStackId, parentStackId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(StackDriftStatus, stackDriftStatus_);
        DARABONBA_PTR_TO_JSON(StackId, stackId_);
        DARABONBA_PTR_TO_JSON(StackName, stackName_);
        DARABONBA_PTR_TO_JSON(StackType, stackType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TimeoutInMinutes, timeoutInMinutes_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Stacks& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
        DARABONBA_PTR_FROM_JSON(DisableRollback, disableRollback_);
        DARABONBA_PTR_FROM_JSON(DriftDetectionTime, driftDetectionTime_);
        DARABONBA_PTR_FROM_JSON(OperationInfo, operationInfo_);
        DARABONBA_PTR_FROM_JSON(ParentStackId, parentStackId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(StackDriftStatus, stackDriftStatus_);
        DARABONBA_PTR_FROM_JSON(StackId, stackId_);
        DARABONBA_PTR_FROM_JSON(StackName, stackName_);
        DARABONBA_PTR_FROM_JSON(StackType, stackType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TimeoutInMinutes, timeoutInMinutes_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Stacks() = default ;
      Stacks(const Stacks &) = default ;
      Stacks(Stacks &&) = default ;
      Stacks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Stacks() = default ;
      Stacks& operator=(const Stacks &) = default ;
      Stacks& operator=(Stacks &&) = default ;
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
        // The logical ID of the resource on which the operation error occurred.
        shared_ptr<string> logicalResourceId_ {};
        // The error message.
        shared_ptr<string> message_ {};
        // The ID of the request that is initiated to call the API operation of another Alibaba Cloud service.
        shared_ptr<string> requestId_ {};
        // The type of the resource on which the operation error occurred.
        shared_ptr<string> resourceType_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->deletionProtection_ == nullptr && this->disableRollback_ == nullptr && this->driftDetectionTime_ == nullptr && this->operationInfo_ == nullptr && this->parentStackId_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->serviceManaged_ == nullptr && this->serviceName_ == nullptr && this->stackDriftStatus_ == nullptr
        && this->stackId_ == nullptr && this->stackName_ == nullptr && this->stackType_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr
        && this->tags_ == nullptr && this->timeoutInMinutes_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Stacks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deletionProtection Field Functions 
      bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
      void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
      inline string getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, "") };
      inline Stacks& setDeletionProtection(string deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


      // disableRollback Field Functions 
      bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
      void deleteDisableRollback() { this->disableRollback_ = nullptr;};
      inline bool getDisableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
      inline Stacks& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


      // driftDetectionTime Field Functions 
      bool hasDriftDetectionTime() const { return this->driftDetectionTime_ != nullptr;};
      void deleteDriftDetectionTime() { this->driftDetectionTime_ = nullptr;};
      inline string getDriftDetectionTime() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionTime_, "") };
      inline Stacks& setDriftDetectionTime(string driftDetectionTime) { DARABONBA_PTR_SET_VALUE(driftDetectionTime_, driftDetectionTime) };


      // operationInfo Field Functions 
      bool hasOperationInfo() const { return this->operationInfo_ != nullptr;};
      void deleteOperationInfo() { this->operationInfo_ = nullptr;};
      inline const Stacks::OperationInfo & getOperationInfo() const { DARABONBA_PTR_GET_CONST(operationInfo_, Stacks::OperationInfo) };
      inline Stacks::OperationInfo getOperationInfo() { DARABONBA_PTR_GET(operationInfo_, Stacks::OperationInfo) };
      inline Stacks& setOperationInfo(const Stacks::OperationInfo & operationInfo) { DARABONBA_PTR_SET_VALUE(operationInfo_, operationInfo) };
      inline Stacks& setOperationInfo(Stacks::OperationInfo && operationInfo) { DARABONBA_PTR_SET_RVALUE(operationInfo_, operationInfo) };


      // parentStackId Field Functions 
      bool hasParentStackId() const { return this->parentStackId_ != nullptr;};
      void deleteParentStackId() { this->parentStackId_ = nullptr;};
      inline string getParentStackId() const { DARABONBA_PTR_GET_DEFAULT(parentStackId_, "") };
      inline Stacks& setParentStackId(string parentStackId) { DARABONBA_PTR_SET_VALUE(parentStackId_, parentStackId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Stacks& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Stacks& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // serviceManaged Field Functions 
      bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
      void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
      inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
      inline Stacks& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Stacks& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // stackDriftStatus Field Functions 
      bool hasStackDriftStatus() const { return this->stackDriftStatus_ != nullptr;};
      void deleteStackDriftStatus() { this->stackDriftStatus_ = nullptr;};
      inline string getStackDriftStatus() const { DARABONBA_PTR_GET_DEFAULT(stackDriftStatus_, "") };
      inline Stacks& setStackDriftStatus(string stackDriftStatus) { DARABONBA_PTR_SET_VALUE(stackDriftStatus_, stackDriftStatus) };


      // stackId Field Functions 
      bool hasStackId() const { return this->stackId_ != nullptr;};
      void deleteStackId() { this->stackId_ = nullptr;};
      inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
      inline Stacks& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


      // stackName Field Functions 
      bool hasStackName() const { return this->stackName_ != nullptr;};
      void deleteStackName() { this->stackName_ = nullptr;};
      inline string getStackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
      inline Stacks& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


      // stackType Field Functions 
      bool hasStackType() const { return this->stackType_ != nullptr;};
      void deleteStackType() { this->stackType_ = nullptr;};
      inline string getStackType() const { DARABONBA_PTR_GET_DEFAULT(stackType_, "") };
      inline Stacks& setStackType(string stackType) { DARABONBA_PTR_SET_VALUE(stackType_, stackType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Stacks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline Stacks& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Stacks::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Stacks::Tags>) };
      inline vector<Stacks::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Stacks::Tags>) };
      inline Stacks& setTags(const vector<Stacks::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Stacks& setTags(vector<Stacks::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // timeoutInMinutes Field Functions 
      bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
      void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
      inline int32_t getTimeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0) };
      inline Stacks& setTimeoutInMinutes(int32_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Stacks& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the stack was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // Indicates whether deletion protection is enabled for the stack. Valid values:
      // 
      // *   Enabled: Deletion protection is enabled for the stack.
      // *   Disabled: Deletion protection is disabled for the stack. In this case, you can delete the stack by using the console or calling the [DeleteStack](https://help.aliyun.com/document_detail/610812.html) operation.
      // 
      // >  Deletion protection of a nested stack is the same as that of its root stack.
      shared_ptr<string> deletionProtection_ {};
      // Indicates whether rollback is disabled when the stack fails to be created. Valid values:
      // 
      // *   true
      // *   false (default)
      shared_ptr<bool> disableRollback_ {};
      // The time when the most recent successful drift detection was performed on the stack.
      shared_ptr<string> driftDetectionTime_ {};
      // The supplementary information that is returned if an error occurs on a stack operation.
      // 
      // >  This parameter is returned only under specific conditions, and is returned together with at least one sub-parameter. For example, an error occurred when an API operation of another Alibaba Cloud service was called.
      shared_ptr<Stacks::OperationInfo> operationInfo_ {};
      // The ID of the parent stack.
      shared_ptr<string> parentStackId_ {};
      // The region ID of the stack. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
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
      // The stack name.
      shared_ptr<string> stackName_ {};
      // The stack type. Valid values:
      // 
      // *   ROS: ROS stack. The stack is created by using a ROS template.
      // *   Terraform: Terraform stack. The stack is created by using a Terraform template.
      shared_ptr<string> stackType_ {};
      // The state of the stack.
      shared_ptr<string> status_ {};
      // The reason why the stack is in its current state.
      shared_ptr<string> statusReason_ {};
      // The tags of the stack.
      shared_ptr<vector<Stacks::Tags>> tags_ {};
      // The timeout period for creating the stack. Unit: minutes.
      shared_ptr<int32_t> timeoutInMinutes_ {};
      // The time when the stack was updated. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->stacks_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListStacksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListStacksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStacksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stacks Field Functions 
    bool hasStacks() const { return this->stacks_ != nullptr;};
    void deleteStacks() { this->stacks_ = nullptr;};
    inline const vector<ListStacksResponseBody::Stacks> & getStacks() const { DARABONBA_PTR_GET_CONST(stacks_, vector<ListStacksResponseBody::Stacks>) };
    inline vector<ListStacksResponseBody::Stacks> getStacks() { DARABONBA_PTR_GET(stacks_, vector<ListStacksResponseBody::Stacks>) };
    inline ListStacksResponseBody& setStacks(const vector<ListStacksResponseBody::Stacks> & stacks) { DARABONBA_PTR_SET_VALUE(stacks_, stacks) };
    inline ListStacksResponseBody& setStacks(vector<ListStacksResponseBody::Stacks> && stacks) { DARABONBA_PTR_SET_RVALUE(stacks_, stacks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListStacksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // Maximum value: 50.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Details of the stacks.
    shared_ptr<vector<ListStacksResponseBody::Stacks>> stacks_ {};
    // The total number of stacks.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
