// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYFLOWRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYFLOWRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewayFlowRuleResponseBodyDataResult.hpp>
#include <alibabacloud/models/ListGatewayFlowRuleResponseBodyDataResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayFlowRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayFlowRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayFlowRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ListGatewayFlowRuleResponseBodyData() = default ;
    ListGatewayFlowRuleResponseBodyData(const ListGatewayFlowRuleResponseBodyData &) = default ;
    ListGatewayFlowRuleResponseBodyData(ListGatewayFlowRuleResponseBodyData &&) = default ;
    ListGatewayFlowRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayFlowRuleResponseBodyData() = default ;
    ListGatewayFlowRuleResponseBodyData& operator=(const ListGatewayFlowRuleResponseBodyData &) = default ;
    ListGatewayFlowRuleResponseBodyData& operator=(ListGatewayFlowRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->result_ != nullptr && this->results_ != nullptr && this->totalSize_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListGatewayFlowRuleResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListGatewayFlowRuleResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::ListGatewayFlowRuleResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::ListGatewayFlowRuleResponseBodyDataResult>) };
    inline vector<Models::ListGatewayFlowRuleResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::ListGatewayFlowRuleResponseBodyDataResult>) };
    inline ListGatewayFlowRuleResponseBodyData& setResult(const vector<Models::ListGatewayFlowRuleResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListGatewayFlowRuleResponseBodyData& setResult(vector<Models::ListGatewayFlowRuleResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::ListGatewayFlowRuleResponseBodyDataResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::ListGatewayFlowRuleResponseBodyDataResults>) };
    inline vector<Models::ListGatewayFlowRuleResponseBodyDataResults> results() { DARABONBA_PTR_GET(results_, vector<Models::ListGatewayFlowRuleResponseBodyDataResults>) };
    inline ListGatewayFlowRuleResponseBodyData& setResults(const vector<Models::ListGatewayFlowRuleResponseBodyDataResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline ListGatewayFlowRuleResponseBodyData& setResults(vector<Models::ListGatewayFlowRuleResponseBodyDataResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline ListGatewayFlowRuleResponseBodyData& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<Models::ListGatewayFlowRuleResponseBodyDataResult>> result_ = nullptr;
    std::shared_ptr<vector<Models::ListGatewayFlowRuleResponseBodyDataResults>> results_ = nullptr;
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
