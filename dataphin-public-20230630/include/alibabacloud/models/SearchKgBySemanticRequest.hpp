// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHKGBYSEMANTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHKGBYSEMANTICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SearchKgBySemanticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchKgBySemanticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(SearchCommand, searchCommand_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchKgBySemanticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(SearchCommand, searchCommand_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SearchKgBySemanticRequest() = default ;
    SearchKgBySemanticRequest(const SearchKgBySemanticRequest &) = default ;
    SearchKgBySemanticRequest(SearchKgBySemanticRequest &&) = default ;
    SearchKgBySemanticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchKgBySemanticRequest() = default ;
    SearchKgBySemanticRequest& operator=(const SearchKgBySemanticRequest &) = default ;
    SearchKgBySemanticRequest& operator=(SearchKgBySemanticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SearchCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SearchCommand& obj) { 
        DARABONBA_PTR_TO_JSON(EntityTypeCodes, entityTypeCodes_);
        DARABONBA_PTR_TO_JSON(MinSimilarity, minSimilarity_);
        DARABONBA_PTR_TO_JSON(PropertyCode, propertyCode_);
        DARABONBA_PTR_TO_JSON(QueryText, queryText_);
        DARABONBA_PTR_TO_JSON(TopK, topK_);
      };
      friend void from_json(const Darabonba::Json& j, SearchCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(EntityTypeCodes, entityTypeCodes_);
        DARABONBA_PTR_FROM_JSON(MinSimilarity, minSimilarity_);
        DARABONBA_PTR_FROM_JSON(PropertyCode, propertyCode_);
        DARABONBA_PTR_FROM_JSON(QueryText, queryText_);
        DARABONBA_PTR_FROM_JSON(TopK, topK_);
      };
      SearchCommand() = default ;
      SearchCommand(const SearchCommand &) = default ;
      SearchCommand(SearchCommand &&) = default ;
      SearchCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SearchCommand() = default ;
      SearchCommand& operator=(const SearchCommand &) = default ;
      SearchCommand& operator=(SearchCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->entityTypeCodes_ == nullptr
        && this->minSimilarity_ == nullptr && this->propertyCode_ == nullptr && this->queryText_ == nullptr && this->topK_ == nullptr; };
      // entityTypeCodes Field Functions 
      bool hasEntityTypeCodes() const { return this->entityTypeCodes_ != nullptr;};
      void deleteEntityTypeCodes() { this->entityTypeCodes_ = nullptr;};
      inline const vector<string> & getEntityTypeCodes() const { DARABONBA_PTR_GET_CONST(entityTypeCodes_, vector<string>) };
      inline vector<string> getEntityTypeCodes() { DARABONBA_PTR_GET(entityTypeCodes_, vector<string>) };
      inline SearchCommand& setEntityTypeCodes(const vector<string> & entityTypeCodes) { DARABONBA_PTR_SET_VALUE(entityTypeCodes_, entityTypeCodes) };
      inline SearchCommand& setEntityTypeCodes(vector<string> && entityTypeCodes) { DARABONBA_PTR_SET_RVALUE(entityTypeCodes_, entityTypeCodes) };


      // minSimilarity Field Functions 
      bool hasMinSimilarity() const { return this->minSimilarity_ != nullptr;};
      void deleteMinSimilarity() { this->minSimilarity_ = nullptr;};
      inline float getMinSimilarity() const { DARABONBA_PTR_GET_DEFAULT(minSimilarity_, 0.0) };
      inline SearchCommand& setMinSimilarity(float minSimilarity) { DARABONBA_PTR_SET_VALUE(minSimilarity_, minSimilarity) };


      // propertyCode Field Functions 
      bool hasPropertyCode() const { return this->propertyCode_ != nullptr;};
      void deletePropertyCode() { this->propertyCode_ = nullptr;};
      inline string getPropertyCode() const { DARABONBA_PTR_GET_DEFAULT(propertyCode_, "") };
      inline SearchCommand& setPropertyCode(string propertyCode) { DARABONBA_PTR_SET_VALUE(propertyCode_, propertyCode) };


      // queryText Field Functions 
      bool hasQueryText() const { return this->queryText_ != nullptr;};
      void deleteQueryText() { this->queryText_ = nullptr;};
      inline string getQueryText() const { DARABONBA_PTR_GET_DEFAULT(queryText_, "") };
      inline SearchCommand& setQueryText(string queryText) { DARABONBA_PTR_SET_VALUE(queryText_, queryText) };


      // topK Field Functions 
      bool hasTopK() const { return this->topK_ != nullptr;};
      void deleteTopK() { this->topK_ = nullptr;};
      inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
      inline SearchCommand& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    protected:
      // The entity type codes used for filtering. If this parameter is not specified, all entity types are searched.
      shared_ptr<vector<string>> entityTypeCodes_ {};
      // The minimum similarity threshold. Valid values: 0.0 to 1.0. Default value: 0.0 (no filtering). This parameter takes effect only for the semantic search path.
      shared_ptr<float> minSimilarity_ {};
      // The property code for semantic search. If this parameter is not specified, all properties with semantic search enabled are searched.
      shared_ptr<string> propertyCode_ {};
      // The natural language query text. The value can be 0 to 500 characters in length.
      // 
      // This parameter is required.
      shared_ptr<string> queryText_ {};
      // The maximum number of results to return. Default value: 20. Valid values: 1 to 100.
      shared_ptr<int32_t> topK_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->searchCommand_ == nullptr && this->workspaceId_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline SearchKgBySemanticRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // searchCommand Field Functions 
    bool hasSearchCommand() const { return this->searchCommand_ != nullptr;};
    void deleteSearchCommand() { this->searchCommand_ = nullptr;};
    inline const SearchKgBySemanticRequest::SearchCommand & getSearchCommand() const { DARABONBA_PTR_GET_CONST(searchCommand_, SearchKgBySemanticRequest::SearchCommand) };
    inline SearchKgBySemanticRequest::SearchCommand getSearchCommand() { DARABONBA_PTR_GET(searchCommand_, SearchKgBySemanticRequest::SearchCommand) };
    inline SearchKgBySemanticRequest& setSearchCommand(const SearchKgBySemanticRequest::SearchCommand & searchCommand) { DARABONBA_PTR_SET_VALUE(searchCommand_, searchCommand) };
    inline SearchKgBySemanticRequest& setSearchCommand(SearchKgBySemanticRequest::SearchCommand && searchCommand) { DARABONBA_PTR_SET_RVALUE(searchCommand_, searchCommand) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SearchKgBySemanticRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The search command.
    // 
    // This parameter is required.
    shared_ptr<SearchKgBySemanticRequest::SearchCommand> searchCommand_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
