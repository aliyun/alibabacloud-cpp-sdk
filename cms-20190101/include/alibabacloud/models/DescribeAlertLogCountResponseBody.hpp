// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTLOGCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTLOGCOUNTRESPONSEBODY_HPP_
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
  class DescribeAlertLogCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertLogCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertLogCount, alertLogCount_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertLogCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertLogCount, alertLogCount_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAlertLogCountResponseBody() = default ;
    DescribeAlertLogCountResponseBody(const DescribeAlertLogCountResponseBody &) = default ;
    DescribeAlertLogCountResponseBody(DescribeAlertLogCountResponseBody &&) = default ;
    DescribeAlertLogCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertLogCountResponseBody() = default ;
    DescribeAlertLogCountResponseBody& operator=(const DescribeAlertLogCountResponseBody &) = default ;
    DescribeAlertLogCountResponseBody& operator=(DescribeAlertLogCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlertLogCount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertLogCount& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Logs, logs_);
      };
      friend void from_json(const Darabonba::Json& j, AlertLogCount& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Logs, logs_);
      };
      AlertLogCount() = default ;
      AlertLogCount(const AlertLogCount &) = default ;
      AlertLogCount(AlertLogCount &&) = default ;
      AlertLogCount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertLogCount() = default ;
      AlertLogCount& operator=(const AlertLogCount &) = default ;
      AlertLogCount& operator=(AlertLogCount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Logs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Logs& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Logs& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Logs() = default ;
        Logs(const Logs &) = default ;
        Logs(Logs &&) = default ;
        Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Logs() = default ;
        Logs& operator=(const Logs &) = default ;
        Logs& operator=(Logs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Logs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Logs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The name of the dimension field based on which alert logs are aggregated.
        shared_ptr<string> name_ {};
        // The value of the dimension field based on which alert logs are aggregated.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->count_ == nullptr
        && this->logs_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline AlertLogCount& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // logs Field Functions 
      bool hasLogs() const { return this->logs_ != nullptr;};
      void deleteLogs() { this->logs_ = nullptr;};
      inline const vector<AlertLogCount::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<AlertLogCount::Logs>) };
      inline vector<AlertLogCount::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<AlertLogCount::Logs>) };
      inline AlertLogCount& setLogs(const vector<AlertLogCount::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
      inline AlertLogCount& setLogs(vector<AlertLogCount::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    protected:
      // The number of alert logs.
      shared_ptr<int32_t> count_ {};
      // The details about alert logs.
      shared_ptr<vector<AlertLogCount::Logs>> logs_ {};
    };

    virtual bool empty() const override { return this->alertLogCount_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // alertLogCount Field Functions 
    bool hasAlertLogCount() const { return this->alertLogCount_ != nullptr;};
    void deleteAlertLogCount() { this->alertLogCount_ = nullptr;};
    inline const vector<DescribeAlertLogCountResponseBody::AlertLogCount> & getAlertLogCount() const { DARABONBA_PTR_GET_CONST(alertLogCount_, vector<DescribeAlertLogCountResponseBody::AlertLogCount>) };
    inline vector<DescribeAlertLogCountResponseBody::AlertLogCount> getAlertLogCount() { DARABONBA_PTR_GET(alertLogCount_, vector<DescribeAlertLogCountResponseBody::AlertLogCount>) };
    inline DescribeAlertLogCountResponseBody& setAlertLogCount(const vector<DescribeAlertLogCountResponseBody::AlertLogCount> & alertLogCount) { DARABONBA_PTR_SET_VALUE(alertLogCount_, alertLogCount) };
    inline DescribeAlertLogCountResponseBody& setAlertLogCount(vector<DescribeAlertLogCountResponseBody::AlertLogCount> && alertLogCount) { DARABONBA_PTR_SET_RVALUE(alertLogCount_, alertLogCount) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAlertLogCountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAlertLogCountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlertLogCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAlertLogCountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The statistics of alert logs.
    shared_ptr<vector<DescribeAlertLogCountResponseBody::AlertLogCount>> alertLogCount_ {};
    // The HTTP status code.
    // 
    // > The status code 200 indicates that the request was successful.
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
