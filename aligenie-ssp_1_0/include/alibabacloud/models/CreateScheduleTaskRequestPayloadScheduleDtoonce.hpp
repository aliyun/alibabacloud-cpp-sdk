// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULETASKREQUESTPAYLOADSCHEDULEDTOONCE_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULETASKREQUESTPAYLOADSCHEDULEDTOONCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CreateScheduleTaskRequestPayloadScheduleDTOOnce : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduleTaskRequestPayloadScheduleDTOOnce& obj) { 
      DARABONBA_PTR_TO_JSON(Day, day_);
      DARABONBA_PTR_TO_JSON(Hour, hour_);
      DARABONBA_PTR_TO_JSON(Minute, minute_);
      DARABONBA_PTR_TO_JSON(Month, month_);
      DARABONBA_PTR_TO_JSON(Year, year_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduleTaskRequestPayloadScheduleDTOOnce& obj) { 
      DARABONBA_PTR_FROM_JSON(Day, day_);
      DARABONBA_PTR_FROM_JSON(Hour, hour_);
      DARABONBA_PTR_FROM_JSON(Minute, minute_);
      DARABONBA_PTR_FROM_JSON(Month, month_);
      DARABONBA_PTR_FROM_JSON(Year, year_);
    };
    CreateScheduleTaskRequestPayloadScheduleDTOOnce() = default ;
    CreateScheduleTaskRequestPayloadScheduleDTOOnce(const CreateScheduleTaskRequestPayloadScheduleDTOOnce &) = default ;
    CreateScheduleTaskRequestPayloadScheduleDTOOnce(CreateScheduleTaskRequestPayloadScheduleDTOOnce &&) = default ;
    CreateScheduleTaskRequestPayloadScheduleDTOOnce(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduleTaskRequestPayloadScheduleDTOOnce() = default ;
    CreateScheduleTaskRequestPayloadScheduleDTOOnce& operator=(const CreateScheduleTaskRequestPayloadScheduleDTOOnce &) = default ;
    CreateScheduleTaskRequestPayloadScheduleDTOOnce& operator=(CreateScheduleTaskRequestPayloadScheduleDTOOnce &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->day_ != nullptr
        && this->hour_ != nullptr && this->minute_ != nullptr && this->month_ != nullptr && this->year_ != nullptr; };
    // day Field Functions 
    bool hasDay() const { return this->day_ != nullptr;};
    void deleteDay() { this->day_ = nullptr;};
    inline int32_t day() const { DARABONBA_PTR_GET_DEFAULT(day_, 0) };
    inline CreateScheduleTaskRequestPayloadScheduleDTOOnce& setDay(int32_t day) { DARABONBA_PTR_SET_VALUE(day_, day) };


    // hour Field Functions 
    bool hasHour() const { return this->hour_ != nullptr;};
    void deleteHour() { this->hour_ = nullptr;};
    inline int32_t hour() const { DARABONBA_PTR_GET_DEFAULT(hour_, 0) };
    inline CreateScheduleTaskRequestPayloadScheduleDTOOnce& setHour(int32_t hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


    // minute Field Functions 
    bool hasMinute() const { return this->minute_ != nullptr;};
    void deleteMinute() { this->minute_ = nullptr;};
    inline int32_t minute() const { DARABONBA_PTR_GET_DEFAULT(minute_, 0) };
    inline CreateScheduleTaskRequestPayloadScheduleDTOOnce& setMinute(int32_t minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


    // month Field Functions 
    bool hasMonth() const { return this->month_ != nullptr;};
    void deleteMonth() { this->month_ = nullptr;};
    inline int32_t month() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
    inline CreateScheduleTaskRequestPayloadScheduleDTOOnce& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline int32_t year() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
    inline CreateScheduleTaskRequestPayloadScheduleDTOOnce& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    std::shared_ptr<int32_t> day_ = nullptr;
    std::shared_ptr<int32_t> hour_ = nullptr;
    std::shared_ptr<int32_t> minute_ = nullptr;
    std::shared_ptr<int32_t> month_ = nullptr;
    std::shared_ptr<int32_t> year_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
