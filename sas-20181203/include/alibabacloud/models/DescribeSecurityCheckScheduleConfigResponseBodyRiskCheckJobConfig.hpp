// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYCHECKSCHEDULECONFIGRESPONSEBODYRISKCHECKJOBCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYCHECKSCHEDULECONFIGRESPONSEBODYRISKCHECKJOBCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DaysOfWeek, daysOfWeek_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DaysOfWeek, daysOfWeek_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig() = default ;
    DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig(const DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig &) = default ;
    DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig(DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig &&) = default ;
    DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig() = default ;
    DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig& operator=(const DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig &) = default ;
    DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig& operator=(DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->daysOfWeek_ == nullptr
        && return this->endTime_ == nullptr && return this->startTime_ == nullptr; };
    // daysOfWeek Field Functions 
    bool hasDaysOfWeek() const { return this->daysOfWeek_ != nullptr;};
    void deleteDaysOfWeek() { this->daysOfWeek_ = nullptr;};
    inline string daysOfWeek() const { DARABONBA_PTR_GET_DEFAULT(daysOfWeek_, "") };
    inline DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig& setDaysOfWeek(string daysOfWeek) { DARABONBA_PTR_SET_VALUE(daysOfWeek_, daysOfWeek) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The day of the week when the check tasks are performed. Multiple days can be specified. Multiple days are separated by commas (,).
    // 
    // *   **1**: Monday
    // *   **2**: Tuesday
    // *   **3**: Wednesday
    // *   **4**: Thursday
    // *   **5**: Friday
    // *   **6**: Saturday
    // *   **7**: Sunday
    std::shared_ptr<string> daysOfWeek_ = nullptr;
    // The time range during which check tasks end. Valid values:
    // 
    // *   **6**: 00:00 to 06:00
    // *   **12**: 06:00 to 12:00
    // *   **18**: 12:00 to 18:00
    // *   **24**: 18:00 to 24:00
    std::shared_ptr<int32_t> endTime_ = nullptr;
    // The time range during which check tasks start. Valid values:
    // 
    // *   **0**: 00:00 to 06:00
    // *   **6**: 06:00 to 12:00
    // *   **12**: 12:00 to 18:00
    // *   **18**: 18:00 to 24:00
    std::shared_ptr<int32_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
