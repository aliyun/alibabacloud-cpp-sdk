// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMDSCUBERESOURCESRESPONSEBODYRESULTCONTENTDATACONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTMDSCUBERESOURCESRESPONSEBODYRESULTCONTENTDATACONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMdsCubeResourcesResponseBodyResultContentDataContentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMdsCubeResourcesResponseBodyResultContentDataContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMdsCubeResourcesResponseBodyResultContentDataContent& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentMaxAndroidVersion, currentMaxAndroidVersion_);
      DARABONBA_PTR_TO_JSON(CurrentMaxIosVersion, currentMaxIosVersion_);
      DARABONBA_PTR_TO_JSON(FirstPage, firstPage_);
      DARABONBA_PTR_TO_JSON(FirstResult, firstResult_);
      DARABONBA_PTR_TO_JSON(LastPage, lastPage_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePage, prePage_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMdsCubeResourcesResponseBodyResultContentDataContent& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentMaxAndroidVersion, currentMaxAndroidVersion_);
      DARABONBA_PTR_FROM_JSON(CurrentMaxIosVersion, currentMaxIosVersion_);
      DARABONBA_PTR_FROM_JSON(FirstPage, firstPage_);
      DARABONBA_PTR_FROM_JSON(FirstResult, firstResult_);
      DARABONBA_PTR_FROM_JSON(LastPage, lastPage_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMdsCubeResourcesResponseBodyResultContentDataContent() = default ;
    ListMdsCubeResourcesResponseBodyResultContentDataContent(const ListMdsCubeResourcesResponseBodyResultContentDataContent &) = default ;
    ListMdsCubeResourcesResponseBodyResultContentDataContent(ListMdsCubeResourcesResponseBodyResultContentDataContent &&) = default ;
    ListMdsCubeResourcesResponseBodyResultContentDataContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMdsCubeResourcesResponseBodyResultContentDataContent() = default ;
    ListMdsCubeResourcesResponseBodyResultContentDataContent& operator=(const ListMdsCubeResourcesResponseBodyResultContentDataContent &) = default ;
    ListMdsCubeResourcesResponseBodyResultContentDataContent& operator=(ListMdsCubeResourcesResponseBodyResultContentDataContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentMaxAndroidVersion_ == nullptr
        && return this->currentMaxIosVersion_ == nullptr && return this->firstPage_ == nullptr && return this->firstResult_ == nullptr && return this->lastPage_ == nullptr && return this->list_ == nullptr
        && return this->nextPage_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->prePage_ == nullptr && return this->totalCount_ == nullptr; };
    // currentMaxAndroidVersion Field Functions 
    bool hasCurrentMaxAndroidVersion() const { return this->currentMaxAndroidVersion_ != nullptr;};
    void deleteCurrentMaxAndroidVersion() { this->currentMaxAndroidVersion_ = nullptr;};
    inline string currentMaxAndroidVersion() const { DARABONBA_PTR_GET_DEFAULT(currentMaxAndroidVersion_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContent& setCurrentMaxAndroidVersion(string currentMaxAndroidVersion) { DARABONBA_PTR_SET_VALUE(currentMaxAndroidVersion_, currentMaxAndroidVersion) };


    // currentMaxIosVersion Field Functions 
    bool hasCurrentMaxIosVersion() const { return this->currentMaxIosVersion_ != nullptr;};
    void deleteCurrentMaxIosVersion() { this->currentMaxIosVersion_ = nullptr;};
    inline string currentMaxIosVersion() const { DARABONBA_PTR_GET_DEFAULT(currentMaxIosVersion_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContent& setCurrentMaxIosVersion(string currentMaxIosVersion) { DARABONBA_PTR_SET_VALUE(currentMaxIosVersion_, currentMaxIosVersion) };


    // firstPage Field Functions 
    bool hasFirstPage() const { return this->firstPage_ != nullptr;};
    void deleteFirstPage() { this->firstPage_ = nullptr;};
    inline bool firstPage() const { DARABONBA_PTR_GET_DEFAULT(firstPage_, false) };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContent& setFirstPage(bool firstPage) { DARABONBA_PTR_SET_VALUE(firstPage_, firstPage) };


    // firstResult Field Functions 
    bool hasFirstResult() const { return this->firstResult_ != nullptr;};
    void deleteFirstResult() { this->firstResult_ = nullptr;};
    inline int64_t firstResult() const { DARABONBA_PTR_GET_DEFAULT(firstResult_, 0L) };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContent& setFirstResult(int64_t firstResult) { DARABONBA_PTR_SET_VALUE(firstResult_, firstResult) };


    // lastPage Field Functions 
    bool hasLastPage() const { return this->lastPage_ != nullptr;};
    void deleteLastPage() { this->lastPage_ = nullptr;};
    inline bool lastPage() const { DARABONBA_PTR_GET_DEFAULT(lastPage_, false) };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContent& setLastPage(bool lastPage) { DARABONBA_PTR_SET_VALUE(lastPage_, lastPage) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::ListMdsCubeResourcesResponseBodyResultContentDataContentList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::ListMdsCubeResourcesResponseBodyResultContentDataContentList>) };
    inline vector<Models::ListMdsCubeResourcesResponseBodyResultContentDataContentList> list() { DARABONBA_PTR_GET(list_, vector<Models::ListMdsCubeResourcesResponseBodyResultContentDataContentList>) };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContent& setList(const vector<Models::ListMdsCubeResourcesResponseBodyResultContentDataContentList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContent& setList(vector<Models::ListMdsCubeResourcesResponseBodyResultContentDataContentList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline int64_t nextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, 0L) };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContent& setNextPage(int64_t nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContent& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContent& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePage Field Functions 
    bool hasPrePage() const { return this->prePage_ != nullptr;};
    void deletePrePage() { this->prePage_ = nullptr;};
    inline int64_t prePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, 0L) };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContent& setPrePage(int64_t prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContent& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> currentMaxAndroidVersion_ = nullptr;
    std::shared_ptr<string> currentMaxIosVersion_ = nullptr;
    std::shared_ptr<bool> firstPage_ = nullptr;
    std::shared_ptr<int64_t> firstResult_ = nullptr;
    std::shared_ptr<bool> lastPage_ = nullptr;
    std::shared_ptr<vector<Models::ListMdsCubeResourcesResponseBodyResultContentDataContentList>> list_ = nullptr;
    std::shared_ptr<int64_t> nextPage_ = nullptr;
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> prePage_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
