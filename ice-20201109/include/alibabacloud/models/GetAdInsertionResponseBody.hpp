// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADINSERTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETADINSERTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAdInsertionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdInsertionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAdInsertionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAdInsertionResponseBody() = default ;
    GetAdInsertionResponseBody(const GetAdInsertionResponseBody &) = default ;
    GetAdInsertionResponseBody(GetAdInsertionResponseBody &&) = default ;
    GetAdInsertionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdInsertionResponseBody() = default ;
    GetAdInsertionResponseBody& operator=(const GetAdInsertionResponseBody &) = default ;
    GetAdInsertionResponseBody& operator=(GetAdInsertionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(AdMarkerPassthrough, adMarkerPassthrough_);
        DARABONBA_PTR_TO_JSON(AdsUrl, adsUrl_);
        DARABONBA_PTR_TO_JSON(CdnConfig, cdnConfig_);
        DARABONBA_PTR_TO_JSON(ConfigAliases, configAliases_);
        DARABONBA_PTR_TO_JSON(ContentUrlPrefix, contentUrlPrefix_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
        DARABONBA_PTR_TO_JSON(ManifestEndpointConfig, manifestEndpointConfig_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PersonalizationThreshold, personalizationThreshold_);
        DARABONBA_PTR_TO_JSON(SlateAdUrl, slateAdUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(AdMarkerPassthrough, adMarkerPassthrough_);
        DARABONBA_PTR_FROM_JSON(AdsUrl, adsUrl_);
        DARABONBA_PTR_FROM_JSON(CdnConfig, cdnConfig_);
        DARABONBA_PTR_FROM_JSON(ConfigAliases, configAliases_);
        DARABONBA_PTR_FROM_JSON(ContentUrlPrefix, contentUrlPrefix_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
        DARABONBA_PTR_FROM_JSON(ManifestEndpointConfig, manifestEndpointConfig_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PersonalizationThreshold, personalizationThreshold_);
        DARABONBA_PTR_FROM_JSON(SlateAdUrl, slateAdUrl_);
      };
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ManifestEndpointConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ManifestEndpointConfig& obj) { 
          DARABONBA_PTR_TO_JSON(DashPrefix, dashPrefix_);
          DARABONBA_PTR_TO_JSON(HlsPrefix, hlsPrefix_);
        };
        friend void from_json(const Darabonba::Json& j, ManifestEndpointConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(DashPrefix, dashPrefix_);
          DARABONBA_PTR_FROM_JSON(HlsPrefix, hlsPrefix_);
        };
        ManifestEndpointConfig() = default ;
        ManifestEndpointConfig(const ManifestEndpointConfig &) = default ;
        ManifestEndpointConfig(ManifestEndpointConfig &&) = default ;
        ManifestEndpointConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ManifestEndpointConfig() = default ;
        ManifestEndpointConfig& operator=(const ManifestEndpointConfig &) = default ;
        ManifestEndpointConfig& operator=(ManifestEndpointConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dashPrefix_ == nullptr
        && this->hlsPrefix_ == nullptr; };
        // dashPrefix Field Functions 
        bool hasDashPrefix() const { return this->dashPrefix_ != nullptr;};
        void deleteDashPrefix() { this->dashPrefix_ = nullptr;};
        inline string getDashPrefix() const { DARABONBA_PTR_GET_DEFAULT(dashPrefix_, "") };
        inline ManifestEndpointConfig& setDashPrefix(string dashPrefix) { DARABONBA_PTR_SET_VALUE(dashPrefix_, dashPrefix) };


        // hlsPrefix Field Functions 
        bool hasHlsPrefix() const { return this->hlsPrefix_ != nullptr;};
        void deleteHlsPrefix() { this->hlsPrefix_ = nullptr;};
        inline string getHlsPrefix() const { DARABONBA_PTR_GET_DEFAULT(hlsPrefix_, "") };
        inline ManifestEndpointConfig& setHlsPrefix(string hlsPrefix) { DARABONBA_PTR_SET_VALUE(hlsPrefix_, hlsPrefix) };


      protected:
        // DASH清单播放端点前缀
        shared_ptr<string> dashPrefix_ {};
        // The playback endpoint prefix for accessing HLS manifests.
        shared_ptr<string> hlsPrefix_ {};
      };

      class CdnConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CdnConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AdSegmentUrlPrefix, adSegmentUrlPrefix_);
          DARABONBA_PTR_TO_JSON(ContentSegmentUrlPrefix, contentSegmentUrlPrefix_);
        };
        friend void from_json(const Darabonba::Json& j, CdnConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AdSegmentUrlPrefix, adSegmentUrlPrefix_);
          DARABONBA_PTR_FROM_JSON(ContentSegmentUrlPrefix, contentSegmentUrlPrefix_);
        };
        CdnConfig() = default ;
        CdnConfig(const CdnConfig &) = default ;
        CdnConfig(CdnConfig &&) = default ;
        CdnConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CdnConfig() = default ;
        CdnConfig& operator=(const CdnConfig &) = default ;
        CdnConfig& operator=(CdnConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adSegmentUrlPrefix_ == nullptr
        && this->contentSegmentUrlPrefix_ == nullptr; };
        // adSegmentUrlPrefix Field Functions 
        bool hasAdSegmentUrlPrefix() const { return this->adSegmentUrlPrefix_ != nullptr;};
        void deleteAdSegmentUrlPrefix() { this->adSegmentUrlPrefix_ = nullptr;};
        inline string getAdSegmentUrlPrefix() const { DARABONBA_PTR_GET_DEFAULT(adSegmentUrlPrefix_, "") };
        inline CdnConfig& setAdSegmentUrlPrefix(string adSegmentUrlPrefix) { DARABONBA_PTR_SET_VALUE(adSegmentUrlPrefix_, adSegmentUrlPrefix) };


        // contentSegmentUrlPrefix Field Functions 
        bool hasContentSegmentUrlPrefix() const { return this->contentSegmentUrlPrefix_ != nullptr;};
        void deleteContentSegmentUrlPrefix() { this->contentSegmentUrlPrefix_ = nullptr;};
        inline string getContentSegmentUrlPrefix() const { DARABONBA_PTR_GET_DEFAULT(contentSegmentUrlPrefix_, "") };
        inline CdnConfig& setContentSegmentUrlPrefix(string contentSegmentUrlPrefix) { DARABONBA_PTR_SET_VALUE(contentSegmentUrlPrefix_, contentSegmentUrlPrefix) };


      protected:
        // The CDN prefix for accessing ad segments.
        shared_ptr<string> adSegmentUrlPrefix_ {};
        // The CDN prefix for accessing content segments.
        shared_ptr<string> contentSegmentUrlPrefix_ {};
      };

      virtual bool empty() const override { return this->adMarkerPassthrough_ == nullptr
        && this->adsUrl_ == nullptr && this->cdnConfig_ == nullptr && this->configAliases_ == nullptr && this->contentUrlPrefix_ == nullptr && this->createTime_ == nullptr
        && this->lastModified_ == nullptr && this->manifestEndpointConfig_ == nullptr && this->name_ == nullptr && this->personalizationThreshold_ == nullptr && this->slateAdUrl_ == nullptr; };
      // adMarkerPassthrough Field Functions 
      bool hasAdMarkerPassthrough() const { return this->adMarkerPassthrough_ != nullptr;};
      void deleteAdMarkerPassthrough() { this->adMarkerPassthrough_ = nullptr;};
      inline string getAdMarkerPassthrough() const { DARABONBA_PTR_GET_DEFAULT(adMarkerPassthrough_, "") };
      inline Config& setAdMarkerPassthrough(string adMarkerPassthrough) { DARABONBA_PTR_SET_VALUE(adMarkerPassthrough_, adMarkerPassthrough) };


      // adsUrl Field Functions 
      bool hasAdsUrl() const { return this->adsUrl_ != nullptr;};
      void deleteAdsUrl() { this->adsUrl_ = nullptr;};
      inline string getAdsUrl() const { DARABONBA_PTR_GET_DEFAULT(adsUrl_, "") };
      inline Config& setAdsUrl(string adsUrl) { DARABONBA_PTR_SET_VALUE(adsUrl_, adsUrl) };


      // cdnConfig Field Functions 
      bool hasCdnConfig() const { return this->cdnConfig_ != nullptr;};
      void deleteCdnConfig() { this->cdnConfig_ = nullptr;};
      inline const Config::CdnConfig & getCdnConfig() const { DARABONBA_PTR_GET_CONST(cdnConfig_, Config::CdnConfig) };
      inline Config::CdnConfig getCdnConfig() { DARABONBA_PTR_GET(cdnConfig_, Config::CdnConfig) };
      inline Config& setCdnConfig(const Config::CdnConfig & cdnConfig) { DARABONBA_PTR_SET_VALUE(cdnConfig_, cdnConfig) };
      inline Config& setCdnConfig(Config::CdnConfig && cdnConfig) { DARABONBA_PTR_SET_RVALUE(cdnConfig_, cdnConfig) };


      // configAliases Field Functions 
      bool hasConfigAliases() const { return this->configAliases_ != nullptr;};
      void deleteConfigAliases() { this->configAliases_ = nullptr;};
      inline string getConfigAliases() const { DARABONBA_PTR_GET_DEFAULT(configAliases_, "") };
      inline Config& setConfigAliases(string configAliases) { DARABONBA_PTR_SET_VALUE(configAliases_, configAliases) };


      // contentUrlPrefix Field Functions 
      bool hasContentUrlPrefix() const { return this->contentUrlPrefix_ != nullptr;};
      void deleteContentUrlPrefix() { this->contentUrlPrefix_ = nullptr;};
      inline string getContentUrlPrefix() const { DARABONBA_PTR_GET_DEFAULT(contentUrlPrefix_, "") };
      inline Config& setContentUrlPrefix(string contentUrlPrefix) { DARABONBA_PTR_SET_VALUE(contentUrlPrefix_, contentUrlPrefix) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Config& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // lastModified Field Functions 
      bool hasLastModified() const { return this->lastModified_ != nullptr;};
      void deleteLastModified() { this->lastModified_ = nullptr;};
      inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
      inline Config& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


      // manifestEndpointConfig Field Functions 
      bool hasManifestEndpointConfig() const { return this->manifestEndpointConfig_ != nullptr;};
      void deleteManifestEndpointConfig() { this->manifestEndpointConfig_ = nullptr;};
      inline const Config::ManifestEndpointConfig & getManifestEndpointConfig() const { DARABONBA_PTR_GET_CONST(manifestEndpointConfig_, Config::ManifestEndpointConfig) };
      inline Config::ManifestEndpointConfig getManifestEndpointConfig() { DARABONBA_PTR_GET(manifestEndpointConfig_, Config::ManifestEndpointConfig) };
      inline Config& setManifestEndpointConfig(const Config::ManifestEndpointConfig & manifestEndpointConfig) { DARABONBA_PTR_SET_VALUE(manifestEndpointConfig_, manifestEndpointConfig) };
      inline Config& setManifestEndpointConfig(Config::ManifestEndpointConfig && manifestEndpointConfig) { DARABONBA_PTR_SET_RVALUE(manifestEndpointConfig_, manifestEndpointConfig) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Config& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // personalizationThreshold Field Functions 
      bool hasPersonalizationThreshold() const { return this->personalizationThreshold_ != nullptr;};
      void deletePersonalizationThreshold() { this->personalizationThreshold_ = nullptr;};
      inline int32_t getPersonalizationThreshold() const { DARABONBA_PTR_GET_DEFAULT(personalizationThreshold_, 0) };
      inline Config& setPersonalizationThreshold(int32_t personalizationThreshold) { DARABONBA_PTR_SET_VALUE(personalizationThreshold_, personalizationThreshold) };


      // slateAdUrl Field Functions 
      bool hasSlateAdUrl() const { return this->slateAdUrl_ != nullptr;};
      void deleteSlateAdUrl() { this->slateAdUrl_ = nullptr;};
      inline string getSlateAdUrl() const { DARABONBA_PTR_GET_DEFAULT(slateAdUrl_, "") };
      inline Config& setSlateAdUrl(string slateAdUrl) { DARABONBA_PTR_SET_VALUE(slateAdUrl_, slateAdUrl) };


    protected:
      // Indicates whether ad marker passthrough is enabled.
      shared_ptr<string> adMarkerPassthrough_ {};
      // The URL of the ad decision server (ADS).
      shared_ptr<string> adsUrl_ {};
      // The CDN configurations.
      shared_ptr<Config::CdnConfig> cdnConfig_ {};
      // The aliases for dynamic variable replacement.
      shared_ptr<string> configAliases_ {};
      // The prefix of the source URL.
      shared_ptr<string> contentUrlPrefix_ {};
      // The time when the configuration was created.
      shared_ptr<string> createTime_ {};
      // The time when the configuration was last modified.
      shared_ptr<string> lastModified_ {};
      // The playback endpoint prefix for accessing manifests.
      shared_ptr<Config::ManifestEndpointConfig> manifestEndpointConfig_ {};
      // The name of the configuration.
      shared_ptr<string> name_ {};
      // The personalization threshold.
      shared_ptr<int32_t> personalizationThreshold_ {};
      // The URL of the slate ad.
      shared_ptr<string> slateAdUrl_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->requestId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const GetAdInsertionResponseBody::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, GetAdInsertionResponseBody::Config) };
    inline GetAdInsertionResponseBody::Config getConfig() { DARABONBA_PTR_GET(config_, GetAdInsertionResponseBody::Config) };
    inline GetAdInsertionResponseBody& setConfig(const GetAdInsertionResponseBody::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetAdInsertionResponseBody& setConfig(GetAdInsertionResponseBody::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAdInsertionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ad insertion configuration.
    shared_ptr<GetAdInsertionResponseBody::Config> config_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
