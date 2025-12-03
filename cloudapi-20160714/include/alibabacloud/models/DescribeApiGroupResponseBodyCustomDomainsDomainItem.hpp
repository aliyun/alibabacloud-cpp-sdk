// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPRESPONSEBODYCUSTOMDOMAINSDOMAINITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPRESPONSEBODYCUSTOMDOMAINSDOMAINITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiGroupResponseBodyCustomDomainsDomainItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiGroupResponseBodyCustomDomainsDomainItem& obj) { 
      DARABONBA_PTR_TO_JSON(BindStageAlias, bindStageAlias_);
      DARABONBA_PTR_TO_JSON(BindStageName, bindStageName_);
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_TO_JSON(CertificateValidEnd, certificateValidEnd_);
      DARABONBA_PTR_TO_JSON(CertificateValidStart, certificateValidStart_);
      DARABONBA_PTR_TO_JSON(CustomDomainType, customDomainType_);
      DARABONBA_PTR_TO_JSON(DomainBindingStatus, domainBindingStatus_);
      DARABONBA_PTR_TO_JSON(DomainCNAMEStatus, domainCNAMEStatus_);
      DARABONBA_PTR_TO_JSON(DomainLegalStatus, domainLegalStatus_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainRemark, domainRemark_);
      DARABONBA_PTR_TO_JSON(DomainWebSocketStatus, domainWebSocketStatus_);
      DARABONBA_PTR_TO_JSON(IsHttpRedirectToHttps, isHttpRedirectToHttps_);
      DARABONBA_PTR_TO_JSON(WildcardDomainPatterns, wildcardDomainPatterns_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiGroupResponseBodyCustomDomainsDomainItem& obj) { 
      DARABONBA_PTR_FROM_JSON(BindStageAlias, bindStageAlias_);
      DARABONBA_PTR_FROM_JSON(BindStageName, bindStageName_);
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_FROM_JSON(CertificateValidEnd, certificateValidEnd_);
      DARABONBA_PTR_FROM_JSON(CertificateValidStart, certificateValidStart_);
      DARABONBA_PTR_FROM_JSON(CustomDomainType, customDomainType_);
      DARABONBA_PTR_FROM_JSON(DomainBindingStatus, domainBindingStatus_);
      DARABONBA_PTR_FROM_JSON(DomainCNAMEStatus, domainCNAMEStatus_);
      DARABONBA_PTR_FROM_JSON(DomainLegalStatus, domainLegalStatus_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainRemark, domainRemark_);
      DARABONBA_PTR_FROM_JSON(DomainWebSocketStatus, domainWebSocketStatus_);
      DARABONBA_PTR_FROM_JSON(IsHttpRedirectToHttps, isHttpRedirectToHttps_);
      DARABONBA_PTR_FROM_JSON(WildcardDomainPatterns, wildcardDomainPatterns_);
    };
    DescribeApiGroupResponseBodyCustomDomainsDomainItem() = default ;
    DescribeApiGroupResponseBodyCustomDomainsDomainItem(const DescribeApiGroupResponseBodyCustomDomainsDomainItem &) = default ;
    DescribeApiGroupResponseBodyCustomDomainsDomainItem(DescribeApiGroupResponseBodyCustomDomainsDomainItem &&) = default ;
    DescribeApiGroupResponseBodyCustomDomainsDomainItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiGroupResponseBodyCustomDomainsDomainItem() = default ;
    DescribeApiGroupResponseBodyCustomDomainsDomainItem& operator=(const DescribeApiGroupResponseBodyCustomDomainsDomainItem &) = default ;
    DescribeApiGroupResponseBodyCustomDomainsDomainItem& operator=(DescribeApiGroupResponseBodyCustomDomainsDomainItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindStageAlias_ == nullptr
        && return this->bindStageName_ == nullptr && return this->certificateId_ == nullptr && return this->certificateName_ == nullptr && return this->certificateValidEnd_ == nullptr && return this->certificateValidStart_ == nullptr
        && return this->customDomainType_ == nullptr && return this->domainBindingStatus_ == nullptr && return this->domainCNAMEStatus_ == nullptr && return this->domainLegalStatus_ == nullptr && return this->domainName_ == nullptr
        && return this->domainRemark_ == nullptr && return this->domainWebSocketStatus_ == nullptr && return this->isHttpRedirectToHttps_ == nullptr && return this->wildcardDomainPatterns_ == nullptr; };
    // bindStageAlias Field Functions 
    bool hasBindStageAlias() const { return this->bindStageAlias_ != nullptr;};
    void deleteBindStageAlias() { this->bindStageAlias_ = nullptr;};
    inline string bindStageAlias() const { DARABONBA_PTR_GET_DEFAULT(bindStageAlias_, "") };
    inline DescribeApiGroupResponseBodyCustomDomainsDomainItem& setBindStageAlias(string bindStageAlias) { DARABONBA_PTR_SET_VALUE(bindStageAlias_, bindStageAlias) };


    // bindStageName Field Functions 
    bool hasBindStageName() const { return this->bindStageName_ != nullptr;};
    void deleteBindStageName() { this->bindStageName_ = nullptr;};
    inline string bindStageName() const { DARABONBA_PTR_GET_DEFAULT(bindStageName_, "") };
    inline DescribeApiGroupResponseBodyCustomDomainsDomainItem& setBindStageName(string bindStageName) { DARABONBA_PTR_SET_VALUE(bindStageName_, bindStageName) };


    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline DescribeApiGroupResponseBodyCustomDomainsDomainItem& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // certificateName Field Functions 
    bool hasCertificateName() const { return this->certificateName_ != nullptr;};
    void deleteCertificateName() { this->certificateName_ = nullptr;};
    inline string certificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
    inline DescribeApiGroupResponseBodyCustomDomainsDomainItem& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


    // certificateValidEnd Field Functions 
    bool hasCertificateValidEnd() const { return this->certificateValidEnd_ != nullptr;};
    void deleteCertificateValidEnd() { this->certificateValidEnd_ = nullptr;};
    inline int64_t certificateValidEnd() const { DARABONBA_PTR_GET_DEFAULT(certificateValidEnd_, 0L) };
    inline DescribeApiGroupResponseBodyCustomDomainsDomainItem& setCertificateValidEnd(int64_t certificateValidEnd) { DARABONBA_PTR_SET_VALUE(certificateValidEnd_, certificateValidEnd) };


    // certificateValidStart Field Functions 
    bool hasCertificateValidStart() const { return this->certificateValidStart_ != nullptr;};
    void deleteCertificateValidStart() { this->certificateValidStart_ = nullptr;};
    inline int64_t certificateValidStart() const { DARABONBA_PTR_GET_DEFAULT(certificateValidStart_, 0L) };
    inline DescribeApiGroupResponseBodyCustomDomainsDomainItem& setCertificateValidStart(int64_t certificateValidStart) { DARABONBA_PTR_SET_VALUE(certificateValidStart_, certificateValidStart) };


    // customDomainType Field Functions 
    bool hasCustomDomainType() const { return this->customDomainType_ != nullptr;};
    void deleteCustomDomainType() { this->customDomainType_ = nullptr;};
    inline string customDomainType() const { DARABONBA_PTR_GET_DEFAULT(customDomainType_, "") };
    inline DescribeApiGroupResponseBodyCustomDomainsDomainItem& setCustomDomainType(string customDomainType) { DARABONBA_PTR_SET_VALUE(customDomainType_, customDomainType) };


    // domainBindingStatus Field Functions 
    bool hasDomainBindingStatus() const { return this->domainBindingStatus_ != nullptr;};
    void deleteDomainBindingStatus() { this->domainBindingStatus_ = nullptr;};
    inline string domainBindingStatus() const { DARABONBA_PTR_GET_DEFAULT(domainBindingStatus_, "") };
    inline DescribeApiGroupResponseBodyCustomDomainsDomainItem& setDomainBindingStatus(string domainBindingStatus) { DARABONBA_PTR_SET_VALUE(domainBindingStatus_, domainBindingStatus) };


    // domainCNAMEStatus Field Functions 
    bool hasDomainCNAMEStatus() const { return this->domainCNAMEStatus_ != nullptr;};
    void deleteDomainCNAMEStatus() { this->domainCNAMEStatus_ = nullptr;};
    inline string domainCNAMEStatus() const { DARABONBA_PTR_GET_DEFAULT(domainCNAMEStatus_, "") };
    inline DescribeApiGroupResponseBodyCustomDomainsDomainItem& setDomainCNAMEStatus(string domainCNAMEStatus) { DARABONBA_PTR_SET_VALUE(domainCNAMEStatus_, domainCNAMEStatus) };


    // domainLegalStatus Field Functions 
    bool hasDomainLegalStatus() const { return this->domainLegalStatus_ != nullptr;};
    void deleteDomainLegalStatus() { this->domainLegalStatus_ = nullptr;};
    inline string domainLegalStatus() const { DARABONBA_PTR_GET_DEFAULT(domainLegalStatus_, "") };
    inline DescribeApiGroupResponseBodyCustomDomainsDomainItem& setDomainLegalStatus(string domainLegalStatus) { DARABONBA_PTR_SET_VALUE(domainLegalStatus_, domainLegalStatus) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeApiGroupResponseBodyCustomDomainsDomainItem& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainRemark Field Functions 
    bool hasDomainRemark() const { return this->domainRemark_ != nullptr;};
    void deleteDomainRemark() { this->domainRemark_ = nullptr;};
    inline string domainRemark() const { DARABONBA_PTR_GET_DEFAULT(domainRemark_, "") };
    inline DescribeApiGroupResponseBodyCustomDomainsDomainItem& setDomainRemark(string domainRemark) { DARABONBA_PTR_SET_VALUE(domainRemark_, domainRemark) };


    // domainWebSocketStatus Field Functions 
    bool hasDomainWebSocketStatus() const { return this->domainWebSocketStatus_ != nullptr;};
    void deleteDomainWebSocketStatus() { this->domainWebSocketStatus_ = nullptr;};
    inline string domainWebSocketStatus() const { DARABONBA_PTR_GET_DEFAULT(domainWebSocketStatus_, "") };
    inline DescribeApiGroupResponseBodyCustomDomainsDomainItem& setDomainWebSocketStatus(string domainWebSocketStatus) { DARABONBA_PTR_SET_VALUE(domainWebSocketStatus_, domainWebSocketStatus) };


    // isHttpRedirectToHttps Field Functions 
    bool hasIsHttpRedirectToHttps() const { return this->isHttpRedirectToHttps_ != nullptr;};
    void deleteIsHttpRedirectToHttps() { this->isHttpRedirectToHttps_ = nullptr;};
    inline bool isHttpRedirectToHttps() const { DARABONBA_PTR_GET_DEFAULT(isHttpRedirectToHttps_, false) };
    inline DescribeApiGroupResponseBodyCustomDomainsDomainItem& setIsHttpRedirectToHttps(bool isHttpRedirectToHttps) { DARABONBA_PTR_SET_VALUE(isHttpRedirectToHttps_, isHttpRedirectToHttps) };


    // wildcardDomainPatterns Field Functions 
    bool hasWildcardDomainPatterns() const { return this->wildcardDomainPatterns_ != nullptr;};
    void deleteWildcardDomainPatterns() { this->wildcardDomainPatterns_ = nullptr;};
    inline string wildcardDomainPatterns() const { DARABONBA_PTR_GET_DEFAULT(wildcardDomainPatterns_, "") };
    inline DescribeApiGroupResponseBodyCustomDomainsDomainItem& setWildcardDomainPatterns(string wildcardDomainPatterns) { DARABONBA_PTR_SET_VALUE(wildcardDomainPatterns_, wildcardDomainPatterns) };


  protected:
    // The alias of the associated environment.
    std::shared_ptr<string> bindStageAlias_ = nullptr;
    // The environment in which the associated API group runs.
    std::shared_ptr<string> bindStageName_ = nullptr;
    // The SSL certificate ID, which is automatically generated by the system.
    std::shared_ptr<string> certificateId_ = nullptr;
    // The name of the SSL certificate.
    std::shared_ptr<string> certificateName_ = nullptr;
    // The time when the certificate expires.
    std::shared_ptr<int64_t> certificateValidEnd_ = nullptr;
    // The time when the certificate takes effect.
    std::shared_ptr<int64_t> certificateValidStart_ = nullptr;
    // The type of the custom domain name.
    std::shared_ptr<string> customDomainType_ = nullptr;
    // The binding status of the custom domain name. Valid values:
    // 
    // *   **BINDING**: The domain name is bound.
    // *   **BOUND**: The domain name is not bound.
    std::shared_ptr<string> domainBindingStatus_ = nullptr;
    // The domain name resolution status. Valid values:
    // 
    // *   **RESOLVED**
    // *   **UNRESOLVED**
    std::shared_ptr<string> domainCNAMEStatus_ = nullptr;
    // The validity status of the domain name. Valid values:
    // 
    // *   **NORMAL**: The domain name is valid.
    // *   **ABNORMAL**: The domain name is invalid. This status affects API calls and needs to be rectified as soon as possible.
    std::shared_ptr<string> domainLegalStatus_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // Remarks about the domain name, such as the cause of an exception.
    std::shared_ptr<string> domainRemark_ = nullptr;
    // The status of the domain that uses the WebSocket feature.
    std::shared_ptr<string> domainWebSocketStatus_ = nullptr;
    // Indicates whether to redirect HTTP requests to HTTPS.
    std::shared_ptr<bool> isHttpRedirectToHttps_ = nullptr;
    // The wildcard domain name mode.
    std::shared_ptr<string> wildcardDomainPatterns_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
