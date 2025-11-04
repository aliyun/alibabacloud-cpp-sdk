// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRACEM3U8JOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRACEM3U8JOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTraceM3u8JobRequestOutput.hpp>
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
    virtual bool empty() const override { return this->keyUri_ == nullptr
        && return this->output_ == nullptr && return this->params_ == nullptr && return this->trace_ == nullptr && return this->traceMediaId_ == nullptr; };
    // keyUri Field Functions 
    bool hasKeyUri() const { return this->keyUri_ != nullptr;};
    void deleteKeyUri() { this->keyUri_ = nullptr;};
    inline string keyUri() const { DARABONBA_PTR_GET_DEFAULT(keyUri_, "") };
    inline SubmitTraceM3u8JobRequest& setKeyUri(string keyUri) { DARABONBA_PTR_SET_VALUE(keyUri_, keyUri) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const SubmitTraceM3u8JobRequestOutput & output() const { DARABONBA_PTR_GET_CONST(output_, SubmitTraceM3u8JobRequestOutput) };
    inline SubmitTraceM3u8JobRequestOutput output() { DARABONBA_PTR_GET(output_, SubmitTraceM3u8JobRequestOutput) };
    inline SubmitTraceM3u8JobRequest& setOutput(const SubmitTraceM3u8JobRequestOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline SubmitTraceM3u8JobRequest& setOutput(SubmitTraceM3u8JobRequestOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline SubmitTraceM3u8JobRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // trace Field Functions 
    bool hasTrace() const { return this->trace_ != nullptr;};
    void deleteTrace() { this->trace_ = nullptr;};
    inline string trace() const { DARABONBA_PTR_GET_DEFAULT(trace_, "") };
    inline SubmitTraceM3u8JobRequest& setTrace(string trace) { DARABONBA_PTR_SET_VALUE(trace_, trace) };


    // traceMediaId Field Functions 
    bool hasTraceMediaId() const { return this->traceMediaId_ != nullptr;};
    void deleteTraceMediaId() { this->traceMediaId_ = nullptr;};
    inline string traceMediaId() const { DARABONBA_PTR_GET_DEFAULT(traceMediaId_, "") };
    inline SubmitTraceM3u8JobRequest& setTraceMediaId(string traceMediaId) { DARABONBA_PTR_SET_VALUE(traceMediaId_, traceMediaId) };


  protected:
    // The URI of the key server.
    std::shared_ptr<string> keyUri_ = nullptr;
    // The OSS URL of the output M3U8 file.
    // 
    // > The OSS bucket must reside in the same region as the service region.
    // 
    // This parameter is required.
    std::shared_ptr<SubmitTraceM3u8JobRequestOutput> output_ = nullptr;
    // Additional parameters for the watermark job, provided as a JSON string. Supported parameter:
    // 
    // *   m3u8Type: The type of M3U8 to generate. Defaults to v1.
    // 
    //     *   v1: Generates an M3U8 with absolute paths, playable directly. The signed URL for access is valid for 24 hours. If you need to use it after expiration, you must call this API again.
    //     *   v2: Generates an M3U8 with relative paths. It must be placed in the same directory as the TS segment files to be playable.
    std::shared_ptr<string> params_ = nullptr;
    // The specific trace watermark information.
    std::shared_ptr<string> trace_ = nullptr;
    // The media ID for the trace watermark. You can obtain this from the response of the SubmitTraceAbJob operation.
    std::shared_ptr<string> traceMediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
