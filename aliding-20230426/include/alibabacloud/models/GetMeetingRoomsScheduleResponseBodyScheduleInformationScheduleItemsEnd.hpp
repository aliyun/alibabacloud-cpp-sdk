// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEETINGROOMSSCHEDULERESPONSEBODYSCHEDULEINFORMATIONSCHEDULEITEMSEND_HPP_
#define ALIBABACLOUD_MODELS_GETMEETINGROOMSSCHEDULERESPONSEBODYSCHEDULEINFORMATIONSCHEDULEITEMSEND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd& obj) { 
      DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd& obj) { 
      DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd() = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd(const GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd &) = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd(GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd &&) = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd() = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd& operator=(const GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd &) = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd& operator=(GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dateTime_ == nullptr
        && return this->timeZone_ == nullptr; };
    // dateTime Field Functions 
    bool hasDateTime() const { return this->dateTime_ != nullptr;};
    void deleteDateTime() { this->dateTime_ = nullptr;};
    inline string dateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
    inline GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    std::shared_ptr<string> dateTime_ = nullptr;
    std::shared_ptr<string> timeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
