// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOECRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOECRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGrantRulesToEcrResponseBodyEcrGrantRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeGrantRulesToEcrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGrantRulesToEcrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(EcrGrantRules, ecrGrantRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGrantRulesToEcrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(EcrGrantRules, ecrGrantRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeGrantRulesToEcrResponseBody() = default ;
    DescribeGrantRulesToEcrResponseBody(const DescribeGrantRulesToEcrResponseBody &) = default ;
    DescribeGrantRulesToEcrResponseBody(DescribeGrantRulesToEcrResponseBody &&) = default ;
    DescribeGrantRulesToEcrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGrantRulesToEcrResponseBody() = default ;
    DescribeGrantRulesToEcrResponseBody& operator=(const DescribeGrantRulesToEcrResponseBody &) = default ;
    DescribeGrantRulesToEcrResponseBody& operator=(DescribeGrantRulesToEcrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->ecrGrantRules_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeGrantRulesToEcrResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ecrGrantRules Field Functions 
    bool hasEcrGrantRules() const { return this->ecrGrantRules_ != nullptr;};
    void deleteEcrGrantRules() { this->ecrGrantRules_ = nullptr;};
    inline const vector<DescribeGrantRulesToEcrResponseBodyEcrGrantRules> & ecrGrantRules() const { DARABONBA_PTR_GET_CONST(ecrGrantRules_, vector<DescribeGrantRulesToEcrResponseBodyEcrGrantRules>) };
    inline vector<DescribeGrantRulesToEcrResponseBodyEcrGrantRules> ecrGrantRules() { DARABONBA_PTR_GET(ecrGrantRules_, vector<DescribeGrantRulesToEcrResponseBodyEcrGrantRules>) };
    inline DescribeGrantRulesToEcrResponseBody& setEcrGrantRules(const vector<DescribeGrantRulesToEcrResponseBodyEcrGrantRules> & ecrGrantRules) { DARABONBA_PTR_SET_VALUE(ecrGrantRules_, ecrGrantRules) };
    inline DescribeGrantRulesToEcrResponseBody& setEcrGrantRules(vector<DescribeGrantRulesToEcrResponseBodyEcrGrantRules> && ecrGrantRules) { DARABONBA_PTR_SET_RVALUE(ecrGrantRules_, ecrGrantRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGrantRulesToEcrResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGrantRulesToEcrResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGrantRulesToEcrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeGrantRulesToEcrResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The total number of entries returned.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The cross-account authorization list of the ECR
    std::shared_ptr<vector<DescribeGrantRulesToEcrResponseBodyEcrGrantRules>> ecrGrantRules_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries on each page. Maximum value: 50. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
