// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class GetVideoTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Videos, videos_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Videos, videos_);
    };
    GetVideoTaskResultResponseBody() = default ;
    GetVideoTaskResultResponseBody(const GetVideoTaskResultResponseBody &) = default ;
    GetVideoTaskResultResponseBody(GetVideoTaskResultResponseBody &&) = default ;
    GetVideoTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoTaskResultResponseBody() = default ;
    GetVideoTaskResultResponseBody& operator=(const GetVideoTaskResultResponseBody &) = default ;
    GetVideoTaskResultResponseBody& operator=(GetVideoTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Videos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Videos& obj) { 
        DARABONBA_PTR_TO_JSON(ObjectKey, objectKey_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Videos& obj) { 
        DARABONBA_PTR_FROM_JSON(ObjectKey, objectKey_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      Videos() = default ;
      Videos(const Videos &) = default ;
      Videos(Videos &&) = default ;
      Videos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Videos() = default ;
      Videos& operator=(const Videos &) = default ;
      Videos& operator=(Videos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->objectKey_ == nullptr
        && this->url_ == nullptr; };
      // objectKey Field Functions 
      bool hasObjectKey() const { return this->objectKey_ != nullptr;};
      void deleteObjectKey() { this->objectKey_ = nullptr;};
      inline string getObjectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
      inline Videos& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Videos& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The OSS key of the output object.
      shared_ptr<string> objectKey_ {};
      // The presigned download URL of the video stored in OSS after C2PA signing.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr
        && this->taskId_ == nullptr && this->videos_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetVideoTaskResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetVideoTaskResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetVideoTaskResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVideoTaskResultResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetVideoTaskResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetVideoTaskResultResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // videos Field Functions 
    bool hasVideos() const { return this->videos_ != nullptr;};
    void deleteVideos() { this->videos_ = nullptr;};
    inline const vector<GetVideoTaskResultResponseBody::Videos> & getVideos() const { DARABONBA_PTR_GET_CONST(videos_, vector<GetVideoTaskResultResponseBody::Videos>) };
    inline vector<GetVideoTaskResultResponseBody::Videos> getVideos() { DARABONBA_PTR_GET(videos_, vector<GetVideoTaskResultResponseBody::Videos>) };
    inline GetVideoTaskResultResponseBody& setVideos(const vector<GetVideoTaskResultResponseBody::Videos> & videos) { DARABONBA_PTR_SET_VALUE(videos_, videos) };
    inline GetVideoTaskResultResponseBody& setVideos(vector<GetVideoTaskResultResponseBody::Videos> && videos) { DARABONBA_PTR_SET_RVALUE(videos_, videos) };


  protected:
    // **Business error code.** Returns "OK" if the request succeeds.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The cause of the failure. This field is returned only when the task status is failed.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The task status. Valid values: running, succeeded, and failed. Set the polling interval to at least 5 seconds.
    shared_ptr<string> status_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The task ID.
    shared_ptr<string> taskId_ {};
    // The list of video information.
    shared_ptr<vector<GetVideoTaskResultResponseBody::Videos>> videos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
