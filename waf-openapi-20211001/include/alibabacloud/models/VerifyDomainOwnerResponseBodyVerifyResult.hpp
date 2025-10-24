// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYDOMAINOWNERRESPONSEBODYVERIFYRESULT_HPP_
#define ALIBABACLOUD_MODELS_VERIFYDOMAINOWNERRESPONSEBODYVERIFYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class VerifyDomainOwnerResponseBodyVerifyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyDomainOwnerResponseBodyVerifyResult& obj) { 
      DARABONBA_PTR_TO_JSON(FailCode, failCode_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyDomainOwnerResponseBodyVerifyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FailCode, failCode_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    VerifyDomainOwnerResponseBodyVerifyResult() = default ;
    VerifyDomainOwnerResponseBodyVerifyResult(const VerifyDomainOwnerResponseBodyVerifyResult &) = default ;
    VerifyDomainOwnerResponseBodyVerifyResult(VerifyDomainOwnerResponseBodyVerifyResult &&) = default ;
    VerifyDomainOwnerResponseBodyVerifyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyDomainOwnerResponseBodyVerifyResult() = default ;
    VerifyDomainOwnerResponseBodyVerifyResult& operator=(const VerifyDomainOwnerResponseBodyVerifyResult &) = default ;
    VerifyDomainOwnerResponseBodyVerifyResult& operator=(VerifyDomainOwnerResponseBodyVerifyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failCode_ == nullptr
        && return this->result_ == nullptr; };
    // failCode Field Functions 
    bool hasFailCode() const { return this->failCode_ != nullptr;};
    void deleteFailCode() { this->failCode_ = nullptr;};
    inline string failCode() const { DARABONBA_PTR_GET_DEFAULT(failCode_, "") };
    inline VerifyDomainOwnerResponseBodyVerifyResult& setFailCode(string failCode) { DARABONBA_PTR_SET_VALUE(failCode_, failCode) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline VerifyDomainOwnerResponseBodyVerifyResult& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    // The reasons why the verification fails. Valid values:
    // 
    // *   DnsTxtVerifyFailed: The DNS TXT record and the domain name do not match.
    // *   DnsServerError: The DNS server is abnormal.
    // *   VerifyFileNotExist: The verification file does not exist.
    // *   VerifyDomainNotAccess: The access to the domain name failed.
    // *   FileContentVerifyFailed: The content of the verification file and the domain name do not match.
    std::shared_ptr<string> failCode_ = nullptr;
    // The verification result. Valid values:
    // 
    // *   **true**: The verification succeeds.
    // *   **false**: The verification fails.
    std::shared_ptr<bool> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
