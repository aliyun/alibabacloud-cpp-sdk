// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINDETAILRESPONSEBODYDOMAINDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINDETAILRESPONSEBODYDOMAINDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainDetailResponseBodyDomainDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainDetailResponseBodyDomainDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(LiveDomainType, liveDomainType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_TO_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainDetailResponseBodyDomainDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(LiveDomainType, liveDomainType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_FROM_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    DescribeLiveDomainDetailResponseBodyDomainDetail() = default ;
    DescribeLiveDomainDetailResponseBodyDomainDetail(const DescribeLiveDomainDetailResponseBodyDomainDetail &) = default ;
    DescribeLiveDomainDetailResponseBodyDomainDetail(DescribeLiveDomainDetailResponseBodyDomainDetail &&) = default ;
    DescribeLiveDomainDetailResponseBodyDomainDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainDetailResponseBodyDomainDetail() = default ;
    DescribeLiveDomainDetailResponseBodyDomainDetail& operator=(const DescribeLiveDomainDetailResponseBodyDomainDetail &) = default ;
    DescribeLiveDomainDetailResponseBodyDomainDetail& operator=(DescribeLiveDomainDetailResponseBodyDomainDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certName_ == nullptr
        && return this->cname_ == nullptr && return this->description_ == nullptr && return this->domainName_ == nullptr && return this->domainStatus_ == nullptr && return this->gmtCreated_ == nullptr
        && return this->gmtModified_ == nullptr && return this->liveDomainType_ == nullptr && return this->region_ == nullptr && return this->resourceGroupId_ == nullptr && return this->SSLProtocol_ == nullptr
        && return this->SSLPub_ == nullptr && return this->scope_ == nullptr; };
    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeLiveDomainDetailResponseBodyDomainDetail& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeLiveDomainDetailResponseBodyDomainDetail& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLiveDomainDetailResponseBodyDomainDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainDetailResponseBodyDomainDetail& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline DescribeLiveDomainDetailResponseBodyDomainDetail& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeLiveDomainDetailResponseBodyDomainDetail& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeLiveDomainDetailResponseBodyDomainDetail& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // liveDomainType Field Functions 
    bool hasLiveDomainType() const { return this->liveDomainType_ != nullptr;};
    void deleteLiveDomainType() { this->liveDomainType_ = nullptr;};
    inline string liveDomainType() const { DARABONBA_PTR_GET_DEFAULT(liveDomainType_, "") };
    inline DescribeLiveDomainDetailResponseBodyDomainDetail& setLiveDomainType(string liveDomainType) { DARABONBA_PTR_SET_VALUE(liveDomainType_, liveDomainType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLiveDomainDetailResponseBodyDomainDetail& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeLiveDomainDetailResponseBodyDomainDetail& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // SSLProtocol Field Functions 
    bool hasSSLProtocol() const { return this->SSLProtocol_ != nullptr;};
    void deleteSSLProtocol() { this->SSLProtocol_ = nullptr;};
    inline string SSLProtocol() const { DARABONBA_PTR_GET_DEFAULT(SSLProtocol_, "") };
    inline DescribeLiveDomainDetailResponseBodyDomainDetail& setSSLProtocol(string SSLProtocol) { DARABONBA_PTR_SET_VALUE(SSLProtocol_, SSLProtocol) };


    // SSLPub Field Functions 
    bool hasSSLPub() const { return this->SSLPub_ != nullptr;};
    void deleteSSLPub() { this->SSLPub_ = nullptr;};
    inline string SSLPub() const { DARABONBA_PTR_GET_DEFAULT(SSLPub_, "") };
    inline DescribeLiveDomainDetailResponseBodyDomainDetail& setSSLPub(string SSLPub) { DARABONBA_PTR_SET_VALUE(SSLPub_, SSLPub) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribeLiveDomainDetailResponseBodyDomainDetail& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The CNAME that is assigned to the domain name. You must add a CNAME record in the system of your Domain Name System (DNS) service provider to map the domain name to the CNAME.
    // 
    // >  A time-to-live (TTL) value is specified in the CNAME record of a domain name to indicate how long the CNAME record can be cached on the DNS resolver. If you modify the CNAME record of the domain name, the new settings take effect after the cache expires, which takes about 10 minutes. For more information, see [CNAME resolution](https://help.aliyun.com/document_detail/362010.html).
    std::shared_ptr<string> cname_ = nullptr;
    // The description of the domain name.
    std::shared_ptr<string> description_ = nullptr;
    // The streaming domain or ingest domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The status of the domain name. Valid values:
    // 
    // *   **online**: The domain name is enabled.
    // *   **offline**: The domain name is disabled.
    // *   **configuring**: The domain is being configured.
    std::shared_ptr<string> domainStatus_ = nullptr;
    // The time when the domain name was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The time when the domain name was last modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The type of the domain name. Valid values:
    // 
    // *   **liveVideo**: streaming domain
    // *   **liveEdge**: ingest domain
    std::shared_ptr<string> liveDomainType_ = nullptr;
    // The ID of the region where the domain name resides.
    std::shared_ptr<string> region_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether the SSL certificate is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> SSLProtocol_ = nullptr;
    // The public key of the certificate.
    std::shared_ptr<string> SSLPub_ = nullptr;
    // The acceleration region. Valid values:
    // 
    // *   **domestic**: regions in the Chinese mainland.
    // *   **overseas**: regions outside the Chinese mainland.
    // *   **global**: regions in and outside the Chinese mainland.
    std::shared_ptr<string> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
