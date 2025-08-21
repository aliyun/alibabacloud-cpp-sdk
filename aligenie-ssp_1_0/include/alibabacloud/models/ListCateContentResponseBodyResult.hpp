// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATECONTENTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTCATECONTENTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCateContentResponseBodyResultOpenDataItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListCateContentResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCateContentResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(OpenDataItemList, openDataItemList_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListCateContentResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(OpenDataItemList, openDataItemList_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ListCateContentResponseBodyResult() = default ;
    ListCateContentResponseBodyResult(const ListCateContentResponseBodyResult &) = default ;
    ListCateContentResponseBodyResult(ListCateContentResponseBodyResult &&) = default ;
    ListCateContentResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCateContentResponseBodyResult() = default ;
    ListCateContentResponseBodyResult& operator=(const ListCateContentResponseBodyResult &) = default ;
    ListCateContentResponseBodyResult& operator=(ListCateContentResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPageNum_ != nullptr
        && this->openDataItemList_ != nullptr && this->pageSize_ != nullptr && this->totalSize_ != nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t currentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline ListCateContentResponseBodyResult& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // openDataItemList Field Functions 
    bool hasOpenDataItemList() const { return this->openDataItemList_ != nullptr;};
    void deleteOpenDataItemList() { this->openDataItemList_ = nullptr;};
    inline const vector<Models::ListCateContentResponseBodyResultOpenDataItemList> & openDataItemList() const { DARABONBA_PTR_GET_CONST(openDataItemList_, vector<Models::ListCateContentResponseBodyResultOpenDataItemList>) };
    inline vector<Models::ListCateContentResponseBodyResultOpenDataItemList> openDataItemList() { DARABONBA_PTR_GET(openDataItemList_, vector<Models::ListCateContentResponseBodyResultOpenDataItemList>) };
    inline ListCateContentResponseBodyResult& setOpenDataItemList(const vector<Models::ListCateContentResponseBodyResultOpenDataItemList> & openDataItemList) { DARABONBA_PTR_SET_VALUE(openDataItemList_, openDataItemList) };
    inline ListCateContentResponseBodyResult& setOpenDataItemList(vector<Models::ListCateContentResponseBodyResultOpenDataItemList> && openDataItemList) { DARABONBA_PTR_SET_RVALUE(openDataItemList_, openDataItemList) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCateContentResponseBodyResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline ListCateContentResponseBodyResult& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    std::shared_ptr<int32_t> currentPageNum_ = nullptr;
    std::shared_ptr<vector<Models::ListCateContentResponseBodyResultOpenDataItemList>> openDataItemList_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
