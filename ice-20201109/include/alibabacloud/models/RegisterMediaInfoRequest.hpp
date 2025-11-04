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
        && return this->cateId_ == nullptr && return this->clientToken_ == nullptr && return this->coverURL_ == nullptr && return this->description_ == nullptr && return this->inputURL_ == nullptr
        && return this->mediaTags_ == nullptr && return this->mediaType_ == nullptr && return this->overwrite_ == nullptr && return this->referenceId_ == nullptr && return this->registerConfig_ == nullptr
        && return this->smartTagTemplateId_ == nullptr && return this->title_ == nullptr && return this->userData_ == nullptr && return this->workflowId_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline RegisterMediaInfoRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline RegisterMediaInfoRequest& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RegisterMediaInfoRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline RegisterMediaInfoRequest& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RegisterMediaInfoRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // inputURL Field Functions 
    bool hasInputURL() const { return this->inputURL_ != nullptr;};
    void deleteInputURL() { this->inputURL_ = nullptr;};
    inline string inputURL() const { DARABONBA_PTR_GET_DEFAULT(inputURL_, "") };
    inline RegisterMediaInfoRequest& setInputURL(string inputURL) { DARABONBA_PTR_SET_VALUE(inputURL_, inputURL) };


    // mediaTags Field Functions 
    bool hasMediaTags() const { return this->mediaTags_ != nullptr;};
    void deleteMediaTags() { this->mediaTags_ = nullptr;};
    inline string mediaTags() const { DARABONBA_PTR_GET_DEFAULT(mediaTags_, "") };
    inline RegisterMediaInfoRequest& setMediaTags(string mediaTags) { DARABONBA_PTR_SET_VALUE(mediaTags_, mediaTags) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline RegisterMediaInfoRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline bool overwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
    inline RegisterMediaInfoRequest& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string referenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline RegisterMediaInfoRequest& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    // registerConfig Field Functions 
    bool hasRegisterConfig() const { return this->registerConfig_ != nullptr;};
    void deleteRegisterConfig() { this->registerConfig_ = nullptr;};
    inline string registerConfig() const { DARABONBA_PTR_GET_DEFAULT(registerConfig_, "") };
    inline RegisterMediaInfoRequest& setRegisterConfig(string registerConfig) { DARABONBA_PTR_SET_VALUE(registerConfig_, registerConfig) };


    // smartTagTemplateId Field Functions 
    bool hasSmartTagTemplateId() const { return this->smartTagTemplateId_ != nullptr;};
    void deleteSmartTagTemplateId() { this->smartTagTemplateId_ = nullptr;};
    inline string smartTagTemplateId() const { DARABONBA_PTR_GET_DEFAULT(smartTagTemplateId_, "") };
    inline RegisterMediaInfoRequest& setSmartTagTemplateId(string smartTagTemplateId) { DARABONBA_PTR_SET_VALUE(smartTagTemplateId_, smartTagTemplateId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline RegisterMediaInfoRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline RegisterMediaInfoRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline RegisterMediaInfoRequest& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The business type of the media asset. Valid values:
    // 
    // *   subtitles
    // *   watermark
    // *   opening
    // *   ending
    // *   general
    std::shared_ptr<string> businessType_ = nullptr;
    // The category ID.
    std::shared_ptr<int64_t> cateId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. The value must be a UUID that contains 32 characters.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The thumbnail URL of the media asset.
    // 
    // *   The value can be up to 128 bytes in length.
    // *   The value must be encoded in UTF-8.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The description of the media asset.
    // 
    // *   The value can be up to 1,024 bytes in length.
    // *   The value must be encoded in UTF-8.
    std::shared_ptr<string> description_ = nullptr;
    // The URL of the media asset in another service. The URL is associated with the ID of the media asset in IMS. The URL cannot be modified once registered. The following types of URLs are supported:
    // 
    // *   OSS URL in one of the following formats:
    // 
    // http(s)://example-bucket.oss-cn-shanghai.aliyuncs.com/example.mp4
    // 
    // oss://example-bucket/example.mp4: In this format, it is considered by default that the region of the OSS bucket in which the media asset resides is the same as the region in which IMS is activated.
    // 
    // *   URL of an ApsaraVideo VOD media asset
    // 
    // vod://\\*\\*\\*20b48fb04483915d4f2cd8ac\\*\\*\\*\\*
    // 
    // This parameter is required.
    std::shared_ptr<string> inputURL_ = nullptr;
    // The tags of the media asset.
    // 
    // *   Up to 16 tags are supported.
    // *   Separate multiple tags with commas (,).
    // *   Each tag can be up to 32 bytes in length.
    // *   The value must be encoded in UTF-8.
    std::shared_ptr<string> mediaTags_ = nullptr;
    // The type of the media asset. Valid values:
    // 
    // *   image
    // *   video
    // *   audio
    // *   text
    // 
    // We recommend that you specify this parameter based on your business requirements. If you set InputURL to an OSS URL, the media asset type can be automatically determined based on the file name extension. For more information
    // <props="china">, see [File formats](https://help.aliyun.com/document_detail/466207.html).
    std::shared_ptr<string> mediaType_ = nullptr;
    // Specifies whether to overwrite the media asset that has been registered by using the same URL. Default value: false. Valid values:
    // 
    // \\- true: If a media asset has been registered by using the same URL, the original media asset is deleted and the new media asset is registered.
    // 
    // \\- false: If a media asset has been registered by using the same URL, the new media asset is not registered. A URL cannot be used to register multiple media assets.
    std::shared_ptr<bool> overwrite_ = nullptr;
    // The custom ID. The ID can be 6 to 64 characters in length and can contain only letters, digits, hyphens (-), and underscores (_). Make sure that the ID is unique among users.
    std::shared_ptr<string> referenceId_ = nullptr;
    // The registration configurations.
    // 
    // By default, a sprite is generated for the media asset. You can set NeedSprite to false to disable automatic sprite generation.
    // 
    // By default, a snapshot is generated for the media asset. You can set NeedSnapshot to false to disable automatic snapshot generation.
    std::shared_ptr<string> registerConfig_ = nullptr;
    // The ID of the smart tagging template. Valid values:
    // 
    // *   S00000101-300080: the system template that supports natural language processing (NLP) for content recognition.
    // *   S00000103-000001: the system template that supports NLP for content recognition and all tagging capabilities.
    // *   S00000103-000002: the system template that supports all tagging capabilities but does not support NLP for content recognition.
    // 
    // After you configure this parameter, a smart tag analysis task is automatically initiated after the media asset is registered. For more information about the billable items<props="china">, see [Smart tagging](https://help.aliyun.com/zh/ims/media-ai-billing?spm=a2c4g.11186623.0.0.3147392dWwlSjL#p-k38-3rb-dug).
    std::shared_ptr<string> smartTagTemplateId_ = nullptr;
    // The title. If you do not specify this parameter, a default title is automatically generated based on the date.
    // 
    // *   The value can be up to 128 bytes in length.
    // *   The value must be encoded in UTF-8.
    std::shared_ptr<string> title_ = nullptr;
    // The user data. You can specify a custom callback URL. For more information<props="china"> ,see [Configure a callback upon editing completion](https://help.aliyun.com/document_detail/451631.html).
    // 
    // *   The value can be up to 1,024 bytes in length.
    // *   The value must be encoded in UTF-8.
    // *   The value must be in the JSON format.
    std::shared_ptr<string> userData_ = nullptr;
    // The workflow ID.
    std::shared_ptr<string> workflowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
