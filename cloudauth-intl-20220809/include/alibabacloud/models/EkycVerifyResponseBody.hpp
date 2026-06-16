// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EKYCVERIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EKYCVERIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class EkycVerifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EkycVerifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, EkycVerifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    EkycVerifyResponseBody() = default ;
    EkycVerifyResponseBody(const EkycVerifyResponseBody &) = default ;
    EkycVerifyResponseBody(EkycVerifyResponseBody &&) = default ;
    EkycVerifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EkycVerifyResponseBody() = default ;
    EkycVerifyResponseBody& operator=(const EkycVerifyResponseBody &) = default ;
    EkycVerifyResponseBody& operator=(EkycVerifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ExtFaceInfo, extFaceInfo_);
        DARABONBA_PTR_TO_JSON(ExtIdInfo, extIdInfo_);
        DARABONBA_PTR_TO_JSON(Passed, passed_);
        DARABONBA_PTR_TO_JSON(SubCode, subCode_);
        DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ExtFaceInfo, extFaceInfo_);
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
      virtual bool empty() const override { return this->extFaceInfo_ == nullptr
        && this->extIdInfo_ == nullptr && this->passed_ == nullptr && this->subCode_ == nullptr && this->transactionId_ == nullptr; };
      // extFaceInfo Field Functions 
      bool hasExtFaceInfo() const { return this->extFaceInfo_ != nullptr;};
      void deleteExtFaceInfo() { this->extFaceInfo_ = nullptr;};
      inline string getExtFaceInfo() const { DARABONBA_PTR_GET_DEFAULT(extFaceInfo_, "") };
      inline Result& setExtFaceInfo(string extFaceInfo) { DARABONBA_PTR_SET_VALUE(extFaceInfo_, extFaceInfo) };


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
      // The face verification result information.
      shared_ptr<string> extFaceInfo_ {};
      // The document recognition result. This parameter is returned only when the API response is successful.
      shared_ptr<string> extIdInfo_ {};
      // Indicates whether the verification is passed. Valid values:
      // - T: Passed.
      // - F: Not passed.
      shared_ptr<string> passed_ {};
      // The sub-result code.
      shared_ptr<string> subCode_ {};
      // The unique identifier of the verification request.
      shared_ptr<string> transactionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EkycVerifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EkycVerifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EkycVerifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const EkycVerifyResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, EkycVerifyResponseBody::Result) };
    inline EkycVerifyResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, EkycVerifyResponseBody::Result) };
    inline EkycVerifyResponseBody& setResult(const EkycVerifyResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline EkycVerifyResponseBody& setResult(EkycVerifyResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<EkycVerifyResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
