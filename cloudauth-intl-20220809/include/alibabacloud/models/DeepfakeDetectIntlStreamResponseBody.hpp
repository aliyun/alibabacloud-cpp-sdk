// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEEPFAKEDETECTINTLSTREAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEEPFAKEDETECTINTLSTREAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class DeepfakeDetectIntlStreamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeepfakeDetectIntlStreamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DeepfakeDetectIntlStreamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    DeepfakeDetectIntlStreamResponseBody() = default ;
    DeepfakeDetectIntlStreamResponseBody(const DeepfakeDetectIntlStreamResponseBody &) = default ;
    DeepfakeDetectIntlStreamResponseBody(DeepfakeDetectIntlStreamResponseBody &&) = default ;
    DeepfakeDetectIntlStreamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeepfakeDetectIntlStreamResponseBody() = default ;
    DeepfakeDetectIntlStreamResponseBody& operator=(const DeepfakeDetectIntlStreamResponseBody &) = default ;
    DeepfakeDetectIntlStreamResponseBody& operator=(DeepfakeDetectIntlStreamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(RiskScore, riskScore_);
        DARABONBA_PTR_TO_JSON(RiskTag, riskTag_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(RiskScore, riskScore_);
        DARABONBA_PTR_FROM_JSON(RiskTag, riskTag_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->result_ == nullptr
        && this->riskScore_ == nullptr && this->riskTag_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline ResultObject& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // riskScore Field Functions 
      bool hasRiskScore() const { return this->riskScore_ != nullptr;};
      void deleteRiskScore() { this->riskScore_ = nullptr;};
      inline const map<string, string> & getRiskScore() const { DARABONBA_PTR_GET_CONST(riskScore_, map<string, string>) };
      inline map<string, string> getRiskScore() { DARABONBA_PTR_GET(riskScore_, map<string, string>) };
      inline ResultObject& setRiskScore(const map<string, string> & riskScore) { DARABONBA_PTR_SET_VALUE(riskScore_, riskScore) };
      inline ResultObject& setRiskScore(map<string, string> && riskScore) { DARABONBA_PTR_SET_RVALUE(riskScore_, riskScore) };


      // riskTag Field Functions 
      bool hasRiskTag() const { return this->riskTag_ != nullptr;};
      void deleteRiskTag() { this->riskTag_ = nullptr;};
      inline string getRiskTag() const { DARABONBA_PTR_GET_DEFAULT(riskTag_, "") };
      inline ResultObject& setRiskTag(string riskTag) { DARABONBA_PTR_SET_VALUE(riskTag_, riskTag) };


    protected:
      // Risk result:
      // 
      // - **0**: Low risk
      // - **1**: High risk
      // - **2**: Suspicious
      shared_ptr<string> result_ {};
      // Risk score map.
      shared_ptr<map<string, string>> riskScore_ {};
      // Risk tags. Multiple tags are separated by commas (,), including:
      // 
      // - SuspectDeepForgery: Suspected deep forgery
      // - SuspectPSFace: Suspected synthetic attack
      // - SuspectTemple: Suspected template attack
      // - SuspectRemake: Suspected presentation attack
      shared_ptr<string> riskTag_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeepfakeDetectIntlStreamResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeepfakeDetectIntlStreamResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeepfakeDetectIntlStreamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DeepfakeDetectIntlStreamResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DeepfakeDetectIntlStreamResponseBody::ResultObject) };
    inline DeepfakeDetectIntlStreamResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DeepfakeDetectIntlStreamResponseBody::ResultObject) };
    inline DeepfakeDetectIntlStreamResponseBody& setResultObject(const DeepfakeDetectIntlStreamResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DeepfakeDetectIntlStreamResponseBody& setResultObject(DeepfakeDetectIntlStreamResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code
    shared_ptr<string> code_ {};
    // Return message
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned result information.
    shared_ptr<DeepfakeDetectIntlStreamResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
