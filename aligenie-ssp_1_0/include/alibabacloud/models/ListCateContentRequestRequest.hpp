// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATECONTENTREQUESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCATECONTENTREQUESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListCateContentRequestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCateContentRequestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(IsAlbum, isAlbum_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
    };
    friend void from_json(const Darabonba::Json& j, ListCateContentRequestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(IsAlbum, isAlbum_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
    };
    ListCateContentRequestRequest() = default ;
    ListCateContentRequestRequest(const ListCateContentRequestRequest &) = default ;
    ListCateContentRequestRequest(ListCateContentRequestRequest &&) = default ;
    ListCateContentRequestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCateContentRequestRequest() = default ;
    ListCateContentRequestRequest& operator=(const ListCateContentRequestRequest &) = default ;
    ListCateContentRequestRequest& operator=(ListCateContentRequestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cateId_ != nullptr
        && this->isAlbum_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->sortBy_ != nullptr && this->sortOrder_ != nullptr; };
    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline ListCateContentRequestRequest& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // isAlbum Field Functions 
    bool hasIsAlbum() const { return this->isAlbum_ != nullptr;};
    void deleteIsAlbum() { this->isAlbum_ = nullptr;};
    inline bool isAlbum() const { DARABONBA_PTR_GET_DEFAULT(isAlbum_, false) };
    inline ListCateContentRequestRequest& setIsAlbum(bool isAlbum) { DARABONBA_PTR_SET_VALUE(isAlbum_, isAlbum) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListCateContentRequestRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCateContentRequestRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListCateContentRequestRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string sortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListCateContentRequestRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> cateId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> isAlbum_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sortOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
