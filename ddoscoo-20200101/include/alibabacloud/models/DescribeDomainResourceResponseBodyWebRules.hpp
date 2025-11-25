// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESOURCERESPONSEBODYWEBRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESOURCERESPONSEBODYWEBRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainResourceResponseBodyWebRulesProxyTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainResourceResponseBodyWebRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainResourceResponseBodyWebRules& obj) { 
      DARABONBA_PTR_TO_JSON(BlackList, blackList_);
      DARABONBA_PTR_TO_JSON(CcEnabled, ccEnabled_);
      DARABONBA_PTR_TO_JSON(CcRuleEnabled, ccRuleEnabled_);
      DARABONBA_PTR_TO_JSON(CcTemplate, ccTemplate_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(CustomCiphers, customCiphers_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Http2Enable, http2Enable_);
      DARABONBA_PTR_TO_JSON(Http2HttpsEnable, http2HttpsEnable_);
      DARABONBA_PTR_TO_JSON(Https2HttpEnable, https2HttpEnable_);
      DARABONBA_PTR_TO_JSON(HttpsExt, httpsExt_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(OcspEnabled, ocspEnabled_);
      DARABONBA_PTR_TO_JSON(PolicyMode, policyMode_);
      DARABONBA_PTR_TO_JSON(ProxyEnabled, proxyEnabled_);
      DARABONBA_PTR_TO_JSON(ProxyTypes, proxyTypes_);
      DARABONBA_PTR_TO_JSON(PunishReason, punishReason_);
      DARABONBA_PTR_TO_JSON(PunishStatus, punishStatus_);
      DARABONBA_PTR_TO_JSON(RealServers, realServers_);
      DARABONBA_PTR_TO_JSON(RsType, rsType_);
      DARABONBA_PTR_TO_JSON(Ssl13Enabled, ssl13Enabled_);
      DARABONBA_PTR_TO_JSON(SslCiphers, sslCiphers_);
      DARABONBA_PTR_TO_JSON(SslProtocols, sslProtocols_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainResourceResponseBodyWebRules& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackList, blackList_);
      DARABONBA_PTR_FROM_JSON(CcEnabled, ccEnabled_);
      DARABONBA_PTR_FROM_JSON(CcRuleEnabled, ccRuleEnabled_);
      DARABONBA_PTR_FROM_JSON(CcTemplate, ccTemplate_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(CustomCiphers, customCiphers_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Http2Enable, http2Enable_);
      DARABONBA_PTR_FROM_JSON(Http2HttpsEnable, http2HttpsEnable_);
      DARABONBA_PTR_FROM_JSON(Https2HttpEnable, https2HttpEnable_);
      DARABONBA_PTR_FROM_JSON(HttpsExt, httpsExt_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(OcspEnabled, ocspEnabled_);
      DARABONBA_PTR_FROM_JSON(PolicyMode, policyMode_);
      DARABONBA_PTR_FROM_JSON(ProxyEnabled, proxyEnabled_);
      DARABONBA_PTR_FROM_JSON(ProxyTypes, proxyTypes_);
      DARABONBA_PTR_FROM_JSON(PunishReason, punishReason_);
      DARABONBA_PTR_FROM_JSON(PunishStatus, punishStatus_);
      DARABONBA_PTR_FROM_JSON(RealServers, realServers_);
      DARABONBA_PTR_FROM_JSON(RsType, rsType_);
      DARABONBA_PTR_FROM_JSON(Ssl13Enabled, ssl13Enabled_);
      DARABONBA_PTR_FROM_JSON(SslCiphers, sslCiphers_);
      DARABONBA_PTR_FROM_JSON(SslProtocols, sslProtocols_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    DescribeDomainResourceResponseBodyWebRules() = default ;
    DescribeDomainResourceResponseBodyWebRules(const DescribeDomainResourceResponseBodyWebRules &) = default ;
    DescribeDomainResourceResponseBodyWebRules(DescribeDomainResourceResponseBodyWebRules &&) = default ;
    DescribeDomainResourceResponseBodyWebRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainResourceResponseBodyWebRules() = default ;
    DescribeDomainResourceResponseBodyWebRules& operator=(const DescribeDomainResourceResponseBodyWebRules &) = default ;
    DescribeDomainResourceResponseBodyWebRules& operator=(DescribeDomainResourceResponseBodyWebRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blackList_ == nullptr
        && return this->ccEnabled_ == nullptr && return this->ccRuleEnabled_ == nullptr && return this->ccTemplate_ == nullptr && return this->certName_ == nullptr && return this->cname_ == nullptr
        && return this->customCiphers_ == nullptr && return this->domain_ == nullptr && return this->http2Enable_ == nullptr && return this->http2HttpsEnable_ == nullptr && return this->https2HttpEnable_ == nullptr
        && return this->httpsExt_ == nullptr && return this->instanceIds_ == nullptr && return this->ocspEnabled_ == nullptr && return this->policyMode_ == nullptr && return this->proxyEnabled_ == nullptr
        && return this->proxyTypes_ == nullptr && return this->punishReason_ == nullptr && return this->punishStatus_ == nullptr && return this->realServers_ == nullptr && return this->rsType_ == nullptr
        && return this->ssl13Enabled_ == nullptr && return this->sslCiphers_ == nullptr && return this->sslProtocols_ == nullptr && return this->whiteList_ == nullptr; };
    // blackList Field Functions 
    bool hasBlackList() const { return this->blackList_ != nullptr;};
    void deleteBlackList() { this->blackList_ = nullptr;};
    inline const vector<string> & blackList() const { DARABONBA_PTR_GET_CONST(blackList_, vector<string>) };
    inline vector<string> blackList() { DARABONBA_PTR_GET(blackList_, vector<string>) };
    inline DescribeDomainResourceResponseBodyWebRules& setBlackList(const vector<string> & blackList) { DARABONBA_PTR_SET_VALUE(blackList_, blackList) };
    inline DescribeDomainResourceResponseBodyWebRules& setBlackList(vector<string> && blackList) { DARABONBA_PTR_SET_RVALUE(blackList_, blackList) };


    // ccEnabled Field Functions 
    bool hasCcEnabled() const { return this->ccEnabled_ != nullptr;};
    void deleteCcEnabled() { this->ccEnabled_ = nullptr;};
    inline bool ccEnabled() const { DARABONBA_PTR_GET_DEFAULT(ccEnabled_, false) };
    inline DescribeDomainResourceResponseBodyWebRules& setCcEnabled(bool ccEnabled) { DARABONBA_PTR_SET_VALUE(ccEnabled_, ccEnabled) };


    // ccRuleEnabled Field Functions 
    bool hasCcRuleEnabled() const { return this->ccRuleEnabled_ != nullptr;};
    void deleteCcRuleEnabled() { this->ccRuleEnabled_ = nullptr;};
    inline bool ccRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(ccRuleEnabled_, false) };
    inline DescribeDomainResourceResponseBodyWebRules& setCcRuleEnabled(bool ccRuleEnabled) { DARABONBA_PTR_SET_VALUE(ccRuleEnabled_, ccRuleEnabled) };


    // ccTemplate Field Functions 
    bool hasCcTemplate() const { return this->ccTemplate_ != nullptr;};
    void deleteCcTemplate() { this->ccTemplate_ = nullptr;};
    inline string ccTemplate() const { DARABONBA_PTR_GET_DEFAULT(ccTemplate_, "") };
    inline DescribeDomainResourceResponseBodyWebRules& setCcTemplate(string ccTemplate) { DARABONBA_PTR_SET_VALUE(ccTemplate_, ccTemplate) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeDomainResourceResponseBodyWebRules& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeDomainResourceResponseBodyWebRules& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // customCiphers Field Functions 
    bool hasCustomCiphers() const { return this->customCiphers_ != nullptr;};
    void deleteCustomCiphers() { this->customCiphers_ = nullptr;};
    inline const vector<string> & customCiphers() const { DARABONBA_PTR_GET_CONST(customCiphers_, vector<string>) };
    inline vector<string> customCiphers() { DARABONBA_PTR_GET(customCiphers_, vector<string>) };
    inline DescribeDomainResourceResponseBodyWebRules& setCustomCiphers(const vector<string> & customCiphers) { DARABONBA_PTR_SET_VALUE(customCiphers_, customCiphers) };
    inline DescribeDomainResourceResponseBodyWebRules& setCustomCiphers(vector<string> && customCiphers) { DARABONBA_PTR_SET_RVALUE(customCiphers_, customCiphers) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainResourceResponseBodyWebRules& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // http2Enable Field Functions 
    bool hasHttp2Enable() const { return this->http2Enable_ != nullptr;};
    void deleteHttp2Enable() { this->http2Enable_ = nullptr;};
    inline bool http2Enable() const { DARABONBA_PTR_GET_DEFAULT(http2Enable_, false) };
    inline DescribeDomainResourceResponseBodyWebRules& setHttp2Enable(bool http2Enable) { DARABONBA_PTR_SET_VALUE(http2Enable_, http2Enable) };


    // http2HttpsEnable Field Functions 
    bool hasHttp2HttpsEnable() const { return this->http2HttpsEnable_ != nullptr;};
    void deleteHttp2HttpsEnable() { this->http2HttpsEnable_ = nullptr;};
    inline bool http2HttpsEnable() const { DARABONBA_PTR_GET_DEFAULT(http2HttpsEnable_, false) };
    inline DescribeDomainResourceResponseBodyWebRules& setHttp2HttpsEnable(bool http2HttpsEnable) { DARABONBA_PTR_SET_VALUE(http2HttpsEnable_, http2HttpsEnable) };


    // https2HttpEnable Field Functions 
    bool hasHttps2HttpEnable() const { return this->https2HttpEnable_ != nullptr;};
    void deleteHttps2HttpEnable() { this->https2HttpEnable_ = nullptr;};
    inline bool https2HttpEnable() const { DARABONBA_PTR_GET_DEFAULT(https2HttpEnable_, false) };
    inline DescribeDomainResourceResponseBodyWebRules& setHttps2HttpEnable(bool https2HttpEnable) { DARABONBA_PTR_SET_VALUE(https2HttpEnable_, https2HttpEnable) };


    // httpsExt Field Functions 
    bool hasHttpsExt() const { return this->httpsExt_ != nullptr;};
    void deleteHttpsExt() { this->httpsExt_ = nullptr;};
    inline string httpsExt() const { DARABONBA_PTR_GET_DEFAULT(httpsExt_, "") };
    inline DescribeDomainResourceResponseBodyWebRules& setHttpsExt(string httpsExt) { DARABONBA_PTR_SET_VALUE(httpsExt_, httpsExt) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeDomainResourceResponseBodyWebRules& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeDomainResourceResponseBodyWebRules& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // ocspEnabled Field Functions 
    bool hasOcspEnabled() const { return this->ocspEnabled_ != nullptr;};
    void deleteOcspEnabled() { this->ocspEnabled_ = nullptr;};
    inline bool ocspEnabled() const { DARABONBA_PTR_GET_DEFAULT(ocspEnabled_, false) };
    inline DescribeDomainResourceResponseBodyWebRules& setOcspEnabled(bool ocspEnabled) { DARABONBA_PTR_SET_VALUE(ocspEnabled_, ocspEnabled) };


    // policyMode Field Functions 
    bool hasPolicyMode() const { return this->policyMode_ != nullptr;};
    void deletePolicyMode() { this->policyMode_ = nullptr;};
    inline string policyMode() const { DARABONBA_PTR_GET_DEFAULT(policyMode_, "") };
    inline DescribeDomainResourceResponseBodyWebRules& setPolicyMode(string policyMode) { DARABONBA_PTR_SET_VALUE(policyMode_, policyMode) };


    // proxyEnabled Field Functions 
    bool hasProxyEnabled() const { return this->proxyEnabled_ != nullptr;};
    void deleteProxyEnabled() { this->proxyEnabled_ = nullptr;};
    inline bool proxyEnabled() const { DARABONBA_PTR_GET_DEFAULT(proxyEnabled_, false) };
    inline DescribeDomainResourceResponseBodyWebRules& setProxyEnabled(bool proxyEnabled) { DARABONBA_PTR_SET_VALUE(proxyEnabled_, proxyEnabled) };


    // proxyTypes Field Functions 
    bool hasProxyTypes() const { return this->proxyTypes_ != nullptr;};
    void deleteProxyTypes() { this->proxyTypes_ = nullptr;};
    inline const vector<Models::DescribeDomainResourceResponseBodyWebRulesProxyTypes> & proxyTypes() const { DARABONBA_PTR_GET_CONST(proxyTypes_, vector<Models::DescribeDomainResourceResponseBodyWebRulesProxyTypes>) };
    inline vector<Models::DescribeDomainResourceResponseBodyWebRulesProxyTypes> proxyTypes() { DARABONBA_PTR_GET(proxyTypes_, vector<Models::DescribeDomainResourceResponseBodyWebRulesProxyTypes>) };
    inline DescribeDomainResourceResponseBodyWebRules& setProxyTypes(const vector<Models::DescribeDomainResourceResponseBodyWebRulesProxyTypes> & proxyTypes) { DARABONBA_PTR_SET_VALUE(proxyTypes_, proxyTypes) };
    inline DescribeDomainResourceResponseBodyWebRules& setProxyTypes(vector<Models::DescribeDomainResourceResponseBodyWebRulesProxyTypes> && proxyTypes) { DARABONBA_PTR_SET_RVALUE(proxyTypes_, proxyTypes) };


    // punishReason Field Functions 
    bool hasPunishReason() const { return this->punishReason_ != nullptr;};
    void deletePunishReason() { this->punishReason_ = nullptr;};
    inline int32_t punishReason() const { DARABONBA_PTR_GET_DEFAULT(punishReason_, 0) };
    inline DescribeDomainResourceResponseBodyWebRules& setPunishReason(int32_t punishReason) { DARABONBA_PTR_SET_VALUE(punishReason_, punishReason) };


    // punishStatus Field Functions 
    bool hasPunishStatus() const { return this->punishStatus_ != nullptr;};
    void deletePunishStatus() { this->punishStatus_ = nullptr;};
    inline bool punishStatus() const { DARABONBA_PTR_GET_DEFAULT(punishStatus_, false) };
    inline DescribeDomainResourceResponseBodyWebRules& setPunishStatus(bool punishStatus) { DARABONBA_PTR_SET_VALUE(punishStatus_, punishStatus) };


    // realServers Field Functions 
    bool hasRealServers() const { return this->realServers_ != nullptr;};
    void deleteRealServers() { this->realServers_ = nullptr;};
    inline const vector<string> & realServers() const { DARABONBA_PTR_GET_CONST(realServers_, vector<string>) };
    inline vector<string> realServers() { DARABONBA_PTR_GET(realServers_, vector<string>) };
    inline DescribeDomainResourceResponseBodyWebRules& setRealServers(const vector<string> & realServers) { DARABONBA_PTR_SET_VALUE(realServers_, realServers) };
    inline DescribeDomainResourceResponseBodyWebRules& setRealServers(vector<string> && realServers) { DARABONBA_PTR_SET_RVALUE(realServers_, realServers) };


    // rsType Field Functions 
    bool hasRsType() const { return this->rsType_ != nullptr;};
    void deleteRsType() { this->rsType_ = nullptr;};
    inline int32_t rsType() const { DARABONBA_PTR_GET_DEFAULT(rsType_, 0) };
    inline DescribeDomainResourceResponseBodyWebRules& setRsType(int32_t rsType) { DARABONBA_PTR_SET_VALUE(rsType_, rsType) };


    // ssl13Enabled Field Functions 
    bool hasSsl13Enabled() const { return this->ssl13Enabled_ != nullptr;};
    void deleteSsl13Enabled() { this->ssl13Enabled_ = nullptr;};
    inline bool ssl13Enabled() const { DARABONBA_PTR_GET_DEFAULT(ssl13Enabled_, false) };
    inline DescribeDomainResourceResponseBodyWebRules& setSsl13Enabled(bool ssl13Enabled) { DARABONBA_PTR_SET_VALUE(ssl13Enabled_, ssl13Enabled) };


    // sslCiphers Field Functions 
    bool hasSslCiphers() const { return this->sslCiphers_ != nullptr;};
    void deleteSslCiphers() { this->sslCiphers_ = nullptr;};
    inline string sslCiphers() const { DARABONBA_PTR_GET_DEFAULT(sslCiphers_, "") };
    inline DescribeDomainResourceResponseBodyWebRules& setSslCiphers(string sslCiphers) { DARABONBA_PTR_SET_VALUE(sslCiphers_, sslCiphers) };


    // sslProtocols Field Functions 
    bool hasSslProtocols() const { return this->sslProtocols_ != nullptr;};
    void deleteSslProtocols() { this->sslProtocols_ = nullptr;};
    inline string sslProtocols() const { DARABONBA_PTR_GET_DEFAULT(sslProtocols_, "") };
    inline DescribeDomainResourceResponseBodyWebRules& setSslProtocols(string sslProtocols) { DARABONBA_PTR_SET_VALUE(sslProtocols_, sslProtocols) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline const vector<string> & whiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<string>) };
    inline vector<string> whiteList() { DARABONBA_PTR_GET(whiteList_, vector<string>) };
    inline DescribeDomainResourceResponseBodyWebRules& setWhiteList(const vector<string> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
    inline DescribeDomainResourceResponseBodyWebRules& setWhiteList(vector<string> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


  protected:
    // The IP addresses that are included in the blacklist of the domain name.
    std::shared_ptr<vector<string>> blackList_ = nullptr;
    // Indicates whether Frequency Control is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> ccEnabled_ = nullptr;
    // Indicates whether the Custom Rules switch of Frequency Control is turned on. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> ccRuleEnabled_ = nullptr;
    // The mode of Frequency Control. Valid values:
    // 
    // *   **default**: the Normal mode
    // *   **gf_under_attack**: the Emergency mode
    // *   **gf_sos_verify**: the Strict mode
    // *   **gf_sos_verify**: the Super Strict mode
    std::shared_ptr<string> ccTemplate_ = nullptr;
    // The name of the SSL certificate used by the domain name.
    std::shared_ptr<string> certName_ = nullptr;
    // The CNAME provided by the instance to which the domain name is added.
    std::shared_ptr<string> cname_ = nullptr;
    // The custom cipher suites.
    std::shared_ptr<vector<string>> customCiphers_ = nullptr;
    // The domain name of the website.
    std::shared_ptr<string> domain_ = nullptr;
    // Indicates whether Enable HTTP/2 is turned on. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> http2Enable_ = nullptr;
    // Indicates whether Enable HTTPS Redirection is turned on. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> http2HttpsEnable_ = nullptr;
    // Indicates whether Enable HTTP Redirection of Back-to-origin Requests is turned on. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> https2HttpEnable_ = nullptr;
    // The advanced HTTPS settings. This parameter takes effect only when the value of the **ProxyType** parameter includes **https**. The value is a string that consists of a JSON struct. The JSON struct contains the following fields:
    // 
    // *   **Http2https**: indicates whether Enable HTTPS Redirection is turned on. Data type: integer. Valid values: **0** and **1**. The value 0 indicates that Enable HTTPS Redirection is turned on. The value 1 indicates that Enable HTTPS Redirection is turned off.
    // *   **Https2http**: indicates whether Enable HTTP Redirection of Back-to-origin Requests is turned on. Data type: integer. Valid values: **0** and **1**. The value 0 indicates that the feature is turned on. The value 1 indicates that the feature is turned off.
    // *   **Http2**: indicates whether Enable HTTP/2 is turned on. Data type: integer. Valid values: **0** and **1**. The value 0 indicates that Enable HTTP/2 is turned off. The value 1 indicates that Enable HTTP/2 is turned on.
    std::shared_ptr<string> httpsExt_ = nullptr;
    // The IDs of the instances to which the domain name is added.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // Indicates whether the Online Certificate Status Protocol (OCSP) feature is turned on. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> ocspEnabled_ = nullptr;
    // The scheduling algorithm for back-to-origin traffic. Valid values:
    // 
    // *   **ip_hash**: the IP hash algorithm. This algorithm is used to redirect the requests from the same IP address to the same origin server.
    // *   **rr**: the round-robin algorithm. This algorithm is used to redirect requests to origin servers in turn.
    // *   **least_time**: the least response time algorithm. This algorithm is used to minimize the latency when requests are forwarded from the instance to origin servers based on the intelligent DNS resolution feature.
    std::shared_ptr<string> policyMode_ = nullptr;
    // Indicates whether the instance forwards the traffic that is destined for the website. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> proxyEnabled_ = nullptr;
    // The details about the protocol type and port number.
    std::shared_ptr<vector<Models::DescribeDomainResourceResponseBodyWebRulesProxyTypes>> proxyTypes_ = nullptr;
    // The reason why the domain name is invalid. Valid values:
    // 
    // *   **1**: No Content Provider (ICP) filing is completed for the domain name.
    // *   **2**: The business for which you registered the domain name does not meet regulatory requirements.
    // 
    // If the two reasons are both involved, the value **2** is returned.
    std::shared_ptr<int32_t> punishReason_ = nullptr;
    // Indicates whether the domain name is invalid. Valid values:
    // 
    // *   **true**: The domain name is invalid. You can view the specific reasons from the **PunishReason** parameter.
    // *   **false**: The domain name is valid.
    std::shared_ptr<bool> punishStatus_ = nullptr;
    // The addresses of origin servers.
    std::shared_ptr<vector<string>> realServers_ = nullptr;
    // The address type of the origin server. Valid values:
    // 
    // *   **0**: IP address
    // *   **1**: domain name
    std::shared_ptr<int32_t> rsType_ = nullptr;
    // Indicates whether TLS 1.3 is supported. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> ssl13Enabled_ = nullptr;
    // The type of the cipher suite. Valid values:
    // 
    // *   **default**: custom cipher suite
    // *   **all**: all cipher suites
    // *   **strong**: strong cipher suites
    std::shared_ptr<string> sslCiphers_ = nullptr;
    // The version of the TLS protocol. Valid values:
    // 
    // *   **tls1.0**: TLS 1.0 or later
    // *   **tls1.1**: TLS 1.1 or later
    // *   **tls1.2**: TLS 1.2 or later
    std::shared_ptr<string> sslProtocols_ = nullptr;
    // The IP addresses that are included in the whitelist of the domain name.
    std::shared_ptr<vector<string>> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
