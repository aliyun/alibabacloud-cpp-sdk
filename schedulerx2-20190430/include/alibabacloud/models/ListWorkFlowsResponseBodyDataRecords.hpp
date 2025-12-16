// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWSRESPONSEBODYDATARECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWSRESPONSEBODYDATARECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ListWorkFlowsResponseBodyDataRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkFlowsResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_TO_JSON(Calendar, calendar_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
      DARABONBA_PTR_TO_JSON(Updater, updater_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkFlowsResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(Calendar, calendar_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
      DARABONBA_PTR_FROM_JSON(Updater, updater_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    ListWorkFlowsResponseBodyDataRecords() = default ;
    ListWorkFlowsResponseBodyDataRecords(const ListWorkFlowsResponseBodyDataRecords &) = default ;
    ListWorkFlowsResponseBodyDataRecords(ListWorkFlowsResponseBodyDataRecords &&) = default ;
    ListWorkFlowsResponseBodyDataRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkFlowsResponseBodyDataRecords() = default ;
    ListWorkFlowsResponseBodyDataRecords& operator=(const ListWorkFlowsResponseBodyDataRecords &) = default ;
    ListWorkFlowsResponseBodyDataRecords& operator=(ListWorkFlowsResponseBodyDataRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendar_ == nullptr
        && return this->creator_ == nullptr && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->maxConcurrency_ == nullptr && return this->name_ == nullptr
        && return this->namespace_ == nullptr && return this->timeExpression_ == nullptr && return this->timeType_ == nullptr && return this->updater_ == nullptr && return this->workflowId_ == nullptr; };
    // calendar Field Functions 
    bool hasCalendar() const { return this->calendar_ != nullptr;};
    void deleteCalendar() { this->calendar_ = nullptr;};
    inline string calendar() const { DARABONBA_PTR_GET_DEFAULT(calendar_, "") };
    inline ListWorkFlowsResponseBodyDataRecords& setCalendar(string calendar) { DARABONBA_PTR_SET_VALUE(calendar_, calendar) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListWorkFlowsResponseBodyDataRecords& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListWorkFlowsResponseBodyDataRecords& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListWorkFlowsResponseBodyDataRecords& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // maxConcurrency Field Functions 
    bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
    void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
    inline string maxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, "") };
    inline ListWorkFlowsResponseBodyDataRecords& setMaxConcurrency(string maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWorkFlowsResponseBodyDataRecords& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListWorkFlowsResponseBodyDataRecords& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // timeExpression Field Functions 
    bool hasTimeExpression() const { return this->timeExpression_ != nullptr;};
    void deleteTimeExpression() { this->timeExpression_ = nullptr;};
    inline string timeExpression() const { DARABONBA_PTR_GET_DEFAULT(timeExpression_, "") };
    inline ListWorkFlowsResponseBodyDataRecords& setTimeExpression(string timeExpression) { DARABONBA_PTR_SET_VALUE(timeExpression_, timeExpression) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline string timeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
    inline ListWorkFlowsResponseBodyDataRecords& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // updater Field Functions 
    bool hasUpdater() const { return this->updater_ != nullptr;};
    void deleteUpdater() { this->updater_ = nullptr;};
    inline string updater() const { DARABONBA_PTR_GET_DEFAULT(updater_, "") };
    inline ListWorkFlowsResponseBodyDataRecords& setUpdater(string updater) { DARABONBA_PTR_SET_VALUE(updater_, updater) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline ListWorkFlowsResponseBodyDataRecords& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The calendar.
    std::shared_ptr<string> calendar_ = nullptr;
    // The creator.
    std::shared_ptr<string> creator_ = nullptr;
    // The job description.
    std::shared_ptr<string> description_ = nullptr;
    // The application ID.
    std::shared_ptr<string> groupId_ = nullptr;
    // The maximum concurrency.
    std::shared_ptr<string> maxConcurrency_ = nullptr;
    // The workflow name.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace ID. You can obtain the namespace ID on the Namespace page in the SchedulerX console.
    std::shared_ptr<string> namespace_ = nullptr;
    // The time expression.
    std::shared_ptr<string> timeExpression_ = nullptr;
    // The time type of the workflow.
    std::shared_ptr<string> timeType_ = nullptr;
    // The updater.
    std::shared_ptr<string> updater_ = nullptr;
    // The workflow ID.
    std::shared_ptr<int64_t> workflowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
