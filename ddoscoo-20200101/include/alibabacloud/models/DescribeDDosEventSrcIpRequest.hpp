// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTSRCIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTSRCIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDosEventSrcIpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDosEventSrcIpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Range, range_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDosEventSrcIpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDDosEventSrcIpRequest() = default ;
    DescribeDDosEventSrcIpRequest(const DescribeDDosEventSrcIpRequest &) = default ;
    DescribeDDosEventSrcIpRequest(DescribeDDosEventSrcIpRequest &&) = default ;
    DescribeDDosEventSrcIpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDosEventSrcIpRequest() = default ;
    DescribeDDosEventSrcIpRequest& operator=(const DescribeDDosEventSrcIpRequest &) = default ;
    DescribeDDosEventSrcIpRequest& operator=(DescribeDDosEventSrcIpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventType_ == nullptr
        && return this->ip_ == nullptr && return this->range_ == nullptr && return this->startTime_ == nullptr; };
    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeDDosEventSrcIpRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeDDosEventSrcIpRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline int64_t range() const { DARABONBA_PTR_GET_DEFAULT(range_, 0L) };
    inline DescribeDDosEventSrcIpRequest& setRange(int64_t range) { DARABONBA_PTR_SET_VALUE(range_, range) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDDosEventSrcIpRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The type of the attack event that you want to query. Valid values:
    // 
    // *   **defense**: attack events that trigger traffic scrubbing
    // *   **blackhole**: attack events that trigger blackhole filtering
    // 
    // This parameter is required.
    std::shared_ptr<string> eventType_ = nullptr;
    // The IP address of the attacked Anti-DDoS Pro or Anti-DDoS Premium instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> ip_ = nullptr;
    // The number of source IP addresses that you want to return. The source IP addresses are returned in descending order of attack traffic. By default, the top **five** source IP addresses are returned.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> range_ = nullptr;
    // The UNIX timestamp when the query starts. Unit: seconds.
    // 
    // > You can call the [DescribeDDosAllEventList](https://help.aliyun.com/document_detail/188604.html) operation to query the beginning time of all attack events.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
