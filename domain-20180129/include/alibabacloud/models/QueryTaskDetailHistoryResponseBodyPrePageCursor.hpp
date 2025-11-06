// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKDETAILHISTORYRESPONSEBODYPREPAGECURSOR_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKDETAILHISTORYRESPONSEBODYPREPAGECURSOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryTaskDetailHistoryResponseBodyPrePageCursor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskDetailHistoryResponseBodyPrePageCursor& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QueryTaskDetailHistoryResponseBodyPrePageCursor& obj) { 
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
    QueryTaskDetailHistoryResponseBodyPrePageCursor() = default ;
    QueryTaskDetailHistoryResponseBodyPrePageCursor(const QueryTaskDetailHistoryResponseBodyPrePageCursor &) = default ;
    QueryTaskDetailHistoryResponseBodyPrePageCursor(QueryTaskDetailHistoryResponseBodyPrePageCursor &&) = default ;
    QueryTaskDetailHistoryResponseBodyPrePageCursor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskDetailHistoryResponseBodyPrePageCursor() = default ;
    QueryTaskDetailHistoryResponseBodyPrePageCursor& operator=(const QueryTaskDetailHistoryResponseBodyPrePageCursor &) = default ;
    QueryTaskDetailHistoryResponseBodyPrePageCursor& operator=(QueryTaskDetailHistoryResponseBodyPrePageCursor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->domainName_ == nullptr && return this->errorMsg_ == nullptr && return this->instanceId_ == nullptr && return this->taskDetailNo_ == nullptr && return this->taskNo_ == nullptr
        && return this->taskStatus_ == nullptr && return this->taskStatusCode_ == nullptr && return this->taskType_ == nullptr && return this->taskTypeDescription_ == nullptr && return this->tryCount_ == nullptr
        && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryTaskDetailHistoryResponseBodyPrePageCursor& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryTaskDetailHistoryResponseBodyPrePageCursor& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline QueryTaskDetailHistoryResponseBodyPrePageCursor& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryTaskDetailHistoryResponseBodyPrePageCursor& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // taskDetailNo Field Functions 
    bool hasTaskDetailNo() const { return this->taskDetailNo_ != nullptr;};
    void deleteTaskDetailNo() { this->taskDetailNo_ = nullptr;};
    inline string taskDetailNo() const { DARABONBA_PTR_GET_DEFAULT(taskDetailNo_, "") };
    inline QueryTaskDetailHistoryResponseBodyPrePageCursor& setTaskDetailNo(string taskDetailNo) { DARABONBA_PTR_SET_VALUE(taskDetailNo_, taskDetailNo) };


    // taskNo Field Functions 
    bool hasTaskNo() const { return this->taskNo_ != nullptr;};
    void deleteTaskNo() { this->taskNo_ = nullptr;};
    inline string taskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
    inline QueryTaskDetailHistoryResponseBodyPrePageCursor& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline QueryTaskDetailHistoryResponseBodyPrePageCursor& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskStatusCode Field Functions 
    bool hasTaskStatusCode() const { return this->taskStatusCode_ != nullptr;};
    void deleteTaskStatusCode() { this->taskStatusCode_ = nullptr;};
    inline int32_t taskStatusCode() const { DARABONBA_PTR_GET_DEFAULT(taskStatusCode_, 0) };
    inline QueryTaskDetailHistoryResponseBodyPrePageCursor& setTaskStatusCode(int32_t taskStatusCode) { DARABONBA_PTR_SET_VALUE(taskStatusCode_, taskStatusCode) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline QueryTaskDetailHistoryResponseBodyPrePageCursor& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // taskTypeDescription Field Functions 
    bool hasTaskTypeDescription() const { return this->taskTypeDescription_ != nullptr;};
    void deleteTaskTypeDescription() { this->taskTypeDescription_ = nullptr;};
    inline string taskTypeDescription() const { DARABONBA_PTR_GET_DEFAULT(taskTypeDescription_, "") };
    inline QueryTaskDetailHistoryResponseBodyPrePageCursor& setTaskTypeDescription(string taskTypeDescription) { DARABONBA_PTR_SET_VALUE(taskTypeDescription_, taskTypeDescription) };


    // tryCount Field Functions 
    bool hasTryCount() const { return this->tryCount_ != nullptr;};
    void deleteTryCount() { this->tryCount_ = nullptr;};
    inline int32_t tryCount() const { DARABONBA_PTR_GET_DEFAULT(tryCount_, 0) };
    inline QueryTaskDetailHistoryResponseBodyPrePageCursor& setTryCount(int32_t tryCount) { DARABONBA_PTR_SET_VALUE(tryCount_, tryCount) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline QueryTaskDetailHistoryResponseBodyPrePageCursor& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> taskDetailNo_ = nullptr;
    std::shared_ptr<string> taskNo_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
    std::shared_ptr<int32_t> taskStatusCode_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<string> taskTypeDescription_ = nullptr;
    std::shared_ptr<int32_t> tryCount_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
