// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEETINGROOMSSCHEDULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEETINGROOMSSCHEDULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMeetingRoomsScheduleResponseBodyScheduleInformation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMeetingRoomsScheduleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMeetingRoomsScheduleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scheduleInformation, scheduleInformation_);
    };
    friend void from_json(const Darabonba::Json& j, GetMeetingRoomsScheduleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scheduleInformation, scheduleInformation_);
    };
    GetMeetingRoomsScheduleResponseBody() = default ;
    GetMeetingRoomsScheduleResponseBody(const GetMeetingRoomsScheduleResponseBody &) = default ;
    GetMeetingRoomsScheduleResponseBody(GetMeetingRoomsScheduleResponseBody &&) = default ;
    GetMeetingRoomsScheduleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMeetingRoomsScheduleResponseBody() = default ;
    GetMeetingRoomsScheduleResponseBody& operator=(const GetMeetingRoomsScheduleResponseBody &) = default ;
    GetMeetingRoomsScheduleResponseBody& operator=(GetMeetingRoomsScheduleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->scheduleInformation_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMeetingRoomsScheduleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduleInformation Field Functions 
    bool hasScheduleInformation() const { return this->scheduleInformation_ != nullptr;};
    void deleteScheduleInformation() { this->scheduleInformation_ = nullptr;};
    inline const vector<GetMeetingRoomsScheduleResponseBodyScheduleInformation> & scheduleInformation() const { DARABONBA_PTR_GET_CONST(scheduleInformation_, vector<GetMeetingRoomsScheduleResponseBodyScheduleInformation>) };
    inline vector<GetMeetingRoomsScheduleResponseBodyScheduleInformation> scheduleInformation() { DARABONBA_PTR_GET(scheduleInformation_, vector<GetMeetingRoomsScheduleResponseBodyScheduleInformation>) };
    inline GetMeetingRoomsScheduleResponseBody& setScheduleInformation(const vector<GetMeetingRoomsScheduleResponseBodyScheduleInformation> & scheduleInformation) { DARABONBA_PTR_SET_VALUE(scheduleInformation_, scheduleInformation) };
    inline GetMeetingRoomsScheduleResponseBody& setScheduleInformation(vector<GetMeetingRoomsScheduleResponseBodyScheduleInformation> && scheduleInformation) { DARABONBA_PTR_SET_RVALUE(scheduleInformation_, scheduleInformation) };


  protected:
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetMeetingRoomsScheduleResponseBodyScheduleInformation>> scheduleInformation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
