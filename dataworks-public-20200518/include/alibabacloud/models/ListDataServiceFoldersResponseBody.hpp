// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEFOLDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEFOLDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataServiceFoldersResponseBodyFolderPagingResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceFoldersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceFoldersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FolderPagingResult, folderPagingResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceFoldersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FolderPagingResult, folderPagingResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataServiceFoldersResponseBody() = default ;
    ListDataServiceFoldersResponseBody(const ListDataServiceFoldersResponseBody &) = default ;
    ListDataServiceFoldersResponseBody(ListDataServiceFoldersResponseBody &&) = default ;
    ListDataServiceFoldersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceFoldersResponseBody() = default ;
    ListDataServiceFoldersResponseBody& operator=(const ListDataServiceFoldersResponseBody &) = default ;
    ListDataServiceFoldersResponseBody& operator=(ListDataServiceFoldersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->folderPagingResult_ != nullptr
        && this->requestId_ != nullptr; };
    // folderPagingResult Field Functions 
    bool hasFolderPagingResult() const { return this->folderPagingResult_ != nullptr;};
    void deleteFolderPagingResult() { this->folderPagingResult_ = nullptr;};
    inline const ListDataServiceFoldersResponseBodyFolderPagingResult & folderPagingResult() const { DARABONBA_PTR_GET_CONST(folderPagingResult_, ListDataServiceFoldersResponseBodyFolderPagingResult) };
    inline ListDataServiceFoldersResponseBodyFolderPagingResult folderPagingResult() { DARABONBA_PTR_GET(folderPagingResult_, ListDataServiceFoldersResponseBodyFolderPagingResult) };
    inline ListDataServiceFoldersResponseBody& setFolderPagingResult(const ListDataServiceFoldersResponseBodyFolderPagingResult & folderPagingResult) { DARABONBA_PTR_SET_VALUE(folderPagingResult_, folderPagingResult) };
    inline ListDataServiceFoldersResponseBody& setFolderPagingResult(ListDataServiceFoldersResponseBodyFolderPagingResult && folderPagingResult) { DARABONBA_PTR_SET_RVALUE(folderPagingResult_, folderPagingResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataServiceFoldersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The paging result for the folders.
    std::shared_ptr<ListDataServiceFoldersResponseBodyFolderPagingResult> folderPagingResult_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
