// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODREALTIMEDELIVERYACCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODREALTIMEDELIVERYACCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodRealtimeDeliveryAccRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodRealtimeDeliveryAccRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodRealtimeDeliveryAccRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeVodRealtimeDeliveryAccRequest() = default ;
    DescribeVodRealtimeDeliveryAccRequest(const DescribeVodRealtimeDeliveryAccRequest &) = default ;
    DescribeVodRealtimeDeliveryAccRequest(DescribeVodRealtimeDeliveryAccRequest &&) = default ;
    DescribeVodRealtimeDeliveryAccRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodRealtimeDeliveryAccRequest() = default ;
    DescribeVodRealtimeDeliveryAccRequest& operator=(const DescribeVodRealtimeDeliveryAccRequest &) = default ;
    DescribeVodRealtimeDeliveryAccRequest& operator=(DescribeVodRealtimeDeliveryAccRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->interval_ != nullptr && this->logStore_ != nullptr && this->ownerId_ != nullptr && this->project_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodRealtimeDeliveryAccRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeVodRealtimeDeliveryAccRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline DescribeVodRealtimeDeliveryAccRequest& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVodRealtimeDeliveryAccRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline DescribeVodRealtimeDeliveryAccRequest& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodRealtimeDeliveryAccRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // The end time must be later than the start time. The interval between the start time and the end time cannot exceed a year.
    std::shared_ptr<string> endTime_ = nullptr;
    // The time granularity of the data entries. Unit: seconds. Valid values: 300, 3600, and 86400.
    // 
    // The default time granularity varies based on the interval between the start time and end time that you specify. If you set the interval to a value within (0,3] days, the default time granularity is 300 seconds. If you set the interval to a value within (3,30] days, the default time granularity is 3,600 seconds. If you set the interval to a value greater than 30 days, the default time granularity is 86,400 seconds. The default value is used if you specify an invalid value for this parameter or leave this parameter empty.
    std::shared_ptr<string> interval_ = nullptr;
    // The name of the Logstore to which log entries are delivered.
    std::shared_ptr<string> logStore_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The name of the Log Service project that is used for real-time log delivery.
    std::shared_ptr<string> project_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
