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
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitWorkflowJobRequest& obj) { 
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
    virtual bool empty() const override { this->mediaId_ != nullptr
        && this->workflowId_ != nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SubmitWorkflowJobRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline SubmitWorkflowJobRequest& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The ID of the media file. You can use one of the following methods to obtain the ID:
    // 
    // *   Log on to the [ApsaraVideo VOD](https://vod.console.aliyun.com) console. In the left-side navigation pane, choose **Media Files** > **Audio/Video**. On the Video and Audio page, view the ID of the audio or video file. This method is applicable to files that are uploaded by using the ApsaraVideo VOD console.
    // *   Obtain the value of the VideoId parameter when you call the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation to upload media files.
    // *   Obtain the value of the VideoId parameter when you call the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation after you upload media files.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The ID of the workflow. To view the ID of the workflow, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com). In the left-side navigation pane, choose **Configuration Management** > **Media Processing** > **Workflows**.
    // 
    // This parameter is required.
    std::shared_ptr<string> workflowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
