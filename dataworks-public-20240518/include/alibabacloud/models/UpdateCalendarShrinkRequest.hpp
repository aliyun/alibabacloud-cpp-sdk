// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECALENDARSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECALENDARSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateCalendarShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCalendarShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllProjects, allProjects_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ExpirationReminder, expirationReminder_);
      DARABONBA_PTR_TO_JSON(FallbackPolicy, fallbackPolicy_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OverduePolicy, overduePolicy_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectIds, projectIdsShrink_);
      DARABONBA_PTR_TO_JSON(SchedulePolicy, schedulePolicyShrink_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCalendarShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllProjects, allProjects_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ExpirationReminder, expirationReminder_);
      DARABONBA_PTR_FROM_JSON(FallbackPolicy, fallbackPolicy_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OverduePolicy, overduePolicy_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectIds, projectIdsShrink_);
      DARABONBA_PTR_FROM_JSON(SchedulePolicy, schedulePolicyShrink_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateCalendarShrinkRequest() = default ;
    UpdateCalendarShrinkRequest(const UpdateCalendarShrinkRequest &) = default ;
    UpdateCalendarShrinkRequest(UpdateCalendarShrinkRequest &&) = default ;
    UpdateCalendarShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCalendarShrinkRequest() = default ;
    UpdateCalendarShrinkRequest& operator=(const UpdateCalendarShrinkRequest &) = default ;
    UpdateCalendarShrinkRequest& operator=(UpdateCalendarShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allProjects_ == nullptr
        && this->description_ == nullptr && this->endDate_ == nullptr && this->expirationReminder_ == nullptr && this->fallbackPolicy_ == nullptr && this->id_ == nullptr
        && this->overduePolicy_ == nullptr && this->owner_ == nullptr && this->projectIdsShrink_ == nullptr && this->schedulePolicyShrink_ == nullptr && this->startDate_ == nullptr
        && this->type_ == nullptr; };
    // allProjects Field Functions 
    bool hasAllProjects() const { return this->allProjects_ != nullptr;};
    void deleteAllProjects() { this->allProjects_ = nullptr;};
    inline bool getAllProjects() const { DARABONBA_PTR_GET_DEFAULT(allProjects_, false) };
    inline UpdateCalendarShrinkRequest& setAllProjects(bool allProjects) { DARABONBA_PTR_SET_VALUE(allProjects_, allProjects) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateCalendarShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline UpdateCalendarShrinkRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // expirationReminder Field Functions 
    bool hasExpirationReminder() const { return this->expirationReminder_ != nullptr;};
    void deleteExpirationReminder() { this->expirationReminder_ = nullptr;};
    inline string getExpirationReminder() const { DARABONBA_PTR_GET_DEFAULT(expirationReminder_, "") };
    inline UpdateCalendarShrinkRequest& setExpirationReminder(string expirationReminder) { DARABONBA_PTR_SET_VALUE(expirationReminder_, expirationReminder) };


    // fallbackPolicy Field Functions 
    bool hasFallbackPolicy() const { return this->fallbackPolicy_ != nullptr;};
    void deleteFallbackPolicy() { this->fallbackPolicy_ = nullptr;};
    inline string getFallbackPolicy() const { DARABONBA_PTR_GET_DEFAULT(fallbackPolicy_, "") };
    inline UpdateCalendarShrinkRequest& setFallbackPolicy(string fallbackPolicy) { DARABONBA_PTR_SET_VALUE(fallbackPolicy_, fallbackPolicy) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateCalendarShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // overduePolicy Field Functions 
    bool hasOverduePolicy() const { return this->overduePolicy_ != nullptr;};
    void deleteOverduePolicy() { this->overduePolicy_ = nullptr;};
    inline string getOverduePolicy() const { DARABONBA_PTR_GET_DEFAULT(overduePolicy_, "") };
    inline UpdateCalendarShrinkRequest& setOverduePolicy(string overduePolicy) { DARABONBA_PTR_SET_VALUE(overduePolicy_, overduePolicy) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateCalendarShrinkRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectIdsShrink Field Functions 
    bool hasProjectIdsShrink() const { return this->projectIdsShrink_ != nullptr;};
    void deleteProjectIdsShrink() { this->projectIdsShrink_ = nullptr;};
    inline string getProjectIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(projectIdsShrink_, "") };
    inline UpdateCalendarShrinkRequest& setProjectIdsShrink(string projectIdsShrink) { DARABONBA_PTR_SET_VALUE(projectIdsShrink_, projectIdsShrink) };


    // schedulePolicyShrink Field Functions 
    bool hasSchedulePolicyShrink() const { return this->schedulePolicyShrink_ != nullptr;};
    void deleteSchedulePolicyShrink() { this->schedulePolicyShrink_ = nullptr;};
    inline string getSchedulePolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(schedulePolicyShrink_, "") };
    inline UpdateCalendarShrinkRequest& setSchedulePolicyShrink(string schedulePolicyShrink) { DARABONBA_PTR_SET_VALUE(schedulePolicyShrink_, schedulePolicyShrink) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline UpdateCalendarShrinkRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateCalendarShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


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
    shared_ptr<string> projectIdsShrink_ {};
    // The date scheduling policy. For a strong constraint calendar, the normal scheduling dates and non-scheduling dates must cover every day within the validity period and cannot overlap.
    // 
    // This parameter is required.
    shared_ptr<string> schedulePolicyShrink_ {};
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
