// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDNAFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDNAFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDNAFilesResponseBodyFileList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListDNAFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDNAFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileList, fileList_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDNAFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileList, fileList_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDNAFilesResponseBody() = default ;
    ListDNAFilesResponseBody(const ListDNAFilesResponseBody &) = default ;
    ListDNAFilesResponseBody(ListDNAFilesResponseBody &&) = default ;
    ListDNAFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDNAFilesResponseBody() = default ;
    ListDNAFilesResponseBody& operator=(const ListDNAFilesResponseBody &) = default ;
    ListDNAFilesResponseBody& operator=(ListDNAFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileList_ == nullptr
        && return this->nextPageToken_ == nullptr && return this->requestId_ == nullptr; };
    // fileList Field Functions 
    bool hasFileList() const { return this->fileList_ != nullptr;};
    void deleteFileList() { this->fileList_ = nullptr;};
    inline const vector<ListDNAFilesResponseBodyFileList> & fileList() const { DARABONBA_PTR_GET_CONST(fileList_, vector<ListDNAFilesResponseBodyFileList>) };
    inline vector<ListDNAFilesResponseBodyFileList> fileList() { DARABONBA_PTR_GET(fileList_, vector<ListDNAFilesResponseBodyFileList>) };
    inline ListDNAFilesResponseBody& setFileList(const vector<ListDNAFilesResponseBodyFileList> & fileList) { DARABONBA_PTR_SET_VALUE(fileList_, fileList) };
    inline ListDNAFilesResponseBody& setFileList(vector<ListDNAFilesResponseBodyFileList> && fileList) { DARABONBA_PTR_SET_RVALUE(fileList_, fileList) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListDNAFilesResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDNAFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried files.
    std::shared_ptr<vector<ListDNAFilesResponseBodyFileList>> fileList_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
