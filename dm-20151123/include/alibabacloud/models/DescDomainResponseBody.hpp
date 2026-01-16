// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DescDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CnameAuthStatus, cnameAuthStatus_);
      DARABONBA_PTR_TO_JSON(CnameConfirmStatus, cnameConfirmStatus_);
      DARABONBA_PTR_TO_JSON(CnameRecord, cnameRecord_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DefaultDomain, defaultDomain_);
      DARABONBA_PTR_TO_JSON(DkimAuthStatus, dkimAuthStatus_);
      DARABONBA_PTR_TO_JSON(DkimPublicKey, dkimPublicKey_);
      DARABONBA_PTR_TO_JSON(DkimRR, dkimRR_);
      DARABONBA_PTR_TO_JSON(DkimRsaLength, dkimRsaLength_);
      DARABONBA_PTR_TO_JSON(DmarcAuthStatus, dmarcAuthStatus_);
      DARABONBA_PTR_TO_JSON(DmarcHostRecord, dmarcHostRecord_);
      DARABONBA_PTR_TO_JSON(DmarcRecord, dmarcRecord_);
      DARABONBA_PTR_TO_JSON(DnsDmarc, dnsDmarc_);
      DARABONBA_PTR_TO_JSON(DnsMx, dnsMx_);
      DARABONBA_PTR_TO_JSON(DnsSpf, dnsSpf_);
      DARABONBA_PTR_TO_JSON(DnsTxt, dnsTxt_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(HostRecord, hostRecord_);
      DARABONBA_PTR_TO_JSON(IcpStatus, icpStatus_);
      DARABONBA_PTR_TO_JSON(MxAuthStatus, mxAuthStatus_);
      DARABONBA_PTR_TO_JSON(MxRecord, mxRecord_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpfAuthStatus, spfAuthStatus_);
      DARABONBA_PTR_TO_JSON(SpfRecord, spfRecord_);
      DARABONBA_PTR_TO_JSON(SpfRecordV2, spfRecordV2_);
      DARABONBA_PTR_TO_JSON(TlDomainName, tlDomainName_);
      DARABONBA_PTR_TO_JSON(TracefRecord, tracefRecord_);
    };
    friend void from_json(const Darabonba::Json& j, DescDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CnameAuthStatus, cnameAuthStatus_);
      DARABONBA_PTR_FROM_JSON(CnameConfirmStatus, cnameConfirmStatus_);
      DARABONBA_PTR_FROM_JSON(CnameRecord, cnameRecord_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DefaultDomain, defaultDomain_);
      DARABONBA_PTR_FROM_JSON(DkimAuthStatus, dkimAuthStatus_);
      DARABONBA_PTR_FROM_JSON(DkimPublicKey, dkimPublicKey_);
      DARABONBA_PTR_FROM_JSON(DkimRR, dkimRR_);
      DARABONBA_PTR_FROM_JSON(DkimRsaLength, dkimRsaLength_);
      DARABONBA_PTR_FROM_JSON(DmarcAuthStatus, dmarcAuthStatus_);
      DARABONBA_PTR_FROM_JSON(DmarcHostRecord, dmarcHostRecord_);
      DARABONBA_PTR_FROM_JSON(DmarcRecord, dmarcRecord_);
      DARABONBA_PTR_FROM_JSON(DnsDmarc, dnsDmarc_);
      DARABONBA_PTR_FROM_JSON(DnsMx, dnsMx_);
      DARABONBA_PTR_FROM_JSON(DnsSpf, dnsSpf_);
      DARABONBA_PTR_FROM_JSON(DnsTxt, dnsTxt_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(HostRecord, hostRecord_);
      DARABONBA_PTR_FROM_JSON(IcpStatus, icpStatus_);
      DARABONBA_PTR_FROM_JSON(MxAuthStatus, mxAuthStatus_);
      DARABONBA_PTR_FROM_JSON(MxRecord, mxRecord_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpfAuthStatus, spfAuthStatus_);
      DARABONBA_PTR_FROM_JSON(SpfRecord, spfRecord_);
      DARABONBA_PTR_FROM_JSON(SpfRecordV2, spfRecordV2_);
      DARABONBA_PTR_FROM_JSON(TlDomainName, tlDomainName_);
      DARABONBA_PTR_FROM_JSON(TracefRecord, tracefRecord_);
    };
    DescDomainResponseBody() = default ;
    DescDomainResponseBody(const DescDomainResponseBody &) = default ;
    DescDomainResponseBody(DescDomainResponseBody &&) = default ;
    DescDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescDomainResponseBody() = default ;
    DescDomainResponseBody& operator=(const DescDomainResponseBody &) = default ;
    DescDomainResponseBody& operator=(DescDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cnameAuthStatus_ == nullptr
        && this->cnameConfirmStatus_ == nullptr && this->cnameRecord_ == nullptr && this->createTime_ == nullptr && this->defaultDomain_ == nullptr && this->dkimAuthStatus_ == nullptr
        && this->dkimPublicKey_ == nullptr && this->dkimRR_ == nullptr && this->dkimRsaLength_ == nullptr && this->dmarcAuthStatus_ == nullptr && this->dmarcHostRecord_ == nullptr
        && this->dmarcRecord_ == nullptr && this->dnsDmarc_ == nullptr && this->dnsMx_ == nullptr && this->dnsSpf_ == nullptr && this->dnsTxt_ == nullptr
        && this->domainId_ == nullptr && this->domainName_ == nullptr && this->domainStatus_ == nullptr && this->domainType_ == nullptr && this->hostRecord_ == nullptr
        && this->icpStatus_ == nullptr && this->mxAuthStatus_ == nullptr && this->mxRecord_ == nullptr && this->requestId_ == nullptr && this->spfAuthStatus_ == nullptr
        && this->spfRecord_ == nullptr && this->spfRecordV2_ == nullptr && this->tlDomainName_ == nullptr && this->tracefRecord_ == nullptr; };
    // cnameAuthStatus Field Functions 
    bool hasCnameAuthStatus() const { return this->cnameAuthStatus_ != nullptr;};
    void deleteCnameAuthStatus() { this->cnameAuthStatus_ = nullptr;};
    inline string getCnameAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(cnameAuthStatus_, "") };
    inline DescDomainResponseBody& setCnameAuthStatus(string cnameAuthStatus) { DARABONBA_PTR_SET_VALUE(cnameAuthStatus_, cnameAuthStatus) };


    // cnameConfirmStatus Field Functions 
    bool hasCnameConfirmStatus() const { return this->cnameConfirmStatus_ != nullptr;};
    void deleteCnameConfirmStatus() { this->cnameConfirmStatus_ = nullptr;};
    inline string getCnameConfirmStatus() const { DARABONBA_PTR_GET_DEFAULT(cnameConfirmStatus_, "") };
    inline DescDomainResponseBody& setCnameConfirmStatus(string cnameConfirmStatus) { DARABONBA_PTR_SET_VALUE(cnameConfirmStatus_, cnameConfirmStatus) };


    // cnameRecord Field Functions 
    bool hasCnameRecord() const { return this->cnameRecord_ != nullptr;};
    void deleteCnameRecord() { this->cnameRecord_ = nullptr;};
    inline string getCnameRecord() const { DARABONBA_PTR_GET_DEFAULT(cnameRecord_, "") };
    inline DescDomainResponseBody& setCnameRecord(string cnameRecord) { DARABONBA_PTR_SET_VALUE(cnameRecord_, cnameRecord) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescDomainResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultDomain Field Functions 
    bool hasDefaultDomain() const { return this->defaultDomain_ != nullptr;};
    void deleteDefaultDomain() { this->defaultDomain_ = nullptr;};
    inline string getDefaultDomain() const { DARABONBA_PTR_GET_DEFAULT(defaultDomain_, "") };
    inline DescDomainResponseBody& setDefaultDomain(string defaultDomain) { DARABONBA_PTR_SET_VALUE(defaultDomain_, defaultDomain) };


    // dkimAuthStatus Field Functions 
    bool hasDkimAuthStatus() const { return this->dkimAuthStatus_ != nullptr;};
    void deleteDkimAuthStatus() { this->dkimAuthStatus_ = nullptr;};
    inline string getDkimAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(dkimAuthStatus_, "") };
    inline DescDomainResponseBody& setDkimAuthStatus(string dkimAuthStatus) { DARABONBA_PTR_SET_VALUE(dkimAuthStatus_, dkimAuthStatus) };


    // dkimPublicKey Field Functions 
    bool hasDkimPublicKey() const { return this->dkimPublicKey_ != nullptr;};
    void deleteDkimPublicKey() { this->dkimPublicKey_ = nullptr;};
    inline string getDkimPublicKey() const { DARABONBA_PTR_GET_DEFAULT(dkimPublicKey_, "") };
    inline DescDomainResponseBody& setDkimPublicKey(string dkimPublicKey) { DARABONBA_PTR_SET_VALUE(dkimPublicKey_, dkimPublicKey) };


    // dkimRR Field Functions 
    bool hasDkimRR() const { return this->dkimRR_ != nullptr;};
    void deleteDkimRR() { this->dkimRR_ = nullptr;};
    inline string getDkimRR() const { DARABONBA_PTR_GET_DEFAULT(dkimRR_, "") };
    inline DescDomainResponseBody& setDkimRR(string dkimRR) { DARABONBA_PTR_SET_VALUE(dkimRR_, dkimRR) };


    // dkimRsaLength Field Functions 
    bool hasDkimRsaLength() const { return this->dkimRsaLength_ != nullptr;};
    void deleteDkimRsaLength() { this->dkimRsaLength_ = nullptr;};
    inline int32_t getDkimRsaLength() const { DARABONBA_PTR_GET_DEFAULT(dkimRsaLength_, 0) };
    inline DescDomainResponseBody& setDkimRsaLength(int32_t dkimRsaLength) { DARABONBA_PTR_SET_VALUE(dkimRsaLength_, dkimRsaLength) };


    // dmarcAuthStatus Field Functions 
    bool hasDmarcAuthStatus() const { return this->dmarcAuthStatus_ != nullptr;};
    void deleteDmarcAuthStatus() { this->dmarcAuthStatus_ = nullptr;};
    inline int32_t getDmarcAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(dmarcAuthStatus_, 0) };
    inline DescDomainResponseBody& setDmarcAuthStatus(int32_t dmarcAuthStatus) { DARABONBA_PTR_SET_VALUE(dmarcAuthStatus_, dmarcAuthStatus) };


    // dmarcHostRecord Field Functions 
    bool hasDmarcHostRecord() const { return this->dmarcHostRecord_ != nullptr;};
    void deleteDmarcHostRecord() { this->dmarcHostRecord_ = nullptr;};
    inline string getDmarcHostRecord() const { DARABONBA_PTR_GET_DEFAULT(dmarcHostRecord_, "") };
    inline DescDomainResponseBody& setDmarcHostRecord(string dmarcHostRecord) { DARABONBA_PTR_SET_VALUE(dmarcHostRecord_, dmarcHostRecord) };


    // dmarcRecord Field Functions 
    bool hasDmarcRecord() const { return this->dmarcRecord_ != nullptr;};
    void deleteDmarcRecord() { this->dmarcRecord_ = nullptr;};
    inline string getDmarcRecord() const { DARABONBA_PTR_GET_DEFAULT(dmarcRecord_, "") };
    inline DescDomainResponseBody& setDmarcRecord(string dmarcRecord) { DARABONBA_PTR_SET_VALUE(dmarcRecord_, dmarcRecord) };


    // dnsDmarc Field Functions 
    bool hasDnsDmarc() const { return this->dnsDmarc_ != nullptr;};
    void deleteDnsDmarc() { this->dnsDmarc_ = nullptr;};
    inline string getDnsDmarc() const { DARABONBA_PTR_GET_DEFAULT(dnsDmarc_, "") };
    inline DescDomainResponseBody& setDnsDmarc(string dnsDmarc) { DARABONBA_PTR_SET_VALUE(dnsDmarc_, dnsDmarc) };


    // dnsMx Field Functions 
    bool hasDnsMx() const { return this->dnsMx_ != nullptr;};
    void deleteDnsMx() { this->dnsMx_ = nullptr;};
    inline string getDnsMx() const { DARABONBA_PTR_GET_DEFAULT(dnsMx_, "") };
    inline DescDomainResponseBody& setDnsMx(string dnsMx) { DARABONBA_PTR_SET_VALUE(dnsMx_, dnsMx) };


    // dnsSpf Field Functions 
    bool hasDnsSpf() const { return this->dnsSpf_ != nullptr;};
    void deleteDnsSpf() { this->dnsSpf_ = nullptr;};
    inline string getDnsSpf() const { DARABONBA_PTR_GET_DEFAULT(dnsSpf_, "") };
    inline DescDomainResponseBody& setDnsSpf(string dnsSpf) { DARABONBA_PTR_SET_VALUE(dnsSpf_, dnsSpf) };


    // dnsTxt Field Functions 
    bool hasDnsTxt() const { return this->dnsTxt_ != nullptr;};
    void deleteDnsTxt() { this->dnsTxt_ = nullptr;};
    inline string getDnsTxt() const { DARABONBA_PTR_GET_DEFAULT(dnsTxt_, "") };
    inline DescDomainResponseBody& setDnsTxt(string dnsTxt) { DARABONBA_PTR_SET_VALUE(dnsTxt_, dnsTxt) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline DescDomainResponseBody& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescDomainResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string getDomainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline DescDomainResponseBody& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline DescDomainResponseBody& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // hostRecord Field Functions 
    bool hasHostRecord() const { return this->hostRecord_ != nullptr;};
    void deleteHostRecord() { this->hostRecord_ = nullptr;};
    inline string getHostRecord() const { DARABONBA_PTR_GET_DEFAULT(hostRecord_, "") };
    inline DescDomainResponseBody& setHostRecord(string hostRecord) { DARABONBA_PTR_SET_VALUE(hostRecord_, hostRecord) };


    // icpStatus Field Functions 
    bool hasIcpStatus() const { return this->icpStatus_ != nullptr;};
    void deleteIcpStatus() { this->icpStatus_ = nullptr;};
    inline string getIcpStatus() const { DARABONBA_PTR_GET_DEFAULT(icpStatus_, "") };
    inline DescDomainResponseBody& setIcpStatus(string icpStatus) { DARABONBA_PTR_SET_VALUE(icpStatus_, icpStatus) };


    // mxAuthStatus Field Functions 
    bool hasMxAuthStatus() const { return this->mxAuthStatus_ != nullptr;};
    void deleteMxAuthStatus() { this->mxAuthStatus_ = nullptr;};
    inline string getMxAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(mxAuthStatus_, "") };
    inline DescDomainResponseBody& setMxAuthStatus(string mxAuthStatus) { DARABONBA_PTR_SET_VALUE(mxAuthStatus_, mxAuthStatus) };


    // mxRecord Field Functions 
    bool hasMxRecord() const { return this->mxRecord_ != nullptr;};
    void deleteMxRecord() { this->mxRecord_ = nullptr;};
    inline string getMxRecord() const { DARABONBA_PTR_GET_DEFAULT(mxRecord_, "") };
    inline DescDomainResponseBody& setMxRecord(string mxRecord) { DARABONBA_PTR_SET_VALUE(mxRecord_, mxRecord) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spfAuthStatus Field Functions 
    bool hasSpfAuthStatus() const { return this->spfAuthStatus_ != nullptr;};
    void deleteSpfAuthStatus() { this->spfAuthStatus_ = nullptr;};
    inline string getSpfAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(spfAuthStatus_, "") };
    inline DescDomainResponseBody& setSpfAuthStatus(string spfAuthStatus) { DARABONBA_PTR_SET_VALUE(spfAuthStatus_, spfAuthStatus) };


    // spfRecord Field Functions 
    bool hasSpfRecord() const { return this->spfRecord_ != nullptr;};
    void deleteSpfRecord() { this->spfRecord_ = nullptr;};
    inline string getSpfRecord() const { DARABONBA_PTR_GET_DEFAULT(spfRecord_, "") };
    inline DescDomainResponseBody& setSpfRecord(string spfRecord) { DARABONBA_PTR_SET_VALUE(spfRecord_, spfRecord) };


    // spfRecordV2 Field Functions 
    bool hasSpfRecordV2() const { return this->spfRecordV2_ != nullptr;};
    void deleteSpfRecordV2() { this->spfRecordV2_ = nullptr;};
    inline string getSpfRecordV2() const { DARABONBA_PTR_GET_DEFAULT(spfRecordV2_, "") };
    inline DescDomainResponseBody& setSpfRecordV2(string spfRecordV2) { DARABONBA_PTR_SET_VALUE(spfRecordV2_, spfRecordV2) };


    // tlDomainName Field Functions 
    bool hasTlDomainName() const { return this->tlDomainName_ != nullptr;};
    void deleteTlDomainName() { this->tlDomainName_ = nullptr;};
    inline string getTlDomainName() const { DARABONBA_PTR_GET_DEFAULT(tlDomainName_, "") };
    inline DescDomainResponseBody& setTlDomainName(string tlDomainName) { DARABONBA_PTR_SET_VALUE(tlDomainName_, tlDomainName) };


    // tracefRecord Field Functions 
    bool hasTracefRecord() const { return this->tracefRecord_ != nullptr;};
    void deleteTracefRecord() { this->tracefRecord_ = nullptr;};
    inline string getTracefRecord() const { DARABONBA_PTR_GET_DEFAULT(tracefRecord_, "") };
    inline DescDomainResponseBody& setTracefRecord(string tracefRecord) { DARABONBA_PTR_SET_VALUE(tracefRecord_, tracefRecord) };


  protected:
    // CNAME verification flag, 0 for success, 1 for failure.
    shared_ptr<string> cnameAuthStatus_ {};
    // Indicates whether the CNAME host record has been modified, 1 for modified (reverting to the original value also counts as modification), 0 for not modified.
    shared_ptr<string> cnameConfirmStatus_ {};
    // Custom part of the CNAME host record
    shared_ptr<string> cnameRecord_ {};
    // Creation time
    shared_ptr<string> createTime_ {};
    // Whether it is the default domain,
    // 
    // Value: 0 No (this field is deprecated)
    shared_ptr<string> defaultDomain_ {};
    // DKIM verification flag, indicating whether the DKIM record set by the user in DNS has passed validation, 0: Passed, 1: Not passed
    shared_ptr<string> dkimAuthStatus_ {};
    // DKIM public key value, the value that users need to set for the DKIM record in DNS
    shared_ptr<string> dkimPublicKey_ {};
    // DKIM host record, the key that the user needs to set in the DNS for the DKIM record
    shared_ptr<string> dkimRR_ {};
    shared_ptr<int32_t> dkimRsaLength_ {};
    // DMARC verification flag, indicating whether the DMARC record set by the user in DNS has passed validation, 0: Passed, 1: Not passed
    shared_ptr<int32_t> dmarcAuthStatus_ {};
    // DMARC host record value
    shared_ptr<string> dmarcHostRecord_ {};
    // DMARC record value
    shared_ptr<string> dmarcRecord_ {};
    // DMARC record value resolved through the public domain name
    shared_ptr<string> dnsDmarc_ {};
    // MX record value resolved from the public network domain
    shared_ptr<string> dnsMx_ {};
    // SPF record value resolved from the public network domain
    shared_ptr<string> dnsSpf_ {};
    // Ownership record value resolved from the public network domain
    shared_ptr<string> dnsTxt_ {};
    // Domain ID
    shared_ptr<string> domainId_ {};
    // Domain name
    shared_ptr<string> domainName_ {};
    // Domain status. Indicates whether the verification was successful, with values:
    // 
    // - **0**: Available, verified successfully
    // - **1**: Unavailable, verification failed
    shared_ptr<string> domainStatus_ {};
    // Ownership record provided by the email push console
    shared_ptr<string> domainType_ {};
    // Host record
    shared_ptr<string> hostRecord_ {};
    // Filing status. **1** indicates filed, **0** indicates not filed.
    shared_ptr<string> icpStatus_ {};
    // MX verification flag, 0 for success, 1 for failure.
    shared_ptr<string> mxAuthStatus_ {};
    // MX record value provided by the email push console
    shared_ptr<string> mxRecord_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // SPF verification flag, 0 for success, 1 for failure.
    shared_ptr<string> spfAuthStatus_ {};
    // SPF record value provided by the email push console
    shared_ptr<string> spfRecord_ {};
    // SPF record. Previously, the SPF display content needed to be calculated by the calling end based on the spfRecord in the response. The new field spfRecordV2 replaces spfRecord, and the calling end can directly display this field after obtaining it;
    shared_ptr<string> spfRecordV2_ {};
    // Primary domain
    shared_ptr<string> tlDomainName_ {};
    // CNAME record value provided by the email push console
    shared_ptr<string> tracefRecord_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
