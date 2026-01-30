// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACEGUARDRISKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FACEGUARDRISKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceGuardRiskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceGuardRiskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, FaceGuardRiskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    FaceGuardRiskResponseBody() = default ;
    FaceGuardRiskResponseBody(const FaceGuardRiskResponseBody &) = default ;
    FaceGuardRiskResponseBody(FaceGuardRiskResponseBody &&) = default ;
    FaceGuardRiskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceGuardRiskResponseBody() = default ;
    FaceGuardRiskResponseBody& operator=(const FaceGuardRiskResponseBody &) = default ;
    FaceGuardRiskResponseBody& operator=(FaceGuardRiskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(GuardRiskScore, guardRiskScore_);
        DARABONBA_PTR_TO_JSON(RiskExtends, riskExtends_);
        DARABONBA_PTR_TO_JSON(RiskTags, riskTags_);
        DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(GuardRiskScore, guardRiskScore_);
        DARABONBA_PTR_FROM_JSON(RiskExtends, riskExtends_);
        DARABONBA_PTR_FROM_JSON(RiskTags, riskTags_);
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
      virtual bool empty() const override { return this->guardRiskScore_ == nullptr
        && this->riskExtends_ == nullptr && this->riskTags_ == nullptr && this->transactionId_ == nullptr; };
      // guardRiskScore Field Functions 
      bool hasGuardRiskScore() const { return this->guardRiskScore_ != nullptr;};
      void deleteGuardRiskScore() { this->guardRiskScore_ = nullptr;};
      inline double getGuardRiskScore() const { DARABONBA_PTR_GET_DEFAULT(guardRiskScore_, 0.0) };
      inline Result& setGuardRiskScore(double guardRiskScore) { DARABONBA_PTR_SET_VALUE(guardRiskScore_, guardRiskScore) };


      // riskExtends Field Functions 
      bool hasRiskExtends() const { return this->riskExtends_ != nullptr;};
      void deleteRiskExtends() { this->riskExtends_ = nullptr;};
      inline string getRiskExtends() const { DARABONBA_PTR_GET_DEFAULT(riskExtends_, "") };
      inline Result& setRiskExtends(string riskExtends) { DARABONBA_PTR_SET_VALUE(riskExtends_, riskExtends) };


      // riskTags Field Functions 
      bool hasRiskTags() const { return this->riskTags_ != nullptr;};
      void deleteRiskTags() { this->riskTags_ = nullptr;};
      inline string getRiskTags() const { DARABONBA_PTR_GET_DEFAULT(riskTags_, "") };
      inline Result& setRiskTags(string riskTags) { DARABONBA_PTR_SET_VALUE(riskTags_, riskTags) };


      // transactionId Field Functions 
      bool hasTransactionId() const { return this->transactionId_ != nullptr;};
      void deleteTransactionId() { this->transactionId_ = nullptr;};
      inline string getTransactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
      inline Result& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


    protected:
      // The device risk probability predicted by the Device Guard algorithm. A higher score indicates a higher device risk.
      // 
      // Valid values: 0 to 100.
      shared_ptr<double> guardRiskScore_ {};
      // Extended information. This is empty by default.
      shared_ptr<string> riskExtends_ {};
      // The device risk tags. Multiple risk tags are separated by commas (**,**). For more information about the risk tags and their meanings, expand the **Risk tags (RiskTags)** section below.
      shared_ptr<string> riskTags_ {};
      // The transaction ID.
      shared_ptr<string> transactionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FaceGuardRiskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FaceGuardRiskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FaceGuardRiskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const FaceGuardRiskResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, FaceGuardRiskResponseBody::Result) };
    inline FaceGuardRiskResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, FaceGuardRiskResponseBody::Result) };
    inline FaceGuardRiskResponseBody& setResult(const FaceGuardRiskResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline FaceGuardRiskResponseBody& setResult(FaceGuardRiskResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The return code. A value of Success indicates that the API operation responded successfully. For more information about how to determine the authentication result, expand the **Return codes** section below.
    shared_ptr<string> code_ {};
    // A detailed description of the return code.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Result object
    shared_ptr<FaceGuardRiskResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
