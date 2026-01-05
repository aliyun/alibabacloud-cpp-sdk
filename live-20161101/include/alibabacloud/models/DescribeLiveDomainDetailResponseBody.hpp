// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainDetail, domainDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainDetail, domainDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveDomainDetailResponseBody() = default ;
    DescribeLiveDomainDetailResponseBody(const DescribeLiveDomainDetailResponseBody &) = default ;
    DescribeLiveDomainDetailResponseBody(DescribeLiveDomainDetailResponseBody &&) = default ;
    DescribeLiveDomainDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainDetailResponseBody() = default ;
    DescribeLiveDomainDetailResponseBody& operator=(const DescribeLiveDomainDetailResponseBody &) = default ;
    DescribeLiveDomainDetailResponseBody& operator=(DescribeLiveDomainDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainDetail& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DomainDetail& obj) { 
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
      DomainDetail() = default ;
      DomainDetail(const DomainDetail &) = default ;
      DomainDetail(DomainDetail &&) = default ;
      DomainDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainDetail() = default ;
      DomainDetail& operator=(const DomainDetail &) = default ;
      DomainDetail& operator=(DomainDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certName_ == nullptr
        && this->cname_ == nullptr && this->description_ == nullptr && this->domainName_ == nullptr && this->domainStatus_ == nullptr && this->gmtCreated_ == nullptr
        && this->gmtModified_ == nullptr && this->liveDomainType_ == nullptr && this->region_ == nullptr && this->resourceGroupId_ == nullptr && this->SSLProtocol_ == nullptr
        && this->SSLPub_ == nullptr && this->scope_ == nullptr; };
      // certName Field Functions 
      bool hasCertName() const { return this->certName_ != nullptr;};
      void deleteCertName() { this->certName_ = nullptr;};
      inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
      inline DomainDetail& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


      // cname Field Functions 
      bool hasCname() const { return this->cname_ != nullptr;};
      void deleteCname() { this->cname_ = nullptr;};
      inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
      inline DomainDetail& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DomainDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline DomainDetail& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // domainStatus Field Functions 
      bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
      void deleteDomainStatus() { this->domainStatus_ = nullptr;};
      inline string getDomainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
      inline DomainDetail& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline DomainDetail& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline DomainDetail& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // liveDomainType Field Functions 
      bool hasLiveDomainType() const { return this->liveDomainType_ != nullptr;};
      void deleteLiveDomainType() { this->liveDomainType_ = nullptr;};
      inline string getLiveDomainType() const { DARABONBA_PTR_GET_DEFAULT(liveDomainType_, "") };
      inline DomainDetail& setLiveDomainType(string liveDomainType) { DARABONBA_PTR_SET_VALUE(liveDomainType_, liveDomainType) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline DomainDetail& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline DomainDetail& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // SSLProtocol Field Functions 
      bool hasSSLProtocol() const { return this->SSLProtocol_ != nullptr;};
      void deleteSSLProtocol() { this->SSLProtocol_ = nullptr;};
      inline string getSSLProtocol() const { DARABONBA_PTR_GET_DEFAULT(SSLProtocol_, "") };
      inline DomainDetail& setSSLProtocol(string SSLProtocol) { DARABONBA_PTR_SET_VALUE(SSLProtocol_, SSLProtocol) };


      // SSLPub Field Functions 
      bool hasSSLPub() const { return this->SSLPub_ != nullptr;};
      void deleteSSLPub() { this->SSLPub_ = nullptr;};
      inline string getSSLPub() const { DARABONBA_PTR_GET_DEFAULT(SSLPub_, "") };
      inline DomainDetail& setSSLPub(string SSLPub) { DARABONBA_PTR_SET_VALUE(SSLPub_, SSLPub) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline DomainDetail& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    protected:
      // The name of the certificate.
      shared_ptr<string> certName_ {};
      // The CNAME that is assigned to the domain name. You must add a CNAME record in the system of your Domain Name System (DNS) service provider to map the domain name to the CNAME.
      // 
      // >  A time-to-live (TTL) value is specified in the CNAME record of a domain name to indicate how long the CNAME record can be cached on the DNS resolver. If you modify the CNAME record of the domain name, the new settings take effect after the cache expires, which takes about 10 minutes. For more information, see [CNAME resolution](https://help.aliyun.com/document_detail/362010.html).
      shared_ptr<string> cname_ {};
      // The description of the domain name.
      shared_ptr<string> description_ {};
      // The streaming domain or ingest domain.
      shared_ptr<string> domainName_ {};
      // The status of the domain name. Valid values:
      // 
      // *   **online**: The domain name is enabled.
      // *   **offline**: The domain name is disabled.
      // *   **configuring**: The domain is being configured.
      shared_ptr<string> domainStatus_ {};
      // The time when the domain name was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> gmtCreated_ {};
      // The time when the domain name was last modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> gmtModified_ {};
      // The type of the domain name. Valid values:
      // 
      // *   **liveVideo**: streaming domain
      // *   **liveEdge**: ingest domain
      shared_ptr<string> liveDomainType_ {};
      // The ID of the region where the domain name resides.
      shared_ptr<string> region_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // Indicates whether the SSL certificate is enabled. Valid values:
      // 
      // *   **on**
      // *   **off**
      shared_ptr<string> SSLProtocol_ {};
      // The public key of the certificate.
      shared_ptr<string> SSLPub_ {};
      // The acceleration region. Valid values:
      // 
      // *   **domestic**: regions in the Chinese mainland.
      // *   **overseas**: regions outside the Chinese mainland.
      // *   **global**: regions in and outside the Chinese mainland.
      shared_ptr<string> scope_ {};
    };

    virtual bool empty() const override { return this->domainDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // domainDetail Field Functions 
    bool hasDomainDetail() const { return this->domainDetail_ != nullptr;};
    void deleteDomainDetail() { this->domainDetail_ = nullptr;};
    inline const DescribeLiveDomainDetailResponseBody::DomainDetail & getDomainDetail() const { DARABONBA_PTR_GET_CONST(domainDetail_, DescribeLiveDomainDetailResponseBody::DomainDetail) };
    inline DescribeLiveDomainDetailResponseBody::DomainDetail getDomainDetail() { DARABONBA_PTR_GET(domainDetail_, DescribeLiveDomainDetailResponseBody::DomainDetail) };
    inline DescribeLiveDomainDetailResponseBody& setDomainDetail(const DescribeLiveDomainDetailResponseBody::DomainDetail & domainDetail) { DARABONBA_PTR_SET_VALUE(domainDetail_, domainDetail) };
    inline DescribeLiveDomainDetailResponseBody& setDomainDetail(DescribeLiveDomainDetailResponseBody::DomainDetail && domainDetail) { DARABONBA_PTR_SET_RVALUE(domainDetail_, domainDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration details of the domain name.
    shared_ptr<DescribeLiveDomainDetailResponseBody::DomainDetail> domainDetail_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
