// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMARTCLIPTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSMARTCLIPTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetSmartClipTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmartClipTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmartClipTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSmartClipTaskResponseBody() = default ;
    GetSmartClipTaskResponseBody(const GetSmartClipTaskResponseBody &) = default ;
    GetSmartClipTaskResponseBody(GetSmartClipTaskResponseBody &&) = default ;
    GetSmartClipTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmartClipTaskResponseBody() = default ;
    GetSmartClipTaskResponseBody& operator=(const GetSmartClipTaskResponseBody &) = default ;
    GetSmartClipTaskResponseBody& operator=(GetSmartClipTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubJobs, subJobs_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubJobs, subJobs_);
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
      class SubJobs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubJobs& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(FileAttr, fileAttr_);
          DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubJobId, subJobId_);
        };
        friend void from_json(const Darabonba::Json& j, SubJobs& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(FileAttr, fileAttr_);
          DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubJobId, subJobId_);
        };
        SubJobs() = default ;
        SubJobs(const SubJobs &) = default ;
        SubJobs(SubJobs &&) = default ;
        SubJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubJobs() = default ;
        SubJobs& operator=(const SubJobs &) = default ;
        SubJobs& operator=(SubJobs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FileAttr : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FileAttr& obj) { 
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(FileLength, fileLength_);
            DARABONBA_PTR_TO_JSON(FileName, fileName_);
            DARABONBA_PTR_TO_JSON(Height, height_);
            DARABONBA_PTR_TO_JSON(TmpUrl, tmpUrl_);
            DARABONBA_PTR_TO_JSON(Width, width_);
          };
          friend void from_json(const Darabonba::Json& j, FileAttr& obj) { 
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(FileLength, fileLength_);
            DARABONBA_PTR_FROM_JSON(FileName, fileName_);
            DARABONBA_PTR_FROM_JSON(Height, height_);
            DARABONBA_PTR_FROM_JSON(TmpUrl, tmpUrl_);
            DARABONBA_PTR_FROM_JSON(Width, width_);
          };
          FileAttr() = default ;
          FileAttr(const FileAttr &) = default ;
          FileAttr(FileAttr &&) = default ;
          FileAttr(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FileAttr() = default ;
          FileAttr& operator=(const FileAttr &) = default ;
          FileAttr& operator=(FileAttr &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->duration_ == nullptr
        && this->fileLength_ == nullptr && this->fileName_ == nullptr && this->height_ == nullptr && this->tmpUrl_ == nullptr && this->width_ == nullptr; };
          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
          inline FileAttr& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // fileLength Field Functions 
          bool hasFileLength() const { return this->fileLength_ != nullptr;};
          void deleteFileLength() { this->fileLength_ = nullptr;};
          inline string getFileLength() const { DARABONBA_PTR_GET_DEFAULT(fileLength_, "") };
          inline FileAttr& setFileLength(string fileLength) { DARABONBA_PTR_SET_VALUE(fileLength_, fileLength) };


          // fileName Field Functions 
          bool hasFileName() const { return this->fileName_ != nullptr;};
          void deleteFileName() { this->fileName_ = nullptr;};
          inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
          inline FileAttr& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


          // height Field Functions 
          bool hasHeight() const { return this->height_ != nullptr;};
          void deleteHeight() { this->height_ = nullptr;};
          inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
          inline FileAttr& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


          // tmpUrl Field Functions 
          bool hasTmpUrl() const { return this->tmpUrl_ != nullptr;};
          void deleteTmpUrl() { this->tmpUrl_ = nullptr;};
          inline string getTmpUrl() const { DARABONBA_PTR_GET_DEFAULT(tmpUrl_, "") };
          inline FileAttr& setTmpUrl(string tmpUrl) { DARABONBA_PTR_SET_VALUE(tmpUrl_, tmpUrl) };


          // width Field Functions 
          bool hasWidth() const { return this->width_ != nullptr;};
          void deleteWidth() { this->width_ = nullptr;};
          inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
          inline FileAttr& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        protected:
          shared_ptr<double> duration_ {};
          shared_ptr<string> fileLength_ {};
          shared_ptr<string> fileName_ {};
          shared_ptr<int32_t> height_ {};
          shared_ptr<string> tmpUrl_ {};
          shared_ptr<int32_t> width_ {};
        };

        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->fileAttr_ == nullptr && this->fileKey_ == nullptr && this->status_ == nullptr && this->subJobId_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline SubJobs& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // fileAttr Field Functions 
        bool hasFileAttr() const { return this->fileAttr_ != nullptr;};
        void deleteFileAttr() { this->fileAttr_ = nullptr;};
        inline const SubJobs::FileAttr & getFileAttr() const { DARABONBA_PTR_GET_CONST(fileAttr_, SubJobs::FileAttr) };
        inline SubJobs::FileAttr getFileAttr() { DARABONBA_PTR_GET(fileAttr_, SubJobs::FileAttr) };
        inline SubJobs& setFileAttr(const SubJobs::FileAttr & fileAttr) { DARABONBA_PTR_SET_VALUE(fileAttr_, fileAttr) };
        inline SubJobs& setFileAttr(SubJobs::FileAttr && fileAttr) { DARABONBA_PTR_SET_RVALUE(fileAttr_, fileAttr) };


        // fileKey Field Functions 
        bool hasFileKey() const { return this->fileKey_ != nullptr;};
        void deleteFileKey() { this->fileKey_ = nullptr;};
        inline string getFileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
        inline SubJobs& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline SubJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subJobId Field Functions 
        bool hasSubJobId() const { return this->subJobId_ != nullptr;};
        void deleteSubJobId() { this->subJobId_ = nullptr;};
        inline string getSubJobId() const { DARABONBA_PTR_GET_DEFAULT(subJobId_, "") };
        inline SubJobs& setSubJobId(string subJobId) { DARABONBA_PTR_SET_VALUE(subJobId_, subJobId) };


      protected:
        shared_ptr<string> errorMessage_ {};
        shared_ptr<SubJobs::FileAttr> fileAttr_ {};
        shared_ptr<string> fileKey_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> subJobId_ {};
      };

      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->status_ == nullptr && this->subJobs_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subJobs Field Functions 
      bool hasSubJobs() const { return this->subJobs_ != nullptr;};
      void deleteSubJobs() { this->subJobs_ = nullptr;};
      inline const vector<Data::SubJobs> & getSubJobs() const { DARABONBA_PTR_GET_CONST(subJobs_, vector<Data::SubJobs>) };
      inline vector<Data::SubJobs> getSubJobs() { DARABONBA_PTR_GET(subJobs_, vector<Data::SubJobs>) };
      inline Data& setSubJobs(const vector<Data::SubJobs> & subJobs) { DARABONBA_PTR_SET_VALUE(subJobs_, subJobs) };
      inline Data& setSubJobs(vector<Data::SubJobs> && subJobs) { DARABONBA_PTR_SET_RVALUE(subJobs_, subJobs) };


    protected:
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<Data::SubJobs>> subJobs_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSmartClipTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSmartClipTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSmartClipTaskResponseBody::Data) };
    inline GetSmartClipTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSmartClipTaskResponseBody::Data) };
    inline GetSmartClipTaskResponseBody& setData(const GetSmartClipTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSmartClipTaskResponseBody& setData(GetSmartClipTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetSmartClipTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSmartClipTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSmartClipTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSmartClipTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetSmartClipTaskResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
