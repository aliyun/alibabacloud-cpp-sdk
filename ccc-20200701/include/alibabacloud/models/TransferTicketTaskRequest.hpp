// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERTICKETTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERTICKETTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class TransferTicketTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferTicketTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Assignee, assignee_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
    };
    friend void from_json(const Darabonba::Json& j, TransferTicketTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Assignee, assignee_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
    };
    TransferTicketTaskRequest() = default ;
    TransferTicketTaskRequest(const TransferTicketTaskRequest &) = default ;
    TransferTicketTaskRequest(TransferTicketTaskRequest &&) = default ;
    TransferTicketTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferTicketTaskRequest() = default ;
    TransferTicketTaskRequest& operator=(const TransferTicketTaskRequest &) = default ;
    TransferTicketTaskRequest& operator=(TransferTicketTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assignee_ != nullptr
        && this->comment_ != nullptr && this->instanceId_ != nullptr && this->taskId_ != nullptr && this->ticketId_ != nullptr; };
    // assignee Field Functions 
    bool hasAssignee() const { return this->assignee_ != nullptr;};
    void deleteAssignee() { this->assignee_ = nullptr;};
    inline string assignee() const { DARABONBA_PTR_GET_DEFAULT(assignee_, "") };
    inline TransferTicketTaskRequest& setAssignee(string assignee) { DARABONBA_PTR_SET_VALUE(assignee_, assignee) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline TransferTicketTaskRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline TransferTicketTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline TransferTicketTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string ticketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline TransferTicketTaskRequest& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> assignee_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> ticketId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
