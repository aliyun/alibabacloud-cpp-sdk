// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLOWRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTFLOWRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFlowRulesResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListFlowRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlowRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlowRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ListFlowRulesResponseBodyData() = default ;
    ListFlowRulesResponseBodyData(const ListFlowRulesResponseBodyData &) = default ;
    ListFlowRulesResponseBodyData(ListFlowRulesResponseBodyData &&) = default ;
    ListFlowRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlowRulesResponseBodyData() = default ;
    ListFlowRulesResponseBodyData& operator=(const ListFlowRulesResponseBodyData &) = default ;
    ListFlowRulesResponseBodyData& operator=(ListFlowRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->result_ == nullptr && return this->totalSize_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListFlowRulesResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFlowRulesResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::ListFlowRulesResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::ListFlowRulesResponseBodyDataResult>) };
    inline vector<Models::ListFlowRulesResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::ListFlowRulesResponseBodyDataResult>) };
    inline ListFlowRulesResponseBodyData& setResult(const vector<Models::ListFlowRulesResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListFlowRulesResponseBodyData& setResult(vector<Models::ListFlowRulesResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline ListFlowRulesResponseBodyData& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The data returned.
    std::shared_ptr<vector<Models::ListFlowRulesResponseBodyDataResult>> result_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
