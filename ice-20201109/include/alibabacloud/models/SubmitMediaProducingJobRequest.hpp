// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIAPRODUCINGJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIAPRODUCINGJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitMediaProducingJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaProducingJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ClipsParam, clipsParam_);
      DARABONBA_PTR_TO_JSON(EditingProduceConfig, editingProduceConfig_);
      DARABONBA_PTR_TO_JSON(MediaMetadata, mediaMetadata_);
      DARABONBA_PTR_TO_JSON(OutputMediaConfig, outputMediaConfig_);
      DARABONBA_PTR_TO_JSON(OutputMediaTarget, outputMediaTarget_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectMetadata, projectMetadata_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Timeline, timeline_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaProducingJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ClipsParam, clipsParam_);
      DARABONBA_PTR_FROM_JSON(EditingProduceConfig, editingProduceConfig_);
      DARABONBA_PTR_FROM_JSON(MediaMetadata, mediaMetadata_);
      DARABONBA_PTR_FROM_JSON(OutputMediaConfig, outputMediaConfig_);
      DARABONBA_PTR_FROM_JSON(OutputMediaTarget, outputMediaTarget_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectMetadata, projectMetadata_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Timeline, timeline_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitMediaProducingJobRequest() = default ;
    SubmitMediaProducingJobRequest(const SubmitMediaProducingJobRequest &) = default ;
    SubmitMediaProducingJobRequest(SubmitMediaProducingJobRequest &&) = default ;
    SubmitMediaProducingJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaProducingJobRequest() = default ;
    SubmitMediaProducingJobRequest& operator=(const SubmitMediaProducingJobRequest &) = default ;
    SubmitMediaProducingJobRequest& operator=(SubmitMediaProducingJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->clipsParam_ == nullptr && this->editingProduceConfig_ == nullptr && this->mediaMetadata_ == nullptr && this->outputMediaConfig_ == nullptr && this->outputMediaTarget_ == nullptr
        && this->projectId_ == nullptr && this->projectMetadata_ == nullptr && this->source_ == nullptr && this->templateId_ == nullptr && this->timeline_ == nullptr
        && this->userData_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SubmitMediaProducingJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // clipsParam Field Functions 
    bool hasClipsParam() const { return this->clipsParam_ != nullptr;};
    void deleteClipsParam() { this->clipsParam_ = nullptr;};
    inline string getClipsParam() const { DARABONBA_PTR_GET_DEFAULT(clipsParam_, "") };
    inline SubmitMediaProducingJobRequest& setClipsParam(string clipsParam) { DARABONBA_PTR_SET_VALUE(clipsParam_, clipsParam) };


    // editingProduceConfig Field Functions 
    bool hasEditingProduceConfig() const { return this->editingProduceConfig_ != nullptr;};
    void deleteEditingProduceConfig() { this->editingProduceConfig_ = nullptr;};
    inline string getEditingProduceConfig() const { DARABONBA_PTR_GET_DEFAULT(editingProduceConfig_, "") };
    inline SubmitMediaProducingJobRequest& setEditingProduceConfig(string editingProduceConfig) { DARABONBA_PTR_SET_VALUE(editingProduceConfig_, editingProduceConfig) };


    // mediaMetadata Field Functions 
    bool hasMediaMetadata() const { return this->mediaMetadata_ != nullptr;};
    void deleteMediaMetadata() { this->mediaMetadata_ = nullptr;};
    inline string getMediaMetadata() const { DARABONBA_PTR_GET_DEFAULT(mediaMetadata_, "") };
    inline SubmitMediaProducingJobRequest& setMediaMetadata(string mediaMetadata) { DARABONBA_PTR_SET_VALUE(mediaMetadata_, mediaMetadata) };


    // outputMediaConfig Field Functions 
    bool hasOutputMediaConfig() const { return this->outputMediaConfig_ != nullptr;};
    void deleteOutputMediaConfig() { this->outputMediaConfig_ = nullptr;};
    inline string getOutputMediaConfig() const { DARABONBA_PTR_GET_DEFAULT(outputMediaConfig_, "") };
    inline SubmitMediaProducingJobRequest& setOutputMediaConfig(string outputMediaConfig) { DARABONBA_PTR_SET_VALUE(outputMediaConfig_, outputMediaConfig) };


    // outputMediaTarget Field Functions 
    bool hasOutputMediaTarget() const { return this->outputMediaTarget_ != nullptr;};
    void deleteOutputMediaTarget() { this->outputMediaTarget_ = nullptr;};
    inline string getOutputMediaTarget() const { DARABONBA_PTR_GET_DEFAULT(outputMediaTarget_, "") };
    inline SubmitMediaProducingJobRequest& setOutputMediaTarget(string outputMediaTarget) { DARABONBA_PTR_SET_VALUE(outputMediaTarget_, outputMediaTarget) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline SubmitMediaProducingJobRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectMetadata Field Functions 
    bool hasProjectMetadata() const { return this->projectMetadata_ != nullptr;};
    void deleteProjectMetadata() { this->projectMetadata_ = nullptr;};
    inline string getProjectMetadata() const { DARABONBA_PTR_GET_DEFAULT(projectMetadata_, "") };
    inline SubmitMediaProducingJobRequest& setProjectMetadata(string projectMetadata) { DARABONBA_PTR_SET_VALUE(projectMetadata_, projectMetadata) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline SubmitMediaProducingJobRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitMediaProducingJobRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // timeline Field Functions 
    bool hasTimeline() const { return this->timeline_ != nullptr;};
    void deleteTimeline() { this->timeline_ = nullptr;};
    inline string getTimeline() const { DARABONBA_PTR_GET_DEFAULT(timeline_, "") };
    inline SubmitMediaProducingJobRequest& setTimeline(string timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitMediaProducingJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The material parameters corresponding to the template, in JSON format. When TemplateId is not empty, ClipsParam cannot be empty. For the specific format, see [Create and use a standard template](https://help.aliyun.com/document_detail/445399.html) and [Create and use an advanced template](https://help.aliyun.com/document_detail/445389.html).
    shared_ptr<string> clipsParam_ {};
    // The editing and compositing configuration. For more information, see [EditingProduceConfig parameter details](~~357745#section-8a4-pb2-hkv~~).
    // > 
    // >If no cover image is configured in EditingProduceConfig, the first frame of the video is used as the cover by default.
    // 
    // - AutoRegisterInputVodMedia: specifies whether to automatically register VOD media assets in your timeline to IMS. Default value: true.
    // 
    // - OutputWebmTransparentChannel: specifies whether to output video with a transparent channel. Default value: false.
    // 
    // - CoverConfig: custom cover image parameters.
    // - ......
    shared_ptr<string> editingProduceConfig_ {};
    // The metadata of the produced video, in JSON format. For the specific structure definition, see [MediaMetadata](~~357745#97ff26d0e3c28~~).
    shared_ptr<string> mediaMetadata_ {};
    // The target configuration of the output media, in JSON format. You can set the OSS URL or the storage location in a VOD bucket for the output media.
    // 
    // - When outputting to OSS, the MediaURL of the output target is required.
    // - When outputting to VOD, the StorageLocation and FileName parameters are required.
    // 
    // [OutputMediaConfig parameter examples](~~357745#title-4j6-ve7-g31~~).
    // 
    // This parameter is required.
    shared_ptr<string> outputMediaConfig_ {};
    // The target type of the output media. Valid values:
    // 
    // - oss-object: an OSS object in your Alibaba Cloud OSS bucket.
    // 
    // - vod-media: a media asset in ApsaraVideo VOD.
    // 
    // - S3: output using the S3 protocol.
    shared_ptr<string> outputMediaTarget_ {};
    // The editing project ID. You can call the [CreateEditingProject](https://help.aliyun.com/document_detail/441137.html) operation to create an editing project and obtain the ProjectId to submit an editing task.
    // >Notice: You must specify one of the following three parameters: ProjectId, Timeline, or TemplateId. Leave the other two parameters empty.
    shared_ptr<string> projectId_ {};
    // The metadata of the editing project, in JSON format. For the specific structure definition, see [ProjectMetadata](~~357745#title-yvp-81k-wff~~).
    shared_ptr<string> projectMetadata_ {};
    // The source of the editing and compositing request. Valid values:
    // 
    // - OpenAPI: a direct API request.
    // 
    // - AliyunConsole: a request from the Alibaba Cloud Management Console.
    // 
    // - WebSDK: a request from a frontend page integrated with WebSDK.
    shared_ptr<string> source_ {};
    // The template ID, which is used to quickly build a timeline with minimal effort. Video clip editing based on both standard templates and advanced templates is supported.
    // 
    // - When you commit a media producing job by using a template ID, you must provide the ClipsParam parameter to flexibly adjust or replace materials in the template.
    // 
    // - You can invoke [GetTemplate](https://help.aliyun.com/document_detail/441164.html) to obtain template information.
    // 
    // >Notice: You must specify one of the following three parameters: ProjectId, Timeline, or TemplateId. Leave the other two parameters empty.
    shared_ptr<string> templateId_ {};
    // The timeline of the cloud editing task. When you need to arrange materials and design effects based on your video creative ideas, you can manually construct the Timeline parameter.
    // 
    // - A timeline mainly contains three types of objects: tracks, materials, and effects. For more information, see [Timeline configuration](https://help.aliyun.com/document_detail/198823.html).
    // - For more timeline configuration examples, see [Best Practices](https://help.aliyun.com/document_detail/2766669.html).
    // 
    // >Notice: You must specify one of the following three parameters: ProjectId, Timeline, or TemplateId. Leave the other two parameters empty.
    shared_ptr<string> timeline_ {};
    // Custom settings, in JSON format, with a maximum length of 512 bytes. Supports [task completion callback configuration](https://help.aliyun.com/document_detail/451631.html). The fields include:
    // - NotifyAddress: the callback URL for task completion.
    // - RegisterMediaNotifyAddress: the callback URL for media asset analysis completion.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
