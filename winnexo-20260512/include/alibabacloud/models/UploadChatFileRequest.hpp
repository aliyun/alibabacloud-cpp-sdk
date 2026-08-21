// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADCHATFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADCHATFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UploadChatFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadChatFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadChatFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    UploadChatFileRequest() = default ;
    UploadChatFileRequest(const UploadChatFileRequest &) = default ;
    UploadChatFileRequest(UploadChatFileRequest &&) = default ;
    UploadChatFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadChatFileRequest() = default ;
    UploadChatFileRequest& operator=(const UploadChatFileRequest &) = default ;
    UploadChatFileRequest& operator=(UploadChatFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && this->fileName_ == nullptr && this->fileUrl_ == nullptr && this->operatingObjectName_ == nullptr && this->tenantId_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline UploadChatFileRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UploadChatFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline UploadChatFileRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline UploadChatFileRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UploadChatFileRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The content type of the file. Valid values:
    // 
    // - **image**: image
    // - **document**: general document
    // - **alidoc**: Alibaba document
    // - **text**: text
    // - **video**: video
    // - **audio**: audio
    // - **archive**: archive
    // - **app**: application
    // - **link**: shortcut
    // - **other**: other
    shared_ptr<string> contentType_ {};
    // The full path name of the file.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The attachment address.
    // 
    // This parameter is required.
    shared_ptr<string> fileUrl_ {};
    // The name of the digital employee (operating object name, optional).
    shared_ptr<string> operatingObjectName_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
