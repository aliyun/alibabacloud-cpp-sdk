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
        && return this->documentIsCapture_ == nullptr && return this->fileUrl_ == nullptr && return this->filename_ == nullptr && return this->imageExtractParamsOpenApiShrink_ == nullptr && return this->isClientEmbed_ == nullptr
        && return this->videoIsLong_ == nullptr && return this->videoSpeed_ == nullptr && return this->wmInfoSize_ == nullptr && return this->wmType_ == nullptr; };
    // csvControlShrink Field Functions 
    bool hasCsvControlShrink() const { return this->csvControlShrink_ != nullptr;};
    void deleteCsvControlShrink() { this->csvControlShrink_ = nullptr;};
    inline string csvControlShrink() const { DARABONBA_PTR_GET_DEFAULT(csvControlShrink_, "") };
    inline CreateWmExtractTaskShrinkRequest& setCsvControlShrink(string csvControlShrink) { DARABONBA_PTR_SET_VALUE(csvControlShrink_, csvControlShrink) };


    // documentIsCapture Field Functions 
    bool hasDocumentIsCapture() const { return this->documentIsCapture_ != nullptr;};
    void deleteDocumentIsCapture() { this->documentIsCapture_ = nullptr;};
    inline bool documentIsCapture() const { DARABONBA_PTR_GET_DEFAULT(documentIsCapture_, false) };
    inline CreateWmExtractTaskShrinkRequest& setDocumentIsCapture(bool documentIsCapture) { DARABONBA_PTR_SET_VALUE(documentIsCapture_, documentIsCapture) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateWmExtractTaskShrinkRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string filename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline CreateWmExtractTaskShrinkRequest& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // imageExtractParamsOpenApiShrink Field Functions 
    bool hasImageExtractParamsOpenApiShrink() const { return this->imageExtractParamsOpenApiShrink_ != nullptr;};
    void deleteImageExtractParamsOpenApiShrink() { this->imageExtractParamsOpenApiShrink_ = nullptr;};
    inline string imageExtractParamsOpenApiShrink() const { DARABONBA_PTR_GET_DEFAULT(imageExtractParamsOpenApiShrink_, "") };
    inline CreateWmExtractTaskShrinkRequest& setImageExtractParamsOpenApiShrink(string imageExtractParamsOpenApiShrink) { DARABONBA_PTR_SET_VALUE(imageExtractParamsOpenApiShrink_, imageExtractParamsOpenApiShrink) };


    // isClientEmbed Field Functions 
    bool hasIsClientEmbed() const { return this->isClientEmbed_ != nullptr;};
    void deleteIsClientEmbed() { this->isClientEmbed_ = nullptr;};
    inline bool isClientEmbed() const { DARABONBA_PTR_GET_DEFAULT(isClientEmbed_, false) };
    inline CreateWmExtractTaskShrinkRequest& setIsClientEmbed(bool isClientEmbed) { DARABONBA_PTR_SET_VALUE(isClientEmbed_, isClientEmbed) };


    // videoIsLong Field Functions 
    bool hasVideoIsLong() const { return this->videoIsLong_ != nullptr;};
    void deleteVideoIsLong() { this->videoIsLong_ = nullptr;};
    inline bool videoIsLong() const { DARABONBA_PTR_GET_DEFAULT(videoIsLong_, false) };
    inline CreateWmExtractTaskShrinkRequest& setVideoIsLong(bool videoIsLong) { DARABONBA_PTR_SET_VALUE(videoIsLong_, videoIsLong) };


    // videoSpeed Field Functions 
    bool hasVideoSpeed() const { return this->videoSpeed_ != nullptr;};
    void deleteVideoSpeed() { this->videoSpeed_ = nullptr;};
    inline string videoSpeed() const { DARABONBA_PTR_GET_DEFAULT(videoSpeed_, "") };
    inline CreateWmExtractTaskShrinkRequest& setVideoSpeed(string videoSpeed) { DARABONBA_PTR_SET_VALUE(videoSpeed_, videoSpeed) };


    // wmInfoSize Field Functions 
    bool hasWmInfoSize() const { return this->wmInfoSize_ != nullptr;};
    void deleteWmInfoSize() { this->wmInfoSize_ = nullptr;};
    inline int64_t wmInfoSize() const { DARABONBA_PTR_GET_DEFAULT(wmInfoSize_, 0L) };
    inline CreateWmExtractTaskShrinkRequest& setWmInfoSize(int64_t wmInfoSize) { DARABONBA_PTR_SET_VALUE(wmInfoSize_, wmInfoSize) };


    // wmType Field Functions 
    bool hasWmType() const { return this->wmType_ != nullptr;};
    void deleteWmType() { this->wmType_ = nullptr;};
    inline string wmType() const { DARABONBA_PTR_GET_DEFAULT(wmType_, "") };
    inline CreateWmExtractTaskShrinkRequest& setWmType(string wmType) { DARABONBA_PTR_SET_VALUE(wmType_, wmType) };


  protected:
    // The CSV watermark control parameter. You must keep the value of this parameter consistent for watermark embedding and watermark extraction. Otherwise, the extraction fails.
    std::shared_ptr<string> csvControlShrink_ = nullptr;
    // The document watermark parameter that specifies whether the file to be extracted is a screenshot of a document with a background watermark added. The system determines whether to use the extraction logic for document background watermarks based on whether the file to be extracted is an image file. By default, you do not need to configure this parameter. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> documentIsCapture_ = nullptr;
    // The URL used to download the file to be extracted. The URL must be accessible over the Internet.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileUrl_ = nullptr;
    // The name of the file to be extracted. The system needs to check the file type based on the file name extension.
    // 
    // This parameter is required.
    std::shared_ptr<string> filename_ = nullptr;
    std::shared_ptr<string> imageExtractParamsOpenApiShrink_ = nullptr;
    std::shared_ptr<bool> isClientEmbed_ = nullptr;
    // The watermark parameter for videos that specifies whether to use the long video watermark SDK. Default value: false. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> videoIsLong_ = nullptr;
    // The watermark parameter for long videos that specifies the video speed factor. The value can be a floating-point number or a string. Default value: 1. This parameter indicates the speed at which a watermark is added or the time-stretching rate for videos after a watermark is added.
    std::shared_ptr<string> videoSpeed_ = nullptr;
    // The watermark information size. Default value: 32. You must keep the value of this parameter consistent for watermark embedding and watermark extraction. For example, if a 40-bit watermark is used for watermark embedding, you must set this parameter to 40 for watermark extraction.
    std::shared_ptr<int64_t> wmInfoSize_ = nullptr;
    // The watermark type. Valid values:
    // 
    // *   **PureWebappInvisible**: web page watermark
    // *   **PureAppInvisible**: app watermark
    // *   **PureScreenInvisible**: screen watermark
    // *   **PureDocument**: document watermark
    // *   **PureImage**: image watermark
    // *   **PureAudio**: audio watermark
    // *   **PureVideo**: video watermark
    // *   **AigcWebappInvisible**: artificial intelligence generated content (AIGC)-based webpage watermark
    // *   **AigcAppInvisible**: AIGC-based app watermark
    // *   **AigcScreenInvisible**: AIGC-based screen watermark
    // *   **AigcDocument**: AIGC-based document watermark
    // *   **AigcImage**: AIGC-based image watermark
    // *   **AigcAudio**: AIGC-based audio watermark
    // *   **AigcVideo**: AIGC-based video watermark
    // 
    // This parameter is required.
    std::shared_ptr<string> wmType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
