// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADCHATFILEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADCHATFILEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UploadChatFileAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadChatFileAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      // fileUrlObject_ is stream
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadChatFileAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      // fileUrlObject_ is stream
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    UploadChatFileAdvanceRequest() = default ;
    UploadChatFileAdvanceRequest(const UploadChatFileAdvanceRequest &) = default ;
    UploadChatFileAdvanceRequest(UploadChatFileAdvanceRequest &&) = default ;
    UploadChatFileAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadChatFileAdvanceRequest() = default ;
    UploadChatFileAdvanceRequest& operator=(const UploadChatFileAdvanceRequest &) = default ;
    UploadChatFileAdvanceRequest& operator=(UploadChatFileAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && this->fileName_ == nullptr && this->fileUrlObject_ == nullptr && this->operatingObjectName_ == nullptr && this->tenantId_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline UploadChatFileAdvanceRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UploadChatFileAdvanceRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrlObject Field Functions 
    bool hasFileUrlObject() const { return this->fileUrlObject_ != nullptr;};
    void deleteFileUrlObject() { this->fileUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getFileUrlObject() const { DARABONBA_GET(fileUrlObject_) };
    inline UploadChatFileAdvanceRequest& setFileUrlObject(shared_ptr<Darabonba::IStream> fileUrlObject) { DARABONBA_SET_VALUE(fileUrlObject_, fileUrlObject) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline UploadChatFileAdvanceRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UploadChatFileAdvanceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The content type of the file. Valid values:
    // 
    // - **image**: Image.
    // - **document**: General document.
    // - **alidoc**: Alibaba document.
    // - **text**: Text.
    // - **video**: Video.
    // - **audio**: Audio.
    // - **archive**: Archive.
    // - **app**: Application.
    // - **link**: Shortcut.
    // - **other**: Other.
    shared_ptr<string> contentType_ {};
    // The full path name of the file.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The Yida attachment address.
    // 
    // This parameter is required.
    shared_ptr<Darabonba::IStream> fileUrlObject_ {};
    // The name of the digital employee (operating object name). This parameter is optional.
    shared_ptr<string> operatingObjectName_ {};
    // The tenant ID that takes effect.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
