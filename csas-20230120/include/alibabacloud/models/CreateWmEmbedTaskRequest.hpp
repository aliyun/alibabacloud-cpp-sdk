// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWmEmbedTaskRequestCsvControl.hpp>
#include <alibabacloud/models/CreateWmEmbedTaskRequestDocumentControl.hpp>
#include <alibabacloud/models/CreateWmEmbedTaskRequestImageControl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmEmbedTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmEmbedTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CsvControl, csvControl_);
      DARABONBA_PTR_TO_JSON(DocumentControl, documentControl_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Filename, filename_);
      DARABONBA_PTR_TO_JSON(ImageControl, imageControl_);
      DARABONBA_PTR_TO_JSON(ImageEmbedJpegQuality, imageEmbedJpegQuality_);
      DARABONBA_PTR_TO_JSON(ImageEmbedLevel, imageEmbedLevel_);
      DARABONBA_PTR_TO_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_TO_JSON(VideoIsLong, videoIsLong_);
      DARABONBA_PTR_TO_JSON(WmInfoBytesB64, wmInfoBytesB64_);
      DARABONBA_PTR_TO_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_TO_JSON(WmInfoUint, wmInfoUint_);
      DARABONBA_PTR_TO_JSON(WmType, wmType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmEmbedTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CsvControl, csvControl_);
      DARABONBA_PTR_FROM_JSON(DocumentControl, documentControl_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Filename, filename_);
      DARABONBA_PTR_FROM_JSON(ImageControl, imageControl_);
      DARABONBA_PTR_FROM_JSON(ImageEmbedJpegQuality, imageEmbedJpegQuality_);
      DARABONBA_PTR_FROM_JSON(ImageEmbedLevel, imageEmbedLevel_);
      DARABONBA_PTR_FROM_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_FROM_JSON(VideoIsLong, videoIsLong_);
      DARABONBA_PTR_FROM_JSON(WmInfoBytesB64, wmInfoBytesB64_);
      DARABONBA_PTR_FROM_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_FROM_JSON(WmInfoUint, wmInfoUint_);
      DARABONBA_PTR_FROM_JSON(WmType, wmType_);
    };
    CreateWmEmbedTaskRequest() = default ;
    CreateWmEmbedTaskRequest(const CreateWmEmbedTaskRequest &) = default ;
    CreateWmEmbedTaskRequest(CreateWmEmbedTaskRequest &&) = default ;
    CreateWmEmbedTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmEmbedTaskRequest() = default ;
    CreateWmEmbedTaskRequest& operator=(const CreateWmEmbedTaskRequest &) = default ;
    CreateWmEmbedTaskRequest& operator=(CreateWmEmbedTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->csvControl_ != nullptr
        && this->documentControl_ != nullptr && this->fileUrl_ != nullptr && this->filename_ != nullptr && this->imageControl_ != nullptr && this->imageEmbedJpegQuality_ != nullptr
        && this->imageEmbedLevel_ != nullptr && this->videoBitrate_ != nullptr && this->videoIsLong_ != nullptr && this->wmInfoBytesB64_ != nullptr && this->wmInfoSize_ != nullptr
        && this->wmInfoUint_ != nullptr && this->wmType_ != nullptr; };
    // csvControl Field Functions 
    bool hasCsvControl() const { return this->csvControl_ != nullptr;};
    void deleteCsvControl() { this->csvControl_ = nullptr;};
    inline const CreateWmEmbedTaskRequestCsvControl & csvControl() const { DARABONBA_PTR_GET_CONST(csvControl_, CreateWmEmbedTaskRequestCsvControl) };
    inline CreateWmEmbedTaskRequestCsvControl csvControl() { DARABONBA_PTR_GET(csvControl_, CreateWmEmbedTaskRequestCsvControl) };
    inline CreateWmEmbedTaskRequest& setCsvControl(const CreateWmEmbedTaskRequestCsvControl & csvControl) { DARABONBA_PTR_SET_VALUE(csvControl_, csvControl) };
    inline CreateWmEmbedTaskRequest& setCsvControl(CreateWmEmbedTaskRequestCsvControl && csvControl) { DARABONBA_PTR_SET_RVALUE(csvControl_, csvControl) };


    // documentControl Field Functions 
    bool hasDocumentControl() const { return this->documentControl_ != nullptr;};
    void deleteDocumentControl() { this->documentControl_ = nullptr;};
    inline const CreateWmEmbedTaskRequestDocumentControl & documentControl() const { DARABONBA_PTR_GET_CONST(documentControl_, CreateWmEmbedTaskRequestDocumentControl) };
    inline CreateWmEmbedTaskRequestDocumentControl documentControl() { DARABONBA_PTR_GET(documentControl_, CreateWmEmbedTaskRequestDocumentControl) };
    inline CreateWmEmbedTaskRequest& setDocumentControl(const CreateWmEmbedTaskRequestDocumentControl & documentControl) { DARABONBA_PTR_SET_VALUE(documentControl_, documentControl) };
    inline CreateWmEmbedTaskRequest& setDocumentControl(CreateWmEmbedTaskRequestDocumentControl && documentControl) { DARABONBA_PTR_SET_RVALUE(documentControl_, documentControl) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateWmEmbedTaskRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string filename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline CreateWmEmbedTaskRequest& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // imageControl Field Functions 
    bool hasImageControl() const { return this->imageControl_ != nullptr;};
    void deleteImageControl() { this->imageControl_ = nullptr;};
    inline const CreateWmEmbedTaskRequestImageControl & imageControl() const { DARABONBA_PTR_GET_CONST(imageControl_, CreateWmEmbedTaskRequestImageControl) };
    inline CreateWmEmbedTaskRequestImageControl imageControl() { DARABONBA_PTR_GET(imageControl_, CreateWmEmbedTaskRequestImageControl) };
    inline CreateWmEmbedTaskRequest& setImageControl(const CreateWmEmbedTaskRequestImageControl & imageControl) { DARABONBA_PTR_SET_VALUE(imageControl_, imageControl) };
    inline CreateWmEmbedTaskRequest& setImageControl(CreateWmEmbedTaskRequestImageControl && imageControl) { DARABONBA_PTR_SET_RVALUE(imageControl_, imageControl) };


    // imageEmbedJpegQuality Field Functions 
    bool hasImageEmbedJpegQuality() const { return this->imageEmbedJpegQuality_ != nullptr;};
    void deleteImageEmbedJpegQuality() { this->imageEmbedJpegQuality_ = nullptr;};
    inline int64_t imageEmbedJpegQuality() const { DARABONBA_PTR_GET_DEFAULT(imageEmbedJpegQuality_, 0L) };
    inline CreateWmEmbedTaskRequest& setImageEmbedJpegQuality(int64_t imageEmbedJpegQuality) { DARABONBA_PTR_SET_VALUE(imageEmbedJpegQuality_, imageEmbedJpegQuality) };


    // imageEmbedLevel Field Functions 
    bool hasImageEmbedLevel() const { return this->imageEmbedLevel_ != nullptr;};
    void deleteImageEmbedLevel() { this->imageEmbedLevel_ = nullptr;};
    inline int64_t imageEmbedLevel() const { DARABONBA_PTR_GET_DEFAULT(imageEmbedLevel_, 0L) };
    inline CreateWmEmbedTaskRequest& setImageEmbedLevel(int64_t imageEmbedLevel) { DARABONBA_PTR_SET_VALUE(imageEmbedLevel_, imageEmbedLevel) };


    // videoBitrate Field Functions 
    bool hasVideoBitrate() const { return this->videoBitrate_ != nullptr;};
    void deleteVideoBitrate() { this->videoBitrate_ = nullptr;};
    inline string videoBitrate() const { DARABONBA_PTR_GET_DEFAULT(videoBitrate_, "") };
    inline CreateWmEmbedTaskRequest& setVideoBitrate(string videoBitrate) { DARABONBA_PTR_SET_VALUE(videoBitrate_, videoBitrate) };


    // videoIsLong Field Functions 
    bool hasVideoIsLong() const { return this->videoIsLong_ != nullptr;};
    void deleteVideoIsLong() { this->videoIsLong_ = nullptr;};
    inline bool videoIsLong() const { DARABONBA_PTR_GET_DEFAULT(videoIsLong_, false) };
    inline CreateWmEmbedTaskRequest& setVideoIsLong(bool videoIsLong) { DARABONBA_PTR_SET_VALUE(videoIsLong_, videoIsLong) };


    // wmInfoBytesB64 Field Functions 
    bool hasWmInfoBytesB64() const { return this->wmInfoBytesB64_ != nullptr;};
    void deleteWmInfoBytesB64() { this->wmInfoBytesB64_ = nullptr;};
    inline string wmInfoBytesB64() const { DARABONBA_PTR_GET_DEFAULT(wmInfoBytesB64_, "") };
    inline CreateWmEmbedTaskRequest& setWmInfoBytesB64(string wmInfoBytesB64) { DARABONBA_PTR_SET_VALUE(wmInfoBytesB64_, wmInfoBytesB64) };


    // wmInfoSize Field Functions 
    bool hasWmInfoSize() const { return this->wmInfoSize_ != nullptr;};
    void deleteWmInfoSize() { this->wmInfoSize_ = nullptr;};
    inline int64_t wmInfoSize() const { DARABONBA_PTR_GET_DEFAULT(wmInfoSize_, 0L) };
    inline CreateWmEmbedTaskRequest& setWmInfoSize(int64_t wmInfoSize) { DARABONBA_PTR_SET_VALUE(wmInfoSize_, wmInfoSize) };


    // wmInfoUint Field Functions 
    bool hasWmInfoUint() const { return this->wmInfoUint_ != nullptr;};
    void deleteWmInfoUint() { this->wmInfoUint_ = nullptr;};
    inline string wmInfoUint() const { DARABONBA_PTR_GET_DEFAULT(wmInfoUint_, "") };
    inline CreateWmEmbedTaskRequest& setWmInfoUint(string wmInfoUint) { DARABONBA_PTR_SET_VALUE(wmInfoUint_, wmInfoUint) };


    // wmType Field Functions 
    bool hasWmType() const { return this->wmType_ != nullptr;};
    void deleteWmType() { this->wmType_ = nullptr;};
    inline string wmType() const { DARABONBA_PTR_GET_DEFAULT(wmType_, "") };
    inline CreateWmEmbedTaskRequest& setWmType(string wmType) { DARABONBA_PTR_SET_VALUE(wmType_, wmType) };


  protected:
    std::shared_ptr<CreateWmEmbedTaskRequestCsvControl> csvControl_ = nullptr;
    std::shared_ptr<CreateWmEmbedTaskRequestDocumentControl> documentControl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> filename_ = nullptr;
    std::shared_ptr<CreateWmEmbedTaskRequestImageControl> imageControl_ = nullptr;
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
