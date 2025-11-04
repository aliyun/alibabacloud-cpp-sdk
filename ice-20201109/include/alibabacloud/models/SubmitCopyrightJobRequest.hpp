// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCOPYRIGHTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCOPYRIGHTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitCopyrightJobRequestInput.hpp>
#include <alibabacloud/models/SubmitCopyrightJobRequestOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitCopyrightJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCopyrightJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalTime, totalTime_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCopyrightJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalTime, totalTime_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitCopyrightJobRequest() = default ;
    SubmitCopyrightJobRequest(const SubmitCopyrightJobRequest &) = default ;
    SubmitCopyrightJobRequest(SubmitCopyrightJobRequest &&) = default ;
    SubmitCopyrightJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCopyrightJobRequest() = default ;
    SubmitCopyrightJobRequest& operator=(const SubmitCopyrightJobRequest &) = default ;
    SubmitCopyrightJobRequest& operator=(SubmitCopyrightJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->input_ == nullptr && return this->level_ == nullptr && return this->message_ == nullptr && return this->output_ == nullptr && return this->params_ == nullptr
        && return this->startTime_ == nullptr && return this->totalTime_ == nullptr && return this->userData_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SubmitCopyrightJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitCopyrightJobRequestInput & input() const { DARABONBA_PTR_GET_CONST(input_, SubmitCopyrightJobRequestInput) };
    inline SubmitCopyrightJobRequestInput input() { DARABONBA_PTR_GET(input_, SubmitCopyrightJobRequestInput) };
    inline SubmitCopyrightJobRequest& setInput(const SubmitCopyrightJobRequestInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitCopyrightJobRequest& setInput(SubmitCopyrightJobRequestInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline SubmitCopyrightJobRequest& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SubmitCopyrightJobRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const SubmitCopyrightJobRequestOutput & output() const { DARABONBA_PTR_GET_CONST(output_, SubmitCopyrightJobRequestOutput) };
    inline SubmitCopyrightJobRequestOutput output() { DARABONBA_PTR_GET(output_, SubmitCopyrightJobRequestOutput) };
    inline SubmitCopyrightJobRequest& setOutput(const SubmitCopyrightJobRequestOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline SubmitCopyrightJobRequest& setOutput(SubmitCopyrightJobRequestOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline SubmitCopyrightJobRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SubmitCopyrightJobRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalTime Field Functions 
    bool hasTotalTime() const { return this->totalTime_ != nullptr;};
    void deleteTotalTime() { this->totalTime_ = nullptr;};
    inline int64_t totalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, 0L) };
    inline SubmitCopyrightJobRequest& setTotalTime(int64_t totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitCopyrightJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The description of the watermark.
    std::shared_ptr<string> description_ = nullptr;
    // The source video file that you want to add a watermark to.
    // 
    // > The OSS object or media asset must reside in the same region as the IMS service region.
    // 
    // This parameter is required.
    std::shared_ptr<SubmitCopyrightJobRequestInput> input_ = nullptr;
    // The watermark level, which specifies the channel to embed watermarks. Valid values: 0 specifies the 0u channel, 1 specifies the 1uv channel, and 2 specifies the 2yuv channel.
    std::shared_ptr<int64_t> level_ = nullptr;
    // The information about the watermark to be added.
    // 
    // This parameter is required.
    std::shared_ptr<string> message_ = nullptr;
    // The URL of the output file.
    // 
    // > The OSS bucket must reside in the same region as the IMS service region.
    // 
    // This parameter is required.
    std::shared_ptr<SubmitCopyrightJobRequestOutput> output_ = nullptr;
    // The parameters related to watermark jobs. The value is a JSON string. Supported parameter:
    // 
    // *   algoType: the algorithm type. Default value: v1.
    // 
    //     *   v1: watermarking for long videos that last at least 3 minutes.
    //     *   v2: watermarking for videos shorter than 3 minutes.
    std::shared_ptr<string> params_ = nullptr;
    // The start time of the watermark. Unit: seconds. If you do not specify this parameter, the default value 0 is used.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The end time of the watermark. Unit: seconds. If you do not specify this parameter, the default value is the video duration.
    std::shared_ptr<int64_t> totalTime_ = nullptr;
    // The custom data, which can be up to 1,024 bytes in size.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
