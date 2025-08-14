// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDADINSERTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDADINSERTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AddAdInsertionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAdInsertionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdMarkerPassthrough, adMarkerPassthrough_);
      DARABONBA_PTR_TO_JSON(AdsUrl, adsUrl_);
      DARABONBA_PTR_TO_JSON(CdnAdSegmentUrlPrefix, cdnAdSegmentUrlPrefix_);
      DARABONBA_PTR_TO_JSON(CdnContentSegmentUrlPrefix, cdnContentSegmentUrlPrefix_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConfigAliases, configAliases_);
      DARABONBA_PTR_TO_JSON(ContentUrlPrefix, contentUrlPrefix_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PersonalizationThreshold, personalizationThreshold_);
      DARABONBA_PTR_TO_JSON(SlateAdUrl, slateAdUrl_);
    };
    friend void from_json(const Darabonba::Json& j, AddAdInsertionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdMarkerPassthrough, adMarkerPassthrough_);
      DARABONBA_PTR_FROM_JSON(AdsUrl, adsUrl_);
      DARABONBA_PTR_FROM_JSON(CdnAdSegmentUrlPrefix, cdnAdSegmentUrlPrefix_);
      DARABONBA_PTR_FROM_JSON(CdnContentSegmentUrlPrefix, cdnContentSegmentUrlPrefix_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConfigAliases, configAliases_);
      DARABONBA_PTR_FROM_JSON(ContentUrlPrefix, contentUrlPrefix_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PersonalizationThreshold, personalizationThreshold_);
      DARABONBA_PTR_FROM_JSON(SlateAdUrl, slateAdUrl_);
    };
    AddAdInsertionRequest() = default ;
    AddAdInsertionRequest(const AddAdInsertionRequest &) = default ;
    AddAdInsertionRequest(AddAdInsertionRequest &&) = default ;
    AddAdInsertionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAdInsertionRequest() = default ;
    AddAdInsertionRequest& operator=(const AddAdInsertionRequest &) = default ;
    AddAdInsertionRequest& operator=(AddAdInsertionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adMarkerPassthrough_ != nullptr
        && this->adsUrl_ != nullptr && this->cdnAdSegmentUrlPrefix_ != nullptr && this->cdnContentSegmentUrlPrefix_ != nullptr && this->clientToken_ != nullptr && this->configAliases_ != nullptr
        && this->contentUrlPrefix_ != nullptr && this->name_ != nullptr && this->personalizationThreshold_ != nullptr && this->slateAdUrl_ != nullptr; };
    // adMarkerPassthrough Field Functions 
    bool hasAdMarkerPassthrough() const { return this->adMarkerPassthrough_ != nullptr;};
    void deleteAdMarkerPassthrough() { this->adMarkerPassthrough_ = nullptr;};
    inline string adMarkerPassthrough() const { DARABONBA_PTR_GET_DEFAULT(adMarkerPassthrough_, "") };
    inline AddAdInsertionRequest& setAdMarkerPassthrough(string adMarkerPassthrough) { DARABONBA_PTR_SET_VALUE(adMarkerPassthrough_, adMarkerPassthrough) };


    // adsUrl Field Functions 
    bool hasAdsUrl() const { return this->adsUrl_ != nullptr;};
    void deleteAdsUrl() { this->adsUrl_ = nullptr;};
    inline string adsUrl() const { DARABONBA_PTR_GET_DEFAULT(adsUrl_, "") };
    inline AddAdInsertionRequest& setAdsUrl(string adsUrl) { DARABONBA_PTR_SET_VALUE(adsUrl_, adsUrl) };


    // cdnAdSegmentUrlPrefix Field Functions 
    bool hasCdnAdSegmentUrlPrefix() const { return this->cdnAdSegmentUrlPrefix_ != nullptr;};
    void deleteCdnAdSegmentUrlPrefix() { this->cdnAdSegmentUrlPrefix_ = nullptr;};
    inline string cdnAdSegmentUrlPrefix() const { DARABONBA_PTR_GET_DEFAULT(cdnAdSegmentUrlPrefix_, "") };
    inline AddAdInsertionRequest& setCdnAdSegmentUrlPrefix(string cdnAdSegmentUrlPrefix) { DARABONBA_PTR_SET_VALUE(cdnAdSegmentUrlPrefix_, cdnAdSegmentUrlPrefix) };


    // cdnContentSegmentUrlPrefix Field Functions 
    bool hasCdnContentSegmentUrlPrefix() const { return this->cdnContentSegmentUrlPrefix_ != nullptr;};
    void deleteCdnContentSegmentUrlPrefix() { this->cdnContentSegmentUrlPrefix_ = nullptr;};
    inline string cdnContentSegmentUrlPrefix() const { DARABONBA_PTR_GET_DEFAULT(cdnContentSegmentUrlPrefix_, "") };
    inline AddAdInsertionRequest& setCdnContentSegmentUrlPrefix(string cdnContentSegmentUrlPrefix) { DARABONBA_PTR_SET_VALUE(cdnContentSegmentUrlPrefix_, cdnContentSegmentUrlPrefix) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddAdInsertionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configAliases Field Functions 
    bool hasConfigAliases() const { return this->configAliases_ != nullptr;};
    void deleteConfigAliases() { this->configAliases_ = nullptr;};
    inline string configAliases() const { DARABONBA_PTR_GET_DEFAULT(configAliases_, "") };
    inline AddAdInsertionRequest& setConfigAliases(string configAliases) { DARABONBA_PTR_SET_VALUE(configAliases_, configAliases) };


    // contentUrlPrefix Field Functions 
    bool hasContentUrlPrefix() const { return this->contentUrlPrefix_ != nullptr;};
    void deleteContentUrlPrefix() { this->contentUrlPrefix_ = nullptr;};
    inline string contentUrlPrefix() const { DARABONBA_PTR_GET_DEFAULT(contentUrlPrefix_, "") };
    inline AddAdInsertionRequest& setContentUrlPrefix(string contentUrlPrefix) { DARABONBA_PTR_SET_VALUE(contentUrlPrefix_, contentUrlPrefix) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddAdInsertionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // personalizationThreshold Field Functions 
    bool hasPersonalizationThreshold() const { return this->personalizationThreshold_ != nullptr;};
    void deletePersonalizationThreshold() { this->personalizationThreshold_ = nullptr;};
    inline int32_t personalizationThreshold() const { DARABONBA_PTR_GET_DEFAULT(personalizationThreshold_, 0) };
    inline AddAdInsertionRequest& setPersonalizationThreshold(int32_t personalizationThreshold) { DARABONBA_PTR_SET_VALUE(personalizationThreshold_, personalizationThreshold) };


    // slateAdUrl Field Functions 
    bool hasSlateAdUrl() const { return this->slateAdUrl_ != nullptr;};
    void deleteSlateAdUrl() { this->slateAdUrl_ = nullptr;};
    inline string slateAdUrl() const { DARABONBA_PTR_GET_DEFAULT(slateAdUrl_, "") };
    inline AddAdInsertionRequest& setSlateAdUrl(string slateAdUrl) { DARABONBA_PTR_SET_VALUE(slateAdUrl_, slateAdUrl) };


  protected:
    // Specifies whether to enable ad marker passthrough. Default value: OFF.
    // 
    // Valid values:
    // 
    // *   OFF: Disable.
    // *   ON: Enable.
    std::shared_ptr<string> adMarkerPassthrough_ = nullptr;
    // The request URL of the ad decision server (ADS). HTTP and HTTPS are supported. The maximum length is 2,048 characters.
    // 
    // This parameter is required.
    std::shared_ptr<string> adsUrl_ = nullptr;
    // The CDN prefix for ad segments. HTTP and HTTPS are supported. The maximum length is 512 characters.
    std::shared_ptr<string> cdnAdSegmentUrlPrefix_ = nullptr;
    // The CDN prefix for content segments. HTTP and HTTPS are supported. The maximum length is 512 characters.
    std::shared_ptr<string> cdnContentSegmentUrlPrefix_ = nullptr;
    // The idempotency key that is used to avoid repeated submission. The value can be up to 200 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // A JSON string that specifies the player parameter variables and aliases. You can add up to 20 player_params.{name} entries. The name field can be up to 150 characters in length. Each player parameter can include up to 50 key-value pairs. A key can be up to 150 characters long, and a value can be up to 500 characters. Example: { "player_params.{name}": { "{key}": "{value}" } }
    std::shared_ptr<string> configAliases_ = nullptr;
    // The URL prefix for the source content. HTTP and HTTPS are supported. The maximum length is 512 characters.
    // 
    // This parameter is required.
    std::shared_ptr<string> contentUrlPrefix_ = nullptr;
    // The name of the configuration. The name must be unique and can be up to 128 characters in length. Letters, digits, underscores (_), and hyphens (-) are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // Specifies the maximum duration of underfilled time allowed in an ad break. Unit: seconds. Default value: 8 seconds.
    std::shared_ptr<int32_t> personalizationThreshold_ = nullptr;
    // The HTTP or HTTPS URL of the slate ad. Only MP4 format is supported. The maximum length is 2,048 characters.
    std::shared_ptr<string> slateAdUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
