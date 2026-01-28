// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKINFOHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKINFOHISTORYRESPONSEBODY_HPP_
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
  class QueryTaskInfoHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskInfoHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageCursor, currentPageCursor_);
      DARABONBA_PTR_TO_JSON(NextPageCursor, nextPageCursor_);
      DARABONBA_PTR_TO_JSON(Objects, objects_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePageCursor, prePageCursor_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskInfoHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageCursor, currentPageCursor_);
      DARABONBA_PTR_FROM_JSON(NextPageCursor, nextPageCursor_);
      DARABONBA_PTR_FROM_JSON(Objects, objects_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePageCursor, prePageCursor_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryTaskInfoHistoryResponseBody() = default ;
    QueryTaskInfoHistoryResponseBody(const QueryTaskInfoHistoryResponseBody &) = default ;
    QueryTaskInfoHistoryResponseBody(QueryTaskInfoHistoryResponseBody &&) = default ;
    QueryTaskInfoHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskInfoHistoryResponseBody() = default ;
    QueryTaskInfoHistoryResponseBody& operator=(const QueryTaskInfoHistoryResponseBody &) = default ;
    QueryTaskInfoHistoryResponseBody& operator=(QueryTaskInfoHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrePageCursor : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrePageCursor& obj) { 
        DARABONBA_PTR_TO_JSON(Clientip, clientip_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateTimeLong, createTimeLong_);
        DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
        DARABONBA_PTR_TO_JSON(TaskNum, taskNum_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(TaskStatusCode, taskStatusCode_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(TaskTypeDescription, taskTypeDescription_);
      };
      friend void from_json(const Darabonba::Json& j, PrePageCursor& obj) { 
        DARABONBA_PTR_FROM_JSON(Clientip, clientip_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateTimeLong, createTimeLong_);
        DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
        DARABONBA_PTR_FROM_JSON(TaskNum, taskNum_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(TaskStatusCode, taskStatusCode_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(TaskTypeDescription, taskTypeDescription_);
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
      virtual bool empty() const override { return this->clientip_ == nullptr
        && this->createTime_ == nullptr && this->createTimeLong_ == nullptr && this->taskNo_ == nullptr && this->taskNum_ == nullptr && this->taskStatus_ == nullptr
        && this->taskStatusCode_ == nullptr && this->taskType_ == nullptr && this->taskTypeDescription_ == nullptr; };
      // clientip Field Functions 
      bool hasClientip() const { return this->clientip_ != nullptr;};
      void deleteClientip() { this->clientip_ = nullptr;};
      inline string getClientip() const { DARABONBA_PTR_GET_DEFAULT(clientip_, "") };
      inline PrePageCursor& setClientip(string clientip) { DARABONBA_PTR_SET_VALUE(clientip_, clientip) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline PrePageCursor& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createTimeLong Field Functions 
      bool hasCreateTimeLong() const { return this->createTimeLong_ != nullptr;};
      void deleteCreateTimeLong() { this->createTimeLong_ = nullptr;};
      inline int64_t getCreateTimeLong() const { DARABONBA_PTR_GET_DEFAULT(createTimeLong_, 0L) };
      inline PrePageCursor& setCreateTimeLong(int64_t createTimeLong) { DARABONBA_PTR_SET_VALUE(createTimeLong_, createTimeLong) };


      // taskNo Field Functions 
      bool hasTaskNo() const { return this->taskNo_ != nullptr;};
      void deleteTaskNo() { this->taskNo_ = nullptr;};
      inline string getTaskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
      inline PrePageCursor& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


      // taskNum Field Functions 
      bool hasTaskNum() const { return this->taskNum_ != nullptr;};
      void deleteTaskNum() { this->taskNum_ = nullptr;};
      inline int32_t getTaskNum() const { DARABONBA_PTR_GET_DEFAULT(taskNum_, 0) };
      inline PrePageCursor& setTaskNum(int32_t taskNum) { DARABONBA_PTR_SET_VALUE(taskNum_, taskNum) };


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


    protected:
      shared_ptr<string> clientip_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<int64_t> createTimeLong_ {};
      shared_ptr<string> taskNo_ {};
      shared_ptr<int32_t> taskNum_ {};
      shared_ptr<string> taskStatus_ {};
      shared_ptr<int32_t> taskStatusCode_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<string> taskTypeDescription_ {};
    };

    class Objects : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Objects& obj) { 
        DARABONBA_PTR_TO_JSON(Clientip, clientip_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateTimeLong, createTimeLong_);
        DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
        DARABONBA_PTR_TO_JSON(TaskNum, taskNum_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(TaskStatusCode, taskStatusCode_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(TaskTypeDescription, taskTypeDescription_);
      };
      friend void from_json(const Darabonba::Json& j, Objects& obj) { 
        DARABONBA_PTR_FROM_JSON(Clientip, clientip_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateTimeLong, createTimeLong_);
        DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
        DARABONBA_PTR_FROM_JSON(TaskNum, taskNum_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(TaskStatusCode, taskStatusCode_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(TaskTypeDescription, taskTypeDescription_);
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
      virtual bool empty() const override { return this->clientip_ == nullptr
        && this->createTime_ == nullptr && this->createTimeLong_ == nullptr && this->taskNo_ == nullptr && this->taskNum_ == nullptr && this->taskStatus_ == nullptr
        && this->taskStatusCode_ == nullptr && this->taskType_ == nullptr && this->taskTypeDescription_ == nullptr; };
      // clientip Field Functions 
      bool hasClientip() const { return this->clientip_ != nullptr;};
      void deleteClientip() { this->clientip_ = nullptr;};
      inline string getClientip() const { DARABONBA_PTR_GET_DEFAULT(clientip_, "") };
      inline Objects& setClientip(string clientip) { DARABONBA_PTR_SET_VALUE(clientip_, clientip) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Objects& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createTimeLong Field Functions 
      bool hasCreateTimeLong() const { return this->createTimeLong_ != nullptr;};
      void deleteCreateTimeLong() { this->createTimeLong_ = nullptr;};
      inline int64_t getCreateTimeLong() const { DARABONBA_PTR_GET_DEFAULT(createTimeLong_, 0L) };
      inline Objects& setCreateTimeLong(int64_t createTimeLong) { DARABONBA_PTR_SET_VALUE(createTimeLong_, createTimeLong) };


      // taskNo Field Functions 
      bool hasTaskNo() const { return this->taskNo_ != nullptr;};
      void deleteTaskNo() { this->taskNo_ = nullptr;};
      inline string getTaskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
      inline Objects& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


      // taskNum Field Functions 
      bool hasTaskNum() const { return this->taskNum_ != nullptr;};
      void deleteTaskNum() { this->taskNum_ = nullptr;};
      inline int32_t getTaskNum() const { DARABONBA_PTR_GET_DEFAULT(taskNum_, 0) };
      inline Objects& setTaskNum(int32_t taskNum) { DARABONBA_PTR_SET_VALUE(taskNum_, taskNum) };


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


    protected:
      shared_ptr<string> clientip_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<int64_t> createTimeLong_ {};
      shared_ptr<string> taskNo_ {};
      shared_ptr<int32_t> taskNum_ {};
      shared_ptr<string> taskStatus_ {};
      shared_ptr<int32_t> taskStatusCode_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<string> taskTypeDescription_ {};
    };

    class NextPageCursor : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NextPageCursor& obj) { 
        DARABONBA_PTR_TO_JSON(Clientip, clientip_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateTimeLong, createTimeLong_);
        DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
        DARABONBA_PTR_TO_JSON(TaskNum, taskNum_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(TaskStatusCode, taskStatusCode_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(TaskTypeDescription, taskTypeDescription_);
      };
      friend void from_json(const Darabonba::Json& j, NextPageCursor& obj) { 
        DARABONBA_PTR_FROM_JSON(Clientip, clientip_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateTimeLong, createTimeLong_);
        DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
        DARABONBA_PTR_FROM_JSON(TaskNum, taskNum_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(TaskStatusCode, taskStatusCode_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(TaskTypeDescription, taskTypeDescription_);
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
      virtual bool empty() const override { return this->clientip_ == nullptr
        && this->createTime_ == nullptr && this->createTimeLong_ == nullptr && this->taskNo_ == nullptr && this->taskNum_ == nullptr && this->taskStatus_ == nullptr
        && this->taskStatusCode_ == nullptr && this->taskType_ == nullptr && this->taskTypeDescription_ == nullptr; };
      // clientip Field Functions 
      bool hasClientip() const { return this->clientip_ != nullptr;};
      void deleteClientip() { this->clientip_ = nullptr;};
      inline string getClientip() const { DARABONBA_PTR_GET_DEFAULT(clientip_, "") };
      inline NextPageCursor& setClientip(string clientip) { DARABONBA_PTR_SET_VALUE(clientip_, clientip) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline NextPageCursor& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createTimeLong Field Functions 
      bool hasCreateTimeLong() const { return this->createTimeLong_ != nullptr;};
      void deleteCreateTimeLong() { this->createTimeLong_ = nullptr;};
      inline int64_t getCreateTimeLong() const { DARABONBA_PTR_GET_DEFAULT(createTimeLong_, 0L) };
      inline NextPageCursor& setCreateTimeLong(int64_t createTimeLong) { DARABONBA_PTR_SET_VALUE(createTimeLong_, createTimeLong) };


      // taskNo Field Functions 
      bool hasTaskNo() const { return this->taskNo_ != nullptr;};
      void deleteTaskNo() { this->taskNo_ = nullptr;};
      inline string getTaskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
      inline NextPageCursor& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


      // taskNum Field Functions 
      bool hasTaskNum() const { return this->taskNum_ != nullptr;};
      void deleteTaskNum() { this->taskNum_ = nullptr;};
      inline int32_t getTaskNum() const { DARABONBA_PTR_GET_DEFAULT(taskNum_, 0) };
      inline NextPageCursor& setTaskNum(int32_t taskNum) { DARABONBA_PTR_SET_VALUE(taskNum_, taskNum) };


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


    protected:
      shared_ptr<string> clientip_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<int64_t> createTimeLong_ {};
      shared_ptr<string> taskNo_ {};
      shared_ptr<int32_t> taskNum_ {};
      shared_ptr<string> taskStatus_ {};
      shared_ptr<int32_t> taskStatusCode_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<string> taskTypeDescription_ {};
    };

    class CurrentPageCursor : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CurrentPageCursor& obj) { 
        DARABONBA_PTR_TO_JSON(Clientip, clientip_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateTimeLong, createTimeLong_);
        DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
        DARABONBA_PTR_TO_JSON(TaskNum, taskNum_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(TaskStatusCode, taskStatusCode_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(TaskTypeDescription, taskTypeDescription_);
      };
      friend void from_json(const Darabonba::Json& j, CurrentPageCursor& obj) { 
        DARABONBA_PTR_FROM_JSON(Clientip, clientip_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateTimeLong, createTimeLong_);
        DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
        DARABONBA_PTR_FROM_JSON(TaskNum, taskNum_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(TaskStatusCode, taskStatusCode_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(TaskTypeDescription, taskTypeDescription_);
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
      virtual bool empty() const override { return this->clientip_ == nullptr
        && this->createTime_ == nullptr && this->createTimeLong_ == nullptr && this->taskNo_ == nullptr && this->taskNum_ == nullptr && this->taskStatus_ == nullptr
        && this->taskStatusCode_ == nullptr && this->taskType_ == nullptr && this->taskTypeDescription_ == nullptr; };
      // clientip Field Functions 
      bool hasClientip() const { return this->clientip_ != nullptr;};
      void deleteClientip() { this->clientip_ = nullptr;};
      inline string getClientip() const { DARABONBA_PTR_GET_DEFAULT(clientip_, "") };
      inline CurrentPageCursor& setClientip(string clientip) { DARABONBA_PTR_SET_VALUE(clientip_, clientip) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline CurrentPageCursor& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createTimeLong Field Functions 
      bool hasCreateTimeLong() const { return this->createTimeLong_ != nullptr;};
      void deleteCreateTimeLong() { this->createTimeLong_ = nullptr;};
      inline int64_t getCreateTimeLong() const { DARABONBA_PTR_GET_DEFAULT(createTimeLong_, 0L) };
      inline CurrentPageCursor& setCreateTimeLong(int64_t createTimeLong) { DARABONBA_PTR_SET_VALUE(createTimeLong_, createTimeLong) };


      // taskNo Field Functions 
      bool hasTaskNo() const { return this->taskNo_ != nullptr;};
      void deleteTaskNo() { this->taskNo_ = nullptr;};
      inline string getTaskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
      inline CurrentPageCursor& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


      // taskNum Field Functions 
      bool hasTaskNum() const { return this->taskNum_ != nullptr;};
      void deleteTaskNum() { this->taskNum_ = nullptr;};
      inline int32_t getTaskNum() const { DARABONBA_PTR_GET_DEFAULT(taskNum_, 0) };
      inline CurrentPageCursor& setTaskNum(int32_t taskNum) { DARABONBA_PTR_SET_VALUE(taskNum_, taskNum) };


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


    protected:
      shared_ptr<string> clientip_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<int64_t> createTimeLong_ {};
      shared_ptr<string> taskNo_ {};
      shared_ptr<int32_t> taskNum_ {};
      shared_ptr<string> taskStatus_ {};
      shared_ptr<int32_t> taskStatusCode_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<string> taskTypeDescription_ {};
    };

    virtual bool empty() const override { return this->currentPageCursor_ == nullptr
        && this->nextPageCursor_ == nullptr && this->objects_ == nullptr && this->pageSize_ == nullptr && this->prePageCursor_ == nullptr && this->requestId_ == nullptr; };
    // currentPageCursor Field Functions 
    bool hasCurrentPageCursor() const { return this->currentPageCursor_ != nullptr;};
    void deleteCurrentPageCursor() { this->currentPageCursor_ = nullptr;};
    inline const QueryTaskInfoHistoryResponseBody::CurrentPageCursor & getCurrentPageCursor() const { DARABONBA_PTR_GET_CONST(currentPageCursor_, QueryTaskInfoHistoryResponseBody::CurrentPageCursor) };
    inline QueryTaskInfoHistoryResponseBody::CurrentPageCursor getCurrentPageCursor() { DARABONBA_PTR_GET(currentPageCursor_, QueryTaskInfoHistoryResponseBody::CurrentPageCursor) };
    inline QueryTaskInfoHistoryResponseBody& setCurrentPageCursor(const QueryTaskInfoHistoryResponseBody::CurrentPageCursor & currentPageCursor) { DARABONBA_PTR_SET_VALUE(currentPageCursor_, currentPageCursor) };
    inline QueryTaskInfoHistoryResponseBody& setCurrentPageCursor(QueryTaskInfoHistoryResponseBody::CurrentPageCursor && currentPageCursor) { DARABONBA_PTR_SET_RVALUE(currentPageCursor_, currentPageCursor) };


    // nextPageCursor Field Functions 
    bool hasNextPageCursor() const { return this->nextPageCursor_ != nullptr;};
    void deleteNextPageCursor() { this->nextPageCursor_ = nullptr;};
    inline const QueryTaskInfoHistoryResponseBody::NextPageCursor & getNextPageCursor() const { DARABONBA_PTR_GET_CONST(nextPageCursor_, QueryTaskInfoHistoryResponseBody::NextPageCursor) };
    inline QueryTaskInfoHistoryResponseBody::NextPageCursor getNextPageCursor() { DARABONBA_PTR_GET(nextPageCursor_, QueryTaskInfoHistoryResponseBody::NextPageCursor) };
    inline QueryTaskInfoHistoryResponseBody& setNextPageCursor(const QueryTaskInfoHistoryResponseBody::NextPageCursor & nextPageCursor) { DARABONBA_PTR_SET_VALUE(nextPageCursor_, nextPageCursor) };
    inline QueryTaskInfoHistoryResponseBody& setNextPageCursor(QueryTaskInfoHistoryResponseBody::NextPageCursor && nextPageCursor) { DARABONBA_PTR_SET_RVALUE(nextPageCursor_, nextPageCursor) };


    // objects Field Functions 
    bool hasObjects() const { return this->objects_ != nullptr;};
    void deleteObjects() { this->objects_ = nullptr;};
    inline const vector<QueryTaskInfoHistoryResponseBody::Objects> & getObjects() const { DARABONBA_PTR_GET_CONST(objects_, vector<QueryTaskInfoHistoryResponseBody::Objects>) };
    inline vector<QueryTaskInfoHistoryResponseBody::Objects> getObjects() { DARABONBA_PTR_GET(objects_, vector<QueryTaskInfoHistoryResponseBody::Objects>) };
    inline QueryTaskInfoHistoryResponseBody& setObjects(const vector<QueryTaskInfoHistoryResponseBody::Objects> & objects) { DARABONBA_PTR_SET_VALUE(objects_, objects) };
    inline QueryTaskInfoHistoryResponseBody& setObjects(vector<QueryTaskInfoHistoryResponseBody::Objects> && objects) { DARABONBA_PTR_SET_RVALUE(objects_, objects) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryTaskInfoHistoryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePageCursor Field Functions 
    bool hasPrePageCursor() const { return this->prePageCursor_ != nullptr;};
    void deletePrePageCursor() { this->prePageCursor_ = nullptr;};
    inline const QueryTaskInfoHistoryResponseBody::PrePageCursor & getPrePageCursor() const { DARABONBA_PTR_GET_CONST(prePageCursor_, QueryTaskInfoHistoryResponseBody::PrePageCursor) };
    inline QueryTaskInfoHistoryResponseBody::PrePageCursor getPrePageCursor() { DARABONBA_PTR_GET(prePageCursor_, QueryTaskInfoHistoryResponseBody::PrePageCursor) };
    inline QueryTaskInfoHistoryResponseBody& setPrePageCursor(const QueryTaskInfoHistoryResponseBody::PrePageCursor & prePageCursor) { DARABONBA_PTR_SET_VALUE(prePageCursor_, prePageCursor) };
    inline QueryTaskInfoHistoryResponseBody& setPrePageCursor(QueryTaskInfoHistoryResponseBody::PrePageCursor && prePageCursor) { DARABONBA_PTR_SET_RVALUE(prePageCursor_, prePageCursor) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTaskInfoHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryTaskInfoHistoryResponseBody::CurrentPageCursor> currentPageCursor_ {};
    shared_ptr<QueryTaskInfoHistoryResponseBody::NextPageCursor> nextPageCursor_ {};
    shared_ptr<vector<QueryTaskInfoHistoryResponseBody::Objects>> objects_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<QueryTaskInfoHistoryResponseBody::PrePageCursor> prePageCursor_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
