// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class DescribeDdosEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeDdosEventResponseBody() = default ;
    DescribeDdosEventResponseBody(const DescribeDdosEventResponseBody &) = default ;
    DescribeDdosEventResponseBody(DescribeDdosEventResponseBody &&) = default ;
    DescribeDdosEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosEventResponseBody() = default ;
    DescribeDdosEventResponseBody& operator=(const DescribeDdosEventResponseBody &) = default ;
    DescribeDdosEventResponseBody& operator=(DescribeDdosEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Events : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Events& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Mbps, mbps_);
        DARABONBA_PTR_TO_JSON(Pps, pps_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Events& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Mbps, mbps_);
        DARABONBA_PTR_FROM_JSON(Pps, pps_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Events() = default ;
      Events(const Events &) = default ;
      Events(Events &&) = default ;
      Events(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Events() = default ;
      Events& operator=(const Events &) = default ;
      Events& operator=(Events &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->ip_ == nullptr && this->mbps_ == nullptr && this->pps_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
      inline Events& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Events& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // mbps Field Functions 
      bool hasMbps() const { return this->mbps_ != nullptr;};
      void deleteMbps() { this->mbps_ = nullptr;};
      inline int32_t getMbps() const { DARABONBA_PTR_GET_DEFAULT(mbps_, 0) };
      inline Events& setMbps(int32_t mbps) { DARABONBA_PTR_SET_VALUE(mbps_, mbps) };


      // pps Field Functions 
      bool hasPps() const { return this->pps_ != nullptr;};
      void deletePps() { this->pps_ = nullptr;};
      inline int32_t getPps() const { DARABONBA_PTR_GET_DEFAULT(pps_, 0) };
      inline Events& setPps(int32_t pps) { DARABONBA_PTR_SET_VALUE(pps_, pps) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int32_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
      inline Events& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Events& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the DDoS attack stopped. This value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int32_t> endTime_ {};
      // The attacked IP address.
      shared_ptr<string> ip_ {};
      // The volume of the request traffic at the start of the DDoS attack. Unit: Mbit/s.
      shared_ptr<int32_t> mbps_ {};
      // The number of packets at the start of the DDoS attack. Unit: packets per second (PPS).
      shared_ptr<int32_t> pps_ {};
      // The time when the DDoS attack started. This value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int32_t> startTime_ {};
      // The status of the DDoS attack event. Valid values:
      // 
      // *   **hole_begin**: indicates that blackhole filtering is triggered for the attacked IP address.
      // *   **hole_end**: indicates that blackhole filtering is deactivated for the attacked IP address.
      // *   **defense_begin**: indicates that attack traffic is being scrubbed.
      // *   **defense_end**: indicates that attack traffic is scrubbed.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->events_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<DescribeDdosEventResponseBody::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<DescribeDdosEventResponseBody::Events>) };
    inline vector<DescribeDdosEventResponseBody::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<DescribeDdosEventResponseBody::Events>) };
    inline DescribeDdosEventResponseBody& setEvents(const vector<DescribeDdosEventResponseBody::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline DescribeDdosEventResponseBody& setEvents(vector<DescribeDdosEventResponseBody::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDdosEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeDdosEventResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The details about the DDoS attack event.
    shared_ptr<vector<DescribeDdosEventResponseBody::Events>> events_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of DDoS attack events that are returned.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
