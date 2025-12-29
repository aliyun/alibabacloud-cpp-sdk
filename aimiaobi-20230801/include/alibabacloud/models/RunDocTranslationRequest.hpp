// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCTRANSLATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCTRANSLATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocTranslationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocTranslationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CleanCache, cleanCache_);
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(RecommendContent, recommendContent_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TransType, transType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocTranslationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CleanCache, cleanCache_);
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(RecommendContent, recommendContent_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TransType, transType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunDocTranslationRequest() = default ;
    RunDocTranslationRequest(const RunDocTranslationRequest &) = default ;
    RunDocTranslationRequest(RunDocTranslationRequest &&) = default ;
    RunDocTranslationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocTranslationRequest() = default ;
    RunDocTranslationRequest& operator=(const RunDocTranslationRequest &) = default ;
    RunDocTranslationRequest& operator=(RunDocTranslationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cleanCache_ == nullptr
        && this->docId_ == nullptr && this->modelName_ == nullptr && this->recommendContent_ == nullptr && this->sessionId_ == nullptr && this->transType_ == nullptr
        && this->workspaceId_ == nullptr; };
    // cleanCache Field Functions 
    bool hasCleanCache() const { return this->cleanCache_ != nullptr;};
    void deleteCleanCache() { this->cleanCache_ = nullptr;};
    inline bool getCleanCache() const { DARABONBA_PTR_GET_DEFAULT(cleanCache_, false) };
    inline RunDocTranslationRequest& setCleanCache(bool cleanCache) { DARABONBA_PTR_SET_VALUE(cleanCache_, cleanCache) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline RunDocTranslationRequest& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline RunDocTranslationRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // recommendContent Field Functions 
    bool hasRecommendContent() const { return this->recommendContent_ != nullptr;};
    void deleteRecommendContent() { this->recommendContent_ = nullptr;};
    inline string getRecommendContent() const { DARABONBA_PTR_GET_DEFAULT(recommendContent_, "") };
    inline RunDocTranslationRequest& setRecommendContent(string recommendContent) { DARABONBA_PTR_SET_VALUE(recommendContent_, recommendContent) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunDocTranslationRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // transType Field Functions 
    bool hasTransType() const { return this->transType_ != nullptr;};
    void deleteTransType() { this->transType_ = nullptr;};
    inline string getTransType() const { DARABONBA_PTR_GET_DEFAULT(transType_, "") };
    inline RunDocTranslationRequest& setTransType(string transType) { DARABONBA_PTR_SET_VALUE(transType_, transType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunDocTranslationRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<bool> cleanCache_ {};
    shared_ptr<string> docId_ {};
    shared_ptr<string> modelName_ {};
    shared_ptr<string> recommendContent_ {};
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> transType_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
