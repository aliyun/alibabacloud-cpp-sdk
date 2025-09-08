// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationScalingRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationScalingRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationScalingRules, applicationScalingRules_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationScalingRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationScalingRules, applicationScalingRules_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    DescribeApplicationScalingRulesResponseBodyData() = default ;
    DescribeApplicationScalingRulesResponseBodyData(const DescribeApplicationScalingRulesResponseBodyData &) = default ;
    DescribeApplicationScalingRulesResponseBodyData(DescribeApplicationScalingRulesResponseBodyData &&) = default ;
    DescribeApplicationScalingRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationScalingRulesResponseBodyData() = default ;
    DescribeApplicationScalingRulesResponseBodyData& operator=(const DescribeApplicationScalingRulesResponseBodyData &) = default ;
    DescribeApplicationScalingRulesResponseBodyData& operator=(DescribeApplicationScalingRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationScalingRules_ != nullptr
        && this->currentPage_ != nullptr && this->pageSize_ != nullptr && this->totalSize_ != nullptr; };
    // applicationScalingRules Field Functions 
    bool hasApplicationScalingRules() const { return this->applicationScalingRules_ != nullptr;};
    void deleteApplicationScalingRules() { this->applicationScalingRules_ = nullptr;};
    inline const vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules> & applicationScalingRules() const { DARABONBA_PTR_GET_CONST(applicationScalingRules_, vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules>) };
    inline vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules> applicationScalingRules() { DARABONBA_PTR_GET(applicationScalingRules_, vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules>) };
    inline DescribeApplicationScalingRulesResponseBodyData& setApplicationScalingRules(const vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules> & applicationScalingRules) { DARABONBA_PTR_SET_VALUE(applicationScalingRules_, applicationScalingRules) };
    inline DescribeApplicationScalingRulesResponseBodyData& setApplicationScalingRules(vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules> && applicationScalingRules) { DARABONBA_PTR_SET_RVALUE(applicationScalingRules_, applicationScalingRules) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeApplicationScalingRulesResponseBodyData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApplicationScalingRulesResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline DescribeApplicationScalingRulesResponseBodyData& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The auto scaling policies of the application.
    std::shared_ptr<vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules>> applicationScalingRules_ = nullptr;
    // The number of the returned page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of auto scaling policies.
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
