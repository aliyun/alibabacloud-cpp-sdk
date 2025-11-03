// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTLYRECYCLEDDIRECTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTLYRECYCLEDDIRECTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRecentlyRecycledDirectoriesResponseBodyEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ListRecentlyRecycledDirectoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentlyRecycledDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Entries, entries_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentlyRecycledDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Entries, entries_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRecentlyRecycledDirectoriesResponseBody() = default ;
    ListRecentlyRecycledDirectoriesResponseBody(const ListRecentlyRecycledDirectoriesResponseBody &) = default ;
    ListRecentlyRecycledDirectoriesResponseBody(ListRecentlyRecycledDirectoriesResponseBody &&) = default ;
    ListRecentlyRecycledDirectoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentlyRecycledDirectoriesResponseBody() = default ;
    ListRecentlyRecycledDirectoriesResponseBody& operator=(const ListRecentlyRecycledDirectoriesResponseBody &) = default ;
    ListRecentlyRecycledDirectoriesResponseBody& operator=(ListRecentlyRecycledDirectoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entries_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // entries Field Functions 
    bool hasEntries() const { return this->entries_ != nullptr;};
    void deleteEntries() { this->entries_ = nullptr;};
    inline const vector<ListRecentlyRecycledDirectoriesResponseBodyEntries> & entries() const { DARABONBA_PTR_GET_CONST(entries_, vector<ListRecentlyRecycledDirectoriesResponseBodyEntries>) };
    inline vector<ListRecentlyRecycledDirectoriesResponseBodyEntries> entries() { DARABONBA_PTR_GET(entries_, vector<ListRecentlyRecycledDirectoriesResponseBodyEntries>) };
    inline ListRecentlyRecycledDirectoriesResponseBody& setEntries(const vector<ListRecentlyRecycledDirectoriesResponseBodyEntries> & entries) { DARABONBA_PTR_SET_VALUE(entries_, entries) };
    inline ListRecentlyRecycledDirectoriesResponseBody& setEntries(vector<ListRecentlyRecycledDirectoriesResponseBodyEntries> && entries) { DARABONBA_PTR_SET_RVALUE(entries_, entries) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRecentlyRecycledDirectoriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecentlyRecycledDirectoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the directories that are recently deleted.
    std::shared_ptr<vector<ListRecentlyRecycledDirectoriesResponseBodyEntries>> entries_ = nullptr;
    // A pagination token.
    // 
    // If not all directories are returned in a query, the return value of the NextToken parameter is not empty. In this case, you can specify a valid value for the NextToken parameter to continue the query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
