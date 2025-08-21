// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTSRESPONSEBODYDDOSEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTSRESPONSEBODYDDOSEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDoSEventsResponseBodyDDoSEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSEventsResponseBodyDDoSEvents& obj) { 
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Pps, pps_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSEventsResponseBodyDDoSEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Pps, pps_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDDoSEventsResponseBodyDDoSEvents() = default ;
    DescribeDDoSEventsResponseBodyDDoSEvents(const DescribeDDoSEventsResponseBodyDDoSEvents &) = default ;
    DescribeDDoSEventsResponseBodyDDoSEvents(DescribeDDoSEventsResponseBodyDDoSEvents &&) = default ;
    DescribeDDoSEventsResponseBodyDDoSEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSEventsResponseBodyDDoSEvents() = default ;
    DescribeDDoSEventsResponseBodyDDoSEvents& operator=(const DescribeDDoSEventsResponseBodyDDoSEvents &) = default ;
    DescribeDDoSEventsResponseBodyDDoSEvents& operator=(DescribeDDoSEventsResponseBodyDDoSEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bps_ != nullptr
        && this->endTime_ != nullptr && this->eventType_ != nullptr && this->ip_ != nullptr && this->port_ != nullptr && this->pps_ != nullptr
        && this->region_ != nullptr && this->startTime_ != nullptr; };
    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline int64_t bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0L) };
    inline DescribeDDoSEventsResponseBodyDDoSEvents& setBps(int64_t bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDDoSEventsResponseBodyDDoSEvents& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeDDoSEventsResponseBodyDDoSEvents& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeDDoSEventsResponseBodyDDoSEvents& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDDoSEventsResponseBodyDDoSEvents& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // pps Field Functions 
    bool hasPps() const { return this->pps_ != nullptr;};
    void deletePps() { this->pps_ = nullptr;};
    inline int64_t pps() const { DARABONBA_PTR_GET_DEFAULT(pps_, 0L) };
    inline DescribeDDoSEventsResponseBodyDDoSEvents& setPps(int64_t pps) { DARABONBA_PTR_SET_VALUE(pps_, pps) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeDDoSEventsResponseBodyDDoSEvents& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDDoSEventsResponseBodyDDoSEvents& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The bandwidth of attack traffic. Unit: bit/s.
    std::shared_ptr<int64_t> bps_ = nullptr;
    // The time when the DDoS attack stopped. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The type of the attack event. Valid values:
    // 
    // *   **defense**: traffic scrubbing events
    // *   **blackhole**: blackhole filtering events
    std::shared_ptr<string> eventType_ = nullptr;
    // The attacked IP address.
    std::shared_ptr<string> ip_ = nullptr;
    // The attacked port.
    std::shared_ptr<string> port_ = nullptr;
    // The packet forwarding rate of attack traffic. Unit: packets per second (pps).
    std::shared_ptr<int64_t> pps_ = nullptr;
    // The region from which the attack was launched. Valid values:
    // 
    // *   **cn**: a region in the Chinese mainland
    // *   **alb-ap-northeast-1-gf-x**: Japan (Tokyo)
    // *   **alb-ap-southeast-gf-x**: Singapore
    // *   **alb-cn-hongkong-gf-x**: Hong Kong (China)
    // *   **alb-eu-central-1-gf-x**: Germany (Frankfurt)
    // *   **alb-us-west-1-gf-x**: US (Silicon Valley)
    // 
    // > The values except **cn** are returned only when **RegionId** is set to **ap-southeast-1**.
    std::shared_ptr<string> region_ = nullptr;
    // The time when the DDoS attack started. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
