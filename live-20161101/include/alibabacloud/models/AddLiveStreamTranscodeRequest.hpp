// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVESTREAMTRANSCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVESTREAMTRANSCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddLiveStreamTranscodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLiveStreamTranscodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EncryptParameters, encryptParameters_);
      DARABONBA_PTR_TO_JSON(Lazy, lazy_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, AddLiveStreamTranscodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EncryptParameters, encryptParameters_);
      DARABONBA_PTR_FROM_JSON(Lazy, lazy_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    AddLiveStreamTranscodeRequest() = default ;
    AddLiveStreamTranscodeRequest(const AddLiveStreamTranscodeRequest &) = default ;
    AddLiveStreamTranscodeRequest(AddLiveStreamTranscodeRequest &&) = default ;
    AddLiveStreamTranscodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLiveStreamTranscodeRequest() = default ;
    AddLiveStreamTranscodeRequest& operator=(const AddLiveStreamTranscodeRequest &) = default ;
    AddLiveStreamTranscodeRequest& operator=(AddLiveStreamTranscodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && this->domain_ == nullptr && this->encryptParameters_ == nullptr && this->lazy_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->template_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline AddLiveStreamTranscodeRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AddLiveStreamTranscodeRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // encryptParameters Field Functions 
    bool hasEncryptParameters() const { return this->encryptParameters_ != nullptr;};
    void deleteEncryptParameters() { this->encryptParameters_ = nullptr;};
    inline string getEncryptParameters() const { DARABONBA_PTR_GET_DEFAULT(encryptParameters_, "") };
    inline AddLiveStreamTranscodeRequest& setEncryptParameters(string encryptParameters) { DARABONBA_PTR_SET_VALUE(encryptParameters_, encryptParameters) };


    // lazy Field Functions 
    bool hasLazy() const { return this->lazy_ != nullptr;};
    void deleteLazy() { this->lazy_ = nullptr;};
    inline string getLazy() const { DARABONBA_PTR_GET_DEFAULT(lazy_, "") };
    inline AddLiveStreamTranscodeRequest& setLazy(string lazy) { DARABONBA_PTR_SET_VALUE(lazy_, lazy) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddLiveStreamTranscodeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddLiveStreamTranscodeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline AddLiveStreamTranscodeRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


  protected:
    // The name of the application to which the stream belongs.
    // 
    // - The value of App must be the same as the AppName in the ingest URL for the transcoding template to take effect. The value can be up to 256 characters in length and can contain digits, letters, hyphens (-), and underscores (_).
    // 
    // - App also supports a single asterisk (\\*) as the value, which matches any string including an empty string.
    // 
    // > If a transcoding template with App set to a single asterisk (\\*) is configured: when a user pulls a transcoded stream, the system first matches the transcoding template whose App value is the same as the AppName in the ingest URL. If no such template exists, the system matches the transcoding template with App set to a single asterisk (\\*).
    // 
    // This parameter is required.
    shared_ptr<string> app_ {};
    // The streaming domain of the streamer.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The encryption configuration. JSON format. The fields are described as follows:
    // 
    // - EncryptType: the encryption type. Set the value to **aliyun**.
    // - KmsKeyID: the user KMS master key ID.
    // - KmsKeyExpireInterval: the key rotation interval. Valid values: **60 to 3600**. Unit: seconds.
    shared_ptr<string> encryptParameters_ {};
    // Specifies whether to enable on-demand transcoding. Valid values:
    // - **yes**: enables on-demand transcoding.
    // - **no**: disables on-demand transcoding.
    shared_ptr<string> lazy_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID. When using SDK 2.0, set this parameter to the region ID that corresponds to the service registration endpoint. When using SDK 1.0, ignore this parameter.
    shared_ptr<string> regionId_ {};
    // The transcoding template. Valid values:
    // 
    // - Standard quality templates:
    // 
    //     - **lld**: low definition.
    // 
    //     - **lsd**: standard definition.
    // 
    //     - **lhd**: high definition.
    // 
    //     - **lud**: ultra-high definition.
    //             
    // - Narrowband HD™ transcoding templates:
    // 
    //     - **ld**: low definition.
    //     
    //     - **sd**: standard definition.
    //     
    //     - **hd**: high definition.
    //     
    //     - **ud**: ultra-high definition.
    // 
    // This parameter is required.
    shared_ptr<string> template_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
