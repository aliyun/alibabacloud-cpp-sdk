// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESTINATIONPORTEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESTINATIONPORTEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDestinationPortEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDestinationPortEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Range, range_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDestinationPortEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDestinationPortEventRequest() = default ;
    DescribeDestinationPortEventRequest(const DescribeDestinationPortEventRequest &) = default ;
    DescribeDestinationPortEventRequest(DescribeDestinationPortEventRequest &&) = default ;
    DescribeDestinationPortEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDestinationPortEventRequest() = default ;
    DescribeDestinationPortEventRequest& operator=(const DescribeDestinationPortEventRequest &) = default ;
    DescribeDestinationPortEventRequest& operator=(DescribeDestinationPortEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventType_ != nullptr
        && this->ip_ != nullptr && this->range_ != nullptr && this->region_ != nullptr && this->startTime_ != nullptr; };
    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeDestinationPortEventRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeDestinationPortEventRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline int64_t range() const { DARABONBA_PTR_GET_DEFAULT(range_, 0L) };
    inline DescribeDestinationPortEventRequest& setRange(int64_t range) { DARABONBA_PTR_SET_VALUE(range_, range) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeDestinationPortEventRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDestinationPortEventRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The type of the attack event that you want to query. Valid values:
    // 
    // *   **defense**: attack events that trigger traffic scrubbing.
    // *   **blackhole**: attack events that trigger blackhole filtering.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventType_ = nullptr;
    // The IP address of the attacker.
    // 
    // This parameter is required.
    std::shared_ptr<string> ip_ = nullptr;
    // The number of destination ports to return. The ports are sorted in descending order of the number of received request packets. By default, the first **10** ports are returned.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> range_ = nullptr;
    // The region in which your service is deployed. Valid values:
    // 
    // *   **cn**: a region in the Chinese mainland.
    // *   **cn-hongkong**: a region outside the Chinese mainland.
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    // The beginning of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // >  This UNIX timestamp must indicate a point in time that is accurate to the minute.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
