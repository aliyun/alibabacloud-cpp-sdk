// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECALENDARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECALENDARREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateCalendarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCalendarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllProjects, allProjects_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ExpirationReminder, expirationReminder_);
      DARABONBA_PTR_TO_JSON(FallbackPolicy, fallbackPolicy_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OverduePolicy, overduePolicy_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
      DARABONBA_PTR_TO_JSON(SchedulePolicy, schedulePolicy_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCalendarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllProjects, allProjects_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ExpirationReminder, expirationReminder_);
      DARABONBA_PTR_FROM_JSON(FallbackPolicy, fallbackPolicy_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OverduePolicy, overduePolicy_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
      DARABONBA_PTR_FROM_JSON(SchedulePolicy, schedulePolicy_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateCalendarRequest() = default ;
    UpdateCalendarRequest(const UpdateCalendarRequest &) = default ;
    UpdateCalendarRequest(UpdateCalendarRequest &&) = default ;
    UpdateCalendarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCalendarRequest() = default ;
    UpdateCalendarRequest& operator=(const UpdateCalendarRequest &) = default ;
    UpdateCalendarRequest& operator=(UpdateCalendarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SchedulePolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SchedulePolicy& obj) { 
        DARABONBA_PTR_TO_JSON(NormalDates, normalDates_);
        DARABONBA_PTR_TO_JSON(SkipDates, skipDates_);
      };
      friend void from_json(const Darabonba::Json& j, SchedulePolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(NormalDates, normalDates_);
        DARABONBA_PTR_FROM_JSON(SkipDates, skipDates_);
      };
      SchedulePolicy() = default ;
      SchedulePolicy(const SchedulePolicy &) = default ;
      SchedulePolicy(SchedulePolicy &&) = default ;
      SchedulePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SchedulePolicy() = default ;
      SchedulePolicy& operator=(const SchedulePolicy &) = default ;
      SchedulePolicy& operator=(SchedulePolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->normalDates_ == nullptr
        && this->skipDates_ == nullptr; };
      // normalDates Field Functions 
      bool hasNormalDates() const { return this->normalDates_ != nullptr;};
      void deleteNormalDates() { this->normalDates_ = nullptr;};
      inline const vector<string> & getNormalDates() const { DARABONBA_PTR_GET_CONST(normalDates_, vector<string>) };
      inline vector<string> getNormalDates() { DARABONBA_PTR_GET(normalDates_, vector<string>) };
      inline SchedulePolicy& setNormalDates(const vector<string> & normalDates) { DARABONBA_PTR_SET_VALUE(normalDates_, normalDates) };
      inline SchedulePolicy& setNormalDates(vector<string> && normalDates) { DARABONBA_PTR_SET_RVALUE(normalDates_, normalDates) };


      // skipDates Field Functions 
      bool hasSkipDates() const { return this->skipDates_ != nullptr;};
      void deleteSkipDates() { this->skipDates_ = nullptr;};
      inline const vector<string> & getSkipDates() const { DARABONBA_PTR_GET_CONST(skipDates_, vector<string>) };
      inline vector<string> getSkipDates() { DARABONBA_PTR_GET(skipDates_, vector<string>) };
      inline SchedulePolicy& setSkipDates(const vector<string> & skipDates) { DARABONBA_PTR_SET_VALUE(skipDates_, skipDates) };
      inline SchedulePolicy& setSkipDates(vector<string> && skipDates) { DARABONBA_PTR_SET_RVALUE(skipDates_, skipDates) };


    protected:
      // The list of normal scheduling dates.
      shared_ptr<vector<string>> normalDates_ {};
      // The list of non-scheduling dates. Tasks perform dry runs on these dates. Used only for strong constraint calendars.
      shared_ptr<vector<string>> skipDates_ {};
    };

    virtual bool empty() const override { return this->allProjects_ == nullptr
        && this->description_ == nullptr && this->endDate_ == nullptr && this->expirationReminder_ == nullptr && this->fallbackPolicy_ == nullptr && this->id_ == nullptr
        && this->overduePolicy_ == nullptr && this->owner_ == nullptr && this->projectIds_ == nullptr && this->schedulePolicy_ == nullptr && this->startDate_ == nullptr
        && this->type_ == nullptr; };
    // allProjects Field Functions 
    bool hasAllProjects() const { return this->allProjects_ != nullptr;};
    void deleteAllProjects() { this->allProjects_ = nullptr;};
    inline bool getAllProjects() const { DARABONBA_PTR_GET_DEFAULT(allProjects_, false) };
    inline UpdateCalendarRequest& setAllProjects(bool allProjects) { DARABONBA_PTR_SET_VALUE(allProjects_, allProjects) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateCalendarRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline UpdateCalendarRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // expirationReminder Field Functions 
    bool hasExpirationReminder() const { return this->expirationReminder_ != nullptr;};
    void deleteExpirationReminder() { this->expirationReminder_ = nullptr;};
    inline string getExpirationReminder() const { DARABONBA_PTR_GET_DEFAULT(expirationReminder_, "") };
    inline UpdateCalendarRequest& setExpirationReminder(string expirationReminder) { DARABONBA_PTR_SET_VALUE(expirationReminder_, expirationReminder) };


    // fallbackPolicy Field Functions 
    bool hasFallbackPolicy() const { return this->fallbackPolicy_ != nullptr;};
    void deleteFallbackPolicy() { this->fallbackPolicy_ = nullptr;};
    inline string getFallbackPolicy() const { DARABONBA_PTR_GET_DEFAULT(fallbackPolicy_, "") };
    inline UpdateCalendarRequest& setFallbackPolicy(string fallbackPolicy) { DARABONBA_PTR_SET_VALUE(fallbackPolicy_, fallbackPolicy) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateCalendarRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // overduePolicy Field Functions 
    bool hasOverduePolicy() const { return this->overduePolicy_ != nullptr;};
    void deleteOverduePolicy() { this->overduePolicy_ = nullptr;};
    inline string getOverduePolicy() const { DARABONBA_PTR_GET_DEFAULT(overduePolicy_, "") };
    inline UpdateCalendarRequest& setOverduePolicy(string overduePolicy) { DARABONBA_PTR_SET_VALUE(overduePolicy_, overduePolicy) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateCalendarRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectIds Field Functions 
    bool hasProjectIds() const { return this->projectIds_ != nullptr;};
    void deleteProjectIds() { this->projectIds_ = nullptr;};
    inline const vector<int64_t> & getProjectIds() const { DARABONBA_PTR_GET_CONST(projectIds_, vector<int64_t>) };
    inline vector<int64_t> getProjectIds() { DARABONBA_PTR_GET(projectIds_, vector<int64_t>) };
    inline UpdateCalendarRequest& setProjectIds(const vector<int64_t> & projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };
    inline UpdateCalendarRequest& setProjectIds(vector<int64_t> && projectIds) { DARABONBA_PTR_SET_RVALUE(projectIds_, projectIds) };


    // schedulePolicy Field Functions 
    bool hasSchedulePolicy() const { return this->schedulePolicy_ != nullptr;};
    void deleteSchedulePolicy() { this->schedulePolicy_ = nullptr;};
    inline const UpdateCalendarRequest::SchedulePolicy & getSchedulePolicy() const { DARABONBA_PTR_GET_CONST(schedulePolicy_, UpdateCalendarRequest::SchedulePolicy) };
    inline UpdateCalendarRequest::SchedulePolicy getSchedulePolicy() { DARABONBA_PTR_GET(schedulePolicy_, UpdateCalendarRequest::SchedulePolicy) };
    inline UpdateCalendarRequest& setSchedulePolicy(const UpdateCalendarRequest::SchedulePolicy & schedulePolicy) { DARABONBA_PTR_SET_VALUE(schedulePolicy_, schedulePolicy) };
    inline UpdateCalendarRequest& setSchedulePolicy(UpdateCalendarRequest::SchedulePolicy && schedulePolicy) { DARABONBA_PTR_SET_RVALUE(schedulePolicy_, schedulePolicy) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline UpdateCalendarRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateCalendarRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether the calendar applies to all workspaces. Default value: false. Valid values:
    // - true: All workspaces.
    // - false: The workspaces specified by ProjectIds.
    shared_ptr<bool> allProjects_ {};
    // The description of the scheduling calendar. The description must be 5 to 2,048 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The end date of the calendar validity period, in the `yyyy-mm-dd` format. Required when Type is set to StrongConstraint. The end date cannot be earlier than the start date, and the interval between the start date and the end date must be less than 5 years.
    shared_ptr<string> endDate_ {};
    // The expiration reminder. Required when Type is set to StrongConstraint. Valid values:
    // - OneMonthBefore: One month in advance.
    // - OneWeekBefore: One week in advance.
    // - ThreeDaysBefore: Three days in advance.
    shared_ptr<string> expirationReminder_ {};
    // The default scheduling policy for dates that are not configured. Required when Type is set to WeakConstraint. Valid values:
    // - Normal: Normal scheduling.
    // - Pause: Pause scheduling.
    // - Skip: Dry run.
    shared_ptr<string> fallbackPolicy_ {};
    // The ID of the scheduling calendar.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The scheduling policy after the calendar expires. Required when Type is set to StrongConstraint. Valid values:
    // - Normal: Normal scheduling.
    // - Pause: Pause scheduling.
    // - Skip: Dry run.
    shared_ptr<string> overduePolicy_ {};
    // The account ID of the owner.
    // 
    // This parameter is required.
    shared_ptr<string> owner_ {};
    // The list of applicable workspace IDs.
    // - Required and cannot be empty when AllProjects is set to false or left unspecified.
    // - Leave empty or pass an empty array when AllProjects is set to true.
    shared_ptr<vector<int64_t>> projectIds_ {};
    // The date scheduling policy. For a strong constraint calendar, the normal scheduling dates and non-scheduling dates must cover every day within the validity period and cannot overlap.
    // 
    // This parameter is required.
    shared_ptr<UpdateCalendarRequest::SchedulePolicy> schedulePolicy_ {};
    // The start date of the calendar validity period, in the `yyyy-mm-dd` format. Required when Type is set to StrongConstraint.
    shared_ptr<string> startDate_ {};
    // The calendar type. Valid values:
    // - StrongConstraint: Strong constraint calendar.
    // - WeakConstraint: Weak constraint calendar.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
