// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULETIMESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULETIMESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListScheduleTimesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScheduleTimesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Calendar, calendar_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, ListScheduleTimesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Calendar, calendar_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    ListScheduleTimesRequest() = default ;
    ListScheduleTimesRequest(const ListScheduleTimesRequest &) = default ;
    ListScheduleTimesRequest(ListScheduleTimesRequest &&) = default ;
    ListScheduleTimesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScheduleTimesRequest() = default ;
    ListScheduleTimesRequest& operator=(const ListScheduleTimesRequest &) = default ;
    ListScheduleTimesRequest& operator=(ListScheduleTimesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->calendar_ == nullptr && this->clusterId_ == nullptr && this->timeExpression_ == nullptr && this->timeType_ == nullptr && this->timeZone_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListScheduleTimesRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // calendar Field Functions 
    bool hasCalendar() const { return this->calendar_ != nullptr;};
    void deleteCalendar() { this->calendar_ = nullptr;};
    inline string getCalendar() const { DARABONBA_PTR_GET_DEFAULT(calendar_, "") };
    inline ListScheduleTimesRequest& setCalendar(string calendar) { DARABONBA_PTR_SET_VALUE(calendar_, calendar) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListScheduleTimesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // timeExpression Field Functions 
    bool hasTimeExpression() const { return this->timeExpression_ != nullptr;};
    void deleteTimeExpression() { this->timeExpression_ = nullptr;};
    inline string getTimeExpression() const { DARABONBA_PTR_GET_DEFAULT(timeExpression_, "") };
    inline ListScheduleTimesRequest& setTimeExpression(string timeExpression) { DARABONBA_PTR_SET_VALUE(timeExpression_, timeExpression) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline int32_t getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
    inline ListScheduleTimesRequest& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline ListScheduleTimesRequest& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    shared_ptr<string> calendar_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<string> timeExpression_ {};
    // This parameter is required.
    shared_ptr<int32_t> timeType_ {};
    shared_ptr<string> timeZone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
