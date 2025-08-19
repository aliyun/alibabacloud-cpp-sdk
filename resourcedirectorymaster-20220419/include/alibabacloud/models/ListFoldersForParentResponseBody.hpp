// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFOLDERSFORPARENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFOLDERSFORPARENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListFoldersForParentResponseBodyFolders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListFoldersForParentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFoldersForParentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Folders, folders_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFoldersForParentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Folders, folders_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFoldersForParentResponseBody() = default ;
    ListFoldersForParentResponseBody(const ListFoldersForParentResponseBody &) = default ;
    ListFoldersForParentResponseBody(ListFoldersForParentResponseBody &&) = default ;
    ListFoldersForParentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFoldersForParentResponseBody() = default ;
    ListFoldersForParentResponseBody& operator=(const ListFoldersForParentResponseBody &) = default ;
    ListFoldersForParentResponseBody& operator=(ListFoldersForParentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->folders_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // folders Field Functions 
    bool hasFolders() const { return this->folders_ != nullptr;};
    void deleteFolders() { this->folders_ = nullptr;};
    inline const ListFoldersForParentResponseBodyFolders & folders() const { DARABONBA_PTR_GET_CONST(folders_, ListFoldersForParentResponseBodyFolders) };
    inline ListFoldersForParentResponseBodyFolders folders() { DARABONBA_PTR_GET(folders_, ListFoldersForParentResponseBodyFolders) };
    inline ListFoldersForParentResponseBody& setFolders(const ListFoldersForParentResponseBodyFolders & folders) { DARABONBA_PTR_SET_VALUE(folders_, folders) };
    inline ListFoldersForParentResponseBody& setFolders(ListFoldersForParentResponseBodyFolders && folders) { DARABONBA_PTR_SET_RVALUE(folders_, folders) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListFoldersForParentResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFoldersForParentResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFoldersForParentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListFoldersForParentResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The folders.
    std::shared_ptr<ListFoldersForParentResponseBodyFolders> folders_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
