// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCBRAINMAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCBRAINMAPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocBrainmapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocBrainmapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CleanCache, cleanCache_);
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(NodeNumber, nodeNumber_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(WordNumber, wordNumber_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(referenceContent, referenceContent_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocBrainmapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CleanCache, cleanCache_);
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(NodeNumber, nodeNumber_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(WordNumber, wordNumber_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(referenceContent, referenceContent_);
    };
    RunDocBrainmapRequest() = default ;
    RunDocBrainmapRequest(const RunDocBrainmapRequest &) = default ;
    RunDocBrainmapRequest(RunDocBrainmapRequest &&) = default ;
    RunDocBrainmapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocBrainmapRequest() = default ;
    RunDocBrainmapRequest& operator=(const RunDocBrainmapRequest &) = default ;
    RunDocBrainmapRequest& operator=(RunDocBrainmapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cleanCache_ == nullptr
        && return this->docId_ == nullptr && return this->modelName_ == nullptr && return this->nodeNumber_ == nullptr && return this->prompt_ == nullptr && return this->sessionId_ == nullptr
        && return this->wordNumber_ == nullptr && return this->workspaceId_ == nullptr && return this->referenceContent_ == nullptr; };
    // cleanCache Field Functions 
    bool hasCleanCache() const { return this->cleanCache_ != nullptr;};
    void deleteCleanCache() { this->cleanCache_ = nullptr;};
    inline bool cleanCache() const { DARABONBA_PTR_GET_DEFAULT(cleanCache_, false) };
    inline RunDocBrainmapRequest& setCleanCache(bool cleanCache) { DARABONBA_PTR_SET_VALUE(cleanCache_, cleanCache) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline RunDocBrainmapRequest& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline RunDocBrainmapRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // nodeNumber Field Functions 
    bool hasNodeNumber() const { return this->nodeNumber_ != nullptr;};
    void deleteNodeNumber() { this->nodeNumber_ = nullptr;};
    inline int32_t nodeNumber() const { DARABONBA_PTR_GET_DEFAULT(nodeNumber_, 0) };
    inline RunDocBrainmapRequest& setNodeNumber(int32_t nodeNumber) { DARABONBA_PTR_SET_VALUE(nodeNumber_, nodeNumber) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunDocBrainmapRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunDocBrainmapRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // wordNumber Field Functions 
    bool hasWordNumber() const { return this->wordNumber_ != nullptr;};
    void deleteWordNumber() { this->wordNumber_ = nullptr;};
    inline int32_t wordNumber() const { DARABONBA_PTR_GET_DEFAULT(wordNumber_, 0) };
    inline RunDocBrainmapRequest& setWordNumber(int32_t wordNumber) { DARABONBA_PTR_SET_VALUE(wordNumber_, wordNumber) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunDocBrainmapRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // referenceContent Field Functions 
    bool hasReferenceContent() const { return this->referenceContent_ != nullptr;};
    void deleteReferenceContent() { this->referenceContent_ = nullptr;};
    inline string referenceContent() const { DARABONBA_PTR_GET_DEFAULT(referenceContent_, "") };
    inline RunDocBrainmapRequest& setReferenceContent(string referenceContent) { DARABONBA_PTR_SET_VALUE(referenceContent_, referenceContent) };


  protected:
    std::shared_ptr<bool> cleanCache_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<int32_t> nodeNumber_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<int32_t> wordNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<string> referenceContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
