// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIIMAGEJOBSRESPONSEBODYAIIMAGEJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAIIMAGEJOBSRESPONSEBODYAIIMAGEJOBLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIImageJobsResponseBodyAIImageJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIImageJobsResponseBodyAIImageJobList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetAIImageJobsResponseBodyAIImageJobList& obj) { 
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
    GetAIImageJobsResponseBodyAIImageJobList() = default ;
    GetAIImageJobsResponseBodyAIImageJobList(const GetAIImageJobsResponseBodyAIImageJobList &) = default ;
    GetAIImageJobsResponseBodyAIImageJobList(GetAIImageJobsResponseBodyAIImageJobList &&) = default ;
    GetAIImageJobsResponseBodyAIImageJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIImageJobsResponseBodyAIImageJobList() = default ;
    GetAIImageJobsResponseBodyAIImageJobList& operator=(const GetAIImageJobsResponseBodyAIImageJobList &) = default ;
    GetAIImageJobsResponseBodyAIImageJobList& operator=(GetAIImageJobsResponseBodyAIImageJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AIImageResult_ == nullptr
        && return this->code_ == nullptr && return this->creationTime_ == nullptr && return this->jobId_ == nullptr && return this->message_ == nullptr && return this->status_ == nullptr
        && return this->templateConfig_ == nullptr && return this->templateId_ == nullptr && return this->userData_ == nullptr && return this->videoId_ == nullptr; };
    // AIImageResult Field Functions 
    bool hasAIImageResult() const { return this->AIImageResult_ != nullptr;};
    void deleteAIImageResult() { this->AIImageResult_ = nullptr;};
    inline string AIImageResult() const { DARABONBA_PTR_GET_DEFAULT(AIImageResult_, "") };
    inline GetAIImageJobsResponseBodyAIImageJobList& setAIImageResult(string AIImageResult) { DARABONBA_PTR_SET_VALUE(AIImageResult_, AIImageResult) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAIImageJobsResponseBodyAIImageJobList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetAIImageJobsResponseBodyAIImageJobList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetAIImageJobsResponseBodyAIImageJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAIImageJobsResponseBodyAIImageJobList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAIImageJobsResponseBodyAIImageJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string templateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline GetAIImageJobsResponseBodyAIImageJobList& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetAIImageJobsResponseBodyAIImageJobList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetAIImageJobsResponseBodyAIImageJobList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetAIImageJobsResponseBodyAIImageJobList& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The Object Storage Service (OSS) URL of the image file.
    // 
    // > This parameter does not include the complete authentication information. To obtain the authentication information, you must generate a signed URL. Alternatively, you can call the [ListAIImageInfo](~~ListAIImageInfo~~) operation to obtain the image information.
    std::shared_ptr<string> AIImageResult_ = nullptr;
    // The error code.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the image AI processing job was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the image AI processing job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The status of the job. Valid values:
    // 
    // *   **success**
    // *   **fail**
    std::shared_ptr<string> status_ = nullptr;
    // The configurations of the AI template that was used to submit the job.
    std::shared_ptr<string> templateConfig_ = nullptr;
    // The ID of the AI template.
    std::shared_ptr<string> templateId_ = nullptr;
    // The user data.
    // 
    // *   The value must be a JSON string.
    // *   The MessageCallback or Extend parameter is returned.
    // *   The value contains a maximum of 512 bytes.
    // 
    // For more information, see the "UserData: specifies the custom configurations for media upload" section of the [Request parameters](https://help.aliyun.com/document_detail/86952.html) topic.
    std::shared_ptr<string> userData_ = nullptr;
    // The ID of the video.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
