// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHCASEFULLTEXTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHCASEFULLTEXTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchCaseFullTextResponseBodyDataCaseResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunSearchCaseFullTextResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchCaseFullTextResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(caseLevel, caseLevel_);
      DARABONBA_PTR_TO_JSON(caseResult, caseResult_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(queryKeywords, queryKeywords_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchCaseFullTextResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(caseLevel, caseLevel_);
      DARABONBA_PTR_FROM_JSON(caseResult, caseResult_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(queryKeywords, queryKeywords_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    RunSearchCaseFullTextResponseBodyData() = default ;
    RunSearchCaseFullTextResponseBodyData(const RunSearchCaseFullTextResponseBodyData &) = default ;
    RunSearchCaseFullTextResponseBodyData(RunSearchCaseFullTextResponseBodyData &&) = default ;
    RunSearchCaseFullTextResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchCaseFullTextResponseBodyData() = default ;
    RunSearchCaseFullTextResponseBodyData& operator=(const RunSearchCaseFullTextResponseBodyData &) = default ;
    RunSearchCaseFullTextResponseBodyData& operator=(RunSearchCaseFullTextResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caseLevel_ == nullptr
        && return this->caseResult_ == nullptr && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->query_ == nullptr && return this->queryKeywords_ == nullptr
        && return this->totalCount_ == nullptr; };
    // caseLevel Field Functions 
    bool hasCaseLevel() const { return this->caseLevel_ != nullptr;};
    void deleteCaseLevel() { this->caseLevel_ = nullptr;};
    inline string caseLevel() const { DARABONBA_PTR_GET_DEFAULT(caseLevel_, "") };
    inline RunSearchCaseFullTextResponseBodyData& setCaseLevel(string caseLevel) { DARABONBA_PTR_SET_VALUE(caseLevel_, caseLevel) };


    // caseResult Field Functions 
    bool hasCaseResult() const { return this->caseResult_ != nullptr;};
    void deleteCaseResult() { this->caseResult_ = nullptr;};
    inline const vector<Models::RunSearchCaseFullTextResponseBodyDataCaseResult> & caseResult() const { DARABONBA_PTR_GET_CONST(caseResult_, vector<Models::RunSearchCaseFullTextResponseBodyDataCaseResult>) };
    inline vector<Models::RunSearchCaseFullTextResponseBodyDataCaseResult> caseResult() { DARABONBA_PTR_GET(caseResult_, vector<Models::RunSearchCaseFullTextResponseBodyDataCaseResult>) };
    inline RunSearchCaseFullTextResponseBodyData& setCaseResult(const vector<Models::RunSearchCaseFullTextResponseBodyDataCaseResult> & caseResult) { DARABONBA_PTR_SET_VALUE(caseResult_, caseResult) };
    inline RunSearchCaseFullTextResponseBodyData& setCaseResult(vector<Models::RunSearchCaseFullTextResponseBodyDataCaseResult> && caseResult) { DARABONBA_PTR_SET_RVALUE(caseResult_, caseResult) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline RunSearchCaseFullTextResponseBodyData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline RunSearchCaseFullTextResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RunSearchCaseFullTextResponseBodyData& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryKeywords Field Functions 
    bool hasQueryKeywords() const { return this->queryKeywords_ != nullptr;};
    void deleteQueryKeywords() { this->queryKeywords_ = nullptr;};
    inline const vector<string> & queryKeywords() const { DARABONBA_PTR_GET_CONST(queryKeywords_, vector<string>) };
    inline vector<string> queryKeywords() { DARABONBA_PTR_GET(queryKeywords_, vector<string>) };
    inline RunSearchCaseFullTextResponseBodyData& setQueryKeywords(const vector<string> & queryKeywords) { DARABONBA_PTR_SET_VALUE(queryKeywords_, queryKeywords) };
    inline RunSearchCaseFullTextResponseBodyData& setQueryKeywords(vector<string> && queryKeywords) { DARABONBA_PTR_SET_RVALUE(queryKeywords_, queryKeywords) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline RunSearchCaseFullTextResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> caseLevel_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchCaseFullTextResponseBodyDataCaseResult>> caseResult_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<vector<string>> queryKeywords_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
