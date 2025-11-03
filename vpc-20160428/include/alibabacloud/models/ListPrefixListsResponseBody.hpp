// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPREFIXLISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPREFIXLISTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrefixListsResponseBodyPrefixLists.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListPrefixListsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrefixListsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PrefixLists, prefixLists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrefixListsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PrefixLists, prefixLists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPrefixListsResponseBody() = default ;
    ListPrefixListsResponseBody(const ListPrefixListsResponseBody &) = default ;
    ListPrefixListsResponseBody(ListPrefixListsResponseBody &&) = default ;
    ListPrefixListsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrefixListsResponseBody() = default ;
    ListPrefixListsResponseBody& operator=(const ListPrefixListsResponseBody &) = default ;
    ListPrefixListsResponseBody& operator=(ListPrefixListsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->prefixLists_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListPrefixListsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPrefixListsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prefixLists Field Functions 
    bool hasPrefixLists() const { return this->prefixLists_ != nullptr;};
    void deletePrefixLists() { this->prefixLists_ = nullptr;};
    inline const vector<ListPrefixListsResponseBodyPrefixLists> & prefixLists() const { DARABONBA_PTR_GET_CONST(prefixLists_, vector<ListPrefixListsResponseBodyPrefixLists>) };
    inline vector<ListPrefixListsResponseBodyPrefixLists> prefixLists() { DARABONBA_PTR_GET(prefixLists_, vector<ListPrefixListsResponseBodyPrefixLists>) };
    inline ListPrefixListsResponseBody& setPrefixLists(const vector<ListPrefixListsResponseBodyPrefixLists> & prefixLists) { DARABONBA_PTR_SET_VALUE(prefixLists_, prefixLists) };
    inline ListPrefixListsResponseBody& setPrefixLists(vector<ListPrefixListsResponseBodyPrefixLists> && prefixLists) { DARABONBA_PTR_SET_RVALUE(prefixLists_, prefixLists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrefixListsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListPrefixListsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries per page. Valid values: **1** to **100**. Default value: **20**.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value indicates the token that is used for the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The information about the prefix lists.
    std::shared_ptr<vector<ListPrefixListsResponseBodyPrefixLists>> prefixLists_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
