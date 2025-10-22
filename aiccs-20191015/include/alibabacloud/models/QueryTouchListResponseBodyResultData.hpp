// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTOUCHLISTRESPONSEBODYRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYTOUCHLISTRESPONSEBODYRESULTDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryTouchListResponseBodyResultDataData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryTouchListResponseBodyResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTouchListResponseBodyResultData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Empty, empty_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(OnePageSize, onePageSize_);
      DARABONBA_PTR_TO_JSON(PreviousPage, previousPage_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_TO_JSON(TotalResults, totalResults_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTouchListResponseBodyResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Empty, empty_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(OnePageSize, onePageSize_);
      DARABONBA_PTR_FROM_JSON(PreviousPage, previousPage_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_FROM_JSON(TotalResults, totalResults_);
    };
    QueryTouchListResponseBodyResultData() = default ;
    QueryTouchListResponseBodyResultData(const QueryTouchListResponseBodyResultData &) = default ;
    QueryTouchListResponseBodyResultData(QueryTouchListResponseBodyResultData &&) = default ;
    QueryTouchListResponseBodyResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTouchListResponseBodyResultData() = default ;
    QueryTouchListResponseBodyResultData& operator=(const QueryTouchListResponseBodyResultData &) = default ;
    QueryTouchListResponseBodyResultData& operator=(QueryTouchListResponseBodyResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->data_ == nullptr && return this->empty_ == nullptr && return this->nextPage_ == nullptr && return this->onePageSize_ == nullptr && return this->previousPage_ == nullptr
        && return this->totalPage_ == nullptr && return this->totalResults_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryTouchListResponseBodyResultData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::QueryTouchListResponseBodyResultDataData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::QueryTouchListResponseBodyResultDataData>) };
    inline vector<Models::QueryTouchListResponseBodyResultDataData> data() { DARABONBA_PTR_GET(data_, vector<Models::QueryTouchListResponseBodyResultDataData>) };
    inline QueryTouchListResponseBodyResultData& setData(const vector<Models::QueryTouchListResponseBodyResultDataData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTouchListResponseBodyResultData& setData(vector<Models::QueryTouchListResponseBodyResultDataData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // empty Field Functions 
    bool hasEmpty() const { return this->empty_ != nullptr;};
    void deleteEmpty() { this->empty_ = nullptr;};
    inline bool empty() const { DARABONBA_PTR_GET_DEFAULT(empty_, false) };
    inline QueryTouchListResponseBodyResultData& setEmpty(bool empty) { DARABONBA_PTR_SET_VALUE(empty_, empty) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline int32_t nextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, 0) };
    inline QueryTouchListResponseBodyResultData& setNextPage(int32_t nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // onePageSize Field Functions 
    bool hasOnePageSize() const { return this->onePageSize_ != nullptr;};
    void deleteOnePageSize() { this->onePageSize_ = nullptr;};
    inline int32_t onePageSize() const { DARABONBA_PTR_GET_DEFAULT(onePageSize_, 0) };
    inline QueryTouchListResponseBodyResultData& setOnePageSize(int32_t onePageSize) { DARABONBA_PTR_SET_VALUE(onePageSize_, onePageSize) };


    // previousPage Field Functions 
    bool hasPreviousPage() const { return this->previousPage_ != nullptr;};
    void deletePreviousPage() { this->previousPage_ = nullptr;};
    inline int32_t previousPage() const { DARABONBA_PTR_GET_DEFAULT(previousPage_, 0) };
    inline QueryTouchListResponseBodyResultData& setPreviousPage(int32_t previousPage) { DARABONBA_PTR_SET_VALUE(previousPage_, previousPage) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline QueryTouchListResponseBodyResultData& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    // totalResults Field Functions 
    bool hasTotalResults() const { return this->totalResults_ != nullptr;};
    void deleteTotalResults() { this->totalResults_ = nullptr;};
    inline int32_t totalResults() const { DARABONBA_PTR_GET_DEFAULT(totalResults_, 0) };
    inline QueryTouchListResponseBodyResultData& setTotalResults(int32_t totalResults) { DARABONBA_PTR_SET_VALUE(totalResults_, totalResults) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<vector<Models::QueryTouchListResponseBodyResultDataData>> data_ = nullptr;
    std::shared_ptr<bool> empty_ = nullptr;
    std::shared_ptr<int32_t> nextPage_ = nullptr;
    std::shared_ptr<int32_t> onePageSize_ = nullptr;
    std::shared_ptr<int32_t> previousPage_ = nullptr;
    std::shared_ptr<int32_t> totalPage_ = nullptr;
    std::shared_ptr<int32_t> totalResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
