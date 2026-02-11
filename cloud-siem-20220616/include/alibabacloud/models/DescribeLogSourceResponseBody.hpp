// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGSOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGSOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeLogSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeLogSourceResponseBody() = default ;
    DescribeLogSourceResponseBody(const DescribeLogSourceResponseBody &) = default ;
    DescribeLogSourceResponseBody(DescribeLogSourceResponseBody &&) = default ;
    DescribeLogSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogSourceResponseBody() = default ;
    DescribeLogSourceResponseBody& operator=(const DescribeLogSourceResponseBody &) = default ;
    DescribeLogSourceResponseBody& operator=(DescribeLogSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(LogSource, logSource_);
        DARABONBA_PTR_TO_JSON(LogSourceName, logSourceName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(LogSource, logSource_);
        DARABONBA_PTR_FROM_JSON(LogSourceName, logSourceName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logSource_ == nullptr
        && this->logSourceName_ == nullptr; };
      // logSource Field Functions 
      bool hasLogSource() const { return this->logSource_ != nullptr;};
      void deleteLogSource() { this->logSource_ = nullptr;};
      inline string getLogSource() const { DARABONBA_PTR_GET_DEFAULT(logSource_, "") };
      inline Data& setLogSource(string logSource) { DARABONBA_PTR_SET_VALUE(logSource_, logSource) };


      // logSourceName Field Functions 
      bool hasLogSourceName() const { return this->logSourceName_ != nullptr;};
      void deleteLogSourceName() { this->logSourceName_ = nullptr;};
      inline string getLogSourceName() const { DARABONBA_PTR_GET_DEFAULT(logSourceName_, "") };
      inline Data& setLogSourceName(string logSourceName) { DARABONBA_PTR_SET_VALUE(logSourceName_, logSourceName) };


    protected:
      // The log source of the rule.
      shared_ptr<string> logSource_ {};
      // The internal code of the log source.
      shared_ptr<string> logSourceName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeLogSourceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeLogSourceResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeLogSourceResponseBody::Data>) };
    inline vector<DescribeLogSourceResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeLogSourceResponseBody::Data>) };
    inline DescribeLogSourceResponseBody& setData(const vector<DescribeLogSourceResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeLogSourceResponseBody& setData(vector<DescribeLogSourceResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeLogSourceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeLogSourceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<vector<DescribeLogSourceResponseBody::Data>> data_ {};
    // The returned message.
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
} // namespace CloudSiem20220616
#endif
