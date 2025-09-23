// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainsResponseBodyDomainsProxyTypeList.hpp>
#include <alibabacloud/models/DescribeDomainsResponseBodyDomainsRealServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeDomainsResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(BlackList, blackList_);
      DARABONBA_PTR_TO_JSON(CcEnabled, ccEnabled_);
      DARABONBA_PTR_TO_JSON(CcRuleEnabled, ccRuleEnabled_);
      DARABONBA_PTR_TO_JSON(CcTemplate, ccTemplate_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertRegion, certRegion_);
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Http2Enable, http2Enable_);
      DARABONBA_PTR_TO_JSON(ProxyTypeList, proxyTypeList_);
      DARABONBA_PTR_TO_JSON(RealServers, realServers_);
      DARABONBA_PTR_TO_JSON(SslCiphers, sslCiphers_);
      DARABONBA_PTR_TO_JSON(SslProtocols, sslProtocols_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackList, blackList_);
      DARABONBA_PTR_FROM_JSON(CcEnabled, ccEnabled_);
      DARABONBA_PTR_FROM_JSON(CcRuleEnabled, ccRuleEnabled_);
      DARABONBA_PTR_FROM_JSON(CcTemplate, ccTemplate_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertRegion, certRegion_);
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Http2Enable, http2Enable_);
      DARABONBA_PTR_FROM_JSON(ProxyTypeList, proxyTypeList_);
      DARABONBA_PTR_FROM_JSON(RealServers, realServers_);
      DARABONBA_PTR_FROM_JSON(SslCiphers, sslCiphers_);
      DARABONBA_PTR_FROM_JSON(SslProtocols, sslProtocols_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    DescribeDomainsResponseBodyDomains() = default ;
    DescribeDomainsResponseBodyDomains(const DescribeDomainsResponseBodyDomains &) = default ;
    DescribeDomainsResponseBodyDomains(DescribeDomainsResponseBodyDomains &&) = default ;
    DescribeDomainsResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsResponseBodyDomains() = default ;
    DescribeDomainsResponseBodyDomains& operator=(const DescribeDomainsResponseBodyDomains &) = default ;
    DescribeDomainsResponseBodyDomains& operator=(DescribeDomainsResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blackList_ != nullptr
        && this->ccEnabled_ != nullptr && this->ccRuleEnabled_ != nullptr && this->ccTemplate_ != nullptr && this->certName_ != nullptr && this->certRegion_ != nullptr
        && this->cname_ != nullptr && this->domain_ != nullptr && this->http2Enable_ != nullptr && this->proxyTypeList_ != nullptr && this->realServers_ != nullptr
        && this->sslCiphers_ != nullptr && this->sslProtocols_ != nullptr && this->whiteList_ != nullptr; };
    // blackList Field Functions 
    bool hasBlackList() const { return this->blackList_ != nullptr;};
    void deleteBlackList() { this->blackList_ = nullptr;};
    inline const vector<string> & blackList() const { DARABONBA_PTR_GET_CONST(blackList_, vector<string>) };
    inline vector<string> blackList() { DARABONBA_PTR_GET(blackList_, vector<string>) };
    inline DescribeDomainsResponseBodyDomains& setBlackList(const vector<string> & blackList) { DARABONBA_PTR_SET_VALUE(blackList_, blackList) };
    inline DescribeDomainsResponseBodyDomains& setBlackList(vector<string> && blackList) { DARABONBA_PTR_SET_RVALUE(blackList_, blackList) };


    // ccEnabled Field Functions 
    bool hasCcEnabled() const { return this->ccEnabled_ != nullptr;};
    void deleteCcEnabled() { this->ccEnabled_ = nullptr;};
    inline bool ccEnabled() const { DARABONBA_PTR_GET_DEFAULT(ccEnabled_, false) };
    inline DescribeDomainsResponseBodyDomains& setCcEnabled(bool ccEnabled) { DARABONBA_PTR_SET_VALUE(ccEnabled_, ccEnabled) };


    // ccRuleEnabled Field Functions 
    bool hasCcRuleEnabled() const { return this->ccRuleEnabled_ != nullptr;};
    void deleteCcRuleEnabled() { this->ccRuleEnabled_ = nullptr;};
    inline bool ccRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(ccRuleEnabled_, false) };
    inline DescribeDomainsResponseBodyDomains& setCcRuleEnabled(bool ccRuleEnabled) { DARABONBA_PTR_SET_VALUE(ccRuleEnabled_, ccRuleEnabled) };


    // ccTemplate Field Functions 
    bool hasCcTemplate() const { return this->ccTemplate_ != nullptr;};
    void deleteCcTemplate() { this->ccTemplate_ = nullptr;};
    inline string ccTemplate() const { DARABONBA_PTR_GET_DEFAULT(ccTemplate_, "") };
    inline DescribeDomainsResponseBodyDomains& setCcTemplate(string ccTemplate) { DARABONBA_PTR_SET_VALUE(ccTemplate_, ccTemplate) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeDomainsResponseBodyDomains& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certRegion Field Functions 
    bool hasCertRegion() const { return this->certRegion_ != nullptr;};
    void deleteCertRegion() { this->certRegion_ = nullptr;};
    inline string certRegion() const { DARABONBA_PTR_GET_DEFAULT(certRegion_, "") };
    inline DescribeDomainsResponseBodyDomains& setCertRegion(string certRegion) { DARABONBA_PTR_SET_VALUE(certRegion_, certRegion) };


    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeDomainsResponseBodyDomains& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainsResponseBodyDomains& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // http2Enable Field Functions 
    bool hasHttp2Enable() const { return this->http2Enable_ != nullptr;};
    void deleteHttp2Enable() { this->http2Enable_ = nullptr;};
    inline bool http2Enable() const { DARABONBA_PTR_GET_DEFAULT(http2Enable_, false) };
    inline DescribeDomainsResponseBodyDomains& setHttp2Enable(bool http2Enable) { DARABONBA_PTR_SET_VALUE(http2Enable_, http2Enable) };


    // proxyTypeList Field Functions 
    bool hasProxyTypeList() const { return this->proxyTypeList_ != nullptr;};
    void deleteProxyTypeList() { this->proxyTypeList_ = nullptr;};
    inline const vector<Models::DescribeDomainsResponseBodyDomainsProxyTypeList> & proxyTypeList() const { DARABONBA_PTR_GET_CONST(proxyTypeList_, vector<Models::DescribeDomainsResponseBodyDomainsProxyTypeList>) };
    inline vector<Models::DescribeDomainsResponseBodyDomainsProxyTypeList> proxyTypeList() { DARABONBA_PTR_GET(proxyTypeList_, vector<Models::DescribeDomainsResponseBodyDomainsProxyTypeList>) };
    inline DescribeDomainsResponseBodyDomains& setProxyTypeList(const vector<Models::DescribeDomainsResponseBodyDomainsProxyTypeList> & proxyTypeList) { DARABONBA_PTR_SET_VALUE(proxyTypeList_, proxyTypeList) };
    inline DescribeDomainsResponseBodyDomains& setProxyTypeList(vector<Models::DescribeDomainsResponseBodyDomainsProxyTypeList> && proxyTypeList) { DARABONBA_PTR_SET_RVALUE(proxyTypeList_, proxyTypeList) };


    // realServers Field Functions 
    bool hasRealServers() const { return this->realServers_ != nullptr;};
    void deleteRealServers() { this->realServers_ = nullptr;};
    inline const vector<Models::DescribeDomainsResponseBodyDomainsRealServers> & realServers() const { DARABONBA_PTR_GET_CONST(realServers_, vector<Models::DescribeDomainsResponseBodyDomainsRealServers>) };
    inline vector<Models::DescribeDomainsResponseBodyDomainsRealServers> realServers() { DARABONBA_PTR_GET(realServers_, vector<Models::DescribeDomainsResponseBodyDomainsRealServers>) };
    inline DescribeDomainsResponseBodyDomains& setRealServers(const vector<Models::DescribeDomainsResponseBodyDomainsRealServers> & realServers) { DARABONBA_PTR_SET_VALUE(realServers_, realServers) };
    inline DescribeDomainsResponseBodyDomains& setRealServers(vector<Models::DescribeDomainsResponseBodyDomainsRealServers> && realServers) { DARABONBA_PTR_SET_RVALUE(realServers_, realServers) };


    // sslCiphers Field Functions 
    bool hasSslCiphers() const { return this->sslCiphers_ != nullptr;};
    void deleteSslCiphers() { this->sslCiphers_ = nullptr;};
    inline string sslCiphers() const { DARABONBA_PTR_GET_DEFAULT(sslCiphers_, "") };
    inline DescribeDomainsResponseBodyDomains& setSslCiphers(string sslCiphers) { DARABONBA_PTR_SET_VALUE(sslCiphers_, sslCiphers) };


    // sslProtocols Field Functions 
    bool hasSslProtocols() const { return this->sslProtocols_ != nullptr;};
    void deleteSslProtocols() { this->sslProtocols_ = nullptr;};
    inline string sslProtocols() const { DARABONBA_PTR_GET_DEFAULT(sslProtocols_, "") };
    inline DescribeDomainsResponseBodyDomains& setSslProtocols(string sslProtocols) { DARABONBA_PTR_SET_VALUE(sslProtocols_, sslProtocols) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline const vector<string> & whiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<string>) };
    inline vector<string> whiteList() { DARABONBA_PTR_GET(whiteList_, vector<string>) };
    inline DescribeDomainsResponseBodyDomains& setWhiteList(const vector<string> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
    inline DescribeDomainsResponseBodyDomains& setWhiteList(vector<string> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


  protected:
    std::shared_ptr<vector<string>> blackList_ = nullptr;
    std::shared_ptr<bool> ccEnabled_ = nullptr;
    std::shared_ptr<bool> ccRuleEnabled_ = nullptr;
    std::shared_ptr<string> ccTemplate_ = nullptr;
    std::shared_ptr<string> certName_ = nullptr;
    std::shared_ptr<string> certRegion_ = nullptr;
    std::shared_ptr<string> cname_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<bool> http2Enable_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDomainsResponseBodyDomainsProxyTypeList>> proxyTypeList_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDomainsResponseBodyDomainsRealServers>> realServers_ = nullptr;
    std::shared_ptr<string> sslCiphers_ = nullptr;
    std::shared_ptr<string> sslProtocols_ = nullptr;
    std::shared_ptr<vector<string>> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
