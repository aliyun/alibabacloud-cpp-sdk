// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASOURCEFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASOURCEFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UploadDataSourceFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSourceFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(UploadCommand, uploadCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSourceFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(UploadCommand, uploadCommand_);
    };
    UploadDataSourceFileRequest() = default ;
    UploadDataSourceFileRequest(const UploadDataSourceFileRequest &) = default ;
    UploadDataSourceFileRequest(UploadDataSourceFileRequest &&) = default ;
    UploadDataSourceFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSourceFileRequest() = default ;
    UploadDataSourceFileRequest& operator=(const UploadDataSourceFileRequest &) = default ;
    UploadDataSourceFileRequest& operator=(UploadDataSourceFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UploadCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UploadCommand& obj) { 
        DARABONBA_PTR_TO_JSON(FileContentBase64, fileContentBase64_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
      };
      friend void from_json(const Darabonba::Json& j, UploadCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(FileContentBase64, fileContentBase64_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      };
      UploadCommand() = default ;
      UploadCommand(const UploadCommand &) = default ;
      UploadCommand(UploadCommand &&) = default ;
      UploadCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UploadCommand() = default ;
      UploadCommand& operator=(const UploadCommand &) = default ;
      UploadCommand& operator=(UploadCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileContentBase64_ == nullptr
        && this->fileName_ == nullptr; };
      // fileContentBase64 Field Functions 
      bool hasFileContentBase64() const { return this->fileContentBase64_ != nullptr;};
      void deleteFileContentBase64() { this->fileContentBase64_ = nullptr;};
      inline string getFileContentBase64() const { DARABONBA_PTR_GET_DEFAULT(fileContentBase64_, "") };
      inline UploadCommand& setFileContentBase64(string fileContentBase64) { DARABONBA_PTR_SET_VALUE(fileContentBase64_, fileContentBase64) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline UploadCommand& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    protected:
      // The Base64-encoded file content. The decoded file size must be between 0 and 5 MB.
      // 
      // This parameter is required.
      shared_ptr<string> fileContentBase64_ {};
      // The file name, including the extension. The extension is validated against a whitelist. Supported extensions: jar, xml, conf, keytab, jks, rsa, pem, yaml, keystore, properties, and key.
      // 
      // This parameter is required.
      shared_ptr<string> fileName_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->uploadCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UploadDataSourceFileRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline UploadDataSourceFileRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // uploadCommand Field Functions 
    bool hasUploadCommand() const { return this->uploadCommand_ != nullptr;};
    void deleteUploadCommand() { this->uploadCommand_ = nullptr;};
    inline const UploadDataSourceFileRequest::UploadCommand & getUploadCommand() const { DARABONBA_PTR_GET_CONST(uploadCommand_, UploadDataSourceFileRequest::UploadCommand) };
    inline UploadDataSourceFileRequest::UploadCommand getUploadCommand() { DARABONBA_PTR_GET(uploadCommand_, UploadDataSourceFileRequest::UploadCommand) };
    inline UploadDataSourceFileRequest& setUploadCommand(const UploadDataSourceFileRequest::UploadCommand & uploadCommand) { DARABONBA_PTR_SET_VALUE(uploadCommand_, uploadCommand) };
    inline UploadDataSourceFileRequest& setUploadCommand(UploadDataSourceFileRequest::UploadCommand && uploadCommand) { DARABONBA_PTR_SET_RVALUE(uploadCommand_, uploadCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator user.
    shared_ptr<string> opUserId_ {};
    // The request object for uploading a datasource authentication file.
    // 
    // This parameter is required.
    shared_ptr<UploadDataSourceFileRequest::UploadCommand> uploadCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
