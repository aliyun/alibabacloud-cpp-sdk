// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUSERALARMCONFIGREQUESTALARMCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUSERALARMCONFIGREQUESTALARMCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyUserAlarmConfigRequestAlarmConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUserAlarmConfigRequestAlarmConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmHour, alarmHour_);
      DARABONBA_PTR_TO_JSON(AlarmNotify, alarmNotify_);
      DARABONBA_PTR_TO_JSON(AlarmPeriod, alarmPeriod_);
      DARABONBA_PTR_TO_JSON(AlarmType, alarmType_);
      DARABONBA_PTR_TO_JSON(AlarmValue, alarmValue_);
      DARABONBA_PTR_TO_JSON(AlarmWeekDay, alarmWeekDay_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUserAlarmConfigRequestAlarmConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmHour, alarmHour_);
      DARABONBA_PTR_FROM_JSON(AlarmNotify, alarmNotify_);
      DARABONBA_PTR_FROM_JSON(AlarmPeriod, alarmPeriod_);
      DARABONBA_PTR_FROM_JSON(AlarmType, alarmType_);
      DARABONBA_PTR_FROM_JSON(AlarmValue, alarmValue_);
      DARABONBA_PTR_FROM_JSON(AlarmWeekDay, alarmWeekDay_);
    };
    ModifyUserAlarmConfigRequestAlarmConfig() = default ;
    ModifyUserAlarmConfigRequestAlarmConfig(const ModifyUserAlarmConfigRequestAlarmConfig &) = default ;
    ModifyUserAlarmConfigRequestAlarmConfig(ModifyUserAlarmConfigRequestAlarmConfig &&) = default ;
    ModifyUserAlarmConfigRequestAlarmConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUserAlarmConfigRequestAlarmConfig() = default ;
    ModifyUserAlarmConfigRequestAlarmConfig& operator=(const ModifyUserAlarmConfigRequestAlarmConfig &) = default ;
    ModifyUserAlarmConfigRequestAlarmConfig& operator=(ModifyUserAlarmConfigRequestAlarmConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmHour_ == nullptr
        && return this->alarmNotify_ == nullptr && return this->alarmPeriod_ == nullptr && return this->alarmType_ == nullptr && return this->alarmValue_ == nullptr && return this->alarmWeekDay_ == nullptr; };
    // alarmHour Field Functions 
    bool hasAlarmHour() const { return this->alarmHour_ != nullptr;};
    void deleteAlarmHour() { this->alarmHour_ = nullptr;};
    inline string alarmHour() const { DARABONBA_PTR_GET_DEFAULT(alarmHour_, "") };
    inline ModifyUserAlarmConfigRequestAlarmConfig& setAlarmHour(string alarmHour) { DARABONBA_PTR_SET_VALUE(alarmHour_, alarmHour) };


    // alarmNotify Field Functions 
    bool hasAlarmNotify() const { return this->alarmNotify_ != nullptr;};
    void deleteAlarmNotify() { this->alarmNotify_ = nullptr;};
    inline string alarmNotify() const { DARABONBA_PTR_GET_DEFAULT(alarmNotify_, "") };
    inline ModifyUserAlarmConfigRequestAlarmConfig& setAlarmNotify(string alarmNotify) { DARABONBA_PTR_SET_VALUE(alarmNotify_, alarmNotify) };


    // alarmPeriod Field Functions 
    bool hasAlarmPeriod() const { return this->alarmPeriod_ != nullptr;};
    void deleteAlarmPeriod() { this->alarmPeriod_ = nullptr;};
    inline string alarmPeriod() const { DARABONBA_PTR_GET_DEFAULT(alarmPeriod_, "") };
    inline ModifyUserAlarmConfigRequestAlarmConfig& setAlarmPeriod(string alarmPeriod) { DARABONBA_PTR_SET_VALUE(alarmPeriod_, alarmPeriod) };


    // alarmType Field Functions 
    bool hasAlarmType() const { return this->alarmType_ != nullptr;};
    void deleteAlarmType() { this->alarmType_ = nullptr;};
    inline string alarmType() const { DARABONBA_PTR_GET_DEFAULT(alarmType_, "") };
    inline ModifyUserAlarmConfigRequestAlarmConfig& setAlarmType(string alarmType) { DARABONBA_PTR_SET_VALUE(alarmType_, alarmType) };


    // alarmValue Field Functions 
    bool hasAlarmValue() const { return this->alarmValue_ != nullptr;};
    void deleteAlarmValue() { this->alarmValue_ = nullptr;};
    inline string alarmValue() const { DARABONBA_PTR_GET_DEFAULT(alarmValue_, "") };
    inline ModifyUserAlarmConfigRequestAlarmConfig& setAlarmValue(string alarmValue) { DARABONBA_PTR_SET_VALUE(alarmValue_, alarmValue) };


    // alarmWeekDay Field Functions 
    bool hasAlarmWeekDay() const { return this->alarmWeekDay_ != nullptr;};
    void deleteAlarmWeekDay() { this->alarmWeekDay_ = nullptr;};
    inline string alarmWeekDay() const { DARABONBA_PTR_GET_DEFAULT(alarmWeekDay_, "") };
    inline ModifyUserAlarmConfigRequestAlarmConfig& setAlarmWeekDay(string alarmWeekDay) { DARABONBA_PTR_SET_VALUE(alarmWeekDay_, alarmWeekDay) };


  protected:
    std::shared_ptr<string> alarmHour_ = nullptr;
    std::shared_ptr<string> alarmNotify_ = nullptr;
    std::shared_ptr<string> alarmPeriod_ = nullptr;
    std::shared_ptr<string> alarmType_ = nullptr;
    std::shared_ptr<string> alarmValue_ = nullptr;
    std::shared_ptr<string> alarmWeekDay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
