// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSPECTIONSCHEDULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSPECTIONSCHEDULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class ModifyInspectionScheduleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInspectionScheduleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(InspectionItems, inspectionItems_);
      DARABONBA_PTR_TO_JSON(InspectionWindow, inspectionWindow_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(ReportLanguage, reportLanguage_);
      DARABONBA_PTR_TO_JSON(ScheduleId, scheduleId_);
      DARABONBA_PTR_TO_JSON(ScheduleName, scheduleName_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInspectionScheduleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(InspectionItems, inspectionItems_);
      DARABONBA_PTR_FROM_JSON(InspectionWindow, inspectionWindow_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(ReportLanguage, reportLanguage_);
      DARABONBA_PTR_FROM_JSON(ScheduleId, scheduleId_);
      DARABONBA_PTR_FROM_JSON(ScheduleName, scheduleName_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
    };
    ModifyInspectionScheduleRequest() = default ;
    ModifyInspectionScheduleRequest(const ModifyInspectionScheduleRequest &) = default ;
    ModifyInspectionScheduleRequest(ModifyInspectionScheduleRequest &&) = default ;
    ModifyInspectionScheduleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInspectionScheduleRequest() = default ;
    ModifyInspectionScheduleRequest& operator=(const ModifyInspectionScheduleRequest &) = default ;
    ModifyInspectionScheduleRequest& operator=(ModifyInspectionScheduleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cronExpression_ == nullptr
        && this->enabled_ == nullptr && this->inspectionItems_ == nullptr && this->inspectionWindow_ == nullptr && this->instanceId_ == nullptr && this->instanceIds_ == nullptr
        && this->reportLanguage_ == nullptr && this->scheduleId_ == nullptr && this->scheduleName_ == nullptr && this->timezone_ == nullptr; };
    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline ModifyInspectionScheduleRequest& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline int64_t getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, 0L) };
    inline ModifyInspectionScheduleRequest& setEnabled(int64_t enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // inspectionItems Field Functions 
    bool hasInspectionItems() const { return this->inspectionItems_ != nullptr;};
    void deleteInspectionItems() { this->inspectionItems_ = nullptr;};
    inline string getInspectionItems() const { DARABONBA_PTR_GET_DEFAULT(inspectionItems_, "") };
    inline ModifyInspectionScheduleRequest& setInspectionItems(string inspectionItems) { DARABONBA_PTR_SET_VALUE(inspectionItems_, inspectionItems) };


    // inspectionWindow Field Functions 
    bool hasInspectionWindow() const { return this->inspectionWindow_ != nullptr;};
    void deleteInspectionWindow() { this->inspectionWindow_ = nullptr;};
    inline string getInspectionWindow() const { DARABONBA_PTR_GET_DEFAULT(inspectionWindow_, "") };
    inline ModifyInspectionScheduleRequest& setInspectionWindow(string inspectionWindow) { DARABONBA_PTR_SET_VALUE(inspectionWindow_, inspectionWindow) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInspectionScheduleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline ModifyInspectionScheduleRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // reportLanguage Field Functions 
    bool hasReportLanguage() const { return this->reportLanguage_ != nullptr;};
    void deleteReportLanguage() { this->reportLanguage_ = nullptr;};
    inline string getReportLanguage() const { DARABONBA_PTR_GET_DEFAULT(reportLanguage_, "") };
    inline ModifyInspectionScheduleRequest& setReportLanguage(string reportLanguage) { DARABONBA_PTR_SET_VALUE(reportLanguage_, reportLanguage) };


    // scheduleId Field Functions 
    bool hasScheduleId() const { return this->scheduleId_ != nullptr;};
    void deleteScheduleId() { this->scheduleId_ = nullptr;};
    inline string getScheduleId() const { DARABONBA_PTR_GET_DEFAULT(scheduleId_, "") };
    inline ModifyInspectionScheduleRequest& setScheduleId(string scheduleId) { DARABONBA_PTR_SET_VALUE(scheduleId_, scheduleId) };


    // scheduleName Field Functions 
    bool hasScheduleName() const { return this->scheduleName_ != nullptr;};
    void deleteScheduleName() { this->scheduleName_ = nullptr;};
    inline string getScheduleName() const { DARABONBA_PTR_GET_DEFAULT(scheduleName_, "") };
    inline ModifyInspectionScheduleRequest& setScheduleName(string scheduleName) { DARABONBA_PTR_SET_VALUE(scheduleName_, scheduleName) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline ModifyInspectionScheduleRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


  protected:
    shared_ptr<string> cronExpression_ {};
    shared_ptr<int64_t> enabled_ {};
    shared_ptr<string> inspectionItems_ {};
    shared_ptr<string> inspectionWindow_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instanceIds_ {};
    shared_ptr<string> reportLanguage_ {};
    shared_ptr<string> scheduleId_ {};
    shared_ptr<string> scheduleName_ {};
    shared_ptr<string> timezone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
