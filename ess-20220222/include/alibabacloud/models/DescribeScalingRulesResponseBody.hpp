// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScalingRulesResponseBodyScalingRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingRules, scalingRules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingRules, scalingRules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeScalingRulesResponseBody() = default ;
    DescribeScalingRulesResponseBody(const DescribeScalingRulesResponseBody &) = default ;
    DescribeScalingRulesResponseBody(DescribeScalingRulesResponseBody &&) = default ;
    DescribeScalingRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingRulesResponseBody() = default ;
    DescribeScalingRulesResponseBody& operator=(const DescribeScalingRulesResponseBody &) = default ;
    DescribeScalingRulesResponseBody& operator=(DescribeScalingRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->scalingRules_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScalingRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScalingRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScalingRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingRules Field Functions 
    bool hasScalingRules() const { return this->scalingRules_ != nullptr;};
    void deleteScalingRules() { this->scalingRules_ = nullptr;};
    inline const vector<DescribeScalingRulesResponseBodyScalingRules> & scalingRules() const { DARABONBA_PTR_GET_CONST(scalingRules_, vector<DescribeScalingRulesResponseBodyScalingRules>) };
    inline vector<DescribeScalingRulesResponseBodyScalingRules> scalingRules() { DARABONBA_PTR_GET(scalingRules_, vector<DescribeScalingRulesResponseBodyScalingRules>) };
    inline DescribeScalingRulesResponseBody& setScalingRules(const vector<DescribeScalingRulesResponseBodyScalingRules> & scalingRules) { DARABONBA_PTR_SET_VALUE(scalingRules_, scalingRules) };
    inline DescribeScalingRulesResponseBody& setScalingRules(vector<DescribeScalingRulesResponseBodyScalingRules> && scalingRules) { DARABONBA_PTR_SET_RVALUE(scalingRules_, scalingRules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeScalingRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The scaling rules.
    std::shared_ptr<vector<DescribeScalingRulesResponseBodyScalingRules>> scalingRules_ = nullptr;
    // The total number of scaling rules.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
