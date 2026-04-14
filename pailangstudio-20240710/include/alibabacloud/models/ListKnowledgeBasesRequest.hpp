// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class ListKnowledgeBasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeBasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseType, knowledgeBaseType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeBasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseType, knowledgeBaseType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListKnowledgeBasesRequest() = default ;
    ListKnowledgeBasesRequest(const ListKnowledgeBasesRequest &) = default ;
    ListKnowledgeBasesRequest(ListKnowledgeBasesRequest &&) = default ;
    ListKnowledgeBasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeBasesRequest() = default ;
    ListKnowledgeBasesRequest& operator=(const ListKnowledgeBasesRequest &) = default ;
    ListKnowledgeBasesRequest& operator=(ListKnowledgeBasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->creator_ == nullptr && this->knowledgeBaseId_ == nullptr && this->knowledgeBaseType_ == nullptr && this->maxResults_ == nullptr && this->name_ == nullptr
        && this->nextToken_ == nullptr && this->order_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->sortBy_ == nullptr
        && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline ListKnowledgeBasesRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListKnowledgeBasesRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline ListKnowledgeBasesRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // knowledgeBaseType Field Functions 
    bool hasKnowledgeBaseType() const { return this->knowledgeBaseType_ != nullptr;};
    void deleteKnowledgeBaseType() { this->knowledgeBaseType_ = nullptr;};
    inline string getKnowledgeBaseType() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseType_, "") };
    inline ListKnowledgeBasesRequest& setKnowledgeBaseType(string knowledgeBaseType) { DARABONBA_PTR_SET_VALUE(knowledgeBaseType_, knowledgeBaseType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListKnowledgeBasesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListKnowledgeBasesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListKnowledgeBasesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListKnowledgeBasesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListKnowledgeBasesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListKnowledgeBasesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListKnowledgeBasesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListKnowledgeBasesRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> accessibility_ {};
    // Creator user ID.
    shared_ptr<string> creator_ {};
    // Knowledge Base ID.
    shared_ptr<string> knowledgeBaseId_ {};
    // The type of the knowledge base.
    // 
    // *   TEXT: Document.
    // *   STRUCTURED: Structured data.
    // *   IMAGE: Image.
    // *   VIDEO: Video.
    shared_ptr<string> knowledgeBaseType_ {};
    // When querying using NextToken, the maximum number of results returned each time.
    shared_ptr<int32_t> maxResults_ {};
    // The name of the knowledge base.
    shared_ptr<string> name_ {};
    // Used to mark the current starting position for reading; leaving it empty means starting from the beginning.
    shared_ptr<string> nextToken_ {};
    // The order in which you want to sort the queried instances.
    // 
    // *   ASC: ascending order.
    // *   DESC: descending order.
    shared_ptr<string> order_ {};
    // Current page number. Value range: greater than 0. Default value: 1. If MaxResults is passed in at the same time, the NextToken query method will be used, and this field value will be ignored.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of queries per page. If MaxResults is passed in at the same time, the quantity will be based on MaxResults.
    shared_ptr<int32_t> pageSize_ {};
    // Sorting field. Currently, only GmtCreateTime is supported.
    shared_ptr<string> sortBy_ {};
    // The ID of the DataWorks workspace. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
