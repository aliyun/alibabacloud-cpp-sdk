// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTLEVELCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTLEVELCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeEventLevelCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventLevelCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EventLevels, eventLevels_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventLevelCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EventLevels, eventLevels_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeEventLevelCountResponseBody() = default ;
    DescribeEventLevelCountResponseBody(const DescribeEventLevelCountResponseBody &) = default ;
    DescribeEventLevelCountResponseBody(DescribeEventLevelCountResponseBody &&) = default ;
    DescribeEventLevelCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventLevelCountResponseBody() = default ;
    DescribeEventLevelCountResponseBody& operator=(const DescribeEventLevelCountResponseBody &) = default ;
    DescribeEventLevelCountResponseBody& operator=(DescribeEventLevelCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EventLevels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventLevels& obj) { 
        DARABONBA_PTR_TO_JSON(Remind, remind_);
        DARABONBA_PTR_TO_JSON(Serious, serious_);
        DARABONBA_PTR_TO_JSON(Suspicious, suspicious_);
      };
      friend void from_json(const Darabonba::Json& j, EventLevels& obj) { 
        DARABONBA_PTR_FROM_JSON(Remind, remind_);
        DARABONBA_PTR_FROM_JSON(Serious, serious_);
        DARABONBA_PTR_FROM_JSON(Suspicious, suspicious_);
      };
      EventLevels() = default ;
      EventLevels(const EventLevels &) = default ;
      EventLevels(EventLevels &&) = default ;
      EventLevels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventLevels() = default ;
      EventLevels& operator=(const EventLevels &) = default ;
      EventLevels& operator=(EventLevels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->remind_ == nullptr
        && this->serious_ == nullptr && this->suspicious_ == nullptr; };
      // remind Field Functions 
      bool hasRemind() const { return this->remind_ != nullptr;};
      void deleteRemind() { this->remind_ = nullptr;};
      inline int32_t getRemind() const { DARABONBA_PTR_GET_DEFAULT(remind_, 0) };
      inline EventLevels& setRemind(int32_t remind) { DARABONBA_PTR_SET_VALUE(remind_, remind) };


      // serious Field Functions 
      bool hasSerious() const { return this->serious_ != nullptr;};
      void deleteSerious() { this->serious_ = nullptr;};
      inline int32_t getSerious() const { DARABONBA_PTR_GET_DEFAULT(serious_, 0) };
      inline EventLevels& setSerious(int32_t serious) { DARABONBA_PTR_SET_VALUE(serious_, serious) };


      // suspicious Field Functions 
      bool hasSuspicious() const { return this->suspicious_ != nullptr;};
      void deleteSuspicious() { this->suspicious_ = nullptr;};
      inline int32_t getSuspicious() const { DARABONBA_PTR_GET_DEFAULT(suspicious_, 0) };
      inline EventLevels& setSuspicious(int32_t suspicious) { DARABONBA_PTR_SET_VALUE(suspicious_, suspicious) };


    protected:
      // The number of alerts whose Emergency level is Reminder.
      shared_ptr<int32_t> remind_ {};
      // The number of alerts whose Emergency level is Urgent.
      shared_ptr<int32_t> serious_ {};
      // The number of alerts whose Emergency level is Suspicious.
      shared_ptr<int32_t> suspicious_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->eventLevels_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeEventLevelCountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // eventLevels Field Functions 
    bool hasEventLevels() const { return this->eventLevels_ != nullptr;};
    void deleteEventLevels() { this->eventLevels_ = nullptr;};
    inline const DescribeEventLevelCountResponseBody::EventLevels & getEventLevels() const { DARABONBA_PTR_GET_CONST(eventLevels_, DescribeEventLevelCountResponseBody::EventLevels) };
    inline DescribeEventLevelCountResponseBody::EventLevels getEventLevels() { DARABONBA_PTR_GET(eventLevels_, DescribeEventLevelCountResponseBody::EventLevels) };
    inline DescribeEventLevelCountResponseBody& setEventLevels(const DescribeEventLevelCountResponseBody::EventLevels & eventLevels) { DARABONBA_PTR_SET_VALUE(eventLevels_, eventLevels) };
    inline DescribeEventLevelCountResponseBody& setEventLevels(DescribeEventLevelCountResponseBody::EventLevels && eventLevels) { DARABONBA_PTR_SET_RVALUE(eventLevels_, eventLevels) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEventLevelCountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventLevelCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeEventLevelCountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The statistics of alerts by risk level.
    shared_ptr<DescribeEventLevelCountResponseBody::EventLevels> eventLevels_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
