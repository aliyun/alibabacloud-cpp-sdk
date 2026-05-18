// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCUMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCUMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListDocumentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDocumentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(KbUuid, kbUuid_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NamePattern, namePattern_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SortFieldName, sortFieldName_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
    };
    friend void from_json(const Darabonba::Json& j, ListDocumentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(KbUuid, kbUuid_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NamePattern, namePattern_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SortFieldName, sortFieldName_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
    };
    ListDocumentsRequest() = default ;
    ListDocumentsRequest(const ListDocumentsRequest &) = default ;
    ListDocumentsRequest(ListDocumentsRequest &&) = default ;
    ListDocumentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDocumentsRequest() = default ;
    ListDocumentsRequest& operator=(const ListDocumentsRequest &) = default ;
    ListDocumentsRequest& operator=(ListDocumentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filters_ == nullptr
        && this->kbUuid_ == nullptr && this->maxResults_ == nullptr && this->namePattern_ == nullptr && this->nextToken_ == nullptr && this->sortFieldName_ == nullptr
        && this->sortOrder_ == nullptr; };
    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline string getFilters() const { DARABONBA_PTR_GET_DEFAULT(filters_, "") };
    inline ListDocumentsRequest& setFilters(string filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };


    // kbUuid Field Functions 
    bool hasKbUuid() const { return this->kbUuid_ != nullptr;};
    void deleteKbUuid() { this->kbUuid_ = nullptr;};
    inline string getKbUuid() const { DARABONBA_PTR_GET_DEFAULT(kbUuid_, "") };
    inline ListDocumentsRequest& setKbUuid(string kbUuid) { DARABONBA_PTR_SET_VALUE(kbUuid_, kbUuid) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDocumentsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // namePattern Field Functions 
    bool hasNamePattern() const { return this->namePattern_ != nullptr;};
    void deleteNamePattern() { this->namePattern_ = nullptr;};
    inline string getNamePattern() const { DARABONBA_PTR_GET_DEFAULT(namePattern_, "") };
    inline ListDocumentsRequest& setNamePattern(string namePattern) { DARABONBA_PTR_SET_VALUE(namePattern_, namePattern) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDocumentsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // sortFieldName Field Functions 
    bool hasSortFieldName() const { return this->sortFieldName_ != nullptr;};
    void deleteSortFieldName() { this->sortFieldName_ = nullptr;};
    inline string getSortFieldName() const { DARABONBA_PTR_GET_DEFAULT(sortFieldName_, "") };
    inline ListDocumentsRequest& setSortFieldName(string sortFieldName) { DARABONBA_PTR_SET_VALUE(sortFieldName_, sortFieldName) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListDocumentsRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


  protected:
    shared_ptr<string> filters_ {};
    // This parameter is required.
    shared_ptr<string> kbUuid_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> namePattern_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> sortFieldName_ {};
    shared_ptr<string> sortOrder_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
