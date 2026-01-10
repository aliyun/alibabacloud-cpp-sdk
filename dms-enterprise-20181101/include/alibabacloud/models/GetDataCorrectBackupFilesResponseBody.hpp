// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACORRECTBACKUPFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATACORRECTBACKUPFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class DataCorrectBackupFiles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataCorrectBackupFiles& obj) { 
        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      };
      friend void from_json(const Darabonba::Json& j, DataCorrectBackupFiles& obj) { 
        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      };
      DataCorrectBackupFiles() = default ;
      DataCorrectBackupFiles(const DataCorrectBackupFiles &) = default ;
      DataCorrectBackupFiles(DataCorrectBackupFiles &&) = default ;
      DataCorrectBackupFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataCorrectBackupFiles() = default ;
      DataCorrectBackupFiles& operator=(const DataCorrectBackupFiles &) = default ;
      DataCorrectBackupFiles& operator=(DataCorrectBackupFiles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileUrl_ == nullptr; };
      // fileUrl Field Functions 
      bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
      void deleteFileUrl() { this->fileUrl_ = nullptr;};
      inline const vector<string> & getFileUrl() const { DARABONBA_PTR_GET_CONST(fileUrl_, vector<string>) };
      inline vector<string> getFileUrl() { DARABONBA_PTR_GET(fileUrl_, vector<string>) };
      inline DataCorrectBackupFiles& setFileUrl(const vector<string> & fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };
      inline DataCorrectBackupFiles& setFileUrl(vector<string> && fileUrl) { DARABONBA_PTR_SET_RVALUE(fileUrl_, fileUrl) };


    protected:
      shared_ptr<vector<string>> fileUrl_ {};
    };

    virtual bool empty() const override { return this->dataCorrectBackupFiles_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // dataCorrectBackupFiles Field Functions 
    bool hasDataCorrectBackupFiles() const { return this->dataCorrectBackupFiles_ != nullptr;};
    void deleteDataCorrectBackupFiles() { this->dataCorrectBackupFiles_ = nullptr;};
    inline const GetDataCorrectBackupFilesResponseBody::DataCorrectBackupFiles & getDataCorrectBackupFiles() const { DARABONBA_PTR_GET_CONST(dataCorrectBackupFiles_, GetDataCorrectBackupFilesResponseBody::DataCorrectBackupFiles) };
    inline GetDataCorrectBackupFilesResponseBody::DataCorrectBackupFiles getDataCorrectBackupFiles() { DARABONBA_PTR_GET(dataCorrectBackupFiles_, GetDataCorrectBackupFilesResponseBody::DataCorrectBackupFiles) };
    inline GetDataCorrectBackupFilesResponseBody& setDataCorrectBackupFiles(const GetDataCorrectBackupFilesResponseBody::DataCorrectBackupFiles & dataCorrectBackupFiles) { DARABONBA_PTR_SET_VALUE(dataCorrectBackupFiles_, dataCorrectBackupFiles) };
    inline GetDataCorrectBackupFilesResponseBody& setDataCorrectBackupFiles(GetDataCorrectBackupFilesResponseBody::DataCorrectBackupFiles && dataCorrectBackupFiles) { DARABONBA_PTR_SET_RVALUE(dataCorrectBackupFiles_, dataCorrectBackupFiles) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataCorrectBackupFilesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataCorrectBackupFilesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataCorrectBackupFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataCorrectBackupFilesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The download URL of the backup file for the ticket.
    shared_ptr<GetDataCorrectBackupFilesResponseBody::DataCorrectBackupFiles> dataCorrectBackupFiles_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
