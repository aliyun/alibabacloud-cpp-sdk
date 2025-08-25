// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTICKETSUMMARYREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTICKETSUMMARYREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetTicketSummaryReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTicketSummaryReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Assignee, assignee_);
      DARABONBA_PTR_TO_JSON(AssigneeType, assigneeType_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Participant, participant_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, GetTicketSummaryReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Assignee, assignee_);
      DARABONBA_PTR_FROM_JSON(AssigneeType, assigneeType_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Participant, participant_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    GetTicketSummaryReportRequest() = default ;
    GetTicketSummaryReportRequest(const GetTicketSummaryReportRequest &) = default ;
    GetTicketSummaryReportRequest(GetTicketSummaryReportRequest &&) = default ;
    GetTicketSummaryReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTicketSummaryReportRequest() = default ;
    GetTicketSummaryReportRequest& operator=(const GetTicketSummaryReportRequest &) = default ;
    GetTicketSummaryReportRequest& operator=(GetTicketSummaryReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assignee_ != nullptr
        && this->assigneeType_ != nullptr && this->categoryId_ != nullptr && this->creator_ != nullptr && this->endTime_ != nullptr && this->instanceId_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->participant_ != nullptr && this->startTime_ != nullptr && this->state_ != nullptr; };
    // assignee Field Functions 
    bool hasAssignee() const { return this->assignee_ != nullptr;};
    void deleteAssignee() { this->assignee_ = nullptr;};
    inline string assignee() const { DARABONBA_PTR_GET_DEFAULT(assignee_, "") };
    inline GetTicketSummaryReportRequest& setAssignee(string assignee) { DARABONBA_PTR_SET_VALUE(assignee_, assignee) };


    // assigneeType Field Functions 
    bool hasAssigneeType() const { return this->assigneeType_ != nullptr;};
    void deleteAssigneeType() { this->assigneeType_ = nullptr;};
    inline string assigneeType() const { DARABONBA_PTR_GET_DEFAULT(assigneeType_, "") };
    inline GetTicketSummaryReportRequest& setAssigneeType(string assigneeType) { DARABONBA_PTR_SET_VALUE(assigneeType_, assigneeType) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline GetTicketSummaryReportRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetTicketSummaryReportRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetTicketSummaryReportRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetTicketSummaryReportRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetTicketSummaryReportRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetTicketSummaryReportRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // participant Field Functions 
    bool hasParticipant() const { return this->participant_ != nullptr;};
    void deleteParticipant() { this->participant_ = nullptr;};
    inline string participant() const { DARABONBA_PTR_GET_DEFAULT(participant_, "") };
    inline GetTicketSummaryReportRequest& setParticipant(string participant) { DARABONBA_PTR_SET_VALUE(participant_, participant) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetTicketSummaryReportRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetTicketSummaryReportRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> assignee_ = nullptr;
    std::shared_ptr<string> assigneeType_ = nullptr;
    std::shared_ptr<string> categoryId_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> participant_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
