// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVETRANSCODEJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVETRANSCODEJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLiveTranscodeJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveTranscodeJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(StreamInput, streamInputShrink_);
      DARABONBA_PTR_TO_JSON(TimedConfig, timedConfigShrink_);
      DARABONBA_PTR_TO_JSON(TranscodeOutput, transcodeOutputShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveTranscodeJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(StreamInput, streamInputShrink_);
      DARABONBA_PTR_FROM_JSON(TimedConfig, timedConfigShrink_);
      DARABONBA_PTR_FROM_JSON(TranscodeOutput, transcodeOutputShrink_);
    };
    UpdateLiveTranscodeJobShrinkRequest() = default ;
    UpdateLiveTranscodeJobShrinkRequest(const UpdateLiveTranscodeJobShrinkRequest &) = default ;
    UpdateLiveTranscodeJobShrinkRequest(UpdateLiveTranscodeJobShrinkRequest &&) = default ;
    UpdateLiveTranscodeJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveTranscodeJobShrinkRequest() = default ;
    UpdateLiveTranscodeJobShrinkRequest& operator=(const UpdateLiveTranscodeJobShrinkRequest &) = default ;
    UpdateLiveTranscodeJobShrinkRequest& operator=(UpdateLiveTranscodeJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->name_ != nullptr && this->streamInputShrink_ != nullptr && this->timedConfigShrink_ != nullptr && this->transcodeOutputShrink_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline UpdateLiveTranscodeJobShrinkRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateLiveTranscodeJobShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // streamInputShrink Field Functions 
    bool hasStreamInputShrink() const { return this->streamInputShrink_ != nullptr;};
    void deleteStreamInputShrink() { this->streamInputShrink_ = nullptr;};
    inline string streamInputShrink() const { DARABONBA_PTR_GET_DEFAULT(streamInputShrink_, "") };
    inline UpdateLiveTranscodeJobShrinkRequest& setStreamInputShrink(string streamInputShrink) { DARABONBA_PTR_SET_VALUE(streamInputShrink_, streamInputShrink) };


    // timedConfigShrink Field Functions 
    bool hasTimedConfigShrink() const { return this->timedConfigShrink_ != nullptr;};
    void deleteTimedConfigShrink() { this->timedConfigShrink_ = nullptr;};
    inline string timedConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(timedConfigShrink_, "") };
    inline UpdateLiveTranscodeJobShrinkRequest& setTimedConfigShrink(string timedConfigShrink) { DARABONBA_PTR_SET_VALUE(timedConfigShrink_, timedConfigShrink) };


    // transcodeOutputShrink Field Functions 
    bool hasTranscodeOutputShrink() const { return this->transcodeOutputShrink_ != nullptr;};
    void deleteTranscodeOutputShrink() { this->transcodeOutputShrink_ = nullptr;};
    inline string transcodeOutputShrink() const { DARABONBA_PTR_GET_DEFAULT(transcodeOutputShrink_, "") };
    inline UpdateLiveTranscodeJobShrinkRequest& setTranscodeOutputShrink(string transcodeOutputShrink) { DARABONBA_PTR_SET_VALUE(transcodeOutputShrink_, transcodeOutputShrink) };


  protected:
    // The job ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> name_ = nullptr;
    // The information about the input stream.
    std::shared_ptr<string> streamInputShrink_ = nullptr;
    // The configuration of a timed transcoding job.
    std::shared_ptr<string> timedConfigShrink_ = nullptr;
    // The information about the transcoding output.
    std::shared_ptr<string> transcodeOutputShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
