// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTATTACKTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTATTACKTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDosEventAttackTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDosEventAttackTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDosEventAttackTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDDosEventAttackTypeRequest() = default ;
    DescribeDDosEventAttackTypeRequest(const DescribeDDosEventAttackTypeRequest &) = default ;
    DescribeDDosEventAttackTypeRequest(DescribeDDosEventAttackTypeRequest &&) = default ;
    DescribeDDosEventAttackTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDosEventAttackTypeRequest() = default ;
    DescribeDDosEventAttackTypeRequest& operator=(const DescribeDDosEventAttackTypeRequest &) = default ;
    DescribeDDosEventAttackTypeRequest& operator=(DescribeDDosEventAttackTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventType_ == nullptr
        && this->ip_ == nullptr && this->startTime_ == nullptr; };
    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeDDosEventAttackTypeRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeDDosEventAttackTypeRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDDosEventAttackTypeRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The type of the attack event that you want to query. Valid values:
    // 
    // *   **defense**: attack events that trigger traffic scrubbing
    // *   **blackhole**: attack events that trigger blackhole filtering
    // 
    // This parameter is required.
    shared_ptr<string> eventType_ {};
    // The IP address of the attacked Anti-DDoS Pro or Anti-DDoS Premium instance.
    // 
    // This parameter is required.
    shared_ptr<string> ip_ {};
    // The UNIX timestamp when the query starts. Unit: seconds.
    // 
    // > You can call the [DescribeDDosAllEventList](https://help.aliyun.com/document_detail/188604.html) operation to query the beginning time of all attack events.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
