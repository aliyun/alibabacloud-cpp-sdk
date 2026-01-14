// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAFFICPOLICY_HPP_
#define ALIBABACLOUD_MODELS_TRAFFICPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class TrafficPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrafficPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerSettings, loadBalancerSettings_);
      DARABONBA_PTR_TO_JSON(TlsSetting, tlsSetting_);
    };
    friend void from_json(const Darabonba::Json& j, TrafficPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerSettings, loadBalancerSettings_);
      DARABONBA_PTR_FROM_JSON(TlsSetting, tlsSetting_);
    };
    TrafficPolicy() = default ;
    TrafficPolicy(const TrafficPolicy &) = default ;
    TrafficPolicy(TrafficPolicy &&) = default ;
    TrafficPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrafficPolicy() = default ;
    TrafficPolicy& operator=(const TrafficPolicy &) = default ;
    TrafficPolicy& operator=(TrafficPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TlsSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TlsSetting& obj) { 
        DARABONBA_PTR_TO_JSON(CaCertContent, caCertContent_);
        DARABONBA_PTR_TO_JSON(CertId, certId_);
        DARABONBA_PTR_TO_JSON(Sni, sni_);
        DARABONBA_PTR_TO_JSON(TlsMode, tlsMode_);
      };
      friend void from_json(const Darabonba::Json& j, TlsSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(CaCertContent, caCertContent_);
        DARABONBA_PTR_FROM_JSON(CertId, certId_);
        DARABONBA_PTR_FROM_JSON(Sni, sni_);
        DARABONBA_PTR_FROM_JSON(TlsMode, tlsMode_);
      };
      TlsSetting() = default ;
      TlsSetting(const TlsSetting &) = default ;
      TlsSetting(TlsSetting &&) = default ;
      TlsSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TlsSetting() = default ;
      TlsSetting& operator=(const TlsSetting &) = default ;
      TlsSetting& operator=(TlsSetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->caCertContent_ == nullptr
        && this->certId_ == nullptr && this->sni_ == nullptr && this->tlsMode_ == nullptr; };
      // caCertContent Field Functions 
      bool hasCaCertContent() const { return this->caCertContent_ != nullptr;};
      void deleteCaCertContent() { this->caCertContent_ = nullptr;};
      inline string getCaCertContent() const { DARABONBA_PTR_GET_DEFAULT(caCertContent_, "") };
      inline TlsSetting& setCaCertContent(string caCertContent) { DARABONBA_PTR_SET_VALUE(caCertContent_, caCertContent) };


      // certId Field Functions 
      bool hasCertId() const { return this->certId_ != nullptr;};
      void deleteCertId() { this->certId_ = nullptr;};
      inline string getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
      inline TlsSetting& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


      // sni Field Functions 
      bool hasSni() const { return this->sni_ != nullptr;};
      void deleteSni() { this->sni_ = nullptr;};
      inline string getSni() const { DARABONBA_PTR_GET_DEFAULT(sni_, "") };
      inline TlsSetting& setSni(string sni) { DARABONBA_PTR_SET_VALUE(sni_, sni) };


      // tlsMode Field Functions 
      bool hasTlsMode() const { return this->tlsMode_ != nullptr;};
      void deleteTlsMode() { this->tlsMode_ = nullptr;};
      inline string getTlsMode() const { DARABONBA_PTR_GET_DEFAULT(tlsMode_, "") };
      inline TlsSetting& setTlsMode(string tlsMode) { DARABONBA_PTR_SET_VALUE(tlsMode_, tlsMode) };


    protected:
      shared_ptr<string> caCertContent_ {};
      shared_ptr<string> certId_ {};
      shared_ptr<string> sni_ {};
      // This parameter is required.
      shared_ptr<string> tlsMode_ {};
    };

    class LoadBalancerSettings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoadBalancerSettings& obj) { 
        DARABONBA_PTR_TO_JSON(ConsistentHashLBConfig, consistentHashLBConfig_);
        DARABONBA_PTR_TO_JSON(LoadbalancerType, loadbalancerType_);
        DARABONBA_PTR_TO_JSON(WarmupDuration, warmupDuration_);
      };
      friend void from_json(const Darabonba::Json& j, LoadBalancerSettings& obj) { 
        DARABONBA_PTR_FROM_JSON(ConsistentHashLBConfig, consistentHashLBConfig_);
        DARABONBA_PTR_FROM_JSON(LoadbalancerType, loadbalancerType_);
        DARABONBA_PTR_FROM_JSON(WarmupDuration, warmupDuration_);
      };
      LoadBalancerSettings() = default ;
      LoadBalancerSettings(const LoadBalancerSettings &) = default ;
      LoadBalancerSettings(LoadBalancerSettings &&) = default ;
      LoadBalancerSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoadBalancerSettings() = default ;
      LoadBalancerSettings& operator=(const LoadBalancerSettings &) = default ;
      LoadBalancerSettings& operator=(LoadBalancerSettings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConsistentHashLBConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConsistentHashLBConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ConsistentHashLBType, consistentHashLBType_);
          DARABONBA_PTR_TO_JSON(HttpCookie, httpCookie_);
          DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
        };
        friend void from_json(const Darabonba::Json& j, ConsistentHashLBConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ConsistentHashLBType, consistentHashLBType_);
          DARABONBA_PTR_FROM_JSON(HttpCookie, httpCookie_);
          DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
        };
        ConsistentHashLBConfig() = default ;
        ConsistentHashLBConfig(const ConsistentHashLBConfig &) = default ;
        ConsistentHashLBConfig(ConsistentHashLBConfig &&) = default ;
        ConsistentHashLBConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConsistentHashLBConfig() = default ;
        ConsistentHashLBConfig& operator=(const ConsistentHashLBConfig &) = default ;
        ConsistentHashLBConfig& operator=(ConsistentHashLBConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class HttpCookie : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HttpCookie& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Path, path_);
            DARABONBA_PTR_TO_JSON(TTL, TTL_);
          };
          friend void from_json(const Darabonba::Json& j, HttpCookie& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Path, path_);
            DARABONBA_PTR_FROM_JSON(TTL, TTL_);
          };
          HttpCookie() = default ;
          HttpCookie(const HttpCookie &) = default ;
          HttpCookie(HttpCookie &&) = default ;
          HttpCookie(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HttpCookie() = default ;
          HttpCookie& operator=(const HttpCookie &) = default ;
          HttpCookie& operator=(HttpCookie &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->path_ == nullptr && this->TTL_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline HttpCookie& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline HttpCookie& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


          // TTL Field Functions 
          bool hasTTL() const { return this->TTL_ != nullptr;};
          void deleteTTL() { this->TTL_ = nullptr;};
          inline string getTTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, "") };
          inline HttpCookie& setTTL(string TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


        protected:
          shared_ptr<string> name_ {};
          shared_ptr<string> path_ {};
          shared_ptr<string> TTL_ {};
        };

        virtual bool empty() const override { return this->consistentHashLBType_ == nullptr
        && this->httpCookie_ == nullptr && this->parameterName_ == nullptr; };
        // consistentHashLBType Field Functions 
        bool hasConsistentHashLBType() const { return this->consistentHashLBType_ != nullptr;};
        void deleteConsistentHashLBType() { this->consistentHashLBType_ = nullptr;};
        inline string getConsistentHashLBType() const { DARABONBA_PTR_GET_DEFAULT(consistentHashLBType_, "") };
        inline ConsistentHashLBConfig& setConsistentHashLBType(string consistentHashLBType) { DARABONBA_PTR_SET_VALUE(consistentHashLBType_, consistentHashLBType) };


        // httpCookie Field Functions 
        bool hasHttpCookie() const { return this->httpCookie_ != nullptr;};
        void deleteHttpCookie() { this->httpCookie_ = nullptr;};
        inline const ConsistentHashLBConfig::HttpCookie & getHttpCookie() const { DARABONBA_PTR_GET_CONST(httpCookie_, ConsistentHashLBConfig::HttpCookie) };
        inline ConsistentHashLBConfig::HttpCookie getHttpCookie() { DARABONBA_PTR_GET(httpCookie_, ConsistentHashLBConfig::HttpCookie) };
        inline ConsistentHashLBConfig& setHttpCookie(const ConsistentHashLBConfig::HttpCookie & httpCookie) { DARABONBA_PTR_SET_VALUE(httpCookie_, httpCookie) };
        inline ConsistentHashLBConfig& setHttpCookie(ConsistentHashLBConfig::HttpCookie && httpCookie) { DARABONBA_PTR_SET_RVALUE(httpCookie_, httpCookie) };


        // parameterName Field Functions 
        bool hasParameterName() const { return this->parameterName_ != nullptr;};
        void deleteParameterName() { this->parameterName_ = nullptr;};
        inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
        inline ConsistentHashLBConfig& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


      protected:
        shared_ptr<string> consistentHashLBType_ {};
        shared_ptr<ConsistentHashLBConfig::HttpCookie> httpCookie_ {};
        shared_ptr<string> parameterName_ {};
      };

      virtual bool empty() const override { return this->consistentHashLBConfig_ == nullptr
        && this->loadbalancerType_ == nullptr && this->warmupDuration_ == nullptr; };
      // consistentHashLBConfig Field Functions 
      bool hasConsistentHashLBConfig() const { return this->consistentHashLBConfig_ != nullptr;};
      void deleteConsistentHashLBConfig() { this->consistentHashLBConfig_ = nullptr;};
      inline const LoadBalancerSettings::ConsistentHashLBConfig & getConsistentHashLBConfig() const { DARABONBA_PTR_GET_CONST(consistentHashLBConfig_, LoadBalancerSettings::ConsistentHashLBConfig) };
      inline LoadBalancerSettings::ConsistentHashLBConfig getConsistentHashLBConfig() { DARABONBA_PTR_GET(consistentHashLBConfig_, LoadBalancerSettings::ConsistentHashLBConfig) };
      inline LoadBalancerSettings& setConsistentHashLBConfig(const LoadBalancerSettings::ConsistentHashLBConfig & consistentHashLBConfig) { DARABONBA_PTR_SET_VALUE(consistentHashLBConfig_, consistentHashLBConfig) };
      inline LoadBalancerSettings& setConsistentHashLBConfig(LoadBalancerSettings::ConsistentHashLBConfig && consistentHashLBConfig) { DARABONBA_PTR_SET_RVALUE(consistentHashLBConfig_, consistentHashLBConfig) };


      // loadbalancerType Field Functions 
      bool hasLoadbalancerType() const { return this->loadbalancerType_ != nullptr;};
      void deleteLoadbalancerType() { this->loadbalancerType_ = nullptr;};
      inline string getLoadbalancerType() const { DARABONBA_PTR_GET_DEFAULT(loadbalancerType_, "") };
      inline LoadBalancerSettings& setLoadbalancerType(string loadbalancerType) { DARABONBA_PTR_SET_VALUE(loadbalancerType_, loadbalancerType) };


      // warmupDuration Field Functions 
      bool hasWarmupDuration() const { return this->warmupDuration_ != nullptr;};
      void deleteWarmupDuration() { this->warmupDuration_ = nullptr;};
      inline int64_t getWarmupDuration() const { DARABONBA_PTR_GET_DEFAULT(warmupDuration_, 0L) };
      inline LoadBalancerSettings& setWarmupDuration(int64_t warmupDuration) { DARABONBA_PTR_SET_VALUE(warmupDuration_, warmupDuration) };


    protected:
      shared_ptr<LoadBalancerSettings::ConsistentHashLBConfig> consistentHashLBConfig_ {};
      shared_ptr<string> loadbalancerType_ {};
      shared_ptr<int64_t> warmupDuration_ {};
    };

    virtual bool empty() const override { return this->loadBalancerSettings_ == nullptr
        && this->tlsSetting_ == nullptr; };
    // loadBalancerSettings Field Functions 
    bool hasLoadBalancerSettings() const { return this->loadBalancerSettings_ != nullptr;};
    void deleteLoadBalancerSettings() { this->loadBalancerSettings_ = nullptr;};
    inline const TrafficPolicy::LoadBalancerSettings & getLoadBalancerSettings() const { DARABONBA_PTR_GET_CONST(loadBalancerSettings_, TrafficPolicy::LoadBalancerSettings) };
    inline TrafficPolicy::LoadBalancerSettings getLoadBalancerSettings() { DARABONBA_PTR_GET(loadBalancerSettings_, TrafficPolicy::LoadBalancerSettings) };
    inline TrafficPolicy& setLoadBalancerSettings(const TrafficPolicy::LoadBalancerSettings & loadBalancerSettings) { DARABONBA_PTR_SET_VALUE(loadBalancerSettings_, loadBalancerSettings) };
    inline TrafficPolicy& setLoadBalancerSettings(TrafficPolicy::LoadBalancerSettings && loadBalancerSettings) { DARABONBA_PTR_SET_RVALUE(loadBalancerSettings_, loadBalancerSettings) };


    // tlsSetting Field Functions 
    bool hasTlsSetting() const { return this->tlsSetting_ != nullptr;};
    void deleteTlsSetting() { this->tlsSetting_ = nullptr;};
    inline const TrafficPolicy::TlsSetting & getTlsSetting() const { DARABONBA_PTR_GET_CONST(tlsSetting_, TrafficPolicy::TlsSetting) };
    inline TrafficPolicy::TlsSetting getTlsSetting() { DARABONBA_PTR_GET(tlsSetting_, TrafficPolicy::TlsSetting) };
    inline TrafficPolicy& setTlsSetting(const TrafficPolicy::TlsSetting & tlsSetting) { DARABONBA_PTR_SET_VALUE(tlsSetting_, tlsSetting) };
    inline TrafficPolicy& setTlsSetting(TrafficPolicy::TlsSetting && tlsSetting) { DARABONBA_PTR_SET_RVALUE(tlsSetting_, tlsSetting) };


  protected:
    shared_ptr<TrafficPolicy::LoadBalancerSettings> loadBalancerSettings_ {};
    shared_ptr<TrafficPolicy::TlsSetting> tlsSetting_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
