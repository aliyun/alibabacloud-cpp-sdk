// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINDETAILRESPONSEBODYDOMAINDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINDETAILRESPONSEBODYDOMAINDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainDetailResponseBodyDomainDetailSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainDetailResponseBodyDomainDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainDetailResponseBodyDomainDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_TO_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainDetailResponseBodyDomainDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_FROM_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    DescribeVodDomainDetailResponseBodyDomainDetail() = default ;
    DescribeVodDomainDetailResponseBodyDomainDetail(const DescribeVodDomainDetailResponseBodyDomainDetail &) = default ;
    DescribeVodDomainDetailResponseBodyDomainDetail(DescribeVodDomainDetailResponseBodyDomainDetail &&) = default ;
    DescribeVodDomainDetailResponseBodyDomainDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainDetailResponseBodyDomainDetail() = default ;
    DescribeVodDomainDetailResponseBodyDomainDetail& operator=(const DescribeVodDomainDetailResponseBodyDomainDetail &) = default ;
    DescribeVodDomainDetailResponseBodyDomainDetail& operator=(DescribeVodDomainDetailResponseBodyDomainDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certName_ != nullptr
        && this->cname_ != nullptr && this->description_ != nullptr && this->domainName_ != nullptr && this->domainStatus_ != nullptr && this->gmtCreated_ != nullptr
        && this->gmtModified_ != nullptr && this->SSLProtocol_ != nullptr && this->SSLPub_ != nullptr && this->scope_ != nullptr && this->sources_ != nullptr
        && this->weight_ != nullptr; };
    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeVodDomainDetailResponseBodyDomainDetail& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeVodDomainDetailResponseBodyDomainDetail& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVodDomainDetailResponseBodyDomainDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodDomainDetailResponseBodyDomainDetail& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline DescribeVodDomainDetailResponseBodyDomainDetail& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeVodDomainDetailResponseBodyDomainDetail& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeVodDomainDetailResponseBodyDomainDetail& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // SSLProtocol Field Functions 
    bool hasSSLProtocol() const { return this->SSLProtocol_ != nullptr;};
    void deleteSSLProtocol() { this->SSLProtocol_ = nullptr;};
    inline string SSLProtocol() const { DARABONBA_PTR_GET_DEFAULT(SSLProtocol_, "") };
    inline DescribeVodDomainDetailResponseBodyDomainDetail& setSSLProtocol(string SSLProtocol) { DARABONBA_PTR_SET_VALUE(SSLProtocol_, SSLProtocol) };


    // SSLPub Field Functions 
    bool hasSSLPub() const { return this->SSLPub_ != nullptr;};
    void deleteSSLPub() { this->SSLPub_ = nullptr;};
    inline string SSLPub() const { DARABONBA_PTR_GET_DEFAULT(SSLPub_, "") };
    inline DescribeVodDomainDetailResponseBodyDomainDetail& setSSLPub(string SSLPub) { DARABONBA_PTR_SET_VALUE(SSLPub_, SSLPub) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribeVodDomainDetailResponseBodyDomainDetail& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const Models::DescribeVodDomainDetailResponseBodyDomainDetailSources & sources() const { DARABONBA_PTR_GET_CONST(sources_, Models::DescribeVodDomainDetailResponseBodyDomainDetailSources) };
    inline Models::DescribeVodDomainDetailResponseBodyDomainDetailSources sources() { DARABONBA_PTR_GET(sources_, Models::DescribeVodDomainDetailResponseBodyDomainDetailSources) };
    inline DescribeVodDomainDetailResponseBodyDomainDetail& setSources(const Models::DescribeVodDomainDetailResponseBodyDomainDetailSources & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline DescribeVodDomainDetailResponseBodyDomainDetail& setSources(Models::DescribeVodDomainDetailResponseBodyDomainDetailSources && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline string weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
    inline DescribeVodDomainDetailResponseBodyDomainDetail& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The name of the certificate. The value of this parameter is returned if HTTPS is enabled.
    std::shared_ptr<string> certName_ = nullptr;
    // The CNAME that is assigned to the domain name for CDN. You must add a CNAME record in the system of your Domain Name System (DNS) service provider to map the domain name for CDN to the CNAME.
    std::shared_ptr<string> cname_ = nullptr;
    // The description of the domain name for CDN.
    std::shared_ptr<string> description_ = nullptr;
    // The domain name for CDN.
    std::shared_ptr<string> domainName_ = nullptr;
    // The status of the domain name for CDN. Value values:
    // *   **online**: indicates that the domain name is enabled.
    // *   **offline**: indicates that the domain name is disabled.
    // *   **configuring**: indicates that the domain name is being configured.
    // *   **configure_failed**: indicates that the domain name failed to be configured.
    // *   **checking**: indicates that the domain name is under review.
    // *   **check_failed**: indicates that the domain name failed the review.
    std::shared_ptr<string> domainStatus_ = nullptr;
    // The time when the domain name for CDN was added. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The last time when the domain name for CDN was modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Indicates whether the Secure Sockets Layer (SSL) certificate is enabled. Valid values:
    // *   **on**: indicates that the SSL certificate is enabled.
    // *   **off**: indicates that the SSL certificate is disabled.
    std::shared_ptr<string> SSLProtocol_ = nullptr;
    // The public key of the certificate. The value of this parameter is returned if HTTPS is enabled.
    std::shared_ptr<string> SSLPub_ = nullptr;
    // This parameter is applicable to users of level 3 or higher in mainland China and users outside mainland China. Valid values:
    // *   **domestic**: mainland China. This is the default value.
    // *   **overseas**: outside mainland China.
    // *   **global**: regions in and outside mainland China.
    std::shared_ptr<string> scope_ = nullptr;
    // The information about the origin server.
    std::shared_ptr<Models::DescribeVodDomainDetailResponseBodyDomainDetailSources> sources_ = nullptr;
    // The weight of the origin server.
    std::shared_ptr<string> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
