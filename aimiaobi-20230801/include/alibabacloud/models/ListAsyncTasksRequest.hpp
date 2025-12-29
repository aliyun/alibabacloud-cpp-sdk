// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASYNCTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTASYNCTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListAsyncTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAsyncTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_TO_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(TaskCode, taskCode_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskStatusList, taskStatusList_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TaskTypeList, taskTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAsyncTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(TaskCode, taskCode_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskStatusList, taskStatusList_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TaskTypeList, taskTypeList_);
    };
    ListAsyncTasksRequest() = default ;
    ListAsyncTasksRequest(const ListAsyncTasksRequest &) = default ;
    ListAsyncTasksRequest(ListAsyncTasksRequest &&) = default ;
    ListAsyncTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAsyncTasksRequest() = default ;
    ListAsyncTasksRequest& operator=(const ListAsyncTasksRequest &) = default ;
    ListAsyncTasksRequest& operator=(ListAsyncTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->createTimeEnd_ == nullptr && this->createTimeStart_ == nullptr && this->current_ == nullptr && this->size_ == nullptr && this->taskCode_ == nullptr
        && this->taskName_ == nullptr && this->taskStatus_ == nullptr && this->taskStatusList_ == nullptr && this->taskType_ == nullptr && this->taskTypeList_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListAsyncTasksRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // createTimeEnd Field Functions 
    bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
    void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
    inline string getCreateTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, "") };
    inline ListAsyncTasksRequest& setCreateTimeEnd(string createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


    // createTimeStart Field Functions 
    bool hasCreateTimeStart() const { return this->createTimeStart_ != nullptr;};
    void deleteCreateTimeStart() { this->createTimeStart_ = nullptr;};
    inline string getCreateTimeStart() const { DARABONBA_PTR_GET_DEFAULT(createTimeStart_, "") };
    inline ListAsyncTasksRequest& setCreateTimeStart(string createTimeStart) { DARABONBA_PTR_SET_VALUE(createTimeStart_, createTimeStart) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ListAsyncTasksRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListAsyncTasksRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // taskCode Field Functions 
    bool hasTaskCode() const { return this->taskCode_ != nullptr;};
    void deleteTaskCode() { this->taskCode_ = nullptr;};
    inline string getTaskCode() const { DARABONBA_PTR_GET_DEFAULT(taskCode_, "") };
    inline ListAsyncTasksRequest& setTaskCode(string taskCode) { DARABONBA_PTR_SET_VALUE(taskCode_, taskCode) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListAsyncTasksRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline ListAsyncTasksRequest& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskStatusList Field Functions 
    bool hasTaskStatusList() const { return this->taskStatusList_ != nullptr;};
    void deleteTaskStatusList() { this->taskStatusList_ = nullptr;};
    inline const vector<int32_t> & getTaskStatusList() const { DARABONBA_PTR_GET_CONST(taskStatusList_, vector<int32_t>) };
    inline vector<int32_t> getTaskStatusList() { DARABONBA_PTR_GET(taskStatusList_, vector<int32_t>) };
    inline ListAsyncTasksRequest& setTaskStatusList(const vector<int32_t> & taskStatusList) { DARABONBA_PTR_SET_VALUE(taskStatusList_, taskStatusList) };
    inline ListAsyncTasksRequest& setTaskStatusList(vector<int32_t> && taskStatusList) { DARABONBA_PTR_SET_RVALUE(taskStatusList_, taskStatusList) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListAsyncTasksRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // taskTypeList Field Functions 
    bool hasTaskTypeList() const { return this->taskTypeList_ != nullptr;};
    void deleteTaskTypeList() { this->taskTypeList_ = nullptr;};
    inline const vector<string> & getTaskTypeList() const { DARABONBA_PTR_GET_CONST(taskTypeList_, vector<string>) };
    inline vector<string> getTaskTypeList() { DARABONBA_PTR_GET(taskTypeList_, vector<string>) };
    inline ListAsyncTasksRequest& setTaskTypeList(const vector<string> & taskTypeList) { DARABONBA_PTR_SET_VALUE(taskTypeList_, taskTypeList) };
    inline ListAsyncTasksRequest& setTaskTypeList(vector<string> && taskTypeList) { DARABONBA_PTR_SET_RVALUE(taskTypeList_, taskTypeList) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    shared_ptr<string> createTimeEnd_ {};
    shared_ptr<string> createTimeStart_ {};
    shared_ptr<int32_t> current_ {};
    shared_ptr<int32_t> size_ {};
    shared_ptr<string> taskCode_ {};
    shared_ptr<string> taskName_ {};
    shared_ptr<int32_t> taskStatus_ {};
    shared_ptr<vector<int32_t>> taskStatusList_ {};
    shared_ptr<string> taskType_ {};
    shared_ptr<vector<string>> taskTypeList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
