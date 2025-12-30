// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTCHUNKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTCHUNKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetDocumentChunkListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentChunkListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(chunkIdList, chunkIdList_);
      DARABONBA_PTR_TO_JSON(docId, docId_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(order, order_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(searchQuery, searchQuery_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentChunkListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(chunkIdList, chunkIdList_);
      DARABONBA_PTR_FROM_JSON(docId, docId_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(order, order_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(searchQuery, searchQuery_);
    };
    GetDocumentChunkListRequest() = default ;
    GetDocumentChunkListRequest(const GetDocumentChunkListRequest &) = default ;
    GetDocumentChunkListRequest(GetDocumentChunkListRequest &&) = default ;
    GetDocumentChunkListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentChunkListRequest() = default ;
    GetDocumentChunkListRequest& operator=(const GetDocumentChunkListRequest &) = default ;
    GetDocumentChunkListRequest& operator=(GetDocumentChunkListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkIdList_ == nullptr
        && this->docId_ == nullptr && this->libraryId_ == nullptr && this->order_ == nullptr && this->orderBy_ == nullptr && this->page_ == nullptr
        && this->pageSize_ == nullptr && this->searchQuery_ == nullptr; };
    // chunkIdList Field Functions 
    bool hasChunkIdList() const { return this->chunkIdList_ != nullptr;};
    void deleteChunkIdList() { this->chunkIdList_ = nullptr;};
    inline const vector<string> & getChunkIdList() const { DARABONBA_PTR_GET_CONST(chunkIdList_, vector<string>) };
    inline vector<string> getChunkIdList() { DARABONBA_PTR_GET(chunkIdList_, vector<string>) };
    inline GetDocumentChunkListRequest& setChunkIdList(const vector<string> & chunkIdList) { DARABONBA_PTR_SET_VALUE(chunkIdList_, chunkIdList) };
    inline GetDocumentChunkListRequest& setChunkIdList(vector<string> && chunkIdList) { DARABONBA_PTR_SET_RVALUE(chunkIdList_, chunkIdList) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline GetDocumentChunkListRequest& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline GetDocumentChunkListRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline GetDocumentChunkListRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline GetDocumentChunkListRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetDocumentChunkListRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetDocumentChunkListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchQuery Field Functions 
    bool hasSearchQuery() const { return this->searchQuery_ != nullptr;};
    void deleteSearchQuery() { this->searchQuery_ = nullptr;};
    inline string getSearchQuery() const { DARABONBA_PTR_GET_DEFAULT(searchQuery_, "") };
    inline GetDocumentChunkListRequest& setSearchQuery(string searchQuery) { DARABONBA_PTR_SET_VALUE(searchQuery_, searchQuery) };


  protected:
    shared_ptr<vector<string>> chunkIdList_ {};
    // This parameter is required.
    shared_ptr<string> docId_ {};
    // This parameter is required.
    shared_ptr<string> libraryId_ {};
    shared_ptr<string> order_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> searchQuery_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
