// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARDOCRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CARDOCRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class CardOcrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CardOcrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CardOcrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CardOcrResponseBody() = default ;
    CardOcrResponseBody(const CardOcrResponseBody &) = default ;
    CardOcrResponseBody(CardOcrResponseBody &&) = default ;
    CardOcrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CardOcrResponseBody() = default ;
    CardOcrResponseBody& operator=(const CardOcrResponseBody &) = default ;
    CardOcrResponseBody& operator=(CardOcrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ExtCardInfo, extCardInfo_);
        DARABONBA_PTR_TO_JSON(ExtIdInfo, extIdInfo_);
        DARABONBA_PTR_TO_JSON(Passed, passed_);
        DARABONBA_PTR_TO_JSON(SubCode, subCode_);
        DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ExtCardInfo, extCardInfo_);
        DARABONBA_PTR_FROM_JSON(ExtIdInfo, extIdInfo_);
        DARABONBA_PTR_FROM_JSON(Passed, passed_);
        DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
        DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
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
      virtual bool empty() const override { return this->extCardInfo_ == nullptr
        && this->extIdInfo_ == nullptr && this->passed_ == nullptr && this->subCode_ == nullptr && this->transactionId_ == nullptr; };
      // extCardInfo Field Functions 
      bool hasExtCardInfo() const { return this->extCardInfo_ != nullptr;};
      void deleteExtCardInfo() { this->extCardInfo_ = nullptr;};
      inline string getExtCardInfo() const { DARABONBA_PTR_GET_DEFAULT(extCardInfo_, "") };
      inline Result& setExtCardInfo(string extCardInfo) { DARABONBA_PTR_SET_VALUE(extCardInfo_, extCardInfo) };


      // extIdInfo Field Functions 
      bool hasExtIdInfo() const { return this->extIdInfo_ != nullptr;};
      void deleteExtIdInfo() { this->extIdInfo_ = nullptr;};
      inline string getExtIdInfo() const { DARABONBA_PTR_GET_DEFAULT(extIdInfo_, "") };
      inline Result& setExtIdInfo(string extIdInfo) { DARABONBA_PTR_SET_VALUE(extIdInfo_, extIdInfo) };


      // passed Field Functions 
      bool hasPassed() const { return this->passed_ != nullptr;};
      void deletePassed() { this->passed_ = nullptr;};
      inline string getPassed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
      inline Result& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


      // subCode Field Functions 
      bool hasSubCode() const { return this->subCode_ != nullptr;};
      void deleteSubCode() { this->subCode_ = nullptr;};
      inline string getSubCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
      inline Result& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


      // transactionId Field Functions 
      bool hasTransactionId() const { return this->transactionId_ != nullptr;};
      void deleteTransactionId() { this->transactionId_ = nullptr;};
      inline string getTransactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
      inline Result& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


    protected:
      // Document recognition result
      shared_ptr<string> extCardInfo_ {};
      // Additional result information
      shared_ptr<string> extIdInfo_ {};
      // Whether the authentication passed.
      // 
      // - Y: Passed.
      // - N: Not passed.
      shared_ptr<string> passed_ {};
      // Sub-result code.
      shared_ptr<string> subCode_ {};
      // Unique identifier for the authentication request
      shared_ptr<string> transactionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CardOcrResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CardOcrResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CardOcrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CardOcrResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CardOcrResponseBody::Result) };
    inline CardOcrResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CardOcrResponseBody::Result) };
    inline CardOcrResponseBody& setResult(const CardOcrResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CardOcrResponseBody& setResult(CardOcrResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Return code
    shared_ptr<string> code_ {};
    // Return message
    shared_ptr<string> message_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Return result
    shared_ptr<CardOcrResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
