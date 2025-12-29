// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALPRODUCTVERIFYV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALPRODUCTVERIFYV2RESPONSEBODY_HPP_
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
  class CredentialProductVerifyV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialProductVerifyV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialProductVerifyV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    CredentialProductVerifyV2ResponseBody() = default ;
    CredentialProductVerifyV2ResponseBody(const CredentialProductVerifyV2ResponseBody &) = default ;
    CredentialProductVerifyV2ResponseBody(CredentialProductVerifyV2ResponseBody &&) = default ;
    CredentialProductVerifyV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialProductVerifyV2ResponseBody() = default ;
    CredentialProductVerifyV2ResponseBody& operator=(const CredentialProductVerifyV2ResponseBody &) = default ;
    CredentialProductVerifyV2ResponseBody& operator=(CredentialProductVerifyV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(MaterialInfo, materialInfo_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(RiskScore, riskScore_);
        DARABONBA_PTR_TO_JSON(RiskTag, riskTag_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(MaterialInfo, materialInfo_);
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
      virtual bool empty() const override { return this->materialInfo_ == nullptr
        && this->result_ == nullptr && this->riskScore_ == nullptr && this->riskTag_ == nullptr; };
      // materialInfo Field Functions 
      bool hasMaterialInfo() const { return this->materialInfo_ != nullptr;};
      void deleteMaterialInfo() { this->materialInfo_ = nullptr;};
      inline string getMaterialInfo() const { DARABONBA_PTR_GET_DEFAULT(materialInfo_, "") };
      inline ResultObject& setMaterialInfo(string materialInfo) { DARABONBA_PTR_SET_VALUE(materialInfo_, materialInfo) };


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
      // Additional information in JSON format.
      shared_ptr<string> materialInfo_ {};
      // - 0: Low risk
      // - 1: High risk
      // - 2: Suspicious
      shared_ptr<string> result_ {};
      // Map of risk scores.
      shared_ptr<map<string, string>> riskScore_ {};
      // Risk tags, separated by commas, including:
      // - PS: Image has been photoshopped
      // - LOW_QUALITY_PRODUCT: Low quality (low clarity)
      // - SAME_BACKGROUND: Similar background
      shared_ptr<string> riskTag_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CredentialProductVerifyV2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CredentialProductVerifyV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CredentialProductVerifyV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const CredentialProductVerifyV2ResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, CredentialProductVerifyV2ResponseBody::ResultObject) };
    inline CredentialProductVerifyV2ResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, CredentialProductVerifyV2ResponseBody::ResultObject) };
    inline CredentialProductVerifyV2ResponseBody& setResultObject(const CredentialProductVerifyV2ResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline CredentialProductVerifyV2ResponseBody& setResultObject(CredentialProductVerifyV2ResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code: 200 for success, others for failure.
    shared_ptr<string> code_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Result object.
    shared_ptr<CredentialProductVerifyV2ResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
