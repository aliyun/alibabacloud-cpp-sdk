// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAL7CONFIG_HPP_
#define ALIBABACLOUD_MODELS_PAL7CONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PAL7ConfigReplaceRule.hpp>
#include <alibabacloud/models/PAL7ConfigRewriteOp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class PAL7Config : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PAL7Config& obj) { 
      DARABONBA_PTR_TO_JSON(BypassConfig, bypassConfig_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(DnsConfig, dnsConfig_);
      DARABONBA_PTR_TO_JSON(JsHookConfig, jsHookConfig_);
      DARABONBA_TO_JSON(ProxyDomainTypes, proxyDomainTypes_);
      DARABONBA_PTR_TO_JSON(RequestHeaderRewriteConfig, requestHeaderRewriteConfig_);
      DARABONBA_PTR_TO_JSON(RequestQueryRewriteConfig, requestQueryRewriteConfig_);
      DARABONBA_PTR_TO_JSON(ResponseHeaderRewriteConfig, responseHeaderRewriteConfig_);
      DARABONBA_PTR_TO_JSON(ResponseRewriteConfig, responseRewriteConfig_);
    };
    friend void from_json(const Darabonba::Json& j, PAL7Config& obj) { 
      DARABONBA_PTR_FROM_JSON(BypassConfig, bypassConfig_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(DnsConfig, dnsConfig_);
      DARABONBA_PTR_FROM_JSON(JsHookConfig, jsHookConfig_);
      DARABONBA_FROM_JSON(ProxyDomainTypes, proxyDomainTypes_);
      DARABONBA_PTR_FROM_JSON(RequestHeaderRewriteConfig, requestHeaderRewriteConfig_);
      DARABONBA_PTR_FROM_JSON(RequestQueryRewriteConfig, requestQueryRewriteConfig_);
      DARABONBA_PTR_FROM_JSON(ResponseHeaderRewriteConfig, responseHeaderRewriteConfig_);
      DARABONBA_PTR_FROM_JSON(ResponseRewriteConfig, responseRewriteConfig_);
    };
    PAL7Config() = default ;
    PAL7Config(const PAL7Config &) = default ;
    PAL7Config(PAL7Config &&) = default ;
    PAL7Config(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PAL7Config() = default ;
    PAL7Config& operator=(const PAL7Config &) = default ;
    PAL7Config& operator=(PAL7Config &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResponseRewriteConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResponseRewriteConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(ReplaceRules, replaceRules_);
      };
      friend void from_json(const Darabonba::Json& j, ResponseRewriteConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(ReplaceRules, replaceRules_);
      };
      ResponseRewriteConfig() = default ;
      ResponseRewriteConfig(const ResponseRewriteConfig &) = default ;
      ResponseRewriteConfig(ResponseRewriteConfig &&) = default ;
      ResponseRewriteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResponseRewriteConfig() = default ;
      ResponseRewriteConfig& operator=(const ResponseRewriteConfig &) = default ;
      ResponseRewriteConfig& operator=(ResponseRewriteConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mode_ == nullptr
        && this->replaceRules_ == nullptr; };
      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline ResponseRewriteConfig& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // replaceRules Field Functions 
      bool hasReplaceRules() const { return this->replaceRules_ != nullptr;};
      void deleteReplaceRules() { this->replaceRules_ = nullptr;};
      inline const vector<PAL7ConfigReplaceRule> & getReplaceRules() const { DARABONBA_PTR_GET_CONST(replaceRules_, vector<PAL7ConfigReplaceRule>) };
      inline vector<PAL7ConfigReplaceRule> getReplaceRules() { DARABONBA_PTR_GET(replaceRules_, vector<PAL7ConfigReplaceRule>) };
      inline ResponseRewriteConfig& setReplaceRules(const vector<PAL7ConfigReplaceRule> & replaceRules) { DARABONBA_PTR_SET_VALUE(replaceRules_, replaceRules) };
      inline ResponseRewriteConfig& setReplaceRules(vector<PAL7ConfigReplaceRule> && replaceRules) { DARABONBA_PTR_SET_RVALUE(replaceRules_, replaceRules) };


    protected:
      shared_ptr<string> mode_ {};
      shared_ptr<vector<PAL7ConfigReplaceRule>> replaceRules_ {};
    };

    class ResponseHeaderRewriteConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResponseHeaderRewriteConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Ops, ops_);
      };
      friend void from_json(const Darabonba::Json& j, ResponseHeaderRewriteConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Ops, ops_);
      };
      ResponseHeaderRewriteConfig() = default ;
      ResponseHeaderRewriteConfig(const ResponseHeaderRewriteConfig &) = default ;
      ResponseHeaderRewriteConfig(ResponseHeaderRewriteConfig &&) = default ;
      ResponseHeaderRewriteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResponseHeaderRewriteConfig() = default ;
      ResponseHeaderRewriteConfig& operator=(const ResponseHeaderRewriteConfig &) = default ;
      ResponseHeaderRewriteConfig& operator=(ResponseHeaderRewriteConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ops_ == nullptr; };
      // ops Field Functions 
      bool hasOps() const { return this->ops_ != nullptr;};
      void deleteOps() { this->ops_ = nullptr;};
      inline const vector<PAL7ConfigRewriteOp> & getOps() const { DARABONBA_PTR_GET_CONST(ops_, vector<PAL7ConfigRewriteOp>) };
      inline vector<PAL7ConfigRewriteOp> getOps() { DARABONBA_PTR_GET(ops_, vector<PAL7ConfigRewriteOp>) };
      inline ResponseHeaderRewriteConfig& setOps(const vector<PAL7ConfigRewriteOp> & ops) { DARABONBA_PTR_SET_VALUE(ops_, ops) };
      inline ResponseHeaderRewriteConfig& setOps(vector<PAL7ConfigRewriteOp> && ops) { DARABONBA_PTR_SET_RVALUE(ops_, ops) };


    protected:
      shared_ptr<vector<PAL7ConfigRewriteOp>> ops_ {};
    };

    class RequestQueryRewriteConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RequestQueryRewriteConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Ops, ops_);
      };
      friend void from_json(const Darabonba::Json& j, RequestQueryRewriteConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Ops, ops_);
      };
      RequestQueryRewriteConfig() = default ;
      RequestQueryRewriteConfig(const RequestQueryRewriteConfig &) = default ;
      RequestQueryRewriteConfig(RequestQueryRewriteConfig &&) = default ;
      RequestQueryRewriteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RequestQueryRewriteConfig() = default ;
      RequestQueryRewriteConfig& operator=(const RequestQueryRewriteConfig &) = default ;
      RequestQueryRewriteConfig& operator=(RequestQueryRewriteConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ops_ == nullptr; };
      // ops Field Functions 
      bool hasOps() const { return this->ops_ != nullptr;};
      void deleteOps() { this->ops_ = nullptr;};
      inline const vector<PAL7ConfigRewriteOp> & getOps() const { DARABONBA_PTR_GET_CONST(ops_, vector<PAL7ConfigRewriteOp>) };
      inline vector<PAL7ConfigRewriteOp> getOps() { DARABONBA_PTR_GET(ops_, vector<PAL7ConfigRewriteOp>) };
      inline RequestQueryRewriteConfig& setOps(const vector<PAL7ConfigRewriteOp> & ops) { DARABONBA_PTR_SET_VALUE(ops_, ops) };
      inline RequestQueryRewriteConfig& setOps(vector<PAL7ConfigRewriteOp> && ops) { DARABONBA_PTR_SET_RVALUE(ops_, ops) };


    protected:
      shared_ptr<vector<PAL7ConfigRewriteOp>> ops_ {};
    };

    class RequestHeaderRewriteConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RequestHeaderRewriteConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Ops, ops_);
      };
      friend void from_json(const Darabonba::Json& j, RequestHeaderRewriteConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Ops, ops_);
      };
      RequestHeaderRewriteConfig() = default ;
      RequestHeaderRewriteConfig(const RequestHeaderRewriteConfig &) = default ;
      RequestHeaderRewriteConfig(RequestHeaderRewriteConfig &&) = default ;
      RequestHeaderRewriteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RequestHeaderRewriteConfig() = default ;
      RequestHeaderRewriteConfig& operator=(const RequestHeaderRewriteConfig &) = default ;
      RequestHeaderRewriteConfig& operator=(RequestHeaderRewriteConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ops_ == nullptr; };
      // ops Field Functions 
      bool hasOps() const { return this->ops_ != nullptr;};
      void deleteOps() { this->ops_ = nullptr;};
      inline const vector<PAL7ConfigRewriteOp> & getOps() const { DARABONBA_PTR_GET_CONST(ops_, vector<PAL7ConfigRewriteOp>) };
      inline vector<PAL7ConfigRewriteOp> getOps() { DARABONBA_PTR_GET(ops_, vector<PAL7ConfigRewriteOp>) };
      inline RequestHeaderRewriteConfig& setOps(const vector<PAL7ConfigRewriteOp> & ops) { DARABONBA_PTR_SET_VALUE(ops_, ops) };
      inline RequestHeaderRewriteConfig& setOps(vector<PAL7ConfigRewriteOp> && ops) { DARABONBA_PTR_SET_RVALUE(ops_, ops) };


    protected:
      shared_ptr<vector<PAL7ConfigRewriteOp>> ops_ {};
    };

    class JsHookConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JsHookConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(ReplaceRules, replaceRules_);
      };
      friend void from_json(const Darabonba::Json& j, JsHookConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(ReplaceRules, replaceRules_);
      };
      JsHookConfig() = default ;
      JsHookConfig(const JsHookConfig &) = default ;
      JsHookConfig(JsHookConfig &&) = default ;
      JsHookConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JsHookConfig() = default ;
      JsHookConfig& operator=(const JsHookConfig &) = default ;
      JsHookConfig& operator=(JsHookConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mode_ == nullptr
        && this->replaceRules_ == nullptr; };
      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline JsHookConfig& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // replaceRules Field Functions 
      bool hasReplaceRules() const { return this->replaceRules_ != nullptr;};
      void deleteReplaceRules() { this->replaceRules_ = nullptr;};
      inline const vector<PAL7ConfigReplaceRule> & getReplaceRules() const { DARABONBA_PTR_GET_CONST(replaceRules_, vector<PAL7ConfigReplaceRule>) };
      inline vector<PAL7ConfigReplaceRule> getReplaceRules() { DARABONBA_PTR_GET(replaceRules_, vector<PAL7ConfigReplaceRule>) };
      inline JsHookConfig& setReplaceRules(const vector<PAL7ConfigReplaceRule> & replaceRules) { DARABONBA_PTR_SET_VALUE(replaceRules_, replaceRules) };
      inline JsHookConfig& setReplaceRules(vector<PAL7ConfigReplaceRule> && replaceRules) { DARABONBA_PTR_SET_RVALUE(replaceRules_, replaceRules) };


    protected:
      shared_ptr<string> mode_ {};
      shared_ptr<vector<PAL7ConfigReplaceRule>> replaceRules_ {};
    };

    class DnsConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DnsConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DnsServers, dnsServers_);
      };
      friend void from_json(const Darabonba::Json& j, DnsConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DnsServers, dnsServers_);
      };
      DnsConfig() = default ;
      DnsConfig(const DnsConfig &) = default ;
      DnsConfig(DnsConfig &&) = default ;
      DnsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DnsConfig() = default ;
      DnsConfig& operator=(const DnsConfig &) = default ;
      DnsConfig& operator=(DnsConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dnsServers_ == nullptr; };
      // dnsServers Field Functions 
      bool hasDnsServers() const { return this->dnsServers_ != nullptr;};
      void deleteDnsServers() { this->dnsServers_ = nullptr;};
      inline const vector<string> & getDnsServers() const { DARABONBA_PTR_GET_CONST(dnsServers_, vector<string>) };
      inline vector<string> getDnsServers() { DARABONBA_PTR_GET(dnsServers_, vector<string>) };
      inline DnsConfig& setDnsServers(const vector<string> & dnsServers) { DARABONBA_PTR_SET_VALUE(dnsServers_, dnsServers) };
      inline DnsConfig& setDnsServers(vector<string> && dnsServers) { DARABONBA_PTR_SET_RVALUE(dnsServers_, dnsServers) };


    protected:
      shared_ptr<vector<string>> dnsServers_ {};
    };

    class BypassConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BypassConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AppBypassFroms, appBypassFroms_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(UrlBypassRules, urlBypassRules_);
      };
      friend void from_json(const Darabonba::Json& j, BypassConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AppBypassFroms, appBypassFroms_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(UrlBypassRules, urlBypassRules_);
      };
      BypassConfig() = default ;
      BypassConfig(const BypassConfig &) = default ;
      BypassConfig(BypassConfig &&) = default ;
      BypassConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BypassConfig() = default ;
      BypassConfig& operator=(const BypassConfig &) = default ;
      BypassConfig& operator=(BypassConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UrlBypassRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UrlBypassRules& obj) { 
          DARABONBA_PTR_TO_JSON(Froms, froms_);
          DARABONBA_PTR_TO_JSON(Paths, paths_);
        };
        friend void from_json(const Darabonba::Json& j, UrlBypassRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Froms, froms_);
          DARABONBA_PTR_FROM_JSON(Paths, paths_);
        };
        UrlBypassRules() = default ;
        UrlBypassRules(const UrlBypassRules &) = default ;
        UrlBypassRules(UrlBypassRules &&) = default ;
        UrlBypassRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UrlBypassRules() = default ;
        UrlBypassRules& operator=(const UrlBypassRules &) = default ;
        UrlBypassRules& operator=(UrlBypassRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->froms_ == nullptr
        && this->paths_ == nullptr; };
        // froms Field Functions 
        bool hasFroms() const { return this->froms_ != nullptr;};
        void deleteFroms() { this->froms_ = nullptr;};
        inline const vector<string> & getFroms() const { DARABONBA_PTR_GET_CONST(froms_, vector<string>) };
        inline vector<string> getFroms() { DARABONBA_PTR_GET(froms_, vector<string>) };
        inline UrlBypassRules& setFroms(const vector<string> & froms) { DARABONBA_PTR_SET_VALUE(froms_, froms) };
        inline UrlBypassRules& setFroms(vector<string> && froms) { DARABONBA_PTR_SET_RVALUE(froms_, froms) };


        // paths Field Functions 
        bool hasPaths() const { return this->paths_ != nullptr;};
        void deletePaths() { this->paths_ = nullptr;};
        inline const vector<string> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
        inline vector<string> getPaths() { DARABONBA_PTR_GET(paths_, vector<string>) };
        inline UrlBypassRules& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
        inline UrlBypassRules& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


      protected:
        shared_ptr<vector<string>> froms_ {};
        shared_ptr<vector<string>> paths_ {};
      };

      virtual bool empty() const override { return this->appBypassFroms_ == nullptr
        && this->mode_ == nullptr && this->urlBypassRules_ == nullptr; };
      // appBypassFroms Field Functions 
      bool hasAppBypassFroms() const { return this->appBypassFroms_ != nullptr;};
      void deleteAppBypassFroms() { this->appBypassFroms_ = nullptr;};
      inline const vector<string> & getAppBypassFroms() const { DARABONBA_PTR_GET_CONST(appBypassFroms_, vector<string>) };
      inline vector<string> getAppBypassFroms() { DARABONBA_PTR_GET(appBypassFroms_, vector<string>) };
      inline BypassConfig& setAppBypassFroms(const vector<string> & appBypassFroms) { DARABONBA_PTR_SET_VALUE(appBypassFroms_, appBypassFroms) };
      inline BypassConfig& setAppBypassFroms(vector<string> && appBypassFroms) { DARABONBA_PTR_SET_RVALUE(appBypassFroms_, appBypassFroms) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline BypassConfig& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // urlBypassRules Field Functions 
      bool hasUrlBypassRules() const { return this->urlBypassRules_ != nullptr;};
      void deleteUrlBypassRules() { this->urlBypassRules_ = nullptr;};
      inline const vector<BypassConfig::UrlBypassRules> & getUrlBypassRules() const { DARABONBA_PTR_GET_CONST(urlBypassRules_, vector<BypassConfig::UrlBypassRules>) };
      inline vector<BypassConfig::UrlBypassRules> getUrlBypassRules() { DARABONBA_PTR_GET(urlBypassRules_, vector<BypassConfig::UrlBypassRules>) };
      inline BypassConfig& setUrlBypassRules(const vector<BypassConfig::UrlBypassRules> & urlBypassRules) { DARABONBA_PTR_SET_VALUE(urlBypassRules_, urlBypassRules) };
      inline BypassConfig& setUrlBypassRules(vector<BypassConfig::UrlBypassRules> && urlBypassRules) { DARABONBA_PTR_SET_RVALUE(urlBypassRules_, urlBypassRules) };


    protected:
      shared_ptr<vector<string>> appBypassFroms_ {};
      shared_ptr<string> mode_ {};
      shared_ptr<vector<BypassConfig::UrlBypassRules>> urlBypassRules_ {};
    };

    virtual bool empty() const override { return this->bypassConfig_ == nullptr
        && this->certId_ == nullptr && this->dnsConfig_ == nullptr && this->jsHookConfig_ == nullptr && this->proxyDomainTypes_.empty() && this->requestHeaderRewriteConfig_ == nullptr
        && this->requestQueryRewriteConfig_ == nullptr && this->responseHeaderRewriteConfig_ == nullptr && this->responseRewriteConfig_ == nullptr; };
    // bypassConfig Field Functions 
    bool hasBypassConfig() const { return this->bypassConfig_ != nullptr;};
    void deleteBypassConfig() { this->bypassConfig_ = nullptr;};
    inline const PAL7Config::BypassConfig & getBypassConfig() const { DARABONBA_PTR_GET_CONST(bypassConfig_, PAL7Config::BypassConfig) };
    inline PAL7Config::BypassConfig getBypassConfig() { DARABONBA_PTR_GET(bypassConfig_, PAL7Config::BypassConfig) };
    inline PAL7Config& setBypassConfig(const PAL7Config::BypassConfig & bypassConfig) { DARABONBA_PTR_SET_VALUE(bypassConfig_, bypassConfig) };
    inline PAL7Config& setBypassConfig(PAL7Config::BypassConfig && bypassConfig) { DARABONBA_PTR_SET_RVALUE(bypassConfig_, bypassConfig) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline PAL7Config& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // dnsConfig Field Functions 
    bool hasDnsConfig() const { return this->dnsConfig_ != nullptr;};
    void deleteDnsConfig() { this->dnsConfig_ = nullptr;};
    inline const PAL7Config::DnsConfig & getDnsConfig() const { DARABONBA_PTR_GET_CONST(dnsConfig_, PAL7Config::DnsConfig) };
    inline PAL7Config::DnsConfig getDnsConfig() { DARABONBA_PTR_GET(dnsConfig_, PAL7Config::DnsConfig) };
    inline PAL7Config& setDnsConfig(const PAL7Config::DnsConfig & dnsConfig) { DARABONBA_PTR_SET_VALUE(dnsConfig_, dnsConfig) };
    inline PAL7Config& setDnsConfig(PAL7Config::DnsConfig && dnsConfig) { DARABONBA_PTR_SET_RVALUE(dnsConfig_, dnsConfig) };


    // jsHookConfig Field Functions 
    bool hasJsHookConfig() const { return this->jsHookConfig_ != nullptr;};
    void deleteJsHookConfig() { this->jsHookConfig_ = nullptr;};
    inline const PAL7Config::JsHookConfig & getJsHookConfig() const { DARABONBA_PTR_GET_CONST(jsHookConfig_, PAL7Config::JsHookConfig) };
    inline PAL7Config::JsHookConfig getJsHookConfig() { DARABONBA_PTR_GET(jsHookConfig_, PAL7Config::JsHookConfig) };
    inline PAL7Config& setJsHookConfig(const PAL7Config::JsHookConfig & jsHookConfig) { DARABONBA_PTR_SET_VALUE(jsHookConfig_, jsHookConfig) };
    inline PAL7Config& setJsHookConfig(PAL7Config::JsHookConfig && jsHookConfig) { DARABONBA_PTR_SET_RVALUE(jsHookConfig_, jsHookConfig) };


    // proxyDomainTypes Field Functions 
    bool hasProxyDomainTypes() const { return !this->proxyDomainTypes_.empty();};
    void deleteProxyDomainTypes() { this->proxyDomainTypes_.clear();};
    inline Darabonba::Bytes getProxyDomainTypes() const { DARABONBA_GET(proxyDomainTypes_) };
    inline PAL7Config& setProxyDomainTypes(Darabonba::Bytes proxyDomainTypes) { DARABONBA_SET_VALUE(proxyDomainTypes_, proxyDomainTypes) };


    // requestHeaderRewriteConfig Field Functions 
    bool hasRequestHeaderRewriteConfig() const { return this->requestHeaderRewriteConfig_ != nullptr;};
    void deleteRequestHeaderRewriteConfig() { this->requestHeaderRewriteConfig_ = nullptr;};
    inline const PAL7Config::RequestHeaderRewriteConfig & getRequestHeaderRewriteConfig() const { DARABONBA_PTR_GET_CONST(requestHeaderRewriteConfig_, PAL7Config::RequestHeaderRewriteConfig) };
    inline PAL7Config::RequestHeaderRewriteConfig getRequestHeaderRewriteConfig() { DARABONBA_PTR_GET(requestHeaderRewriteConfig_, PAL7Config::RequestHeaderRewriteConfig) };
    inline PAL7Config& setRequestHeaderRewriteConfig(const PAL7Config::RequestHeaderRewriteConfig & requestHeaderRewriteConfig) { DARABONBA_PTR_SET_VALUE(requestHeaderRewriteConfig_, requestHeaderRewriteConfig) };
    inline PAL7Config& setRequestHeaderRewriteConfig(PAL7Config::RequestHeaderRewriteConfig && requestHeaderRewriteConfig) { DARABONBA_PTR_SET_RVALUE(requestHeaderRewriteConfig_, requestHeaderRewriteConfig) };


    // requestQueryRewriteConfig Field Functions 
    bool hasRequestQueryRewriteConfig() const { return this->requestQueryRewriteConfig_ != nullptr;};
    void deleteRequestQueryRewriteConfig() { this->requestQueryRewriteConfig_ = nullptr;};
    inline const PAL7Config::RequestQueryRewriteConfig & getRequestQueryRewriteConfig() const { DARABONBA_PTR_GET_CONST(requestQueryRewriteConfig_, PAL7Config::RequestQueryRewriteConfig) };
    inline PAL7Config::RequestQueryRewriteConfig getRequestQueryRewriteConfig() { DARABONBA_PTR_GET(requestQueryRewriteConfig_, PAL7Config::RequestQueryRewriteConfig) };
    inline PAL7Config& setRequestQueryRewriteConfig(const PAL7Config::RequestQueryRewriteConfig & requestQueryRewriteConfig) { DARABONBA_PTR_SET_VALUE(requestQueryRewriteConfig_, requestQueryRewriteConfig) };
    inline PAL7Config& setRequestQueryRewriteConfig(PAL7Config::RequestQueryRewriteConfig && requestQueryRewriteConfig) { DARABONBA_PTR_SET_RVALUE(requestQueryRewriteConfig_, requestQueryRewriteConfig) };


    // responseHeaderRewriteConfig Field Functions 
    bool hasResponseHeaderRewriteConfig() const { return this->responseHeaderRewriteConfig_ != nullptr;};
    void deleteResponseHeaderRewriteConfig() { this->responseHeaderRewriteConfig_ = nullptr;};
    inline const PAL7Config::ResponseHeaderRewriteConfig & getResponseHeaderRewriteConfig() const { DARABONBA_PTR_GET_CONST(responseHeaderRewriteConfig_, PAL7Config::ResponseHeaderRewriteConfig) };
    inline PAL7Config::ResponseHeaderRewriteConfig getResponseHeaderRewriteConfig() { DARABONBA_PTR_GET(responseHeaderRewriteConfig_, PAL7Config::ResponseHeaderRewriteConfig) };
    inline PAL7Config& setResponseHeaderRewriteConfig(const PAL7Config::ResponseHeaderRewriteConfig & responseHeaderRewriteConfig) { DARABONBA_PTR_SET_VALUE(responseHeaderRewriteConfig_, responseHeaderRewriteConfig) };
    inline PAL7Config& setResponseHeaderRewriteConfig(PAL7Config::ResponseHeaderRewriteConfig && responseHeaderRewriteConfig) { DARABONBA_PTR_SET_RVALUE(responseHeaderRewriteConfig_, responseHeaderRewriteConfig) };


    // responseRewriteConfig Field Functions 
    bool hasResponseRewriteConfig() const { return this->responseRewriteConfig_ != nullptr;};
    void deleteResponseRewriteConfig() { this->responseRewriteConfig_ = nullptr;};
    inline const PAL7Config::ResponseRewriteConfig & getResponseRewriteConfig() const { DARABONBA_PTR_GET_CONST(responseRewriteConfig_, PAL7Config::ResponseRewriteConfig) };
    inline PAL7Config::ResponseRewriteConfig getResponseRewriteConfig() { DARABONBA_PTR_GET(responseRewriteConfig_, PAL7Config::ResponseRewriteConfig) };
    inline PAL7Config& setResponseRewriteConfig(const PAL7Config::ResponseRewriteConfig & responseRewriteConfig) { DARABONBA_PTR_SET_VALUE(responseRewriteConfig_, responseRewriteConfig) };
    inline PAL7Config& setResponseRewriteConfig(PAL7Config::ResponseRewriteConfig && responseRewriteConfig) { DARABONBA_PTR_SET_RVALUE(responseRewriteConfig_, responseRewriteConfig) };


  protected:
    shared_ptr<PAL7Config::BypassConfig> bypassConfig_ {};
    shared_ptr<string> certId_ {};
    shared_ptr<PAL7Config::DnsConfig> dnsConfig_ {};
    shared_ptr<PAL7Config::JsHookConfig> jsHookConfig_ {};
    Darabonba::Bytes proxyDomainTypes_ {};
    shared_ptr<PAL7Config::RequestHeaderRewriteConfig> requestHeaderRewriteConfig_ {};
    shared_ptr<PAL7Config::RequestQueryRewriteConfig> requestQueryRewriteConfig_ {};
    shared_ptr<PAL7Config::ResponseHeaderRewriteConfig> responseHeaderRewriteConfig_ {};
    shared_ptr<PAL7Config::ResponseRewriteConfig> responseRewriteConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
