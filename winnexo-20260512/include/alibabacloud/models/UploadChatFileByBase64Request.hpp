// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADCHATFILEBYBASE64REQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADCHATFILEBYBASE64REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UploadChatFileByBase64Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadChatFileByBase64Request& obj) { 
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(fileContentBase64, fileContentBase64_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadChatFileByBase64Request& obj) { 
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(fileContentBase64, fileContentBase64_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    UploadChatFileByBase64Request() = default ;
    UploadChatFileByBase64Request(const UploadChatFileByBase64Request &) = default ;
    UploadChatFileByBase64Request(UploadChatFileByBase64Request &&) = default ;
    UploadChatFileByBase64Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadChatFileByBase64Request() = default ;
    UploadChatFileByBase64Request& operator=(const UploadChatFileByBase64Request &) = default ;
    UploadChatFileByBase64Request& operator=(UploadChatFileByBase64Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && this->fileContentBase64_ == nullptr && this->fileName_ == nullptr && this->tenantId_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline UploadChatFileByBase64Request& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // fileContentBase64 Field Functions 
    bool hasFileContentBase64() const { return this->fileContentBase64_ != nullptr;};
    void deleteFileContentBase64() { this->fileContentBase64_ = nullptr;};
    inline string getFileContentBase64() const { DARABONBA_PTR_GET_DEFAULT(fileContentBase64_, "") };
    inline UploadChatFileByBase64Request& setFileContentBase64(string fileContentBase64) { DARABONBA_PTR_SET_VALUE(fileContentBase64_, fileContentBase64) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UploadChatFileByBase64Request& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UploadChatFileByBase64Request& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The MIME type of the file.
    shared_ptr<string> contentType_ {};
    // The Base64-encoded string of the file content.
    // 
    // This parameter is required.
    shared_ptr<string> fileContentBase64_ {};
    // The file name.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
