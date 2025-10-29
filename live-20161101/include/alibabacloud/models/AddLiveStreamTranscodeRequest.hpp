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
        && return this->domain_ == nullptr && return this->encryptParameters_ == nullptr && return this->lazy_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->template_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline AddLiveStreamTranscodeRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AddLiveStreamTranscodeRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // encryptParameters Field Functions 
    bool hasEncryptParameters() const { return this->encryptParameters_ != nullptr;};
    void deleteEncryptParameters() { this->encryptParameters_ = nullptr;};
    inline string encryptParameters() const { DARABONBA_PTR_GET_DEFAULT(encryptParameters_, "") };
    inline AddLiveStreamTranscodeRequest& setEncryptParameters(string encryptParameters) { DARABONBA_PTR_SET_VALUE(encryptParameters_, encryptParameters) };


    // lazy Field Functions 
    bool hasLazy() const { return this->lazy_ != nullptr;};
    void deleteLazy() { this->lazy_ = nullptr;};
    inline string lazy() const { DARABONBA_PTR_GET_DEFAULT(lazy_, "") };
    inline AddLiveStreamTranscodeRequest& setLazy(string lazy) { DARABONBA_PTR_SET_VALUE(lazy_, lazy) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddLiveStreamTranscodeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddLiveStreamTranscodeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline AddLiveStreamTranscodeRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


  protected:
    // The name of the application to which the live stream belongs.
    // 
    // *   The transcoding template takes effect only if the value of this parameter is the same as the application name that is specified in the ingest URL. The name can be up to 256 characters in length and can contain digits, letters, hyphens (-), and underscores (_).
    // *   You can also set this parameter to an asterisk (\\*). Asterisks (\\*) can match any string, including an empty string.
    // 
    // >  If you configure a transcoding template for which App is set to an asterisk (\\*), the transcoding template is used only if no transcoding template for which App is set to the same value as AppName in the ingest URL exists.
    // 
    // This parameter is required.
    std::shared_ptr<string> app_ = nullptr;
    // The name of the main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // The encryption configuration. The value is a JSON string. The following fields are included in the syntax:
    // 
    // *   EncryptType: the type of the encryption. Set the value to **aliyun**.
    // *   KmsKeyID: the ID of the CMK in KMS.
    // *   KmsKeyExpireInterval: the validity period of the CMK. Valid values: **60 to 3600**. Unit: seconds.
    std::shared_ptr<string> encryptParameters_ = nullptr;
    // Specifies whether to use the load-on-demand mechanism for transcoding. Default value: **yes**.
    std::shared_ptr<string> lazy_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The transcoding template. Valid values:
    // 
    // *   Standard transcoding template:
    // 
    //     *   **lld**: low definition
    //     *   **lsd**: standard definition
    //     *   **lhd**: high definition
    //     *   **lud**: ultra-high definition
    // 
    // *   Narrowband HD™ transcoding template:
    // 
    //     *   **ld**: low definition
    //     *   **sd**: standard definition
    //     *   **hd**: high definition
    //     *   **ud**: ultra-high definition
    // 
    // This parameter is required.
    std::shared_ptr<string> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
