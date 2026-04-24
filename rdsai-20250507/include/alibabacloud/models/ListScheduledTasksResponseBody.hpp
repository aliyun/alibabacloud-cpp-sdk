// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULEDTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULEDTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ListScheduledTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScheduledTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schedules, schedules_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListScheduledTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schedules, schedules_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListScheduledTasksResponseBody() = default ;
    ListScheduledTasksResponseBody(const ListScheduledTasksResponseBody &) = default ;
    ListScheduledTasksResponseBody(ListScheduledTasksResponseBody &&) = default ;
    ListScheduledTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScheduledTasksResponseBody() = default ;
    ListScheduledTasksResponseBody& operator=(const ListScheduledTasksResponseBody &) = default ;
    ListScheduledTasksResponseBody& operator=(ListScheduledTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Schedules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Schedules& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Frequency, frequency_);
        DARABONBA_PTR_TO_JSON(InspectionItems, inspectionItems_);
        DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ReportLanguage, reportLanguage_);
        DARABONBA_PTR_TO_JSON(ReportType, reportType_);
        DARABONBA_PTR_TO_JSON(ScheduledId, scheduledId_);
        DARABONBA_PTR_TO_JSON(TaskStartTime, taskStartTime_);
        DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
      };
      friend void from_json(const Darabonba::Json& j, Schedules& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
        DARABONBA_PTR_FROM_JSON(InspectionItems, inspectionItems_);
        DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ReportLanguage, reportLanguage_);
        DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
        DARABONBA_PTR_FROM_JSON(ScheduledId, scheduledId_);
        DARABONBA_PTR_FROM_JSON(TaskStartTime, taskStartTime_);
        DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
      };
      Schedules() = default ;
      Schedules(const Schedules &) = default ;
      Schedules(Schedules &&) = default ;
      Schedules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Schedules() = default ;
      Schedules& operator=(const Schedules &) = default ;
      Schedules& operator=(Schedules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->frequency_ == nullptr && this->inspectionItems_ == nullptr && this->instanceCount_ == nullptr && this->name_ == nullptr
        && this->regionId_ == nullptr && this->reportLanguage_ == nullptr && this->reportType_ == nullptr && this->scheduledId_ == nullptr && this->taskStartTime_ == nullptr
        && this->timeRange_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Schedules& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Schedules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // frequency Field Functions 
      bool hasFrequency() const { return this->frequency_ != nullptr;};
      void deleteFrequency() { this->frequency_ = nullptr;};
      inline string getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
      inline Schedules& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


      // inspectionItems Field Functions 
      bool hasInspectionItems() const { return this->inspectionItems_ != nullptr;};
      void deleteInspectionItems() { this->inspectionItems_ = nullptr;};
      inline string getInspectionItems() const { DARABONBA_PTR_GET_DEFAULT(inspectionItems_, "") };
      inline Schedules& setInspectionItems(string inspectionItems) { DARABONBA_PTR_SET_VALUE(inspectionItems_, inspectionItems) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int64_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0L) };
      inline Schedules& setInstanceCount(int64_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Schedules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Schedules& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // reportLanguage Field Functions 
      bool hasReportLanguage() const { return this->reportLanguage_ != nullptr;};
      void deleteReportLanguage() { this->reportLanguage_ = nullptr;};
      inline string getReportLanguage() const { DARABONBA_PTR_GET_DEFAULT(reportLanguage_, "") };
      inline Schedules& setReportLanguage(string reportLanguage) { DARABONBA_PTR_SET_VALUE(reportLanguage_, reportLanguage) };


      // reportType Field Functions 
      bool hasReportType() const { return this->reportType_ != nullptr;};
      void deleteReportType() { this->reportType_ = nullptr;};
      inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
      inline Schedules& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


      // scheduledId Field Functions 
      bool hasScheduledId() const { return this->scheduledId_ != nullptr;};
      void deleteScheduledId() { this->scheduledId_ = nullptr;};
      inline string getScheduledId() const { DARABONBA_PTR_GET_DEFAULT(scheduledId_, "") };
      inline Schedules& setScheduledId(string scheduledId) { DARABONBA_PTR_SET_VALUE(scheduledId_, scheduledId) };


      // taskStartTime Field Functions 
      bool hasTaskStartTime() const { return this->taskStartTime_ != nullptr;};
      void deleteTaskStartTime() { this->taskStartTime_ = nullptr;};
      inline string getTaskStartTime() const { DARABONBA_PTR_GET_DEFAULT(taskStartTime_, "") };
      inline Schedules& setTaskStartTime(string taskStartTime) { DARABONBA_PTR_SET_VALUE(taskStartTime_, taskStartTime) };


      // timeRange Field Functions 
      bool hasTimeRange() const { return this->timeRange_ != nullptr;};
      void deleteTimeRange() { this->timeRange_ = nullptr;};
      inline string getTimeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
      inline Schedules& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


    protected:
      // The creation time of the task.
      shared_ptr<string> createTime_ {};
      // The description of the inspection task.
      shared_ptr<string> description_ {};
      // The new inspection frequency. Separate multiple values with commas (,). Default value: DAILY. Valid values:
      // 
      // *   DAILY
      // *   Monday
      // *   Tuesday
      // *   Wednesday
      // *   Thursday
      // *   Friday
      // *   Saturday
      // *   Sunday
      // 
      // ### [](#daily--dailymonday--daily-)Note: DAILY takes precedence over other values. For example, if you set this parameter to DAILY,Monday, the backend will use DAILY as the inspection frequency.
      shared_ptr<string> frequency_ {};
      shared_ptr<string> inspectionItems_ {};
      // The number of instances covered by the task.
      shared_ptr<int64_t> instanceCount_ {};
      // The name of the task.
      shared_ptr<string> name_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> reportLanguage_ {};
      shared_ptr<string> reportType_ {};
      // The ID of the scheduled inspection configuration.
      shared_ptr<string> scheduledId_ {};
      // The actual start time of the task.
      shared_ptr<string> taskStartTime_ {};
      // The inspection time range. The default value is the latest 24 hours. Valid values: 1 to 168. The maximum value is 7 days.
      shared_ptr<string> timeRange_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->schedules_ == nullptr && this->success_ == nullptr
        && this->totalCount_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListScheduledTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListScheduledTasksResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListScheduledTasksResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScheduledTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schedules Field Functions 
    bool hasSchedules() const { return this->schedules_ != nullptr;};
    void deleteSchedules() { this->schedules_ = nullptr;};
    inline const vector<ListScheduledTasksResponseBody::Schedules> & getSchedules() const { DARABONBA_PTR_GET_CONST(schedules_, vector<ListScheduledTasksResponseBody::Schedules>) };
    inline vector<ListScheduledTasksResponseBody::Schedules> getSchedules() { DARABONBA_PTR_GET(schedules_, vector<ListScheduledTasksResponseBody::Schedules>) };
    inline ListScheduledTasksResponseBody& setSchedules(const vector<ListScheduledTasksResponseBody::Schedules> & schedules) { DARABONBA_PTR_SET_VALUE(schedules_, schedules) };
    inline ListScheduledTasksResponseBody& setSchedules(vector<ListScheduledTasksResponseBody::Schedules> && schedules) { DARABONBA_PTR_SET_RVALUE(schedules_, schedules) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListScheduledTasksResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListScheduledTasksResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The response message.
    shared_ptr<string> message_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of records returned on each page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of scheduled inspection tasks.
    shared_ptr<vector<ListScheduledTasksResponseBody::Schedules>> schedules_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The total number of entries that are returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
