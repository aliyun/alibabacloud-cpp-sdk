// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCINTRODUCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCINTRODUCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocIntroductionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocIntroductionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CleanCache, cleanCache_);
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(IntroductionPrompt, introductionPrompt_);
      DARABONBA_PTR_TO_JSON(KeyPointPrompt, keyPointPrompt_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SummaryPrompt, summaryPrompt_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(referenceContent, referenceContent_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocIntroductionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CleanCache, cleanCache_);
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(IntroductionPrompt, introductionPrompt_);
      DARABONBA_PTR_FROM_JSON(KeyPointPrompt, keyPointPrompt_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SummaryPrompt, summaryPrompt_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(referenceContent, referenceContent_);
    };
    RunDocIntroductionRequest() = default ;
    RunDocIntroductionRequest(const RunDocIntroductionRequest &) = default ;
    RunDocIntroductionRequest(RunDocIntroductionRequest &&) = default ;
    RunDocIntroductionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocIntroductionRequest() = default ;
    RunDocIntroductionRequest& operator=(const RunDocIntroductionRequest &) = default ;
    RunDocIntroductionRequest& operator=(RunDocIntroductionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cleanCache_ != nullptr
        && this->docId_ != nullptr && this->introductionPrompt_ != nullptr && this->keyPointPrompt_ != nullptr && this->modelName_ != nullptr && this->sessionId_ != nullptr
        && this->summaryPrompt_ != nullptr && this->workspaceId_ != nullptr && this->referenceContent_ != nullptr; };
    // cleanCache Field Functions 
    bool hasCleanCache() const { return this->cleanCache_ != nullptr;};
    void deleteCleanCache() { this->cleanCache_ = nullptr;};
    inline bool cleanCache() const { DARABONBA_PTR_GET_DEFAULT(cleanCache_, false) };
    inline RunDocIntroductionRequest& setCleanCache(bool cleanCache) { DARABONBA_PTR_SET_VALUE(cleanCache_, cleanCache) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline RunDocIntroductionRequest& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // introductionPrompt Field Functions 
    bool hasIntroductionPrompt() const { return this->introductionPrompt_ != nullptr;};
    void deleteIntroductionPrompt() { this->introductionPrompt_ = nullptr;};
    inline string introductionPrompt() const { DARABONBA_PTR_GET_DEFAULT(introductionPrompt_, "") };
    inline RunDocIntroductionRequest& setIntroductionPrompt(string introductionPrompt) { DARABONBA_PTR_SET_VALUE(introductionPrompt_, introductionPrompt) };


    // keyPointPrompt Field Functions 
    bool hasKeyPointPrompt() const { return this->keyPointPrompt_ != nullptr;};
    void deleteKeyPointPrompt() { this->keyPointPrompt_ = nullptr;};
    inline string keyPointPrompt() const { DARABONBA_PTR_GET_DEFAULT(keyPointPrompt_, "") };
    inline RunDocIntroductionRequest& setKeyPointPrompt(string keyPointPrompt) { DARABONBA_PTR_SET_VALUE(keyPointPrompt_, keyPointPrompt) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline RunDocIntroductionRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunDocIntroductionRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // summaryPrompt Field Functions 
    bool hasSummaryPrompt() const { return this->summaryPrompt_ != nullptr;};
    void deleteSummaryPrompt() { this->summaryPrompt_ = nullptr;};
    inline string summaryPrompt() const { DARABONBA_PTR_GET_DEFAULT(summaryPrompt_, "") };
    inline RunDocIntroductionRequest& setSummaryPrompt(string summaryPrompt) { DARABONBA_PTR_SET_VALUE(summaryPrompt_, summaryPrompt) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunDocIntroductionRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // referenceContent Field Functions 
    bool hasReferenceContent() const { return this->referenceContent_ != nullptr;};
    void deleteReferenceContent() { this->referenceContent_ = nullptr;};
    inline string referenceContent() const { DARABONBA_PTR_GET_DEFAULT(referenceContent_, "") };
    inline RunDocIntroductionRequest& setReferenceContent(string referenceContent) { DARABONBA_PTR_SET_VALUE(referenceContent_, referenceContent) };


  protected:
    std::shared_ptr<bool> cleanCache_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<string> introductionPrompt_ = nullptr;
    std::shared_ptr<string> keyPointPrompt_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> summaryPrompt_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<string> referenceContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
