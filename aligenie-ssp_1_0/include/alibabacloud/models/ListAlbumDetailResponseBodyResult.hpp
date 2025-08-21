// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALBUMDETAILRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTALBUMDETAILRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAlbumDetailResponseBodyResultOpenDataItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListAlbumDetailResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlbumDetailResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(OpenDataItemList, openDataItemList_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlbumDetailResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(OpenDataItemList, openDataItemList_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ListAlbumDetailResponseBodyResult() = default ;
    ListAlbumDetailResponseBodyResult(const ListAlbumDetailResponseBodyResult &) = default ;
    ListAlbumDetailResponseBodyResult(ListAlbumDetailResponseBodyResult &&) = default ;
    ListAlbumDetailResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlbumDetailResponseBodyResult() = default ;
    ListAlbumDetailResponseBodyResult& operator=(const ListAlbumDetailResponseBodyResult &) = default ;
    ListAlbumDetailResponseBodyResult& operator=(ListAlbumDetailResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPageNum_ != nullptr
        && this->openDataItemList_ != nullptr && this->pageSize_ != nullptr && this->totalSize_ != nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int64_t currentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0L) };
    inline ListAlbumDetailResponseBodyResult& setCurrentPageNum(int64_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // openDataItemList Field Functions 
    bool hasOpenDataItemList() const { return this->openDataItemList_ != nullptr;};
    void deleteOpenDataItemList() { this->openDataItemList_ = nullptr;};
    inline const vector<Models::ListAlbumDetailResponseBodyResultOpenDataItemList> & openDataItemList() const { DARABONBA_PTR_GET_CONST(openDataItemList_, vector<Models::ListAlbumDetailResponseBodyResultOpenDataItemList>) };
    inline vector<Models::ListAlbumDetailResponseBodyResultOpenDataItemList> openDataItemList() { DARABONBA_PTR_GET(openDataItemList_, vector<Models::ListAlbumDetailResponseBodyResultOpenDataItemList>) };
    inline ListAlbumDetailResponseBodyResult& setOpenDataItemList(const vector<Models::ListAlbumDetailResponseBodyResultOpenDataItemList> & openDataItemList) { DARABONBA_PTR_SET_VALUE(openDataItemList_, openDataItemList) };
    inline ListAlbumDetailResponseBodyResult& setOpenDataItemList(vector<Models::ListAlbumDetailResponseBodyResultOpenDataItemList> && openDataItemList) { DARABONBA_PTR_SET_RVALUE(openDataItemList_, openDataItemList) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAlbumDetailResponseBodyResult& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline ListAlbumDetailResponseBodyResult& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    std::shared_ptr<int64_t> currentPageNum_ = nullptr;
    std::shared_ptr<vector<Models::ListAlbumDetailResponseBodyResultOpenDataItemList>> openDataItemList_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
