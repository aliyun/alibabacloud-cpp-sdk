// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEUPLOADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEUPLOADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListFileUploadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileUploadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileUploadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListFileUploadResponseBody() = default ;
    ListFileUploadResponseBody(const ListFileUploadResponseBody &) = default ;
    ListFileUploadResponseBody(ListFileUploadResponseBody &&) = default ;
    ListFileUploadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileUploadResponseBody() = default ;
    ListFileUploadResponseBody& operator=(const ListFileUploadResponseBody &) = default ;
    ListFileUploadResponseBody& operator=(ListFileUploadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunParentUid, aliyunParentUid_);
        DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_TO_JSON(DownloadLink, downloadLink_);
        DARABONBA_PTR_TO_JSON(FileCategory, fileCategory_);
        DARABONBA_PTR_TO_JSON(FileFrom, fileFrom_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(FileType, fileType_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(IntranetDownloadLink, intranetDownloadLink_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(UploadLocation, uploadLocation_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunParentUid, aliyunParentUid_);
        DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_FROM_JSON(DownloadLink, downloadLink_);
        DARABONBA_PTR_FROM_JSON(FileCategory, fileCategory_);
        DARABONBA_PTR_FROM_JSON(FileFrom, fileFrom_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(FileType, fileType_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(IntranetDownloadLink, intranetDownloadLink_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(UploadLocation, uploadLocation_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliyunParentUid_ == nullptr
        && this->aliyunUid_ == nullptr && this->downloadLink_ == nullptr && this->fileCategory_ == nullptr && this->fileFrom_ == nullptr && this->fileId_ == nullptr
        && this->fileName_ == nullptr && this->fileSize_ == nullptr && this->fileType_ == nullptr && this->gmtCreated_ == nullptr && this->intranetDownloadLink_ == nullptr
        && this->region_ == nullptr && this->sessionId_ == nullptr && this->uploadLocation_ == nullptr; };
      // aliyunParentUid Field Functions 
      bool hasAliyunParentUid() const { return this->aliyunParentUid_ != nullptr;};
      void deleteAliyunParentUid() { this->aliyunParentUid_ = nullptr;};
      inline string getAliyunParentUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunParentUid_, "") };
      inline Data& setAliyunParentUid(string aliyunParentUid) { DARABONBA_PTR_SET_VALUE(aliyunParentUid_, aliyunParentUid) };


      // aliyunUid Field Functions 
      bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
      void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
      inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
      inline Data& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


      // downloadLink Field Functions 
      bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
      void deleteDownloadLink() { this->downloadLink_ = nullptr;};
      inline string getDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
      inline Data& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


      // fileCategory Field Functions 
      bool hasFileCategory() const { return this->fileCategory_ != nullptr;};
      void deleteFileCategory() { this->fileCategory_ = nullptr;};
      inline string getFileCategory() const { DARABONBA_PTR_GET_DEFAULT(fileCategory_, "") };
      inline Data& setFileCategory(string fileCategory) { DARABONBA_PTR_SET_VALUE(fileCategory_, fileCategory) };


      // fileFrom Field Functions 
      bool hasFileFrom() const { return this->fileFrom_ != nullptr;};
      void deleteFileFrom() { this->fileFrom_ = nullptr;};
      inline string getFileFrom() const { DARABONBA_PTR_GET_DEFAULT(fileFrom_, "") };
      inline Data& setFileFrom(string fileFrom) { DARABONBA_PTR_SET_VALUE(fileFrom_, fileFrom) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Data& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Data& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
      inline Data& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // fileType Field Functions 
      bool hasFileType() const { return this->fileType_ != nullptr;};
      void deleteFileType() { this->fileType_ = nullptr;};
      inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
      inline Data& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Data& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // intranetDownloadLink Field Functions 
      bool hasIntranetDownloadLink() const { return this->intranetDownloadLink_ != nullptr;};
      void deleteIntranetDownloadLink() { this->intranetDownloadLink_ = nullptr;};
      inline string getIntranetDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(intranetDownloadLink_, "") };
      inline Data& setIntranetDownloadLink(string intranetDownloadLink) { DARABONBA_PTR_SET_VALUE(intranetDownloadLink_, intranetDownloadLink) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // uploadLocation Field Functions 
      bool hasUploadLocation() const { return this->uploadLocation_ != nullptr;};
      void deleteUploadLocation() { this->uploadLocation_ = nullptr;};
      inline string getUploadLocation() const { DARABONBA_PTR_GET_DEFAULT(uploadLocation_, "") };
      inline Data& setUploadLocation(string uploadLocation) { DARABONBA_PTR_SET_VALUE(uploadLocation_, uploadLocation) };


    protected:
      shared_ptr<string> aliyunParentUid_ {};
      shared_ptr<string> aliyunUid_ {};
      shared_ptr<string> downloadLink_ {};
      shared_ptr<string> fileCategory_ {};
      shared_ptr<string> fileFrom_ {};
      shared_ptr<string> fileId_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<int64_t> fileSize_ {};
      shared_ptr<string> fileType_ {};
      shared_ptr<string> gmtCreated_ {};
      shared_ptr<string> intranetDownloadLink_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> uploadLocation_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListFileUploadResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListFileUploadResponseBody::Data>) };
    inline vector<ListFileUploadResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListFileUploadResponseBody::Data>) };
    inline ListFileUploadResponseBody& setData(const vector<ListFileUploadResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListFileUploadResponseBody& setData(vector<ListFileUploadResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListFileUploadResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListFileUploadResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFileUploadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListFileUploadResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<ListFileUploadResponseBody::Data>> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
