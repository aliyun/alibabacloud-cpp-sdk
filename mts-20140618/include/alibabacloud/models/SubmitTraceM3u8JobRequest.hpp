// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRACEM3U8JOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRACEM3U8JOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitTraceM3u8JobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTraceM3u8JobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyUri, keyUri_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(Trace, trace_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTraceM3u8JobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyUri, keyUri_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(Trace, trace_);
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
        && this->mediaId_ == nullptr && this->output_ == nullptr && this->params_ == nullptr && this->trace_ == nullptr; };
    // keyUri Field Functions 
    bool hasKeyUri() const { return this->keyUri_ != nullptr;};
    void deleteKeyUri() { this->keyUri_ = nullptr;};
    inline string getKeyUri() const { DARABONBA_PTR_GET_DEFAULT(keyUri_, "") };
    inline SubmitTraceM3u8JobRequest& setKeyUri(string keyUri) { DARABONBA_PTR_SET_VALUE(keyUri_, keyUri) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SubmitTraceM3u8JobRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline SubmitTraceM3u8JobRequest& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


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


  protected:
    shared_ptr<string> keyUri_ {};
    shared_ptr<string> mediaId_ {};
    shared_ptr<string> output_ {};
    shared_ptr<string> params_ {};
    shared_ptr<string> trace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
