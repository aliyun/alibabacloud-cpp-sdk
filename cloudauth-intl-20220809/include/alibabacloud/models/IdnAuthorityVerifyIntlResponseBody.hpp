// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IDNAUTHORITYVERIFYINTLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IDNAUTHORITYVERIFYINTLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class IdnAuthorityVerifyIntlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IdnAuthorityVerifyIntlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, IdnAuthorityVerifyIntlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    IdnAuthorityVerifyIntlResponseBody() = default ;
    IdnAuthorityVerifyIntlResponseBody(const IdnAuthorityVerifyIntlResponseBody &) = default ;
    IdnAuthorityVerifyIntlResponseBody(IdnAuthorityVerifyIntlResponseBody &&) = default ;
    IdnAuthorityVerifyIntlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IdnAuthorityVerifyIntlResponseBody() = default ;
    IdnAuthorityVerifyIntlResponseBody& operator=(const IdnAuthorityVerifyIntlResponseBody &) = default ;
    IdnAuthorityVerifyIntlResponseBody& operator=(IdnAuthorityVerifyIntlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ExtSourceInfo, extSourceInfo_);
        DARABONBA_PTR_TO_JSON(Passed, passed_);
        DARABONBA_PTR_TO_JSON(SubCode, subCode_);
        DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ExtSourceInfo, extSourceInfo_);
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
      virtual bool empty() const override { return this->extSourceInfo_ == nullptr
        && this->passed_ == nullptr && this->subCode_ == nullptr && this->transactionId_ == nullptr; };
      // extSourceInfo Field Functions 
      bool hasExtSourceInfo() const { return this->extSourceInfo_ != nullptr;};
      void deleteExtSourceInfo() { this->extSourceInfo_ = nullptr;};
      inline string getExtSourceInfo() const { DARABONBA_PTR_GET_DEFAULT(extSourceInfo_, "") };
      inline Result& setExtSourceInfo(string extSourceInfo) { DARABONBA_PTR_SET_VALUE(extSourceInfo_, extSourceInfo) };


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
      // The detailed verification results from the data source are described as follows (using the Indonesian data source as an example):
      // - **govId, fullName, dob**: A comparison score equal to 1.0 indicates a complete match with the official data source. A score lower than 1.0 indicates a mismatch. 
      // - **selfiePhoto**: A comparison score greater than 0.8 indicates a match with the official data source. A score equal to or lower than 0.8 indicates a mismatch. 
      // - **liveness**: A score higher than 0.95 indicates a liveness detection risk. 
      // - **imgManipulationScore**: A score higher than 0.95 indicates an image tampering risk.
      shared_ptr<string> extSourceInfo_ {};
      // Indicates whether the verification is passed. Valid values:
      // - Y: passed.
      // - N: not passed.
      shared_ptr<string> passed_ {};
      // The sub-result code.
      shared_ptr<string> subCode_ {};
      // The unique identifier of the authentication request.
      shared_ptr<string> transactionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline IdnAuthorityVerifyIntlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline IdnAuthorityVerifyIntlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IdnAuthorityVerifyIntlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const IdnAuthorityVerifyIntlResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, IdnAuthorityVerifyIntlResponseBody::Result) };
    inline IdnAuthorityVerifyIntlResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, IdnAuthorityVerifyIntlResponseBody::Result) };
    inline IdnAuthorityVerifyIntlResponseBody& setResult(const IdnAuthorityVerifyIntlResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline IdnAuthorityVerifyIntlResponseBody& setResult(IdnAuthorityVerifyIntlResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<IdnAuthorityVerifyIntlResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
