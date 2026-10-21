// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAINTENANCEWINDOW_HPP_
#define ALIBABACLOUD_MODELS_MAINTENANCEWINDOW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class MaintenanceWindow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MaintenanceWindow& obj) { 
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(exclusions, exclusions_);
      DARABONBA_PTR_TO_JSON(maintenance_time, maintenanceTime_);
      DARABONBA_PTR_TO_JSON(recurrence, recurrence_);
      DARABONBA_PTR_TO_JSON(weekly_period, weeklyPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, MaintenanceWindow& obj) { 
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(exclusions, exclusions_);
      DARABONBA_PTR_FROM_JSON(maintenance_time, maintenanceTime_);
      DARABONBA_PTR_FROM_JSON(recurrence, recurrence_);
      DARABONBA_PTR_FROM_JSON(weekly_period, weeklyPeriod_);
    };
    MaintenanceWindow() = default ;
    MaintenanceWindow(const MaintenanceWindow &) = default ;
    MaintenanceWindow(MaintenanceWindow &&) = default ;
    MaintenanceWindow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MaintenanceWindow() = default ;
    MaintenanceWindow& operator=(const MaintenanceWindow &) = default ;
    MaintenanceWindow& operator=(MaintenanceWindow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Exclusions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Exclusions& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(end_time, endTime_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(scope, scope_);
        DARABONBA_PTR_TO_JSON(start_time, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Exclusions& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(end_time, endTime_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(scope, scope_);
        DARABONBA_PTR_FROM_JSON(start_time, startTime_);
      };
      Exclusions() = default ;
      Exclusions(const Exclusions &) = default ;
      Exclusions(Exclusions &&) = default ;
      Exclusions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Exclusions() = default ;
      Exclusions& operator=(const Exclusions &) = default ;
      Exclusions& operator=(Exclusions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->endTime_ == nullptr && this->name_ == nullptr && this->scope_ == nullptr && this->startTime_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Exclusions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Exclusions& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Exclusions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline Exclusions& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Exclusions& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The description of the exclusion. The description can be up to 128 characters in length and does not support 4-byte characters such as emojis.
      shared_ptr<string> description_ {};
      // The end time of the exclusion. The time must be in the RFC 3339 standard format, later than the start_time, and later than the current time. Maximum duration for a single exclusion: 30 days for NoOperations, NoUpgrades, and NoCVEPatch, and 180 days for NoMinorUpgrades.
      shared_ptr<string> endTime_ {};
      // The name of the exclusion. The name must be 1 to 63 characters in length and can contain digits, underscores (_), and hyphens (-). It must start with an uppercase or lowercase letter, a Chinese character, or a digit. The name must be unique within the same maintenance window. If you do not specify this parameter, a default name in the format of exclusion-{random string} is generated.
      shared_ptr<string> name_ {};
      // The scope of the exclusion, which specifies the proactive O&M types that are prohibited during this time period. Valid values (case-sensitive):
      // - NoOperations: Prohibits all proactive O&M operations, including cluster upgrades, component upgrades, CVE patching, and OS image updates.
      // - NoUpgrades: Prohibits cluster upgrades and component upgrades, but still allows CVE patching and responses to scheduled ECS events.
      // - NoMinorUpgrades: Prohibits only minor version upgrades for clusters, but still allows patch upgrades, component upgrades, and CVE patching.
      // - NoCVEPatch: Prohibits automatic CVE patching.
      shared_ptr<string> scope_ {};
      // The start time of the exclusion. The time must be in the RFC 3339 standard format and use the same time zone offset as the end_time and maintenance_time.
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->duration_ == nullptr
        && this->enable_ == nullptr && this->exclusions_ == nullptr && this->maintenanceTime_ == nullptr && this->recurrence_ == nullptr && this->weeklyPeriod_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline MaintenanceWindow& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline MaintenanceWindow& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // exclusions Field Functions 
    bool hasExclusions() const { return this->exclusions_ != nullptr;};
    void deleteExclusions() { this->exclusions_ = nullptr;};
    inline const vector<MaintenanceWindow::Exclusions> & getExclusions() const { DARABONBA_PTR_GET_CONST(exclusions_, vector<MaintenanceWindow::Exclusions>) };
    inline vector<MaintenanceWindow::Exclusions> getExclusions() { DARABONBA_PTR_GET(exclusions_, vector<MaintenanceWindow::Exclusions>) };
    inline MaintenanceWindow& setExclusions(const vector<MaintenanceWindow::Exclusions> & exclusions) { DARABONBA_PTR_SET_VALUE(exclusions_, exclusions) };
    inline MaintenanceWindow& setExclusions(vector<MaintenanceWindow::Exclusions> && exclusions) { DARABONBA_PTR_SET_RVALUE(exclusions_, exclusions) };


    // maintenanceTime Field Functions 
    bool hasMaintenanceTime() const { return this->maintenanceTime_ != nullptr;};
    void deleteMaintenanceTime() { this->maintenanceTime_ = nullptr;};
    inline string getMaintenanceTime() const { DARABONBA_PTR_GET_DEFAULT(maintenanceTime_, "") };
    inline MaintenanceWindow& setMaintenanceTime(string maintenanceTime) { DARABONBA_PTR_SET_VALUE(maintenanceTime_, maintenanceTime) };


    // recurrence Field Functions 
    bool hasRecurrence() const { return this->recurrence_ != nullptr;};
    void deleteRecurrence() { this->recurrence_ = nullptr;};
    inline string getRecurrence() const { DARABONBA_PTR_GET_DEFAULT(recurrence_, "") };
    inline MaintenanceWindow& setRecurrence(string recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };


    // weeklyPeriod Field Functions 
    bool hasWeeklyPeriod() const { return this->weeklyPeriod_ != nullptr;};
    void deleteWeeklyPeriod() { this->weeklyPeriod_ = nullptr;};
    inline string getWeeklyPeriod() const { DARABONBA_PTR_GET_DEFAULT(weeklyPeriod_, "") };
    inline MaintenanceWindow& setWeeklyPeriod(string weeklyPeriod) { DARABONBA_PTR_SET_VALUE(weeklyPeriod_, weeklyPeriod) };


  protected:
    // The maintenance duration. Valid values: 1 to 24. Unit: hours.
    // 
    // Default value: 3h.
    shared_ptr<string> duration_ {};
    // Specifies whether to enable the maintenance window. Valid values:
    // - `true`: Enables the maintenance window.
    // - `false`: Does not enable the maintenance window.
    // 
    // Default value: `false`.
    shared_ptr<bool> enable_ {};
    // The list of exclusions for the maintenance window. A maximum of 10 exclusions are supported. Exclusions take precedence over the maintenance window. If an active exclusion covers an O&M type, the O&M operation is not performed even if the current time is within the maintenance window. If multiple exclusions are active at the same time, the union of the exclusions is applied. The total number of NoOperations and NoUpgrades exclusions cannot exceed 3. Only one-time periods are supported. Periodic configurations are not supported.
    shared_ptr<vector<MaintenanceWindow::Exclusions>> exclusions_ {};
    // The start time of the maintenance window. The time must be in the RFC 3339 standard format.
    shared_ptr<string> maintenanceTime_ {};
    // The recurrence rule for the maintenance window, defined by using the RFC 5545 Recurrence Rule syntax. Only FREQ=WEEKLY is supported. COUNT and UNTIL are not supported.
    shared_ptr<string> recurrence_ {};
    // The weekly maintenance period. Separate multiple values with commas (,). Valid values: Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, and Sunday.
    // 
    // Default value: `Thursday`.
    shared_ptr<string> weeklyPeriod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
