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
        && return this->enable_ == nullptr && return this->maintenanceTime_ == nullptr && return this->recurrence_ == nullptr && return this->weeklyPeriod_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline MaintenanceWindow& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline MaintenanceWindow& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // maintenanceTime Field Functions 
    bool hasMaintenanceTime() const { return this->maintenanceTime_ != nullptr;};
    void deleteMaintenanceTime() { this->maintenanceTime_ = nullptr;};
    inline string maintenanceTime() const { DARABONBA_PTR_GET_DEFAULT(maintenanceTime_, "") };
    inline MaintenanceWindow& setMaintenanceTime(string maintenanceTime) { DARABONBA_PTR_SET_VALUE(maintenanceTime_, maintenanceTime) };


    // recurrence Field Functions 
    bool hasRecurrence() const { return this->recurrence_ != nullptr;};
    void deleteRecurrence() { this->recurrence_ = nullptr;};
    inline string recurrence() const { DARABONBA_PTR_GET_DEFAULT(recurrence_, "") };
    inline MaintenanceWindow& setRecurrence(string recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };


    // weeklyPeriod Field Functions 
    bool hasWeeklyPeriod() const { return this->weeklyPeriod_ != nullptr;};
    void deleteWeeklyPeriod() { this->weeklyPeriod_ = nullptr;};
    inline string weeklyPeriod() const { DARABONBA_PTR_GET_DEFAULT(weeklyPeriod_, "") };
    inline MaintenanceWindow& setWeeklyPeriod(string weeklyPeriod) { DARABONBA_PTR_SET_VALUE(weeklyPeriod_, weeklyPeriod) };


  protected:
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> maintenanceTime_ = nullptr;
    std::shared_ptr<string> recurrence_ = nullptr;
    std::shared_ptr<string> weeklyPeriod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
