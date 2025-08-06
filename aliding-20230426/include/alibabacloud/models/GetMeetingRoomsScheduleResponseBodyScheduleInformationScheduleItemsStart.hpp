// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEETINGROOMSSCHEDULERESPONSEBODYSCHEDULEINFORMATIONSCHEDULEITEMSSTART_HPP_
#define ALIBABACLOUD_MODELS_GETMEETINGROOMSSCHEDULERESPONSEBODYSCHEDULEINFORMATIONSCHEDULEITEMSSTART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart& obj) { 
      DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart& obj) { 
      DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart() = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart(const GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart &) = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart(GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart &&) = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart() = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart& operator=(const GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart &) = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart& operator=(GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dateTime_ != nullptr
        && this->timeZone_ != nullptr; };
    // dateTime Field Functions 
    bool hasDateTime() const { return this->dateTime_ != nullptr;};
    void deleteDateTime() { this->dateTime_ = nullptr;};
    inline string dateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
    inline GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    std::shared_ptr<string> dateTime_ = nullptr;
    std::shared_ptr<string> timeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
