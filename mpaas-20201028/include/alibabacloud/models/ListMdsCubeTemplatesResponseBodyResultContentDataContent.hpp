// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMDSCUBETEMPLATESRESPONSEBODYRESULTCONTENTDATACONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTMDSCUBETEMPLATESRESPONSEBODYRESULTCONTENTDATACONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMdsCubeTemplatesResponseBodyResultContentDataContentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMdsCubeTemplatesResponseBodyResultContentDataContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMdsCubeTemplatesResponseBodyResultContentDataContent& obj) { 
      DARABONBA_PTR_TO_JSON(FirstPage, firstPage_);
      DARABONBA_PTR_TO_JSON(FirstResult, firstResult_);
      DARABONBA_PTR_TO_JSON(LastPage, lastPage_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePage, prePage_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMdsCubeTemplatesResponseBodyResultContentDataContent& obj) { 
      DARABONBA_PTR_FROM_JSON(FirstPage, firstPage_);
      DARABONBA_PTR_FROM_JSON(FirstResult, firstResult_);
      DARABONBA_PTR_FROM_JSON(LastPage, lastPage_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListMdsCubeTemplatesResponseBodyResultContentDataContent() = default ;
    ListMdsCubeTemplatesResponseBodyResultContentDataContent(const ListMdsCubeTemplatesResponseBodyResultContentDataContent &) = default ;
    ListMdsCubeTemplatesResponseBodyResultContentDataContent(ListMdsCubeTemplatesResponseBodyResultContentDataContent &&) = default ;
    ListMdsCubeTemplatesResponseBodyResultContentDataContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMdsCubeTemplatesResponseBodyResultContentDataContent() = default ;
    ListMdsCubeTemplatesResponseBodyResultContentDataContent& operator=(const ListMdsCubeTemplatesResponseBodyResultContentDataContent &) = default ;
    ListMdsCubeTemplatesResponseBodyResultContentDataContent& operator=(ListMdsCubeTemplatesResponseBodyResultContentDataContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firstPage_ == nullptr
        && return this->firstResult_ == nullptr && return this->lastPage_ == nullptr && return this->list_ == nullptr && return this->nextPage_ == nullptr && return this->pageNo_ == nullptr
        && return this->pageSize_ == nullptr && return this->prePage_ == nullptr && return this->totalCount_ == nullptr && return this->totalPage_ == nullptr; };
    // firstPage Field Functions 
    bool hasFirstPage() const { return this->firstPage_ != nullptr;};
    void deleteFirstPage() { this->firstPage_ = nullptr;};
    inline bool firstPage() const { DARABONBA_PTR_GET_DEFAULT(firstPage_, false) };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContent& setFirstPage(bool firstPage) { DARABONBA_PTR_SET_VALUE(firstPage_, firstPage) };


    // firstResult Field Functions 
    bool hasFirstResult() const { return this->firstResult_ != nullptr;};
    void deleteFirstResult() { this->firstResult_ = nullptr;};
    inline int64_t firstResult() const { DARABONBA_PTR_GET_DEFAULT(firstResult_, 0L) };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContent& setFirstResult(int64_t firstResult) { DARABONBA_PTR_SET_VALUE(firstResult_, firstResult) };


    // lastPage Field Functions 
    bool hasLastPage() const { return this->lastPage_ != nullptr;};
    void deleteLastPage() { this->lastPage_ = nullptr;};
    inline bool lastPage() const { DARABONBA_PTR_GET_DEFAULT(lastPage_, false) };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContent& setLastPage(bool lastPage) { DARABONBA_PTR_SET_VALUE(lastPage_, lastPage) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::ListMdsCubeTemplatesResponseBodyResultContentDataContentList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::ListMdsCubeTemplatesResponseBodyResultContentDataContentList>) };
    inline vector<Models::ListMdsCubeTemplatesResponseBodyResultContentDataContentList> list() { DARABONBA_PTR_GET(list_, vector<Models::ListMdsCubeTemplatesResponseBodyResultContentDataContentList>) };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContent& setList(const vector<Models::ListMdsCubeTemplatesResponseBodyResultContentDataContentList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContent& setList(vector<Models::ListMdsCubeTemplatesResponseBodyResultContentDataContentList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline int64_t nextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, 0L) };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContent& setNextPage(int64_t nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContent& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContent& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePage Field Functions 
    bool hasPrePage() const { return this->prePage_ != nullptr;};
    void deletePrePage() { this->prePage_ = nullptr;};
    inline int64_t prePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, 0L) };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContent& setPrePage(int64_t prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContent& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContent& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    std::shared_ptr<bool> firstPage_ = nullptr;
    std::shared_ptr<int64_t> firstResult_ = nullptr;
    std::shared_ptr<bool> lastPage_ = nullptr;
    std::shared_ptr<vector<Models::ListMdsCubeTemplatesResponseBodyResultContentDataContentList>> list_ = nullptr;
    std::shared_ptr<int64_t> nextPage_ = nullptr;
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> prePage_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<int64_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
