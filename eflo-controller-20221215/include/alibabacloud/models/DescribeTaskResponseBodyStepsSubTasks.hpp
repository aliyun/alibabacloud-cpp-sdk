// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKRESPONSEBODYSTEPSSUBTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKRESPONSEBODYSTEPSSUBTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeTaskResponseBodyStepsSubTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskResponseBodyStepsSubTasks& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskState, taskState_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskResponseBodyStepsSubTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeTaskResponseBodyStepsSubTasks() = default ;
    DescribeTaskResponseBodyStepsSubTasks(const DescribeTaskResponseBodyStepsSubTasks &) = default ;
    DescribeTaskResponseBodyStepsSubTasks(DescribeTaskResponseBodyStepsSubTasks &&) = default ;
    DescribeTaskResponseBodyStepsSubTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskResponseBodyStepsSubTasks() = default ;
    DescribeTaskResponseBodyStepsSubTasks& operator=(const DescribeTaskResponseBodyStepsSubTasks &) = default ;
    DescribeTaskResponseBodyStepsSubTasks& operator=(DescribeTaskResponseBodyStepsSubTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->message_ != nullptr && this->taskId_ != nullptr && this->taskState_ != nullptr && this->taskType_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeTaskResponseBodyStepsSubTasks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeTaskResponseBodyStepsSubTasks& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeTaskResponseBodyStepsSubTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskState Field Functions 
    bool hasTaskState() const { return this->taskState_ != nullptr;};
    void deleteTaskState() { this->taskState_ = nullptr;};
    inline string taskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, "") };
    inline DescribeTaskResponseBodyStepsSubTasks& setTaskState(string taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeTaskResponseBodyStepsSubTasks& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeTaskResponseBodyStepsSubTasks& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // The error message returned for failed sub tasks.
    std::shared_ptr<string> message_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The task status.
    std::shared_ptr<string> taskState_ = nullptr;
    // The task type.
    // 
    // Valid values:
    // 
    // *   reclone_node_sub_task
    // *   initialize_bare_cluster
    // *   extend_bare_cluster
    // *   reclone_node
    // *   reboot_node
    // *   extend_ack_edge_cluster
    // *   extend_cluster
    // *   initialize_ack_edge_cluster
    // *   cut_node_sub_task
    // *   reboot_node_sub_task
    // *   reclone_ack_edge_node
    // *   initialize_cluster
    // *   cut_cluster
    // *   reclone_bare_node
    // *   cut_bare_cluster
    std::shared_ptr<string> taskType_ = nullptr;
    // The update time.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
