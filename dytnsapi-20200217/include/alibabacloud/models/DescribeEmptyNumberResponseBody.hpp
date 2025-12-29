// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEMPTYNUMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEMPTYNUMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class DescribeEmptyNumberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEmptyNumberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEmptyNumberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEmptyNumberResponseBody() = default ;
    DescribeEmptyNumberResponseBody(const DescribeEmptyNumberResponseBody &) = default ;
    DescribeEmptyNumberResponseBody(DescribeEmptyNumberResponseBody &&) = default ;
    DescribeEmptyNumberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEmptyNumberResponseBody() = default ;
    DescribeEmptyNumberResponseBody& operator=(const DescribeEmptyNumberResponseBody &) = default ;
    DescribeEmptyNumberResponseBody& operator=(DescribeEmptyNumberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Number, number_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Number, number_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->number_ == nullptr
        && this->status_ == nullptr; };
      // number Field Functions 
      bool hasNumber() const { return this->number_ != nullptr;};
      void deleteNumber() { this->number_ = nullptr;};
      inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
      inline Data& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The specified phone number.
      shared_ptr<string> number_ {};
      // The returned status for the queried phone number. Valid values:
      // 
      // *   **EMPTY**: The queried phone number is a nonexistent number.
      // *   **NORMAL**: The queried phone number is valid.
      // *   **SUSPECT_EMPTY**: The queried phone number is suspected to be a nonexistent number.
      // *   **UNKNOWN**: The queried phone number is unknown.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeEmptyNumberResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeEmptyNumberResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeEmptyNumberResponseBody::Data) };
    inline DescribeEmptyNumberResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeEmptyNumberResponseBody::Data) };
    inline DescribeEmptyNumberResponseBody& setData(const DescribeEmptyNumberResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeEmptyNumberResponseBody& setData(DescribeEmptyNumberResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEmptyNumberResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEmptyNumberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **OK**: The request is successful.
    // *   **InvalidPhoneNumber.Check**: The phone number is invalid.
    shared_ptr<string> code_ {};
    // The response parameters.
    shared_ptr<DescribeEmptyNumberResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The unique request ID. It is a common parameter and can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
