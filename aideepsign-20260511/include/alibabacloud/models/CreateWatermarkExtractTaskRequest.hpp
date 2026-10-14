// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWATERMARKEXTRACTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWATERMARKEXTRACTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class CreateWatermarkExtractTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWatermarkExtractTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Reserved, reserved_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWatermarkExtractTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
    };
    CreateWatermarkExtractTaskRequest() = default ;
    CreateWatermarkExtractTaskRequest(const CreateWatermarkExtractTaskRequest &) = default ;
    CreateWatermarkExtractTaskRequest(CreateWatermarkExtractTaskRequest &&) = default ;
    CreateWatermarkExtractTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWatermarkExtractTaskRequest() = default ;
    CreateWatermarkExtractTaskRequest& operator=(const CreateWatermarkExtractTaskRequest &) = default ;
    CreateWatermarkExtractTaskRequest& operator=(CreateWatermarkExtractTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->fileType_ == nullptr && this->fileUrl_ == nullptr && this->reserved_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateWatermarkExtractTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline CreateWatermarkExtractTaskRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateWatermarkExtractTaskRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // reserved Field Functions 
    bool hasReserved() const { return this->reserved_ != nullptr;};
    void deleteReserved() { this->reserved_ = nullptr;};
    inline string getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
    inline CreateWatermarkExtractTaskRequest& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


  protected:
    // A reserved idempotency field. Idempotency is not supported. Passing in a value does not cause an error, but it does not produce an idempotency effect.
    shared_ptr<string> clientToken_ {};
    // The file type. Valid values: `image` and `video`. The value must be the same as the `FileType` used when the watermark was embedded.
    // 
    // This parameter is required.
    shared_ptr<string> fileType_ {};
    // The URL of the file from which the watermark is to be extracted. Images and videos are supported. Only the `http/https` protocol is supported. Videos must be no longer than 10 minutes and no larger than 100 MB.
    shared_ptr<string> fileUrl_ {};
    // A reserved field. No valid values are available. Do not pass in this parameter.
    shared_ptr<string> reserved_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
