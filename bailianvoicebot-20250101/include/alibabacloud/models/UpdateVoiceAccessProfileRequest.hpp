// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVOICEACCESSPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVOICEACCESSPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class UpdateVoiceAccessProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVoiceAccessProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessProfileId, accessProfileId_);
      DARABONBA_PTR_TO_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_TO_JSON(NlsEngine, nlsEngine_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVoiceAccessProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessProfileId, accessProfileId_);
      DARABONBA_PTR_FROM_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_FROM_JSON(NlsEngine, nlsEngine_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
    };
    UpdateVoiceAccessProfileRequest() = default ;
    UpdateVoiceAccessProfileRequest(const UpdateVoiceAccessProfileRequest &) = default ;
    UpdateVoiceAccessProfileRequest(UpdateVoiceAccessProfileRequest &&) = default ;
    UpdateVoiceAccessProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVoiceAccessProfileRequest() = default ;
    UpdateVoiceAccessProfileRequest& operator=(const UpdateVoiceAccessProfileRequest &) = default ;
    UpdateVoiceAccessProfileRequest& operator=(UpdateVoiceAccessProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Profile : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Profile& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(ApiSecret, apiSecret_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppKey, appKey_);
        DARABONBA_PTR_TO_JSON(AsrAppKey, asrAppKey_);
        DARABONBA_PTR_TO_JSON(TtsApiKey, ttsApiKey_);
      };
      friend void from_json(const Darabonba::Json& j, Profile& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(ApiSecret, apiSecret_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
        DARABONBA_PTR_FROM_JSON(AsrAppKey, asrAppKey_);
        DARABONBA_PTR_FROM_JSON(TtsApiKey, ttsApiKey_);
      };
      Profile() = default ;
      Profile(const Profile &) = default ;
      Profile(Profile &&) = default ;
      Profile(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Profile() = default ;
      Profile& operator=(const Profile &) = default ;
      Profile& operator=(Profile &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessKey_ == nullptr
        && this->apiKey_ == nullptr && this->apiSecret_ == nullptr && this->appId_ == nullptr && this->appKey_ == nullptr && this->asrAppKey_ == nullptr
        && this->ttsApiKey_ == nullptr; };
      // accessKey Field Functions 
      bool hasAccessKey() const { return this->accessKey_ != nullptr;};
      void deleteAccessKey() { this->accessKey_ = nullptr;};
      inline string getAccessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
      inline Profile& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline Profile& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // apiSecret Field Functions 
      bool hasApiSecret() const { return this->apiSecret_ != nullptr;};
      void deleteApiSecret() { this->apiSecret_ = nullptr;};
      inline string getApiSecret() const { DARABONBA_PTR_GET_DEFAULT(apiSecret_, "") };
      inline Profile& setApiSecret(string apiSecret) { DARABONBA_PTR_SET_VALUE(apiSecret_, apiSecret) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Profile& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appKey Field Functions 
      bool hasAppKey() const { return this->appKey_ != nullptr;};
      void deleteAppKey() { this->appKey_ = nullptr;};
      inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
      inline Profile& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


      // asrAppKey Field Functions 
      bool hasAsrAppKey() const { return this->asrAppKey_ != nullptr;};
      void deleteAsrAppKey() { this->asrAppKey_ = nullptr;};
      inline string getAsrAppKey() const { DARABONBA_PTR_GET_DEFAULT(asrAppKey_, "") };
      inline Profile& setAsrAppKey(string asrAppKey) { DARABONBA_PTR_SET_VALUE(asrAppKey_, asrAppKey) };


      // ttsApiKey Field Functions 
      bool hasTtsApiKey() const { return this->ttsApiKey_ != nullptr;};
      void deleteTtsApiKey() { this->ttsApiKey_ = nullptr;};
      inline string getTtsApiKey() const { DARABONBA_PTR_GET_DEFAULT(ttsApiKey_, "") };
      inline Profile& setTtsApiKey(string ttsApiKey) { DARABONBA_PTR_SET_VALUE(ttsApiKey_, ttsApiKey) };


    protected:
      shared_ptr<string> accessKey_ {};
      shared_ptr<string> apiKey_ {};
      shared_ptr<string> apiSecret_ {};
      shared_ptr<string> appId_ {};
      shared_ptr<string> appKey_ {};
      shared_ptr<string> asrAppKey_ {};
      shared_ptr<string> ttsApiKey_ {};
    };

    virtual bool empty() const override { return this->accessProfileId_ == nullptr
        && this->businessUnitId_ == nullptr && this->nlsEngine_ == nullptr && this->profile_ == nullptr; };
    // accessProfileId Field Functions 
    bool hasAccessProfileId() const { return this->accessProfileId_ != nullptr;};
    void deleteAccessProfileId() { this->accessProfileId_ = nullptr;};
    inline string getAccessProfileId() const { DARABONBA_PTR_GET_DEFAULT(accessProfileId_, "") };
    inline UpdateVoiceAccessProfileRequest& setAccessProfileId(string accessProfileId) { DARABONBA_PTR_SET_VALUE(accessProfileId_, accessProfileId) };


    // businessUnitId Field Functions 
    bool hasBusinessUnitId() const { return this->businessUnitId_ != nullptr;};
    void deleteBusinessUnitId() { this->businessUnitId_ = nullptr;};
    inline string getBusinessUnitId() const { DARABONBA_PTR_GET_DEFAULT(businessUnitId_, "") };
    inline UpdateVoiceAccessProfileRequest& setBusinessUnitId(string businessUnitId) { DARABONBA_PTR_SET_VALUE(businessUnitId_, businessUnitId) };


    // nlsEngine Field Functions 
    bool hasNlsEngine() const { return this->nlsEngine_ != nullptr;};
    void deleteNlsEngine() { this->nlsEngine_ = nullptr;};
    inline string getNlsEngine() const { DARABONBA_PTR_GET_DEFAULT(nlsEngine_, "") };
    inline UpdateVoiceAccessProfileRequest& setNlsEngine(string nlsEngine) { DARABONBA_PTR_SET_VALUE(nlsEngine_, nlsEngine) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline const UpdateVoiceAccessProfileRequest::Profile & getProfile() const { DARABONBA_PTR_GET_CONST(profile_, UpdateVoiceAccessProfileRequest::Profile) };
    inline UpdateVoiceAccessProfileRequest::Profile getProfile() { DARABONBA_PTR_GET(profile_, UpdateVoiceAccessProfileRequest::Profile) };
    inline UpdateVoiceAccessProfileRequest& setProfile(const UpdateVoiceAccessProfileRequest::Profile & profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };
    inline UpdateVoiceAccessProfileRequest& setProfile(UpdateVoiceAccessProfileRequest::Profile && profile) { DARABONBA_PTR_SET_RVALUE(profile_, profile) };


  protected:
    shared_ptr<string> accessProfileId_ {};
    shared_ptr<string> businessUnitId_ {};
    shared_ptr<string> nlsEngine_ {};
    shared_ptr<UpdateVoiceAccessProfileRequest::Profile> profile_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
