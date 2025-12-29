// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCQAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCQAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocQaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocQaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryIds, categoryIds_);
      DARABONBA_PTR_TO_JSON(ConversationContexts, conversationContexts_);
      DARABONBA_PTR_TO_JSON(DocIds, docIds_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(ReferenceContent, referenceContent_);
      DARABONBA_PTR_TO_JSON(SearchSource, searchSource_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocQaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryIds, categoryIds_);
      DARABONBA_PTR_FROM_JSON(ConversationContexts, conversationContexts_);
      DARABONBA_PTR_FROM_JSON(DocIds, docIds_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(ReferenceContent, referenceContent_);
      DARABONBA_PTR_FROM_JSON(SearchSource, searchSource_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunDocQaRequest() = default ;
    RunDocQaRequest(const RunDocQaRequest &) = default ;
    RunDocQaRequest(RunDocQaRequest &&) = default ;
    RunDocQaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocQaRequest() = default ;
    RunDocQaRequest& operator=(const RunDocQaRequest &) = default ;
    RunDocQaRequest& operator=(RunDocQaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConversationContexts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConversationContexts& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Role, role_);
      };
      friend void from_json(const Darabonba::Json& j, ConversationContexts& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
      };
      ConversationContexts() = default ;
      ConversationContexts(const ConversationContexts &) = default ;
      ConversationContexts(ConversationContexts &&) = default ;
      ConversationContexts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConversationContexts() = default ;
      ConversationContexts& operator=(const ConversationContexts &) = default ;
      ConversationContexts& operator=(ConversationContexts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline ConversationContexts& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline ConversationContexts& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->categoryIds_ == nullptr
        && this->conversationContexts_ == nullptr && this->docIds_ == nullptr && this->modelName_ == nullptr && this->query_ == nullptr && this->referenceContent_ == nullptr
        && this->searchSource_ == nullptr && this->sessionId_ == nullptr && this->workspaceId_ == nullptr; };
    // categoryIds Field Functions 
    bool hasCategoryIds() const { return this->categoryIds_ != nullptr;};
    void deleteCategoryIds() { this->categoryIds_ = nullptr;};
    inline const vector<string> & getCategoryIds() const { DARABONBA_PTR_GET_CONST(categoryIds_, vector<string>) };
    inline vector<string> getCategoryIds() { DARABONBA_PTR_GET(categoryIds_, vector<string>) };
    inline RunDocQaRequest& setCategoryIds(const vector<string> & categoryIds) { DARABONBA_PTR_SET_VALUE(categoryIds_, categoryIds) };
    inline RunDocQaRequest& setCategoryIds(vector<string> && categoryIds) { DARABONBA_PTR_SET_RVALUE(categoryIds_, categoryIds) };


    // conversationContexts Field Functions 
    bool hasConversationContexts() const { return this->conversationContexts_ != nullptr;};
    void deleteConversationContexts() { this->conversationContexts_ = nullptr;};
    inline const vector<RunDocQaRequest::ConversationContexts> & getConversationContexts() const { DARABONBA_PTR_GET_CONST(conversationContexts_, vector<RunDocQaRequest::ConversationContexts>) };
    inline vector<RunDocQaRequest::ConversationContexts> getConversationContexts() { DARABONBA_PTR_GET(conversationContexts_, vector<RunDocQaRequest::ConversationContexts>) };
    inline RunDocQaRequest& setConversationContexts(const vector<RunDocQaRequest::ConversationContexts> & conversationContexts) { DARABONBA_PTR_SET_VALUE(conversationContexts_, conversationContexts) };
    inline RunDocQaRequest& setConversationContexts(vector<RunDocQaRequest::ConversationContexts> && conversationContexts) { DARABONBA_PTR_SET_RVALUE(conversationContexts_, conversationContexts) };


    // docIds Field Functions 
    bool hasDocIds() const { return this->docIds_ != nullptr;};
    void deleteDocIds() { this->docIds_ = nullptr;};
    inline const vector<string> & getDocIds() const { DARABONBA_PTR_GET_CONST(docIds_, vector<string>) };
    inline vector<string> getDocIds() { DARABONBA_PTR_GET(docIds_, vector<string>) };
    inline RunDocQaRequest& setDocIds(const vector<string> & docIds) { DARABONBA_PTR_SET_VALUE(docIds_, docIds) };
    inline RunDocQaRequest& setDocIds(vector<string> && docIds) { DARABONBA_PTR_SET_RVALUE(docIds_, docIds) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline RunDocQaRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RunDocQaRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // referenceContent Field Functions 
    bool hasReferenceContent() const { return this->referenceContent_ != nullptr;};
    void deleteReferenceContent() { this->referenceContent_ = nullptr;};
    inline string getReferenceContent() const { DARABONBA_PTR_GET_DEFAULT(referenceContent_, "") };
    inline RunDocQaRequest& setReferenceContent(string referenceContent) { DARABONBA_PTR_SET_VALUE(referenceContent_, referenceContent) };


    // searchSource Field Functions 
    bool hasSearchSource() const { return this->searchSource_ != nullptr;};
    void deleteSearchSource() { this->searchSource_ = nullptr;};
    inline string getSearchSource() const { DARABONBA_PTR_GET_DEFAULT(searchSource_, "") };
    inline RunDocQaRequest& setSearchSource(string searchSource) { DARABONBA_PTR_SET_VALUE(searchSource_, searchSource) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunDocQaRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunDocQaRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<vector<string>> categoryIds_ {};
    shared_ptr<vector<RunDocQaRequest::ConversationContexts>> conversationContexts_ {};
    shared_ptr<vector<string>> docIds_ {};
    shared_ptr<string> modelName_ {};
    // This parameter is required.
    shared_ptr<string> query_ {};
    shared_ptr<string> referenceContent_ {};
    // This parameter is required.
    shared_ptr<string> searchSource_ {};
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
