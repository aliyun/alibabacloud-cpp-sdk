// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWATERMARKEMBEDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWATERMARKEMBEDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class CreateWatermarkEmbedTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWatermarkEmbedTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Reserved, reserved_);
      DARABONBA_PTR_TO_JSON(WatermarkContent, watermarkContent_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWatermarkEmbedTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
      DARABONBA_PTR_FROM_JSON(WatermarkContent, watermarkContent_);
    };
    CreateWatermarkEmbedTaskRequest() = default ;
    CreateWatermarkEmbedTaskRequest(const CreateWatermarkEmbedTaskRequest &) = default ;
    CreateWatermarkEmbedTaskRequest(CreateWatermarkEmbedTaskRequest &&) = default ;
    CreateWatermarkEmbedTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWatermarkEmbedTaskRequest() = default ;
    CreateWatermarkEmbedTaskRequest& operator=(const CreateWatermarkEmbedTaskRequest &) = default ;
    CreateWatermarkEmbedTaskRequest& operator=(CreateWatermarkEmbedTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->fileType_ == nullptr && this->fileUrl_ == nullptr && this->level_ == nullptr && this->reserved_ == nullptr && this->watermarkContent_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateWatermarkEmbedTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline CreateWatermarkEmbedTaskRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateWatermarkEmbedTaskRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline CreateWatermarkEmbedTaskRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // reserved Field Functions 
    bool hasReserved() const { return this->reserved_ != nullptr;};
    void deleteReserved() { this->reserved_ = nullptr;};
    inline string getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
    inline CreateWatermarkEmbedTaskRequest& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


    // watermarkContent Field Functions 
    bool hasWatermarkContent() const { return this->watermarkContent_ != nullptr;};
    void deleteWatermarkContent() { this->watermarkContent_ = nullptr;};
    inline string getWatermarkContent() const { DARABONBA_PTR_GET_DEFAULT(watermarkContent_, "") };
    inline CreateWatermarkEmbedTaskRequest& setWatermarkContent(string watermarkContent) { DARABONBA_PTR_SET_VALUE(watermarkContent_, watermarkContent) };


  protected:
    // A reserved idempotency field. This field is not supported. Passing a value does not cause an error, but it does not produce an idempotency effect.
    shared_ptr<string> clientToken_ {};
    // The file type. Valid values:
    // - image: image.
    // - video: video.
    // 
    // The value must match the actual file type.
    // 
    // This parameter is required.
    shared_ptr<string> fileType_ {};
    // The URL of the file to be processed. Images and videos are supported. Only the HTTP and HTTPS protocols are supported. Videos must be no longer than 10 minutes and no larger than 100 MB.
    shared_ptr<string> fileUrl_ {};
    // The embedding strength. Valid values: 0 to 5. A higher strength provides better robustness but lower visual quality.
    // 
    // This parameter is required.
    shared_ptr<string> level_ {};
    // A reserved field. No valid values are available. Do not specify this parameter.
    shared_ptr<string> reserved_ {};
    // The watermark content. The embedded content can be restored to the original text by calling the extraction operation.
    shared_ptr<string> watermarkContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
