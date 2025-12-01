// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINCREMENTBACKUPSETDOWNLOADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINCREMENTBACKUPSETDOWNLOADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class CreateIncrementBackupSetDownloadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIncrementBackupSetDownloadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSetDownloadTaskId, backupSetDownloadTaskId_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIncrementBackupSetDownloadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadTaskId, backupSetDownloadTaskId_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateIncrementBackupSetDownloadResponseBody() = default ;
    CreateIncrementBackupSetDownloadResponseBody(const CreateIncrementBackupSetDownloadResponseBody &) = default ;
    CreateIncrementBackupSetDownloadResponseBody(CreateIncrementBackupSetDownloadResponseBody &&) = default ;
    CreateIncrementBackupSetDownloadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIncrementBackupSetDownloadResponseBody() = default ;
    CreateIncrementBackupSetDownloadResponseBody& operator=(const CreateIncrementBackupSetDownloadResponseBody &) = default ;
    CreateIncrementBackupSetDownloadResponseBody& operator=(CreateIncrementBackupSetDownloadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupSetDownloadTaskId_ == nullptr
        && return this->errCode_ == nullptr && return this->errMessage_ == nullptr && return this->httpStatusCode_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // backupSetDownloadTaskId Field Functions 
    bool hasBackupSetDownloadTaskId() const { return this->backupSetDownloadTaskId_ != nullptr;};
    void deleteBackupSetDownloadTaskId() { this->backupSetDownloadTaskId_ = nullptr;};
    inline string backupSetDownloadTaskId() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadTaskId_, "") };
    inline CreateIncrementBackupSetDownloadResponseBody& setBackupSetDownloadTaskId(string backupSetDownloadTaskId) { DARABONBA_PTR_SET_VALUE(backupSetDownloadTaskId_, backupSetDownloadTaskId) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline CreateIncrementBackupSetDownloadResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline CreateIncrementBackupSetDownloadResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateIncrementBackupSetDownloadResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIncrementBackupSetDownloadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateIncrementBackupSetDownloadResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the backup set download task.
    std::shared_ptr<string> backupSetDownloadTaskId_ = nullptr;
    // The error code.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
