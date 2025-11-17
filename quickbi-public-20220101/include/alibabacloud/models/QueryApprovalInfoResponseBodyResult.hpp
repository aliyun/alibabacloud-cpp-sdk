// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPROVALINFORESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPROVALINFORESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryApprovalInfoResponseBodyResultData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryApprovalInfoResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApprovalInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, QueryApprovalInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    QueryApprovalInfoResponseBodyResult() = default ;
    QueryApprovalInfoResponseBodyResult(const QueryApprovalInfoResponseBodyResult &) = default ;
    QueryApprovalInfoResponseBodyResult(QueryApprovalInfoResponseBodyResult &&) = default ;
    QueryApprovalInfoResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApprovalInfoResponseBodyResult() = default ;
    QueryApprovalInfoResponseBodyResult& operator=(const QueryApprovalInfoResponseBodyResult &) = default ;
    QueryApprovalInfoResponseBodyResult& operator=(QueryApprovalInfoResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->page_ == nullptr && return this->pageSize_ == nullptr && return this->start_ == nullptr && return this->total_ == nullptr && return this->totalPages_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::QueryApprovalInfoResponseBodyResultData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::QueryApprovalInfoResponseBodyResultData>) };
    inline vector<Models::QueryApprovalInfoResponseBodyResultData> data() { DARABONBA_PTR_GET(data_, vector<Models::QueryApprovalInfoResponseBodyResultData>) };
    inline QueryApprovalInfoResponseBodyResult& setData(const vector<Models::QueryApprovalInfoResponseBodyResultData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryApprovalInfoResponseBodyResult& setData(vector<Models::QueryApprovalInfoResponseBodyResultData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline QueryApprovalInfoResponseBodyResult& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryApprovalInfoResponseBodyResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int32_t start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
    inline QueryApprovalInfoResponseBodyResult& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline QueryApprovalInfoResponseBodyResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline QueryApprovalInfoResponseBodyResult& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // Array of approval flow information.
    std::shared_ptr<vector<Models::QueryApprovalInfoResponseBodyResultData>> data_ = nullptr;
    // The current page number.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The number of records requested per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The starting position of the current page.
    std::shared_ptr<int32_t> start_ = nullptr;
    // The total number of items.
    std::shared_ptr<int32_t> total_ = nullptr;
    // The total number of pages.
    std::shared_ptr<int32_t> totalPages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
