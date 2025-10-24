// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYDOMAINOWNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYDOMAINOWNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VerifyDomainOwnerResponseBodyVerifyResult.hpp>
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
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->verifyResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyDomainOwnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // verifyResult Field Functions 
    bool hasVerifyResult() const { return this->verifyResult_ != nullptr;};
    void deleteVerifyResult() { this->verifyResult_ = nullptr;};
    inline const VerifyDomainOwnerResponseBodyVerifyResult & verifyResult() const { DARABONBA_PTR_GET_CONST(verifyResult_, VerifyDomainOwnerResponseBodyVerifyResult) };
    inline VerifyDomainOwnerResponseBodyVerifyResult verifyResult() { DARABONBA_PTR_GET(verifyResult_, VerifyDomainOwnerResponseBodyVerifyResult) };
    inline VerifyDomainOwnerResponseBody& setVerifyResult(const VerifyDomainOwnerResponseBodyVerifyResult & verifyResult) { DARABONBA_PTR_SET_VALUE(verifyResult_, verifyResult) };
    inline VerifyDomainOwnerResponseBody& setVerifyResult(VerifyDomainOwnerResponseBodyVerifyResult && verifyResult) { DARABONBA_PTR_SET_RVALUE(verifyResult_, verifyResult) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The verification result.
    std::shared_ptr<VerifyDomainOwnerResponseBodyVerifyResult> verifyResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
