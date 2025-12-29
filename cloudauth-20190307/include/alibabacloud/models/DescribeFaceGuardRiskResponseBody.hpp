// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFACEGUARDRISKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFACEGUARDRISKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeFaceGuardRiskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaceGuardRiskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaceGuardRiskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    DescribeFaceGuardRiskResponseBody() = default ;
    DescribeFaceGuardRiskResponseBody(const DescribeFaceGuardRiskResponseBody &) = default ;
    DescribeFaceGuardRiskResponseBody(DescribeFaceGuardRiskResponseBody &&) = default ;
    DescribeFaceGuardRiskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaceGuardRiskResponseBody() = default ;
    DescribeFaceGuardRiskResponseBody& operator=(const DescribeFaceGuardRiskResponseBody &) = default ;
    DescribeFaceGuardRiskResponseBody& operator=(DescribeFaceGuardRiskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
        DARABONBA_PTR_TO_JSON(RiskExtends, riskExtends_);
        DARABONBA_PTR_TO_JSON(RiskTags, riskTags_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
        DARABONBA_PTR_FROM_JSON(RiskExtends, riskExtends_);
        DARABONBA_PTR_FROM_JSON(RiskTags, riskTags_);
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
      virtual bool empty() const override { return this->certifyId_ == nullptr
        && this->riskExtends_ == nullptr && this->riskTags_ == nullptr; };
      // certifyId Field Functions 
      bool hasCertifyId() const { return this->certifyId_ != nullptr;};
      void deleteCertifyId() { this->certifyId_ = nullptr;};
      inline string getCertifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
      inline ResultObject& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


      // riskExtends Field Functions 
      bool hasRiskExtends() const { return this->riskExtends_ != nullptr;};
      void deleteRiskExtends() { this->riskExtends_ = nullptr;};
      inline string getRiskExtends() const { DARABONBA_PTR_GET_DEFAULT(riskExtends_, "") };
      inline ResultObject& setRiskExtends(string riskExtends) { DARABONBA_PTR_SET_VALUE(riskExtends_, riskExtends) };


      // riskTags Field Functions 
      bool hasRiskTags() const { return this->riskTags_ != nullptr;};
      void deleteRiskTags() { this->riskTags_ = nullptr;};
      inline string getRiskTags() const { DARABONBA_PTR_GET_DEFAULT(riskTags_, "") };
      inline ResultObject& setRiskTags(string riskTags) { DARABONBA_PTR_SET_VALUE(riskTags_, riskTags) };


    protected:
      // Unique real-person authentication identifier.
      shared_ptr<string> certifyId_ {};
      // Extended information, in JSON format. (Customized return based on tenant requirements)
      shared_ptr<string> riskExtends_ {};
      // Device risk tags.
      // 
      // - Multiple device risk tags are separated by commas (,). For example, “ROOT,VPN,HOOK”,
      // 
      // - For more information about device risk tags and their meanings, please refer to the official documentation on Face Guard Tag Descriptions.
      shared_ptr<string> riskTags_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeFaceGuardRiskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeFaceGuardRiskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFaceGuardRiskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeFaceGuardRiskResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeFaceGuardRiskResponseBody::ResultObject) };
    inline DescribeFaceGuardRiskResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeFaceGuardRiskResponseBody::ResultObject) };
    inline DescribeFaceGuardRiskResponseBody& setResultObject(const DescribeFaceGuardRiskResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeFaceGuardRiskResponseBody& setResultObject(DescribeFaceGuardRiskResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code, **200** indicates successful response from the interface.
    shared_ptr<string> code_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Returned result information.
    shared_ptr<DescribeFaceGuardRiskResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
