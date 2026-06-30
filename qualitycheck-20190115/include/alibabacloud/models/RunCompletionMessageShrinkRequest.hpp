// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMPLETIONMESSAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMPLETIONMESSAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class RunCompletionMessageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCompletionMessageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Messages, messagesShrink_);
      DARABONBA_PTR_TO_JSON(ModelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, RunCompletionMessageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Messages, messagesShrink_);
      DARABONBA_PTR_FROM_JSON(ModelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
    };
    RunCompletionMessageShrinkRequest() = default ;
    RunCompletionMessageShrinkRequest(const RunCompletionMessageShrinkRequest &) = default ;
    RunCompletionMessageShrinkRequest(RunCompletionMessageShrinkRequest &&) = default ;
    RunCompletionMessageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCompletionMessageShrinkRequest() = default ;
    RunCompletionMessageShrinkRequest& operator=(const RunCompletionMessageShrinkRequest &) = default ;
    RunCompletionMessageShrinkRequest& operator=(RunCompletionMessageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messagesShrink_ == nullptr
        && this->modelCode_ == nullptr && this->stream_ == nullptr; };
    // messagesShrink Field Functions 
    bool hasMessagesShrink() const { return this->messagesShrink_ != nullptr;};
    void deleteMessagesShrink() { this->messagesShrink_ = nullptr;};
    inline string getMessagesShrink() const { DARABONBA_PTR_GET_DEFAULT(messagesShrink_, "") };
    inline RunCompletionMessageShrinkRequest& setMessagesShrink(string messagesShrink) { DARABONBA_PTR_SET_VALUE(messagesShrink_, messagesShrink) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline RunCompletionMessageShrinkRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline RunCompletionMessageShrinkRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


  protected:
    // A list of messages that form the conversation history and the current prompt.
    shared_ptr<string> messagesShrink_ {};
    // The model specification to use. Valid values: `TYXM_PLUS` and `TYXM_TURBO`.
    shared_ptr<string> modelCode_ {};
    // Specifies whether to stream the response using Server-Sent Events (SSE). If `true`, the response is streamed. Defaults to `false`.
    shared_ptr<bool> stream_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
