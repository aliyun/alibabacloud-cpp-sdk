// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIEWONCALLSCHEDULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VIEWONCALLSCHEDULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/ScheduleValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ViewOncallScheduleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ViewOncallScheduleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(schedule, schedule_);
    };
    friend void from_json(const Darabonba::Json& j, ViewOncallScheduleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(schedule, schedule_);
    };
    ViewOncallScheduleResponseBody() = default ;
    ViewOncallScheduleResponseBody(const ViewOncallScheduleResponseBody &) = default ;
    ViewOncallScheduleResponseBody(ViewOncallScheduleResponseBody &&) = default ;
    ViewOncallScheduleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ViewOncallScheduleResponseBody() = default ;
    ViewOncallScheduleResponseBody& operator=(const ViewOncallScheduleResponseBody &) = default ;
    ViewOncallScheduleResponseBody& operator=(ViewOncallScheduleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->schedule_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ViewOncallScheduleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline const map<string, vector<ScheduleValue>> & getSchedule() const { DARABONBA_PTR_GET_CONST(schedule_, map<string, vector<ScheduleValue>>) };
    inline map<string, vector<ScheduleValue>> getSchedule() { DARABONBA_PTR_GET(schedule_, map<string, vector<ScheduleValue>>) };
    inline ViewOncallScheduleResponseBody& setSchedule(const map<string, vector<ScheduleValue>> & schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };
    inline ViewOncallScheduleResponseBody& setSchedule(map<string, vector<ScheduleValue>> && schedule) { DARABONBA_PTR_SET_RVALUE(schedule_, schedule) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<map<string, vector<ScheduleValue>>> schedule_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
