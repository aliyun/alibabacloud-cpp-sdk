// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWSRESPONSEBODYDATARECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWSRESPONSEBODYDATARECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListWorkflowsResponseBodyDataRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowsResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(Calendar, calendar_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CurrentExecuteStatus, currentExecuteStatus_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LastExecuteEndTime, lastExecuteEndTime_);
      DARABONBA_PTR_TO_JSON(LastExecuteStatus, lastExecuteStatus_);
      DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      DARABONBA_PTR_TO_JSON(Updater, updater_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_TO_JSON(Xattrs, xattrs_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowsResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(Calendar, calendar_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CurrentExecuteStatus, currentExecuteStatus_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LastExecuteEndTime, lastExecuteEndTime_);
      DARABONBA_PTR_FROM_JSON(LastExecuteStatus, lastExecuteStatus_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(Updater, updater_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_FROM_JSON(Xattrs, xattrs_);
    };
    ListWorkflowsResponseBodyDataRecords() = default ;
    ListWorkflowsResponseBodyDataRecords(const ListWorkflowsResponseBodyDataRecords &) = default ;
    ListWorkflowsResponseBodyDataRecords(ListWorkflowsResponseBodyDataRecords &&) = default ;
    ListWorkflowsResponseBodyDataRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowsResponseBodyDataRecords() = default ;
    ListWorkflowsResponseBodyDataRecords& operator=(const ListWorkflowsResponseBodyDataRecords &) = default ;
    ListWorkflowsResponseBodyDataRecords& operator=(ListWorkflowsResponseBodyDataRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->appType_ == nullptr && return this->calendar_ == nullptr && return this->creator_ == nullptr && return this->currentExecuteStatus_ == nullptr && return this->description_ == nullptr
        && return this->lastExecuteEndTime_ == nullptr && return this->lastExecuteStatus_ == nullptr && return this->maxConcurrency_ == nullptr && return this->name_ == nullptr && return this->status_ == nullptr
        && return this->timeExpression_ == nullptr && return this->timeType_ == nullptr && return this->timezone_ == nullptr && return this->updater_ == nullptr && return this->workflowId_ == nullptr
        && return this->xattrs_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListWorkflowsResponseBodyDataRecords& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline int32_t appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, 0) };
    inline ListWorkflowsResponseBodyDataRecords& setAppType(int32_t appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // calendar Field Functions 
    bool hasCalendar() const { return this->calendar_ != nullptr;};
    void deleteCalendar() { this->calendar_ = nullptr;};
    inline string calendar() const { DARABONBA_PTR_GET_DEFAULT(calendar_, "") };
    inline ListWorkflowsResponseBodyDataRecords& setCalendar(string calendar) { DARABONBA_PTR_SET_VALUE(calendar_, calendar) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListWorkflowsResponseBodyDataRecords& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // currentExecuteStatus Field Functions 
    bool hasCurrentExecuteStatus() const { return this->currentExecuteStatus_ != nullptr;};
    void deleteCurrentExecuteStatus() { this->currentExecuteStatus_ = nullptr;};
    inline int32_t currentExecuteStatus() const { DARABONBA_PTR_GET_DEFAULT(currentExecuteStatus_, 0) };
    inline ListWorkflowsResponseBodyDataRecords& setCurrentExecuteStatus(int32_t currentExecuteStatus) { DARABONBA_PTR_SET_VALUE(currentExecuteStatus_, currentExecuteStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListWorkflowsResponseBodyDataRecords& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lastExecuteEndTime Field Functions 
    bool hasLastExecuteEndTime() const { return this->lastExecuteEndTime_ != nullptr;};
    void deleteLastExecuteEndTime() { this->lastExecuteEndTime_ = nullptr;};
    inline string lastExecuteEndTime() const { DARABONBA_PTR_GET_DEFAULT(lastExecuteEndTime_, "") };
    inline ListWorkflowsResponseBodyDataRecords& setLastExecuteEndTime(string lastExecuteEndTime) { DARABONBA_PTR_SET_VALUE(lastExecuteEndTime_, lastExecuteEndTime) };


    // lastExecuteStatus Field Functions 
    bool hasLastExecuteStatus() const { return this->lastExecuteStatus_ != nullptr;};
    void deleteLastExecuteStatus() { this->lastExecuteStatus_ = nullptr;};
    inline int32_t lastExecuteStatus() const { DARABONBA_PTR_GET_DEFAULT(lastExecuteStatus_, 0) };
    inline ListWorkflowsResponseBodyDataRecords& setLastExecuteStatus(int32_t lastExecuteStatus) { DARABONBA_PTR_SET_VALUE(lastExecuteStatus_, lastExecuteStatus) };


    // maxConcurrency Field Functions 
    bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
    void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
    inline int32_t maxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0) };
    inline ListWorkflowsResponseBodyDataRecords& setMaxConcurrency(int32_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWorkflowsResponseBodyDataRecords& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListWorkflowsResponseBodyDataRecords& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeExpression Field Functions 
    bool hasTimeExpression() const { return this->timeExpression_ != nullptr;};
    void deleteTimeExpression() { this->timeExpression_ = nullptr;};
    inline string timeExpression() const { DARABONBA_PTR_GET_DEFAULT(timeExpression_, "") };
    inline ListWorkflowsResponseBodyDataRecords& setTimeExpression(string timeExpression) { DARABONBA_PTR_SET_VALUE(timeExpression_, timeExpression) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline int32_t timeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
    inline ListWorkflowsResponseBodyDataRecords& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline ListWorkflowsResponseBodyDataRecords& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // updater Field Functions 
    bool hasUpdater() const { return this->updater_ != nullptr;};
    void deleteUpdater() { this->updater_ = nullptr;};
    inline string updater() const { DARABONBA_PTR_GET_DEFAULT(updater_, "") };
    inline ListWorkflowsResponseBodyDataRecords& setUpdater(string updater) { DARABONBA_PTR_SET_VALUE(updater_, updater) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline ListWorkflowsResponseBodyDataRecords& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    // xattrs Field Functions 
    bool hasXattrs() const { return this->xattrs_ != nullptr;};
    void deleteXattrs() { this->xattrs_ = nullptr;};
    inline string xattrs() const { DARABONBA_PTR_GET_DEFAULT(xattrs_, "") };
    inline ListWorkflowsResponseBodyDataRecords& setXattrs(string xattrs) { DARABONBA_PTR_SET_VALUE(xattrs_, xattrs) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<int32_t> appType_ = nullptr;
    std::shared_ptr<string> calendar_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<int32_t> currentExecuteStatus_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> lastExecuteEndTime_ = nullptr;
    std::shared_ptr<int32_t> lastExecuteStatus_ = nullptr;
    std::shared_ptr<int32_t> maxConcurrency_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> timeExpression_ = nullptr;
    std::shared_ptr<int32_t> timeType_ = nullptr;
    std::shared_ptr<string> timezone_ = nullptr;
    std::shared_ptr<string> updater_ = nullptr;
    std::shared_ptr<int64_t> workflowId_ = nullptr;
    std::shared_ptr<string> xattrs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
