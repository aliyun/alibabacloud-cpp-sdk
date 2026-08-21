// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIIMAGEJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIIMAGEJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIImageJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIImageJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIImageJobList, AIImageJobList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIImageJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIImageJobList, AIImageJobList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAIImageJobsResponseBody() = default ;
    GetAIImageJobsResponseBody(const GetAIImageJobsResponseBody &) = default ;
    GetAIImageJobsResponseBody(GetAIImageJobsResponseBody &&) = default ;
    GetAIImageJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIImageJobsResponseBody() = default ;
    GetAIImageJobsResponseBody& operator=(const GetAIImageJobsResponseBody &) = default ;
    GetAIImageJobsResponseBody& operator=(GetAIImageJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AIImageJobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AIImageJobList& obj) { 
        DARABONBA_PTR_TO_JSON(AIImageResult, AIImageResult_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
        DARABONBA_PTR_TO_JSON(VideoId, videoId_);
      };
      friend void from_json(const Darabonba::Json& j, AIImageJobList& obj) { 
        DARABONBA_PTR_FROM_JSON(AIImageResult, AIImageResult_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
        DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
      };
      AIImageJobList() = default ;
      AIImageJobList(const AIImageJobList &) = default ;
      AIImageJobList(AIImageJobList &&) = default ;
      AIImageJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AIImageJobList() = default ;
      AIImageJobList& operator=(const AIImageJobList &) = default ;
      AIImageJobList& operator=(AIImageJobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->AIImageResult_ == nullptr
        && this->code_ == nullptr && this->creationTime_ == nullptr && this->jobId_ == nullptr && this->message_ == nullptr && this->status_ == nullptr
        && this->templateConfig_ == nullptr && this->templateId_ == nullptr && this->userData_ == nullptr && this->videoId_ == nullptr; };
      // AIImageResult Field Functions 
      bool hasAIImageResult() const { return this->AIImageResult_ != nullptr;};
      void deleteAIImageResult() { this->AIImageResult_ = nullptr;};
      inline string getAIImageResult() const { DARABONBA_PTR_GET_DEFAULT(AIImageResult_, "") };
      inline AIImageJobList& setAIImageResult(string AIImageResult) { DARABONBA_PTR_SET_VALUE(AIImageResult_, AIImageResult) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline AIImageJobList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline AIImageJobList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline AIImageJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline AIImageJobList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AIImageJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateConfig Field Functions 
      bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
      void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
      inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
      inline AIImageJobList& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline AIImageJobList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline AIImageJobList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      // videoId Field Functions 
      bool hasVideoId() const { return this->videoId_ != nullptr;};
      void deleteVideoId() { this->videoId_ = nullptr;};
      inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
      inline AIImageJobList& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    protected:
      // The OSS URL of the AI image.
      // >This is the task result. The URL does not contain complete authentication information. To obtain authentication information, generate it yourself or call the [ListAIImage](https://help.aliyun.com/document_detail/186924.html) operation to retrieve the media asset result.
      shared_ptr<string> AIImageResult_ {};
      // The error code.
      shared_ptr<string> code_ {};
      // The time when the AI image processing task was created. The time is in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format (UTC).
      shared_ptr<string> creationTime_ {};
      // The ID of the AI image processing task.
      shared_ptr<string> jobId_ {};
      // The error message.
      shared_ptr<string> message_ {};
      // The task status. Valid values:
      // - **success**: The task is successful.
      // - **fail**: The task failed.
      shared_ptr<string> status_ {};
      // The snapshot of the configuration information of the specified template when the task was submitted.
      shared_ptr<string> templateConfig_ {};
      // The AI template ID.
      shared_ptr<string> templateId_ {};
      // The custom settings.
      // - The value must be a JSON string.
      // - The value must contain the MessageCallback or Extend parameter.
      // - The maximum length is 512 bytes.
      // 
      // For more information about the parameter structure, see [UserData](https://help.aliyun.com/document_detail/86952.html).
      shared_ptr<string> userData_ {};
      // The video ID.
      shared_ptr<string> videoId_ {};
    };

    virtual bool empty() const override { return this->AIImageJobList_ == nullptr
        && this->requestId_ == nullptr; };
    // AIImageJobList Field Functions 
    bool hasAIImageJobList() const { return this->AIImageJobList_ != nullptr;};
    void deleteAIImageJobList() { this->AIImageJobList_ = nullptr;};
    inline const vector<GetAIImageJobsResponseBody::AIImageJobList> & getAIImageJobList() const { DARABONBA_PTR_GET_CONST(AIImageJobList_, vector<GetAIImageJobsResponseBody::AIImageJobList>) };
    inline vector<GetAIImageJobsResponseBody::AIImageJobList> getAIImageJobList() { DARABONBA_PTR_GET(AIImageJobList_, vector<GetAIImageJobsResponseBody::AIImageJobList>) };
    inline GetAIImageJobsResponseBody& setAIImageJobList(const vector<GetAIImageJobsResponseBody::AIImageJobList> & aIImageJobList) { DARABONBA_PTR_SET_VALUE(AIImageJobList_, aIImageJobList) };
    inline GetAIImageJobsResponseBody& setAIImageJobList(vector<GetAIImageJobsResponseBody::AIImageJobList> && aIImageJobList) { DARABONBA_PTR_SET_RVALUE(AIImageJobList_, aIImageJobList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAIImageJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of AI image processing tasks.
    shared_ptr<vector<GetAIImageJobsResponseBody::AIImageJobList>> AIImageJobList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
