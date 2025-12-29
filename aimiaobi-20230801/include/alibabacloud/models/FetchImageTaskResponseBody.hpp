// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHIMAGETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FETCHIMAGETASKRESPONSEBODY_HPP_
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
  class FetchImageTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchImageTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, FetchImageTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    FetchImageTaskResponseBody() = default ;
    FetchImageTaskResponseBody(const FetchImageTaskResponseBody &) = default ;
    FetchImageTaskResponseBody(FetchImageTaskResponseBody &&) = default ;
    FetchImageTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchImageTaskResponseBody() = default ;
    FetchImageTaskResponseBody& operator=(const FetchImageTaskResponseBody &) = default ;
    FetchImageTaskResponseBody& operator=(FetchImageTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TaskInfoList, taskInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskInfoList, taskInfoList_);
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
      class TaskInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ImageList, imageList_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        };
        friend void from_json(const Darabonba::Json& j, TaskInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ImageList, imageList_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        };
        TaskInfoList() = default ;
        TaskInfoList(const TaskInfoList &) = default ;
        TaskInfoList(TaskInfoList &&) = default ;
        TaskInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskInfoList() = default ;
        TaskInfoList& operator=(const TaskInfoList &) = default ;
        TaskInfoList& operator=(TaskInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ImageList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ImageList& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Message, message_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, ImageList& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Message, message_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          ImageList() = default ;
          ImageList(const ImageList &) = default ;
          ImageList(ImageList &&) = default ;
          ImageList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ImageList() = default ;
          ImageList& operator=(const ImageList &) = default ;
          ImageList& operator=(ImageList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->url_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline ImageList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline ImageList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline ImageList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> code_ {};
          shared_ptr<string> message_ {};
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->id_ == nullptr
        && this->imageList_ == nullptr && this->taskId_ == nullptr && this->taskStatus_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline TaskInfoList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // imageList Field Functions 
        bool hasImageList() const { return this->imageList_ != nullptr;};
        void deleteImageList() { this->imageList_ = nullptr;};
        inline const vector<TaskInfoList::ImageList> & getImageList() const { DARABONBA_PTR_GET_CONST(imageList_, vector<TaskInfoList::ImageList>) };
        inline vector<TaskInfoList::ImageList> getImageList() { DARABONBA_PTR_GET(imageList_, vector<TaskInfoList::ImageList>) };
        inline TaskInfoList& setImageList(const vector<TaskInfoList::ImageList> & imageList) { DARABONBA_PTR_SET_VALUE(imageList_, imageList) };
        inline TaskInfoList& setImageList(vector<TaskInfoList::ImageList> && imageList) { DARABONBA_PTR_SET_RVALUE(imageList_, imageList) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline TaskInfoList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
        inline TaskInfoList& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      protected:
        shared_ptr<int64_t> id_ {};
        shared_ptr<vector<TaskInfoList::ImageList>> imageList_ {};
        shared_ptr<string> taskId_ {};
        shared_ptr<string> taskStatus_ {};
      };

      virtual bool empty() const override { return this->taskInfoList_ == nullptr; };
      // taskInfoList Field Functions 
      bool hasTaskInfoList() const { return this->taskInfoList_ != nullptr;};
      void deleteTaskInfoList() { this->taskInfoList_ = nullptr;};
      inline const vector<Data::TaskInfoList> & getTaskInfoList() const { DARABONBA_PTR_GET_CONST(taskInfoList_, vector<Data::TaskInfoList>) };
      inline vector<Data::TaskInfoList> getTaskInfoList() { DARABONBA_PTR_GET(taskInfoList_, vector<Data::TaskInfoList>) };
      inline Data& setTaskInfoList(const vector<Data::TaskInfoList> & taskInfoList) { DARABONBA_PTR_SET_VALUE(taskInfoList_, taskInfoList) };
      inline Data& setTaskInfoList(vector<Data::TaskInfoList> && taskInfoList) { DARABONBA_PTR_SET_RVALUE(taskInfoList_, taskInfoList) };


    protected:
      shared_ptr<vector<Data::TaskInfoList>> taskInfoList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FetchImageTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const FetchImageTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, FetchImageTaskResponseBody::Data) };
    inline FetchImageTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, FetchImageTaskResponseBody::Data) };
    inline FetchImageTaskResponseBody& setData(const FetchImageTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline FetchImageTaskResponseBody& setData(FetchImageTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline FetchImageTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FetchImageTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FetchImageTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FetchImageTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<FetchImageTaskResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
