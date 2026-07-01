// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCOPYRIGHTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCOPYRIGHTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class Output : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Output& obj) { 
        DARABONBA_PTR_TO_JSON(Media, media_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Output& obj) { 
        DARABONBA_PTR_FROM_JSON(Media, media_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Output() = default ;
      Output(const Output &) = default ;
      Output(Output &&) = default ;
      Output(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Output() = default ;
      Output& operator=(const Output &) = default ;
      Output& operator=(Output &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
      // media Field Functions 
      bool hasMedia() const { return this->media_ != nullptr;};
      void deleteMedia() { this->media_ = nullptr;};
      inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
      inline Output& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Output& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The OSS URL for the output file. The following formats are supported:
      // 
      // 1\\. `oss://bucket/object`
      // 
      // 2\\. `http(s)://bucket.oss-[regionId].aliyuncs.com/object`<br>In these formats, `bucket` specifies the name of an OSS bucket in the same region as the service, and `object` specifies the file path.<br>
      // 
      // This parameter is required.
      shared_ptr<string> media_ {};
      // The type of the output file. Valid value:
      // 
      // 1. `OSS`: The URL of an OSS object.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    class Input : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Input& obj) { 
        DARABONBA_PTR_TO_JSON(Media, media_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Input& obj) { 
        DARABONBA_PTR_FROM_JSON(Media, media_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Input() = default ;
      Input(const Input &) = default ;
      Input(Input &&) = default ;
      Input(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Input() = default ;
      Input& operator=(const Input &) = default ;
      Input& operator=(Input &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
      // media Field Functions 
      bool hasMedia() const { return this->media_ != nullptr;};
      void deleteMedia() { this->media_ = nullptr;};
      inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
      inline Input& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Input& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The input file, specified as either an OSS URL or a media asset ID. The following formats are supported for OSS URLs:
      // 
      // 1\\. `oss://bucket/object`
      // 
      // 2\\. `http(s)://bucket.oss-[regionId].aliyuncs.com/object`
      // 
      // In these formats, `bucket` specifies the name of an OSS bucket in the same region as the service, and `object` specifies the file path.
      // 
      // This parameter is required.
      shared_ptr<string> media_ {};
      // The type of the input file. Valid values:
      // 
      // 1. `OSS`: The URL of an OSS object.
      // 
      // 2. `Media`: The media asset ID.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->input_ == nullptr && this->level_ == nullptr && this->message_ == nullptr && this->output_ == nullptr && this->params_ == nullptr
        && this->startTime_ == nullptr && this->totalTime_ == nullptr && this->userData_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SubmitCopyrightJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitCopyrightJobRequest::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, SubmitCopyrightJobRequest::Input) };
    inline SubmitCopyrightJobRequest::Input getInput() { DARABONBA_PTR_GET(input_, SubmitCopyrightJobRequest::Input) };
    inline SubmitCopyrightJobRequest& setInput(const SubmitCopyrightJobRequest::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitCopyrightJobRequest& setInput(SubmitCopyrightJobRequest::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline SubmitCopyrightJobRequest& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SubmitCopyrightJobRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const SubmitCopyrightJobRequest::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, SubmitCopyrightJobRequest::Output) };
    inline SubmitCopyrightJobRequest::Output getOutput() { DARABONBA_PTR_GET(output_, SubmitCopyrightJobRequest::Output) };
    inline SubmitCopyrightJobRequest& setOutput(const SubmitCopyrightJobRequest::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline SubmitCopyrightJobRequest& setOutput(SubmitCopyrightJobRequest::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline SubmitCopyrightJobRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SubmitCopyrightJobRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalTime Field Functions 
    bool hasTotalTime() const { return this->totalTime_ != nullptr;};
    void deleteTotalTime() { this->totalTime_ = nullptr;};
    inline int64_t getTotalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, 0L) };
    inline SubmitCopyrightJobRequest& setTotalTime(int64_t totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitCopyrightJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // A description of the watermark job.
    shared_ptr<string> description_ {};
    // The input video file to be watermarked.
    // 
    // > - The OSS object or media asset must be in the same region as the service call.
    // 
    // This parameter is required.
    shared_ptr<SubmitCopyrightJobRequest::Input> input_ {};
    // The watermark level, which specifies the embedding channel. Valid values are 0, 1, and 2, which correspond to the U, UV, and YUV channels, respectively.
    shared_ptr<int64_t> level_ {};
    // The watermark content to embed.
    // 
    // This parameter is required.
    shared_ptr<string> message_ {};
    // The location of the output file.
    // 
    // > - The OSS bucket must be in the same region as the service call.
    // 
    // This parameter is required.
    shared_ptr<SubmitCopyrightJobRequest::Output> output_ {};
    // The parameters for the watermark job, specified as a JSON string. The following parameter is supported:
    // 
    // - `algoType`: The algorithm type. Defaults to `v1`.
    // 
    //   - `v1`: For videos 3 minutes or longer.
    // 
    //   - `v2`: For short videos.
    shared_ptr<string> params_ {};
    // The start time of the watermark in seconds. Defaults to 0.
    shared_ptr<int64_t> startTime_ {};
    // The end time of the watermark in seconds. If unspecified, the watermark is applied until the video ends.
    shared_ptr<int64_t> totalTime_ {};
    // The user data. The value can be up to 1,024 bytes in length.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
