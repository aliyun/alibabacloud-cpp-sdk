// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERMEDIAINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERMEDIAINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class RegisterMediaInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterMediaInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InputURL, inputURL_);
      DARABONBA_PTR_TO_JSON(MediaTags, mediaTags_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_TO_JSON(RegisterConfig, registerConfig_);
      DARABONBA_PTR_TO_JSON(SmartTagTemplateId, smartTagTemplateId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterMediaInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InputURL, inputURL_);
      DARABONBA_PTR_FROM_JSON(MediaTags, mediaTags_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_FROM_JSON(RegisterConfig, registerConfig_);
      DARABONBA_PTR_FROM_JSON(SmartTagTemplateId, smartTagTemplateId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    RegisterMediaInfoRequest() = default ;
    RegisterMediaInfoRequest(const RegisterMediaInfoRequest &) = default ;
    RegisterMediaInfoRequest(RegisterMediaInfoRequest &&) = default ;
    RegisterMediaInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterMediaInfoRequest() = default ;
    RegisterMediaInfoRequest& operator=(const RegisterMediaInfoRequest &) = default ;
    RegisterMediaInfoRequest& operator=(RegisterMediaInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr
        && this->cateId_ == nullptr && this->clientToken_ == nullptr && this->coverURL_ == nullptr && this->description_ == nullptr && this->inputURL_ == nullptr
        && this->mediaTags_ == nullptr && this->mediaType_ == nullptr && this->overwrite_ == nullptr && this->referenceId_ == nullptr && this->registerConfig_ == nullptr
        && this->smartTagTemplateId_ == nullptr && this->title_ == nullptr && this->userData_ == nullptr && this->workflowId_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline RegisterMediaInfoRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline RegisterMediaInfoRequest& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RegisterMediaInfoRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline RegisterMediaInfoRequest& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RegisterMediaInfoRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // inputURL Field Functions 
    bool hasInputURL() const { return this->inputURL_ != nullptr;};
    void deleteInputURL() { this->inputURL_ = nullptr;};
    inline string getInputURL() const { DARABONBA_PTR_GET_DEFAULT(inputURL_, "") };
    inline RegisterMediaInfoRequest& setInputURL(string inputURL) { DARABONBA_PTR_SET_VALUE(inputURL_, inputURL) };


    // mediaTags Field Functions 
    bool hasMediaTags() const { return this->mediaTags_ != nullptr;};
    void deleteMediaTags() { this->mediaTags_ = nullptr;};
    inline string getMediaTags() const { DARABONBA_PTR_GET_DEFAULT(mediaTags_, "") };
    inline RegisterMediaInfoRequest& setMediaTags(string mediaTags) { DARABONBA_PTR_SET_VALUE(mediaTags_, mediaTags) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline RegisterMediaInfoRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline bool getOverwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
    inline RegisterMediaInfoRequest& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline RegisterMediaInfoRequest& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    // registerConfig Field Functions 
    bool hasRegisterConfig() const { return this->registerConfig_ != nullptr;};
    void deleteRegisterConfig() { this->registerConfig_ = nullptr;};
    inline string getRegisterConfig() const { DARABONBA_PTR_GET_DEFAULT(registerConfig_, "") };
    inline RegisterMediaInfoRequest& setRegisterConfig(string registerConfig) { DARABONBA_PTR_SET_VALUE(registerConfig_, registerConfig) };


    // smartTagTemplateId Field Functions 
    bool hasSmartTagTemplateId() const { return this->smartTagTemplateId_ != nullptr;};
    void deleteSmartTagTemplateId() { this->smartTagTemplateId_ = nullptr;};
    inline string getSmartTagTemplateId() const { DARABONBA_PTR_GET_DEFAULT(smartTagTemplateId_, "") };
    inline RegisterMediaInfoRequest& setSmartTagTemplateId(string smartTagTemplateId) { DARABONBA_PTR_SET_VALUE(smartTagTemplateId_, smartTagTemplateId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline RegisterMediaInfoRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline RegisterMediaInfoRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline RegisterMediaInfoRequest& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The business type of the media asset. Valid values:
    // 
    // - subtitles
    // - font
    // - watermark
    // - opening
    // - ending
    // - general
    shared_ptr<string> businessType_ {};
    // The category ID.
    shared_ptr<int64_t> cateId_ {};
    // The client token. A 32-character UUID that ensures the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The cover image URL.
    // 
    // - Maximum length: 128 bytes.
    // 
    // - UTF-8 encoded.
    shared_ptr<string> coverURL_ {};
    // The content description.
    // 
    // - Maximum length: 1024 bytes.
    // 
    // - UTF-8 encoded.
    shared_ptr<string> description_ {};
    // The URL of the media asset to be registered in the corresponding system. Once registered, this URL cannot be changed and is attached to the IMS mediaId.
    // 
    // - OSS URL. Two formats are supported:
    //  
    // http(s)://example-bucket.oss-cn-shanghai.aliyuncs.com/example.mp4
    // 
    // oss://example-bucket/example.mp4
    //  (This format assumes by default that the OSS region is the same as the service registration area.)
    // 
    // - VOD media asset:
    // 
    // vod://\\*\\*\\*20b48fb04483915d4f2cd8ac****
    // 
    // This parameter is required.
    shared_ptr<string> inputURL_ {};
    // The tags.
    // 
    // - Maximum number of tags: 16.
    // 
    // - Separate multiple tags with commas.
    // 
    // - Maximum length of a single tag: 32 bytes.
    // 
    // - UTF-8 encoded.
    shared_ptr<string> mediaTags_ {};
    // The media type of the media asset. Valid values:
    // 
    // - image
    // - video
    // - audio
    // - text
    // 
    // When the value is "text", the businessType must be set to "subtitles" or "font".
    // 
    // Specify this field as needed. When the InputURL field is an OSS URL, the media type can also be automatically determined based on the file name extension (only for image, video, and audio file extensions). For the mapping between file extensions and media types, see [File formats](https://help.aliyun.com/document_detail/466207.html).
    shared_ptr<string> mediaType_ {};
    // Specifies whether to overwrite an existing registered media asset. Default value: false.
    // 
    // - true: If the inputUrl is already registered, the existing media asset is deleted and a new media asset is registered.
    // 
    // - false: If the inputUrl is already registered, the new media asset is not registered. Duplicate inputUrl values are not supported.
    shared_ptr<bool> overwrite_ {};
    // The custom ID. Only lowercase letters, uppercase letters, digits, hyphens (-), and underscores (_) are supported. The length must be 6 to 64 characters. The ID must be unique for each user.
    shared_ptr<string> referenceId_ {};
    // The registration configuration.
    // 
    // By default, a sprite image is generated for the media asset. To disable this, set the NeedSprite field to false.
    // 
    // By default, a snapshot is generated. To disable this, set the NeedSnapshot field to false.
    // 
    // To specify the time for the cover image, configure CoverConfig, which contains the following field:
    // - StartTime: The time in seconds at which the cover image is captured from the media asset. Up to four decimal places are supported.
    // 
    // After media asset registration, to import the media asset into a custom search library, configure SearchLibName. For information about how to create and use a custom search library, see [Use a custom search library](~~2796619#dd34d8c740yj9~~).
    shared_ptr<string> registerConfig_ {};
    // The intelligent tagging template. Valid values:
    // - S00000101-300080: A system template that includes NLP content understanding.
    // - S00000103-000001: A system template that includes NLP content understanding and all [tagging capabilities](~~2804526#93b27f536airj~~).
    // - S00000103-000002: A system template that includes all [tagging capabilities](~~2804526#93b27f536airj~~) but does not include NLP content understanding.
    // 
    // For more information about tagging capabilities, see the documentation.
    // 
    // After this field is configured, an intelligent tagging analysis task is automatically initiated upon media asset registration. For billing information, see [Billing of Smart Tag Standard Edition](https://help.aliyun.com/document_detail/600262.html).
    shared_ptr<string> smartTagTemplateId_ {};
    // The title. If not provided, a default title is automatically generated based on the date.
    // 
    // - Maximum length: 128 bytes.
    // 
    // - UTF-8 encoded.
    shared_ptr<string> title_ {};
    // The user data. Custom callback URL configuration is supported. For configuration instructions, see [Configure a callback upon editing completion](https://help.aliyun.com/document_detail/451631.html).
    // 
    // - Maximum length: 1024 bytes.
    // 
    // - UTF-8 encoded.
    // 
    // - Json format.
    shared_ptr<string> userData_ {};
    // The workflow ID.
    shared_ptr<string> workflowId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
