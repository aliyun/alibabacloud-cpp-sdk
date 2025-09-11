// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIRECTORIESANDFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIRECTORIESANDFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDirectoriesAndFilesResponseBodyEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ListDirectoriesAndFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDirectoriesAndFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Entries, entries_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDirectoriesAndFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Entries, entries_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDirectoriesAndFilesResponseBody() = default ;
    ListDirectoriesAndFilesResponseBody(const ListDirectoriesAndFilesResponseBody &) = default ;
    ListDirectoriesAndFilesResponseBody(ListDirectoriesAndFilesResponseBody &&) = default ;
    ListDirectoriesAndFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDirectoriesAndFilesResponseBody() = default ;
    ListDirectoriesAndFilesResponseBody& operator=(const ListDirectoriesAndFilesResponseBody &) = default ;
    ListDirectoriesAndFilesResponseBody& operator=(ListDirectoriesAndFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entries_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // entries Field Functions 
    bool hasEntries() const { return this->entries_ != nullptr;};
    void deleteEntries() { this->entries_ = nullptr;};
    inline const vector<ListDirectoriesAndFilesResponseBodyEntries> & entries() const { DARABONBA_PTR_GET_CONST(entries_, vector<ListDirectoriesAndFilesResponseBodyEntries>) };
    inline vector<ListDirectoriesAndFilesResponseBodyEntries> entries() { DARABONBA_PTR_GET(entries_, vector<ListDirectoriesAndFilesResponseBodyEntries>) };
    inline ListDirectoriesAndFilesResponseBody& setEntries(const vector<ListDirectoriesAndFilesResponseBodyEntries> & entries) { DARABONBA_PTR_SET_VALUE(entries_, entries) };
    inline ListDirectoriesAndFilesResponseBody& setEntries(vector<ListDirectoriesAndFilesResponseBodyEntries> && entries) { DARABONBA_PTR_SET_RVALUE(entries_, entries) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDirectoriesAndFilesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDirectoriesAndFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the files or directories.
    std::shared_ptr<vector<ListDirectoriesAndFilesResponseBodyEntries>> entries_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
