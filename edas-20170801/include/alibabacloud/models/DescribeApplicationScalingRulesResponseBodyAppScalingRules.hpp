// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYAPPSCALINGRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYAPPSCALINGRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationScalingRulesResponseBodyAppScalingRulesResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DescribeApplicationScalingRulesResponseBodyAppScalingRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationScalingRulesResponseBodyAppScalingRules& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationScalingRulesResponseBodyAppScalingRules& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    DescribeApplicationScalingRulesResponseBodyAppScalingRules() = default ;
    DescribeApplicationScalingRulesResponseBodyAppScalingRules(const DescribeApplicationScalingRulesResponseBodyAppScalingRules &) = default ;
    DescribeApplicationScalingRulesResponseBodyAppScalingRules(DescribeApplicationScalingRulesResponseBodyAppScalingRules &&) = default ;
    DescribeApplicationScalingRulesResponseBodyAppScalingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationScalingRulesResponseBodyAppScalingRules() = default ;
    DescribeApplicationScalingRulesResponseBodyAppScalingRules& operator=(const DescribeApplicationScalingRulesResponseBodyAppScalingRules &) = default ;
    DescribeApplicationScalingRulesResponseBodyAppScalingRules& operator=(DescribeApplicationScalingRulesResponseBodyAppScalingRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->pageSize_ == nullptr && return this->result_ == nullptr && return this->totalSize_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeApplicationScalingRulesResponseBodyAppScalingRules& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApplicationScalingRulesResponseBodyAppScalingRules& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResult>) };
    inline vector<Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResult> result() { DARABONBA_PTR_GET(result_, vector<Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResult>) };
    inline DescribeApplicationScalingRulesResponseBodyAppScalingRules& setResult(const vector<Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeApplicationScalingRulesResponseBodyAppScalingRules& setResult(vector<Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline DescribeApplicationScalingRulesResponseBodyAppScalingRules& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of auto scaling policies returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The information about auto scaling policies.
    std::shared_ptr<vector<Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResult>> result_ = nullptr;
    // The total number of auto scaling policies.
    std::shared_ptr<int64_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
