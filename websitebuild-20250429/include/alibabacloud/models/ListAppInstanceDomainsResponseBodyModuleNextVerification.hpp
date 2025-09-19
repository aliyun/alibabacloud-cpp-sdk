// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCEDOMAINSRESPONSEBODYMODULENEXTVERIFICATION_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCEDOMAINSRESPONSEBODYMODULENEXTVERIFICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppInstanceDomainsResponseBodyModuleNextVerification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstanceDomainsResponseBodyModuleNextVerification& obj) { 
      DARABONBA_PTR_TO_JSON(DnsRecord, dnsRecord_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(VerificationStatus, verificationStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstanceDomainsResponseBodyModuleNextVerification& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsRecord, dnsRecord_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(VerificationStatus, verificationStatus_);
    };
    ListAppInstanceDomainsResponseBodyModuleNextVerification() = default ;
    ListAppInstanceDomainsResponseBodyModuleNextVerification(const ListAppInstanceDomainsResponseBodyModuleNextVerification &) = default ;
    ListAppInstanceDomainsResponseBodyModuleNextVerification(ListAppInstanceDomainsResponseBodyModuleNextVerification &&) = default ;
    ListAppInstanceDomainsResponseBodyModuleNextVerification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstanceDomainsResponseBodyModuleNextVerification() = default ;
    ListAppInstanceDomainsResponseBodyModuleNextVerification& operator=(const ListAppInstanceDomainsResponseBodyModuleNextVerification &) = default ;
    ListAppInstanceDomainsResponseBodyModuleNextVerification& operator=(ListAppInstanceDomainsResponseBodyModuleNextVerification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dnsRecord_ != nullptr
        && this->errorMsg_ != nullptr && this->verificationStatus_ != nullptr; };
    // dnsRecord Field Functions 
    bool hasDnsRecord() const { return this->dnsRecord_ != nullptr;};
    void deleteDnsRecord() { this->dnsRecord_ = nullptr;};
    inline const Models::ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord & dnsRecord() const { DARABONBA_PTR_GET_CONST(dnsRecord_, Models::ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord) };
    inline Models::ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord dnsRecord() { DARABONBA_PTR_GET(dnsRecord_, Models::ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord) };
    inline ListAppInstanceDomainsResponseBodyModuleNextVerification& setDnsRecord(const Models::ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord & dnsRecord) { DARABONBA_PTR_SET_VALUE(dnsRecord_, dnsRecord) };
    inline ListAppInstanceDomainsResponseBodyModuleNextVerification& setDnsRecord(Models::ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord && dnsRecord) { DARABONBA_PTR_SET_RVALUE(dnsRecord_, dnsRecord) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleNextVerification& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // verificationStatus Field Functions 
    bool hasVerificationStatus() const { return this->verificationStatus_ != nullptr;};
    void deleteVerificationStatus() { this->verificationStatus_ = nullptr;};
    inline string verificationStatus() const { DARABONBA_PTR_GET_DEFAULT(verificationStatus_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleNextVerification& setVerificationStatus(string verificationStatus) { DARABONBA_PTR_SET_VALUE(verificationStatus_, verificationStatus) };


  protected:
    std::shared_ptr<Models::ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord> dnsRecord_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> verificationStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
