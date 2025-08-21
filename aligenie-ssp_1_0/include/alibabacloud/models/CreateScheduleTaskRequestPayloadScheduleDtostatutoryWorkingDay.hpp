// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULETASKREQUESTPAYLOADSCHEDULEDTOSTATUTORYWORKINGDAY_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULETASKREQUESTPAYLOADSCHEDULEDTOSTATUTORYWORKINGDAY_HPP_
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
  class CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay& obj) { 
      DARABONBA_PTR_TO_JSON(Hours, hours_);
      DARABONBA_PTR_TO_JSON(Minutes, minutes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay& obj) { 
      DARABONBA_PTR_FROM_JSON(Hours, hours_);
      DARABONBA_PTR_FROM_JSON(Minutes, minutes_);
    };
    CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay() = default ;
    CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay(const CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay &) = default ;
    CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay(CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay &&) = default ;
    CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay() = default ;
    CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay& operator=(const CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay &) = default ;
    CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay& operator=(CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hours_ != nullptr
        && this->minutes_ != nullptr; };
    // hours Field Functions 
    bool hasHours() const { return this->hours_ != nullptr;};
    void deleteHours() { this->hours_ = nullptr;};
    inline const vector<int32_t> & hours() const { DARABONBA_PTR_GET_CONST(hours_, vector<int32_t>) };
    inline vector<int32_t> hours() { DARABONBA_PTR_GET(hours_, vector<int32_t>) };
    inline CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay& setHours(const vector<int32_t> & hours) { DARABONBA_PTR_SET_VALUE(hours_, hours) };
    inline CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay& setHours(vector<int32_t> && hours) { DARABONBA_PTR_SET_RVALUE(hours_, hours) };


    // minutes Field Functions 
    bool hasMinutes() const { return this->minutes_ != nullptr;};
    void deleteMinutes() { this->minutes_ = nullptr;};
    inline const vector<int32_t> & minutes() const { DARABONBA_PTR_GET_CONST(minutes_, vector<int32_t>) };
    inline vector<int32_t> minutes() { DARABONBA_PTR_GET(minutes_, vector<int32_t>) };
    inline CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay& setMinutes(const vector<int32_t> & minutes) { DARABONBA_PTR_SET_VALUE(minutes_, minutes) };
    inline CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay& setMinutes(vector<int32_t> && minutes) { DARABONBA_PTR_SET_RVALUE(minutes_, minutes) };


  protected:
    std::shared_ptr<vector<int32_t>> hours_ = nullptr;
    std::shared_ptr<vector<int32_t>> minutes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
