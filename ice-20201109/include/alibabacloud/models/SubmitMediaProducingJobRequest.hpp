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
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->clipsParam_ != nullptr && this->editingProduceConfig_ != nullptr && this->mediaMetadata_ != nullptr && this->outputMediaConfig_ != nullptr && this->outputMediaTarget_ != nullptr
        && this->projectId_ != nullptr && this->projectMetadata_ != nullptr && this->source_ != nullptr && this->templateId_ != nullptr && this->timeline_ != nullptr
        && this->userData_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SubmitMediaProducingJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // clipsParam Field Functions 
    bool hasClipsParam() const { return this->clipsParam_ != nullptr;};
    void deleteClipsParam() { this->clipsParam_ = nullptr;};
    inline string clipsParam() const { DARABONBA_PTR_GET_DEFAULT(clipsParam_, "") };
    inline SubmitMediaProducingJobRequest& setClipsParam(string clipsParam) { DARABONBA_PTR_SET_VALUE(clipsParam_, clipsParam) };


    // editingProduceConfig Field Functions 
    bool hasEditingProduceConfig() const { return this->editingProduceConfig_ != nullptr;};
    void deleteEditingProduceConfig() { this->editingProduceConfig_ = nullptr;};
    inline string editingProduceConfig() const { DARABONBA_PTR_GET_DEFAULT(editingProduceConfig_, "") };
    inline SubmitMediaProducingJobRequest& setEditingProduceConfig(string editingProduceConfig) { DARABONBA_PTR_SET_VALUE(editingProduceConfig_, editingProduceConfig) };


    // mediaMetadata Field Functions 
    bool hasMediaMetadata() const { return this->mediaMetadata_ != nullptr;};
    void deleteMediaMetadata() { this->mediaMetadata_ = nullptr;};
    inline string mediaMetadata() const { DARABONBA_PTR_GET_DEFAULT(mediaMetadata_, "") };
    inline SubmitMediaProducingJobRequest& setMediaMetadata(string mediaMetadata) { DARABONBA_PTR_SET_VALUE(mediaMetadata_, mediaMetadata) };


    // outputMediaConfig Field Functions 
    bool hasOutputMediaConfig() const { return this->outputMediaConfig_ != nullptr;};
    void deleteOutputMediaConfig() { this->outputMediaConfig_ = nullptr;};
    inline string outputMediaConfig() const { DARABONBA_PTR_GET_DEFAULT(outputMediaConfig_, "") };
    inline SubmitMediaProducingJobRequest& setOutputMediaConfig(string outputMediaConfig) { DARABONBA_PTR_SET_VALUE(outputMediaConfig_, outputMediaConfig) };


    // outputMediaTarget Field Functions 
    bool hasOutputMediaTarget() const { return this->outputMediaTarget_ != nullptr;};
    void deleteOutputMediaTarget() { this->outputMediaTarget_ = nullptr;};
    inline string outputMediaTarget() const { DARABONBA_PTR_GET_DEFAULT(outputMediaTarget_, "") };
    inline SubmitMediaProducingJobRequest& setOutputMediaTarget(string outputMediaTarget) { DARABONBA_PTR_SET_VALUE(outputMediaTarget_, outputMediaTarget) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline SubmitMediaProducingJobRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectMetadata Field Functions 
    bool hasProjectMetadata() const { return this->projectMetadata_ != nullptr;};
    void deleteProjectMetadata() { this->projectMetadata_ = nullptr;};
    inline string projectMetadata() const { DARABONBA_PTR_GET_DEFAULT(projectMetadata_, "") };
    inline SubmitMediaProducingJobRequest& setProjectMetadata(string projectMetadata) { DARABONBA_PTR_SET_VALUE(projectMetadata_, projectMetadata) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline SubmitMediaProducingJobRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitMediaProducingJobRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // timeline Field Functions 
    bool hasTimeline() const { return this->timeline_ != nullptr;};
    void deleteTimeline() { this->timeline_ = nullptr;};
    inline string timeline() const { DARABONBA_PTR_GET_DEFAULT(timeline_, "") };
    inline SubmitMediaProducingJobRequest& setTimeline(string timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitMediaProducingJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The material parameters of the template, in the JSON format. If TemplateId is specified, ClipsParam must also be specified. For more information, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html) and [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
    std::shared_ptr<string> clipsParam_ = nullptr;
    // The parameters for editing and production. For more information, see [EditingProduceConfig](https://help.aliyun.com/document_detail/357745.html).
    // 
    // >  If no thumbnail is specified in EditingProduceConfig, the first frame of the video is used as the thumbnail.
    // 
    // *   AutoRegisterInputVodMedia: specifies whether to automatically register the ApsaraVideo VOD media assets in your timeline with IMS. Default value: true.
    // *   OutputWebmTransparentChannel: specifies whether the output video contains alpha channels. Default value: false.
    // *   CoverConfig: the custom thumbnail parameters.
    // *
    std::shared_ptr<string> editingProduceConfig_ = nullptr;
    // The metadata of the produced video, in the JSON format. For more information about the parameters, see [MediaMetadata](https://help.aliyun.com/document_detail/357745.html).
    std::shared_ptr<string> mediaMetadata_ = nullptr;
    // The configurations of the output file, in the JSON format. You can specify an OSS URL or a storage location in a storage bucket of ApsaraVideo VOD.
    // 
    // To store the output file in OSS, you must specify MediaURL. To store the output file in ApsaraVideo VOD, you must specify StorageLocation and FileName.
    // 
    // For more information, see [OutputMediaConfig](https://help.aliyun.com/document_detail/357745.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> outputMediaConfig_ = nullptr;
    // The type of the output file. Valid values:
    // 
    // *   oss-object: OSS object in an OSS bucket.
    // *   vod-media: media asset in ApsaraVideo VOD.
    // *   S3: output file based on the Amazon Simple Storage Service (S3) protocol.
    std::shared_ptr<string> outputMediaTarget_ = nullptr;
    // The ID of the editing project.
    // 
    // > : You must specify one of ProgectId, Timeline, and TempalteId and leave the other two parameters empty.
    std::shared_ptr<string> projectId_ = nullptr;
    // The metadata of the editing project, in the JSON format. For more information about the parameters, see [ProjectMetadata](https://help.aliyun.com/document_detail/357745.html).
    std::shared_ptr<string> projectMetadata_ = nullptr;
    // The source of the editing and production request. Valid values:
    // 
    // *   OpenAPI
    // *   AliyunConsole
    // *   WebSDK
    std::shared_ptr<string> source_ = nullptr;
    // The template ID. The template is used to build a timeline with ease.
    // 
    // > : You must specify one of ProgectId, Timeline, and TempalteId and leave the other two parameters empty. If TemplateId is specified, ClipsParam must also be specified.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> timeline_ = nullptr;
    // The user-defined data in the JSON format, which can be up to 512 bytes in length. You can specify a custom callback URL. For more information, see [Configure a callback upon editing completion](https://help.aliyun.com/document_detail/451631.html).
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
