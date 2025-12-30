// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMININGTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMININGTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetMiningTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMiningTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMiningTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMiningTaskResultResponseBody() = default ;
    GetMiningTaskResultResponseBody(const GetMiningTaskResultResponseBody &) = default ;
    GetMiningTaskResultResponseBody(GetMiningTaskResultResponseBody &&) = default ;
    GetMiningTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMiningTaskResultResponseBody() = default ;
    GetMiningTaskResultResponseBody& operator=(const GetMiningTaskResultResponseBody &) = default ;
    GetMiningTaskResultResponseBody& operator=(GetMiningTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(FilePathList, filePathList_);
        DARABONBA_PTR_TO_JSON(FilePathMd, filePathMd_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(FilePathList, filePathList_);
        DARABONBA_PTR_FROM_JSON(FilePathMd, filePathMd_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
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
      class FilePathList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FilePathList& obj) { 
          DARABONBA_PTR_TO_JSON(FileType, fileType_);
          DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
        };
        friend void from_json(const Darabonba::Json& j, FilePathList& obj) { 
          DARABONBA_PTR_FROM_JSON(FileType, fileType_);
          DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
        };
        FilePathList() = default ;
        FilePathList(const FilePathList &) = default ;
        FilePathList(FilePathList &&) = default ;
        FilePathList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FilePathList() = default ;
        FilePathList& operator=(const FilePathList &) = default ;
        FilePathList& operator=(FilePathList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileType_ == nullptr
        && this->fileUrl_ == nullptr; };
        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
        inline FilePathList& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // fileUrl Field Functions 
        bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
        void deleteFileUrl() { this->fileUrl_ = nullptr;};
        inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
        inline FilePathList& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


      protected:
        shared_ptr<string> fileType_ {};
        shared_ptr<string> fileUrl_ {};
      };

      virtual bool empty() const override { return this->filePath_ == nullptr
        && this->filePathList_ == nullptr && this->filePathMd_ == nullptr && this->taskId_ == nullptr && this->taskStatus_ == nullptr; };
      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline Data& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // filePathList Field Functions 
      bool hasFilePathList() const { return this->filePathList_ != nullptr;};
      void deleteFilePathList() { this->filePathList_ = nullptr;};
      inline const vector<Data::FilePathList> & getFilePathList() const { DARABONBA_PTR_GET_CONST(filePathList_, vector<Data::FilePathList>) };
      inline vector<Data::FilePathList> getFilePathList() { DARABONBA_PTR_GET(filePathList_, vector<Data::FilePathList>) };
      inline Data& setFilePathList(const vector<Data::FilePathList> & filePathList) { DARABONBA_PTR_SET_VALUE(filePathList_, filePathList) };
      inline Data& setFilePathList(vector<Data::FilePathList> && filePathList) { DARABONBA_PTR_SET_RVALUE(filePathList_, filePathList) };


      // filePathMd Field Functions 
      bool hasFilePathMd() const { return this->filePathMd_ != nullptr;};
      void deleteFilePathMd() { this->filePathMd_ = nullptr;};
      inline string getFilePathMd() const { DARABONBA_PTR_GET_DEFAULT(filePathMd_, "") };
      inline Data& setFilePathMd(string filePathMd) { DARABONBA_PTR_SET_VALUE(filePathMd_, filePathMd) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline Data& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    protected:
      shared_ptr<string> filePath_ {};
      shared_ptr<vector<Data::FilePathList>> filePathList_ {};
      shared_ptr<string> filePathMd_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMiningTaskResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMiningTaskResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMiningTaskResultResponseBody::Data) };
    inline GetMiningTaskResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMiningTaskResultResponseBody::Data) };
    inline GetMiningTaskResultResponseBody& setData(const GetMiningTaskResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMiningTaskResultResponseBody& setData(GetMiningTaskResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMiningTaskResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMiningTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetMiningTaskResultResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetMiningTaskResultResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
