// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListTicketsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Assignee, assignee_);
      DARABONBA_PTR_TO_JSON(AssigneeType, assigneeType_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobIdList, jobIdList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Participant, participant_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Assignee, assignee_);
      DARABONBA_PTR_FROM_JSON(AssigneeType, assigneeType_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobIdList, jobIdList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Participant, participant_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListTicketsRequest() = default ;
    ListTicketsRequest(const ListTicketsRequest &) = default ;
    ListTicketsRequest(ListTicketsRequest &&) = default ;
    ListTicketsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketsRequest() = default ;
    ListTicketsRequest& operator=(const ListTicketsRequest &) = default ;
    ListTicketsRequest& operator=(ListTicketsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assignee_ != nullptr
        && this->assigneeType_ != nullptr && this->categoryId_ != nullptr && this->creator_ != nullptr && this->customerId_ != nullptr && this->endTime_ != nullptr
        && this->instanceId_ != nullptr && this->jobIdList_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->participant_ != nullptr
        && this->startTime_ != nullptr && this->state_ != nullptr && this->ticketId_ != nullptr && this->title_ != nullptr; };
    // assignee Field Functions 
    bool hasAssignee() const { return this->assignee_ != nullptr;};
    void deleteAssignee() { this->assignee_ = nullptr;};
    inline string assignee() const { DARABONBA_PTR_GET_DEFAULT(assignee_, "") };
    inline ListTicketsRequest& setAssignee(string assignee) { DARABONBA_PTR_SET_VALUE(assignee_, assignee) };


    // assigneeType Field Functions 
    bool hasAssigneeType() const { return this->assigneeType_ != nullptr;};
    void deleteAssigneeType() { this->assigneeType_ = nullptr;};
    inline string assigneeType() const { DARABONBA_PTR_GET_DEFAULT(assigneeType_, "") };
    inline ListTicketsRequest& setAssigneeType(string assigneeType) { DARABONBA_PTR_SET_VALUE(assigneeType_, assigneeType) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline ListTicketsRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListTicketsRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline ListTicketsRequest& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListTicketsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListTicketsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobIdList Field Functions 
    bool hasJobIdList() const { return this->jobIdList_ != nullptr;};
    void deleteJobIdList() { this->jobIdList_ = nullptr;};
    inline string jobIdList() const { DARABONBA_PTR_GET_DEFAULT(jobIdList_, "") };
    inline ListTicketsRequest& setJobIdList(string jobIdList) { DARABONBA_PTR_SET_VALUE(jobIdList_, jobIdList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListTicketsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListTicketsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // participant Field Functions 
    bool hasParticipant() const { return this->participant_ != nullptr;};
    void deleteParticipant() { this->participant_ = nullptr;};
    inline string participant() const { DARABONBA_PTR_GET_DEFAULT(participant_, "") };
    inline ListTicketsRequest& setParticipant(string participant) { DARABONBA_PTR_SET_VALUE(participant_, participant) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListTicketsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListTicketsRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string ticketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline ListTicketsRequest& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListTicketsRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> assignee_ = nullptr;
    std::shared_ptr<string> assigneeType_ = nullptr;
    std::shared_ptr<string> categoryId_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> customerId_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> participant_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> ticketId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
