// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSFERFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSFERFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransferFilesResponseBodyFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListTransferFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransferFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransferFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTransferFilesResponseBody() = default ;
    ListTransferFilesResponseBody(const ListTransferFilesResponseBody &) = default ;
    ListTransferFilesResponseBody(ListTransferFilesResponseBody &&) = default ;
    ListTransferFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransferFilesResponseBody() = default ;
    ListTransferFilesResponseBody& operator=(const ListTransferFilesResponseBody &) = default ;
    ListTransferFilesResponseBody& operator=(ListTransferFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->files_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<ListTransferFilesResponseBodyFiles> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<ListTransferFilesResponseBodyFiles>) };
    inline vector<ListTransferFilesResponseBodyFiles> files() { DARABONBA_PTR_GET(files_, vector<ListTransferFilesResponseBodyFiles>) };
    inline ListTransferFilesResponseBody& setFiles(const vector<ListTransferFilesResponseBodyFiles> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline ListTransferFilesResponseBody& setFiles(vector<ListTransferFilesResponseBodyFiles> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransferFilesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransferFilesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransferFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The files.
    std::shared_ptr<vector<ListTransferFilesResponseBodyFiles>> files_ = nullptr;
    // The number of entries to return on each page.
    // 
    // Maximum value: 100.
    // 
    // Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The returned value of `NextToken` is a pagination token, which can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
