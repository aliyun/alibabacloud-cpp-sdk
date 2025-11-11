// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCWASHINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCWASHINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocWashingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocWashingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(ReferenceContent, referenceContent_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(WordNumber, wordNumber_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WritingTypeName, writingTypeName_);
      DARABONBA_PTR_TO_JSON(WritingTypeRefDoc, writingTypeRefDoc_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocWashingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(ReferenceContent, referenceContent_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(WordNumber, wordNumber_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WritingTypeName, writingTypeName_);
      DARABONBA_PTR_FROM_JSON(WritingTypeRefDoc, writingTypeRefDoc_);
    };
    RunDocWashingRequest() = default ;
    RunDocWashingRequest(const RunDocWashingRequest &) = default ;
    RunDocWashingRequest(RunDocWashingRequest &&) = default ;
    RunDocWashingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocWashingRequest() = default ;
    RunDocWashingRequest& operator=(const RunDocWashingRequest &) = default ;
    RunDocWashingRequest& operator=(RunDocWashingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelId_ == nullptr
        && return this->prompt_ == nullptr && return this->referenceContent_ == nullptr && return this->sessionId_ == nullptr && return this->topic_ == nullptr && return this->wordNumber_ == nullptr
        && return this->workspaceId_ == nullptr && return this->writingTypeName_ == nullptr && return this->writingTypeRefDoc_ == nullptr; };
    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunDocWashingRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunDocWashingRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // referenceContent Field Functions 
    bool hasReferenceContent() const { return this->referenceContent_ != nullptr;};
    void deleteReferenceContent() { this->referenceContent_ = nullptr;};
    inline string referenceContent() const { DARABONBA_PTR_GET_DEFAULT(referenceContent_, "") };
    inline RunDocWashingRequest& setReferenceContent(string referenceContent) { DARABONBA_PTR_SET_VALUE(referenceContent_, referenceContent) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunDocWashingRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline RunDocWashingRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // wordNumber Field Functions 
    bool hasWordNumber() const { return this->wordNumber_ != nullptr;};
    void deleteWordNumber() { this->wordNumber_ = nullptr;};
    inline int32_t wordNumber() const { DARABONBA_PTR_GET_DEFAULT(wordNumber_, 0) };
    inline RunDocWashingRequest& setWordNumber(int32_t wordNumber) { DARABONBA_PTR_SET_VALUE(wordNumber_, wordNumber) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunDocWashingRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // writingTypeName Field Functions 
    bool hasWritingTypeName() const { return this->writingTypeName_ != nullptr;};
    void deleteWritingTypeName() { this->writingTypeName_ = nullptr;};
    inline string writingTypeName() const { DARABONBA_PTR_GET_DEFAULT(writingTypeName_, "") };
    inline RunDocWashingRequest& setWritingTypeName(string writingTypeName) { DARABONBA_PTR_SET_VALUE(writingTypeName_, writingTypeName) };


    // writingTypeRefDoc Field Functions 
    bool hasWritingTypeRefDoc() const { return this->writingTypeRefDoc_ != nullptr;};
    void deleteWritingTypeRefDoc() { this->writingTypeRefDoc_ = nullptr;};
    inline string writingTypeRefDoc() const { DARABONBA_PTR_GET_DEFAULT(writingTypeRefDoc_, "") };
    inline RunDocWashingRequest& setWritingTypeRefDoc(string writingTypeRefDoc) { DARABONBA_PTR_SET_VALUE(writingTypeRefDoc_, writingTypeRefDoc) };


  protected:
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> referenceContent_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
    std::shared_ptr<int32_t> wordNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<string> writingTypeName_ = nullptr;
    std::shared_ptr<string> writingTypeRefDoc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
