// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTISPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTISPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDosEventIspRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDosEventIspRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Range, range_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDosEventIspRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDDosEventIspRequest() = default ;
    DescribeDDosEventIspRequest(const DescribeDDosEventIspRequest &) = default ;
    DescribeDDosEventIspRequest(DescribeDDosEventIspRequest &&) = default ;
    DescribeDDosEventIspRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDosEventIspRequest() = default ;
    DescribeDDosEventIspRequest& operator=(const DescribeDDosEventIspRequest &) = default ;
    DescribeDDosEventIspRequest& operator=(DescribeDDosEventIspRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventType_ == nullptr
        && this->ip_ == nullptr && this->range_ == nullptr && this->startTime_ == nullptr; };
    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeDDosEventIspRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeDDosEventIspRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline int64_t getRange() const { DARABONBA_PTR_GET_DEFAULT(range_, 0L) };
    inline DescribeDDosEventIspRequest& setRange(int64_t range) { DARABONBA_PTR_SET_VALUE(range_, range) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDDosEventIspRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The event type of the attack event to query. Valid values:
    // 
    // - **defense**: traffic scrubbing events for volumetric attacks.
    // - **blackhole**: blackhole filtering events for volumetric attacks.
    // 
    // This parameter is required.
    shared_ptr<string> eventType_ {};
    // The attacked IP Address of Anti-DDoS Proxy instance.
    // 
    // This parameter is required.
    shared_ptr<string> ip_ {};
    // The number of data entries to return.
    shared_ptr<int64_t> range_ {};
    // The start timestamp of the event to query. Unit: seconds.
    // 
    // > You can call [DescribeDDosAllEventList](https://help.aliyun.com/document_detail/473646.html) to query the start time of all events.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
