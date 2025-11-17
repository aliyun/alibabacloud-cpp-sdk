// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCELERATIONOFWORKSPACERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTACCELERATIONOFWORKSPACERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAccelerationOfWorkspaceResponseBodyResultData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListAccelerationOfWorkspaceResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccelerationOfWorkspaceResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Next, next_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Pre, pre_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccelerationOfWorkspaceResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Next, next_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Pre, pre_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    ListAccelerationOfWorkspaceResponseBodyResult() = default ;
    ListAccelerationOfWorkspaceResponseBodyResult(const ListAccelerationOfWorkspaceResponseBodyResult &) = default ;
    ListAccelerationOfWorkspaceResponseBodyResult(ListAccelerationOfWorkspaceResponseBodyResult &&) = default ;
    ListAccelerationOfWorkspaceResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccelerationOfWorkspaceResponseBodyResult() = default ;
    ListAccelerationOfWorkspaceResponseBodyResult& operator=(const ListAccelerationOfWorkspaceResponseBodyResult &) = default ;
    ListAccelerationOfWorkspaceResponseBodyResult& operator=(ListAccelerationOfWorkspaceResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->next_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->pre_ == nullptr && return this->totalNum_ == nullptr
        && return this->totalPages_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListAccelerationOfWorkspaceResponseBodyResultData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListAccelerationOfWorkspaceResponseBodyResultData>) };
    inline vector<Models::ListAccelerationOfWorkspaceResponseBodyResultData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListAccelerationOfWorkspaceResponseBodyResultData>) };
    inline ListAccelerationOfWorkspaceResponseBodyResult& setData(const vector<Models::ListAccelerationOfWorkspaceResponseBodyResultData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAccelerationOfWorkspaceResponseBodyResult& setData(vector<Models::ListAccelerationOfWorkspaceResponseBodyResultData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // next Field Functions 
    bool hasNext() const { return this->next_ != nullptr;};
    void deleteNext() { this->next_ = nullptr;};
    inline int32_t next() const { DARABONBA_PTR_GET_DEFAULT(next_, 0) };
    inline ListAccelerationOfWorkspaceResponseBodyResult& setNext(int32_t next) { DARABONBA_PTR_SET_VALUE(next_, next) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListAccelerationOfWorkspaceResponseBodyResult& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAccelerationOfWorkspaceResponseBodyResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pre Field Functions 
    bool hasPre() const { return this->pre_ != nullptr;};
    void deletePre() { this->pre_ = nullptr;};
    inline int32_t pre() const { DARABONBA_PTR_GET_DEFAULT(pre_, 0) };
    inline ListAccelerationOfWorkspaceResponseBodyResult& setPre(int32_t pre) { DARABONBA_PTR_SET_VALUE(pre_, pre) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListAccelerationOfWorkspaceResponseBodyResult& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline ListAccelerationOfWorkspaceResponseBodyResult& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    std::shared_ptr<vector<Models::ListAccelerationOfWorkspaceResponseBodyResultData>> data_ = nullptr;
    std::shared_ptr<int32_t> next_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> pre_ = nullptr;
    std::shared_ptr<int32_t> totalNum_ = nullptr;
    std::shared_ptr<int32_t> totalPages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
