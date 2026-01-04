// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDoSEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DDoSEvents, DDoSEvents_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DDoSEvents, DDoSEvents_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeDDoSEventsResponseBody() = default ;
    DescribeDDoSEventsResponseBody(const DescribeDDoSEventsResponseBody &) = default ;
    DescribeDDoSEventsResponseBody(DescribeDDoSEventsResponseBody &&) = default ;
    DescribeDDoSEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSEventsResponseBody() = default ;
    DescribeDDoSEventsResponseBody& operator=(const DescribeDDoSEventsResponseBody &) = default ;
    DescribeDDoSEventsResponseBody& operator=(DescribeDDoSEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DDoSEvents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DDoSEvents& obj) { 
        DARABONBA_PTR_TO_JSON(Bps, bps_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Pps, pps_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, DDoSEvents& obj) { 
        DARABONBA_PTR_FROM_JSON(Bps, bps_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Pps, pps_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      DDoSEvents() = default ;
      DDoSEvents(const DDoSEvents &) = default ;
      DDoSEvents(DDoSEvents &&) = default ;
      DDoSEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DDoSEvents() = default ;
      DDoSEvents& operator=(const DDoSEvents &) = default ;
      DDoSEvents& operator=(DDoSEvents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bps_ == nullptr
        && this->endTime_ == nullptr && this->eventType_ == nullptr && this->ip_ == nullptr && this->port_ == nullptr && this->pps_ == nullptr
        && this->region_ == nullptr && this->startTime_ == nullptr; };
      // bps Field Functions 
      bool hasBps() const { return this->bps_ != nullptr;};
      void deleteBps() { this->bps_ = nullptr;};
      inline int64_t getBps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0L) };
      inline DDoSEvents& setBps(int64_t bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline DDoSEvents& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline DDoSEvents& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline DDoSEvents& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline DDoSEvents& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // pps Field Functions 
      bool hasPps() const { return this->pps_ != nullptr;};
      void deletePps() { this->pps_ = nullptr;};
      inline int64_t getPps() const { DARABONBA_PTR_GET_DEFAULT(pps_, 0L) };
      inline DDoSEvents& setPps(int64_t pps) { DARABONBA_PTR_SET_VALUE(pps_, pps) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline DDoSEvents& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline DDoSEvents& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The bandwidth of attack traffic. Unit: bit/s.
      shared_ptr<int64_t> bps_ {};
      // The time when the DDoS attack stopped. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> endTime_ {};
      // The type of the attack event. Valid values:
      // 
      // *   **defense**: traffic scrubbing events
      // *   **blackhole**: blackhole filtering events
      shared_ptr<string> eventType_ {};
      // The attacked IP address.
      shared_ptr<string> ip_ {};
      // The attacked port.
      shared_ptr<string> port_ {};
      // The packet forwarding rate of attack traffic. Unit: packets per second (pps).
      shared_ptr<int64_t> pps_ {};
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
      shared_ptr<string> region_ {};
      // The time when the DDoS attack started. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->DDoSEvents_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // DDoSEvents Field Functions 
    bool hasDDoSEvents() const { return this->DDoSEvents_ != nullptr;};
    void deleteDDoSEvents() { this->DDoSEvents_ = nullptr;};
    inline const vector<DescribeDDoSEventsResponseBody::DDoSEvents> & getDDoSEvents() const { DARABONBA_PTR_GET_CONST(DDoSEvents_, vector<DescribeDDoSEventsResponseBody::DDoSEvents>) };
    inline vector<DescribeDDoSEventsResponseBody::DDoSEvents> getDDoSEvents() { DARABONBA_PTR_GET(DDoSEvents_, vector<DescribeDDoSEventsResponseBody::DDoSEvents>) };
    inline DescribeDDoSEventsResponseBody& setDDoSEvents(const vector<DescribeDDoSEventsResponseBody::DDoSEvents> & dDoSEvents) { DARABONBA_PTR_SET_VALUE(DDoSEvents_, dDoSEvents) };
    inline DescribeDDoSEventsResponseBody& setDDoSEvents(vector<DescribeDDoSEventsResponseBody::DDoSEvents> && dDoSEvents) { DARABONBA_PTR_SET_RVALUE(DDoSEvents_, dDoSEvents) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDoSEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeDDoSEventsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The DDoS attack events.
    shared_ptr<vector<DescribeDDoSEventsResponseBody::DDoSEvents>> DDoSEvents_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned attack events.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
