// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVERTCRECORDUSAGEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVERTCRECORDUSAGEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRtcRecordUsageDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRtcRecordUsageDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(RecordMode, recordMode_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRtcRecordUsageDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(RecordMode, recordMode_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveRtcRecordUsageDataRequest() = default ;
    DescribeLiveRtcRecordUsageDataRequest(const DescribeLiveRtcRecordUsageDataRequest &) = default ;
    DescribeLiveRtcRecordUsageDataRequest(DescribeLiveRtcRecordUsageDataRequest &&) = default ;
    DescribeLiveRtcRecordUsageDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRtcRecordUsageDataRequest() = default ;
    DescribeLiveRtcRecordUsageDataRequest& operator=(const DescribeLiveRtcRecordUsageDataRequest &) = default ;
    DescribeLiveRtcRecordUsageDataRequest& operator=(DescribeLiveRtcRecordUsageDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->endTime_ == nullptr && this->interval_ == nullptr && this->recordMode_ == nullptr && this->startTime_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeLiveRtcRecordUsageDataRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveRtcRecordUsageDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeLiveRtcRecordUsageDataRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // recordMode Field Functions 
    bool hasRecordMode() const { return this->recordMode_ != nullptr;};
    void deleteRecordMode() { this->recordMode_ = nullptr;};
    inline string getRecordMode() const { DARABONBA_PTR_GET_DEFAULT(recordMode_, "") };
    inline DescribeLiveRtcRecordUsageDataRequest& setRecordMode(string recordMode) { DARABONBA_PTR_SET_VALUE(recordMode_, recordMode) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveRtcRecordUsageDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the ApsaraVideo Real-time Communication application. You can view the ID in [ApsaraVideo Real-time Communication application management](https://help.aliyun.com/document_detail/2355593.html). Navigate to **ApsaraVideo Live > Live+ > Real-time Communication > Application Management** to view your application IDs.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The end time for the query. The query granularity must be ≥ 5 minutes and ≤ 31 days. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC time).
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The time granularity for the query data. Unit: seconds. Valid values:
    // 
    // - 3600 (default).
    // 
    // - 86400.
    shared_ptr<string> interval_ {};
    // The recording mode. Valid values:
    // 
    // - 0: single-stream recording mode.
    // 
    // - 1: stream mixing recording mode.
    // 
    // This parameter is required.
    shared_ptr<string> recordMode_ {};
    // The start time for the query. Format: yyyy-MM-ddTHH:mm:ssZ (UTC time).
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
