// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRACEM3U8JOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRACEM3U8JOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTraceM3u8JobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTraceM3u8JobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyUri, keyUri_);
      DARABONBA_PTR_TO_JSON(Output, outputShrink_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(Trace, trace_);
      DARABONBA_PTR_TO_JSON(TraceMediaId, traceMediaId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTraceM3u8JobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyUri, keyUri_);
      DARABONBA_PTR_FROM_JSON(Output, outputShrink_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(Trace, trace_);
      DARABONBA_PTR_FROM_JSON(TraceMediaId, traceMediaId_);
    };
    SubmitTraceM3u8JobShrinkRequest() = default ;
    SubmitTraceM3u8JobShrinkRequest(const SubmitTraceM3u8JobShrinkRequest &) = default ;
    SubmitTraceM3u8JobShrinkRequest(SubmitTraceM3u8JobShrinkRequest &&) = default ;
    SubmitTraceM3u8JobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTraceM3u8JobShrinkRequest() = default ;
    SubmitTraceM3u8JobShrinkRequest& operator=(const SubmitTraceM3u8JobShrinkRequest &) = default ;
    SubmitTraceM3u8JobShrinkRequest& operator=(SubmitTraceM3u8JobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyUri_ != nullptr
        && this->outputShrink_ != nullptr && this->params_ != nullptr && this->trace_ != nullptr && this->traceMediaId_ != nullptr; };
    // keyUri Field Functions 
    bool hasKeyUri() const { return this->keyUri_ != nullptr;};
    void deleteKeyUri() { this->keyUri_ = nullptr;};
    inline string keyUri() const { DARABONBA_PTR_GET_DEFAULT(keyUri_, "") };
    inline SubmitTraceM3u8JobShrinkRequest& setKeyUri(string keyUri) { DARABONBA_PTR_SET_VALUE(keyUri_, keyUri) };


    // outputShrink Field Functions 
    bool hasOutputShrink() const { return this->outputShrink_ != nullptr;};
    void deleteOutputShrink() { this->outputShrink_ = nullptr;};
    inline string outputShrink() const { DARABONBA_PTR_GET_DEFAULT(outputShrink_, "") };
    inline SubmitTraceM3u8JobShrinkRequest& setOutputShrink(string outputShrink) { DARABONBA_PTR_SET_VALUE(outputShrink_, outputShrink) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline SubmitTraceM3u8JobShrinkRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // trace Field Functions 
    bool hasTrace() const { return this->trace_ != nullptr;};
    void deleteTrace() { this->trace_ = nullptr;};
    inline string trace() const { DARABONBA_PTR_GET_DEFAULT(trace_, "") };
    inline SubmitTraceM3u8JobShrinkRequest& setTrace(string trace) { DARABONBA_PTR_SET_VALUE(trace_, trace) };


    // traceMediaId Field Functions 
    bool hasTraceMediaId() const { return this->traceMediaId_ != nullptr;};
    void deleteTraceMediaId() { this->traceMediaId_ = nullptr;};
    inline string traceMediaId() const { DARABONBA_PTR_GET_DEFAULT(traceMediaId_, "") };
    inline SubmitTraceM3u8JobShrinkRequest& setTraceMediaId(string traceMediaId) { DARABONBA_PTR_SET_VALUE(traceMediaId_, traceMediaId) };


  protected:
    std::shared_ptr<string> keyUri_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outputShrink_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
    std::shared_ptr<string> trace_ = nullptr;
    std::shared_ptr<string> traceMediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
