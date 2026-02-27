// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAINTENANCEWINDOW_HPP_
#define ALIBABACLOUD_MODELS_MAINTENANCEWINDOW_HPP_
#include <darabonba/Core.hpp>
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
      DARABONBA_PTR_TO_JSON(maintenance_time, maintenanceTime_);
      DARABONBA_PTR_TO_JSON(recurrence, recurrence_);
      DARABONBA_PTR_TO_JSON(weekly_period, weeklyPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, MaintenanceWindow& obj) { 
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
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
    virtual bool empty() const override { return this->duration_ == nullptr
        && this->enable_ == nullptr && this->maintenanceTime_ == nullptr && this->recurrence_ == nullptr && this->weeklyPeriod_ == nullptr; };
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
    // The duration of the cluster maintenance window. 
    // 
    // Valid values: 1 to 24. 
    // 
    // Unit: hours.
    // 
    // Default value: 3.
    shared_ptr<string> duration_ {};
    // Specifies whether to enable the cluster maintenance window. Valid values:
    // 
    // *   `true`: enables the cluster maintenance window.
    // *   `false`: disables the cluster maintenance window.
    // 
    // Default value: `false`.
    shared_ptr<bool> enable_ {};
    // The start time of the cluster maintenance window. The value follows a standard time format in Golang. Example: 15:04:05Z.
    shared_ptr<string> maintenanceTime_ {};
    // Defines a maintenance window recurrence rule by using the RFC5545 recurrence rule. Currently, only FREQ=WEEKLY is supported, and you cannot specify COUNT or UNTIL.
    shared_ptr<string> recurrence_ {};
    // The day of the week when maintenance is performed. Separate multiple days with commas (,). 
    // 
    // Valid values: Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, and Sunday.
    // 
    // Default value: `Thursday`.
    shared_ptr<string> weeklyPeriod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
