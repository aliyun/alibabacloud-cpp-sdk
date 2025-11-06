// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKINFOHISTORYRESPONSEBODYCURRENTPAGECURSOR_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKINFOHISTORYRESPONSEBODYCURRENTPAGECURSOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryTaskInfoHistoryResponseBodyCurrentPageCursor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskInfoHistoryResponseBodyCurrentPageCursor& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QueryTaskInfoHistoryResponseBodyCurrentPageCursor& obj) { 
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
    QueryTaskInfoHistoryResponseBodyCurrentPageCursor() = default ;
    QueryTaskInfoHistoryResponseBodyCurrentPageCursor(const QueryTaskInfoHistoryResponseBodyCurrentPageCursor &) = default ;
    QueryTaskInfoHistoryResponseBodyCurrentPageCursor(QueryTaskInfoHistoryResponseBodyCurrentPageCursor &&) = default ;
    QueryTaskInfoHistoryResponseBodyCurrentPageCursor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskInfoHistoryResponseBodyCurrentPageCursor() = default ;
    QueryTaskInfoHistoryResponseBodyCurrentPageCursor& operator=(const QueryTaskInfoHistoryResponseBodyCurrentPageCursor &) = default ;
    QueryTaskInfoHistoryResponseBodyCurrentPageCursor& operator=(QueryTaskInfoHistoryResponseBodyCurrentPageCursor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientip_ == nullptr
        && return this->createTime_ == nullptr && return this->createTimeLong_ == nullptr && return this->taskNo_ == nullptr && return this->taskNum_ == nullptr && return this->taskStatus_ == nullptr
        && return this->taskStatusCode_ == nullptr && return this->taskType_ == nullptr && return this->taskTypeDescription_ == nullptr; };
    // clientip Field Functions 
    bool hasClientip() const { return this->clientip_ != nullptr;};
    void deleteClientip() { this->clientip_ = nullptr;};
    inline string clientip() const { DARABONBA_PTR_GET_DEFAULT(clientip_, "") };
    inline QueryTaskInfoHistoryResponseBodyCurrentPageCursor& setClientip(string clientip) { DARABONBA_PTR_SET_VALUE(clientip_, clientip) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryTaskInfoHistoryResponseBodyCurrentPageCursor& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimeLong Field Functions 
    bool hasCreateTimeLong() const { return this->createTimeLong_ != nullptr;};
    void deleteCreateTimeLong() { this->createTimeLong_ = nullptr;};
    inline int64_t createTimeLong() const { DARABONBA_PTR_GET_DEFAULT(createTimeLong_, 0L) };
    inline QueryTaskInfoHistoryResponseBodyCurrentPageCursor& setCreateTimeLong(int64_t createTimeLong) { DARABONBA_PTR_SET_VALUE(createTimeLong_, createTimeLong) };


    // taskNo Field Functions 
    bool hasTaskNo() const { return this->taskNo_ != nullptr;};
    void deleteTaskNo() { this->taskNo_ = nullptr;};
    inline string taskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
    inline QueryTaskInfoHistoryResponseBodyCurrentPageCursor& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


    // taskNum Field Functions 
    bool hasTaskNum() const { return this->taskNum_ != nullptr;};
    void deleteTaskNum() { this->taskNum_ = nullptr;};
    inline int32_t taskNum() const { DARABONBA_PTR_GET_DEFAULT(taskNum_, 0) };
    inline QueryTaskInfoHistoryResponseBodyCurrentPageCursor& setTaskNum(int32_t taskNum) { DARABONBA_PTR_SET_VALUE(taskNum_, taskNum) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline QueryTaskInfoHistoryResponseBodyCurrentPageCursor& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskStatusCode Field Functions 
    bool hasTaskStatusCode() const { return this->taskStatusCode_ != nullptr;};
    void deleteTaskStatusCode() { this->taskStatusCode_ = nullptr;};
    inline int32_t taskStatusCode() const { DARABONBA_PTR_GET_DEFAULT(taskStatusCode_, 0) };
    inline QueryTaskInfoHistoryResponseBodyCurrentPageCursor& setTaskStatusCode(int32_t taskStatusCode) { DARABONBA_PTR_SET_VALUE(taskStatusCode_, taskStatusCode) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline QueryTaskInfoHistoryResponseBodyCurrentPageCursor& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // taskTypeDescription Field Functions 
    bool hasTaskTypeDescription() const { return this->taskTypeDescription_ != nullptr;};
    void deleteTaskTypeDescription() { this->taskTypeDescription_ = nullptr;};
    inline string taskTypeDescription() const { DARABONBA_PTR_GET_DEFAULT(taskTypeDescription_, "") };
    inline QueryTaskInfoHistoryResponseBodyCurrentPageCursor& setTaskTypeDescription(string taskTypeDescription) { DARABONBA_PTR_SET_VALUE(taskTypeDescription_, taskTypeDescription) };


  protected:
    std::shared_ptr<string> clientip_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> createTimeLong_ = nullptr;
    std::shared_ptr<string> taskNo_ = nullptr;
    std::shared_ptr<int32_t> taskNum_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
    std::shared_ptr<int32_t> taskStatusCode_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<string> taskTypeDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
