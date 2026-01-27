// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWMEMBEDTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWMEMBEDTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetWmEmbedTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWmEmbedTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWmEmbedTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetWmEmbedTaskResponseBody() = default ;
    GetWmEmbedTaskResponseBody(const GetWmEmbedTaskResponseBody &) = default ;
    GetWmEmbedTaskResponseBody(GetWmEmbedTaskResponseBody &&) = default ;
    GetWmEmbedTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWmEmbedTaskResponseBody() = default ;
    GetWmEmbedTaskResponseBody& operator=(const GetWmEmbedTaskResponseBody &) = default ;
    GetWmEmbedTaskResponseBody& operator=(GetWmEmbedTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_TO_JSON(FileUrlExp, fileUrlExp_);
        DARABONBA_PTR_TO_JSON(Filename, filename_);
        DARABONBA_PTR_TO_JSON(OutFileHashMd5, outFileHashMd5_);
        DARABONBA_PTR_TO_JSON(OutFileSize, outFileSize_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_FROM_JSON(FileUrlExp, fileUrlExp_);
        DARABONBA_PTR_FROM_JSON(Filename, filename_);
        DARABONBA_PTR_FROM_JSON(OutFileHashMd5, outFileHashMd5_);
        DARABONBA_PTR_FROM_JSON(OutFileSize, outFileSize_);
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
      virtual bool empty() const override { return this->fileUrl_ == nullptr
        && this->fileUrlExp_ == nullptr && this->filename_ == nullptr && this->outFileHashMd5_ == nullptr && this->outFileSize_ == nullptr && this->taskId_ == nullptr
        && this->taskStatus_ == nullptr; };
      // fileUrl Field Functions 
      bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
      void deleteFileUrl() { this->fileUrl_ = nullptr;};
      inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
      inline Data& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


      // fileUrlExp Field Functions 
      bool hasFileUrlExp() const { return this->fileUrlExp_ != nullptr;};
      void deleteFileUrlExp() { this->fileUrlExp_ = nullptr;};
      inline string getFileUrlExp() const { DARABONBA_PTR_GET_DEFAULT(fileUrlExp_, "") };
      inline Data& setFileUrlExp(string fileUrlExp) { DARABONBA_PTR_SET_VALUE(fileUrlExp_, fileUrlExp) };


      // filename Field Functions 
      bool hasFilename() const { return this->filename_ != nullptr;};
      void deleteFilename() { this->filename_ = nullptr;};
      inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
      inline Data& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


      // outFileHashMd5 Field Functions 
      bool hasOutFileHashMd5() const { return this->outFileHashMd5_ != nullptr;};
      void deleteOutFileHashMd5() { this->outFileHashMd5_ = nullptr;};
      inline string getOutFileHashMd5() const { DARABONBA_PTR_GET_DEFAULT(outFileHashMd5_, "") };
      inline Data& setOutFileHashMd5(string outFileHashMd5) { DARABONBA_PTR_SET_VALUE(outFileHashMd5_, outFileHashMd5) };


      // outFileSize Field Functions 
      bool hasOutFileSize() const { return this->outFileSize_ != nullptr;};
      void deleteOutFileSize() { this->outFileSize_ = nullptr;};
      inline int64_t getOutFileSize() const { DARABONBA_PTR_GET_DEFAULT(outFileSize_, 0L) };
      inline Data& setOutFileSize(int64_t outFileSize) { DARABONBA_PTR_SET_VALUE(outFileSize_, outFileSize) };


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
      shared_ptr<string> fileUrl_ {};
      shared_ptr<string> fileUrlExp_ {};
      shared_ptr<string> filename_ {};
      shared_ptr<string> outFileHashMd5_ {};
      shared_ptr<int64_t> outFileSize_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskStatus_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetWmEmbedTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetWmEmbedTaskResponseBody::Data) };
    inline GetWmEmbedTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetWmEmbedTaskResponseBody::Data) };
    inline GetWmEmbedTaskResponseBody& setData(const GetWmEmbedTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetWmEmbedTaskResponseBody& setData(GetWmEmbedTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWmEmbedTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetWmEmbedTaskResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
