// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNBOOKBRAINMAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNBOOKBRAINMAPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunBookBrainmapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunBookBrainmapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CleanCache, cleanCache_);
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(NodeNumber, nodeNumber_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(WordNumber, wordNumber_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunBookBrainmapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CleanCache, cleanCache_);
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(NodeNumber, nodeNumber_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(WordNumber, wordNumber_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunBookBrainmapRequest() = default ;
    RunBookBrainmapRequest(const RunBookBrainmapRequest &) = default ;
    RunBookBrainmapRequest(RunBookBrainmapRequest &&) = default ;
    RunBookBrainmapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunBookBrainmapRequest() = default ;
    RunBookBrainmapRequest& operator=(const RunBookBrainmapRequest &) = default ;
    RunBookBrainmapRequest& operator=(RunBookBrainmapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cleanCache_ == nullptr
        && return this->docId_ == nullptr && return this->nodeNumber_ == nullptr && return this->prompt_ == nullptr && return this->sessionId_ == nullptr && return this->wordNumber_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // cleanCache Field Functions 
    bool hasCleanCache() const { return this->cleanCache_ != nullptr;};
    void deleteCleanCache() { this->cleanCache_ = nullptr;};
    inline bool cleanCache() const { DARABONBA_PTR_GET_DEFAULT(cleanCache_, false) };
    inline RunBookBrainmapRequest& setCleanCache(bool cleanCache) { DARABONBA_PTR_SET_VALUE(cleanCache_, cleanCache) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline RunBookBrainmapRequest& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // nodeNumber Field Functions 
    bool hasNodeNumber() const { return this->nodeNumber_ != nullptr;};
    void deleteNodeNumber() { this->nodeNumber_ = nullptr;};
    inline int32_t nodeNumber() const { DARABONBA_PTR_GET_DEFAULT(nodeNumber_, 0) };
    inline RunBookBrainmapRequest& setNodeNumber(int32_t nodeNumber) { DARABONBA_PTR_SET_VALUE(nodeNumber_, nodeNumber) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunBookBrainmapRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunBookBrainmapRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // wordNumber Field Functions 
    bool hasWordNumber() const { return this->wordNumber_ != nullptr;};
    void deleteWordNumber() { this->wordNumber_ = nullptr;};
    inline int32_t wordNumber() const { DARABONBA_PTR_GET_DEFAULT(wordNumber_, 0) };
    inline RunBookBrainmapRequest& setWordNumber(int32_t wordNumber) { DARABONBA_PTR_SET_VALUE(wordNumber_, wordNumber) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunBookBrainmapRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<bool> cleanCache_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<int32_t> nodeNumber_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<int32_t> wordNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
