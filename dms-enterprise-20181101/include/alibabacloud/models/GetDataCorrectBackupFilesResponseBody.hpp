// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACORRECTBACKUPFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATACORRECTBACKUPFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCorrectBackupFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCorrectBackupFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataCorrectBackupFiles, dataCorrectBackupFiles_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCorrectBackupFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCorrectBackupFiles, dataCorrectBackupFiles_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataCorrectBackupFilesResponseBody() = default ;
    GetDataCorrectBackupFilesResponseBody(const GetDataCorrectBackupFilesResponseBody &) = default ;
    GetDataCorrectBackupFilesResponseBody(GetDataCorrectBackupFilesResponseBody &&) = default ;
    GetDataCorrectBackupFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCorrectBackupFilesResponseBody() = default ;
    GetDataCorrectBackupFilesResponseBody& operator=(const GetDataCorrectBackupFilesResponseBody &) = default ;
    GetDataCorrectBackupFilesResponseBody& operator=(GetDataCorrectBackupFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataCorrectBackupFiles_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // dataCorrectBackupFiles Field Functions 
    bool hasDataCorrectBackupFiles() const { return this->dataCorrectBackupFiles_ != nullptr;};
    void deleteDataCorrectBackupFiles() { this->dataCorrectBackupFiles_ = nullptr;};
    inline const GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles & dataCorrectBackupFiles() const { DARABONBA_PTR_GET_CONST(dataCorrectBackupFiles_, GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles) };
    inline GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles dataCorrectBackupFiles() { DARABONBA_PTR_GET(dataCorrectBackupFiles_, GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles) };
    inline GetDataCorrectBackupFilesResponseBody& setDataCorrectBackupFiles(const GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles & dataCorrectBackupFiles) { DARABONBA_PTR_SET_VALUE(dataCorrectBackupFiles_, dataCorrectBackupFiles) };
    inline GetDataCorrectBackupFilesResponseBody& setDataCorrectBackupFiles(GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles && dataCorrectBackupFiles) { DARABONBA_PTR_SET_RVALUE(dataCorrectBackupFiles_, dataCorrectBackupFiles) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataCorrectBackupFilesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataCorrectBackupFilesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataCorrectBackupFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataCorrectBackupFilesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The download URL of the backup file for the ticket.
    std::shared_ptr<GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles> dataCorrectBackupFiles_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
