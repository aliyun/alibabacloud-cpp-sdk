// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEDETECTIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEDETECTIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateImageDetectionTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageDetectionTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(retryAble, retryAble_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageDetectionTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(retryAble, retryAble_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreateImageDetectionTaskResponseBody() = default ;
    CreateImageDetectionTaskResponseBody(const CreateImageDetectionTaskResponseBody &) = default ;
    CreateImageDetectionTaskResponseBody(CreateImageDetectionTaskResponseBody &&) = default ;
    CreateImageDetectionTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageDetectionTaskResponseBody() = default ;
    CreateImageDetectionTaskResponseBody& operator=(const CreateImageDetectionTaskResponseBody &) = default ;
    CreateImageDetectionTaskResponseBody& operator=(CreateImageDetectionTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(fileInfo, fileInfo_);
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(fileInfo, fileInfo_);
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
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
      class FileInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileInfo& obj) { 
          DARABONBA_PTR_TO_JSON(fileId, fileId_);
          DARABONBA_PTR_TO_JSON(fileName, fileName_);
          DARABONBA_PTR_TO_JSON(fileTraceId, fileTraceId_);
          DARABONBA_PTR_TO_JSON(ossKey, ossKey_);
        };
        friend void from_json(const Darabonba::Json& j, FileInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(fileId, fileId_);
          DARABONBA_PTR_FROM_JSON(fileName, fileName_);
          DARABONBA_PTR_FROM_JSON(fileTraceId, fileTraceId_);
          DARABONBA_PTR_FROM_JSON(ossKey, ossKey_);
        };
        FileInfo() = default ;
        FileInfo(const FileInfo &) = default ;
        FileInfo(FileInfo &&) = default ;
        FileInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileInfo() = default ;
        FileInfo& operator=(const FileInfo &) = default ;
        FileInfo& operator=(FileInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileId_ == nullptr
        && this->fileName_ == nullptr && this->fileTraceId_ == nullptr && this->ossKey_ == nullptr; };
        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
        inline FileInfo& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline FileInfo& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileTraceId Field Functions 
        bool hasFileTraceId() const { return this->fileTraceId_ != nullptr;};
        void deleteFileTraceId() { this->fileTraceId_ = nullptr;};
        inline string getFileTraceId() const { DARABONBA_PTR_GET_DEFAULT(fileTraceId_, "") };
        inline FileInfo& setFileTraceId(string fileTraceId) { DARABONBA_PTR_SET_VALUE(fileTraceId_, fileTraceId) };


        // ossKey Field Functions 
        bool hasOssKey() const { return this->ossKey_ != nullptr;};
        void deleteOssKey() { this->ossKey_ = nullptr;};
        inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
        inline FileInfo& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


      protected:
        shared_ptr<string> fileId_ {};
        shared_ptr<string> fileName_ {};
        shared_ptr<string> fileTraceId_ {};
        shared_ptr<string> ossKey_ {};
      };

      virtual bool empty() const override { return this->fileInfo_ == nullptr
        && this->requestId_ == nullptr && this->taskId_ == nullptr; };
      // fileInfo Field Functions 
      bool hasFileInfo() const { return this->fileInfo_ != nullptr;};
      void deleteFileInfo() { this->fileInfo_ = nullptr;};
      inline const Data::FileInfo & getFileInfo() const { DARABONBA_PTR_GET_CONST(fileInfo_, Data::FileInfo) };
      inline Data::FileInfo getFileInfo() { DARABONBA_PTR_GET(fileInfo_, Data::FileInfo) };
      inline Data& setFileInfo(const Data::FileInfo & fileInfo) { DARABONBA_PTR_SET_VALUE(fileInfo_, fileInfo) };
      inline Data& setFileInfo(Data::FileInfo && fileInfo) { DARABONBA_PTR_SET_RVALUE(fileInfo_, fileInfo) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<Data::FileInfo> fileInfo_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->retryAble_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateImageDetectionTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateImageDetectionTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateImageDetectionTaskResponseBody::Data) };
    inline CreateImageDetectionTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateImageDetectionTaskResponseBody::Data) };
    inline CreateImageDetectionTaskResponseBody& setData(const CreateImageDetectionTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateImageDetectionTaskResponseBody& setData(CreateImageDetectionTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateImageDetectionTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // retryAble Field Functions 
    bool hasRetryAble() const { return this->retryAble_ != nullptr;};
    void deleteRetryAble() { this->retryAble_ = nullptr;};
    inline bool getRetryAble() const { DARABONBA_PTR_GET_DEFAULT(retryAble_, false) };
    inline CreateImageDetectionTaskResponseBody& setRetryAble(bool retryAble) { DARABONBA_PTR_SET_VALUE(retryAble_, retryAble) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateImageDetectionTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<CreateImageDetectionTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<bool> retryAble_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
