// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEEPFAKEDETECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEEPFAKEDETECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DeepfakeDetectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeepfakeDetectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DeepfakeDetectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    DeepfakeDetectResponseBody() = default ;
    DeepfakeDetectResponseBody(const DeepfakeDetectResponseBody &) = default ;
    DeepfakeDetectResponseBody(DeepfakeDetectResponseBody &&) = default ;
    DeepfakeDetectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeepfakeDetectResponseBody() = default ;
    DeepfakeDetectResponseBody& operator=(const DeepfakeDetectResponseBody &) = default ;
    DeepfakeDetectResponseBody& operator=(DeepfakeDetectResponseBody &&) = default ;
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
      // Risk tags. Multiple tags are separated by commas (,). Includes:
      // 
      // - Suspected deep forgery  SuspectDeepForgery
      // - Suspected synthetic attack  SuspectPSFace
      // - Suspected watermark  SuspectWarterMark
      // - Suspected black industry attack  SuspectTemple
      // - Suspected generated face  SuspectAIGC Face
      // - Suspected rephotographed face  SuspectRemake
      shared_ptr<string> riskTag_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeepfakeDetectResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeepfakeDetectResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeepfakeDetectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DeepfakeDetectResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DeepfakeDetectResponseBody::ResultObject) };
    inline DeepfakeDetectResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DeepfakeDetectResponseBody::ResultObject) };
    inline DeepfakeDetectResponseBody& setResultObject(const DeepfakeDetectResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DeepfakeDetectResponseBody& setResultObject(DeepfakeDetectResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code: 200 indicates success, others indicate failure.
    shared_ptr<string> code_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned result information.
    shared_ptr<DeepfakeDetectResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
