// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeDomainsResponseBody() = default ;
    DescribeDomainsResponseBody(const DescribeDomainsResponseBody &) = default ;
    DescribeDomainsResponseBody(DescribeDomainsResponseBody &&) = default ;
    DescribeDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsResponseBody() = default ;
    DescribeDomainsResponseBody& operator=(const DescribeDomainsResponseBody &) = default ;
    DescribeDomainsResponseBody& operator=(DescribeDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Domains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Domains& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Domains& obj) { 
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
      Domains() = default ;
      Domains(const Domains &) = default ;
      Domains(Domains &&) = default ;
      Domains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Domains() = default ;
      Domains& operator=(const Domains &) = default ;
      Domains& operator=(Domains &&) = default ;
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
        shared_ptr<string> realServer_ {};
        shared_ptr<int32_t> rsType_ {};
      };

      class ProxyTypeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProxyTypeList& obj) { 
          DARABONBA_PTR_TO_JSON(ProxyPorts, proxyPorts_);
          DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
        };
        friend void from_json(const Darabonba::Json& j, ProxyTypeList& obj) { 
          DARABONBA_PTR_FROM_JSON(ProxyPorts, proxyPorts_);
          DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
        };
        ProxyTypeList() = default ;
        ProxyTypeList(const ProxyTypeList &) = default ;
        ProxyTypeList(ProxyTypeList &&) = default ;
        ProxyTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProxyTypeList() = default ;
        ProxyTypeList& operator=(const ProxyTypeList &) = default ;
        ProxyTypeList& operator=(ProxyTypeList &&) = default ;
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
        inline ProxyTypeList& setProxyPorts(const vector<string> & proxyPorts) { DARABONBA_PTR_SET_VALUE(proxyPorts_, proxyPorts) };
        inline ProxyTypeList& setProxyPorts(vector<string> && proxyPorts) { DARABONBA_PTR_SET_RVALUE(proxyPorts_, proxyPorts) };


        // proxyType Field Functions 
        bool hasProxyType() const { return this->proxyType_ != nullptr;};
        void deleteProxyType() { this->proxyType_ = nullptr;};
        inline string getProxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
        inline ProxyTypeList& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


      protected:
        shared_ptr<vector<string>> proxyPorts_ {};
        shared_ptr<string> proxyType_ {};
      };

      virtual bool empty() const override { return this->blackList_ == nullptr
        && this->ccEnabled_ == nullptr && this->ccRuleEnabled_ == nullptr && this->ccTemplate_ == nullptr && this->certName_ == nullptr && this->certRegion_ == nullptr
        && this->cname_ == nullptr && this->domain_ == nullptr && this->http2Enable_ == nullptr && this->proxyTypeList_ == nullptr && this->realServers_ == nullptr
        && this->sslCiphers_ == nullptr && this->sslProtocols_ == nullptr && this->whiteList_ == nullptr; };
      // blackList Field Functions 
      bool hasBlackList() const { return this->blackList_ != nullptr;};
      void deleteBlackList() { this->blackList_ = nullptr;};
      inline const vector<string> & getBlackList() const { DARABONBA_PTR_GET_CONST(blackList_, vector<string>) };
      inline vector<string> getBlackList() { DARABONBA_PTR_GET(blackList_, vector<string>) };
      inline Domains& setBlackList(const vector<string> & blackList) { DARABONBA_PTR_SET_VALUE(blackList_, blackList) };
      inline Domains& setBlackList(vector<string> && blackList) { DARABONBA_PTR_SET_RVALUE(blackList_, blackList) };


      // ccEnabled Field Functions 
      bool hasCcEnabled() const { return this->ccEnabled_ != nullptr;};
      void deleteCcEnabled() { this->ccEnabled_ = nullptr;};
      inline bool getCcEnabled() const { DARABONBA_PTR_GET_DEFAULT(ccEnabled_, false) };
      inline Domains& setCcEnabled(bool ccEnabled) { DARABONBA_PTR_SET_VALUE(ccEnabled_, ccEnabled) };


      // ccRuleEnabled Field Functions 
      bool hasCcRuleEnabled() const { return this->ccRuleEnabled_ != nullptr;};
      void deleteCcRuleEnabled() { this->ccRuleEnabled_ = nullptr;};
      inline bool getCcRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(ccRuleEnabled_, false) };
      inline Domains& setCcRuleEnabled(bool ccRuleEnabled) { DARABONBA_PTR_SET_VALUE(ccRuleEnabled_, ccRuleEnabled) };


      // ccTemplate Field Functions 
      bool hasCcTemplate() const { return this->ccTemplate_ != nullptr;};
      void deleteCcTemplate() { this->ccTemplate_ = nullptr;};
      inline string getCcTemplate() const { DARABONBA_PTR_GET_DEFAULT(ccTemplate_, "") };
      inline Domains& setCcTemplate(string ccTemplate) { DARABONBA_PTR_SET_VALUE(ccTemplate_, ccTemplate) };


      // certName Field Functions 
      bool hasCertName() const { return this->certName_ != nullptr;};
      void deleteCertName() { this->certName_ = nullptr;};
      inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
      inline Domains& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


      // certRegion Field Functions 
      bool hasCertRegion() const { return this->certRegion_ != nullptr;};
      void deleteCertRegion() { this->certRegion_ = nullptr;};
      inline string getCertRegion() const { DARABONBA_PTR_GET_DEFAULT(certRegion_, "") };
      inline Domains& setCertRegion(string certRegion) { DARABONBA_PTR_SET_VALUE(certRegion_, certRegion) };


      // cname Field Functions 
      bool hasCname() const { return this->cname_ != nullptr;};
      void deleteCname() { this->cname_ = nullptr;};
      inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
      inline Domains& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Domains& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // http2Enable Field Functions 
      bool hasHttp2Enable() const { return this->http2Enable_ != nullptr;};
      void deleteHttp2Enable() { this->http2Enable_ = nullptr;};
      inline bool getHttp2Enable() const { DARABONBA_PTR_GET_DEFAULT(http2Enable_, false) };
      inline Domains& setHttp2Enable(bool http2Enable) { DARABONBA_PTR_SET_VALUE(http2Enable_, http2Enable) };


      // proxyTypeList Field Functions 
      bool hasProxyTypeList() const { return this->proxyTypeList_ != nullptr;};
      void deleteProxyTypeList() { this->proxyTypeList_ = nullptr;};
      inline const vector<Domains::ProxyTypeList> & getProxyTypeList() const { DARABONBA_PTR_GET_CONST(proxyTypeList_, vector<Domains::ProxyTypeList>) };
      inline vector<Domains::ProxyTypeList> getProxyTypeList() { DARABONBA_PTR_GET(proxyTypeList_, vector<Domains::ProxyTypeList>) };
      inline Domains& setProxyTypeList(const vector<Domains::ProxyTypeList> & proxyTypeList) { DARABONBA_PTR_SET_VALUE(proxyTypeList_, proxyTypeList) };
      inline Domains& setProxyTypeList(vector<Domains::ProxyTypeList> && proxyTypeList) { DARABONBA_PTR_SET_RVALUE(proxyTypeList_, proxyTypeList) };


      // realServers Field Functions 
      bool hasRealServers() const { return this->realServers_ != nullptr;};
      void deleteRealServers() { this->realServers_ = nullptr;};
      inline const vector<Domains::RealServers> & getRealServers() const { DARABONBA_PTR_GET_CONST(realServers_, vector<Domains::RealServers>) };
      inline vector<Domains::RealServers> getRealServers() { DARABONBA_PTR_GET(realServers_, vector<Domains::RealServers>) };
      inline Domains& setRealServers(const vector<Domains::RealServers> & realServers) { DARABONBA_PTR_SET_VALUE(realServers_, realServers) };
      inline Domains& setRealServers(vector<Domains::RealServers> && realServers) { DARABONBA_PTR_SET_RVALUE(realServers_, realServers) };


      // sslCiphers Field Functions 
      bool hasSslCiphers() const { return this->sslCiphers_ != nullptr;};
      void deleteSslCiphers() { this->sslCiphers_ = nullptr;};
      inline string getSslCiphers() const { DARABONBA_PTR_GET_DEFAULT(sslCiphers_, "") };
      inline Domains& setSslCiphers(string sslCiphers) { DARABONBA_PTR_SET_VALUE(sslCiphers_, sslCiphers) };


      // sslProtocols Field Functions 
      bool hasSslProtocols() const { return this->sslProtocols_ != nullptr;};
      void deleteSslProtocols() { this->sslProtocols_ = nullptr;};
      inline string getSslProtocols() const { DARABONBA_PTR_GET_DEFAULT(sslProtocols_, "") };
      inline Domains& setSslProtocols(string sslProtocols) { DARABONBA_PTR_SET_VALUE(sslProtocols_, sslProtocols) };


      // whiteList Field Functions 
      bool hasWhiteList() const { return this->whiteList_ != nullptr;};
      void deleteWhiteList() { this->whiteList_ = nullptr;};
      inline const vector<string> & getWhiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<string>) };
      inline vector<string> getWhiteList() { DARABONBA_PTR_GET(whiteList_, vector<string>) };
      inline Domains& setWhiteList(const vector<string> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
      inline Domains& setWhiteList(vector<string> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


    protected:
      shared_ptr<vector<string>> blackList_ {};
      shared_ptr<bool> ccEnabled_ {};
      shared_ptr<bool> ccRuleEnabled_ {};
      shared_ptr<string> ccTemplate_ {};
      shared_ptr<string> certName_ {};
      shared_ptr<string> certRegion_ {};
      shared_ptr<string> cname_ {};
      shared_ptr<string> domain_ {};
      shared_ptr<bool> http2Enable_ {};
      shared_ptr<vector<Domains::ProxyTypeList>> proxyTypeList_ {};
      shared_ptr<vector<Domains::RealServers>> realServers_ {};
      shared_ptr<string> sslCiphers_ {};
      shared_ptr<string> sslProtocols_ {};
      shared_ptr<vector<string>> whiteList_ {};
    };

    virtual bool empty() const override { return this->domains_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<DescribeDomainsResponseBody::Domains> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<DescribeDomainsResponseBody::Domains>) };
    inline vector<DescribeDomainsResponseBody::Domains> getDomains() { DARABONBA_PTR_GET(domains_, vector<DescribeDomainsResponseBody::Domains>) };
    inline DescribeDomainsResponseBody& setDomains(const vector<DescribeDomainsResponseBody::Domains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeDomainsResponseBody& setDomains(vector<DescribeDomainsResponseBody::Domains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeDomainsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<DescribeDomainsResponseBody::Domains>> domains_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
