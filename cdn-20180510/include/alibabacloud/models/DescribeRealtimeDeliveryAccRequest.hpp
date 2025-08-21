// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREALTIMEDELIVERYACCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREALTIMEDELIVERYACCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeRealtimeDeliveryAccRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRealtimeDeliveryAccRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRealtimeDeliveryAccRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeRealtimeDeliveryAccRequest() = default ;
    DescribeRealtimeDeliveryAccRequest(const DescribeRealtimeDeliveryAccRequest &) = default ;
    DescribeRealtimeDeliveryAccRequest(DescribeRealtimeDeliveryAccRequest &&) = default ;
    DescribeRealtimeDeliveryAccRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRealtimeDeliveryAccRequest() = default ;
    DescribeRealtimeDeliveryAccRequest& operator=(const DescribeRealtimeDeliveryAccRequest &) = default ;
    DescribeRealtimeDeliveryAccRequest& operator=(DescribeRealtimeDeliveryAccRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->interval_ != nullptr && this->logStore_ != nullptr && this->project_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRealtimeDeliveryAccRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeRealtimeDeliveryAccRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline DescribeRealtimeDeliveryAccRequest& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline DescribeRealtimeDeliveryAccRequest& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRealtimeDeliveryAccRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // The end time must be later than the start time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The time granularity of the data entries. Unit: seconds. The value varies based on the values of the **StartTime** and **EndTime** parameters. Valid values:
    // 
    // *   If the time span between StartTime and EndTime is less than 3 days, valid values are **300**, **3600**, and **86400**. Default value: **300**.
    // *   If the time span between StartTime and EndTime is greater than or equal to 3 days and less than 31 days, valid values are **3600** and **86400**. Default value: **3600**.
    // *   If the time span between StartTime and EndTime is 31 days or longer, the valid value is **86400**. Default value: **86400**.
    std::shared_ptr<string> interval_ = nullptr;
    // The name of the Logstore that stores log data. If you do leave this parameter empty, real-time log deliveries of all Logstores are queried.
    std::shared_ptr<string> logStore_ = nullptr;
    // The name of the Log Service project that is used for real-time log delivery. If you do leave this parameter empty, real-time log deliveries of all projects are queried.
    std::shared_ptr<string> project_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
