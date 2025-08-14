// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADINSERTIONRESPONSEBODYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETADINSERTIONRESPONSEBODYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAdInsertionResponseBodyConfigCdnConfig.hpp>
#include <alibabacloud/models/GetAdInsertionResponseBodyConfigManifestEndpointConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAdInsertionResponseBodyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdInsertionResponseBodyConfig& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetAdInsertionResponseBodyConfig& obj) { 
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
    GetAdInsertionResponseBodyConfig() = default ;
    GetAdInsertionResponseBodyConfig(const GetAdInsertionResponseBodyConfig &) = default ;
    GetAdInsertionResponseBodyConfig(GetAdInsertionResponseBodyConfig &&) = default ;
    GetAdInsertionResponseBodyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdInsertionResponseBodyConfig() = default ;
    GetAdInsertionResponseBodyConfig& operator=(const GetAdInsertionResponseBodyConfig &) = default ;
    GetAdInsertionResponseBodyConfig& operator=(GetAdInsertionResponseBodyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adMarkerPassthrough_ != nullptr
        && this->adsUrl_ != nullptr && this->cdnConfig_ != nullptr && this->configAliases_ != nullptr && this->contentUrlPrefix_ != nullptr && this->createTime_ != nullptr
        && this->lastModified_ != nullptr && this->manifestEndpointConfig_ != nullptr && this->name_ != nullptr && this->personalizationThreshold_ != nullptr && this->slateAdUrl_ != nullptr; };
    // adMarkerPassthrough Field Functions 
    bool hasAdMarkerPassthrough() const { return this->adMarkerPassthrough_ != nullptr;};
    void deleteAdMarkerPassthrough() { this->adMarkerPassthrough_ = nullptr;};
    inline string adMarkerPassthrough() const { DARABONBA_PTR_GET_DEFAULT(adMarkerPassthrough_, "") };
    inline GetAdInsertionResponseBodyConfig& setAdMarkerPassthrough(string adMarkerPassthrough) { DARABONBA_PTR_SET_VALUE(adMarkerPassthrough_, adMarkerPassthrough) };


    // adsUrl Field Functions 
    bool hasAdsUrl() const { return this->adsUrl_ != nullptr;};
    void deleteAdsUrl() { this->adsUrl_ = nullptr;};
    inline string adsUrl() const { DARABONBA_PTR_GET_DEFAULT(adsUrl_, "") };
    inline GetAdInsertionResponseBodyConfig& setAdsUrl(string adsUrl) { DARABONBA_PTR_SET_VALUE(adsUrl_, adsUrl) };


    // cdnConfig Field Functions 
    bool hasCdnConfig() const { return this->cdnConfig_ != nullptr;};
    void deleteCdnConfig() { this->cdnConfig_ = nullptr;};
    inline const Models::GetAdInsertionResponseBodyConfigCdnConfig & cdnConfig() const { DARABONBA_PTR_GET_CONST(cdnConfig_, Models::GetAdInsertionResponseBodyConfigCdnConfig) };
    inline Models::GetAdInsertionResponseBodyConfigCdnConfig cdnConfig() { DARABONBA_PTR_GET(cdnConfig_, Models::GetAdInsertionResponseBodyConfigCdnConfig) };
    inline GetAdInsertionResponseBodyConfig& setCdnConfig(const Models::GetAdInsertionResponseBodyConfigCdnConfig & cdnConfig) { DARABONBA_PTR_SET_VALUE(cdnConfig_, cdnConfig) };
    inline GetAdInsertionResponseBodyConfig& setCdnConfig(Models::GetAdInsertionResponseBodyConfigCdnConfig && cdnConfig) { DARABONBA_PTR_SET_RVALUE(cdnConfig_, cdnConfig) };


    // configAliases Field Functions 
    bool hasConfigAliases() const { return this->configAliases_ != nullptr;};
    void deleteConfigAliases() { this->configAliases_ = nullptr;};
    inline string configAliases() const { DARABONBA_PTR_GET_DEFAULT(configAliases_, "") };
    inline GetAdInsertionResponseBodyConfig& setConfigAliases(string configAliases) { DARABONBA_PTR_SET_VALUE(configAliases_, configAliases) };


    // contentUrlPrefix Field Functions 
    bool hasContentUrlPrefix() const { return this->contentUrlPrefix_ != nullptr;};
    void deleteContentUrlPrefix() { this->contentUrlPrefix_ = nullptr;};
    inline string contentUrlPrefix() const { DARABONBA_PTR_GET_DEFAULT(contentUrlPrefix_, "") };
    inline GetAdInsertionResponseBodyConfig& setContentUrlPrefix(string contentUrlPrefix) { DARABONBA_PTR_SET_VALUE(contentUrlPrefix_, contentUrlPrefix) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetAdInsertionResponseBodyConfig& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // lastModified Field Functions 
    bool hasLastModified() const { return this->lastModified_ != nullptr;};
    void deleteLastModified() { this->lastModified_ = nullptr;};
    inline string lastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
    inline GetAdInsertionResponseBodyConfig& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


    // manifestEndpointConfig Field Functions 
    bool hasManifestEndpointConfig() const { return this->manifestEndpointConfig_ != nullptr;};
    void deleteManifestEndpointConfig() { this->manifestEndpointConfig_ = nullptr;};
    inline const Models::GetAdInsertionResponseBodyConfigManifestEndpointConfig & manifestEndpointConfig() const { DARABONBA_PTR_GET_CONST(manifestEndpointConfig_, Models::GetAdInsertionResponseBodyConfigManifestEndpointConfig) };
    inline Models::GetAdInsertionResponseBodyConfigManifestEndpointConfig manifestEndpointConfig() { DARABONBA_PTR_GET(manifestEndpointConfig_, Models::GetAdInsertionResponseBodyConfigManifestEndpointConfig) };
    inline GetAdInsertionResponseBodyConfig& setManifestEndpointConfig(const Models::GetAdInsertionResponseBodyConfigManifestEndpointConfig & manifestEndpointConfig) { DARABONBA_PTR_SET_VALUE(manifestEndpointConfig_, manifestEndpointConfig) };
    inline GetAdInsertionResponseBodyConfig& setManifestEndpointConfig(Models::GetAdInsertionResponseBodyConfigManifestEndpointConfig && manifestEndpointConfig) { DARABONBA_PTR_SET_RVALUE(manifestEndpointConfig_, manifestEndpointConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAdInsertionResponseBodyConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // personalizationThreshold Field Functions 
    bool hasPersonalizationThreshold() const { return this->personalizationThreshold_ != nullptr;};
    void deletePersonalizationThreshold() { this->personalizationThreshold_ = nullptr;};
    inline int32_t personalizationThreshold() const { DARABONBA_PTR_GET_DEFAULT(personalizationThreshold_, 0) };
    inline GetAdInsertionResponseBodyConfig& setPersonalizationThreshold(int32_t personalizationThreshold) { DARABONBA_PTR_SET_VALUE(personalizationThreshold_, personalizationThreshold) };


    // slateAdUrl Field Functions 
    bool hasSlateAdUrl() const { return this->slateAdUrl_ != nullptr;};
    void deleteSlateAdUrl() { this->slateAdUrl_ = nullptr;};
    inline string slateAdUrl() const { DARABONBA_PTR_GET_DEFAULT(slateAdUrl_, "") };
    inline GetAdInsertionResponseBodyConfig& setSlateAdUrl(string slateAdUrl) { DARABONBA_PTR_SET_VALUE(slateAdUrl_, slateAdUrl) };


  protected:
    // Indicates whether ad marker passthrough is enabled.
    std::shared_ptr<string> adMarkerPassthrough_ = nullptr;
    // The URL of the ad decision server (ADS).
    std::shared_ptr<string> adsUrl_ = nullptr;
    // The CDN configurations.
    std::shared_ptr<Models::GetAdInsertionResponseBodyConfigCdnConfig> cdnConfig_ = nullptr;
    // The aliases for dynamic variable replacement.
    std::shared_ptr<string> configAliases_ = nullptr;
    // The prefix of the source URL.
    std::shared_ptr<string> contentUrlPrefix_ = nullptr;
    // The time when the configuration was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the configuration was last modified.
    std::shared_ptr<string> lastModified_ = nullptr;
    // The playback endpoint prefix for accessing manifests.
    std::shared_ptr<Models::GetAdInsertionResponseBodyConfigManifestEndpointConfig> manifestEndpointConfig_ = nullptr;
    // The name of the configuration.
    std::shared_ptr<string> name_ = nullptr;
    // The personalization threshold.
    std::shared_ptr<int32_t> personalizationThreshold_ = nullptr;
    // The URL of the slate ad.
    std::shared_ptr<string> slateAdUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
