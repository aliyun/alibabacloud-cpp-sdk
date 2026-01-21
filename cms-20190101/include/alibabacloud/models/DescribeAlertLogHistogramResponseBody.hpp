// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTLOGHISTOGRAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTLOGHISTOGRAMRESPONSEBODY_HPP_
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
  class DescribeAlertLogHistogramResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertLogHistogramResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertLogHistogramList, alertLogHistogramList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertLogHistogramResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertLogHistogramList, alertLogHistogramList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAlertLogHistogramResponseBody() = default ;
    DescribeAlertLogHistogramResponseBody(const DescribeAlertLogHistogramResponseBody &) = default ;
    DescribeAlertLogHistogramResponseBody(DescribeAlertLogHistogramResponseBody &&) = default ;
    DescribeAlertLogHistogramResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertLogHistogramResponseBody() = default ;
    DescribeAlertLogHistogramResponseBody& operator=(const DescribeAlertLogHistogramResponseBody &) = default ;
    DescribeAlertLogHistogramResponseBody& operator=(DescribeAlertLogHistogramResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlertLogHistogramList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertLogHistogramList& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(From, from_);
        DARABONBA_PTR_TO_JSON(To, to_);
      };
      friend void from_json(const Darabonba::Json& j, AlertLogHistogramList& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(From, from_);
        DARABONBA_PTR_FROM_JSON(To, to_);
      };
      AlertLogHistogramList() = default ;
      AlertLogHistogramList(const AlertLogHistogramList &) = default ;
      AlertLogHistogramList(AlertLogHistogramList &&) = default ;
      AlertLogHistogramList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertLogHistogramList() = default ;
      AlertLogHistogramList& operator=(const AlertLogHistogramList &) = default ;
      AlertLogHistogramList& operator=(AlertLogHistogramList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->from_ == nullptr && this->to_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline AlertLogHistogramList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // from Field Functions 
      bool hasFrom() const { return this->from_ != nullptr;};
      void deleteFrom() { this->from_ = nullptr;};
      inline int64_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
      inline AlertLogHistogramList& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


      // to Field Functions 
      bool hasTo() const { return this->to_ != nullptr;};
      void deleteTo() { this->to_ = nullptr;};
      inline int64_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
      inline AlertLogHistogramList& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    protected:
      // The number of alert logs.
      shared_ptr<int32_t> count_ {};
      // The start timestamp of the queried alert logs.
      // 
      // Unit: seconds.
      shared_ptr<int64_t> from_ {};
      // The end timestamp of the queried alert logs.
      // 
      // Unit: seconds.
      shared_ptr<int64_t> to_ {};
    };

    virtual bool empty() const override { return this->alertLogHistogramList_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // alertLogHistogramList Field Functions 
    bool hasAlertLogHistogramList() const { return this->alertLogHistogramList_ != nullptr;};
    void deleteAlertLogHistogramList() { this->alertLogHistogramList_ = nullptr;};
    inline const vector<DescribeAlertLogHistogramResponseBody::AlertLogHistogramList> & getAlertLogHistogramList() const { DARABONBA_PTR_GET_CONST(alertLogHistogramList_, vector<DescribeAlertLogHistogramResponseBody::AlertLogHistogramList>) };
    inline vector<DescribeAlertLogHistogramResponseBody::AlertLogHistogramList> getAlertLogHistogramList() { DARABONBA_PTR_GET(alertLogHistogramList_, vector<DescribeAlertLogHistogramResponseBody::AlertLogHistogramList>) };
    inline DescribeAlertLogHistogramResponseBody& setAlertLogHistogramList(const vector<DescribeAlertLogHistogramResponseBody::AlertLogHistogramList> & alertLogHistogramList) { DARABONBA_PTR_SET_VALUE(alertLogHistogramList_, alertLogHistogramList) };
    inline DescribeAlertLogHistogramResponseBody& setAlertLogHistogramList(vector<DescribeAlertLogHistogramResponseBody::AlertLogHistogramList> && alertLogHistogramList) { DARABONBA_PTR_SET_RVALUE(alertLogHistogramList_, alertLogHistogramList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAlertLogHistogramResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAlertLogHistogramResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlertLogHistogramResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAlertLogHistogramResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The number of alert logs that were generated during each interval of a time period.
    shared_ptr<vector<DescribeAlertLogHistogramResponseBody::AlertLogHistogramList>> alertLogHistogramList_ {};
    // The response code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
