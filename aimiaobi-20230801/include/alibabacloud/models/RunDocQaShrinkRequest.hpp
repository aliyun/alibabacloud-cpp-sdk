// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCQASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCQASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocQaShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocQaShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryIds, categoryIdsShrink_);
      DARABONBA_PTR_TO_JSON(ConversationContexts, conversationContextsShrink_);
      DARABONBA_PTR_TO_JSON(DocIds, docIdsShrink_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(ReferenceContent, referenceContent_);
      DARABONBA_PTR_TO_JSON(SearchSource, searchSource_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocQaShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryIds, categoryIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ConversationContexts, conversationContextsShrink_);
      DARABONBA_PTR_FROM_JSON(DocIds, docIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(ReferenceContent, referenceContent_);
      DARABONBA_PTR_FROM_JSON(SearchSource, searchSource_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunDocQaShrinkRequest() = default ;
    RunDocQaShrinkRequest(const RunDocQaShrinkRequest &) = default ;
    RunDocQaShrinkRequest(RunDocQaShrinkRequest &&) = default ;
    RunDocQaShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocQaShrinkRequest() = default ;
    RunDocQaShrinkRequest& operator=(const RunDocQaShrinkRequest &) = default ;
    RunDocQaShrinkRequest& operator=(RunDocQaShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryIdsShrink_ != nullptr
        && this->conversationContextsShrink_ != nullptr && this->docIdsShrink_ != nullptr && this->modelName_ != nullptr && this->query_ != nullptr && this->referenceContent_ != nullptr
        && this->searchSource_ != nullptr && this->sessionId_ != nullptr && this->workspaceId_ != nullptr; };
    // categoryIdsShrink Field Functions 
    bool hasCategoryIdsShrink() const { return this->categoryIdsShrink_ != nullptr;};
    void deleteCategoryIdsShrink() { this->categoryIdsShrink_ = nullptr;};
    inline string categoryIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(categoryIdsShrink_, "") };
    inline RunDocQaShrinkRequest& setCategoryIdsShrink(string categoryIdsShrink) { DARABONBA_PTR_SET_VALUE(categoryIdsShrink_, categoryIdsShrink) };


    // conversationContextsShrink Field Functions 
    bool hasConversationContextsShrink() const { return this->conversationContextsShrink_ != nullptr;};
    void deleteConversationContextsShrink() { this->conversationContextsShrink_ = nullptr;};
    inline string conversationContextsShrink() const { DARABONBA_PTR_GET_DEFAULT(conversationContextsShrink_, "") };
    inline RunDocQaShrinkRequest& setConversationContextsShrink(string conversationContextsShrink) { DARABONBA_PTR_SET_VALUE(conversationContextsShrink_, conversationContextsShrink) };


    // docIdsShrink Field Functions 
    bool hasDocIdsShrink() const { return this->docIdsShrink_ != nullptr;};
    void deleteDocIdsShrink() { this->docIdsShrink_ = nullptr;};
    inline string docIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(docIdsShrink_, "") };
    inline RunDocQaShrinkRequest& setDocIdsShrink(string docIdsShrink) { DARABONBA_PTR_SET_VALUE(docIdsShrink_, docIdsShrink) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline RunDocQaShrinkRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RunDocQaShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // referenceContent Field Functions 
    bool hasReferenceContent() const { return this->referenceContent_ != nullptr;};
    void deleteReferenceContent() { this->referenceContent_ = nullptr;};
    inline string referenceContent() const { DARABONBA_PTR_GET_DEFAULT(referenceContent_, "") };
    inline RunDocQaShrinkRequest& setReferenceContent(string referenceContent) { DARABONBA_PTR_SET_VALUE(referenceContent_, referenceContent) };


    // searchSource Field Functions 
    bool hasSearchSource() const { return this->searchSource_ != nullptr;};
    void deleteSearchSource() { this->searchSource_ = nullptr;};
    inline string searchSource() const { DARABONBA_PTR_GET_DEFAULT(searchSource_, "") };
    inline RunDocQaShrinkRequest& setSearchSource(string searchSource) { DARABONBA_PTR_SET_VALUE(searchSource_, searchSource) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunDocQaShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunDocQaShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> categoryIdsShrink_ = nullptr;
    std::shared_ptr<string> conversationContextsShrink_ = nullptr;
    std::shared_ptr<string> docIdsShrink_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<string> referenceContent_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> searchSource_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
