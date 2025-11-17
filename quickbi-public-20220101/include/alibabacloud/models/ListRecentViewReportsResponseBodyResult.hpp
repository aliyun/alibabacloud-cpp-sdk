// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTVIEWREPORTSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTVIEWREPORTSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRecentViewReportsResponseBodyResultData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListRecentViewReportsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentViewReportsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Attention, attention_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentViewReportsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Attention, attention_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    ListRecentViewReportsResponseBodyResult() = default ;
    ListRecentViewReportsResponseBodyResult(const ListRecentViewReportsResponseBodyResult &) = default ;
    ListRecentViewReportsResponseBodyResult(ListRecentViewReportsResponseBodyResult &&) = default ;
    ListRecentViewReportsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentViewReportsResponseBodyResult() = default ;
    ListRecentViewReportsResponseBodyResult& operator=(const ListRecentViewReportsResponseBodyResult &) = default ;
    ListRecentViewReportsResponseBodyResult& operator=(ListRecentViewReportsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attention_ == nullptr
        && return this->data_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->totalNum_ == nullptr && return this->totalPages_ == nullptr; };
    // attention Field Functions 
    bool hasAttention() const { return this->attention_ != nullptr;};
    void deleteAttention() { this->attention_ = nullptr;};
    inline string attention() const { DARABONBA_PTR_GET_DEFAULT(attention_, "") };
    inline ListRecentViewReportsResponseBodyResult& setAttention(string attention) { DARABONBA_PTR_SET_VALUE(attention_, attention) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListRecentViewReportsResponseBodyResultData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListRecentViewReportsResponseBodyResultData>) };
    inline vector<Models::ListRecentViewReportsResponseBodyResultData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListRecentViewReportsResponseBodyResultData>) };
    inline ListRecentViewReportsResponseBodyResult& setData(const vector<Models::ListRecentViewReportsResponseBodyResultData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRecentViewReportsResponseBodyResult& setData(vector<Models::ListRecentViewReportsResponseBodyResultData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListRecentViewReportsResponseBodyResult& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRecentViewReportsResponseBodyResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListRecentViewReportsResponseBodyResult& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline ListRecentViewReportsResponseBodyResult& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // Attention
    std::shared_ptr<string> attention_ = nullptr;
    // The list of queried works.
    std::shared_ptr<vector<Models::ListRecentViewReportsResponseBodyResultData>> data_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries returned per page.
    // 
    // *   Default value: 10.
    // *   Maximum of 100 articles
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of rows in the table.
    std::shared_ptr<int32_t> totalNum_ = nullptr;
    // The total number of pages returned.
    std::shared_ptr<int32_t> totalPages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
