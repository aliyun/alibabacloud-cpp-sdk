// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITLIVESNAPSHOTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITLIVESNAPSHOTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitLiveSnapshotJobRequestSnapshotOutput.hpp>
#include <alibabacloud/models/SubmitLiveSnapshotJobRequestStreamInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitLiveSnapshotJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitLiveSnapshotJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(SnapshotOutput, snapshotOutput_);
      DARABONBA_PTR_TO_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitLiveSnapshotJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(SnapshotOutput, snapshotOutput_);
      DARABONBA_PTR_FROM_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    SubmitLiveSnapshotJobRequest() = default ;
    SubmitLiveSnapshotJobRequest(const SubmitLiveSnapshotJobRequest &) = default ;
    SubmitLiveSnapshotJobRequest(SubmitLiveSnapshotJobRequest &&) = default ;
    SubmitLiveSnapshotJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitLiveSnapshotJobRequest() = default ;
    SubmitLiveSnapshotJobRequest& operator=(const SubmitLiveSnapshotJobRequest &) = default ;
    SubmitLiveSnapshotJobRequest& operator=(SubmitLiveSnapshotJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbackUrl_ == nullptr
        && return this->jobName_ == nullptr && return this->snapshotOutput_ == nullptr && return this->streamInput_ == nullptr && return this->templateId_ == nullptr; };
    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline SubmitLiveSnapshotJobRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline SubmitLiveSnapshotJobRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // snapshotOutput Field Functions 
    bool hasSnapshotOutput() const { return this->snapshotOutput_ != nullptr;};
    void deleteSnapshotOutput() { this->snapshotOutput_ = nullptr;};
    inline const SubmitLiveSnapshotJobRequestSnapshotOutput & snapshotOutput() const { DARABONBA_PTR_GET_CONST(snapshotOutput_, SubmitLiveSnapshotJobRequestSnapshotOutput) };
    inline SubmitLiveSnapshotJobRequestSnapshotOutput snapshotOutput() { DARABONBA_PTR_GET(snapshotOutput_, SubmitLiveSnapshotJobRequestSnapshotOutput) };
    inline SubmitLiveSnapshotJobRequest& setSnapshotOutput(const SubmitLiveSnapshotJobRequestSnapshotOutput & snapshotOutput) { DARABONBA_PTR_SET_VALUE(snapshotOutput_, snapshotOutput) };
    inline SubmitLiveSnapshotJobRequest& setSnapshotOutput(SubmitLiveSnapshotJobRequestSnapshotOutput && snapshotOutput) { DARABONBA_PTR_SET_RVALUE(snapshotOutput_, snapshotOutput) };


    // streamInput Field Functions 
    bool hasStreamInput() const { return this->streamInput_ != nullptr;};
    void deleteStreamInput() { this->streamInput_ = nullptr;};
    inline const SubmitLiveSnapshotJobRequestStreamInput & streamInput() const { DARABONBA_PTR_GET_CONST(streamInput_, SubmitLiveSnapshotJobRequestStreamInput) };
    inline SubmitLiveSnapshotJobRequestStreamInput streamInput() { DARABONBA_PTR_GET(streamInput_, SubmitLiveSnapshotJobRequestStreamInput) };
    inline SubmitLiveSnapshotJobRequest& setStreamInput(const SubmitLiveSnapshotJobRequestStreamInput & streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };
    inline SubmitLiveSnapshotJobRequest& setStreamInput(SubmitLiveSnapshotJobRequestStreamInput && streamInput) { DARABONBA_PTR_SET_RVALUE(streamInput_, streamInput) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitLiveSnapshotJobRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


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
    std::shared_ptr<SubmitLiveSnapshotJobRequestSnapshotOutput> snapshotOutput_ = nullptr;
    // The information about the input stream.
    // 
    // This parameter is required.
    std::shared_ptr<SubmitLiveSnapshotJobRequestStreamInput> streamInput_ = nullptr;
    // The template ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
