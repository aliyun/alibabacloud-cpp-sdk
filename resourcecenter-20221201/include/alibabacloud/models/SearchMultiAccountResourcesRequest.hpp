// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMULTIACCOUNTRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMULTIACCOUNTRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class SearchMultiAccountResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMultiAccountResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(SortCriterion, sortCriterion_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMultiAccountResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(SortCriterion, sortCriterion_);
    };
    SearchMultiAccountResourcesRequest() = default ;
    SearchMultiAccountResourcesRequest(const SearchMultiAccountResourcesRequest &) = default ;
    SearchMultiAccountResourcesRequest(SearchMultiAccountResourcesRequest &&) = default ;
    SearchMultiAccountResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMultiAccountResourcesRequest() = default ;
    SearchMultiAccountResourcesRequest& operator=(const SearchMultiAccountResourcesRequest &) = default ;
    SearchMultiAccountResourcesRequest& operator=(SearchMultiAccountResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SortCriterion : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SortCriterion& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Order, order_);
      };
      friend void from_json(const Darabonba::Json& j, SortCriterion& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Order, order_);
      };
      SortCriterion() = default ;
      SortCriterion(const SortCriterion &) = default ;
      SortCriterion(SortCriterion &&) = default ;
      SortCriterion(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SortCriterion() = default ;
      SortCriterion& operator=(const SortCriterion &) = default ;
      SortCriterion& operator=(SortCriterion &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->order_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline SortCriterion& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
      inline SortCriterion& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    protected:
      // The attribute based on which the entries are sorted.
      // 
      // The value CreateTime indicates the creation time of resources.
      shared_ptr<string> key_ {};
      // The order in which the entries are sorted. Valid values:
      // 
      // *   ASC: The entries are sorted in ascending order. This value is the default value.
      // *   DESC: The entries are sorted in descending order.
      shared_ptr<string> order_ {};
    };

    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(MatchType, matchType_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->matchType_ == nullptr && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // matchType Field Functions 
      bool hasMatchType() const { return this->matchType_ != nullptr;};
      void deleteMatchType() { this->matchType_ = nullptr;};
      inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
      inline Filter& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const vector<string> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
      inline vector<string> getValue() { DARABONBA_PTR_GET(value_, vector<string>) };
      inline Filter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline Filter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      // The key of the filter condition. For more information, see `Supported filter parameters`.
      shared_ptr<string> key_ {};
      // The matching mode.
      // 
      // The value Equals indicates an equal match.
      shared_ptr<string> matchType_ {};
      // The values of the filter condition.
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->scope_ == nullptr && this->sortCriterion_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<SearchMultiAccountResourcesRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<SearchMultiAccountResourcesRequest::Filter>) };
    inline vector<SearchMultiAccountResourcesRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<SearchMultiAccountResourcesRequest::Filter>) };
    inline SearchMultiAccountResourcesRequest& setFilter(const vector<SearchMultiAccountResourcesRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline SearchMultiAccountResourcesRequest& setFilter(vector<SearchMultiAccountResourcesRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SearchMultiAccountResourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchMultiAccountResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline SearchMultiAccountResourcesRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // sortCriterion Field Functions 
    bool hasSortCriterion() const { return this->sortCriterion_ != nullptr;};
    void deleteSortCriterion() { this->sortCriterion_ = nullptr;};
    inline const SearchMultiAccountResourcesRequest::SortCriterion & getSortCriterion() const { DARABONBA_PTR_GET_CONST(sortCriterion_, SearchMultiAccountResourcesRequest::SortCriterion) };
    inline SearchMultiAccountResourcesRequest::SortCriterion getSortCriterion() { DARABONBA_PTR_GET(sortCriterion_, SearchMultiAccountResourcesRequest::SortCriterion) };
    inline SearchMultiAccountResourcesRequest& setSortCriterion(const SearchMultiAccountResourcesRequest::SortCriterion & sortCriterion) { DARABONBA_PTR_SET_VALUE(sortCriterion_, sortCriterion) };
    inline SearchMultiAccountResourcesRequest& setSortCriterion(SearchMultiAccountResourcesRequest::SortCriterion && sortCriterion) { DARABONBA_PTR_SET_RVALUE(sortCriterion_, sortCriterion) };


  protected:
    // The filter conditions.
    shared_ptr<vector<SearchMultiAccountResourcesRequest::Filter>> filter_ {};
    // The maximum number of entries to return on each page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    // 
    // If the total number of entries returned for the current request exceeds the value of the `MaxResults` parameter, the entries are truncated. In this case, you can use the token to initiate another request and obtain the remaining entries.``
    shared_ptr<string> nextToken_ {};
    // The search scope. You can set the value to one of the following items:
    // 
    // *   ID of a resource directory: Resources within the management account and all members of the resource directory are searched. You can call the [GetResourceDirectory](https://help.aliyun.com/document_detail/159995.html) operation to obtain the ID.
    // *   ID of the Root folder: Resources within all members in the Root folder and the subfolders of the Root folder are searched. You can call the [ListFoldersForParent](https://help.aliyun.com/document_detail/159997.html) operation to obtain the ID.
    // *   ID of a folder: Resources within all members in the folder are searched. You can call the [ListFoldersForParent](https://help.aliyun.com/document_detail/159997.html) operation to obtain the ID.
    // *   ID of a member: Resources within the member are searched. You can call the [ListAccounts](https://help.aliyun.com/document_detail/160016.html) operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> scope_ {};
    // The method that is used to sort the entries returned.
    shared_ptr<SearchMultiAccountResourcesRequest::SortCriterion> sortCriterion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
