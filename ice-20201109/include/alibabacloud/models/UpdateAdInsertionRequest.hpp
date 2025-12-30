// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEADINSERTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEADINSERTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateAdInsertionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAdInsertionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdMarkerPassthrough, adMarkerPassthrough_);
      DARABONBA_PTR_TO_JSON(AdsUrl, adsUrl_);
      DARABONBA_PTR_TO_JSON(CdnAdSegmentUrlPrefix, cdnAdSegmentUrlPrefix_);
      DARABONBA_PTR_TO_JSON(CdnContentSegmentUrlPrefix, cdnContentSegmentUrlPrefix_);
      DARABONBA_PTR_TO_JSON(ConfigAliases, configAliases_);
      DARABONBA_PTR_TO_JSON(ContentUrlPrefix, contentUrlPrefix_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PersonalizationThreshold, personalizationThreshold_);
      DARABONBA_PTR_TO_JSON(SlateAdUrl, slateAdUrl_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAdInsertionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdMarkerPassthrough, adMarkerPassthrough_);
      DARABONBA_PTR_FROM_JSON(AdsUrl, adsUrl_);
      DARABONBA_PTR_FROM_JSON(CdnAdSegmentUrlPrefix, cdnAdSegmentUrlPrefix_);
      DARABONBA_PTR_FROM_JSON(CdnContentSegmentUrlPrefix, cdnContentSegmentUrlPrefix_);
      DARABONBA_PTR_FROM_JSON(ConfigAliases, configAliases_);
      DARABONBA_PTR_FROM_JSON(ContentUrlPrefix, contentUrlPrefix_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PersonalizationThreshold, personalizationThreshold_);
      DARABONBA_PTR_FROM_JSON(SlateAdUrl, slateAdUrl_);
    };
    UpdateAdInsertionRequest() = default ;
    UpdateAdInsertionRequest(const UpdateAdInsertionRequest &) = default ;
    UpdateAdInsertionRequest(UpdateAdInsertionRequest &&) = default ;
    UpdateAdInsertionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAdInsertionRequest() = default ;
    UpdateAdInsertionRequest& operator=(const UpdateAdInsertionRequest &) = default ;
    UpdateAdInsertionRequest& operator=(UpdateAdInsertionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adMarkerPassthrough_ == nullptr
        && this->adsUrl_ == nullptr && this->cdnAdSegmentUrlPrefix_ == nullptr && this->cdnContentSegmentUrlPrefix_ == nullptr && this->configAliases_ == nullptr && this->contentUrlPrefix_ == nullptr
        && this->name_ == nullptr && this->personalizationThreshold_ == nullptr && this->slateAdUrl_ == nullptr; };
    // adMarkerPassthrough Field Functions 
    bool hasAdMarkerPassthrough() const { return this->adMarkerPassthrough_ != nullptr;};
    void deleteAdMarkerPassthrough() { this->adMarkerPassthrough_ = nullptr;};
    inline string getAdMarkerPassthrough() const { DARABONBA_PTR_GET_DEFAULT(adMarkerPassthrough_, "") };
    inline UpdateAdInsertionRequest& setAdMarkerPassthrough(string adMarkerPassthrough) { DARABONBA_PTR_SET_VALUE(adMarkerPassthrough_, adMarkerPassthrough) };


    // adsUrl Field Functions 
    bool hasAdsUrl() const { return this->adsUrl_ != nullptr;};
    void deleteAdsUrl() { this->adsUrl_ = nullptr;};
    inline string getAdsUrl() const { DARABONBA_PTR_GET_DEFAULT(adsUrl_, "") };
    inline UpdateAdInsertionRequest& setAdsUrl(string adsUrl) { DARABONBA_PTR_SET_VALUE(adsUrl_, adsUrl) };


    // cdnAdSegmentUrlPrefix Field Functions 
    bool hasCdnAdSegmentUrlPrefix() const { return this->cdnAdSegmentUrlPrefix_ != nullptr;};
    void deleteCdnAdSegmentUrlPrefix() { this->cdnAdSegmentUrlPrefix_ = nullptr;};
    inline string getCdnAdSegmentUrlPrefix() const { DARABONBA_PTR_GET_DEFAULT(cdnAdSegmentUrlPrefix_, "") };
    inline UpdateAdInsertionRequest& setCdnAdSegmentUrlPrefix(string cdnAdSegmentUrlPrefix) { DARABONBA_PTR_SET_VALUE(cdnAdSegmentUrlPrefix_, cdnAdSegmentUrlPrefix) };


    // cdnContentSegmentUrlPrefix Field Functions 
    bool hasCdnContentSegmentUrlPrefix() const { return this->cdnContentSegmentUrlPrefix_ != nullptr;};
    void deleteCdnContentSegmentUrlPrefix() { this->cdnContentSegmentUrlPrefix_ = nullptr;};
    inline string getCdnContentSegmentUrlPrefix() const { DARABONBA_PTR_GET_DEFAULT(cdnContentSegmentUrlPrefix_, "") };
    inline UpdateAdInsertionRequest& setCdnContentSegmentUrlPrefix(string cdnContentSegmentUrlPrefix) { DARABONBA_PTR_SET_VALUE(cdnContentSegmentUrlPrefix_, cdnContentSegmentUrlPrefix) };


    // configAliases Field Functions 
    bool hasConfigAliases() const { return this->configAliases_ != nullptr;};
    void deleteConfigAliases() { this->configAliases_ = nullptr;};
    inline string getConfigAliases() const { DARABONBA_PTR_GET_DEFAULT(configAliases_, "") };
    inline UpdateAdInsertionRequest& setConfigAliases(string configAliases) { DARABONBA_PTR_SET_VALUE(configAliases_, configAliases) };


    // contentUrlPrefix Field Functions 
    bool hasContentUrlPrefix() const { return this->contentUrlPrefix_ != nullptr;};
    void deleteContentUrlPrefix() { this->contentUrlPrefix_ = nullptr;};
    inline string getContentUrlPrefix() const { DARABONBA_PTR_GET_DEFAULT(contentUrlPrefix_, "") };
    inline UpdateAdInsertionRequest& setContentUrlPrefix(string contentUrlPrefix) { DARABONBA_PTR_SET_VALUE(contentUrlPrefix_, contentUrlPrefix) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAdInsertionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // personalizationThreshold Field Functions 
    bool hasPersonalizationThreshold() const { return this->personalizationThreshold_ != nullptr;};
    void deletePersonalizationThreshold() { this->personalizationThreshold_ = nullptr;};
    inline int32_t getPersonalizationThreshold() const { DARABONBA_PTR_GET_DEFAULT(personalizationThreshold_, 0) };
    inline UpdateAdInsertionRequest& setPersonalizationThreshold(int32_t personalizationThreshold) { DARABONBA_PTR_SET_VALUE(personalizationThreshold_, personalizationThreshold) };


    // slateAdUrl Field Functions 
    bool hasSlateAdUrl() const { return this->slateAdUrl_ != nullptr;};
    void deleteSlateAdUrl() { this->slateAdUrl_ = nullptr;};
    inline string getSlateAdUrl() const { DARABONBA_PTR_GET_DEFAULT(slateAdUrl_, "") };
    inline UpdateAdInsertionRequest& setSlateAdUrl(string slateAdUrl) { DARABONBA_PTR_SET_VALUE(slateAdUrl_, slateAdUrl) };


  protected:
    // Specifies whether to enable ad marker passthrough. Default value: OFF.
    // 
    // Valid values:
    // 
    // *   OFF: Disable.
    // *   ON: Enable.
    shared_ptr<string> adMarkerPassthrough_ {};
    // The request URL of the ad decision server (ADS). HTTP and HTTPS are supported. The maximum length is 2,048 characters.
    // 
    // This parameter is required.
    shared_ptr<string> adsUrl_ {};
    // The CDN prefix for ad segments. HTTP and HTTPS are supported. The maximum length is 512 characters.
    shared_ptr<string> cdnAdSegmentUrlPrefix_ {};
    // The CDN prefix for content segments. HTTP and HTTPS are supported. The maximum length is 512 characters.
    shared_ptr<string> cdnContentSegmentUrlPrefix_ {};
    // A JSON string that specifies the player parameter variables and aliases. Format: { "player_params.{name}": { "{key}": "{value}" } }. You can add up to 20 player_params.{name} entries. The name field can be up to 150 characters in length. Each player parameter can include up to 50 key-value pairs. A key can be up to 150 characters long, and a value can be up to 500 characters.
    shared_ptr<string> configAliases_ {};
    // The URL prefix for the source content. HTTP and HTTPS are supported. The maximum length is 512 characters.
    // 
    // This parameter is required.
    shared_ptr<string> contentUrlPrefix_ {};
    // The configuration name, which cannot be modified.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // Specifies the maximum duration of underfilled time allowed in an ad break. Unit: seconds. Default value: 8 seconds.
    shared_ptr<int32_t> personalizationThreshold_ {};
    // The HTTP or HTTPS URL of the slate ad. Only MP4 format is supported. The maximum length is 2,048 characters.
    shared_ptr<string> slateAdUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
