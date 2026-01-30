// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIALIZERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INITIALIZERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class InitializeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitializeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, InitializeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    InitializeResponseBody() = default ;
    InitializeResponseBody(const InitializeResponseBody &) = default ;
    InitializeResponseBody(InitializeResponseBody &&) = default ;
    InitializeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitializeResponseBody() = default ;
    InitializeResponseBody& operator=(const InitializeResponseBody &) = default ;
    InitializeResponseBody& operator=(InitializeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ClientCfg, clientCfg_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
        DARABONBA_PTR_TO_JSON(TransactionUrl, transactionUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientCfg, clientCfg_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
        DARABONBA_PTR_FROM_JSON(TransactionUrl, transactionUrl_);
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
      virtual bool empty() const override { return this->clientCfg_ == nullptr
        && this->protocol_ == nullptr && this->transactionId_ == nullptr && this->transactionUrl_ == nullptr; };
      // clientCfg Field Functions 
      bool hasClientCfg() const { return this->clientCfg_ != nullptr;};
      void deleteClientCfg() { this->clientCfg_ = nullptr;};
      inline string getClientCfg() const { DARABONBA_PTR_GET_DEFAULT(clientCfg_, "") };
      inline Result& setClientCfg(string clientCfg) { DARABONBA_PTR_SET_VALUE(clientCfg_, clientCfg) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Result& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // transactionId Field Functions 
      bool hasTransactionId() const { return this->transactionId_ != nullptr;};
      void deleteTransactionId() { this->transactionId_ = nullptr;};
      inline string getTransactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
      inline Result& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


      // transactionUrl Field Functions 
      bool hasTransactionUrl() const { return this->transactionUrl_ != nullptr;};
      void deleteTransactionUrl() { this->transactionUrl_ = nullptr;};
      inline string getTransactionUrl() const { DARABONBA_PTR_GET_DEFAULT(transactionUrl_, "") };
      inline Result& setTransactionUrl(string transactionUrl) { DARABONBA_PTR_SET_VALUE(transactionUrl_, transactionUrl) };


    protected:
      // Client configuration
      shared_ptr<string> clientCfg_ {};
      // Standard encryption protocol for authentication.
      // 
      // > This field is required when integrating with H5 web pages using iframe embedding.
      shared_ptr<string> protocol_ {};
      // Authentication ID
      shared_ptr<string> transactionId_ {};
      // Web authentication URL
      shared_ptr<string> transactionUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InitializeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InitializeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InitializeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const InitializeResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, InitializeResponseBody::Result) };
    inline InitializeResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, InitializeResponseBody::Result) };
    inline InitializeResponseBody& setResult(const InitializeResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline InitializeResponseBody& setResult(InitializeResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Return code
    shared_ptr<string> code_ {};
    // Return message
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Return result
    shared_ptr<InitializeResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
