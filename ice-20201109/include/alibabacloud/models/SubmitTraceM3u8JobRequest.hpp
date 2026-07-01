// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRACEM3U8JOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRACEM3U8JOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTraceM3u8JobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTraceM3u8JobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyUri, keyUri_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(Trace, trace_);
      DARABONBA_PTR_TO_JSON(TraceMediaId, traceMediaId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTraceM3u8JobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyUri, keyUri_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(Trace, trace_);
      DARABONBA_PTR_FROM_JSON(TraceMediaId, traceMediaId_);
    };
    SubmitTraceM3u8JobRequest() = default ;
    SubmitTraceM3u8JobRequest(const SubmitTraceM3u8JobRequest &) = default ;
    SubmitTraceM3u8JobRequest(SubmitTraceM3u8JobRequest &&) = default ;
    SubmitTraceM3u8JobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTraceM3u8JobRequest() = default ;
    SubmitTraceM3u8JobRequest& operator=(const SubmitTraceM3u8JobRequest &) = default ;
    SubmitTraceM3u8JobRequest& operator=(SubmitTraceM3u8JobRequest &&) = default ;
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
      // The output file path. Only OSS paths are supported. You can use one of the following formats:
      // 
      // 1\\. `oss://bucket/object`
      // 
      // 2\\. `http(s)://bucket.oss-[regionId].aliyuncs.com/object`. In these formats, `bucket` specifies the name of an OSS bucket in the same region as your project, and `object` specifies the file path.
      // 
      // This parameter is required.
      shared_ptr<string> media_ {};
      // The type of the output destination. Valid values:
      // 
      // 1. `OSS`: an OSS file location.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->keyUri_ == nullptr
        && this->output_ == nullptr && this->params_ == nullptr && this->trace_ == nullptr && this->traceMediaId_ == nullptr; };
    // keyUri Field Functions 
    bool hasKeyUri() const { return this->keyUri_ != nullptr;};
    void deleteKeyUri() { this->keyUri_ = nullptr;};
    inline string getKeyUri() const { DARABONBA_PTR_GET_DEFAULT(keyUri_, "") };
    inline SubmitTraceM3u8JobRequest& setKeyUri(string keyUri) { DARABONBA_PTR_SET_VALUE(keyUri_, keyUri) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const SubmitTraceM3u8JobRequest::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, SubmitTraceM3u8JobRequest::Output) };
    inline SubmitTraceM3u8JobRequest::Output getOutput() { DARABONBA_PTR_GET(output_, SubmitTraceM3u8JobRequest::Output) };
    inline SubmitTraceM3u8JobRequest& setOutput(const SubmitTraceM3u8JobRequest::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline SubmitTraceM3u8JobRequest& setOutput(SubmitTraceM3u8JobRequest::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline SubmitTraceM3u8JobRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // trace Field Functions 
    bool hasTrace() const { return this->trace_ != nullptr;};
    void deleteTrace() { this->trace_ = nullptr;};
    inline string getTrace() const { DARABONBA_PTR_GET_DEFAULT(trace_, "") };
    inline SubmitTraceM3u8JobRequest& setTrace(string trace) { DARABONBA_PTR_SET_VALUE(trace_, trace) };


    // traceMediaId Field Functions 
    bool hasTraceMediaId() const { return this->traceMediaId_ != nullptr;};
    void deleteTraceMediaId() { this->traceMediaId_ = nullptr;};
    inline string getTraceMediaId() const { DARABONBA_PTR_GET_DEFAULT(traceMediaId_, "") };
    inline SubmitTraceM3u8JobRequest& setTraceMediaId(string traceMediaId) { DARABONBA_PTR_SET_VALUE(traceMediaId_, traceMediaId) };


  protected:
    // The URI of the key server.
    shared_ptr<string> keyUri_ {};
    // The OSS destination for the output M3U8 file.
    // 
    // > The OSS bucket must be in the same region as your MPS service.
    // 
    // This parameter is required.
    shared_ptr<SubmitTraceM3u8JobRequest::Output> output_ {};
    // A JSON string that contains parameters for the watermarking job. The following parameter is supported:
    // 
    // - `m3u8Type`: The algorithm type. The default value is `v1`.
    // 
    //   - `v1`: Generates an M3U8 file that uses an absolute path. The file can be played directly. The signature is valid for 24 hours. After expiration, you must submit a new job to get a new M3U8 file.
    // 
    //   - `v2`: Generates an M3U8 file that uses a relative path. This file must be stored in the same directory as the TS files.
    shared_ptr<string> params_ {};
    // The watermark content to embed.
    shared_ptr<string> trace_ {};
    // The media ID of the processed A/B stream for video watermarking for tracing. This ID is returned in the response when you submit the A/B stream job.
    shared_ptr<string> traceMediaId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
