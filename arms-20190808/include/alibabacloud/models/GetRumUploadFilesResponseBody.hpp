// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMUPLOADFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRUMUPLOADFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumUploadFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumUploadFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumUploadFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRumUploadFilesResponseBody() = default ;
    GetRumUploadFilesResponseBody(const GetRumUploadFilesResponseBody &) = default ;
    GetRumUploadFilesResponseBody(GetRumUploadFilesResponseBody &&) = default ;
    GetRumUploadFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumUploadFilesResponseBody() = default ;
    GetRumUploadFilesResponseBody& operator=(const GetRumUploadFilesResponseBody &) = default ;
    GetRumUploadFilesResponseBody& operator=(GetRumUploadFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FileList, fileList_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FileList, fileList_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
      class FileList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileList& obj) { 
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_ANY_TO_JSON(LastModifiedTime, lastModifiedTime_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
          DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        };
        friend void from_json(const Darabonba::Json& j, FileList& obj) { 
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_ANY_FROM_JSON(LastModifiedTime, lastModifiedTime_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
          DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
        };
        FileList() = default ;
        FileList(const FileList &) = default ;
        FileList(FileList &&) = default ;
        FileList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileList() = default ;
        FileList& operator=(const FileList &) = default ;
        FileList& operator=(FileList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileName_ == nullptr
        && this->lastModifiedTime_ == nullptr && this->size_ == nullptr && this->uuid_ == nullptr && this->versionId_ == nullptr; };
        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline FileList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // lastModifiedTime Field Functions 
        bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
        void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
        inline         const Darabonba::Json & getLastModifiedTime() const { DARABONBA_GET(lastModifiedTime_) };
        Darabonba::Json & getLastModifiedTime() { DARABONBA_GET(lastModifiedTime_) };
        inline FileList& setLastModifiedTime(const Darabonba::Json & lastModifiedTime) { DARABONBA_SET_VALUE(lastModifiedTime_, lastModifiedTime) };
        inline FileList& setLastModifiedTime(Darabonba::Json && lastModifiedTime) { DARABONBA_SET_RVALUE(lastModifiedTime_, lastModifiedTime) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
        inline FileList& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline FileList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


        // versionId Field Functions 
        bool hasVersionId() const { return this->versionId_ != nullptr;};
        void deleteVersionId() { this->versionId_ = nullptr;};
        inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
        inline FileList& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      protected:
        shared_ptr<string> fileName_ {};
        Darabonba::Json lastModifiedTime_ {};
        shared_ptr<string> size_ {};
        shared_ptr<string> uuid_ {};
        shared_ptr<string> versionId_ {};
      };

      virtual bool empty() const override { return this->fileList_ == nullptr
        && this->nextToken_ == nullptr; };
      // fileList Field Functions 
      bool hasFileList() const { return this->fileList_ != nullptr;};
      void deleteFileList() { this->fileList_ = nullptr;};
      inline const vector<Data::FileList> & getFileList() const { DARABONBA_PTR_GET_CONST(fileList_, vector<Data::FileList>) };
      inline vector<Data::FileList> getFileList() { DARABONBA_PTR_GET(fileList_, vector<Data::FileList>) };
      inline Data& setFileList(const vector<Data::FileList> & fileList) { DARABONBA_PTR_SET_VALUE(fileList_, fileList) };
      inline Data& setFileList(vector<Data::FileList> && fileList) { DARABONBA_PTR_SET_RVALUE(fileList_, fileList) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    protected:
      shared_ptr<vector<Data::FileList>> fileList_ {};
      shared_ptr<string> nextToken_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetRumUploadFilesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRumUploadFilesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRumUploadFilesResponseBody::Data) };
    inline GetRumUploadFilesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRumUploadFilesResponseBody::Data) };
    inline GetRumUploadFilesResponseBody& setData(const GetRumUploadFilesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRumUploadFilesResponseBody& setData(GetRumUploadFilesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetRumUploadFilesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRumUploadFilesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRumUploadFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRumUploadFilesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful. Other status codes indicate that the request failed.
    shared_ptr<int32_t> code_ {};
    // The queried files.
    shared_ptr<GetRumUploadFilesResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
