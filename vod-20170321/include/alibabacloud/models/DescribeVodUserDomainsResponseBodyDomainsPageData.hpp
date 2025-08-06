// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODUSERDOMAINSRESPONSEBODYDOMAINSPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODUSERDOMAINSRESPONSEBODYDOMAINSPAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodUserDomainsResponseBodyDomainsPageDataSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodUserDomainsResponseBodyDomainsPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodUserDomainsResponseBodyDomainsPageData& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Sandbox, sandbox_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(SslProtocol, sslProtocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodUserDomainsResponseBodyDomainsPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Sandbox, sandbox_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(SslProtocol, sslProtocol_);
    };
    DescribeVodUserDomainsResponseBodyDomainsPageData() = default ;
    DescribeVodUserDomainsResponseBodyDomainsPageData(const DescribeVodUserDomainsResponseBodyDomainsPageData &) = default ;
    DescribeVodUserDomainsResponseBodyDomainsPageData(DescribeVodUserDomainsResponseBodyDomainsPageData &&) = default ;
    DescribeVodUserDomainsResponseBodyDomainsPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodUserDomainsResponseBodyDomainsPageData() = default ;
    DescribeVodUserDomainsResponseBodyDomainsPageData& operator=(const DescribeVodUserDomainsResponseBodyDomainsPageData &) = default ;
    DescribeVodUserDomainsResponseBodyDomainsPageData& operator=(DescribeVodUserDomainsResponseBodyDomainsPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cname_ != nullptr
        && this->description_ != nullptr && this->domainName_ != nullptr && this->domainStatus_ != nullptr && this->gmtCreated_ != nullptr && this->gmtModified_ != nullptr
        && this->sandbox_ != nullptr && this->sources_ != nullptr && this->sslProtocol_ != nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeVodUserDomainsResponseBodyDomainsPageData& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVodUserDomainsResponseBodyDomainsPageData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodUserDomainsResponseBodyDomainsPageData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline DescribeVodUserDomainsResponseBodyDomainsPageData& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeVodUserDomainsResponseBodyDomainsPageData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeVodUserDomainsResponseBodyDomainsPageData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // sandbox Field Functions 
    bool hasSandbox() const { return this->sandbox_ != nullptr;};
    void deleteSandbox() { this->sandbox_ = nullptr;};
    inline string sandbox() const { DARABONBA_PTR_GET_DEFAULT(sandbox_, "") };
    inline DescribeVodUserDomainsResponseBodyDomainsPageData& setSandbox(string sandbox) { DARABONBA_PTR_SET_VALUE(sandbox_, sandbox) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const Models::DescribeVodUserDomainsResponseBodyDomainsPageDataSources & sources() const { DARABONBA_PTR_GET_CONST(sources_, Models::DescribeVodUserDomainsResponseBodyDomainsPageDataSources) };
    inline Models::DescribeVodUserDomainsResponseBodyDomainsPageDataSources sources() { DARABONBA_PTR_GET(sources_, Models::DescribeVodUserDomainsResponseBodyDomainsPageDataSources) };
    inline DescribeVodUserDomainsResponseBodyDomainsPageData& setSources(const Models::DescribeVodUserDomainsResponseBodyDomainsPageDataSources & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline DescribeVodUserDomainsResponseBodyDomainsPageData& setSources(Models::DescribeVodUserDomainsResponseBodyDomainsPageDataSources && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // sslProtocol Field Functions 
    bool hasSslProtocol() const { return this->sslProtocol_ != nullptr;};
    void deleteSslProtocol() { this->sslProtocol_ = nullptr;};
    inline string sslProtocol() const { DARABONBA_PTR_GET_DEFAULT(sslProtocol_, "") };
    inline DescribeVodUserDomainsResponseBodyDomainsPageData& setSslProtocol(string sslProtocol) { DARABONBA_PTR_SET_VALUE(sslProtocol_, sslProtocol) };


  protected:
    // The CNAME that is assigned to the domain name for CDN.
    std::shared_ptr<string> cname_ = nullptr;
    // The remarks.
    std::shared_ptr<string> description_ = nullptr;
    // The domain name for CDN.
    std::shared_ptr<string> domainName_ = nullptr;
    // The status of the domain name for CDN. Valid values:
    // 
    // *   **online**: indicates that the domain name is enabled.
    // *   **offline**: indicates that the domain name is disabled.
    // *   **configuring**: indicates that the domain name is being configured.
    // *   **configure_failed**: indicates that the domain name failed to be configured.
    // *   **checking**: indicates that the domain name is under review.
    // *   **check_failed**: indicates that the domain name failed the review.
    std::shared_ptr<string> domainStatus_ = nullptr;
    // The time when the domain name for CDN was added. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The last time when the domain name for CDN was modified. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Indicates whether the accelerated domain name was in a sandbox.
    std::shared_ptr<string> sandbox_ = nullptr;
    // The information about the origin server.
    std::shared_ptr<Models::DescribeVodUserDomainsResponseBodyDomainsPageDataSources> sources_ = nullptr;
    // Indicates whether HTTPS is enabled.
    // 
    // *   **on**: HTTPS is enabled.
    // *   **off**: HTTPS is not eabled.
    std::shared_ptr<string> sslProtocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
