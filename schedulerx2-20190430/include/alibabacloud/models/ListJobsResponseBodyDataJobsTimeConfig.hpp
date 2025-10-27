// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYDATAJOBSTIMECONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYDATAJOBSTIMECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ListJobsResponseBodyDataJobsTimeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBodyDataJobsTimeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Calendar, calendar_);
      DARABONBA_PTR_TO_JSON(DataOffset, dataOffset_);
      DARABONBA_PTR_TO_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBodyDataJobsTimeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Calendar, calendar_);
      DARABONBA_PTR_FROM_JSON(DataOffset, dataOffset_);
      DARABONBA_PTR_FROM_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
    };
    ListJobsResponseBodyDataJobsTimeConfig() = default ;
    ListJobsResponseBodyDataJobsTimeConfig(const ListJobsResponseBodyDataJobsTimeConfig &) = default ;
    ListJobsResponseBodyDataJobsTimeConfig(ListJobsResponseBodyDataJobsTimeConfig &&) = default ;
    ListJobsResponseBodyDataJobsTimeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBodyDataJobsTimeConfig() = default ;
    ListJobsResponseBodyDataJobsTimeConfig& operator=(const ListJobsResponseBodyDataJobsTimeConfig &) = default ;
    ListJobsResponseBodyDataJobsTimeConfig& operator=(ListJobsResponseBodyDataJobsTimeConfig &&) = default ;
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
    inline ListJobsResponseBodyDataJobsTimeConfig& setCalendar(string calendar) { DARABONBA_PTR_SET_VALUE(calendar_, calendar) };


    // dataOffset Field Functions 
    bool hasDataOffset() const { return this->dataOffset_ != nullptr;};
    void deleteDataOffset() { this->dataOffset_ = nullptr;};
    inline int32_t dataOffset() const { DARABONBA_PTR_GET_DEFAULT(dataOffset_, 0) };
    inline ListJobsResponseBodyDataJobsTimeConfig& setDataOffset(int32_t dataOffset) { DARABONBA_PTR_SET_VALUE(dataOffset_, dataOffset) };


    // timeExpression Field Functions 
    bool hasTimeExpression() const { return this->timeExpression_ != nullptr;};
    void deleteTimeExpression() { this->timeExpression_ = nullptr;};
    inline string timeExpression() const { DARABONBA_PTR_GET_DEFAULT(timeExpression_, "") };
    inline ListJobsResponseBodyDataJobsTimeConfig& setTimeExpression(string timeExpression) { DARABONBA_PTR_SET_VALUE(timeExpression_, timeExpression) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline int32_t timeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
    inline ListJobsResponseBodyDataJobsTimeConfig& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


  protected:
    // If the TimeType parameter is set to cron, you can specify custom calendar days.
    std::shared_ptr<string> calendar_ = nullptr;
    // The time offset if the TimeType parameter is set to cron. Unit: seconds.
    std::shared_ptr<int32_t> dataOffset_ = nullptr;
    // The time expression. Valid values:
    // 
    // *   **api**: indicates that no time expression is used to specify the time when to schedule the job.
    // *   **fix_rate**: indicates that the job is triggered at a fixed frequency. For example, a value of 30 indicates that the job is triggered every 30 seconds.
    // *   **cron**: indicates that a standard CRON expression is used to specify the time when to schedule the job.
    // *   **second_delay**: indicates that the job is triggered after a fixed delay. Valid values: 1 to 60. Unit: seconds.
    std::shared_ptr<string> timeExpression_ = nullptr;
    // The method that is used to specify the time when to schedule the job. Valid values:
    // 
    // *   **1**: cron
    // *   **3**: fix_rate
    // *   **4**: second_delay
    // *   **100**: api
    std::shared_ptr<int32_t> timeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
