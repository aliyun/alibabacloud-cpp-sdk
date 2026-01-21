// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTHISTOGRAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTHISTOGRAMRESPONSEBODY_HPP_
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
  class DescribeSystemEventHistogramResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemEventHistogramResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(SystemEventHistograms, systemEventHistograms_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemEventHistogramResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(SystemEventHistograms, systemEventHistograms_);
    };
    DescribeSystemEventHistogramResponseBody() = default ;
    DescribeSystemEventHistogramResponseBody(const DescribeSystemEventHistogramResponseBody &) = default ;
    DescribeSystemEventHistogramResponseBody(DescribeSystemEventHistogramResponseBody &&) = default ;
    DescribeSystemEventHistogramResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemEventHistogramResponseBody() = default ;
    DescribeSystemEventHistogramResponseBody& operator=(const DescribeSystemEventHistogramResponseBody &) = default ;
    DescribeSystemEventHistogramResponseBody& operator=(DescribeSystemEventHistogramResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SystemEventHistograms : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemEventHistograms& obj) { 
        DARABONBA_PTR_TO_JSON(SystemEventHistogram, systemEventHistogram_);
      };
      friend void from_json(const Darabonba::Json& j, SystemEventHistograms& obj) { 
        DARABONBA_PTR_FROM_JSON(SystemEventHistogram, systemEventHistogram_);
      };
      SystemEventHistograms() = default ;
      SystemEventHistograms(const SystemEventHistograms &) = default ;
      SystemEventHistograms(SystemEventHistograms &&) = default ;
      SystemEventHistograms(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemEventHistograms() = default ;
      SystemEventHistograms& operator=(const SystemEventHistograms &) = default ;
      SystemEventHistograms& operator=(SystemEventHistograms &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SystemEventHistogram : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SystemEventHistogram& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, SystemEventHistogram& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        SystemEventHistogram() = default ;
        SystemEventHistogram(const SystemEventHistogram &) = default ;
        SystemEventHistogram(SystemEventHistogram &&) = default ;
        SystemEventHistogram(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SystemEventHistogram() = default ;
        SystemEventHistogram& operator=(const SystemEventHistogram &) = default ;
        SystemEventHistogram& operator=(SystemEventHistogram &&) = default ;
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
        inline SystemEventHistogram& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline SystemEventHistogram& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline SystemEventHistogram& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The number of times the system event occurred.
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

      virtual bool empty() const override { return this->systemEventHistogram_ == nullptr; };
      // systemEventHistogram Field Functions 
      bool hasSystemEventHistogram() const { return this->systemEventHistogram_ != nullptr;};
      void deleteSystemEventHistogram() { this->systemEventHistogram_ = nullptr;};
      inline const vector<SystemEventHistograms::SystemEventHistogram> & getSystemEventHistogram() const { DARABONBA_PTR_GET_CONST(systemEventHistogram_, vector<SystemEventHistograms::SystemEventHistogram>) };
      inline vector<SystemEventHistograms::SystemEventHistogram> getSystemEventHistogram() { DARABONBA_PTR_GET(systemEventHistogram_, vector<SystemEventHistograms::SystemEventHistogram>) };
      inline SystemEventHistograms& setSystemEventHistogram(const vector<SystemEventHistograms::SystemEventHistogram> & systemEventHistogram) { DARABONBA_PTR_SET_VALUE(systemEventHistogram_, systemEventHistogram) };
      inline SystemEventHistograms& setSystemEventHistogram(vector<SystemEventHistograms::SystemEventHistogram> && systemEventHistogram) { DARABONBA_PTR_SET_RVALUE(systemEventHistogram_, systemEventHistogram) };


    protected:
      shared_ptr<vector<SystemEventHistograms::SystemEventHistogram>> systemEventHistogram_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->systemEventHistograms_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSystemEventHistogramResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSystemEventHistogramResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSystemEventHistogramResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSystemEventHistogramResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // systemEventHistograms Field Functions 
    bool hasSystemEventHistograms() const { return this->systemEventHistograms_ != nullptr;};
    void deleteSystemEventHistograms() { this->systemEventHistograms_ = nullptr;};
    inline const DescribeSystemEventHistogramResponseBody::SystemEventHistograms & getSystemEventHistograms() const { DARABONBA_PTR_GET_CONST(systemEventHistograms_, DescribeSystemEventHistogramResponseBody::SystemEventHistograms) };
    inline DescribeSystemEventHistogramResponseBody::SystemEventHistograms getSystemEventHistograms() { DARABONBA_PTR_GET(systemEventHistograms_, DescribeSystemEventHistogramResponseBody::SystemEventHistograms) };
    inline DescribeSystemEventHistogramResponseBody& setSystemEventHistograms(const DescribeSystemEventHistogramResponseBody::SystemEventHistograms & systemEventHistograms) { DARABONBA_PTR_SET_VALUE(systemEventHistograms_, systemEventHistograms) };
    inline DescribeSystemEventHistogramResponseBody& setSystemEventHistograms(DescribeSystemEventHistogramResponseBody::SystemEventHistograms && systemEventHistograms) { DARABONBA_PTR_SET_RVALUE(systemEventHistograms_, systemEventHistograms) };


  protected:
    // The response code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: true: The request was successful. false: The request failed.
    shared_ptr<string> success_ {};
    // The information about the number of times the system event occurred during each interval of a time period.
    shared_ptr<DescribeSystemEventHistogramResponseBody::SystemEventHistograms> systemEventHistograms_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
