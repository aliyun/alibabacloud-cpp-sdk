// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLAEVENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLAEVENTLISTRESPONSEBODY_HPP_
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
  class DescribeSlaEventListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlaEventListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlaEvent, slaEvent_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlaEventListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlaEvent, slaEvent_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeSlaEventListResponseBody() = default ;
    DescribeSlaEventListResponseBody(const DescribeSlaEventListResponseBody &) = default ;
    DescribeSlaEventListResponseBody(DescribeSlaEventListResponseBody &&) = default ;
    DescribeSlaEventListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlaEventListResponseBody() = default ;
    DescribeSlaEventListResponseBody& operator=(const DescribeSlaEventListResponseBody &) = default ;
    DescribeSlaEventListResponseBody& operator=(DescribeSlaEventListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SlaEvent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlaEvent& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, SlaEvent& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      SlaEvent() = default ;
      SlaEvent(const SlaEvent &) = default ;
      SlaEvent(SlaEvent &&) = default ;
      SlaEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlaEvent() = default ;
      SlaEvent& operator=(const SlaEvent &) = default ;
      SlaEvent& operator=(SlaEvent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->ip_ == nullptr && this->region_ == nullptr && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline SlaEvent& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline SlaEvent& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline SlaEvent& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline SlaEvent& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The end of the time range. Unit: seconds.
      shared_ptr<int64_t> endTime_ {};
      // The IP address of the instance.
      shared_ptr<string> ip_ {};
      // The region to which the destination IP address belongs. Valid values:
      // 
      // *   **cn**: a region in the Chinese mainland
      // *   **cn-hongkong**: China (Hong Kong)
      shared_ptr<string> region_ {};
      // The beginning of the time range. Unit: seconds.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->slaEvent_ == nullptr && this->total_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlaEventListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slaEvent Field Functions 
    bool hasSlaEvent() const { return this->slaEvent_ != nullptr;};
    void deleteSlaEvent() { this->slaEvent_ = nullptr;};
    inline const vector<DescribeSlaEventListResponseBody::SlaEvent> & getSlaEvent() const { DARABONBA_PTR_GET_CONST(slaEvent_, vector<DescribeSlaEventListResponseBody::SlaEvent>) };
    inline vector<DescribeSlaEventListResponseBody::SlaEvent> getSlaEvent() { DARABONBA_PTR_GET(slaEvent_, vector<DescribeSlaEventListResponseBody::SlaEvent>) };
    inline DescribeSlaEventListResponseBody& setSlaEvent(const vector<DescribeSlaEventListResponseBody::SlaEvent> & slaEvent) { DARABONBA_PTR_SET_VALUE(slaEvent_, slaEvent) };
    inline DescribeSlaEventListResponseBody& setSlaEvent(vector<DescribeSlaEventListResponseBody::SlaEvent> && slaEvent) { DARABONBA_PTR_SET_RVALUE(slaEvent_, slaEvent) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeSlaEventListResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The destination rate limit events.
    shared_ptr<vector<DescribeSlaEventListResponseBody::SlaEvent>> slaEvent_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
