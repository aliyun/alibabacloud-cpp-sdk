// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRACEABJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRACEABJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTraceAbJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTraceAbJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CipherBase64ed, cipherBase64ed_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalTime, totalTime_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTraceAbJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CipherBase64ed, cipherBase64ed_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalTime, totalTime_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitTraceAbJobRequest() = default ;
    SubmitTraceAbJobRequest(const SubmitTraceAbJobRequest &) = default ;
    SubmitTraceAbJobRequest(SubmitTraceAbJobRequest &&) = default ;
    SubmitTraceAbJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTraceAbJobRequest() = default ;
    SubmitTraceAbJobRequest& operator=(const SubmitTraceAbJobRequest &) = default ;
    SubmitTraceAbJobRequest& operator=(SubmitTraceAbJobRequest &&) = default ;
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
      // The output path. Specify an OSS directory URL or a media asset ID. If you specify an OSS URL, use one of the following formats for the output directory:
      // 
      // 1\\. `oss://<bucket>/<dir>/`
      // 
      // 2\\. `http(s)://<bucket>.oss-[regionId].aliyuncs.com/<dir>/`
      // 
      // In these formats, `<bucket>` is the name of the OSS bucket, which must be in the same region as your project, and `<dir>` is the output directory path.
      // 
      // This parameter is required.
      shared_ptr<string> media_ {};
      // The type of the output object.
      // Valid values:
      // 
      // - `OSS`: An OSS object.
      // 
      // - `Media`: A media asset ID.
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
      // The location of the input file. This can be an OSS URL or a media asset ID.
      // The supported OSS URL formats are:
      // 
      // 1\\. `oss://<bucket>/<object>`
      // 
      // 2\\. `http(s)://<bucket>.oss-[regionId].aliyuncs.com/<object>`
      // 
      // In these formats, `<bucket>` is the name of the OSS bucket, which must be in the same region as your project, and `<object>` is the path to the file.
      // 
      // This parameter is required.
      shared_ptr<string> media_ {};
      // The type of the input file. Valid values:
      // 
      // 1. `OSS`: The file is specified by an OSS URL.
      // 
      // 2. `Media`: The file is specified by a media asset ID.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->cipherBase64ed_ == nullptr
        && this->input_ == nullptr && this->level_ == nullptr && this->output_ == nullptr && this->startTime_ == nullptr && this->totalTime_ == nullptr
        && this->userData_ == nullptr; };
    // cipherBase64ed Field Functions 
    bool hasCipherBase64ed() const { return this->cipherBase64ed_ != nullptr;};
    void deleteCipherBase64ed() { this->cipherBase64ed_ = nullptr;};
    inline string getCipherBase64ed() const { DARABONBA_PTR_GET_DEFAULT(cipherBase64ed_, "") };
    inline SubmitTraceAbJobRequest& setCipherBase64ed(string cipherBase64ed) { DARABONBA_PTR_SET_VALUE(cipherBase64ed_, cipherBase64ed) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitTraceAbJobRequest::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, SubmitTraceAbJobRequest::Input) };
    inline SubmitTraceAbJobRequest::Input getInput() { DARABONBA_PTR_GET(input_, SubmitTraceAbJobRequest::Input) };
    inline SubmitTraceAbJobRequest& setInput(const SubmitTraceAbJobRequest::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitTraceAbJobRequest& setInput(SubmitTraceAbJobRequest::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline SubmitTraceAbJobRequest& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const SubmitTraceAbJobRequest::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, SubmitTraceAbJobRequest::Output) };
    inline SubmitTraceAbJobRequest::Output getOutput() { DARABONBA_PTR_GET(output_, SubmitTraceAbJobRequest::Output) };
    inline SubmitTraceAbJobRequest& setOutput(const SubmitTraceAbJobRequest::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline SubmitTraceAbJobRequest& setOutput(SubmitTraceAbJobRequest::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SubmitTraceAbJobRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalTime Field Functions 
    bool hasTotalTime() const { return this->totalTime_ != nullptr;};
    void deleteTotalTime() { this->totalTime_ = nullptr;};
    inline int64_t getTotalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, 0L) };
    inline SubmitTraceAbJobRequest& setTotalTime(int64_t totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitTraceAbJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The Base64-encoded encryption key.
    shared_ptr<string> cipherBase64ed_ {};
    // The input video for the A/B stream forensic watermarking job.
    // 
    // > - The Object Storage Service (OSS) file or media asset must be in the same region where Intelligent Media Services (IMS) is deployed.
    // >
    // > - This operation supports only videos that are three minutes or longer. Using a shorter video may cause the API call to fail or produce no output.
    // 
    // This parameter is required.
    shared_ptr<SubmitTraceAbJobRequest::Input> input_ {};
    // The watermark level, which specifies the embedding channel. Valid values: `0` (U channel), `1` (UV channels), and `2` (YUV channels).
    shared_ptr<int64_t> level_ {};
    // The output location for the A/B stream job. This must be an OSS directory.
    // 
    // This parameter is required.
    shared_ptr<SubmitTraceAbJobRequest::Output> output_ {};
    // The start time for watermark embedding, in seconds.
    shared_ptr<int64_t> startTime_ {};
    // The total duration for watermark embedding, in seconds.
    shared_ptr<int64_t> totalTime_ {};
    // User data to include in the request. The maximum length is 1,024 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
