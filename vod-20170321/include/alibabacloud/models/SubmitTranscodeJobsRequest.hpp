// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitTranscodeJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptConfig, encryptConfig_);
      DARABONBA_PTR_TO_JSON(OverrideParams, overrideParams_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TemplateGroupId, templateGroupId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptConfig, encryptConfig_);
      DARABONBA_PTR_FROM_JSON(OverrideParams, overrideParams_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TemplateGroupId, templateGroupId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    SubmitTranscodeJobsRequest() = default ;
    SubmitTranscodeJobsRequest(const SubmitTranscodeJobsRequest &) = default ;
    SubmitTranscodeJobsRequest(SubmitTranscodeJobsRequest &&) = default ;
    SubmitTranscodeJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobsRequest() = default ;
    SubmitTranscodeJobsRequest& operator=(const SubmitTranscodeJobsRequest &) = default ;
    SubmitTranscodeJobsRequest& operator=(SubmitTranscodeJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encryptConfig_ == nullptr
        && this->overrideParams_ == nullptr && this->pipelineId_ == nullptr && this->priority_ == nullptr && this->referenceId_ == nullptr && this->sessionId_ == nullptr
        && this->templateGroupId_ == nullptr && this->userData_ == nullptr && this->videoId_ == nullptr; };
    // encryptConfig Field Functions 
    bool hasEncryptConfig() const { return this->encryptConfig_ != nullptr;};
    void deleteEncryptConfig() { this->encryptConfig_ = nullptr;};
    inline string getEncryptConfig() const { DARABONBA_PTR_GET_DEFAULT(encryptConfig_, "") };
    inline SubmitTranscodeJobsRequest& setEncryptConfig(string encryptConfig) { DARABONBA_PTR_SET_VALUE(encryptConfig_, encryptConfig) };


    // overrideParams Field Functions 
    bool hasOverrideParams() const { return this->overrideParams_ != nullptr;};
    void deleteOverrideParams() { this->overrideParams_ = nullptr;};
    inline string getOverrideParams() const { DARABONBA_PTR_GET_DEFAULT(overrideParams_, "") };
    inline SubmitTranscodeJobsRequest& setOverrideParams(string overrideParams) { DARABONBA_PTR_SET_VALUE(overrideParams_, overrideParams) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline SubmitTranscodeJobsRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline SubmitTranscodeJobsRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline SubmitTranscodeJobsRequest& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SubmitTranscodeJobsRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // templateGroupId Field Functions 
    bool hasTemplateGroupId() const { return this->templateGroupId_ != nullptr;};
    void deleteTemplateGroupId() { this->templateGroupId_ = nullptr;};
    inline string getTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(templateGroupId_, "") };
    inline SubmitTranscodeJobsRequest& setTemplateGroupId(string templateGroupId) { DARABONBA_PTR_SET_VALUE(templateGroupId_, templateGroupId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitTranscodeJobsRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline SubmitTranscodeJobsRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The encryption configuration. The value is a JSON string. This parameter is required only when HLS encryption is used.
    // 
    // > - The **CipherText** parameter in the [EncryptConfig](https://help.aliyun.com/document_detail/86952.html) struct must be an AES_128 ciphertext key generated by calling the [GenerateKMSDataKey](https://help.aliyun.com/document_detail/455051.html) operation. Otherwise, standard encryption transcoding fails. For more information about the standard encryption integration process, see [HLS encryption](https://help.aliyun.com/document_detail/68612.html).
    // > - For both standard encryption and proprietary encryption, you must select the HLS encryption option in the template data corresponding to **TemplateGroupId**. Otherwise, encryption is not performed.
    shared_ptr<string> encryptConfig_ {};
    // The override parameters. The value is a JSON string. This parameter allows you to override the specified image watermark file, text watermark content, subtitle file URL, and subtitle file encoding format associated with the transcoding template. For more information about the parameter structure, see [OverrideParams](https://help.aliyun.com/document_detail/98618.html).
    shared_ptr<string> overrideParams_ {};
    // The pipeline ID.
    shared_ptr<string> pipelineId_ {};
    // The priority of the current transcoding job among all queued jobs.
    // 
    // - Valid values: **1** to **10**.
    // - Highest priority: **10**.
    // - Default value: **6**.
    // 
    // > The Priority parameter only affects the priority of the current transcoding job among all queued jobs, but does not affect the priority of jobs that are already being processed.
    shared_ptr<string> priority_ {};
    // The custom ID. The ID can be 6 to 64 characters in length and can contain lowercase letters, uppercase letters, digits, hyphens (-), and underscores (_). The ID must be unique per user.
    shared_ptr<string> referenceId_ {};
    // The custom deduplication token. If a request with the same token was made within the last 7 days, the current request returns an error.
    // The token can be up to 50 characters in length and can contain letters, digits, hyphens (-), and underscores (_). If you do not specify this parameter or specify an empty string, deduplication is not performed.
    shared_ptr<string> sessionId_ {};
    // The ID of the transcoding template group used for video transcoding. To use a specified template group for transcoding, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Processing Configuration** > **Transcoding Template Groups** to view the template group ID.
    // 
    // This parameter is required.
    shared_ptr<string> templateGroupId_ {};
    // The custom settings. The value is a JSON string. This parameter supports settings such as message callbacks. For more information, see [UserData](https://help.aliyun.com/document_detail/86952.html).
    // 
    // > To use message callbacks in this parameter, you must configure an HTTP callback URL and select the corresponding callback event types in the console. Otherwise, the callback settings do not take effect.
    shared_ptr<string> userData_ {};
    // The video ID. You can obtain the video ID by using one of the following methods:
    // - For videos uploaded through the console, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Media Assets** > **Audio/Video** to view the video ID.
    // - When you call the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation to upload a video, the video ID is the value of the VideoId response parameter.
    // - After a video is uploaded, you can call the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation to query the video ID. The video ID is the value of the VideoId response parameter.
    shared_ptr<string> videoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
