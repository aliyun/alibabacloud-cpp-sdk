// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSALLEVENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSALLEVENTLISTRESPONSEBODY_HPP_
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
  class DescribeDDosAllEventListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDosAllEventListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackEvents, attackEvents_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDosAllEventListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackEvents, attackEvents_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeDDosAllEventListResponseBody() = default ;
    DescribeDDosAllEventListResponseBody(const DescribeDDosAllEventListResponseBody &) = default ;
    DescribeDDosAllEventListResponseBody(DescribeDDosAllEventListResponseBody &&) = default ;
    DescribeDDosAllEventListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDosAllEventListResponseBody() = default ;
    DescribeDDosAllEventListResponseBody& operator=(const DescribeDDosAllEventListResponseBody &) = default ;
    DescribeDDosAllEventListResponseBody& operator=(DescribeDDosAllEventListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttackEvents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttackEvents& obj) { 
        DARABONBA_PTR_TO_JSON(Area, area_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Mbps, mbps_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Pps, pps_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, AttackEvents& obj) { 
        DARABONBA_PTR_FROM_JSON(Area, area_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Mbps, mbps_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Pps, pps_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      AttackEvents() = default ;
      AttackEvents(const AttackEvents &) = default ;
      AttackEvents(AttackEvents &&) = default ;
      AttackEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttackEvents() = default ;
      AttackEvents& operator=(const AttackEvents &) = default ;
      AttackEvents& operator=(AttackEvents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->area_ == nullptr
        && this->endTime_ == nullptr && this->eventType_ == nullptr && this->ip_ == nullptr && this->mbps_ == nullptr && this->port_ == nullptr
        && this->pps_ == nullptr && this->startTime_ == nullptr; };
      // area Field Functions 
      bool hasArea() const { return this->area_ != nullptr;};
      void deleteArea() { this->area_ = nullptr;};
      inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
      inline AttackEvents& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline AttackEvents& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline AttackEvents& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline AttackEvents& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // mbps Field Functions 
      bool hasMbps() const { return this->mbps_ != nullptr;};
      void deleteMbps() { this->mbps_ = nullptr;};
      inline int64_t getMbps() const { DARABONBA_PTR_GET_DEFAULT(mbps_, 0L) };
      inline AttackEvents& setMbps(int64_t mbps) { DARABONBA_PTR_SET_VALUE(mbps_, mbps) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline AttackEvents& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // pps Field Functions 
      bool hasPps() const { return this->pps_ != nullptr;};
      void deletePps() { this->pps_ = nullptr;};
      inline int64_t getPps() const { DARABONBA_PTR_GET_DEFAULT(pps_, 0L) };
      inline AttackEvents& setPps(int64_t pps) { DARABONBA_PTR_SET_VALUE(pps_, pps) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline AttackEvents& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The source location or region from which the attack was initiated. Valid values:
      // 
      // *   **cn**: Chinese mainland
      // *   **alb-cn-hongkong-gf-2**: China (Hongkong)
      // *   **alb-us-west-1-gf-2**: US (Silicon Valley)
      // *   **alb-ap-northeast-1-gf-1**: Japan (Tokyo)
      // *   **alb-ap-southeast-gf-1**: Singapore
      // *   **alb-eu-central-1-gf-1**: Germany (Frankfurt)
      // *   **alb-eu-central-1-gf-1** or **selb-eu-west-1-gf-1a**: UK (London)
      // *   **alb-us-east-gf-1**: US (Virginia)
      // *   **CT-yundi**: China (Hongkong) This value is returned only for Anti-DDoS Premium instances of the Secure Chinese Mainland Acceleration (Sec-CMA) mitigation plan.
      shared_ptr<string> area_ {};
      // The time when the DDoS attack stopped. This value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> endTime_ {};
      // The type of the DDoS attack event. Valid values:
      // 
      // *   **web-cc**: resource exhaustion attacks
      // *   **cc**: connection flood attacks
      // *   **defense**: DDoS attacks that trigger traffic scrubbing
      // *   **blackhole**: DDoS attacks that trigger blackhole filtering
      shared_ptr<string> eventType_ {};
      // The attacked object. The attacked object varies based on the attack event type. The following list describes different attacked objects of different attack event types:
      // 
      // *   If **EventType** is set to **web-cc**, the value of this parameter indicates the domain name of the attacked website.
      // *   If **EventType** is set to **cc**, the value of this parameter indicates the IP address of the attacked Anti-DDoS Pro or Anti-DDoS Premium instance.
      // *   If **EventType** is set to **defense** or **blackhole**, the value of this parameter indicates the IP address of the attacked Anti-DDoS Pro or Anti-DDoS Premium instance.
      shared_ptr<string> ip_ {};
      // The peak bandwidth of the attack traffic. Unit: Mbit/s.
      shared_ptr<int64_t> mbps_ {};
      // The attacked port.
      // 
      // > If **EventType** is set to **web-cc**, this parameter is not returned.
      shared_ptr<string> port_ {};
      // The peak packet forwarding rate of attack traffic. Unit: packets per second (pps).
      shared_ptr<int64_t> pps_ {};
      // The time when the DDoS attack started. This value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->attackEvents_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // attackEvents Field Functions 
    bool hasAttackEvents() const { return this->attackEvents_ != nullptr;};
    void deleteAttackEvents() { this->attackEvents_ = nullptr;};
    inline const vector<DescribeDDosAllEventListResponseBody::AttackEvents> & getAttackEvents() const { DARABONBA_PTR_GET_CONST(attackEvents_, vector<DescribeDDosAllEventListResponseBody::AttackEvents>) };
    inline vector<DescribeDDosAllEventListResponseBody::AttackEvents> getAttackEvents() { DARABONBA_PTR_GET(attackEvents_, vector<DescribeDDosAllEventListResponseBody::AttackEvents>) };
    inline DescribeDDosAllEventListResponseBody& setAttackEvents(const vector<DescribeDDosAllEventListResponseBody::AttackEvents> & attackEvents) { DARABONBA_PTR_SET_VALUE(attackEvents_, attackEvents) };
    inline DescribeDDosAllEventListResponseBody& setAttackEvents(vector<DescribeDDosAllEventListResponseBody::AttackEvents> && attackEvents) { DARABONBA_PTR_SET_RVALUE(attackEvents_, attackEvents) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDosAllEventListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeDDosAllEventListResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The DDoS attack events.
    shared_ptr<vector<DescribeDDosAllEventListResponseBody::AttackEvents>> attackEvents_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of DDoS attack events.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
