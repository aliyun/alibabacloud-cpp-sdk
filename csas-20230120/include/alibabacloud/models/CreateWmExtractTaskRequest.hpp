// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEXTRACTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEXTRACTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmExtractTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmExtractTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CsvControl, csvControl_);
      DARABONBA_PTR_TO_JSON(DocumentIsCapture, documentIsCapture_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Filename, filename_);
      DARABONBA_PTR_TO_JSON(ImageExtractParamsOpenApi, imageExtractParamsOpenApi_);
      DARABONBA_PTR_TO_JSON(IsClientEmbed, isClientEmbed_);
      DARABONBA_PTR_TO_JSON(VideoIsLong, videoIsLong_);
      DARABONBA_PTR_TO_JSON(VideoSpeed, videoSpeed_);
      DARABONBA_PTR_TO_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_TO_JSON(WmType, wmType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmExtractTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CsvControl, csvControl_);
      DARABONBA_PTR_FROM_JSON(DocumentIsCapture, documentIsCapture_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Filename, filename_);
      DARABONBA_PTR_FROM_JSON(ImageExtractParamsOpenApi, imageExtractParamsOpenApi_);
      DARABONBA_PTR_FROM_JSON(IsClientEmbed, isClientEmbed_);
      DARABONBA_PTR_FROM_JSON(VideoIsLong, videoIsLong_);
      DARABONBA_PTR_FROM_JSON(VideoSpeed, videoSpeed_);
      DARABONBA_PTR_FROM_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_FROM_JSON(WmType, wmType_);
    };
    CreateWmExtractTaskRequest() = default ;
    CreateWmExtractTaskRequest(const CreateWmExtractTaskRequest &) = default ;
    CreateWmExtractTaskRequest(CreateWmExtractTaskRequest &&) = default ;
    CreateWmExtractTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmExtractTaskRequest() = default ;
    CreateWmExtractTaskRequest& operator=(const CreateWmExtractTaskRequest &) = default ;
    CreateWmExtractTaskRequest& operator=(CreateWmExtractTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageExtractParamsOpenApi : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageExtractParamsOpenApi& obj) { 
        DARABONBA_PTR_TO_JSON(SrcLogoBase64, srcLogoBase64_);
      };
      friend void from_json(const Darabonba::Json& j, ImageExtractParamsOpenApi& obj) { 
        DARABONBA_PTR_FROM_JSON(SrcLogoBase64, srcLogoBase64_);
      };
      ImageExtractParamsOpenApi() = default ;
      ImageExtractParamsOpenApi(const ImageExtractParamsOpenApi &) = default ;
      ImageExtractParamsOpenApi(ImageExtractParamsOpenApi &&) = default ;
      ImageExtractParamsOpenApi(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageExtractParamsOpenApi() = default ;
      ImageExtractParamsOpenApi& operator=(const ImageExtractParamsOpenApi &) = default ;
      ImageExtractParamsOpenApi& operator=(ImageExtractParamsOpenApi &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->srcLogoBase64_ == nullptr; };
      // srcLogoBase64 Field Functions 
      bool hasSrcLogoBase64() const { return this->srcLogoBase64_ != nullptr;};
      void deleteSrcLogoBase64() { this->srcLogoBase64_ = nullptr;};
      inline string getSrcLogoBase64() const { DARABONBA_PTR_GET_DEFAULT(srcLogoBase64_, "") };
      inline ImageExtractParamsOpenApi& setSrcLogoBase64(string srcLogoBase64) { DARABONBA_PTR_SET_VALUE(srcLogoBase64_, srcLogoBase64) };


    protected:
      shared_ptr<string> srcLogoBase64_ {};
    };

    class CsvControl : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CsvControl& obj) { 
        DARABONBA_PTR_TO_JSON(EmbedBitsNumberInEachTime, embedBitsNumberInEachTime_);
        DARABONBA_PTR_TO_JSON(EmbedColumn, embedColumn_);
        DARABONBA_PTR_TO_JSON(EmbedPrecision, embedPrecision_);
        DARABONBA_PTR_TO_JSON(EmbedTimePosition, embedTimePosition_);
        DARABONBA_PTR_TO_JSON(Method, method_);
        DARABONBA_PTR_TO_JSON(TimeFormat, timeFormat_);
      };
      friend void from_json(const Darabonba::Json& j, CsvControl& obj) { 
        DARABONBA_PTR_FROM_JSON(EmbedBitsNumberInEachTime, embedBitsNumberInEachTime_);
        DARABONBA_PTR_FROM_JSON(EmbedColumn, embedColumn_);
        DARABONBA_PTR_FROM_JSON(EmbedPrecision, embedPrecision_);
        DARABONBA_PTR_FROM_JSON(EmbedTimePosition, embedTimePosition_);
        DARABONBA_PTR_FROM_JSON(Method, method_);
        DARABONBA_PTR_FROM_JSON(TimeFormat, timeFormat_);
      };
      CsvControl() = default ;
      CsvControl(const CsvControl &) = default ;
      CsvControl(CsvControl &&) = default ;
      CsvControl(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CsvControl() = default ;
      CsvControl& operator=(const CsvControl &) = default ;
      CsvControl& operator=(CsvControl &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->embedBitsNumberInEachTime_ == nullptr
        && this->embedColumn_ == nullptr && this->embedPrecision_ == nullptr && this->embedTimePosition_ == nullptr && this->method_ == nullptr && this->timeFormat_ == nullptr; };
      // embedBitsNumberInEachTime Field Functions 
      bool hasEmbedBitsNumberInEachTime() const { return this->embedBitsNumberInEachTime_ != nullptr;};
      void deleteEmbedBitsNumberInEachTime() { this->embedBitsNumberInEachTime_ = nullptr;};
      inline int64_t getEmbedBitsNumberInEachTime() const { DARABONBA_PTR_GET_DEFAULT(embedBitsNumberInEachTime_, 0L) };
      inline CsvControl& setEmbedBitsNumberInEachTime(int64_t embedBitsNumberInEachTime) { DARABONBA_PTR_SET_VALUE(embedBitsNumberInEachTime_, embedBitsNumberInEachTime) };


      // embedColumn Field Functions 
      bool hasEmbedColumn() const { return this->embedColumn_ != nullptr;};
      void deleteEmbedColumn() { this->embedColumn_ = nullptr;};
      inline int64_t getEmbedColumn() const { DARABONBA_PTR_GET_DEFAULT(embedColumn_, 0L) };
      inline CsvControl& setEmbedColumn(int64_t embedColumn) { DARABONBA_PTR_SET_VALUE(embedColumn_, embedColumn) };


      // embedPrecision Field Functions 
      bool hasEmbedPrecision() const { return this->embedPrecision_ != nullptr;};
      void deleteEmbedPrecision() { this->embedPrecision_ = nullptr;};
      inline int64_t getEmbedPrecision() const { DARABONBA_PTR_GET_DEFAULT(embedPrecision_, 0L) };
      inline CsvControl& setEmbedPrecision(int64_t embedPrecision) { DARABONBA_PTR_SET_VALUE(embedPrecision_, embedPrecision) };


      // embedTimePosition Field Functions 
      bool hasEmbedTimePosition() const { return this->embedTimePosition_ != nullptr;};
      void deleteEmbedTimePosition() { this->embedTimePosition_ = nullptr;};
      inline string getEmbedTimePosition() const { DARABONBA_PTR_GET_DEFAULT(embedTimePosition_, "") };
      inline CsvControl& setEmbedTimePosition(string embedTimePosition) { DARABONBA_PTR_SET_VALUE(embedTimePosition_, embedTimePosition) };


      // method Field Functions 
      bool hasMethod() const { return this->method_ != nullptr;};
      void deleteMethod() { this->method_ = nullptr;};
      inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
      inline CsvControl& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


      // timeFormat Field Functions 
      bool hasTimeFormat() const { return this->timeFormat_ != nullptr;};
      void deleteTimeFormat() { this->timeFormat_ = nullptr;};
      inline string getTimeFormat() const { DARABONBA_PTR_GET_DEFAULT(timeFormat_, "") };
      inline CsvControl& setTimeFormat(string timeFormat) { DARABONBA_PTR_SET_VALUE(timeFormat_, timeFormat) };


    protected:
      // The timestamp watermark parameter that specifies how much information a single timestamp holds. You must keep the value of this parameter consistent for watermark embedding and watermark extraction. Otherwise, the extraction fails.
      shared_ptr<int64_t> embedBitsNumberInEachTime_ {};
      // The lossy embedding control parameter that specifies columns to be modified You must keep the value of this parameter consistent for watermark embedding and watermark extraction. Otherwise, the extraction fails.
      shared_ptr<int64_t> embedColumn_ {};
      // The lossy embedding control parameter that specifies the modification precision. You must keep the value of this parameter consistent for watermark embedding and watermark extraction. Otherwise, the extraction fails.
      shared_ptr<int64_t> embedPrecision_ {};
      // The timestamp watermark parameter that specifies the embedding position of the timestamp watermarks. You must keep the value of this parameter consistent for watermark embedding and watermark extraction. Otherwise, the extraction fails.
      shared_ptr<string> embedTimePosition_ {};
      // The CSV watermark embedding method. You must keep the value of this parameter consistent for watermark embedding and watermark extraction. Otherwise, the extraction fails.
      shared_ptr<string> method_ {};
      // The timestamp watermark parameter that specifies the timestamp format. You must keep the value of this parameter consistent for watermark embedding and watermark extraction. Otherwise, the extraction fails.
      shared_ptr<string> timeFormat_ {};
    };

    virtual bool empty() const override { return this->csvControl_ == nullptr
        && this->documentIsCapture_ == nullptr && this->fileUrl_ == nullptr && this->filename_ == nullptr && this->imageExtractParamsOpenApi_ == nullptr && this->isClientEmbed_ == nullptr
        && this->videoIsLong_ == nullptr && this->videoSpeed_ == nullptr && this->wmInfoSize_ == nullptr && this->wmType_ == nullptr; };
    // csvControl Field Functions 
    bool hasCsvControl() const { return this->csvControl_ != nullptr;};
    void deleteCsvControl() { this->csvControl_ = nullptr;};
    inline const CreateWmExtractTaskRequest::CsvControl & getCsvControl() const { DARABONBA_PTR_GET_CONST(csvControl_, CreateWmExtractTaskRequest::CsvControl) };
    inline CreateWmExtractTaskRequest::CsvControl getCsvControl() { DARABONBA_PTR_GET(csvControl_, CreateWmExtractTaskRequest::CsvControl) };
    inline CreateWmExtractTaskRequest& setCsvControl(const CreateWmExtractTaskRequest::CsvControl & csvControl) { DARABONBA_PTR_SET_VALUE(csvControl_, csvControl) };
    inline CreateWmExtractTaskRequest& setCsvControl(CreateWmExtractTaskRequest::CsvControl && csvControl) { DARABONBA_PTR_SET_RVALUE(csvControl_, csvControl) };


    // documentIsCapture Field Functions 
    bool hasDocumentIsCapture() const { return this->documentIsCapture_ != nullptr;};
    void deleteDocumentIsCapture() { this->documentIsCapture_ = nullptr;};
    inline bool getDocumentIsCapture() const { DARABONBA_PTR_GET_DEFAULT(documentIsCapture_, false) };
    inline CreateWmExtractTaskRequest& setDocumentIsCapture(bool documentIsCapture) { DARABONBA_PTR_SET_VALUE(documentIsCapture_, documentIsCapture) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateWmExtractTaskRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline CreateWmExtractTaskRequest& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // imageExtractParamsOpenApi Field Functions 
    bool hasImageExtractParamsOpenApi() const { return this->imageExtractParamsOpenApi_ != nullptr;};
    void deleteImageExtractParamsOpenApi() { this->imageExtractParamsOpenApi_ = nullptr;};
    inline const CreateWmExtractTaskRequest::ImageExtractParamsOpenApi & getImageExtractParamsOpenApi() const { DARABONBA_PTR_GET_CONST(imageExtractParamsOpenApi_, CreateWmExtractTaskRequest::ImageExtractParamsOpenApi) };
    inline CreateWmExtractTaskRequest::ImageExtractParamsOpenApi getImageExtractParamsOpenApi() { DARABONBA_PTR_GET(imageExtractParamsOpenApi_, CreateWmExtractTaskRequest::ImageExtractParamsOpenApi) };
    inline CreateWmExtractTaskRequest& setImageExtractParamsOpenApi(const CreateWmExtractTaskRequest::ImageExtractParamsOpenApi & imageExtractParamsOpenApi) { DARABONBA_PTR_SET_VALUE(imageExtractParamsOpenApi_, imageExtractParamsOpenApi) };
    inline CreateWmExtractTaskRequest& setImageExtractParamsOpenApi(CreateWmExtractTaskRequest::ImageExtractParamsOpenApi && imageExtractParamsOpenApi) { DARABONBA_PTR_SET_RVALUE(imageExtractParamsOpenApi_, imageExtractParamsOpenApi) };


    // isClientEmbed Field Functions 
    bool hasIsClientEmbed() const { return this->isClientEmbed_ != nullptr;};
    void deleteIsClientEmbed() { this->isClientEmbed_ = nullptr;};
    inline bool getIsClientEmbed() const { DARABONBA_PTR_GET_DEFAULT(isClientEmbed_, false) };
    inline CreateWmExtractTaskRequest& setIsClientEmbed(bool isClientEmbed) { DARABONBA_PTR_SET_VALUE(isClientEmbed_, isClientEmbed) };


    // videoIsLong Field Functions 
    bool hasVideoIsLong() const { return this->videoIsLong_ != nullptr;};
    void deleteVideoIsLong() { this->videoIsLong_ = nullptr;};
    inline bool getVideoIsLong() const { DARABONBA_PTR_GET_DEFAULT(videoIsLong_, false) };
    inline CreateWmExtractTaskRequest& setVideoIsLong(bool videoIsLong) { DARABONBA_PTR_SET_VALUE(videoIsLong_, videoIsLong) };


    // videoSpeed Field Functions 
    bool hasVideoSpeed() const { return this->videoSpeed_ != nullptr;};
    void deleteVideoSpeed() { this->videoSpeed_ = nullptr;};
    inline string getVideoSpeed() const { DARABONBA_PTR_GET_DEFAULT(videoSpeed_, "") };
    inline CreateWmExtractTaskRequest& setVideoSpeed(string videoSpeed) { DARABONBA_PTR_SET_VALUE(videoSpeed_, videoSpeed) };


    // wmInfoSize Field Functions 
    bool hasWmInfoSize() const { return this->wmInfoSize_ != nullptr;};
    void deleteWmInfoSize() { this->wmInfoSize_ = nullptr;};
    inline int64_t getWmInfoSize() const { DARABONBA_PTR_GET_DEFAULT(wmInfoSize_, 0L) };
    inline CreateWmExtractTaskRequest& setWmInfoSize(int64_t wmInfoSize) { DARABONBA_PTR_SET_VALUE(wmInfoSize_, wmInfoSize) };


    // wmType Field Functions 
    bool hasWmType() const { return this->wmType_ != nullptr;};
    void deleteWmType() { this->wmType_ = nullptr;};
    inline string getWmType() const { DARABONBA_PTR_GET_DEFAULT(wmType_, "") };
    inline CreateWmExtractTaskRequest& setWmType(string wmType) { DARABONBA_PTR_SET_VALUE(wmType_, wmType) };


  protected:
    // The CSV watermark control parameter. You must keep the value of this parameter consistent for watermark embedding and watermark extraction. Otherwise, the extraction fails.
    shared_ptr<CreateWmExtractTaskRequest::CsvControl> csvControl_ {};
    // The document watermark parameter that specifies whether the file to be extracted is a screenshot of a document with a background watermark added. The system determines whether to use the extraction logic for document background watermarks based on whether the file to be extracted is an image file. By default, you do not need to configure this parameter. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> documentIsCapture_ {};
    // The URL used to download the file to be extracted. The URL must be accessible over the Internet.
    // 
    // This parameter is required.
    shared_ptr<string> fileUrl_ {};
    // The name of the file to be extracted. The system needs to check the file type based on the file name extension.
    // 
    // This parameter is required.
    shared_ptr<string> filename_ {};
    shared_ptr<CreateWmExtractTaskRequest::ImageExtractParamsOpenApi> imageExtractParamsOpenApi_ {};
    shared_ptr<bool> isClientEmbed_ {};
    // The watermark parameter for videos that specifies whether to use the long video watermark SDK. Default value: false. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> videoIsLong_ {};
    // The watermark parameter for long videos that specifies the video speed factor. The value can be a floating-point number or a string. Default value: 1. This parameter indicates the speed at which a watermark is added or the time-stretching rate for videos after a watermark is added.
    shared_ptr<string> videoSpeed_ {};
    // The watermark information size. Default value: 32. You must keep the value of this parameter consistent for watermark embedding and watermark extraction. For example, if a 40-bit watermark is used for watermark embedding, you must set this parameter to 40 for watermark extraction.
    shared_ptr<int64_t> wmInfoSize_ {};
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
    shared_ptr<string> wmType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
