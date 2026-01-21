// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTHISTOGRAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTHISTOGRAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeCustomEventHistogramResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomEventHistogramResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EventHistograms, eventHistograms_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomEventHistogramResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EventHistograms, eventHistograms_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCustomEventHistogramResponseBody() = default ;
    DescribeCustomEventHistogramResponseBody(const DescribeCustomEventHistogramResponseBody &) = default ;
    DescribeCustomEventHistogramResponseBody(DescribeCustomEventHistogramResponseBody &&) = default ;
    DescribeCustomEventHistogramResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomEventHistogramResponseBody() = default ;
    DescribeCustomEventHistogramResponseBody& operator=(const DescribeCustomEventHistogramResponseBody &) = default ;
    DescribeCustomEventHistogramResponseBody& operator=(DescribeCustomEventHistogramResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EventHistograms : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventHistograms& obj) { 
        DARABONBA_PTR_TO_JSON(EventHistogram, eventHistogram_);
      };
      friend void from_json(const Darabonba::Json& j, EventHistograms& obj) { 
        DARABONBA_PTR_FROM_JSON(EventHistogram, eventHistogram_);
      };
      EventHistograms() = default ;
      EventHistograms(const EventHistograms &) = default ;
      EventHistograms(EventHistograms &&) = default ;
      EventHistograms(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventHistograms() = default ;
      EventHistograms& operator=(const EventHistograms &) = default ;
      EventHistograms& operator=(EventHistograms &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EventHistogram : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventHistogram& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, EventHistogram& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        EventHistogram() = default ;
        EventHistogram(const EventHistogram &) = default ;
        EventHistogram(EventHistogram &&) = default ;
        EventHistogram(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventHistogram() = default ;
        EventHistogram& operator=(const EventHistogram &) = default ;
        EventHistogram& operator=(EventHistogram &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline EventHistogram& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline EventHistogram& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline EventHistogram& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The information about the number of times that the custom event occurred during an interval of the specified time period.
        shared_ptr<int64_t> count_ {};
        // The end time.
        // 
        // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> endTime_ {};
        // The start time.
        // 
        // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> startTime_ {};
      };

      virtual bool empty() const override { return this->eventHistogram_ == nullptr; };
      // eventHistogram Field Functions 
      bool hasEventHistogram() const { return this->eventHistogram_ != nullptr;};
      void deleteEventHistogram() { this->eventHistogram_ = nullptr;};
      inline const vector<EventHistograms::EventHistogram> & getEventHistogram() const { DARABONBA_PTR_GET_CONST(eventHistogram_, vector<EventHistograms::EventHistogram>) };
      inline vector<EventHistograms::EventHistogram> getEventHistogram() { DARABONBA_PTR_GET(eventHistogram_, vector<EventHistograms::EventHistogram>) };
      inline EventHistograms& setEventHistogram(const vector<EventHistograms::EventHistogram> & eventHistogram) { DARABONBA_PTR_SET_VALUE(eventHistogram_, eventHistogram) };
      inline EventHistograms& setEventHistogram(vector<EventHistograms::EventHistogram> && eventHistogram) { DARABONBA_PTR_SET_RVALUE(eventHistogram_, eventHistogram) };


    protected:
      shared_ptr<vector<EventHistograms::EventHistogram>> eventHistogram_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->eventHistograms_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCustomEventHistogramResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // eventHistograms Field Functions 
    bool hasEventHistograms() const { return this->eventHistograms_ != nullptr;};
    void deleteEventHistograms() { this->eventHistograms_ = nullptr;};
    inline const DescribeCustomEventHistogramResponseBody::EventHistograms & getEventHistograms() const { DARABONBA_PTR_GET_CONST(eventHistograms_, DescribeCustomEventHistogramResponseBody::EventHistograms) };
    inline DescribeCustomEventHistogramResponseBody::EventHistograms getEventHistograms() { DARABONBA_PTR_GET(eventHistograms_, DescribeCustomEventHistogramResponseBody::EventHistograms) };
    inline DescribeCustomEventHistogramResponseBody& setEventHistograms(const DescribeCustomEventHistogramResponseBody::EventHistograms & eventHistograms) { DARABONBA_PTR_SET_VALUE(eventHistograms_, eventHistograms) };
    inline DescribeCustomEventHistogramResponseBody& setEventHistograms(DescribeCustomEventHistogramResponseBody::EventHistograms && eventHistograms) { DARABONBA_PTR_SET_RVALUE(eventHistograms_, eventHistograms) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCustomEventHistogramResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomEventHistogramResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeCustomEventHistogramResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The information about the number of times that the custom event occurred during each interval of the specified time period.
    shared_ptr<DescribeCustomEventHistogramResponseBody::EventHistograms> eventHistograms_ {};
    // The returned message. If the request was successful, a success message is returned. If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: true and false.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
