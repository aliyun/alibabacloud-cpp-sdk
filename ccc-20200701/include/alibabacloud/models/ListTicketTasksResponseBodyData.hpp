// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETTASKSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETTASKSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListTicketTasksResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketTasksResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Assignee, assignee_);
      DARABONBA_PTR_TO_JSON(AssigneeName, assigneeName_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FileKeys, fileKeys_);
      DARABONBA_PTR_TO_JSON(FileUrls, fileUrls_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskDefinitionNodeId, taskDefinitionNodeId_);
      DARABONBA_PTR_TO_JSON(TaskDefinitionNodeType, taskDefinitionNodeType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketTasksResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Assignee, assignee_);
      DARABONBA_PTR_FROM_JSON(AssigneeName, assigneeName_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FileKeys, fileKeys_);
      DARABONBA_PTR_FROM_JSON(FileUrls, fileUrls_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskDefinitionNodeId, taskDefinitionNodeId_);
      DARABONBA_PTR_FROM_JSON(TaskDefinitionNodeType, taskDefinitionNodeType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
    };
    ListTicketTasksResponseBodyData() = default ;
    ListTicketTasksResponseBodyData(const ListTicketTasksResponseBodyData &) = default ;
    ListTicketTasksResponseBodyData(ListTicketTasksResponseBodyData &&) = default ;
    ListTicketTasksResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketTasksResponseBodyData() = default ;
    ListTicketTasksResponseBodyData& operator=(const ListTicketTasksResponseBodyData &) = default ;
    ListTicketTasksResponseBodyData& operator=(ListTicketTasksResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->assignee_ == nullptr && return this->assigneeName_ == nullptr && return this->comment_ == nullptr && return this->endTime_ == nullptr && return this->fileKeys_ == nullptr
        && return this->fileUrls_ == nullptr && return this->instanceId_ == nullptr && return this->startTime_ == nullptr && return this->taskDefinitionNodeId_ == nullptr && return this->taskDefinitionNodeType_ == nullptr
        && return this->taskId_ == nullptr && return this->taskName_ == nullptr && return this->ticketId_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ListTicketTasksResponseBodyData& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // assignee Field Functions 
    bool hasAssignee() const { return this->assignee_ != nullptr;};
    void deleteAssignee() { this->assignee_ = nullptr;};
    inline string assignee() const { DARABONBA_PTR_GET_DEFAULT(assignee_, "") };
    inline ListTicketTasksResponseBodyData& setAssignee(string assignee) { DARABONBA_PTR_SET_VALUE(assignee_, assignee) };


    // assigneeName Field Functions 
    bool hasAssigneeName() const { return this->assigneeName_ != nullptr;};
    void deleteAssigneeName() { this->assigneeName_ = nullptr;};
    inline string assigneeName() const { DARABONBA_PTR_GET_DEFAULT(assigneeName_, "") };
    inline ListTicketTasksResponseBodyData& setAssigneeName(string assigneeName) { DARABONBA_PTR_SET_VALUE(assigneeName_, assigneeName) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListTicketTasksResponseBodyData& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListTicketTasksResponseBodyData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fileKeys Field Functions 
    bool hasFileKeys() const { return this->fileKeys_ != nullptr;};
    void deleteFileKeys() { this->fileKeys_ = nullptr;};
    inline const vector<string> & fileKeys() const { DARABONBA_PTR_GET_CONST(fileKeys_, vector<string>) };
    inline vector<string> fileKeys() { DARABONBA_PTR_GET(fileKeys_, vector<string>) };
    inline ListTicketTasksResponseBodyData& setFileKeys(const vector<string> & fileKeys) { DARABONBA_PTR_SET_VALUE(fileKeys_, fileKeys) };
    inline ListTicketTasksResponseBodyData& setFileKeys(vector<string> && fileKeys) { DARABONBA_PTR_SET_RVALUE(fileKeys_, fileKeys) };


    // fileUrls Field Functions 
    bool hasFileUrls() const { return this->fileUrls_ != nullptr;};
    void deleteFileUrls() { this->fileUrls_ = nullptr;};
    inline const vector<string> & fileUrls() const { DARABONBA_PTR_GET_CONST(fileUrls_, vector<string>) };
    inline vector<string> fileUrls() { DARABONBA_PTR_GET(fileUrls_, vector<string>) };
    inline ListTicketTasksResponseBodyData& setFileUrls(const vector<string> & fileUrls) { DARABONBA_PTR_SET_VALUE(fileUrls_, fileUrls) };
    inline ListTicketTasksResponseBodyData& setFileUrls(vector<string> && fileUrls) { DARABONBA_PTR_SET_RVALUE(fileUrls_, fileUrls) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListTicketTasksResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListTicketTasksResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskDefinitionNodeId Field Functions 
    bool hasTaskDefinitionNodeId() const { return this->taskDefinitionNodeId_ != nullptr;};
    void deleteTaskDefinitionNodeId() { this->taskDefinitionNodeId_ = nullptr;};
    inline string taskDefinitionNodeId() const { DARABONBA_PTR_GET_DEFAULT(taskDefinitionNodeId_, "") };
    inline ListTicketTasksResponseBodyData& setTaskDefinitionNodeId(string taskDefinitionNodeId) { DARABONBA_PTR_SET_VALUE(taskDefinitionNodeId_, taskDefinitionNodeId) };


    // taskDefinitionNodeType Field Functions 
    bool hasTaskDefinitionNodeType() const { return this->taskDefinitionNodeType_ != nullptr;};
    void deleteTaskDefinitionNodeType() { this->taskDefinitionNodeType_ = nullptr;};
    inline string taskDefinitionNodeType() const { DARABONBA_PTR_GET_DEFAULT(taskDefinitionNodeType_, "") };
    inline ListTicketTasksResponseBodyData& setTaskDefinitionNodeType(string taskDefinitionNodeType) { DARABONBA_PTR_SET_VALUE(taskDefinitionNodeType_, taskDefinitionNodeType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListTicketTasksResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListTicketTasksResponseBodyData& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string ticketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline ListTicketTasksResponseBodyData& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> assignee_ = nullptr;
    std::shared_ptr<string> assigneeName_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<vector<string>> fileKeys_ = nullptr;
    std::shared_ptr<vector<string>> fileUrls_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> taskDefinitionNodeId_ = nullptr;
    std::shared_ptr<string> taskDefinitionNodeType_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<string> ticketId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
