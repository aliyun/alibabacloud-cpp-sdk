// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WebRules, webRules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WebRules, webRules_);
    };
    DescribeWebRulesResponseBody() = default ;
    DescribeWebRulesResponseBody(const DescribeWebRulesResponseBody &) = default ;
    DescribeWebRulesResponseBody(DescribeWebRulesResponseBody &&) = default ;
    DescribeWebRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebRulesResponseBody() = default ;
    DescribeWebRulesResponseBody& operator=(const DescribeWebRulesResponseBody &) = default ;
    DescribeWebRulesResponseBody& operator=(DescribeWebRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WebRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WebRules& obj) { 
        DARABONBA_PTR_TO_JSON(BlackList, blackList_);
        DARABONBA_PTR_TO_JSON(CcEnabled, ccEnabled_);
        DARABONBA_PTR_TO_JSON(CcRuleEnabled, ccRuleEnabled_);
        DARABONBA_PTR_TO_JSON(CcTemplate, ccTemplate_);
        DARABONBA_PTR_TO_JSON(CertExpireTime, certExpireTime_);
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
        DARABONBA_PTR_TO_JSON(Tls13CustomCiphers, tls13CustomCiphers_);
        DARABONBA_PTR_TO_JSON(UserCertName, userCertName_);
        DARABONBA_PTR_TO_JSON(WafProtectionEnable, wafProtectionEnable_);
        DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
      };
      friend void from_json(const Darabonba::Json& j, WebRules& obj) { 
        DARABONBA_PTR_FROM_JSON(BlackList, blackList_);
        DARABONBA_PTR_FROM_JSON(CcEnabled, ccEnabled_);
        DARABONBA_PTR_FROM_JSON(CcRuleEnabled, ccRuleEnabled_);
        DARABONBA_PTR_FROM_JSON(CcTemplate, ccTemplate_);
        DARABONBA_PTR_FROM_JSON(CertExpireTime, certExpireTime_);
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
        DARABONBA_PTR_FROM_JSON(Tls13CustomCiphers, tls13CustomCiphers_);
        DARABONBA_PTR_FROM_JSON(UserCertName, userCertName_);
        DARABONBA_PTR_FROM_JSON(WafProtectionEnable, wafProtectionEnable_);
        DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
      };
      WebRules() = default ;
      WebRules(const WebRules &) = default ;
      WebRules(WebRules &&) = default ;
      WebRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WebRules() = default ;
      WebRules& operator=(const WebRules &) = default ;
      WebRules& operator=(WebRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RealServers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RealServers& obj) { 
          DARABONBA_PTR_TO_JSON(RealServer, realServer_);
          DARABONBA_PTR_TO_JSON(RsType, rsType_);
        };
        friend void from_json(const Darabonba::Json& j, RealServers& obj) { 
          DARABONBA_PTR_FROM_JSON(RealServer, realServer_);
          DARABONBA_PTR_FROM_JSON(RsType, rsType_);
        };
        RealServers() = default ;
        RealServers(const RealServers &) = default ;
        RealServers(RealServers &&) = default ;
        RealServers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RealServers() = default ;
        RealServers& operator=(const RealServers &) = default ;
        RealServers& operator=(RealServers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->realServer_ == nullptr
        && this->rsType_ == nullptr; };
        // realServer Field Functions 
        bool hasRealServer() const { return this->realServer_ != nullptr;};
        void deleteRealServer() { this->realServer_ = nullptr;};
        inline string getRealServer() const { DARABONBA_PTR_GET_DEFAULT(realServer_, "") };
        inline RealServers& setRealServer(string realServer) { DARABONBA_PTR_SET_VALUE(realServer_, realServer) };


        // rsType Field Functions 
        bool hasRsType() const { return this->rsType_ != nullptr;};
        void deleteRsType() { this->rsType_ = nullptr;};
        inline int32_t getRsType() const { DARABONBA_PTR_GET_DEFAULT(rsType_, 0) };
        inline RealServers& setRsType(int32_t rsType) { DARABONBA_PTR_SET_VALUE(rsType_, rsType) };


      protected:
        // The origin server address.
        shared_ptr<string> realServer_ {};
        // The type of the origin server address. Valid values:
        // 
        // - **0**: the IP address of the origin server.
        // - **1**: the domain name of the origin server. This is typically used when another proxy service (such as WAF) is deployed between the origin server and Anti-DDoS Pro or Anti-DDoS Premium. The value specifies the redirect address of the proxy service (such as the WAF CNAME address).
        shared_ptr<int32_t> rsType_ {};
      };

      class ProxyTypes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProxyTypes& obj) { 
          DARABONBA_PTR_TO_JSON(ProxyPorts, proxyPorts_);
          DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
        };
        friend void from_json(const Darabonba::Json& j, ProxyTypes& obj) { 
          DARABONBA_PTR_FROM_JSON(ProxyPorts, proxyPorts_);
          DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
        };
        ProxyTypes() = default ;
        ProxyTypes(const ProxyTypes &) = default ;
        ProxyTypes(ProxyTypes &&) = default ;
        ProxyTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProxyTypes() = default ;
        ProxyTypes& operator=(const ProxyTypes &) = default ;
        ProxyTypes& operator=(ProxyTypes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->proxyPorts_ == nullptr
        && this->proxyType_ == nullptr; };
        // proxyPorts Field Functions 
        bool hasProxyPorts() const { return this->proxyPorts_ != nullptr;};
        void deleteProxyPorts() { this->proxyPorts_ = nullptr;};
        inline const vector<string> & getProxyPorts() const { DARABONBA_PTR_GET_CONST(proxyPorts_, vector<string>) };
        inline vector<string> getProxyPorts() { DARABONBA_PTR_GET(proxyPorts_, vector<string>) };
        inline ProxyTypes& setProxyPorts(const vector<string> & proxyPorts) { DARABONBA_PTR_SET_VALUE(proxyPorts_, proxyPorts) };
        inline ProxyTypes& setProxyPorts(vector<string> && proxyPorts) { DARABONBA_PTR_SET_RVALUE(proxyPorts_, proxyPorts) };


        // proxyType Field Functions 
        bool hasProxyType() const { return this->proxyType_ != nullptr;};
        void deleteProxyType() { this->proxyType_ = nullptr;};
        inline string getProxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
        inline ProxyTypes& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


      protected:
        // The list of ports.
        shared_ptr<vector<string>> proxyPorts_ {};
        // The forwarding protocol type. Valid values:
        // - **http**: HTTP.
        // - **https**: HTTPS.
        // - **websocket**: WebSocket.
        // - **websockets**: WebSockets.
        shared_ptr<string> proxyType_ {};
      };

      class GmCert : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GmCert& obj) { 
          DARABONBA_PTR_TO_JSON(CertId, certId_);
          DARABONBA_PTR_TO_JSON(GmEnable, gmEnable_);
          DARABONBA_PTR_TO_JSON(GmOnly, gmOnly_);
        };
        friend void from_json(const Darabonba::Json& j, GmCert& obj) { 
          DARABONBA_PTR_FROM_JSON(CertId, certId_);
          DARABONBA_PTR_FROM_JSON(GmEnable, gmEnable_);
          DARABONBA_PTR_FROM_JSON(GmOnly, gmOnly_);
        };
        GmCert() = default ;
        GmCert(const GmCert &) = default ;
        GmCert(GmCert &&) = default ;
        GmCert(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GmCert() = default ;
        GmCert& operator=(const GmCert &) = default ;
        GmCert& operator=(GmCert &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->certId_ == nullptr
        && this->gmEnable_ == nullptr && this->gmOnly_ == nullptr; };
        // certId Field Functions 
        bool hasCertId() const { return this->certId_ != nullptr;};
        void deleteCertId() { this->certId_ = nullptr;};
        inline string getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
        inline GmCert& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


        // gmEnable Field Functions 
        bool hasGmEnable() const { return this->gmEnable_ != nullptr;};
        void deleteGmEnable() { this->gmEnable_ = nullptr;};
        inline int64_t getGmEnable() const { DARABONBA_PTR_GET_DEFAULT(gmEnable_, 0L) };
        inline GmCert& setGmEnable(int64_t gmEnable) { DARABONBA_PTR_SET_VALUE(gmEnable_, gmEnable) };


        // gmOnly Field Functions 
        bool hasGmOnly() const { return this->gmOnly_ != nullptr;};
        void deleteGmOnly() { this->gmOnly_ = nullptr;};
        inline int64_t getGmOnly() const { DARABONBA_PTR_GET_DEFAULT(gmOnly_, 0L) };
        inline GmCert& setGmOnly(int64_t gmOnly) { DARABONBA_PTR_SET_VALUE(gmOnly_, gmOnly) };


      protected:
        // The ID of the GM certificate.
        shared_ptr<string> certId_ {};
        // Indicates whether GM authentication is enabled.
        // 
        // - 0: Disabled.
        // - 1: Enabled.
        shared_ptr<int64_t> gmEnable_ {};
        // Indicates whether only GM client access is supported.
        // 
        // - 0: Disabled.
        // - 1: Enabled.
        shared_ptr<int64_t> gmOnly_ {};
      };

      virtual bool empty() const override { return this->blackList_ == nullptr
        && this->ccEnabled_ == nullptr && this->ccRuleEnabled_ == nullptr && this->ccTemplate_ == nullptr && this->certExpireTime_ == nullptr && this->certName_ == nullptr
        && this->certRegion_ == nullptr && this->cname_ == nullptr && this->customCiphers_ == nullptr && this->domain_ == nullptr && this->gmCert_ == nullptr
        && this->http2Enable_ == nullptr && this->http2HttpsEnable_ == nullptr && this->https2HttpEnable_ == nullptr && this->ocspEnabled_ == nullptr && this->policyMode_ == nullptr
        && this->proxyEnabled_ == nullptr && this->proxyTypes_ == nullptr && this->punishReason_ == nullptr && this->punishStatus_ == nullptr && this->realServers_ == nullptr
        && this->ssl13Enabled_ == nullptr && this->sslCiphers_ == nullptr && this->sslProtocols_ == nullptr && this->tls13CustomCiphers_ == nullptr && this->userCertName_ == nullptr
        && this->wafProtectionEnable_ == nullptr && this->whiteList_ == nullptr; };
      // blackList Field Functions 
      bool hasBlackList() const { return this->blackList_ != nullptr;};
      void deleteBlackList() { this->blackList_ = nullptr;};
      inline const vector<string> & getBlackList() const { DARABONBA_PTR_GET_CONST(blackList_, vector<string>) };
      inline vector<string> getBlackList() { DARABONBA_PTR_GET(blackList_, vector<string>) };
      inline WebRules& setBlackList(const vector<string> & blackList) { DARABONBA_PTR_SET_VALUE(blackList_, blackList) };
      inline WebRules& setBlackList(vector<string> && blackList) { DARABONBA_PTR_SET_RVALUE(blackList_, blackList) };


      // ccEnabled Field Functions 
      bool hasCcEnabled() const { return this->ccEnabled_ != nullptr;};
      void deleteCcEnabled() { this->ccEnabled_ = nullptr;};
      inline bool getCcEnabled() const { DARABONBA_PTR_GET_DEFAULT(ccEnabled_, false) };
      inline WebRules& setCcEnabled(bool ccEnabled) { DARABONBA_PTR_SET_VALUE(ccEnabled_, ccEnabled) };


      // ccRuleEnabled Field Functions 
      bool hasCcRuleEnabled() const { return this->ccRuleEnabled_ != nullptr;};
      void deleteCcRuleEnabled() { this->ccRuleEnabled_ = nullptr;};
      inline bool getCcRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(ccRuleEnabled_, false) };
      inline WebRules& setCcRuleEnabled(bool ccRuleEnabled) { DARABONBA_PTR_SET_VALUE(ccRuleEnabled_, ccRuleEnabled) };


      // ccTemplate Field Functions 
      bool hasCcTemplate() const { return this->ccTemplate_ != nullptr;};
      void deleteCcTemplate() { this->ccTemplate_ = nullptr;};
      inline string getCcTemplate() const { DARABONBA_PTR_GET_DEFAULT(ccTemplate_, "") };
      inline WebRules& setCcTemplate(string ccTemplate) { DARABONBA_PTR_SET_VALUE(ccTemplate_, ccTemplate) };


      // certExpireTime Field Functions 
      bool hasCertExpireTime() const { return this->certExpireTime_ != nullptr;};
      void deleteCertExpireTime() { this->certExpireTime_ = nullptr;};
      inline int64_t getCertExpireTime() const { DARABONBA_PTR_GET_DEFAULT(certExpireTime_, 0L) };
      inline WebRules& setCertExpireTime(int64_t certExpireTime) { DARABONBA_PTR_SET_VALUE(certExpireTime_, certExpireTime) };


      // certName Field Functions 
      bool hasCertName() const { return this->certName_ != nullptr;};
      void deleteCertName() { this->certName_ = nullptr;};
      inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
      inline WebRules& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


      // certRegion Field Functions 
      bool hasCertRegion() const { return this->certRegion_ != nullptr;};
      void deleteCertRegion() { this->certRegion_ = nullptr;};
      inline string getCertRegion() const { DARABONBA_PTR_GET_DEFAULT(certRegion_, "") };
      inline WebRules& setCertRegion(string certRegion) { DARABONBA_PTR_SET_VALUE(certRegion_, certRegion) };


      // cname Field Functions 
      bool hasCname() const { return this->cname_ != nullptr;};
      void deleteCname() { this->cname_ = nullptr;};
      inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
      inline WebRules& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


      // customCiphers Field Functions 
      bool hasCustomCiphers() const { return this->customCiphers_ != nullptr;};
      void deleteCustomCiphers() { this->customCiphers_ = nullptr;};
      inline const vector<string> & getCustomCiphers() const { DARABONBA_PTR_GET_CONST(customCiphers_, vector<string>) };
      inline vector<string> getCustomCiphers() { DARABONBA_PTR_GET(customCiphers_, vector<string>) };
      inline WebRules& setCustomCiphers(const vector<string> & customCiphers) { DARABONBA_PTR_SET_VALUE(customCiphers_, customCiphers) };
      inline WebRules& setCustomCiphers(vector<string> && customCiphers) { DARABONBA_PTR_SET_RVALUE(customCiphers_, customCiphers) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline WebRules& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // gmCert Field Functions 
      bool hasGmCert() const { return this->gmCert_ != nullptr;};
      void deleteGmCert() { this->gmCert_ = nullptr;};
      inline const WebRules::GmCert & getGmCert() const { DARABONBA_PTR_GET_CONST(gmCert_, WebRules::GmCert) };
      inline WebRules::GmCert getGmCert() { DARABONBA_PTR_GET(gmCert_, WebRules::GmCert) };
      inline WebRules& setGmCert(const WebRules::GmCert & gmCert) { DARABONBA_PTR_SET_VALUE(gmCert_, gmCert) };
      inline WebRules& setGmCert(WebRules::GmCert && gmCert) { DARABONBA_PTR_SET_RVALUE(gmCert_, gmCert) };


      // http2Enable Field Functions 
      bool hasHttp2Enable() const { return this->http2Enable_ != nullptr;};
      void deleteHttp2Enable() { this->http2Enable_ = nullptr;};
      inline bool getHttp2Enable() const { DARABONBA_PTR_GET_DEFAULT(http2Enable_, false) };
      inline WebRules& setHttp2Enable(bool http2Enable) { DARABONBA_PTR_SET_VALUE(http2Enable_, http2Enable) };


      // http2HttpsEnable Field Functions 
      bool hasHttp2HttpsEnable() const { return this->http2HttpsEnable_ != nullptr;};
      void deleteHttp2HttpsEnable() { this->http2HttpsEnable_ = nullptr;};
      inline bool getHttp2HttpsEnable() const { DARABONBA_PTR_GET_DEFAULT(http2HttpsEnable_, false) };
      inline WebRules& setHttp2HttpsEnable(bool http2HttpsEnable) { DARABONBA_PTR_SET_VALUE(http2HttpsEnable_, http2HttpsEnable) };


      // https2HttpEnable Field Functions 
      bool hasHttps2HttpEnable() const { return this->https2HttpEnable_ != nullptr;};
      void deleteHttps2HttpEnable() { this->https2HttpEnable_ = nullptr;};
      inline bool getHttps2HttpEnable() const { DARABONBA_PTR_GET_DEFAULT(https2HttpEnable_, false) };
      inline WebRules& setHttps2HttpEnable(bool https2HttpEnable) { DARABONBA_PTR_SET_VALUE(https2HttpEnable_, https2HttpEnable) };


      // ocspEnabled Field Functions 
      bool hasOcspEnabled() const { return this->ocspEnabled_ != nullptr;};
      void deleteOcspEnabled() { this->ocspEnabled_ = nullptr;};
      inline bool getOcspEnabled() const { DARABONBA_PTR_GET_DEFAULT(ocspEnabled_, false) };
      inline WebRules& setOcspEnabled(bool ocspEnabled) { DARABONBA_PTR_SET_VALUE(ocspEnabled_, ocspEnabled) };


      // policyMode Field Functions 
      bool hasPolicyMode() const { return this->policyMode_ != nullptr;};
      void deletePolicyMode() { this->policyMode_ = nullptr;};
      inline string getPolicyMode() const { DARABONBA_PTR_GET_DEFAULT(policyMode_, "") };
      inline WebRules& setPolicyMode(string policyMode) { DARABONBA_PTR_SET_VALUE(policyMode_, policyMode) };


      // proxyEnabled Field Functions 
      bool hasProxyEnabled() const { return this->proxyEnabled_ != nullptr;};
      void deleteProxyEnabled() { this->proxyEnabled_ = nullptr;};
      inline bool getProxyEnabled() const { DARABONBA_PTR_GET_DEFAULT(proxyEnabled_, false) };
      inline WebRules& setProxyEnabled(bool proxyEnabled) { DARABONBA_PTR_SET_VALUE(proxyEnabled_, proxyEnabled) };


      // proxyTypes Field Functions 
      bool hasProxyTypes() const { return this->proxyTypes_ != nullptr;};
      void deleteProxyTypes() { this->proxyTypes_ = nullptr;};
      inline const vector<WebRules::ProxyTypes> & getProxyTypes() const { DARABONBA_PTR_GET_CONST(proxyTypes_, vector<WebRules::ProxyTypes>) };
      inline vector<WebRules::ProxyTypes> getProxyTypes() { DARABONBA_PTR_GET(proxyTypes_, vector<WebRules::ProxyTypes>) };
      inline WebRules& setProxyTypes(const vector<WebRules::ProxyTypes> & proxyTypes) { DARABONBA_PTR_SET_VALUE(proxyTypes_, proxyTypes) };
      inline WebRules& setProxyTypes(vector<WebRules::ProxyTypes> && proxyTypes) { DARABONBA_PTR_SET_RVALUE(proxyTypes_, proxyTypes) };


      // punishReason Field Functions 
      bool hasPunishReason() const { return this->punishReason_ != nullptr;};
      void deletePunishReason() { this->punishReason_ = nullptr;};
      inline int32_t getPunishReason() const { DARABONBA_PTR_GET_DEFAULT(punishReason_, 0) };
      inline WebRules& setPunishReason(int32_t punishReason) { DARABONBA_PTR_SET_VALUE(punishReason_, punishReason) };


      // punishStatus Field Functions 
      bool hasPunishStatus() const { return this->punishStatus_ != nullptr;};
      void deletePunishStatus() { this->punishStatus_ = nullptr;};
      inline bool getPunishStatus() const { DARABONBA_PTR_GET_DEFAULT(punishStatus_, false) };
      inline WebRules& setPunishStatus(bool punishStatus) { DARABONBA_PTR_SET_VALUE(punishStatus_, punishStatus) };


      // realServers Field Functions 
      bool hasRealServers() const { return this->realServers_ != nullptr;};
      void deleteRealServers() { this->realServers_ = nullptr;};
      inline const vector<WebRules::RealServers> & getRealServers() const { DARABONBA_PTR_GET_CONST(realServers_, vector<WebRules::RealServers>) };
      inline vector<WebRules::RealServers> getRealServers() { DARABONBA_PTR_GET(realServers_, vector<WebRules::RealServers>) };
      inline WebRules& setRealServers(const vector<WebRules::RealServers> & realServers) { DARABONBA_PTR_SET_VALUE(realServers_, realServers) };
      inline WebRules& setRealServers(vector<WebRules::RealServers> && realServers) { DARABONBA_PTR_SET_RVALUE(realServers_, realServers) };


      // ssl13Enabled Field Functions 
      bool hasSsl13Enabled() const { return this->ssl13Enabled_ != nullptr;};
      void deleteSsl13Enabled() { this->ssl13Enabled_ = nullptr;};
      inline bool getSsl13Enabled() const { DARABONBA_PTR_GET_DEFAULT(ssl13Enabled_, false) };
      inline WebRules& setSsl13Enabled(bool ssl13Enabled) { DARABONBA_PTR_SET_VALUE(ssl13Enabled_, ssl13Enabled) };


      // sslCiphers Field Functions 
      bool hasSslCiphers() const { return this->sslCiphers_ != nullptr;};
      void deleteSslCiphers() { this->sslCiphers_ = nullptr;};
      inline string getSslCiphers() const { DARABONBA_PTR_GET_DEFAULT(sslCiphers_, "") };
      inline WebRules& setSslCiphers(string sslCiphers) { DARABONBA_PTR_SET_VALUE(sslCiphers_, sslCiphers) };


      // sslProtocols Field Functions 
      bool hasSslProtocols() const { return this->sslProtocols_ != nullptr;};
      void deleteSslProtocols() { this->sslProtocols_ = nullptr;};
      inline string getSslProtocols() const { DARABONBA_PTR_GET_DEFAULT(sslProtocols_, "") };
      inline WebRules& setSslProtocols(string sslProtocols) { DARABONBA_PTR_SET_VALUE(sslProtocols_, sslProtocols) };


      // tls13CustomCiphers Field Functions 
      bool hasTls13CustomCiphers() const { return this->tls13CustomCiphers_ != nullptr;};
      void deleteTls13CustomCiphers() { this->tls13CustomCiphers_ = nullptr;};
      inline const vector<string> & getTls13CustomCiphers() const { DARABONBA_PTR_GET_CONST(tls13CustomCiphers_, vector<string>) };
      inline vector<string> getTls13CustomCiphers() { DARABONBA_PTR_GET(tls13CustomCiphers_, vector<string>) };
      inline WebRules& setTls13CustomCiphers(const vector<string> & tls13CustomCiphers) { DARABONBA_PTR_SET_VALUE(tls13CustomCiphers_, tls13CustomCiphers) };
      inline WebRules& setTls13CustomCiphers(vector<string> && tls13CustomCiphers) { DARABONBA_PTR_SET_RVALUE(tls13CustomCiphers_, tls13CustomCiphers) };


      // userCertName Field Functions 
      bool hasUserCertName() const { return this->userCertName_ != nullptr;};
      void deleteUserCertName() { this->userCertName_ = nullptr;};
      inline string getUserCertName() const { DARABONBA_PTR_GET_DEFAULT(userCertName_, "") };
      inline WebRules& setUserCertName(string userCertName) { DARABONBA_PTR_SET_VALUE(userCertName_, userCertName) };


      // wafProtectionEnable Field Functions 
      bool hasWafProtectionEnable() const { return this->wafProtectionEnable_ != nullptr;};
      void deleteWafProtectionEnable() { this->wafProtectionEnable_ = nullptr;};
      inline bool getWafProtectionEnable() const { DARABONBA_PTR_GET_DEFAULT(wafProtectionEnable_, false) };
      inline WebRules& setWafProtectionEnable(bool wafProtectionEnable) { DARABONBA_PTR_SET_VALUE(wafProtectionEnable_, wafProtectionEnable) };


      // whiteList Field Functions 
      bool hasWhiteList() const { return this->whiteList_ != nullptr;};
      void deleteWhiteList() { this->whiteList_ = nullptr;};
      inline const vector<string> & getWhiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<string>) };
      inline vector<string> getWhiteList() { DARABONBA_PTR_GET(whiteList_, vector<string>) };
      inline WebRules& setWhiteList(const vector<string> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
      inline WebRules& setWhiteList(vector<string> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


    protected:
      // The IP blacklist (for the domain name).
      shared_ptr<vector<string>> blackList_ {};
      // Indicates whether Frequency Control (HTTP flood mitigation) is enabled. Valid values:
      // - **true**: Enabled.
      // - **false**: Disabled.
      shared_ptr<bool> ccEnabled_ {};
      // Indicates whether custom Frequency Control (HTTP flood mitigation) rules are enabled. Valid values:
      // - **true**: Enabled.
      // - **false**: Disabled.
      shared_ptr<bool> ccRuleEnabled_ {};
      // The mode of Frequency Control (HTTP flood mitigation). Valid values:
      // - **default**: Normal mode.
      // - **gf_under_attack**: Emergency mode.
      // - **gf_sos_verify**: strict mode.
      // - **gf_sos_enhance**: Super strict mode.
      shared_ptr<string> ccTemplate_ {};
      // The expiration timestamp of the associated certificate.
      // > This parameter is not currently in use.
      shared_ptr<int64_t> certExpireTime_ {};
      // The certificate name.
      shared_ptr<string> certName_ {};
      // The certificate region. Valid values:
      // - cn-hangzhou: the Chinese mainland (default).
      // - ap-southeast-1: outside the Chinese mainland.
      shared_ptr<string> certRegion_ {};
      // The CNAME address assigned by Anti-DDoS Pro or Anti-DDoS Premium to the domain name.
      shared_ptr<string> cname_ {};
      // The list of custom cipher suites.
      shared_ptr<vector<string>> customCiphers_ {};
      // The domain name of the website.
      shared_ptr<string> domain_ {};
      // The China Cryptographic Standards (GM) certificate configuration.
      shared_ptr<WebRules::GmCert> gmCert_ {};
      // Indicates whether HTTP 2.0 is enabled. Valid values:
      // - **true**: Enabled.
      // - **false**: Disabled.
      shared_ptr<bool> http2Enable_ {};
      // Indicates whether the HTTPS forced redirect feature is enabled. Valid values:
      // 
      // - **true**: Enabled.
      // - **false**: Disabled.
      shared_ptr<bool> http2HttpsEnable_ {};
      // Indicates whether the HTTP back-to-origin feature is enabled. Valid values:
      // 
      // - **true**: Enabled.
      // - **false**: Disabled.
      shared_ptr<bool> https2HttpEnable_ {};
      // Indicates whether the Online Certificate Status Protocol (OCSP) feature is enabled. Valid values:
      // - **true**: Enabled.
      // - **false**: Disabled.
      shared_ptr<bool> ocspEnabled_ {};
      // Deprecated. For more information, see the API operation DescribeL7RsPolicy.
      shared_ptr<string> policyMode_ {};
      // Indicates whether website forwarding is enabled. Valid values:
      // 
      // - **true**: Enabled.
      // - **false**: Disabled.
      shared_ptr<bool> proxyEnabled_ {};
      // The forwarding protocol and port configurations.
      shared_ptr<vector<WebRules::ProxyTypes>> proxyTypes_ {};
      // The reason why the domain name is penalized for a violation. Valid values:
      // - **1**: The domain name does not have an Internet Content Provider (ICP) filing.
      // - **2**: The business operated on the domain name does not comply with regulatory requirements.
      // 
      // If both reasons **1** and **2** apply, the value **2** is returned.
      shared_ptr<int32_t> punishReason_ {};
      // Indicates whether the domain name is penalized for a violation. Valid values:
      // 
      // - **true**: The domain name is penalized. You can check the **PunishReason** parameter for the specific reason.
      // - **false**: The domain name is not penalized.
      shared_ptr<bool> punishStatus_ {};
      // The origin server address information.
      shared_ptr<vector<WebRules::RealServers>> realServers_ {};
      // Indicates whether TLS 1.3 is enabled. Valid values:
      // - **true**: Enabled.
      // - **false**: Disabled.
      shared_ptr<bool> ssl13Enabled_ {};
      // The type of cipher suite. Valid values:
      // 
      // - **default**: custom cipher suites.
      // - **all**: all cipher suites, including strong and weak cipher suites.
      // - **strong**: strong cipher suites.
      shared_ptr<string> sslCiphers_ {};
      // The supported TLS protocol version. Valid values:
      // 
      // - **tls1.0**: TLS 1.0 and later.
      // - **tls1.1**: TLS 1.1 and later.
      // - **tls1.2**: TLS 1.2 and later.
      shared_ptr<string> sslProtocols_ {};
      // The list of cipher suites used for TLS 1.3.
      shared_ptr<vector<string>> tls13CustomCiphers_ {};
      // The name of the certificate uploaded to SSL Certificates Service.
      shared_ptr<string> userCertName_ {};
      // Indicates whether WAF protection is enabled for the domain name. Valid values: true: Enabled. false: Disabled.
      // 
      // This parameter is required.
      shared_ptr<bool> wafProtectionEnable_ {};
      // The IP whitelist (for the domain name).
      shared_ptr<vector<string>> whiteList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->webRules_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeWebRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // webRules Field Functions 
    bool hasWebRules() const { return this->webRules_ != nullptr;};
    void deleteWebRules() { this->webRules_ = nullptr;};
    inline const vector<DescribeWebRulesResponseBody::WebRules> & getWebRules() const { DARABONBA_PTR_GET_CONST(webRules_, vector<DescribeWebRulesResponseBody::WebRules>) };
    inline vector<DescribeWebRulesResponseBody::WebRules> getWebRules() { DARABONBA_PTR_GET(webRules_, vector<DescribeWebRulesResponseBody::WebRules>) };
    inline DescribeWebRulesResponseBody& setWebRules(const vector<DescribeWebRulesResponseBody::WebRules> & webRules) { DARABONBA_PTR_SET_VALUE(webRules_, webRules) };
    inline DescribeWebRulesResponseBody& setWebRules(vector<DescribeWebRulesResponseBody::WebRules> && webRules) { DARABONBA_PTR_SET_RVALUE(webRules_, webRules) };


  protected:
    // The request ID, which is a unique identifier generated by Alibaba Cloud for the request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of website forwarding rules.
    shared_ptr<int64_t> totalCount_ {};
    // The configurations of website forwarding rules.
    shared_ptr<vector<DescribeWebRulesResponseBody::WebRules>> webRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
