// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CleanCache, cleanCache_);
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(RecommendContent, recommendContent_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CleanCache, cleanCache_);
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(RecommendContent, recommendContent_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunDocSummaryRequest() = default ;
    RunDocSummaryRequest(const RunDocSummaryRequest &) = default ;
    RunDocSummaryRequest(RunDocSummaryRequest &&) = default ;
    RunDocSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocSummaryRequest() = default ;
    RunDocSummaryRequest& operator=(const RunDocSummaryRequest &) = default ;
    RunDocSummaryRequest& operator=(RunDocSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cleanCache_ == nullptr
        && this->docId_ == nullptr && this->modelName_ == nullptr && this->query_ == nullptr && this->recommendContent_ == nullptr && this->sessionId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // cleanCache Field Functions 
    bool hasCleanCache() const { return this->cleanCache_ != nullptr;};
    void deleteCleanCache() { this->cleanCache_ = nullptr;};
    inline bool getCleanCache() const { DARABONBA_PTR_GET_DEFAULT(cleanCache_, false) };
    inline RunDocSummaryRequest& setCleanCache(bool cleanCache) { DARABONBA_PTR_SET_VALUE(cleanCache_, cleanCache) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline RunDocSummaryRequest& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline RunDocSummaryRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RunDocSummaryRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // recommendContent Field Functions 
    bool hasRecommendContent() const { return this->recommendContent_ != nullptr;};
    void deleteRecommendContent() { this->recommendContent_ = nullptr;};
    inline string getRecommendContent() const { DARABONBA_PTR_GET_DEFAULT(recommendContent_, "") };
    inline RunDocSummaryRequest& setRecommendContent(string recommendContent) { DARABONBA_PTR_SET_VALUE(recommendContent_, recommendContent) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunDocSummaryRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunDocSummaryRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<bool> cleanCache_ {};
    shared_ptr<string> docId_ {};
    shared_ptr<string> modelName_ {};
    shared_ptr<string> query_ {};
    shared_ptr<string> recommendContent_ {};
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
