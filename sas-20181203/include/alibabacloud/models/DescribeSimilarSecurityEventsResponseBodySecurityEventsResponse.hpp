// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIMILARSECURITYEVENTSRESPONSEBODYSECURITYEVENTSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIMILARSECURITYEVENTSRESPONSEBODYSECURITYEVENTSRESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(OccurrenceTime, occurrenceTime_);
      DARABONBA_PTR_TO_JSON(SecurityEventId, securityEventId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(OccurrenceTime, occurrenceTime_);
      DARABONBA_PTR_FROM_JSON(SecurityEventId, securityEventId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse() = default ;
    DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse(const DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse &) = default ;
    DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse(DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse &&) = default ;
    DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse() = default ;
    DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse& operator=(const DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse &) = default ;
    DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse& operator=(DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventName_ == nullptr
        && return this->eventType_ == nullptr && return this->lastTime_ == nullptr && return this->occurrenceTime_ == nullptr && return this->securityEventId_ == nullptr && return this->uuid_ == nullptr; };
    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // occurrenceTime Field Functions 
    bool hasOccurrenceTime() const { return this->occurrenceTime_ != nullptr;};
    void deleteOccurrenceTime() { this->occurrenceTime_ = nullptr;};
    inline int64_t occurrenceTime() const { DARABONBA_PTR_GET_DEFAULT(occurrenceTime_, 0L) };
    inline DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse& setOccurrenceTime(int64_t occurrenceTime) { DARABONBA_PTR_SET_VALUE(occurrenceTime_, occurrenceTime) };


    // securityEventId Field Functions 
    bool hasSecurityEventId() const { return this->securityEventId_ != nullptr;};
    void deleteSecurityEventId() { this->securityEventId_ = nullptr;};
    inline int64_t securityEventId() const { DARABONBA_PTR_GET_DEFAULT(securityEventId_, 0L) };
    inline DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse& setSecurityEventId(int64_t securityEventId) { DARABONBA_PTR_SET_VALUE(securityEventId_, securityEventId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The name of the alert event.
    std::shared_ptr<string> eventName_ = nullptr;
    // The type of the alert event. Valid values:
    // 
    // *   Suspicious Process
    // *   Webshell
    // *   Unusual Logon
    // *   Malicious Software
    // *   Sensitive File Tampering
    // *   Unusual Network Connection
    // *   Other
    // *   Suspicious Account
    // *   Cloud threat detection
    // *   Precision defense
    // *   Application Whitelist
    // *   Persistence
    // *   Web Application Threat Detection
    // *   Malicious scripts
    // *   Malicious Network Activity
    // *   K8s Abnormal Behavior
    // *   Website backdoor (local engine)
    // *   Exploit
    // *   Image Scan
    // *   Trusted exception
    // 
    // For more information about alert types, see [Overview](https://help.aliyun.com/document_detail/68388.html).
    std::shared_ptr<string> eventType_ = nullptr;
    // The timestamp generated when the alert event was last detected. Unit: milliseconds.
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    // The timestamp generated when the alert event was first detected. Unit: milliseconds.
    std::shared_ptr<int64_t> occurrenceTime_ = nullptr;
    // The ID of the alert event.
    std::shared_ptr<int64_t> securityEventId_ = nullptr;
    // The UUID of the server that was affected by the alert event.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
