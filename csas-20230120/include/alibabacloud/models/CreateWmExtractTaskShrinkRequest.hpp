// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEXTRACTTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEXTRACTTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmExtractTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmExtractTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CsvControl, csvControlShrink_);
      DARABONBA_PTR_TO_JSON(DocumentIsCapture, documentIsCapture_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Filename, filename_);
      DARABONBA_PTR_TO_JSON(ImageExtractParamsOpenApi, imageExtractParamsOpenApiShrink_);
      DARABONBA_PTR_TO_JSON(IsClientEmbed, isClientEmbed_);
      DARABONBA_PTR_TO_JSON(VideoIsLong, videoIsLong_);
      DARABONBA_PTR_TO_JSON(VideoSpeed, videoSpeed_);
      DARABONBA_PTR_TO_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_TO_JSON(WmType, wmType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmExtractTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CsvControl, csvControlShrink_);
      DARABONBA_PTR_FROM_JSON(DocumentIsCapture, documentIsCapture_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Filename, filename_);
      DARABONBA_PTR_FROM_JSON(ImageExtractParamsOpenApi, imageExtractParamsOpenApiShrink_);
      DARABONBA_PTR_FROM_JSON(IsClientEmbed, isClientEmbed_);
      DARABONBA_PTR_FROM_JSON(VideoIsLong, videoIsLong_);
      DARABONBA_PTR_FROM_JSON(VideoSpeed, videoSpeed_);
      DARABONBA_PTR_FROM_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_FROM_JSON(WmType, wmType_);
    };
    CreateWmExtractTaskShrinkRequest() = default ;
    CreateWmExtractTaskShrinkRequest(const CreateWmExtractTaskShrinkRequest &) = default ;
    CreateWmExtractTaskShrinkRequest(CreateWmExtractTaskShrinkRequest &&) = default ;
    CreateWmExtractTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmExtractTaskShrinkRequest() = default ;
    CreateWmExtractTaskShrinkRequest& operator=(const CreateWmExtractTaskShrinkRequest &) = default ;
    CreateWmExtractTaskShrinkRequest& operator=(CreateWmExtractTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->csvControlShrink_ == nullptr
        && this->documentIsCapture_ == nullptr && this->fileUrl_ == nullptr && this->filename_ == nullptr && this->imageExtractParamsOpenApiShrink_ == nullptr && this->isClientEmbed_ == nullptr
        && this->videoIsLong_ == nullptr && this->videoSpeed_ == nullptr && this->wmInfoSize_ == nullptr && this->wmType_ == nullptr; };
    // csvControlShrink Field Functions 
    bool hasCsvControlShrink() const { return this->csvControlShrink_ != nullptr;};
    void deleteCsvControlShrink() { this->csvControlShrink_ = nullptr;};
    inline string getCsvControlShrink() const { DARABONBA_PTR_GET_DEFAULT(csvControlShrink_, "") };
    inline CreateWmExtractTaskShrinkRequest& setCsvControlShrink(string csvControlShrink) { DARABONBA_PTR_SET_VALUE(csvControlShrink_, csvControlShrink) };


    // documentIsCapture Field Functions 
    bool hasDocumentIsCapture() const { return this->documentIsCapture_ != nullptr;};
    void deleteDocumentIsCapture() { this->documentIsCapture_ = nullptr;};
    inline bool getDocumentIsCapture() const { DARABONBA_PTR_GET_DEFAULT(documentIsCapture_, false) };
    inline CreateWmExtractTaskShrinkRequest& setDocumentIsCapture(bool documentIsCapture) { DARABONBA_PTR_SET_VALUE(documentIsCapture_, documentIsCapture) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateWmExtractTaskShrinkRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline CreateWmExtractTaskShrinkRequest& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // imageExtractParamsOpenApiShrink Field Functions 
    bool hasImageExtractParamsOpenApiShrink() const { return this->imageExtractParamsOpenApiShrink_ != nullptr;};
    void deleteImageExtractParamsOpenApiShrink() { this->imageExtractParamsOpenApiShrink_ = nullptr;};
    inline string getImageExtractParamsOpenApiShrink() const { DARABONBA_PTR_GET_DEFAULT(imageExtractParamsOpenApiShrink_, "") };
    inline CreateWmExtractTaskShrinkRequest& setImageExtractParamsOpenApiShrink(string imageExtractParamsOpenApiShrink) { DARABONBA_PTR_SET_VALUE(imageExtractParamsOpenApiShrink_, imageExtractParamsOpenApiShrink) };


    // isClientEmbed Field Functions 
    bool hasIsClientEmbed() const { return this->isClientEmbed_ != nullptr;};
    void deleteIsClientEmbed() { this->isClientEmbed_ = nullptr;};
    inline bool getIsClientEmbed() const { DARABONBA_PTR_GET_DEFAULT(isClientEmbed_, false) };
    inline CreateWmExtractTaskShrinkRequest& setIsClientEmbed(bool isClientEmbed) { DARABONBA_PTR_SET_VALUE(isClientEmbed_, isClientEmbed) };


    // videoIsLong Field Functions 
    bool hasVideoIsLong() const { return this->videoIsLong_ != nullptr;};
    void deleteVideoIsLong() { this->videoIsLong_ = nullptr;};
    inline bool getVideoIsLong() const { DARABONBA_PTR_GET_DEFAULT(videoIsLong_, false) };
    inline CreateWmExtractTaskShrinkRequest& setVideoIsLong(bool videoIsLong) { DARABONBA_PTR_SET_VALUE(videoIsLong_, videoIsLong) };


    // videoSpeed Field Functions 
    bool hasVideoSpeed() const { return this->videoSpeed_ != nullptr;};
    void deleteVideoSpeed() { this->videoSpeed_ = nullptr;};
    inline string getVideoSpeed() const { DARABONBA_PTR_GET_DEFAULT(videoSpeed_, "") };
    inline CreateWmExtractTaskShrinkRequest& setVideoSpeed(string videoSpeed) { DARABONBA_PTR_SET_VALUE(videoSpeed_, videoSpeed) };


    // wmInfoSize Field Functions 
    bool hasWmInfoSize() const { return this->wmInfoSize_ != nullptr;};
    void deleteWmInfoSize() { this->wmInfoSize_ = nullptr;};
    inline int64_t getWmInfoSize() const { DARABONBA_PTR_GET_DEFAULT(wmInfoSize_, 0L) };
    inline CreateWmExtractTaskShrinkRequest& setWmInfoSize(int64_t wmInfoSize) { DARABONBA_PTR_SET_VALUE(wmInfoSize_, wmInfoSize) };


    // wmType Field Functions 
    bool hasWmType() const { return this->wmType_ != nullptr;};
    void deleteWmType() { this->wmType_ = nullptr;};
    inline string getWmType() const { DARABONBA_PTR_GET_DEFAULT(wmType_, "") };
    inline CreateWmExtractTaskShrinkRequest& setWmType(string wmType) { DARABONBA_PTR_SET_VALUE(wmType_, wmType) };


  protected:
    // The CSV watermark control parameters. These must be consistent with the parameters used during embedding. Otherwise, extraction fails.
    shared_ptr<string> csvControlShrink_ {};
    // The document watermark parameter that specifies whether the file to be extracted is a screenshot of a document with a background watermark. The service determines whether to use the document background watermark extraction logic based on whether the file is an image file. Therefore, this parameter does not need to be set by default. Valid values:
    // 
    // - **true**: Yes.
    // - **false**: No.
    shared_ptr<bool> documentIsCapture_ {};
    // The URL used to download the file from which the watermark is to be fetched. The URL must be accessible over the public network access.
    // 
    // This parameter is required.
    shared_ptr<string> fileUrl_ {};
    // The name of the file from which the watermark is to be extracted. The backend determines and validates the file type based on the file name extension.
    // 
    // This parameter is required.
    shared_ptr<string> filename_ {};
    // The image extraction parameters.
    shared_ptr<string> imageExtractParamsOpenApiShrink_ {};
    // The audio watermark parameter that specifies whether the watermark was embedded by the client SDK. Default value: false. Valid values:
    // 
    // - **true**: Yes.
    // - **false**: No.
    shared_ptr<bool> isClientEmbed_ {};
    // The video watermark parameter that specifies whether to use the long video watermark SDK. Default value: false. Valid values:
    // 
    // - **true**: Yes.
    // - **false**: No.
    shared_ptr<bool> videoIsLong_ {};
    // The long video watermark parameter that specifies the video playback speed as a floating-point string. Default value: 1, which indicates the playback speed used when the watermark was added, or the speed at which the video timeline was stretched after the watermark was added.
    shared_ptr<string> videoSpeed_ {};
    // The bit width of the watermark information capacity. Default value: 32. This parameter must be consistent between embedding and extraction. For example, if the 40-bit SDK was used for embedding, set this value to 40 for extraction.
    shared_ptr<int64_t> wmInfoSize_ {};
    // The watermark type. Valid values:
    // - **PureWebappInvisible**: web page watermark.
    // - **PureAppInvisible**: app watermark.
    // - **PureScreenInvisible**: screen watermark.
    // - **PureDocument**: document watermark.
    // - **PureImage**: image watermark.
    // - **PureAudio**: audio watermark.
    // - **PureVideo**: video watermark.
    // - **AigcWebappInvisible**: AIGC web page watermark.
    // - **AigcAppInvisible**: AIGC app watermark.
    // - **AigcScreenInvisible**: AIGC screen watermark.
    // - **AigcDocument**: AIGC document watermark.
    // - **AigcImage**: AIGC image watermark.
    // - **AigcAudio**: AIGC audio watermark.
    // - **AigcVideo**: AIGC video watermark.
    // 
    // This parameter is required.
    shared_ptr<string> wmType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
