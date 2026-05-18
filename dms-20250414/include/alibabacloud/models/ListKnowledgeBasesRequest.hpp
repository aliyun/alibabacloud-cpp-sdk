// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListKnowledgeBasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeBasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NamePattern, namePattern_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SortFieldName, sortFieldName_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeBasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NamePattern, namePattern_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SortFieldName, sortFieldName_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
    virtual bool empty() const override { return this->filters_ == nullptr
        && this->maxResults_ == nullptr && this->namePattern_ == nullptr && this->nextToken_ == nullptr && this->sortFieldName_ == nullptr && this->sortOrder_ == nullptr
        && this->tag_ == nullptr; };
    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline string getFilters() const { DARABONBA_PTR_GET_DEFAULT(filters_, "") };
    inline ListKnowledgeBasesRequest& setFilters(string filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListKnowledgeBasesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // namePattern Field Functions 
    bool hasNamePattern() const { return this->namePattern_ != nullptr;};
    void deleteNamePattern() { this->namePattern_ = nullptr;};
    inline string getNamePattern() const { DARABONBA_PTR_GET_DEFAULT(namePattern_, "") };
    inline ListKnowledgeBasesRequest& setNamePattern(string namePattern) { DARABONBA_PTR_SET_VALUE(namePattern_, namePattern) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListKnowledgeBasesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // sortFieldName Field Functions 
    bool hasSortFieldName() const { return this->sortFieldName_ != nullptr;};
    void deleteSortFieldName() { this->sortFieldName_ = nullptr;};
    inline string getSortFieldName() const { DARABONBA_PTR_GET_DEFAULT(sortFieldName_, "") };
    inline ListKnowledgeBasesRequest& setSortFieldName(string sortFieldName) { DARABONBA_PTR_SET_VALUE(sortFieldName_, sortFieldName) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListKnowledgeBasesRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListKnowledgeBasesRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    shared_ptr<string> filters_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> namePattern_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> sortFieldName_ {};
    shared_ptr<string> sortOrder_ {};
    // This parameter is required.
    shared_ptr<string> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
