// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETERLIVEBYPASSDURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETERLIVEBYPASSDURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeMeterLiveBypassDurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeterLiveBypassDurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeterLiveBypassDurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeMeterLiveBypassDurationRequest() = default ;
    DescribeMeterLiveBypassDurationRequest(const DescribeMeterLiveBypassDurationRequest &) = default ;
    DescribeMeterLiveBypassDurationRequest(DescribeMeterLiveBypassDurationRequest &&) = default ;
    DescribeMeterLiveBypassDurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeterLiveBypassDurationRequest() = default ;
    DescribeMeterLiveBypassDurationRequest& operator=(const DescribeMeterLiveBypassDurationRequest &) = default ;
    DescribeMeterLiveBypassDurationRequest& operator=(DescribeMeterLiveBypassDurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->endTime_ == nullptr && this->interval_ == nullptr && this->startTime_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeMeterLiveBypassDurationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeMeterLiveBypassDurationRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeMeterLiveBypassDurationRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeMeterLiveBypassDurationRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The application ID. You can view the application ID on the [Application Management](https://help.aliyun.com/document_detail/2355593.html) page of ApsaraVideo Real-time Communication.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The end time of the query. The end time must be later than the start time. The query granularity must be ≥ 5 minutes and ≤ 31 days. Specify the time in the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The time granularity for querying data. Unit: seconds. Valid values:
    // 
    // - 300
    // - 3600
    // - 86400
    // 
    // If this parameter is not specified or set to an unsupported value, the default value 3600 is used.
    shared_ptr<string> interval_ {};
    // The start time of the query. Specify the time in the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
