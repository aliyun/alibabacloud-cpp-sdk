// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITLIVESNAPSHOTJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITLIVESNAPSHOTJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitLiveSnapshotJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitLiveSnapshotJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(SnapshotOutput, snapshotOutputShrink_);
      DARABONBA_PTR_TO_JSON(StreamInput, streamInputShrink_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitLiveSnapshotJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(SnapshotOutput, snapshotOutputShrink_);
      DARABONBA_PTR_FROM_JSON(StreamInput, streamInputShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    SubmitLiveSnapshotJobShrinkRequest() = default ;
    SubmitLiveSnapshotJobShrinkRequest(const SubmitLiveSnapshotJobShrinkRequest &) = default ;
    SubmitLiveSnapshotJobShrinkRequest(SubmitLiveSnapshotJobShrinkRequest &&) = default ;
    SubmitLiveSnapshotJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitLiveSnapshotJobShrinkRequest() = default ;
    SubmitLiveSnapshotJobShrinkRequest& operator=(const SubmitLiveSnapshotJobShrinkRequest &) = default ;
    SubmitLiveSnapshotJobShrinkRequest& operator=(SubmitLiveSnapshotJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callbackUrl_ != nullptr
        && this->jobName_ != nullptr && this->snapshotOutputShrink_ != nullptr && this->streamInputShrink_ != nullptr && this->templateId_ != nullptr; };
    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline SubmitLiveSnapshotJobShrinkRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline SubmitLiveSnapshotJobShrinkRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // snapshotOutputShrink Field Functions 
    bool hasSnapshotOutputShrink() const { return this->snapshotOutputShrink_ != nullptr;};
    void deleteSnapshotOutputShrink() { this->snapshotOutputShrink_ = nullptr;};
    inline string snapshotOutputShrink() const { DARABONBA_PTR_GET_DEFAULT(snapshotOutputShrink_, "") };
    inline SubmitLiveSnapshotJobShrinkRequest& setSnapshotOutputShrink(string snapshotOutputShrink) { DARABONBA_PTR_SET_VALUE(snapshotOutputShrink_, snapshotOutputShrink) };


    // streamInputShrink Field Functions 
    bool hasStreamInputShrink() const { return this->streamInputShrink_ != nullptr;};
    void deleteStreamInputShrink() { this->streamInputShrink_ = nullptr;};
    inline string streamInputShrink() const { DARABONBA_PTR_GET_DEFAULT(streamInputShrink_, "") };
    inline SubmitLiveSnapshotJobShrinkRequest& setStreamInputShrink(string streamInputShrink) { DARABONBA_PTR_SET_VALUE(streamInputShrink_, streamInputShrink) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitLiveSnapshotJobShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The snapshot callback URL.
    // 
    // *   It cannot exceed 255 characters in length.
    // *   Both HTTP and HTTPS URLs are supported.
    std::shared_ptr<string> callbackUrl_ = nullptr;
    // The name of the job.
    // 
    // *   It cannot exceed 128 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobName_ = nullptr;
    // The information about the output snapshot.
    // 
    // This parameter is required.
    std::shared_ptr<string> snapshotOutputShrink_ = nullptr;
    // The information about the input stream.
    // 
    // This parameter is required.
    std::shared_ptr<string> streamInputShrink_ = nullptr;
    // The template ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
