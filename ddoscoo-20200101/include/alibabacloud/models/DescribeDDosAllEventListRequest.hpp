// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSALLEVENTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSALLEVENTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDosAllEventListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDosAllEventListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDosAllEventListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDDosAllEventListRequest() = default ;
    DescribeDDosAllEventListRequest(const DescribeDDosAllEventListRequest &) = default ;
    DescribeDDosAllEventListRequest(DescribeDDosAllEventListRequest &&) = default ;
    DescribeDDosAllEventListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDosAllEventListRequest() = default ;
    DescribeDDosAllEventListRequest& operator=(const DescribeDDosAllEventListRequest &) = default ;
    DescribeDDosAllEventListRequest& operator=(DescribeDDosAllEventListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->eventType_ == nullptr && this->ip_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDDosAllEventListRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeDDosAllEventListRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeDDosAllEventListRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDDosAllEventListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDDosAllEventListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDDosAllEventListRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. DDoS attack events that occurred before **EndTime** are queried. Specify a UNIX timestamp. Unit: seconds.
    // > EndTime can specify only events within the last three months.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The type of DDoS attack event to query. Valid values:
    // 
    // - **web-cc**: web resource exhaustion attack.
    // - **cc**: connection flood attack.
    // - **defense**: volumetric attack (scrubbing event).
    // - **blackhole**: volumetric attack (blackhole filtering event).
    // 
    // You can specify multiple types. Separate them with commas (,).
    // 
    // If you do not set this parameter, attack events of all types are queried.
    shared_ptr<string> eventType_ {};
    // The IP address of the Anti-DDoS Pro or Anti-DDoS Premium instance to query.
    shared_ptr<string> ip_ {};
    // The page number to return in a paging query.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of attack events to return on each page in a paging query.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The beginning of the time range to query. DDoS attack events that occurred after **StartTime** are queried. Specify a UNIX timestamp. Unit: seconds.
    // > StartTime can specify only events within the last three months.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
