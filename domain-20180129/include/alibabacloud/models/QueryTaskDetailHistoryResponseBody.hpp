// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKDETAILHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKDETAILHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryTaskDetailHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskDetailHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageCursor, currentPageCursor_);
      DARABONBA_PTR_TO_JSON(NextPageCursor, nextPageCursor_);
      DARABONBA_PTR_TO_JSON(Objects, objects_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePageCursor, prePageCursor_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskDetailHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageCursor, currentPageCursor_);
      DARABONBA_PTR_FROM_JSON(NextPageCursor, nextPageCursor_);
      DARABONBA_PTR_FROM_JSON(Objects, objects_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePageCursor, prePageCursor_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryTaskDetailHistoryResponseBody() = default ;
    QueryTaskDetailHistoryResponseBody(const QueryTaskDetailHistoryResponseBody &) = default ;
    QueryTaskDetailHistoryResponseBody(QueryTaskDetailHistoryResponseBody &&) = default ;
    QueryTaskDetailHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskDetailHistoryResponseBody() = default ;
    QueryTaskDetailHistoryResponseBody& operator=(const QueryTaskDetailHistoryResponseBody &) = default ;
    QueryTaskDetailHistoryResponseBody& operator=(QueryTaskDetailHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrePageCursor : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrePageCursor& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(TaskDetailNo, taskDetailNo_);
        DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(TaskStatusCode, taskStatusCode_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(TaskTypeDescription, taskTypeDescription_);
        DARABONBA_PTR_TO_JSON(TryCount, tryCount_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, PrePageCursor& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(TaskDetailNo, taskDetailNo_);
        DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(TaskStatusCode, taskStatusCode_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(TaskTypeDescription, taskTypeDescription_);
        DARABONBA_PTR_FROM_JSON(TryCount, tryCount_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      PrePageCursor() = default ;
      PrePageCursor(const PrePageCursor &) = default ;
      PrePageCursor(PrePageCursor &&) = default ;
      PrePageCursor(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrePageCursor() = default ;
      PrePageCursor& operator=(const PrePageCursor &) = default ;
      PrePageCursor& operator=(PrePageCursor &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->domainName_ == nullptr && this->errorMsg_ == nullptr && this->instanceId_ == nullptr && this->taskDetailNo_ == nullptr && this->taskNo_ == nullptr
        && this->taskStatus_ == nullptr && this->taskStatusCode_ == nullptr && this->taskType_ == nullptr && this->taskTypeDescription_ == nullptr && this->tryCount_ == nullptr
        && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline PrePageCursor& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline PrePageCursor& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline PrePageCursor& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline PrePageCursor& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // taskDetailNo Field Functions 
      bool hasTaskDetailNo() const { return this->taskDetailNo_ != nullptr;};
      void deleteTaskDetailNo() { this->taskDetailNo_ = nullptr;};
      inline string getTaskDetailNo() const { DARABONBA_PTR_GET_DEFAULT(taskDetailNo_, "") };
      inline PrePageCursor& setTaskDetailNo(string taskDetailNo) { DARABONBA_PTR_SET_VALUE(taskDetailNo_, taskDetailNo) };


      // taskNo Field Functions 
      bool hasTaskNo() const { return this->taskNo_ != nullptr;};
      void deleteTaskNo() { this->taskNo_ = nullptr;};
      inline string getTaskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
      inline PrePageCursor& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline PrePageCursor& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // taskStatusCode Field Functions 
      bool hasTaskStatusCode() const { return this->taskStatusCode_ != nullptr;};
      void deleteTaskStatusCode() { this->taskStatusCode_ = nullptr;};
      inline int32_t getTaskStatusCode() const { DARABONBA_PTR_GET_DEFAULT(taskStatusCode_, 0) };
      inline PrePageCursor& setTaskStatusCode(int32_t taskStatusCode) { DARABONBA_PTR_SET_VALUE(taskStatusCode_, taskStatusCode) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline PrePageCursor& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // taskTypeDescription Field Functions 
      bool hasTaskTypeDescription() const { return this->taskTypeDescription_ != nullptr;};
      void deleteTaskTypeDescription() { this->taskTypeDescription_ = nullptr;};
      inline string getTaskTypeDescription() const { DARABONBA_PTR_GET_DEFAULT(taskTypeDescription_, "") };
      inline PrePageCursor& setTaskTypeDescription(string taskTypeDescription) { DARABONBA_PTR_SET_VALUE(taskTypeDescription_, taskTypeDescription) };


      // tryCount Field Functions 
      bool hasTryCount() const { return this->tryCount_ != nullptr;};
      void deleteTryCount() { this->tryCount_ = nullptr;};
      inline int32_t getTryCount() const { DARABONBA_PTR_GET_DEFAULT(tryCount_, 0) };
      inline PrePageCursor& setTryCount(int32_t tryCount) { DARABONBA_PTR_SET_VALUE(tryCount_, tryCount) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline PrePageCursor& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<string> errorMsg_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> taskDetailNo_ {};
      shared_ptr<string> taskNo_ {};
      shared_ptr<string> taskStatus_ {};
      shared_ptr<int32_t> taskStatusCode_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<string> taskTypeDescription_ {};
      shared_ptr<int32_t> tryCount_ {};
      shared_ptr<string> updateTime_ {};
    };

    class Objects : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Objects& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(TaskDetailNo, taskDetailNo_);
        DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(TaskStatusCode, taskStatusCode_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(TaskTypeDescription, taskTypeDescription_);
        DARABONBA_PTR_TO_JSON(TryCount, tryCount_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Objects& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(TaskDetailNo, taskDetailNo_);
        DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(TaskStatusCode, taskStatusCode_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(TaskTypeDescription, taskTypeDescription_);
        DARABONBA_PTR_FROM_JSON(TryCount, tryCount_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Objects() = default ;
      Objects(const Objects &) = default ;
      Objects(Objects &&) = default ;
      Objects(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Objects() = default ;
      Objects& operator=(const Objects &) = default ;
      Objects& operator=(Objects &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->domainName_ == nullptr && this->errorMsg_ == nullptr && this->instanceId_ == nullptr && this->taskDetailNo_ == nullptr && this->taskNo_ == nullptr
        && this->taskStatus_ == nullptr && this->taskStatusCode_ == nullptr && this->taskType_ == nullptr && this->taskTypeDescription_ == nullptr && this->tryCount_ == nullptr
        && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Objects& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Objects& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline Objects& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Objects& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // taskDetailNo Field Functions 
      bool hasTaskDetailNo() const { return this->taskDetailNo_ != nullptr;};
      void deleteTaskDetailNo() { this->taskDetailNo_ = nullptr;};
      inline string getTaskDetailNo() const { DARABONBA_PTR_GET_DEFAULT(taskDetailNo_, "") };
      inline Objects& setTaskDetailNo(string taskDetailNo) { DARABONBA_PTR_SET_VALUE(taskDetailNo_, taskDetailNo) };


      // taskNo Field Functions 
      bool hasTaskNo() const { return this->taskNo_ != nullptr;};
      void deleteTaskNo() { this->taskNo_ = nullptr;};
      inline string getTaskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
      inline Objects& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline Objects& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // taskStatusCode Field Functions 
      bool hasTaskStatusCode() const { return this->taskStatusCode_ != nullptr;};
      void deleteTaskStatusCode() { this->taskStatusCode_ = nullptr;};
      inline int32_t getTaskStatusCode() const { DARABONBA_PTR_GET_DEFAULT(taskStatusCode_, 0) };
      inline Objects& setTaskStatusCode(int32_t taskStatusCode) { DARABONBA_PTR_SET_VALUE(taskStatusCode_, taskStatusCode) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Objects& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // taskTypeDescription Field Functions 
      bool hasTaskTypeDescription() const { return this->taskTypeDescription_ != nullptr;};
      void deleteTaskTypeDescription() { this->taskTypeDescription_ = nullptr;};
      inline string getTaskTypeDescription() const { DARABONBA_PTR_GET_DEFAULT(taskTypeDescription_, "") };
      inline Objects& setTaskTypeDescription(string taskTypeDescription) { DARABONBA_PTR_SET_VALUE(taskTypeDescription_, taskTypeDescription) };


      // tryCount Field Functions 
      bool hasTryCount() const { return this->tryCount_ != nullptr;};
      void deleteTryCount() { this->tryCount_ = nullptr;};
      inline int32_t getTryCount() const { DARABONBA_PTR_GET_DEFAULT(tryCount_, 0) };
      inline Objects& setTryCount(int32_t tryCount) { DARABONBA_PTR_SET_VALUE(tryCount_, tryCount) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Objects& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<string> errorMsg_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> taskDetailNo_ {};
      shared_ptr<string> taskNo_ {};
      shared_ptr<string> taskStatus_ {};
      shared_ptr<int32_t> taskStatusCode_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<string> taskTypeDescription_ {};
      shared_ptr<int32_t> tryCount_ {};
      shared_ptr<string> updateTime_ {};
    };

    class NextPageCursor : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NextPageCursor& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(TaskDetailNo, taskDetailNo_);
        DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(TaskStatusCode, taskStatusCode_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(TaskTypeDescription, taskTypeDescription_);
        DARABONBA_PTR_TO_JSON(TryCount, tryCount_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, NextPageCursor& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(TaskDetailNo, taskDetailNo_);
        DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(TaskStatusCode, taskStatusCode_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(TaskTypeDescription, taskTypeDescription_);
        DARABONBA_PTR_FROM_JSON(TryCount, tryCount_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      NextPageCursor() = default ;
      NextPageCursor(const NextPageCursor &) = default ;
      NextPageCursor(NextPageCursor &&) = default ;
      NextPageCursor(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NextPageCursor() = default ;
      NextPageCursor& operator=(const NextPageCursor &) = default ;
      NextPageCursor& operator=(NextPageCursor &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->domainName_ == nullptr && this->errorMsg_ == nullptr && this->instanceId_ == nullptr && this->taskDetailNo_ == nullptr && this->taskNo_ == nullptr
        && this->taskStatus_ == nullptr && this->taskStatusCode_ == nullptr && this->taskType_ == nullptr && this->taskTypeDescription_ == nullptr && this->tryCount_ == nullptr
        && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline NextPageCursor& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline NextPageCursor& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline NextPageCursor& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline NextPageCursor& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // taskDetailNo Field Functions 
      bool hasTaskDetailNo() const { return this->taskDetailNo_ != nullptr;};
      void deleteTaskDetailNo() { this->taskDetailNo_ = nullptr;};
      inline string getTaskDetailNo() const { DARABONBA_PTR_GET_DEFAULT(taskDetailNo_, "") };
      inline NextPageCursor& setTaskDetailNo(string taskDetailNo) { DARABONBA_PTR_SET_VALUE(taskDetailNo_, taskDetailNo) };


      // taskNo Field Functions 
      bool hasTaskNo() const { return this->taskNo_ != nullptr;};
      void deleteTaskNo() { this->taskNo_ = nullptr;};
      inline string getTaskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
      inline NextPageCursor& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline NextPageCursor& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // taskStatusCode Field Functions 
      bool hasTaskStatusCode() const { return this->taskStatusCode_ != nullptr;};
      void deleteTaskStatusCode() { this->taskStatusCode_ = nullptr;};
      inline int32_t getTaskStatusCode() const { DARABONBA_PTR_GET_DEFAULT(taskStatusCode_, 0) };
      inline NextPageCursor& setTaskStatusCode(int32_t taskStatusCode) { DARABONBA_PTR_SET_VALUE(taskStatusCode_, taskStatusCode) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline NextPageCursor& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // taskTypeDescription Field Functions 
      bool hasTaskTypeDescription() const { return this->taskTypeDescription_ != nullptr;};
      void deleteTaskTypeDescription() { this->taskTypeDescription_ = nullptr;};
      inline string getTaskTypeDescription() const { DARABONBA_PTR_GET_DEFAULT(taskTypeDescription_, "") };
      inline NextPageCursor& setTaskTypeDescription(string taskTypeDescription) { DARABONBA_PTR_SET_VALUE(taskTypeDescription_, taskTypeDescription) };


      // tryCount Field Functions 
      bool hasTryCount() const { return this->tryCount_ != nullptr;};
      void deleteTryCount() { this->tryCount_ = nullptr;};
      inline int32_t getTryCount() const { DARABONBA_PTR_GET_DEFAULT(tryCount_, 0) };
      inline NextPageCursor& setTryCount(int32_t tryCount) { DARABONBA_PTR_SET_VALUE(tryCount_, tryCount) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline NextPageCursor& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<string> errorMsg_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> taskDetailNo_ {};
      shared_ptr<string> taskNo_ {};
      shared_ptr<string> taskStatus_ {};
      shared_ptr<int32_t> taskStatusCode_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<string> taskTypeDescription_ {};
      shared_ptr<int32_t> tryCount_ {};
      shared_ptr<string> updateTime_ {};
    };

    class CurrentPageCursor : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CurrentPageCursor& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(TaskDetailNo, taskDetailNo_);
        DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(TaskStatusCode, taskStatusCode_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(TaskTypeDescription, taskTypeDescription_);
        DARABONBA_PTR_TO_JSON(TryCount, tryCount_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, CurrentPageCursor& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(TaskDetailNo, taskDetailNo_);
        DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(TaskStatusCode, taskStatusCode_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(TaskTypeDescription, taskTypeDescription_);
        DARABONBA_PTR_FROM_JSON(TryCount, tryCount_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      CurrentPageCursor() = default ;
      CurrentPageCursor(const CurrentPageCursor &) = default ;
      CurrentPageCursor(CurrentPageCursor &&) = default ;
      CurrentPageCursor(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CurrentPageCursor() = default ;
      CurrentPageCursor& operator=(const CurrentPageCursor &) = default ;
      CurrentPageCursor& operator=(CurrentPageCursor &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->domainName_ == nullptr && this->errorMsg_ == nullptr && this->instanceId_ == nullptr && this->taskDetailNo_ == nullptr && this->taskNo_ == nullptr
        && this->taskStatus_ == nullptr && this->taskStatusCode_ == nullptr && this->taskType_ == nullptr && this->taskTypeDescription_ == nullptr && this->tryCount_ == nullptr
        && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline CurrentPageCursor& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline CurrentPageCursor& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline CurrentPageCursor& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CurrentPageCursor& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // taskDetailNo Field Functions 
      bool hasTaskDetailNo() const { return this->taskDetailNo_ != nullptr;};
      void deleteTaskDetailNo() { this->taskDetailNo_ = nullptr;};
      inline string getTaskDetailNo() const { DARABONBA_PTR_GET_DEFAULT(taskDetailNo_, "") };
      inline CurrentPageCursor& setTaskDetailNo(string taskDetailNo) { DARABONBA_PTR_SET_VALUE(taskDetailNo_, taskDetailNo) };


      // taskNo Field Functions 
      bool hasTaskNo() const { return this->taskNo_ != nullptr;};
      void deleteTaskNo() { this->taskNo_ = nullptr;};
      inline string getTaskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
      inline CurrentPageCursor& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline CurrentPageCursor& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // taskStatusCode Field Functions 
      bool hasTaskStatusCode() const { return this->taskStatusCode_ != nullptr;};
      void deleteTaskStatusCode() { this->taskStatusCode_ = nullptr;};
      inline int32_t getTaskStatusCode() const { DARABONBA_PTR_GET_DEFAULT(taskStatusCode_, 0) };
      inline CurrentPageCursor& setTaskStatusCode(int32_t taskStatusCode) { DARABONBA_PTR_SET_VALUE(taskStatusCode_, taskStatusCode) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline CurrentPageCursor& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // taskTypeDescription Field Functions 
      bool hasTaskTypeDescription() const { return this->taskTypeDescription_ != nullptr;};
      void deleteTaskTypeDescription() { this->taskTypeDescription_ = nullptr;};
      inline string getTaskTypeDescription() const { DARABONBA_PTR_GET_DEFAULT(taskTypeDescription_, "") };
      inline CurrentPageCursor& setTaskTypeDescription(string taskTypeDescription) { DARABONBA_PTR_SET_VALUE(taskTypeDescription_, taskTypeDescription) };


      // tryCount Field Functions 
      bool hasTryCount() const { return this->tryCount_ != nullptr;};
      void deleteTryCount() { this->tryCount_ = nullptr;};
      inline int32_t getTryCount() const { DARABONBA_PTR_GET_DEFAULT(tryCount_, 0) };
      inline CurrentPageCursor& setTryCount(int32_t tryCount) { DARABONBA_PTR_SET_VALUE(tryCount_, tryCount) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline CurrentPageCursor& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<string> errorMsg_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> taskDetailNo_ {};
      shared_ptr<string> taskNo_ {};
      shared_ptr<string> taskStatus_ {};
      shared_ptr<int32_t> taskStatusCode_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<string> taskTypeDescription_ {};
      shared_ptr<int32_t> tryCount_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->currentPageCursor_ == nullptr
        && this->nextPageCursor_ == nullptr && this->objects_ == nullptr && this->pageSize_ == nullptr && this->prePageCursor_ == nullptr && this->requestId_ == nullptr; };
    // currentPageCursor Field Functions 
    bool hasCurrentPageCursor() const { return this->currentPageCursor_ != nullptr;};
    void deleteCurrentPageCursor() { this->currentPageCursor_ = nullptr;};
    inline const QueryTaskDetailHistoryResponseBody::CurrentPageCursor & getCurrentPageCursor() const { DARABONBA_PTR_GET_CONST(currentPageCursor_, QueryTaskDetailHistoryResponseBody::CurrentPageCursor) };
    inline QueryTaskDetailHistoryResponseBody::CurrentPageCursor getCurrentPageCursor() { DARABONBA_PTR_GET(currentPageCursor_, QueryTaskDetailHistoryResponseBody::CurrentPageCursor) };
    inline QueryTaskDetailHistoryResponseBody& setCurrentPageCursor(const QueryTaskDetailHistoryResponseBody::CurrentPageCursor & currentPageCursor) { DARABONBA_PTR_SET_VALUE(currentPageCursor_, currentPageCursor) };
    inline QueryTaskDetailHistoryResponseBody& setCurrentPageCursor(QueryTaskDetailHistoryResponseBody::CurrentPageCursor && currentPageCursor) { DARABONBA_PTR_SET_RVALUE(currentPageCursor_, currentPageCursor) };


    // nextPageCursor Field Functions 
    bool hasNextPageCursor() const { return this->nextPageCursor_ != nullptr;};
    void deleteNextPageCursor() { this->nextPageCursor_ = nullptr;};
    inline const QueryTaskDetailHistoryResponseBody::NextPageCursor & getNextPageCursor() const { DARABONBA_PTR_GET_CONST(nextPageCursor_, QueryTaskDetailHistoryResponseBody::NextPageCursor) };
    inline QueryTaskDetailHistoryResponseBody::NextPageCursor getNextPageCursor() { DARABONBA_PTR_GET(nextPageCursor_, QueryTaskDetailHistoryResponseBody::NextPageCursor) };
    inline QueryTaskDetailHistoryResponseBody& setNextPageCursor(const QueryTaskDetailHistoryResponseBody::NextPageCursor & nextPageCursor) { DARABONBA_PTR_SET_VALUE(nextPageCursor_, nextPageCursor) };
    inline QueryTaskDetailHistoryResponseBody& setNextPageCursor(QueryTaskDetailHistoryResponseBody::NextPageCursor && nextPageCursor) { DARABONBA_PTR_SET_RVALUE(nextPageCursor_, nextPageCursor) };


    // objects Field Functions 
    bool hasObjects() const { return this->objects_ != nullptr;};
    void deleteObjects() { this->objects_ = nullptr;};
    inline const vector<QueryTaskDetailHistoryResponseBody::Objects> & getObjects() const { DARABONBA_PTR_GET_CONST(objects_, vector<QueryTaskDetailHistoryResponseBody::Objects>) };
    inline vector<QueryTaskDetailHistoryResponseBody::Objects> getObjects() { DARABONBA_PTR_GET(objects_, vector<QueryTaskDetailHistoryResponseBody::Objects>) };
    inline QueryTaskDetailHistoryResponseBody& setObjects(const vector<QueryTaskDetailHistoryResponseBody::Objects> & objects) { DARABONBA_PTR_SET_VALUE(objects_, objects) };
    inline QueryTaskDetailHistoryResponseBody& setObjects(vector<QueryTaskDetailHistoryResponseBody::Objects> && objects) { DARABONBA_PTR_SET_RVALUE(objects_, objects) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryTaskDetailHistoryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePageCursor Field Functions 
    bool hasPrePageCursor() const { return this->prePageCursor_ != nullptr;};
    void deletePrePageCursor() { this->prePageCursor_ = nullptr;};
    inline const QueryTaskDetailHistoryResponseBody::PrePageCursor & getPrePageCursor() const { DARABONBA_PTR_GET_CONST(prePageCursor_, QueryTaskDetailHistoryResponseBody::PrePageCursor) };
    inline QueryTaskDetailHistoryResponseBody::PrePageCursor getPrePageCursor() { DARABONBA_PTR_GET(prePageCursor_, QueryTaskDetailHistoryResponseBody::PrePageCursor) };
    inline QueryTaskDetailHistoryResponseBody& setPrePageCursor(const QueryTaskDetailHistoryResponseBody::PrePageCursor & prePageCursor) { DARABONBA_PTR_SET_VALUE(prePageCursor_, prePageCursor) };
    inline QueryTaskDetailHistoryResponseBody& setPrePageCursor(QueryTaskDetailHistoryResponseBody::PrePageCursor && prePageCursor) { DARABONBA_PTR_SET_RVALUE(prePageCursor_, prePageCursor) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTaskDetailHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryTaskDetailHistoryResponseBody::CurrentPageCursor> currentPageCursor_ {};
    shared_ptr<QueryTaskDetailHistoryResponseBody::NextPageCursor> nextPageCursor_ {};
    shared_ptr<vector<QueryTaskDetailHistoryResponseBody::Objects>> objects_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<QueryTaskDetailHistoryResponseBody::PrePageCursor> prePageCursor_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
