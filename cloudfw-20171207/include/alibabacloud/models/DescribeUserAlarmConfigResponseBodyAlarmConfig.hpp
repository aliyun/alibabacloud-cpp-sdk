// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERALARMCONFIGRESPONSEBODYALARMCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERALARMCONFIGRESPONSEBODYALARMCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeUserAlarmConfigResponseBodyAlarmConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserAlarmConfigResponseBodyAlarmConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmHour, alarmHour_);
      DARABONBA_PTR_TO_JSON(AlarmNotify, alarmNotify_);
      DARABONBA_PTR_TO_JSON(AlarmPeriod, alarmPeriod_);
      DARABONBA_PTR_TO_JSON(AlarmType, alarmType_);
      DARABONBA_PTR_TO_JSON(AlarmValue, alarmValue_);
      DARABONBA_PTR_TO_JSON(AlarmWeekDay, alarmWeekDay_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserAlarmConfigResponseBodyAlarmConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmHour, alarmHour_);
      DARABONBA_PTR_FROM_JSON(AlarmNotify, alarmNotify_);
      DARABONBA_PTR_FROM_JSON(AlarmPeriod, alarmPeriod_);
      DARABONBA_PTR_FROM_JSON(AlarmType, alarmType_);
      DARABONBA_PTR_FROM_JSON(AlarmValue, alarmValue_);
      DARABONBA_PTR_FROM_JSON(AlarmWeekDay, alarmWeekDay_);
    };
    DescribeUserAlarmConfigResponseBodyAlarmConfig() = default ;
    DescribeUserAlarmConfigResponseBodyAlarmConfig(const DescribeUserAlarmConfigResponseBodyAlarmConfig &) = default ;
    DescribeUserAlarmConfigResponseBodyAlarmConfig(DescribeUserAlarmConfigResponseBodyAlarmConfig &&) = default ;
    DescribeUserAlarmConfigResponseBodyAlarmConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserAlarmConfigResponseBodyAlarmConfig() = default ;
    DescribeUserAlarmConfigResponseBodyAlarmConfig& operator=(const DescribeUserAlarmConfigResponseBodyAlarmConfig &) = default ;
    DescribeUserAlarmConfigResponseBodyAlarmConfig& operator=(DescribeUserAlarmConfigResponseBodyAlarmConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmHour_ == nullptr
        && return this->alarmNotify_ == nullptr && return this->alarmPeriod_ == nullptr && return this->alarmType_ == nullptr && return this->alarmValue_ == nullptr && return this->alarmWeekDay_ == nullptr; };
    // alarmHour Field Functions 
    bool hasAlarmHour() const { return this->alarmHour_ != nullptr;};
    void deleteAlarmHour() { this->alarmHour_ = nullptr;};
    inline int32_t alarmHour() const { DARABONBA_PTR_GET_DEFAULT(alarmHour_, 0) };
    inline DescribeUserAlarmConfigResponseBodyAlarmConfig& setAlarmHour(int32_t alarmHour) { DARABONBA_PTR_SET_VALUE(alarmHour_, alarmHour) };


    // alarmNotify Field Functions 
    bool hasAlarmNotify() const { return this->alarmNotify_ != nullptr;};
    void deleteAlarmNotify() { this->alarmNotify_ = nullptr;};
    inline int32_t alarmNotify() const { DARABONBA_PTR_GET_DEFAULT(alarmNotify_, 0) };
    inline DescribeUserAlarmConfigResponseBodyAlarmConfig& setAlarmNotify(int32_t alarmNotify) { DARABONBA_PTR_SET_VALUE(alarmNotify_, alarmNotify) };


    // alarmPeriod Field Functions 
    bool hasAlarmPeriod() const { return this->alarmPeriod_ != nullptr;};
    void deleteAlarmPeriod() { this->alarmPeriod_ = nullptr;};
    inline int32_t alarmPeriod() const { DARABONBA_PTR_GET_DEFAULT(alarmPeriod_, 0) };
    inline DescribeUserAlarmConfigResponseBodyAlarmConfig& setAlarmPeriod(int32_t alarmPeriod) { DARABONBA_PTR_SET_VALUE(alarmPeriod_, alarmPeriod) };


    // alarmType Field Functions 
    bool hasAlarmType() const { return this->alarmType_ != nullptr;};
    void deleteAlarmType() { this->alarmType_ = nullptr;};
    inline string alarmType() const { DARABONBA_PTR_GET_DEFAULT(alarmType_, "") };
    inline DescribeUserAlarmConfigResponseBodyAlarmConfig& setAlarmType(string alarmType) { DARABONBA_PTR_SET_VALUE(alarmType_, alarmType) };


    // alarmValue Field Functions 
    bool hasAlarmValue() const { return this->alarmValue_ != nullptr;};
    void deleteAlarmValue() { this->alarmValue_ = nullptr;};
    inline string alarmValue() const { DARABONBA_PTR_GET_DEFAULT(alarmValue_, "") };
    inline DescribeUserAlarmConfigResponseBodyAlarmConfig& setAlarmValue(string alarmValue) { DARABONBA_PTR_SET_VALUE(alarmValue_, alarmValue) };


    // alarmWeekDay Field Functions 
    bool hasAlarmWeekDay() const { return this->alarmWeekDay_ != nullptr;};
    void deleteAlarmWeekDay() { this->alarmWeekDay_ = nullptr;};
    inline int32_t alarmWeekDay() const { DARABONBA_PTR_GET_DEFAULT(alarmWeekDay_, 0) };
    inline DescribeUserAlarmConfigResponseBodyAlarmConfig& setAlarmWeekDay(int32_t alarmWeekDay) { DARABONBA_PTR_SET_VALUE(alarmWeekDay_, alarmWeekDay) };


  protected:
    std::shared_ptr<int32_t> alarmHour_ = nullptr;
    std::shared_ptr<int32_t> alarmNotify_ = nullptr;
    std::shared_ptr<int32_t> alarmPeriod_ = nullptr;
    std::shared_ptr<string> alarmType_ = nullptr;
    std::shared_ptr<string> alarmValue_ = nullptr;
    std::shared_ptr<int32_t> alarmWeekDay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
