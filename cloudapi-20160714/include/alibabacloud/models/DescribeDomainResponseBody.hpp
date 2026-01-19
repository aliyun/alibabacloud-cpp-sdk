// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateBody, certificateBody_);
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_TO_JSON(CertificatePrivateKey, certificatePrivateKey_);
      DARABONBA_PTR_TO_JSON(CertificateValidEnd, certificateValidEnd_);
      DARABONBA_PTR_TO_JSON(CertificateValidStart, certificateValidStart_);
      DARABONBA_PTR_TO_JSON(DomainBindingStatus, domainBindingStatus_);
      DARABONBA_PTR_TO_JSON(DomainCNAMEStatus, domainCNAMEStatus_);
      DARABONBA_PTR_TO_JSON(DomainLegalStatus, domainLegalStatus_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainRemark, domainRemark_);
      DARABONBA_PTR_TO_JSON(DomainWebSocketStatus, domainWebSocketStatus_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateBody, certificateBody_);
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_FROM_JSON(CertificatePrivateKey, certificatePrivateKey_);
      DARABONBA_PTR_FROM_JSON(CertificateValidEnd, certificateValidEnd_);
      DARABONBA_PTR_FROM_JSON(CertificateValidStart, certificateValidStart_);
      DARABONBA_PTR_FROM_JSON(DomainBindingStatus, domainBindingStatus_);
      DARABONBA_PTR_FROM_JSON(DomainCNAMEStatus, domainCNAMEStatus_);
      DARABONBA_PTR_FROM_JSON(DomainLegalStatus, domainLegalStatus_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainRemark, domainRemark_);
      DARABONBA_PTR_FROM_JSON(DomainWebSocketStatus, domainWebSocketStatus_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
    };
    DescribeDomainResponseBody() = default ;
    DescribeDomainResponseBody(const DescribeDomainResponseBody &) = default ;
    DescribeDomainResponseBody(DescribeDomainResponseBody &&) = default ;
    DescribeDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainResponseBody() = default ;
    DescribeDomainResponseBody& operator=(const DescribeDomainResponseBody &) = default ;
    DescribeDomainResponseBody& operator=(DescribeDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateBody_ == nullptr
        && this->certificateId_ == nullptr && this->certificateName_ == nullptr && this->certificatePrivateKey_ == nullptr && this->certificateValidEnd_ == nullptr && this->certificateValidStart_ == nullptr
        && this->domainBindingStatus_ == nullptr && this->domainCNAMEStatus_ == nullptr && this->domainLegalStatus_ == nullptr && this->domainName_ == nullptr && this->domainRemark_ == nullptr
        && this->domainWebSocketStatus_ == nullptr && this->groupId_ == nullptr && this->requestId_ == nullptr && this->subDomain_ == nullptr; };
    // certificateBody Field Functions 
    bool hasCertificateBody() const { return this->certificateBody_ != nullptr;};
    void deleteCertificateBody() { this->certificateBody_ = nullptr;};
    inline string getCertificateBody() const { DARABONBA_PTR_GET_DEFAULT(certificateBody_, "") };
    inline DescribeDomainResponseBody& setCertificateBody(string certificateBody) { DARABONBA_PTR_SET_VALUE(certificateBody_, certificateBody) };


    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline DescribeDomainResponseBody& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // certificateName Field Functions 
    bool hasCertificateName() const { return this->certificateName_ != nullptr;};
    void deleteCertificateName() { this->certificateName_ = nullptr;};
    inline string getCertificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
    inline DescribeDomainResponseBody& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


    // certificatePrivateKey Field Functions 
    bool hasCertificatePrivateKey() const { return this->certificatePrivateKey_ != nullptr;};
    void deleteCertificatePrivateKey() { this->certificatePrivateKey_ = nullptr;};
    inline string getCertificatePrivateKey() const { DARABONBA_PTR_GET_DEFAULT(certificatePrivateKey_, "") };
    inline DescribeDomainResponseBody& setCertificatePrivateKey(string certificatePrivateKey) { DARABONBA_PTR_SET_VALUE(certificatePrivateKey_, certificatePrivateKey) };


    // certificateValidEnd Field Functions 
    bool hasCertificateValidEnd() const { return this->certificateValidEnd_ != nullptr;};
    void deleteCertificateValidEnd() { this->certificateValidEnd_ = nullptr;};
    inline int64_t getCertificateValidEnd() const { DARABONBA_PTR_GET_DEFAULT(certificateValidEnd_, 0L) };
    inline DescribeDomainResponseBody& setCertificateValidEnd(int64_t certificateValidEnd) { DARABONBA_PTR_SET_VALUE(certificateValidEnd_, certificateValidEnd) };


    // certificateValidStart Field Functions 
    bool hasCertificateValidStart() const { return this->certificateValidStart_ != nullptr;};
    void deleteCertificateValidStart() { this->certificateValidStart_ = nullptr;};
    inline int64_t getCertificateValidStart() const { DARABONBA_PTR_GET_DEFAULT(certificateValidStart_, 0L) };
    inline DescribeDomainResponseBody& setCertificateValidStart(int64_t certificateValidStart) { DARABONBA_PTR_SET_VALUE(certificateValidStart_, certificateValidStart) };


    // domainBindingStatus Field Functions 
    bool hasDomainBindingStatus() const { return this->domainBindingStatus_ != nullptr;};
    void deleteDomainBindingStatus() { this->domainBindingStatus_ = nullptr;};
    inline string getDomainBindingStatus() const { DARABONBA_PTR_GET_DEFAULT(domainBindingStatus_, "") };
    inline DescribeDomainResponseBody& setDomainBindingStatus(string domainBindingStatus) { DARABONBA_PTR_SET_VALUE(domainBindingStatus_, domainBindingStatus) };


    // domainCNAMEStatus Field Functions 
    bool hasDomainCNAMEStatus() const { return this->domainCNAMEStatus_ != nullptr;};
    void deleteDomainCNAMEStatus() { this->domainCNAMEStatus_ = nullptr;};
    inline string getDomainCNAMEStatus() const { DARABONBA_PTR_GET_DEFAULT(domainCNAMEStatus_, "") };
    inline DescribeDomainResponseBody& setDomainCNAMEStatus(string domainCNAMEStatus) { DARABONBA_PTR_SET_VALUE(domainCNAMEStatus_, domainCNAMEStatus) };


    // domainLegalStatus Field Functions 
    bool hasDomainLegalStatus() const { return this->domainLegalStatus_ != nullptr;};
    void deleteDomainLegalStatus() { this->domainLegalStatus_ = nullptr;};
    inline string getDomainLegalStatus() const { DARABONBA_PTR_GET_DEFAULT(domainLegalStatus_, "") };
    inline DescribeDomainResponseBody& setDomainLegalStatus(string domainLegalStatus) { DARABONBA_PTR_SET_VALUE(domainLegalStatus_, domainLegalStatus) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainRemark Field Functions 
    bool hasDomainRemark() const { return this->domainRemark_ != nullptr;};
    void deleteDomainRemark() { this->domainRemark_ = nullptr;};
    inline string getDomainRemark() const { DARABONBA_PTR_GET_DEFAULT(domainRemark_, "") };
    inline DescribeDomainResponseBody& setDomainRemark(string domainRemark) { DARABONBA_PTR_SET_VALUE(domainRemark_, domainRemark) };


    // domainWebSocketStatus Field Functions 
    bool hasDomainWebSocketStatus() const { return this->domainWebSocketStatus_ != nullptr;};
    void deleteDomainWebSocketStatus() { this->domainWebSocketStatus_ = nullptr;};
    inline string getDomainWebSocketStatus() const { DARABONBA_PTR_GET_DEFAULT(domainWebSocketStatus_, "") };
    inline DescribeDomainResponseBody& setDomainWebSocketStatus(string domainWebSocketStatus) { DARABONBA_PTR_SET_VALUE(domainWebSocketStatus_, domainWebSocketStatus) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDomainResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string getSubDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline DescribeDomainResponseBody& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


  protected:
    // The content of the certificate.
    shared_ptr<string> certificateBody_ {};
    // The unique ID of the SSL certificate, which is automatically generated by the system.
    shared_ptr<string> certificateId_ {};
    // The name of the SSL certificate.
    shared_ptr<string> certificateName_ {};
    // The private key of the SSL certificate.
    shared_ptr<string> certificatePrivateKey_ {};
    // 证书失效时间戳（毫秒）
    shared_ptr<int64_t> certificateValidEnd_ {};
    // 证书生效时间戳（毫秒）
    shared_ptr<int64_t> certificateValidStart_ {};
    // The binding status of the custom domain name. Valid values:
    // 
    // *   BINDING: The domain name has been bound.
    // *   BOUND: The domain name has not been bound.
    shared_ptr<string> domainBindingStatus_ {};
    // The domain name resolution status. Valid values:
    // 
    // *   RESOLVED: The domain name has been resolved.
    // *   UNRESOLVED: The domain name has not been resolved.
    shared_ptr<string> domainCNAMEStatus_ {};
    // The validity status of the domain name. Valid values:
    // 
    // *   NORMAL
    // *   ABNORMAL: This status affects API calls and must be resolved as soon as possible.
    shared_ptr<string> domainLegalStatus_ {};
    // The custom domain name.
    shared_ptr<string> domainName_ {};
    // Remarks about the domain name, such as the cause of an exception.
    shared_ptr<string> domainRemark_ {};
    // The status of the domain name that uses WebSocket.
    shared_ptr<string> domainWebSocketStatus_ {};
    // The ID of the API group. This ID is generated by the system and globally unique.
    shared_ptr<string> groupId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The second-level domain name that is automatically assigned to the API group.
    shared_ptr<string> subDomain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
