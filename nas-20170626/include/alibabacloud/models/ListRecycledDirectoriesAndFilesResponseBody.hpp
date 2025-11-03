// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECYCLEDDIRECTORIESANDFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECYCLEDDIRECTORIESANDFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRecycledDirectoriesAndFilesResponseBodyEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ListRecycledDirectoriesAndFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecycledDirectoriesAndFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Entries, entries_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecycledDirectoriesAndFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Entries, entries_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRecycledDirectoriesAndFilesResponseBody() = default ;
    ListRecycledDirectoriesAndFilesResponseBody(const ListRecycledDirectoriesAndFilesResponseBody &) = default ;
    ListRecycledDirectoriesAndFilesResponseBody(ListRecycledDirectoriesAndFilesResponseBody &&) = default ;
    ListRecycledDirectoriesAndFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecycledDirectoriesAndFilesResponseBody() = default ;
    ListRecycledDirectoriesAndFilesResponseBody& operator=(const ListRecycledDirectoriesAndFilesResponseBody &) = default ;
    ListRecycledDirectoriesAndFilesResponseBody& operator=(ListRecycledDirectoriesAndFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entries_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // entries Field Functions 
    bool hasEntries() const { return this->entries_ != nullptr;};
    void deleteEntries() { this->entries_ = nullptr;};
    inline const vector<ListRecycledDirectoriesAndFilesResponseBodyEntries> & entries() const { DARABONBA_PTR_GET_CONST(entries_, vector<ListRecycledDirectoriesAndFilesResponseBodyEntries>) };
    inline vector<ListRecycledDirectoriesAndFilesResponseBodyEntries> entries() { DARABONBA_PTR_GET(entries_, vector<ListRecycledDirectoriesAndFilesResponseBodyEntries>) };
    inline ListRecycledDirectoriesAndFilesResponseBody& setEntries(const vector<ListRecycledDirectoriesAndFilesResponseBodyEntries> & entries) { DARABONBA_PTR_SET_VALUE(entries_, entries) };
    inline ListRecycledDirectoriesAndFilesResponseBody& setEntries(vector<ListRecycledDirectoriesAndFilesResponseBodyEntries> && entries) { DARABONBA_PTR_SET_RVALUE(entries_, entries) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRecycledDirectoriesAndFilesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecycledDirectoriesAndFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about files or directories in the recycle bin.
    std::shared_ptr<vector<ListRecycledDirectoriesAndFilesResponseBodyEntries>> entries_ = nullptr;
    // A pagination token.
    // 
    // If all the files and directories are incompletely returned in a query, the return value of the NextToken parameter is not empty. In this case, you can specify a valid value for the NextToken parameter to continue the query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
