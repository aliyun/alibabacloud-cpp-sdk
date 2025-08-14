// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVODPACKAGINGCONFIGURATIONREQUESTPACKAGECONFIGDRMPROVIDER_HPP_
#define ALIBABACLOUD_MODELS_CREATEVODPACKAGINGCONFIGURATIONREQUESTPACKAGECONFIGDRMPROVIDER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateVodPackagingConfigurationRequestPackageConfigDrmProvider : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVodPackagingConfigurationRequestPackageConfigDrmProvider& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptionMethod, encryptionMethod_);
      DARABONBA_PTR_TO_JSON(IV, IV_);
      DARABONBA_PTR_TO_JSON(SystemIds, systemIds_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVodPackagingConfigurationRequestPackageConfigDrmProvider& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptionMethod, encryptionMethod_);
      DARABONBA_PTR_FROM_JSON(IV, IV_);
      DARABONBA_PTR_FROM_JSON(SystemIds, systemIds_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateVodPackagingConfigurationRequestPackageConfigDrmProvider() = default ;
    CreateVodPackagingConfigurationRequestPackageConfigDrmProvider(const CreateVodPackagingConfigurationRequestPackageConfigDrmProvider &) = default ;
    CreateVodPackagingConfigurationRequestPackageConfigDrmProvider(CreateVodPackagingConfigurationRequestPackageConfigDrmProvider &&) = default ;
    CreateVodPackagingConfigurationRequestPackageConfigDrmProvider(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVodPackagingConfigurationRequestPackageConfigDrmProvider() = default ;
    CreateVodPackagingConfigurationRequestPackageConfigDrmProvider& operator=(const CreateVodPackagingConfigurationRequestPackageConfigDrmProvider &) = default ;
    CreateVodPackagingConfigurationRequestPackageConfigDrmProvider& operator=(CreateVodPackagingConfigurationRequestPackageConfigDrmProvider &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encryptionMethod_ != nullptr
        && this->IV_ != nullptr && this->systemIds_ != nullptr && this->url_ != nullptr; };
    // encryptionMethod Field Functions 
    bool hasEncryptionMethod() const { return this->encryptionMethod_ != nullptr;};
    void deleteEncryptionMethod() { this->encryptionMethod_ = nullptr;};
    inline string encryptionMethod() const { DARABONBA_PTR_GET_DEFAULT(encryptionMethod_, "") };
    inline CreateVodPackagingConfigurationRequestPackageConfigDrmProvider& setEncryptionMethod(string encryptionMethod) { DARABONBA_PTR_SET_VALUE(encryptionMethod_, encryptionMethod) };


    // IV Field Functions 
    bool hasIV() const { return this->IV_ != nullptr;};
    void deleteIV() { this->IV_ = nullptr;};
    inline string IV() const { DARABONBA_PTR_GET_DEFAULT(IV_, "") };
    inline CreateVodPackagingConfigurationRequestPackageConfigDrmProvider& setIV(string IV) { DARABONBA_PTR_SET_VALUE(IV_, IV) };


    // systemIds Field Functions 
    bool hasSystemIds() const { return this->systemIds_ != nullptr;};
    void deleteSystemIds() { this->systemIds_ = nullptr;};
    inline const vector<string> & systemIds() const { DARABONBA_PTR_GET_CONST(systemIds_, vector<string>) };
    inline vector<string> systemIds() { DARABONBA_PTR_GET(systemIds_, vector<string>) };
    inline CreateVodPackagingConfigurationRequestPackageConfigDrmProvider& setSystemIds(const vector<string> & systemIds) { DARABONBA_PTR_SET_VALUE(systemIds_, systemIds) };
    inline CreateVodPackagingConfigurationRequestPackageConfigDrmProvider& setSystemIds(vector<string> && systemIds) { DARABONBA_PTR_SET_RVALUE(systemIds_, systemIds) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateVodPackagingConfigurationRequestPackageConfigDrmProvider& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The encryption method. Valid values:
    // 
    // *   AES_128: Advanced Encryption Standard (AES) with 128-bit key length.
    // *   SAMPLE_AES: an encryption method that encrypts individual media samples.
    std::shared_ptr<string> encryptionMethod_ = nullptr;
    // A 128-bit, 16-byte hex value represented by a 32-character string that is used with the key for encrypting data blocks. If you leave this parameter empty, MediaPackage creates a constant initialization vector (IV). If it is specified, the value is passed to the DRM service.
    std::shared_ptr<string> IV_ = nullptr;
    // The ID of the DRM system. The maximum number of system IDs allowed is determined by the protocol type. Limits:
    // 
    // *   DASH: 2
    // *   HLS: 1
    // *   HLS_CMAF: 2
    // 
    // Apple FairPlay, Google Widevine, and Microsoft PlayReady are supported. Their system IDs are as follows:
    // 
    // *   Apple FairPlay: 94ce86fb-07ff-4f43-adb8-93d2fa968ca2
    // *   Google Widevine: edef8ba9-79d6-4ace-a3c8-27dcd51d21e
    // *   Microsoft PlayReady: 9a04f079-9840-4286-ab92-e65be0885f95
    std::shared_ptr<vector<string>> systemIds_ = nullptr;
    // The URL of the DRM key provider.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
