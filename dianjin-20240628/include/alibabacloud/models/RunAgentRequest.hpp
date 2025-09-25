// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(botId, botId_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
      DARABONBA_PTR_TO_JSON(useDraft, useDraft_);
      DARABONBA_PTR_TO_JSON(userContent, userContent_);
      DARABONBA_ANY_TO_JSON(userInputs, userInputs_);
      DARABONBA_PTR_TO_JSON(versionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, RunAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(botId, botId_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
      DARABONBA_PTR_FROM_JSON(useDraft, useDraft_);
      DARABONBA_PTR_FROM_JSON(userContent, userContent_);
      DARABONBA_ANY_FROM_JSON(userInputs, userInputs_);
      DARABONBA_PTR_FROM_JSON(versionId, versionId_);
    };
    RunAgentRequest() = default ;
    RunAgentRequest(const RunAgentRequest &) = default ;
    RunAgentRequest(RunAgentRequest &&) = default ;
    RunAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunAgentRequest() = default ;
    RunAgentRequest& operator=(const RunAgentRequest &) = default ;
    RunAgentRequest& operator=(RunAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->botId_ != nullptr
        && this->modelId_ != nullptr && this->stream_ != nullptr && this->threadId_ != nullptr && this->useDraft_ != nullptr && this->userContent_ != nullptr
        && this->userInputs_ != nullptr && this->versionId_ != nullptr; };
    // botId Field Functions 
    bool hasBotId() const { return this->botId_ != nullptr;};
    void deleteBotId() { this->botId_ = nullptr;};
    inline string botId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
    inline RunAgentRequest& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunAgentRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline RunAgentRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string threadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline RunAgentRequest& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    // useDraft Field Functions 
    bool hasUseDraft() const { return this->useDraft_ != nullptr;};
    void deleteUseDraft() { this->useDraft_ = nullptr;};
    inline bool useDraft() const { DARABONBA_PTR_GET_DEFAULT(useDraft_, false) };
    inline RunAgentRequest& setUseDraft(bool useDraft) { DARABONBA_PTR_SET_VALUE(useDraft_, useDraft) };


    // userContent Field Functions 
    bool hasUserContent() const { return this->userContent_ != nullptr;};
    void deleteUserContent() { this->userContent_ = nullptr;};
    inline string userContent() const { DARABONBA_PTR_GET_DEFAULT(userContent_, "") };
    inline RunAgentRequest& setUserContent(string userContent) { DARABONBA_PTR_SET_VALUE(userContent_, userContent) };


    // userInputs Field Functions 
    bool hasUserInputs() const { return this->userInputs_ != nullptr;};
    void deleteUserInputs() { this->userInputs_ = nullptr;};
    inline     const Darabonba::Json & userInputs() const { DARABONBA_GET(userInputs_) };
    Darabonba::Json & userInputs() { DARABONBA_GET(userInputs_) };
    inline RunAgentRequest& setUserInputs(const Darabonba::Json & userInputs) { DARABONBA_SET_VALUE(userInputs_, userInputs) };
    inline RunAgentRequest& setUserInputs(Darabonba::Json & userInputs) { DARABONBA_SET_RVALUE(userInputs_, userInputs) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline RunAgentRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> botId_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<bool> stream_ = nullptr;
    std::shared_ptr<string> threadId_ = nullptr;
    std::shared_ptr<bool> useDraft_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userContent_ = nullptr;
    Darabonba::Json userInputs_ = nullptr;
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
