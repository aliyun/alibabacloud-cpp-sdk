// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCUPLOADVIDEORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASYNCUPLOADVIDEORESPONSEBODY_HPP_
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
  class AsyncUploadVideoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncUploadVideoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncUploadVideoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AsyncUploadVideoResponseBody() = default ;
    AsyncUploadVideoResponseBody(const AsyncUploadVideoResponseBody &) = default ;
    AsyncUploadVideoResponseBody(AsyncUploadVideoResponseBody &&) = default ;
    AsyncUploadVideoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncUploadVideoResponseBody() = default ;
    AsyncUploadVideoResponseBody& operator=(const AsyncUploadVideoResponseBody &) = default ;
    AsyncUploadVideoResponseBody& operator=(AsyncUploadVideoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(VideoInfos, videoInfos_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(VideoInfos, videoInfos_);
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
      class VideoInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoInfos& obj) { 
          DARABONBA_PTR_TO_JSON(VideoExtraInfo, videoExtraInfo_);
          DARABONBA_PTR_TO_JSON(VideoId, videoId_);
          DARABONBA_PTR_TO_JSON(VideoName, videoName_);
          DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
        };
        friend void from_json(const Darabonba::Json& j, VideoInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(VideoExtraInfo, videoExtraInfo_);
          DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
          DARABONBA_PTR_FROM_JSON(VideoName, videoName_);
          DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
        };
        VideoInfos() = default ;
        VideoInfos(const VideoInfos &) = default ;
        VideoInfos(VideoInfos &&) = default ;
        VideoInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VideoInfos() = default ;
        VideoInfos& operator=(const VideoInfos &) = default ;
        VideoInfos& operator=(VideoInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->videoExtraInfo_ == nullptr
        && this->videoId_ == nullptr && this->videoName_ == nullptr && this->videoUrl_ == nullptr; };
        // videoExtraInfo Field Functions 
        bool hasVideoExtraInfo() const { return this->videoExtraInfo_ != nullptr;};
        void deleteVideoExtraInfo() { this->videoExtraInfo_ = nullptr;};
        inline string getVideoExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(videoExtraInfo_, "") };
        inline VideoInfos& setVideoExtraInfo(string videoExtraInfo) { DARABONBA_PTR_SET_VALUE(videoExtraInfo_, videoExtraInfo) };


        // videoId Field Functions 
        bool hasVideoId() const { return this->videoId_ != nullptr;};
        void deleteVideoId() { this->videoId_ = nullptr;};
        inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
        inline VideoInfos& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


        // videoName Field Functions 
        bool hasVideoName() const { return this->videoName_ != nullptr;};
        void deleteVideoName() { this->videoName_ = nullptr;};
        inline string getVideoName() const { DARABONBA_PTR_GET_DEFAULT(videoName_, "") };
        inline VideoInfos& setVideoName(string videoName) { DARABONBA_PTR_SET_VALUE(videoName_, videoName) };


        // videoUrl Field Functions 
        bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
        void deleteVideoUrl() { this->videoUrl_ = nullptr;};
        inline string getVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
        inline VideoInfos& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


      protected:
        shared_ptr<string> videoExtraInfo_ {};
        shared_ptr<string> videoId_ {};
        shared_ptr<string> videoName_ {};
        shared_ptr<string> videoUrl_ {};
      };

      virtual bool empty() const override { return this->taskId_ == nullptr
        && this->videoInfos_ == nullptr; };
      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // videoInfos Field Functions 
      bool hasVideoInfos() const { return this->videoInfos_ != nullptr;};
      void deleteVideoInfos() { this->videoInfos_ = nullptr;};
      inline const vector<Data::VideoInfos> & getVideoInfos() const { DARABONBA_PTR_GET_CONST(videoInfos_, vector<Data::VideoInfos>) };
      inline vector<Data::VideoInfos> getVideoInfos() { DARABONBA_PTR_GET(videoInfos_, vector<Data::VideoInfos>) };
      inline Data& setVideoInfos(const vector<Data::VideoInfos> & videoInfos) { DARABONBA_PTR_SET_VALUE(videoInfos_, videoInfos) };
      inline Data& setVideoInfos(vector<Data::VideoInfos> && videoInfos) { DARABONBA_PTR_SET_RVALUE(videoInfos_, videoInfos) };


    protected:
      shared_ptr<string> taskId_ {};
      shared_ptr<vector<Data::VideoInfos>> videoInfos_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AsyncUploadVideoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AsyncUploadVideoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AsyncUploadVideoResponseBody::Data) };
    inline AsyncUploadVideoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AsyncUploadVideoResponseBody::Data) };
    inline AsyncUploadVideoResponseBody& setData(const AsyncUploadVideoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AsyncUploadVideoResponseBody& setData(AsyncUploadVideoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline AsyncUploadVideoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AsyncUploadVideoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AsyncUploadVideoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AsyncUploadVideoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<AsyncUploadVideoResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
