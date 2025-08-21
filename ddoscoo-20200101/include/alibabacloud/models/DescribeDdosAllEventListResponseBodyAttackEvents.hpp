// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSALLEVENTLISTRESPONSEBODYATTACKEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSALLEVENTLISTRESPONSEBODYATTACKEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDosAllEventListResponseBodyAttackEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDosAllEventListResponseBodyAttackEvents& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Mbps, mbps_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Pps, pps_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDosAllEventListResponseBodyAttackEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Mbps, mbps_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Pps, pps_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDDosAllEventListResponseBodyAttackEvents() = default ;
    DescribeDDosAllEventListResponseBodyAttackEvents(const DescribeDDosAllEventListResponseBodyAttackEvents &) = default ;
    DescribeDDosAllEventListResponseBodyAttackEvents(DescribeDDosAllEventListResponseBodyAttackEvents &&) = default ;
    DescribeDDosAllEventListResponseBodyAttackEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDosAllEventListResponseBodyAttackEvents() = default ;
    DescribeDDosAllEventListResponseBodyAttackEvents& operator=(const DescribeDDosAllEventListResponseBodyAttackEvents &) = default ;
    DescribeDDosAllEventListResponseBodyAttackEvents& operator=(DescribeDDosAllEventListResponseBodyAttackEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->area_ != nullptr
        && this->endTime_ != nullptr && this->eventType_ != nullptr && this->ip_ != nullptr && this->mbps_ != nullptr && this->port_ != nullptr
        && this->pps_ != nullptr && this->startTime_ != nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeDDosAllEventListResponseBodyAttackEvents& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDDosAllEventListResponseBodyAttackEvents& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeDDosAllEventListResponseBodyAttackEvents& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeDDosAllEventListResponseBodyAttackEvents& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // mbps Field Functions 
    bool hasMbps() const { return this->mbps_ != nullptr;};
    void deleteMbps() { this->mbps_ = nullptr;};
    inline int64_t mbps() const { DARABONBA_PTR_GET_DEFAULT(mbps_, 0L) };
    inline DescribeDDosAllEventListResponseBodyAttackEvents& setMbps(int64_t mbps) { DARABONBA_PTR_SET_VALUE(mbps_, mbps) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDDosAllEventListResponseBodyAttackEvents& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // pps Field Functions 
    bool hasPps() const { return this->pps_ != nullptr;};
    void deletePps() { this->pps_ = nullptr;};
    inline int64_t pps() const { DARABONBA_PTR_GET_DEFAULT(pps_, 0L) };
    inline DescribeDDosAllEventListResponseBodyAttackEvents& setPps(int64_t pps) { DARABONBA_PTR_SET_VALUE(pps_, pps) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDDosAllEventListResponseBodyAttackEvents& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


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
    std::shared_ptr<string> area_ = nullptr;
    // The time when the DDoS attack stopped. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The type of the DDoS attack event. Valid values:
    // 
    // *   **web-cc**: resource exhaustion attacks
    // *   **cc**: connection flood attacks
    // *   **defense**: DDoS attacks that trigger traffic scrubbing
    // *   **blackhole**: DDoS attacks that trigger blackhole filtering
    std::shared_ptr<string> eventType_ = nullptr;
    // The attacked object. The attacked object varies based on the attack event type. The following list describes different attacked objects of different attack event types:
    // 
    // *   If **EventType** is set to **web-cc**, the value of this parameter indicates the domain name of the attacked website.
    // *   If **EventType** is set to **cc**, the value of this parameter indicates the IP address of the attacked Anti-DDoS Pro or Anti-DDoS Premium instance.
    // *   If **EventType** is set to **defense** or **blackhole**, the value of this parameter indicates the IP address of the attacked Anti-DDoS Pro or Anti-DDoS Premium instance.
    std::shared_ptr<string> ip_ = nullptr;
    // The peak bandwidth of the attack traffic. Unit: Mbit/s.
    std::shared_ptr<int64_t> mbps_ = nullptr;
    // The attacked port.
    // 
    // > If **EventType** is set to **web-cc**, this parameter is not returned.
    std::shared_ptr<string> port_ = nullptr;
    // The peak packet forwarding rate of attack traffic. Unit: packets per second (pps).
    std::shared_ptr<int64_t> pps_ = nullptr;
    // The time when the DDoS attack started. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
