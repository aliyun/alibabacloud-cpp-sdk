// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHLOSSLESSRULELISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_FETCHLOSSLESSRULELISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FetchLosslessRuleListResponseBodyDataResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class FetchLosslessRuleListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchLosslessRuleListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, FetchLosslessRuleListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    FetchLosslessRuleListResponseBodyData() = default ;
    FetchLosslessRuleListResponseBodyData(const FetchLosslessRuleListResponseBodyData &) = default ;
    FetchLosslessRuleListResponseBodyData(FetchLosslessRuleListResponseBodyData &&) = default ;
    FetchLosslessRuleListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchLosslessRuleListResponseBodyData() = default ;
    FetchLosslessRuleListResponseBodyData& operator=(const FetchLosslessRuleListResponseBodyData &) = default ;
    FetchLosslessRuleListResponseBodyData& operator=(FetchLosslessRuleListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->results_ == nullptr && return this->totalSize_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline FetchLosslessRuleListResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline FetchLosslessRuleListResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::FetchLosslessRuleListResponseBodyDataResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::FetchLosslessRuleListResponseBodyDataResults>) };
    inline vector<Models::FetchLosslessRuleListResponseBodyDataResults> results() { DARABONBA_PTR_GET(results_, vector<Models::FetchLosslessRuleListResponseBodyDataResults>) };
    inline FetchLosslessRuleListResponseBodyData& setResults(const vector<Models::FetchLosslessRuleListResponseBodyDataResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline FetchLosslessRuleListResponseBodyData& setResults(vector<Models::FetchLosslessRuleListResponseBodyDataResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline FetchLosslessRuleListResponseBodyData& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The returned data.
    std::shared_ptr<vector<Models::FetchLosslessRuleListResponseBodyDataResults>> results_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
