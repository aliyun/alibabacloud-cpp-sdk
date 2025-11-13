// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHLAWQUERYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHLAWQUERYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchLawQueryResponseBodyDataLawResult.hpp>
#include <alibabacloud/models/RunSearchLawQueryResponseBodyDataSortKeyAndDirection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunSearchLawQueryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchLawQueryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(lawResult, lawResult_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(queryKeywords, queryKeywords_);
      DARABONBA_PTR_TO_JSON(sortKeyAndDirection, sortKeyAndDirection_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchLawQueryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(lawResult, lawResult_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(queryKeywords, queryKeywords_);
      DARABONBA_PTR_FROM_JSON(sortKeyAndDirection, sortKeyAndDirection_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    RunSearchLawQueryResponseBodyData() = default ;
    RunSearchLawQueryResponseBodyData(const RunSearchLawQueryResponseBodyData &) = default ;
    RunSearchLawQueryResponseBodyData(RunSearchLawQueryResponseBodyData &&) = default ;
    RunSearchLawQueryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchLawQueryResponseBodyData() = default ;
    RunSearchLawQueryResponseBodyData& operator=(const RunSearchLawQueryResponseBodyData &) = default ;
    RunSearchLawQueryResponseBodyData& operator=(RunSearchLawQueryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->lawResult_ == nullptr && return this->pageSize_ == nullptr && return this->query_ == nullptr && return this->queryKeywords_ == nullptr && return this->sortKeyAndDirection_ == nullptr
        && return this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline RunSearchLawQueryResponseBodyData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lawResult Field Functions 
    bool hasLawResult() const { return this->lawResult_ != nullptr;};
    void deleteLawResult() { this->lawResult_ = nullptr;};
    inline const vector<Models::RunSearchLawQueryResponseBodyDataLawResult> & lawResult() const { DARABONBA_PTR_GET_CONST(lawResult_, vector<Models::RunSearchLawQueryResponseBodyDataLawResult>) };
    inline vector<Models::RunSearchLawQueryResponseBodyDataLawResult> lawResult() { DARABONBA_PTR_GET(lawResult_, vector<Models::RunSearchLawQueryResponseBodyDataLawResult>) };
    inline RunSearchLawQueryResponseBodyData& setLawResult(const vector<Models::RunSearchLawQueryResponseBodyDataLawResult> & lawResult) { DARABONBA_PTR_SET_VALUE(lawResult_, lawResult) };
    inline RunSearchLawQueryResponseBodyData& setLawResult(vector<Models::RunSearchLawQueryResponseBodyDataLawResult> && lawResult) { DARABONBA_PTR_SET_RVALUE(lawResult_, lawResult) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline RunSearchLawQueryResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RunSearchLawQueryResponseBodyData& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryKeywords Field Functions 
    bool hasQueryKeywords() const { return this->queryKeywords_ != nullptr;};
    void deleteQueryKeywords() { this->queryKeywords_ = nullptr;};
    inline const vector<string> & queryKeywords() const { DARABONBA_PTR_GET_CONST(queryKeywords_, vector<string>) };
    inline vector<string> queryKeywords() { DARABONBA_PTR_GET(queryKeywords_, vector<string>) };
    inline RunSearchLawQueryResponseBodyData& setQueryKeywords(const vector<string> & queryKeywords) { DARABONBA_PTR_SET_VALUE(queryKeywords_, queryKeywords) };
    inline RunSearchLawQueryResponseBodyData& setQueryKeywords(vector<string> && queryKeywords) { DARABONBA_PTR_SET_RVALUE(queryKeywords_, queryKeywords) };


    // sortKeyAndDirection Field Functions 
    bool hasSortKeyAndDirection() const { return this->sortKeyAndDirection_ != nullptr;};
    void deleteSortKeyAndDirection() { this->sortKeyAndDirection_ = nullptr;};
    inline const Models::RunSearchLawQueryResponseBodyDataSortKeyAndDirection & sortKeyAndDirection() const { DARABONBA_PTR_GET_CONST(sortKeyAndDirection_, Models::RunSearchLawQueryResponseBodyDataSortKeyAndDirection) };
    inline Models::RunSearchLawQueryResponseBodyDataSortKeyAndDirection sortKeyAndDirection() { DARABONBA_PTR_GET(sortKeyAndDirection_, Models::RunSearchLawQueryResponseBodyDataSortKeyAndDirection) };
    inline RunSearchLawQueryResponseBodyData& setSortKeyAndDirection(const Models::RunSearchLawQueryResponseBodyDataSortKeyAndDirection & sortKeyAndDirection) { DARABONBA_PTR_SET_VALUE(sortKeyAndDirection_, sortKeyAndDirection) };
    inline RunSearchLawQueryResponseBodyData& setSortKeyAndDirection(Models::RunSearchLawQueryResponseBodyDataSortKeyAndDirection && sortKeyAndDirection) { DARABONBA_PTR_SET_RVALUE(sortKeyAndDirection_, sortKeyAndDirection) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline RunSearchLawQueryResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchLawQueryResponseBodyDataLawResult>> lawResult_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<vector<string>> queryKeywords_ = nullptr;
    std::shared_ptr<Models::RunSearchLawQueryResponseBodyDataSortKeyAndDirection> sortKeyAndDirection_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
