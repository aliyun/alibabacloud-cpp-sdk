// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODYDATAJOBCONFIGINFOTIMECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODYDATAJOBCONFIGINFOTIMECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetJobInfoResponseBodyDataJobConfigInfoTimeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobInfoResponseBodyDataJobConfigInfoTimeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Calendar, calendar_);
      DARABONBA_PTR_TO_JSON(DataOffset, dataOffset_);
      DARABONBA_PTR_TO_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobInfoResponseBodyDataJobConfigInfoTimeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Calendar, calendar_);
      DARABONBA_PTR_FROM_JSON(DataOffset, dataOffset_);
      DARABONBA_PTR_FROM_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
    };
    GetJobInfoResponseBodyDataJobConfigInfoTimeConfig() = default ;
    GetJobInfoResponseBodyDataJobConfigInfoTimeConfig(const GetJobInfoResponseBodyDataJobConfigInfoTimeConfig &) = default ;
    GetJobInfoResponseBodyDataJobConfigInfoTimeConfig(GetJobInfoResponseBodyDataJobConfigInfoTimeConfig &&) = default ;
    GetJobInfoResponseBodyDataJobConfigInfoTimeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobInfoResponseBodyDataJobConfigInfoTimeConfig() = default ;
    GetJobInfoResponseBodyDataJobConfigInfoTimeConfig& operator=(const GetJobInfoResponseBodyDataJobConfigInfoTimeConfig &) = default ;
    GetJobInfoResponseBodyDataJobConfigInfoTimeConfig& operator=(GetJobInfoResponseBodyDataJobConfigInfoTimeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendar_ == nullptr
        && return this->dataOffset_ == nullptr && return this->timeExpression_ == nullptr && return this->timeType_ == nullptr; };
    // calendar Field Functions 
    bool hasCalendar() const { return this->calendar_ != nullptr;};
    void deleteCalendar() { this->calendar_ = nullptr;};
    inline string calendar() const { DARABONBA_PTR_GET_DEFAULT(calendar_, "") };
    inline GetJobInfoResponseBodyDataJobConfigInfoTimeConfig& setCalendar(string calendar) { DARABONBA_PTR_SET_VALUE(calendar_, calendar) };


    // dataOffset Field Functions 
    bool hasDataOffset() const { return this->dataOffset_ != nullptr;};
    void deleteDataOffset() { this->dataOffset_ = nullptr;};
    inline int32_t dataOffset() const { DARABONBA_PTR_GET_DEFAULT(dataOffset_, 0) };
    inline GetJobInfoResponseBodyDataJobConfigInfoTimeConfig& setDataOffset(int32_t dataOffset) { DARABONBA_PTR_SET_VALUE(dataOffset_, dataOffset) };


    // timeExpression Field Functions 
    bool hasTimeExpression() const { return this->timeExpression_ != nullptr;};
    void deleteTimeExpression() { this->timeExpression_ = nullptr;};
    inline string timeExpression() const { DARABONBA_PTR_GET_DEFAULT(timeExpression_, "") };
    inline GetJobInfoResponseBodyDataJobConfigInfoTimeConfig& setTimeExpression(string timeExpression) { DARABONBA_PTR_SET_VALUE(timeExpression_, timeExpression) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline int32_t timeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
    inline GetJobInfoResponseBodyDataJobConfigInfoTimeConfig& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


  protected:
    // Custom calendar days specified if TimeType is set to **1** (cron).
    std::shared_ptr<string> calendar_ = nullptr;
    // The time offset specified if TimeType is set to **1** (cron). Unit: seconds.
    std::shared_ptr<int32_t> dataOffset_ = nullptr;
    // The time expression specified based on the value of TimeType:
    // 
    // *   If TimeType is set to **100** (api), no time expression is required.
    // *   If TimeType is set to **3** (fix_rate), this parameter value indicates the specific and fixed frequency. For example, if the value is 30, the system triggers a job every 30 seconds.
    // *   If TimeType is set to **1** (cron), this parameter value indicates the standard CRON expression used to specify the time when to schedule the job.
    // *   If TimeType is set to **4** (second_delay), this parameter value indicates the fixed delay after which the job is triggered. Valid values: 1 to 60. Unit: seconds.
    std::shared_ptr<string> timeExpression_ = nullptr;
    // The time type. Valid values:
    // 
    // *   **1**: cron
    // *   **3**: fix_rate
    // *   **4**: second_delay
    // *   **5**: one_time
    // *   **100**: api
    std::shared_ptr<int32_t> timeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
