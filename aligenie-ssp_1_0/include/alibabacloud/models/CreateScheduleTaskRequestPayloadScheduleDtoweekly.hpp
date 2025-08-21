// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULETASKREQUESTPAYLOADSCHEDULEDTOWEEKLY_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULETASKREQUESTPAYLOADSCHEDULEDTOWEEKLY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CreateScheduleTaskRequestPayloadScheduleDTOWeekly : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduleTaskRequestPayloadScheduleDTOWeekly& obj) { 
      DARABONBA_PTR_TO_JSON(DaysOfWeek, daysOfWeek_);
      DARABONBA_PTR_TO_JSON(Hours, hours_);
      DARABONBA_PTR_TO_JSON(Minutes, minutes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduleTaskRequestPayloadScheduleDTOWeekly& obj) { 
      DARABONBA_PTR_FROM_JSON(DaysOfWeek, daysOfWeek_);
      DARABONBA_PTR_FROM_JSON(Hours, hours_);
      DARABONBA_PTR_FROM_JSON(Minutes, minutes_);
    };
    CreateScheduleTaskRequestPayloadScheduleDTOWeekly() = default ;
    CreateScheduleTaskRequestPayloadScheduleDTOWeekly(const CreateScheduleTaskRequestPayloadScheduleDTOWeekly &) = default ;
    CreateScheduleTaskRequestPayloadScheduleDTOWeekly(CreateScheduleTaskRequestPayloadScheduleDTOWeekly &&) = default ;
    CreateScheduleTaskRequestPayloadScheduleDTOWeekly(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduleTaskRequestPayloadScheduleDTOWeekly() = default ;
    CreateScheduleTaskRequestPayloadScheduleDTOWeekly& operator=(const CreateScheduleTaskRequestPayloadScheduleDTOWeekly &) = default ;
    CreateScheduleTaskRequestPayloadScheduleDTOWeekly& operator=(CreateScheduleTaskRequestPayloadScheduleDTOWeekly &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->daysOfWeek_ != nullptr
        && this->hours_ != nullptr && this->minutes_ != nullptr; };
    // daysOfWeek Field Functions 
    bool hasDaysOfWeek() const { return this->daysOfWeek_ != nullptr;};
    void deleteDaysOfWeek() { this->daysOfWeek_ = nullptr;};
    inline const vector<int32_t> & daysOfWeek() const { DARABONBA_PTR_GET_CONST(daysOfWeek_, vector<int32_t>) };
    inline vector<int32_t> daysOfWeek() { DARABONBA_PTR_GET(daysOfWeek_, vector<int32_t>) };
    inline CreateScheduleTaskRequestPayloadScheduleDTOWeekly& setDaysOfWeek(const vector<int32_t> & daysOfWeek) { DARABONBA_PTR_SET_VALUE(daysOfWeek_, daysOfWeek) };
    inline CreateScheduleTaskRequestPayloadScheduleDTOWeekly& setDaysOfWeek(vector<int32_t> && daysOfWeek) { DARABONBA_PTR_SET_RVALUE(daysOfWeek_, daysOfWeek) };


    // hours Field Functions 
    bool hasHours() const { return this->hours_ != nullptr;};
    void deleteHours() { this->hours_ = nullptr;};
    inline const vector<int32_t> & hours() const { DARABONBA_PTR_GET_CONST(hours_, vector<int32_t>) };
    inline vector<int32_t> hours() { DARABONBA_PTR_GET(hours_, vector<int32_t>) };
    inline CreateScheduleTaskRequestPayloadScheduleDTOWeekly& setHours(const vector<int32_t> & hours) { DARABONBA_PTR_SET_VALUE(hours_, hours) };
    inline CreateScheduleTaskRequestPayloadScheduleDTOWeekly& setHours(vector<int32_t> && hours) { DARABONBA_PTR_SET_RVALUE(hours_, hours) };


    // minutes Field Functions 
    bool hasMinutes() const { return this->minutes_ != nullptr;};
    void deleteMinutes() { this->minutes_ = nullptr;};
    inline const vector<int32_t> & minutes() const { DARABONBA_PTR_GET_CONST(minutes_, vector<int32_t>) };
    inline vector<int32_t> minutes() { DARABONBA_PTR_GET(minutes_, vector<int32_t>) };
    inline CreateScheduleTaskRequestPayloadScheduleDTOWeekly& setMinutes(const vector<int32_t> & minutes) { DARABONBA_PTR_SET_VALUE(minutes_, minutes) };
    inline CreateScheduleTaskRequestPayloadScheduleDTOWeekly& setMinutes(vector<int32_t> && minutes) { DARABONBA_PTR_SET_RVALUE(minutes_, minutes) };


  protected:
    std::shared_ptr<vector<int32_t>> daysOfWeek_ = nullptr;
    std::shared_ptr<vector<int32_t>> hours_ = nullptr;
    std::shared_ptr<vector<int32_t>> minutes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
