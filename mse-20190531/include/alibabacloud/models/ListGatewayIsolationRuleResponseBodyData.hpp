// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYISOLATIONRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYISOLATIONRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewayIsolationRuleResponseBodyDataResult.hpp>
#include <alibabacloud/models/ListGatewayIsolationRuleResponseBodyDataResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayIsolationRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayIsolationRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayIsolationRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ListGatewayIsolationRuleResponseBodyData() = default ;
    ListGatewayIsolationRuleResponseBodyData(const ListGatewayIsolationRuleResponseBodyData &) = default ;
    ListGatewayIsolationRuleResponseBodyData(ListGatewayIsolationRuleResponseBodyData &&) = default ;
    ListGatewayIsolationRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayIsolationRuleResponseBodyData() = default ;
    ListGatewayIsolationRuleResponseBodyData& operator=(const ListGatewayIsolationRuleResponseBodyData &) = default ;
    ListGatewayIsolationRuleResponseBodyData& operator=(ListGatewayIsolationRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->result_ == nullptr && return this->results_ == nullptr && return this->totalSize_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListGatewayIsolationRuleResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListGatewayIsolationRuleResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::ListGatewayIsolationRuleResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::ListGatewayIsolationRuleResponseBodyDataResult>) };
    inline vector<Models::ListGatewayIsolationRuleResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::ListGatewayIsolationRuleResponseBodyDataResult>) };
    inline ListGatewayIsolationRuleResponseBodyData& setResult(const vector<Models::ListGatewayIsolationRuleResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListGatewayIsolationRuleResponseBodyData& setResult(vector<Models::ListGatewayIsolationRuleResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::ListGatewayIsolationRuleResponseBodyDataResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::ListGatewayIsolationRuleResponseBodyDataResults>) };
    inline vector<Models::ListGatewayIsolationRuleResponseBodyDataResults> results() { DARABONBA_PTR_GET(results_, vector<Models::ListGatewayIsolationRuleResponseBodyDataResults>) };
    inline ListGatewayIsolationRuleResponseBodyData& setResults(const vector<Models::ListGatewayIsolationRuleResponseBodyDataResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline ListGatewayIsolationRuleResponseBodyData& setResults(vector<Models::ListGatewayIsolationRuleResponseBodyDataResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline ListGatewayIsolationRuleResponseBodyData& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<Models::ListGatewayIsolationRuleResponseBodyDataResult>> result_ = nullptr;
    std::shared_ptr<vector<Models::ListGatewayIsolationRuleResponseBodyDataResults>> results_ = nullptr;
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
