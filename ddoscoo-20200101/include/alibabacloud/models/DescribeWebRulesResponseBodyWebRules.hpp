// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBRULESRESPONSEBODYWEBRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBRULESRESPONSEBODYWEBRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebRulesResponseBodyWebRulesGmCert.hpp>
#include <alibabacloud/models/DescribeWebRulesResponseBodyWebRulesProxyTypes.hpp>
#include <alibabacloud/models/DescribeWebRulesResponseBodyWebRulesRealServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebRulesResponseBodyWebRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebRulesResponseBodyWebRules& obj) { 
      DARABONBA_PTR_TO_JSON(BlackList, blackList_);
      DARABONBA_PTR_TO_JSON(CcEnabled, ccEnabled_);
      DARABONBA_PTR_TO_JSON(CcRuleEnabled, ccRuleEnabled_);
      DARABONBA_PTR_TO_JSON(CcTemplate, ccTemplate_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertRegion, certRegion_);
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(CustomCiphers, customCiphers_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(GmCert, gmCert_);
      DARABONBA_PTR_TO_JSON(Http2Enable, http2Enable_);
      DARABONBA_PTR_TO_JSON(Http2HttpsEnable, http2HttpsEnable_);
      DARABONBA_PTR_TO_JSON(Https2HttpEnable, https2HttpEnable_);
      DARABONBA_PTR_TO_JSON(OcspEnabled, ocspEnabled_);
      DARABONBA_PTR_TO_JSON(PolicyMode, policyMode_);
      DARABONBA_PTR_TO_JSON(ProxyEnabled, proxyEnabled_);
      DARABONBA_PTR_TO_JSON(ProxyTypes, proxyTypes_);
      DARABONBA_PTR_TO_JSON(PunishReason, punishReason_);
      DARABONBA_PTR_TO_JSON(PunishStatus, punishStatus_);
      DARABONBA_PTR_TO_JSON(RealServers, realServers_);
      DARABONBA_PTR_TO_JSON(Ssl13Enabled, ssl13Enabled_);
      DARABONBA_PTR_TO_JSON(SslCiphers, sslCiphers_);
      DARABONBA_PTR_TO_JSON(SslProtocols, sslProtocols_);
      DARABONBA_PTR_TO_JSON(UserCertName, userCertName_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebRulesResponseBodyWebRules& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackList, blackList_);
      DARABONBA_PTR_FROM_JSON(CcEnabled, ccEnabled_);
      DARABONBA_PTR_FROM_JSON(CcRuleEnabled, ccRuleEnabled_);
      DARABONBA_PTR_FROM_JSON(CcTemplate, ccTemplate_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertRegion, certRegion_);
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(CustomCiphers, customCiphers_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(GmCert, gmCert_);
      DARABONBA_PTR_FROM_JSON(Http2Enable, http2Enable_);
      DARABONBA_PTR_FROM_JSON(Http2HttpsEnable, http2HttpsEnable_);
      DARABONBA_PTR_FROM_JSON(Https2HttpEnable, https2HttpEnable_);
      DARABONBA_PTR_FROM_JSON(OcspEnabled, ocspEnabled_);
      DARABONBA_PTR_FROM_JSON(PolicyMode, policyMode_);
      DARABONBA_PTR_FROM_JSON(ProxyEnabled, proxyEnabled_);
      DARABONBA_PTR_FROM_JSON(ProxyTypes, proxyTypes_);
      DARABONBA_PTR_FROM_JSON(PunishReason, punishReason_);
      DARABONBA_PTR_FROM_JSON(PunishStatus, punishStatus_);
      DARABONBA_PTR_FROM_JSON(RealServers, realServers_);
      DARABONBA_PTR_FROM_JSON(Ssl13Enabled, ssl13Enabled_);
      DARABONBA_PTR_FROM_JSON(SslCiphers, sslCiphers_);
      DARABONBA_PTR_FROM_JSON(SslProtocols, sslProtocols_);
      DARABONBA_PTR_FROM_JSON(UserCertName, userCertName_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    DescribeWebRulesResponseBodyWebRules() = default ;
    DescribeWebRulesResponseBodyWebRules(const DescribeWebRulesResponseBodyWebRules &) = default ;
    DescribeWebRulesResponseBodyWebRules(DescribeWebRulesResponseBodyWebRules &&) = default ;
    DescribeWebRulesResponseBodyWebRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebRulesResponseBodyWebRules() = default ;
    DescribeWebRulesResponseBodyWebRules& operator=(const DescribeWebRulesResponseBodyWebRules &) = default ;
    DescribeWebRulesResponseBodyWebRules& operator=(DescribeWebRulesResponseBodyWebRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blackList_ != nullptr
        && this->ccEnabled_ != nullptr && this->ccRuleEnabled_ != nullptr && this->ccTemplate_ != nullptr && this->certName_ != nullptr && this->certRegion_ != nullptr
        && this->cname_ != nullptr && this->customCiphers_ != nullptr && this->domain_ != nullptr && this->gmCert_ != nullptr && this->http2Enable_ != nullptr
        && this->http2HttpsEnable_ != nullptr && this->https2HttpEnable_ != nullptr && this->ocspEnabled_ != nullptr && this->policyMode_ != nullptr && this->proxyEnabled_ != nullptr
        && this->proxyTypes_ != nullptr && this->punishReason_ != nullptr && this->punishStatus_ != nullptr && this->realServers_ != nullptr && this->ssl13Enabled_ != nullptr
        && this->sslCiphers_ != nullptr && this->sslProtocols_ != nullptr && this->userCertName_ != nullptr && this->whiteList_ != nullptr; };
    // blackList Field Functions 
    bool hasBlackList() const { return this->blackList_ != nullptr;};
    void deleteBlackList() { this->blackList_ = nullptr;};
    inline const vector<string> & blackList() const { DARABONBA_PTR_GET_CONST(blackList_, vector<string>) };
    inline vector<string> blackList() { DARABONBA_PTR_GET(blackList_, vector<string>) };
    inline DescribeWebRulesResponseBodyWebRules& setBlackList(const vector<string> & blackList) { DARABONBA_PTR_SET_VALUE(blackList_, blackList) };
    inline DescribeWebRulesResponseBodyWebRules& setBlackList(vector<string> && blackList) { DARABONBA_PTR_SET_RVALUE(blackList_, blackList) };


    // ccEnabled Field Functions 
    bool hasCcEnabled() const { return this->ccEnabled_ != nullptr;};
    void deleteCcEnabled() { this->ccEnabled_ = nullptr;};
    inline bool ccEnabled() const { DARABONBA_PTR_GET_DEFAULT(ccEnabled_, false) };
    inline DescribeWebRulesResponseBodyWebRules& setCcEnabled(bool ccEnabled) { DARABONBA_PTR_SET_VALUE(ccEnabled_, ccEnabled) };


    // ccRuleEnabled Field Functions 
    bool hasCcRuleEnabled() const { return this->ccRuleEnabled_ != nullptr;};
    void deleteCcRuleEnabled() { this->ccRuleEnabled_ = nullptr;};
    inline bool ccRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(ccRuleEnabled_, false) };
    inline DescribeWebRulesResponseBodyWebRules& setCcRuleEnabled(bool ccRuleEnabled) { DARABONBA_PTR_SET_VALUE(ccRuleEnabled_, ccRuleEnabled) };


    // ccTemplate Field Functions 
    bool hasCcTemplate() const { return this->ccTemplate_ != nullptr;};
    void deleteCcTemplate() { this->ccTemplate_ = nullptr;};
    inline string ccTemplate() const { DARABONBA_PTR_GET_DEFAULT(ccTemplate_, "") };
    inline DescribeWebRulesResponseBodyWebRules& setCcTemplate(string ccTemplate) { DARABONBA_PTR_SET_VALUE(ccTemplate_, ccTemplate) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeWebRulesResponseBodyWebRules& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certRegion Field Functions 
    bool hasCertRegion() const { return this->certRegion_ != nullptr;};
    void deleteCertRegion() { this->certRegion_ = nullptr;};
    inline string certRegion() const { DARABONBA_PTR_GET_DEFAULT(certRegion_, "") };
    inline DescribeWebRulesResponseBodyWebRules& setCertRegion(string certRegion) { DARABONBA_PTR_SET_VALUE(certRegion_, certRegion) };


    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeWebRulesResponseBodyWebRules& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // customCiphers Field Functions 
    bool hasCustomCiphers() const { return this->customCiphers_ != nullptr;};
    void deleteCustomCiphers() { this->customCiphers_ = nullptr;};
    inline const vector<string> & customCiphers() const { DARABONBA_PTR_GET_CONST(customCiphers_, vector<string>) };
    inline vector<string> customCiphers() { DARABONBA_PTR_GET(customCiphers_, vector<string>) };
    inline DescribeWebRulesResponseBodyWebRules& setCustomCiphers(const vector<string> & customCiphers) { DARABONBA_PTR_SET_VALUE(customCiphers_, customCiphers) };
    inline DescribeWebRulesResponseBodyWebRules& setCustomCiphers(vector<string> && customCiphers) { DARABONBA_PTR_SET_RVALUE(customCiphers_, customCiphers) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeWebRulesResponseBodyWebRules& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // gmCert Field Functions 
    bool hasGmCert() const { return this->gmCert_ != nullptr;};
    void deleteGmCert() { this->gmCert_ = nullptr;};
    inline const Models::DescribeWebRulesResponseBodyWebRulesGmCert & gmCert() const { DARABONBA_PTR_GET_CONST(gmCert_, Models::DescribeWebRulesResponseBodyWebRulesGmCert) };
    inline Models::DescribeWebRulesResponseBodyWebRulesGmCert gmCert() { DARABONBA_PTR_GET(gmCert_, Models::DescribeWebRulesResponseBodyWebRulesGmCert) };
    inline DescribeWebRulesResponseBodyWebRules& setGmCert(const Models::DescribeWebRulesResponseBodyWebRulesGmCert & gmCert) { DARABONBA_PTR_SET_VALUE(gmCert_, gmCert) };
    inline DescribeWebRulesResponseBodyWebRules& setGmCert(Models::DescribeWebRulesResponseBodyWebRulesGmCert && gmCert) { DARABONBA_PTR_SET_RVALUE(gmCert_, gmCert) };


    // http2Enable Field Functions 
    bool hasHttp2Enable() const { return this->http2Enable_ != nullptr;};
    void deleteHttp2Enable() { this->http2Enable_ = nullptr;};
    inline bool http2Enable() const { DARABONBA_PTR_GET_DEFAULT(http2Enable_, false) };
    inline DescribeWebRulesResponseBodyWebRules& setHttp2Enable(bool http2Enable) { DARABONBA_PTR_SET_VALUE(http2Enable_, http2Enable) };


    // http2HttpsEnable Field Functions 
    bool hasHttp2HttpsEnable() const { return this->http2HttpsEnable_ != nullptr;};
    void deleteHttp2HttpsEnable() { this->http2HttpsEnable_ = nullptr;};
    inline bool http2HttpsEnable() const { DARABONBA_PTR_GET_DEFAULT(http2HttpsEnable_, false) };
    inline DescribeWebRulesResponseBodyWebRules& setHttp2HttpsEnable(bool http2HttpsEnable) { DARABONBA_PTR_SET_VALUE(http2HttpsEnable_, http2HttpsEnable) };


    // https2HttpEnable Field Functions 
    bool hasHttps2HttpEnable() const { return this->https2HttpEnable_ != nullptr;};
    void deleteHttps2HttpEnable() { this->https2HttpEnable_ = nullptr;};
    inline bool https2HttpEnable() const { DARABONBA_PTR_GET_DEFAULT(https2HttpEnable_, false) };
    inline DescribeWebRulesResponseBodyWebRules& setHttps2HttpEnable(bool https2HttpEnable) { DARABONBA_PTR_SET_VALUE(https2HttpEnable_, https2HttpEnable) };


    // ocspEnabled Field Functions 
    bool hasOcspEnabled() const { return this->ocspEnabled_ != nullptr;};
    void deleteOcspEnabled() { this->ocspEnabled_ = nullptr;};
    inline bool ocspEnabled() const { DARABONBA_PTR_GET_DEFAULT(ocspEnabled_, false) };
    inline DescribeWebRulesResponseBodyWebRules& setOcspEnabled(bool ocspEnabled) { DARABONBA_PTR_SET_VALUE(ocspEnabled_, ocspEnabled) };


    // policyMode Field Functions 
    bool hasPolicyMode() const { return this->policyMode_ != nullptr;};
    void deletePolicyMode() { this->policyMode_ = nullptr;};
    inline string policyMode() const { DARABONBA_PTR_GET_DEFAULT(policyMode_, "") };
    inline DescribeWebRulesResponseBodyWebRules& setPolicyMode(string policyMode) { DARABONBA_PTR_SET_VALUE(policyMode_, policyMode) };


    // proxyEnabled Field Functions 
    bool hasProxyEnabled() const { return this->proxyEnabled_ != nullptr;};
    void deleteProxyEnabled() { this->proxyEnabled_ = nullptr;};
    inline bool proxyEnabled() const { DARABONBA_PTR_GET_DEFAULT(proxyEnabled_, false) };
    inline DescribeWebRulesResponseBodyWebRules& setProxyEnabled(bool proxyEnabled) { DARABONBA_PTR_SET_VALUE(proxyEnabled_, proxyEnabled) };


    // proxyTypes Field Functions 
    bool hasProxyTypes() const { return this->proxyTypes_ != nullptr;};
    void deleteProxyTypes() { this->proxyTypes_ = nullptr;};
    inline const vector<Models::DescribeWebRulesResponseBodyWebRulesProxyTypes> & proxyTypes() const { DARABONBA_PTR_GET_CONST(proxyTypes_, vector<Models::DescribeWebRulesResponseBodyWebRulesProxyTypes>) };
    inline vector<Models::DescribeWebRulesResponseBodyWebRulesProxyTypes> proxyTypes() { DARABONBA_PTR_GET(proxyTypes_, vector<Models::DescribeWebRulesResponseBodyWebRulesProxyTypes>) };
    inline DescribeWebRulesResponseBodyWebRules& setProxyTypes(const vector<Models::DescribeWebRulesResponseBodyWebRulesProxyTypes> & proxyTypes) { DARABONBA_PTR_SET_VALUE(proxyTypes_, proxyTypes) };
    inline DescribeWebRulesResponseBodyWebRules& setProxyTypes(vector<Models::DescribeWebRulesResponseBodyWebRulesProxyTypes> && proxyTypes) { DARABONBA_PTR_SET_RVALUE(proxyTypes_, proxyTypes) };


    // punishReason Field Functions 
    bool hasPunishReason() const { return this->punishReason_ != nullptr;};
    void deletePunishReason() { this->punishReason_ = nullptr;};
    inline int32_t punishReason() const { DARABONBA_PTR_GET_DEFAULT(punishReason_, 0) };
    inline DescribeWebRulesResponseBodyWebRules& setPunishReason(int32_t punishReason) { DARABONBA_PTR_SET_VALUE(punishReason_, punishReason) };


    // punishStatus Field Functions 
    bool hasPunishStatus() const { return this->punishStatus_ != nullptr;};
    void deletePunishStatus() { this->punishStatus_ = nullptr;};
    inline bool punishStatus() const { DARABONBA_PTR_GET_DEFAULT(punishStatus_, false) };
    inline DescribeWebRulesResponseBodyWebRules& setPunishStatus(bool punishStatus) { DARABONBA_PTR_SET_VALUE(punishStatus_, punishStatus) };


    // realServers Field Functions 
    bool hasRealServers() const { return this->realServers_ != nullptr;};
    void deleteRealServers() { this->realServers_ = nullptr;};
    inline const vector<Models::DescribeWebRulesResponseBodyWebRulesRealServers> & realServers() const { DARABONBA_PTR_GET_CONST(realServers_, vector<Models::DescribeWebRulesResponseBodyWebRulesRealServers>) };
    inline vector<Models::DescribeWebRulesResponseBodyWebRulesRealServers> realServers() { DARABONBA_PTR_GET(realServers_, vector<Models::DescribeWebRulesResponseBodyWebRulesRealServers>) };
    inline DescribeWebRulesResponseBodyWebRules& setRealServers(const vector<Models::DescribeWebRulesResponseBodyWebRulesRealServers> & realServers) { DARABONBA_PTR_SET_VALUE(realServers_, realServers) };
    inline DescribeWebRulesResponseBodyWebRules& setRealServers(vector<Models::DescribeWebRulesResponseBodyWebRulesRealServers> && realServers) { DARABONBA_PTR_SET_RVALUE(realServers_, realServers) };


    // ssl13Enabled Field Functions 
    bool hasSsl13Enabled() const { return this->ssl13Enabled_ != nullptr;};
    void deleteSsl13Enabled() { this->ssl13Enabled_ = nullptr;};
    inline bool ssl13Enabled() const { DARABONBA_PTR_GET_DEFAULT(ssl13Enabled_, false) };
    inline DescribeWebRulesResponseBodyWebRules& setSsl13Enabled(bool ssl13Enabled) { DARABONBA_PTR_SET_VALUE(ssl13Enabled_, ssl13Enabled) };


    // sslCiphers Field Functions 
    bool hasSslCiphers() const { return this->sslCiphers_ != nullptr;};
    void deleteSslCiphers() { this->sslCiphers_ = nullptr;};
    inline string sslCiphers() const { DARABONBA_PTR_GET_DEFAULT(sslCiphers_, "") };
    inline DescribeWebRulesResponseBodyWebRules& setSslCiphers(string sslCiphers) { DARABONBA_PTR_SET_VALUE(sslCiphers_, sslCiphers) };


    // sslProtocols Field Functions 
    bool hasSslProtocols() const { return this->sslProtocols_ != nullptr;};
    void deleteSslProtocols() { this->sslProtocols_ = nullptr;};
    inline string sslProtocols() const { DARABONBA_PTR_GET_DEFAULT(sslProtocols_, "") };
    inline DescribeWebRulesResponseBodyWebRules& setSslProtocols(string sslProtocols) { DARABONBA_PTR_SET_VALUE(sslProtocols_, sslProtocols) };


    // userCertName Field Functions 
    bool hasUserCertName() const { return this->userCertName_ != nullptr;};
    void deleteUserCertName() { this->userCertName_ = nullptr;};
    inline string userCertName() const { DARABONBA_PTR_GET_DEFAULT(userCertName_, "") };
    inline DescribeWebRulesResponseBodyWebRules& setUserCertName(string userCertName) { DARABONBA_PTR_SET_VALUE(userCertName_, userCertName) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline const vector<string> & whiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<string>) };
    inline vector<string> whiteList() { DARABONBA_PTR_GET(whiteList_, vector<string>) };
    inline DescribeWebRulesResponseBodyWebRules& setWhiteList(const vector<string> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
    inline DescribeWebRulesResponseBodyWebRules& setWhiteList(vector<string> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


  protected:
    // The IP addresses in the blacklist for the domain name.
    std::shared_ptr<vector<string>> blackList_ = nullptr;
    // Indicates whether the Frequency Control policy is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> ccEnabled_ = nullptr;
    // Indicates whether the Custom Rule switch of the Frequency Control policy is turned on. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> ccRuleEnabled_ = nullptr;
    // The mode of the Frequency Control policy. Valid values:
    // 
    // *   **default**: the Normal mode
    // *   **gf_under_attack**: the Emergency mode
    // *   **gf_sos_verify**: the Strict mode
    // *   **gf_sos_verify**: the Super Strict mode
    std::shared_ptr<string> ccTemplate_ = nullptr;
    // The name of the SSL certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The region where the certificate is used. Valid values:
    // 
    // *   cn-hangzhou (default): the Chinese mainland
    // *   ap-southeast-1: outside the Chinese mainland
    std::shared_ptr<string> certRegion_ = nullptr;
    // The CNAME provided by the Anti-DDoS Pro or Anti-DDoS Premium instance to which the domain name is added.
    std::shared_ptr<string> cname_ = nullptr;
    // The custom cipher suites.
    std::shared_ptr<vector<string>> customCiphers_ = nullptr;
    // The domain name of the website.
    std::shared_ptr<string> domain_ = nullptr;
    // The SM certificate settings.
    std::shared_ptr<Models::DescribeWebRulesResponseBodyWebRulesGmCert> gmCert_ = nullptr;
    // Indicates whether Enable HTTP/2 is turned on. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> http2Enable_ = nullptr;
    // Indicates whether Enable HTTPS Redirection was turned on. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> http2HttpsEnable_ = nullptr;
    // Indicates whether Enable HTTP Redirection of Back-to-origin Requests is turned on. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> https2HttpEnable_ = nullptr;
    // Indicates whether the Online Certificate Status Protocol (OCSP) feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> ocspEnabled_ = nullptr;
    // The load balancing algorithm for back-to-origin traffic. Valid values:
    // 
    // *   **ip_hash**: the IP hash algorithm. This algorithm is used to redirect the requests from the same IP address to the same origin server.
    // *   **rr**: the round-robin algorithm. This algorithm is used to redirect requests to origin servers in turn.
    // *   **least_time**: the least response time algorithm. This algorithm is used to minimize the latency when requests are forwarded from Anti-DDoS Pro or Anti-DDoS Premium instances to origin servers based on the intelligent DNS resolution feature.
    std::shared_ptr<string> policyMode_ = nullptr;
    // Indicates whether the forwarding rule is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> proxyEnabled_ = nullptr;
    // The details of the protocol type and port number.
    std::shared_ptr<vector<Models::DescribeWebRulesResponseBodyWebRulesProxyTypes>> proxyTypes_ = nullptr;
    // The reason why the domain name is invalid. Valid values:
    // 
    // *   **1**: No Content Provider (ICP) filing is completed for the domain name.
    // *   **2**: The business for which you registered the domain name does not meet regulatory requirements.
    // 
    // If the two reasons are both involved, the value **2** is returned.
    std::shared_ptr<int32_t> punishReason_ = nullptr;
    // Indicates whether the domain name is invalid. Valid values:
    // 
    // *   **true**: You can view the specific reasons from the **PunishReason** parameter.
    // *   **false**
    std::shared_ptr<bool> punishStatus_ = nullptr;
    // The details of the origin server address.
    std::shared_ptr<vector<Models::DescribeWebRulesResponseBodyWebRulesRealServers>> realServers_ = nullptr;
    // Indicates whether TLS 1.3 is supported. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> ssl13Enabled_ = nullptr;
    // The type of the cipher suite. Valid values:
    // 
    // *   **default**: custom cipher suites
    // *   **all**: all cipher suites, which contain strong and weak cipher suites
    // *   **strong**: strong cipher suites
    std::shared_ptr<string> sslCiphers_ = nullptr;
    // The version of the Transport Layer Security (TLS) protocol. Valid values:
    // 
    // *   **tls1.0**: TLS 1.0 or later
    // *   **tls1.1**: TLS 1.1 or later
    // *   **tls1.2**: TLS 1.2 or later
    std::shared_ptr<string> sslProtocols_ = nullptr;
    // The name of the certificate uploaded by the user to the certificate center.
    std::shared_ptr<string> userCertName_ = nullptr;
    // The IP addresses in the whitelist for the domain name.
    std::shared_ptr<vector<string>> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
