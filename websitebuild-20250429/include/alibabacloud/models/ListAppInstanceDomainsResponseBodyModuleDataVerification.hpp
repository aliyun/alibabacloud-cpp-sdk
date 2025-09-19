// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCEDOMAINSRESPONSEBODYMODULEDATAVERIFICATION_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCEDOMAINSRESPONSEBODYMODULEDATAVERIFICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAppInstanceDomainsResponseBodyModuleDataVerificationDnsRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppInstanceDomainsResponseBodyModuleDataVerification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstanceDomainsResponseBodyModuleDataVerification& obj) { 
      DARABONBA_PTR_TO_JSON(DnsRecord, dnsRecord_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(VerificationStatus, verificationStatus_);
      DARABONBA_PTR_TO_JSON(VerificationStatusCode, verificationStatusCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstanceDomainsResponseBodyModuleDataVerification& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsRecord, dnsRecord_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(VerificationStatus, verificationStatus_);
      DARABONBA_PTR_FROM_JSON(VerificationStatusCode, verificationStatusCode_);
    };
    ListAppInstanceDomainsResponseBodyModuleDataVerification() = default ;
    ListAppInstanceDomainsResponseBodyModuleDataVerification(const ListAppInstanceDomainsResponseBodyModuleDataVerification &) = default ;
    ListAppInstanceDomainsResponseBodyModuleDataVerification(ListAppInstanceDomainsResponseBodyModuleDataVerification &&) = default ;
    ListAppInstanceDomainsResponseBodyModuleDataVerification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstanceDomainsResponseBodyModuleDataVerification() = default ;
    ListAppInstanceDomainsResponseBodyModuleDataVerification& operator=(const ListAppInstanceDomainsResponseBodyModuleDataVerification &) = default ;
    ListAppInstanceDomainsResponseBodyModuleDataVerification& operator=(ListAppInstanceDomainsResponseBodyModuleDataVerification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dnsRecord_ != nullptr
        && this->errorMsg_ != nullptr && this->verificationStatus_ != nullptr && this->verificationStatusCode_ != nullptr; };
    // dnsRecord Field Functions 
    bool hasDnsRecord() const { return this->dnsRecord_ != nullptr;};
    void deleteDnsRecord() { this->dnsRecord_ = nullptr;};
    inline const Models::ListAppInstanceDomainsResponseBodyModuleDataVerificationDnsRecord & dnsRecord() const { DARABONBA_PTR_GET_CONST(dnsRecord_, Models::ListAppInstanceDomainsResponseBodyModuleDataVerificationDnsRecord) };
    inline Models::ListAppInstanceDomainsResponseBodyModuleDataVerificationDnsRecord dnsRecord() { DARABONBA_PTR_GET(dnsRecord_, Models::ListAppInstanceDomainsResponseBodyModuleDataVerificationDnsRecord) };
    inline ListAppInstanceDomainsResponseBodyModuleDataVerification& setDnsRecord(const Models::ListAppInstanceDomainsResponseBodyModuleDataVerificationDnsRecord & dnsRecord) { DARABONBA_PTR_SET_VALUE(dnsRecord_, dnsRecord) };
    inline ListAppInstanceDomainsResponseBodyModuleDataVerification& setDnsRecord(Models::ListAppInstanceDomainsResponseBodyModuleDataVerificationDnsRecord && dnsRecord) { DARABONBA_PTR_SET_RVALUE(dnsRecord_, dnsRecord) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleDataVerification& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // verificationStatus Field Functions 
    bool hasVerificationStatus() const { return this->verificationStatus_ != nullptr;};
    void deleteVerificationStatus() { this->verificationStatus_ = nullptr;};
    inline string verificationStatus() const { DARABONBA_PTR_GET_DEFAULT(verificationStatus_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleDataVerification& setVerificationStatus(string verificationStatus) { DARABONBA_PTR_SET_VALUE(verificationStatus_, verificationStatus) };


    // verificationStatusCode Field Functions 
    bool hasVerificationStatusCode() const { return this->verificationStatusCode_ != nullptr;};
    void deleteVerificationStatusCode() { this->verificationStatusCode_ = nullptr;};
    inline string verificationStatusCode() const { DARABONBA_PTR_GET_DEFAULT(verificationStatusCode_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleDataVerification& setVerificationStatusCode(string verificationStatusCode) { DARABONBA_PTR_SET_VALUE(verificationStatusCode_, verificationStatusCode) };


  protected:
    std::shared_ptr<Models::ListAppInstanceDomainsResponseBodyModuleDataVerificationDnsRecord> dnsRecord_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> verificationStatus_ = nullptr;
    std::shared_ptr<string> verificationStatusCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
