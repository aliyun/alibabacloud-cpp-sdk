// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVETRANSCODEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVETRANSCODEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateLiveTranscodeJobRequestStreamInput.hpp>
#include <alibabacloud/models/UpdateLiveTranscodeJobRequestTimedConfig.hpp>
#include <alibabacloud/models/UpdateLiveTranscodeJobRequestTranscodeOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLiveTranscodeJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveTranscodeJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_TO_JSON(TimedConfig, timedConfig_);
      DARABONBA_PTR_TO_JSON(TranscodeOutput, transcodeOutput_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveTranscodeJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_FROM_JSON(TimedConfig, timedConfig_);
      DARABONBA_PTR_FROM_JSON(TranscodeOutput, transcodeOutput_);
    };
    UpdateLiveTranscodeJobRequest() = default ;
    UpdateLiveTranscodeJobRequest(const UpdateLiveTranscodeJobRequest &) = default ;
    UpdateLiveTranscodeJobRequest(UpdateLiveTranscodeJobRequest &&) = default ;
    UpdateLiveTranscodeJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveTranscodeJobRequest() = default ;
    UpdateLiveTranscodeJobRequest& operator=(const UpdateLiveTranscodeJobRequest &) = default ;
    UpdateLiveTranscodeJobRequest& operator=(UpdateLiveTranscodeJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->name_ != nullptr && this->streamInput_ != nullptr && this->timedConfig_ != nullptr && this->transcodeOutput_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline UpdateLiveTranscodeJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateLiveTranscodeJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // streamInput Field Functions 
    bool hasStreamInput() const { return this->streamInput_ != nullptr;};
    void deleteStreamInput() { this->streamInput_ = nullptr;};
    inline const UpdateLiveTranscodeJobRequestStreamInput & streamInput() const { DARABONBA_PTR_GET_CONST(streamInput_, UpdateLiveTranscodeJobRequestStreamInput) };
    inline UpdateLiveTranscodeJobRequestStreamInput streamInput() { DARABONBA_PTR_GET(streamInput_, UpdateLiveTranscodeJobRequestStreamInput) };
    inline UpdateLiveTranscodeJobRequest& setStreamInput(const UpdateLiveTranscodeJobRequestStreamInput & streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };
    inline UpdateLiveTranscodeJobRequest& setStreamInput(UpdateLiveTranscodeJobRequestStreamInput && streamInput) { DARABONBA_PTR_SET_RVALUE(streamInput_, streamInput) };


    // timedConfig Field Functions 
    bool hasTimedConfig() const { return this->timedConfig_ != nullptr;};
    void deleteTimedConfig() { this->timedConfig_ = nullptr;};
    inline const UpdateLiveTranscodeJobRequestTimedConfig & timedConfig() const { DARABONBA_PTR_GET_CONST(timedConfig_, UpdateLiveTranscodeJobRequestTimedConfig) };
    inline UpdateLiveTranscodeJobRequestTimedConfig timedConfig() { DARABONBA_PTR_GET(timedConfig_, UpdateLiveTranscodeJobRequestTimedConfig) };
    inline UpdateLiveTranscodeJobRequest& setTimedConfig(const UpdateLiveTranscodeJobRequestTimedConfig & timedConfig) { DARABONBA_PTR_SET_VALUE(timedConfig_, timedConfig) };
    inline UpdateLiveTranscodeJobRequest& setTimedConfig(UpdateLiveTranscodeJobRequestTimedConfig && timedConfig) { DARABONBA_PTR_SET_RVALUE(timedConfig_, timedConfig) };


    // transcodeOutput Field Functions 
    bool hasTranscodeOutput() const { return this->transcodeOutput_ != nullptr;};
    void deleteTranscodeOutput() { this->transcodeOutput_ = nullptr;};
    inline const UpdateLiveTranscodeJobRequestTranscodeOutput & transcodeOutput() const { DARABONBA_PTR_GET_CONST(transcodeOutput_, UpdateLiveTranscodeJobRequestTranscodeOutput) };
    inline UpdateLiveTranscodeJobRequestTranscodeOutput transcodeOutput() { DARABONBA_PTR_GET(transcodeOutput_, UpdateLiveTranscodeJobRequestTranscodeOutput) };
    inline UpdateLiveTranscodeJobRequest& setTranscodeOutput(const UpdateLiveTranscodeJobRequestTranscodeOutput & transcodeOutput) { DARABONBA_PTR_SET_VALUE(transcodeOutput_, transcodeOutput) };
    inline UpdateLiveTranscodeJobRequest& setTranscodeOutput(UpdateLiveTranscodeJobRequestTranscodeOutput && transcodeOutput) { DARABONBA_PTR_SET_RVALUE(transcodeOutput_, transcodeOutput) };


  protected:
    // The job ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> name_ = nullptr;
    // The information about the input stream.
    std::shared_ptr<UpdateLiveTranscodeJobRequestStreamInput> streamInput_ = nullptr;
    // The configuration of a timed transcoding job.
    std::shared_ptr<UpdateLiveTranscodeJobRequestTimedConfig> timedConfig_ = nullptr;
    // The information about the transcoding output.
    std::shared_ptr<UpdateLiveTranscodeJobRequestTranscodeOutput> transcodeOutput_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
