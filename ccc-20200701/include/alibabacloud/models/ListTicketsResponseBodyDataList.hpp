// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListTicketsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Assignee, assignee_);
      DARABONBA_PTR_TO_JSON(AssigneeName, assigneeName_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(CloseCode, closeCode_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(CurrentTaskId, currentTaskId_);
      DARABONBA_PTR_TO_JSON(CurrentTaskName, currentTaskName_);
      DARABONBA_PTR_TO_JSON(CurrentTaskStartTime, currentTaskStartTime_);
      DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Assignee, assignee_);
      DARABONBA_PTR_FROM_JSON(AssigneeName, assigneeName_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(CloseCode, closeCode_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(CurrentTaskId, currentTaskId_);
      DARABONBA_PTR_FROM_JSON(CurrentTaskName, currentTaskName_);
      DARABONBA_PTR_FROM_JSON(CurrentTaskStartTime, currentTaskStartTime_);
      DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
    };
    ListTicketsResponseBodyDataList() = default ;
    ListTicketsResponseBodyDataList(const ListTicketsResponseBodyDataList &) = default ;
    ListTicketsResponseBodyDataList(ListTicketsResponseBodyDataList &&) = default ;
    ListTicketsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketsResponseBodyDataList() = default ;
    ListTicketsResponseBodyDataList& operator=(const ListTicketsResponseBodyDataList &) = default ;
    ListTicketsResponseBodyDataList& operator=(ListTicketsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assignee_ != nullptr
        && this->assigneeName_ != nullptr && this->categoryId_ != nullptr && this->categoryName_ != nullptr && this->closeCode_ != nullptr && this->comment_ != nullptr
        && this->context_ != nullptr && this->createdTime_ != nullptr && this->creator_ != nullptr && this->creatorName_ != nullptr && this->currentTaskId_ != nullptr
        && this->currentTaskName_ != nullptr && this->currentTaskStartTime_ != nullptr && this->customerId_ != nullptr && this->endTime_ != nullptr && this->instanceId_ != nullptr
        && this->jobId_ != nullptr && this->source_ != nullptr && this->startTime_ != nullptr && this->state_ != nullptr && this->templateId_ != nullptr
        && this->templateVersion_ != nullptr && this->ticketId_ != nullptr && this->title_ != nullptr && this->updatedTime_ != nullptr; };
    // assignee Field Functions 
    bool hasAssignee() const { return this->assignee_ != nullptr;};
    void deleteAssignee() { this->assignee_ = nullptr;};
    inline string assignee() const { DARABONBA_PTR_GET_DEFAULT(assignee_, "") };
    inline ListTicketsResponseBodyDataList& setAssignee(string assignee) { DARABONBA_PTR_SET_VALUE(assignee_, assignee) };


    // assigneeName Field Functions 
    bool hasAssigneeName() const { return this->assigneeName_ != nullptr;};
    void deleteAssigneeName() { this->assigneeName_ = nullptr;};
    inline string assigneeName() const { DARABONBA_PTR_GET_DEFAULT(assigneeName_, "") };
    inline ListTicketsResponseBodyDataList& setAssigneeName(string assigneeName) { DARABONBA_PTR_SET_VALUE(assigneeName_, assigneeName) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline ListTicketsResponseBodyDataList& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline ListTicketsResponseBodyDataList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // closeCode Field Functions 
    bool hasCloseCode() const { return this->closeCode_ != nullptr;};
    void deleteCloseCode() { this->closeCode_ = nullptr;};
    inline string closeCode() const { DARABONBA_PTR_GET_DEFAULT(closeCode_, "") };
    inline ListTicketsResponseBodyDataList& setCloseCode(string closeCode) { DARABONBA_PTR_SET_VALUE(closeCode_, closeCode) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListTicketsResponseBodyDataList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string context() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline ListTicketsResponseBodyDataList& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline ListTicketsResponseBodyDataList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListTicketsResponseBodyDataList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline ListTicketsResponseBodyDataList& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // currentTaskId Field Functions 
    bool hasCurrentTaskId() const { return this->currentTaskId_ != nullptr;};
    void deleteCurrentTaskId() { this->currentTaskId_ = nullptr;};
    inline string currentTaskId() const { DARABONBA_PTR_GET_DEFAULT(currentTaskId_, "") };
    inline ListTicketsResponseBodyDataList& setCurrentTaskId(string currentTaskId) { DARABONBA_PTR_SET_VALUE(currentTaskId_, currentTaskId) };


    // currentTaskName Field Functions 
    bool hasCurrentTaskName() const { return this->currentTaskName_ != nullptr;};
    void deleteCurrentTaskName() { this->currentTaskName_ = nullptr;};
    inline string currentTaskName() const { DARABONBA_PTR_GET_DEFAULT(currentTaskName_, "") };
    inline ListTicketsResponseBodyDataList& setCurrentTaskName(string currentTaskName) { DARABONBA_PTR_SET_VALUE(currentTaskName_, currentTaskName) };


    // currentTaskStartTime Field Functions 
    bool hasCurrentTaskStartTime() const { return this->currentTaskStartTime_ != nullptr;};
    void deleteCurrentTaskStartTime() { this->currentTaskStartTime_ = nullptr;};
    inline int64_t currentTaskStartTime() const { DARABONBA_PTR_GET_DEFAULT(currentTaskStartTime_, 0L) };
    inline ListTicketsResponseBodyDataList& setCurrentTaskStartTime(int64_t currentTaskStartTime) { DARABONBA_PTR_SET_VALUE(currentTaskStartTime_, currentTaskStartTime) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline ListTicketsResponseBodyDataList& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListTicketsResponseBodyDataList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListTicketsResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListTicketsResponseBodyDataList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListTicketsResponseBodyDataList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListTicketsResponseBodyDataList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListTicketsResponseBodyDataList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListTicketsResponseBodyDataList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline ListTicketsResponseBodyDataList& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string ticketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline ListTicketsResponseBodyDataList& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListTicketsResponseBodyDataList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline string updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
    inline ListTicketsResponseBodyDataList& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


  protected:
    std::shared_ptr<string> assignee_ = nullptr;
    std::shared_ptr<string> assigneeName_ = nullptr;
    std::shared_ptr<string> categoryId_ = nullptr;
    std::shared_ptr<string> categoryName_ = nullptr;
    std::shared_ptr<string> closeCode_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> context_ = nullptr;
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> creatorName_ = nullptr;
    std::shared_ptr<string> currentTaskId_ = nullptr;
    std::shared_ptr<string> currentTaskName_ = nullptr;
    std::shared_ptr<int64_t> currentTaskStartTime_ = nullptr;
    std::shared_ptr<string> customerId_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateVersion_ = nullptr;
    std::shared_ptr<string> ticketId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> updatedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
