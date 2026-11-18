// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITWORKFLOWJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITWORKFLOWJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitWorkflowJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitWorkflowJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExtraInputs, extraInputs_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitWorkflowJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtraInputs, extraInputs_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    SubmitWorkflowJobRequest() = default ;
    SubmitWorkflowJobRequest(const SubmitWorkflowJobRequest &) = default ;
    SubmitWorkflowJobRequest(SubmitWorkflowJobRequest &&) = default ;
    SubmitWorkflowJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitWorkflowJobRequest() = default ;
    SubmitWorkflowJobRequest& operator=(const SubmitWorkflowJobRequest &) = default ;
    SubmitWorkflowJobRequest& operator=(SubmitWorkflowJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extraInputs_ == nullptr
        && this->mediaId_ == nullptr && this->workflowId_ == nullptr; };
    // extraInputs Field Functions 
    bool hasExtraInputs() const { return this->extraInputs_ != nullptr;};
    void deleteExtraInputs() { this->extraInputs_ = nullptr;};
    inline string getExtraInputs() const { DARABONBA_PTR_GET_DEFAULT(extraInputs_, "") };
    inline SubmitWorkflowJobRequest& setExtraInputs(string extraInputs) { DARABONBA_PTR_SET_VALUE(extraInputs_, extraInputs) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SubmitWorkflowJobRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline SubmitWorkflowJobRequest& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    shared_ptr<string> extraInputs_ {};
    // The media asset ID, which is the video ID. You can obtain the ID by using one of the following methods:
    // - For videos uploaded through the console, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Media Assets** > **Audio/Video** to view the video ID.
    // - When you call the [Get the upload URL and credential for a video](https://help.aliyun.com/document_detail/55407.html) operation to obtain the upload URL and credential, the video ID is the value of the VideoId response parameter.
    // - After a video is uploaded, you can call the [Search for media information](https://help.aliyun.com/document_detail/86044.html) operation to query the video ID. The video ID is the value of the VideoId response parameter.
    shared_ptr<string> mediaId_ {};
    // The workflow ID. You can log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Processing Configuration** > **Workflow Management** to view the ID.
    // 
    // This parameter is required.
    shared_ptr<string> workflowId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
