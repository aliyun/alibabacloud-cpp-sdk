// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERMEDIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERMEDIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class RegisterMediaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterMediaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableFirstFrameCover, enableFirstFrameCover_);
      DARABONBA_PTR_TO_JSON(GenerateThumbnail, generateThumbnail_);
      DARABONBA_PTR_TO_JSON(RegisterMetadatas, registerMetadatas_);
      DARABONBA_PTR_TO_JSON(TemplateGroupId, templateGroupId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterMediaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableFirstFrameCover, enableFirstFrameCover_);
      DARABONBA_PTR_FROM_JSON(GenerateThumbnail, generateThumbnail_);
      DARABONBA_PTR_FROM_JSON(RegisterMetadatas, registerMetadatas_);
      DARABONBA_PTR_FROM_JSON(TemplateGroupId, templateGroupId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    RegisterMediaRequest() = default ;
    RegisterMediaRequest(const RegisterMediaRequest &) = default ;
    RegisterMediaRequest(RegisterMediaRequest &&) = default ;
    RegisterMediaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterMediaRequest() = default ;
    RegisterMediaRequest& operator=(const RegisterMediaRequest &) = default ;
    RegisterMediaRequest& operator=(RegisterMediaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableFirstFrameCover_ == nullptr
        && this->generateThumbnail_ == nullptr && this->registerMetadatas_ == nullptr && this->templateGroupId_ == nullptr && this->userData_ == nullptr && this->workflowId_ == nullptr; };
    // enableFirstFrameCover Field Functions 
    bool hasEnableFirstFrameCover() const { return this->enableFirstFrameCover_ != nullptr;};
    void deleteEnableFirstFrameCover() { this->enableFirstFrameCover_ = nullptr;};
    inline bool getEnableFirstFrameCover() const { DARABONBA_PTR_GET_DEFAULT(enableFirstFrameCover_, false) };
    inline RegisterMediaRequest& setEnableFirstFrameCover(bool enableFirstFrameCover) { DARABONBA_PTR_SET_VALUE(enableFirstFrameCover_, enableFirstFrameCover) };


    // generateThumbnail Field Functions 
    bool hasGenerateThumbnail() const { return this->generateThumbnail_ != nullptr;};
    void deleteGenerateThumbnail() { this->generateThumbnail_ = nullptr;};
    inline bool getGenerateThumbnail() const { DARABONBA_PTR_GET_DEFAULT(generateThumbnail_, false) };
    inline RegisterMediaRequest& setGenerateThumbnail(bool generateThumbnail) { DARABONBA_PTR_SET_VALUE(generateThumbnail_, generateThumbnail) };


    // registerMetadatas Field Functions 
    bool hasRegisterMetadatas() const { return this->registerMetadatas_ != nullptr;};
    void deleteRegisterMetadatas() { this->registerMetadatas_ = nullptr;};
    inline string getRegisterMetadatas() const { DARABONBA_PTR_GET_DEFAULT(registerMetadatas_, "") };
    inline RegisterMediaRequest& setRegisterMetadatas(string registerMetadatas) { DARABONBA_PTR_SET_VALUE(registerMetadatas_, registerMetadatas) };


    // templateGroupId Field Functions 
    bool hasTemplateGroupId() const { return this->templateGroupId_ != nullptr;};
    void deleteTemplateGroupId() { this->templateGroupId_ = nullptr;};
    inline string getTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(templateGroupId_, "") };
    inline RegisterMediaRequest& setTemplateGroupId(string templateGroupId) { DARABONBA_PTR_SET_VALUE(templateGroupId_, templateGroupId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline RegisterMediaRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline RegisterMediaRequest& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    shared_ptr<bool> enableFirstFrameCover_ {};
    shared_ptr<bool> generateThumbnail_ {};
    // The metadata of the media assets to register. The value is a JSON string. You can specify metadata for up to 10 media assets at a time. For more information about the parameter structure, see the **RegisterMetadata** table below.
    // 
    // This parameter is required.
    shared_ptr<string> registerMetadatas_ {};
    // The transcoding template group ID. You can obtain the ID by using one of the following methods:
    // - Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Processing** > **Transcoding Template Groups** to view the transcoding template group ID.
    // - Obtain the value of TranscodeTemplateGroupId from the response when you call the [CreateTranscodeTemplateGroup](https://help.aliyun.com/document_detail/102665.html) operation.
    // - Obtain the value of TranscodeTemplateGroupId from the response when you call the [ListTranscodeTemplateGroup](https://help.aliyun.com/document_detail/102669.html) operation.
    // 
    // > - If transcoding is not required, set this parameter to VOD_NO_TRANSCODE (the no-transcoding template group). Otherwise, the video status is **UploadSucc** and the video cannot be played by using the playback service. If transcoding is required, specify the corresponding transcoding template group ID.
    // > - If both WorkflowId and TemplateGroupId are specified, WorkflowId takes precedence. For more information, see [Workflows](https://help.aliyun.com/document_detail/115347.html).
    // > - This parameter triggers an [asynchronous task](https://help.aliyun.com/document_detail/3027551.html). After submission, the task enters a background queue for asynchronous execution.
    shared_ptr<string> templateGroupId_ {};
    // The custom settings. The value is a JSON string that supports settings such as message callbacks. For more information, see [UserData](~~86952#section_6fg_qll_v3w~~).
    // >This operation does not support callbacks. Even if you configure a message callback in this parameter, no callback message is generated after media asset registration is complete. When you subsequently initiate media processing such as transcoding or snapshotting on the registered media asset, if you specify a message callback in UserData at that time, that callback URL takes precedence. Otherwise, the callback URL specified in UserData during media asset registration is used.
    shared_ptr<string> userData_ {};
    // The workflow ID. Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Processing** > **Workflow Management** to view the workflow ID.
    // 
    // > - If both WorkflowId and TemplateGroupId are specified, WorkflowId takes precedence. For more information, see [Workflows](https://help.aliyun.com/document_detail/115347.html).
    // > - This parameter triggers an [asynchronous task](https://help.aliyun.com/document_detail/3027551.html). After submission, the task enters a background queue for asynchronous execution.
    shared_ptr<string> workflowId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
