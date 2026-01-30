// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KEEPALIVEINTLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_KEEPALIVEINTLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class KeepaliveIntlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KeepaliveIntlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, KeepaliveIntlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    KeepaliveIntlResponseBody() = default ;
    KeepaliveIntlResponseBody(const KeepaliveIntlResponseBody &) = default ;
    KeepaliveIntlResponseBody(KeepaliveIntlResponseBody &&) = default ;
    KeepaliveIntlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KeepaliveIntlResponseBody() = default ;
    KeepaliveIntlResponseBody& operator=(const KeepaliveIntlResponseBody &) = default ;
    KeepaliveIntlResponseBody& operator=(KeepaliveIntlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Result, result_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Result, result_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->result_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline Result& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    protected:
      // The result of the call.
      shared_ptr<string> result_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline KeepaliveIntlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline KeepaliveIntlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline KeepaliveIntlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const KeepaliveIntlResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, KeepaliveIntlResponseBody::Result) };
    inline KeepaliveIntlResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, KeepaliveIntlResponseBody::Result) };
    inline KeepaliveIntlResponseBody& setResult(const KeepaliveIntlResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline KeepaliveIntlResponseBody& setResult(KeepaliveIntlResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The [return code.](https://www.alibabacloud.com/help/en/ekyc/latest/client-connection-hold?spm=a3c0i.23458820.2359477120.1.48207d3ftEYld2#74d291dfaaxci)
    shared_ptr<string> code_ {};
    // A detailed description of the Code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Return result
    shared_ptr<KeepaliveIntlResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
