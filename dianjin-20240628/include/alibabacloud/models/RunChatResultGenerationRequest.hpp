// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCHATRESULTGENERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCHATRESULTGENERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunChatResultGenerationRequestMessages.hpp>
#include <alibabacloud/models/RunChatResultGenerationRequestTools.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunChatResultGenerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunChatResultGenerationRequest& obj) { 
      DARABONBA_ANY_TO_JSON(inferenceParameters, inferenceParameters_);
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(tools, tools_);
    };
    friend void from_json(const Darabonba::Json& j, RunChatResultGenerationRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(inferenceParameters, inferenceParameters_);
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(tools, tools_);
    };
    RunChatResultGenerationRequest() = default ;
    RunChatResultGenerationRequest(const RunChatResultGenerationRequest &) = default ;
    RunChatResultGenerationRequest(RunChatResultGenerationRequest &&) = default ;
    RunChatResultGenerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunChatResultGenerationRequest() = default ;
    RunChatResultGenerationRequest& operator=(const RunChatResultGenerationRequest &) = default ;
    RunChatResultGenerationRequest& operator=(RunChatResultGenerationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inferenceParameters_ != nullptr
        && this->messages_ != nullptr && this->modelId_ != nullptr && this->sessionId_ != nullptr && this->stream_ != nullptr && this->tools_ != nullptr; };
    // inferenceParameters Field Functions 
    bool hasInferenceParameters() const { return this->inferenceParameters_ != nullptr;};
    void deleteInferenceParameters() { this->inferenceParameters_ = nullptr;};
    inline     const Darabonba::Json & inferenceParameters() const { DARABONBA_GET(inferenceParameters_) };
    Darabonba::Json & inferenceParameters() { DARABONBA_GET(inferenceParameters_) };
    inline RunChatResultGenerationRequest& setInferenceParameters(const Darabonba::Json & inferenceParameters) { DARABONBA_SET_VALUE(inferenceParameters_, inferenceParameters) };
    inline RunChatResultGenerationRequest& setInferenceParameters(Darabonba::Json & inferenceParameters) { DARABONBA_SET_RVALUE(inferenceParameters_, inferenceParameters) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<RunChatResultGenerationRequestMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<RunChatResultGenerationRequestMessages>) };
    inline vector<RunChatResultGenerationRequestMessages> messages() { DARABONBA_PTR_GET(messages_, vector<RunChatResultGenerationRequestMessages>) };
    inline RunChatResultGenerationRequest& setMessages(const vector<RunChatResultGenerationRequestMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline RunChatResultGenerationRequest& setMessages(vector<RunChatResultGenerationRequestMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunChatResultGenerationRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunChatResultGenerationRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline RunChatResultGenerationRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<RunChatResultGenerationRequestTools> & tools() const { DARABONBA_PTR_GET_CONST(tools_, vector<RunChatResultGenerationRequestTools>) };
    inline vector<RunChatResultGenerationRequestTools> tools() { DARABONBA_PTR_GET(tools_, vector<RunChatResultGenerationRequestTools>) };
    inline RunChatResultGenerationRequest& setTools(const vector<RunChatResultGenerationRequestTools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline RunChatResultGenerationRequest& setTools(vector<RunChatResultGenerationRequestTools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


  protected:
    Darabonba::Json inferenceParameters_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<RunChatResultGenerationRequestMessages>> messages_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<bool> stream_ = nullptr;
    std::shared_ptr<vector<RunChatResultGenerationRequestTools>> tools_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
