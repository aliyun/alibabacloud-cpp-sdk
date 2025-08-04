// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunHotwordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotwordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(ReferenceContent, referenceContent_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotwordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(ReferenceContent, referenceContent_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunHotwordRequest() = default ;
    RunHotwordRequest(const RunHotwordRequest &) = default ;
    RunHotwordRequest(RunHotwordRequest &&) = default ;
    RunHotwordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotwordRequest() = default ;
    RunHotwordRequest& operator=(const RunHotwordRequest &) = default ;
    RunHotwordRequest& operator=(RunHotwordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docId_ != nullptr
        && this->modelName_ != nullptr && this->prompt_ != nullptr && this->referenceContent_ != nullptr && this->sessionId_ != nullptr && this->workspaceId_ != nullptr; };
    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline RunHotwordRequest& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline RunHotwordRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunHotwordRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // referenceContent Field Functions 
    bool hasReferenceContent() const { return this->referenceContent_ != nullptr;};
    void deleteReferenceContent() { this->referenceContent_ = nullptr;};
    inline string referenceContent() const { DARABONBA_PTR_GET_DEFAULT(referenceContent_, "") };
    inline RunHotwordRequest& setReferenceContent(string referenceContent) { DARABONBA_PTR_SET_VALUE(referenceContent_, referenceContent) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunHotwordRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunHotwordRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> referenceContent_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
