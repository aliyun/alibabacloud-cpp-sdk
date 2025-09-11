// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLifecyclePoliciesResponseBodyLifecyclePolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeLifecyclePoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLifecyclePoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LifecyclePolicies, lifecyclePolicies_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLifecyclePoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LifecyclePolicies, lifecyclePolicies_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLifecyclePoliciesResponseBody() = default ;
    DescribeLifecyclePoliciesResponseBody(const DescribeLifecyclePoliciesResponseBody &) = default ;
    DescribeLifecyclePoliciesResponseBody(DescribeLifecyclePoliciesResponseBody &&) = default ;
    DescribeLifecyclePoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLifecyclePoliciesResponseBody() = default ;
    DescribeLifecyclePoliciesResponseBody& operator=(const DescribeLifecyclePoliciesResponseBody &) = default ;
    DescribeLifecyclePoliciesResponseBody& operator=(DescribeLifecyclePoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lifecyclePolicies_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // lifecyclePolicies Field Functions 
    bool hasLifecyclePolicies() const { return this->lifecyclePolicies_ != nullptr;};
    void deleteLifecyclePolicies() { this->lifecyclePolicies_ = nullptr;};
    inline const vector<DescribeLifecyclePoliciesResponseBodyLifecyclePolicies> & lifecyclePolicies() const { DARABONBA_PTR_GET_CONST(lifecyclePolicies_, vector<DescribeLifecyclePoliciesResponseBodyLifecyclePolicies>) };
    inline vector<DescribeLifecyclePoliciesResponseBodyLifecyclePolicies> lifecyclePolicies() { DARABONBA_PTR_GET(lifecyclePolicies_, vector<DescribeLifecyclePoliciesResponseBodyLifecyclePolicies>) };
    inline DescribeLifecyclePoliciesResponseBody& setLifecyclePolicies(const vector<DescribeLifecyclePoliciesResponseBodyLifecyclePolicies> & lifecyclePolicies) { DARABONBA_PTR_SET_VALUE(lifecyclePolicies_, lifecyclePolicies) };
    inline DescribeLifecyclePoliciesResponseBody& setLifecyclePolicies(vector<DescribeLifecyclePoliciesResponseBodyLifecyclePolicies> && lifecyclePolicies) { DARABONBA_PTR_SET_RVALUE(lifecyclePolicies_, lifecyclePolicies) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLifecyclePoliciesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLifecyclePoliciesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLifecyclePoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLifecyclePoliciesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried lifecycle policies.
    std::shared_ptr<vector<DescribeLifecyclePoliciesResponseBodyLifecyclePolicies>> lifecyclePolicies_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of lifecycle policies.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
