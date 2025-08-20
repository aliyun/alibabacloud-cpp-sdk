// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmEmbedTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmEmbedTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CsvControl, csvControlShrink_);
      DARABONBA_PTR_TO_JSON(DocumentControl, documentControlShrink_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Filename, filename_);
      DARABONBA_PTR_TO_JSON(ImageEmbedJpegQuality, imageEmbedJpegQuality_);
      DARABONBA_PTR_TO_JSON(ImageEmbedLevel, imageEmbedLevel_);
      DARABONBA_PTR_TO_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_TO_JSON(VideoIsLong, videoIsLong_);
      DARABONBA_PTR_TO_JSON(WmInfoBytesB64, wmInfoBytesB64_);
      DARABONBA_PTR_TO_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_TO_JSON(WmInfoUint, wmInfoUint_);
      DARABONBA_PTR_TO_JSON(WmType, wmType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmEmbedTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CsvControl, csvControlShrink_);
      DARABONBA_PTR_FROM_JSON(DocumentControl, documentControlShrink_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Filename, filename_);
      DARABONBA_PTR_FROM_JSON(ImageEmbedJpegQuality, imageEmbedJpegQuality_);
      DARABONBA_PTR_FROM_JSON(ImageEmbedLevel, imageEmbedLevel_);
      DARABONBA_PTR_FROM_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_FROM_JSON(VideoIsLong, videoIsLong_);
      DARABONBA_PTR_FROM_JSON(WmInfoBytesB64, wmInfoBytesB64_);
      DARABONBA_PTR_FROM_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_FROM_JSON(WmInfoUint, wmInfoUint_);
      DARABONBA_PTR_FROM_JSON(WmType, wmType_);
    };
    CreateWmEmbedTaskShrinkRequest() = default ;
    CreateWmEmbedTaskShrinkRequest(const CreateWmEmbedTaskShrinkRequest &) = default ;
    CreateWmEmbedTaskShrinkRequest(CreateWmEmbedTaskShrinkRequest &&) = default ;
    CreateWmEmbedTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmEmbedTaskShrinkRequest() = default ;
    CreateWmEmbedTaskShrinkRequest& operator=(const CreateWmEmbedTaskShrinkRequest &) = default ;
    CreateWmEmbedTaskShrinkRequest& operator=(CreateWmEmbedTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->csvControlShrink_ != nullptr
        && this->documentControlShrink_ != nullptr && this->fileUrl_ != nullptr && this->filename_ != nullptr && this->imageEmbedJpegQuality_ != nullptr && this->imageEmbedLevel_ != nullptr
        && this->videoBitrate_ != nullptr && this->videoIsLong_ != nullptr && this->wmInfoBytesB64_ != nullptr && this->wmInfoSize_ != nullptr && this->wmInfoUint_ != nullptr
        && this->wmType_ != nullptr; };
    // csvControlShrink Field Functions 
    bool hasCsvControlShrink() const { return this->csvControlShrink_ != nullptr;};
    void deleteCsvControlShrink() { this->csvControlShrink_ = nullptr;};
    inline string csvControlShrink() const { DARABONBA_PTR_GET_DEFAULT(csvControlShrink_, "") };
    inline CreateWmEmbedTaskShrinkRequest& setCsvControlShrink(string csvControlShrink) { DARABONBA_PTR_SET_VALUE(csvControlShrink_, csvControlShrink) };


    // documentControlShrink Field Functions 
    bool hasDocumentControlShrink() const { return this->documentControlShrink_ != nullptr;};
    void deleteDocumentControlShrink() { this->documentControlShrink_ = nullptr;};
    inline string documentControlShrink() const { DARABONBA_PTR_GET_DEFAULT(documentControlShrink_, "") };
    inline CreateWmEmbedTaskShrinkRequest& setDocumentControlShrink(string documentControlShrink) { DARABONBA_PTR_SET_VALUE(documentControlShrink_, documentControlShrink) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateWmEmbedTaskShrinkRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string filename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline CreateWmEmbedTaskShrinkRequest& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // imageEmbedJpegQuality Field Functions 
    bool hasImageEmbedJpegQuality() const { return this->imageEmbedJpegQuality_ != nullptr;};
    void deleteImageEmbedJpegQuality() { this->imageEmbedJpegQuality_ = nullptr;};
    inline int64_t imageEmbedJpegQuality() const { DARABONBA_PTR_GET_DEFAULT(imageEmbedJpegQuality_, 0L) };
    inline CreateWmEmbedTaskShrinkRequest& setImageEmbedJpegQuality(int64_t imageEmbedJpegQuality) { DARABONBA_PTR_SET_VALUE(imageEmbedJpegQuality_, imageEmbedJpegQuality) };


    // imageEmbedLevel Field Functions 
    bool hasImageEmbedLevel() const { return this->imageEmbedLevel_ != nullptr;};
    void deleteImageEmbedLevel() { this->imageEmbedLevel_ = nullptr;};
    inline int64_t imageEmbedLevel() const { DARABONBA_PTR_GET_DEFAULT(imageEmbedLevel_, 0L) };
    inline CreateWmEmbedTaskShrinkRequest& setImageEmbedLevel(int64_t imageEmbedLevel) { DARABONBA_PTR_SET_VALUE(imageEmbedLevel_, imageEmbedLevel) };


    // videoBitrate Field Functions 
    bool hasVideoBitrate() const { return this->videoBitrate_ != nullptr;};
    void deleteVideoBitrate() { this->videoBitrate_ = nullptr;};
    inline string videoBitrate() const { DARABONBA_PTR_GET_DEFAULT(videoBitrate_, "") };
    inline CreateWmEmbedTaskShrinkRequest& setVideoBitrate(string videoBitrate) { DARABONBA_PTR_SET_VALUE(videoBitrate_, videoBitrate) };


    // videoIsLong Field Functions 
    bool hasVideoIsLong() const { return this->videoIsLong_ != nullptr;};
    void deleteVideoIsLong() { this->videoIsLong_ = nullptr;};
    inline bool videoIsLong() const { DARABONBA_PTR_GET_DEFAULT(videoIsLong_, false) };
    inline CreateWmEmbedTaskShrinkRequest& setVideoIsLong(bool videoIsLong) { DARABONBA_PTR_SET_VALUE(videoIsLong_, videoIsLong) };


    // wmInfoBytesB64 Field Functions 
    bool hasWmInfoBytesB64() const { return this->wmInfoBytesB64_ != nullptr;};
    void deleteWmInfoBytesB64() { this->wmInfoBytesB64_ = nullptr;};
    inline string wmInfoBytesB64() const { DARABONBA_PTR_GET_DEFAULT(wmInfoBytesB64_, "") };
    inline CreateWmEmbedTaskShrinkRequest& setWmInfoBytesB64(string wmInfoBytesB64) { DARABONBA_PTR_SET_VALUE(wmInfoBytesB64_, wmInfoBytesB64) };


    // wmInfoSize Field Functions 
    bool hasWmInfoSize() const { return this->wmInfoSize_ != nullptr;};
    void deleteWmInfoSize() { this->wmInfoSize_ = nullptr;};
    inline int64_t wmInfoSize() const { DARABONBA_PTR_GET_DEFAULT(wmInfoSize_, 0L) };
    inline CreateWmEmbedTaskShrinkRequest& setWmInfoSize(int64_t wmInfoSize) { DARABONBA_PTR_SET_VALUE(wmInfoSize_, wmInfoSize) };


    // wmInfoUint Field Functions 
    bool hasWmInfoUint() const { return this->wmInfoUint_ != nullptr;};
    void deleteWmInfoUint() { this->wmInfoUint_ = nullptr;};
    inline string wmInfoUint() const { DARABONBA_PTR_GET_DEFAULT(wmInfoUint_, "") };
    inline CreateWmEmbedTaskShrinkRequest& setWmInfoUint(string wmInfoUint) { DARABONBA_PTR_SET_VALUE(wmInfoUint_, wmInfoUint) };


    // wmType Field Functions 
    bool hasWmType() const { return this->wmType_ != nullptr;};
    void deleteWmType() { this->wmType_ = nullptr;};
    inline string wmType() const { DARABONBA_PTR_GET_DEFAULT(wmType_, "") };
    inline CreateWmEmbedTaskShrinkRequest& setWmType(string wmType) { DARABONBA_PTR_SET_VALUE(wmType_, wmType) };


  protected:
    std::shared_ptr<string> csvControlShrink_ = nullptr;
    std::shared_ptr<string> documentControlShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> filename_ = nullptr;
    std::shared_ptr<int64_t> imageEmbedJpegQuality_ = nullptr;
    std::shared_ptr<int64_t> imageEmbedLevel_ = nullptr;
    std::shared_ptr<string> videoBitrate_ = nullptr;
    std::shared_ptr<bool> videoIsLong_ = nullptr;
    std::shared_ptr<string> wmInfoBytesB64_ = nullptr;
    std::shared_ptr<int64_t> wmInfoSize_ = nullptr;
    std::shared_ptr<string> wmInfoUint_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> wmType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
