// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYDOMAINOWNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYDOMAINOWNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class VerifyDomainOwnerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyDomainOwnerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VerifyResult, verifyResult_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyDomainOwnerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VerifyResult, verifyResult_);
    };
    VerifyDomainOwnerResponseBody() = default ;
    VerifyDomainOwnerResponseBody(const VerifyDomainOwnerResponseBody &) = default ;
    VerifyDomainOwnerResponseBody(VerifyDomainOwnerResponseBody &&) = default ;
    VerifyDomainOwnerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyDomainOwnerResponseBody() = default ;
    VerifyDomainOwnerResponseBody& operator=(const VerifyDomainOwnerResponseBody &) = default ;
    VerifyDomainOwnerResponseBody& operator=(VerifyDomainOwnerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VerifyResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VerifyResult& obj) { 
        DARABONBA_PTR_TO_JSON(FailCode, failCode_);
        DARABONBA_PTR_TO_JSON(Result, result_);
      };
      friend void from_json(const Darabonba::Json& j, VerifyResult& obj) { 
        DARABONBA_PTR_FROM_JSON(FailCode, failCode_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
      };
      VerifyResult() = default ;
      VerifyResult(const VerifyResult &) = default ;
      VerifyResult(VerifyResult &&) = default ;
      VerifyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VerifyResult() = default ;
      VerifyResult& operator=(const VerifyResult &) = default ;
      VerifyResult& operator=(VerifyResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->failCode_ == nullptr
        && this->result_ == nullptr; };
      // failCode Field Functions 
      bool hasFailCode() const { return this->failCode_ != nullptr;};
      void deleteFailCode() { this->failCode_ = nullptr;};
      inline string getFailCode() const { DARABONBA_PTR_GET_DEFAULT(failCode_, "") };
      inline VerifyResult& setFailCode(string failCode) { DARABONBA_PTR_SET_VALUE(failCode_, failCode) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline bool getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
      inline VerifyResult& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    protected:
      // The reasons why the verification fails. Valid values:
      // 
      // *   DnsTxtVerifyFailed: The DNS TXT record and the domain name do not match.
      // *   DnsServerError: The DNS server is abnormal.
      // *   VerifyFileNotExist: The verification file does not exist.
      // *   VerifyDomainNotAccess: The access to the domain name failed.
      // *   FileContentVerifyFailed: The content of the verification file and the domain name do not match.
      shared_ptr<string> failCode_ {};
      // The verification result. Valid values:
      // 
      // *   **true**: The verification succeeds.
      // *   **false**: The verification fails.
      shared_ptr<bool> result_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->verifyResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyDomainOwnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // verifyResult Field Functions 
    bool hasVerifyResult() const { return this->verifyResult_ != nullptr;};
    void deleteVerifyResult() { this->verifyResult_ = nullptr;};
    inline const VerifyDomainOwnerResponseBody::VerifyResult & getVerifyResult() const { DARABONBA_PTR_GET_CONST(verifyResult_, VerifyDomainOwnerResponseBody::VerifyResult) };
    inline VerifyDomainOwnerResponseBody::VerifyResult getVerifyResult() { DARABONBA_PTR_GET(verifyResult_, VerifyDomainOwnerResponseBody::VerifyResult) };
    inline VerifyDomainOwnerResponseBody& setVerifyResult(const VerifyDomainOwnerResponseBody::VerifyResult & verifyResult) { DARABONBA_PTR_SET_VALUE(verifyResult_, verifyResult) };
    inline VerifyDomainOwnerResponseBody& setVerifyResult(VerifyDomainOwnerResponseBody::VerifyResult && verifyResult) { DARABONBA_PTR_SET_RVALUE(verifyResult_, verifyResult) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The verification result.
    shared_ptr<VerifyDomainOwnerResponseBody::VerifyResult> verifyResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
