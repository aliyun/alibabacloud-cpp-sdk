// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYEXRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYEXRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoSnapshotPolicyExResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoSnapshotPolicyExResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicies, autoSnapshotPolicies_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoSnapshotPolicyExResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicies, autoSnapshotPolicies_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAutoSnapshotPolicyExResponseBody() = default ;
    DescribeAutoSnapshotPolicyExResponseBody(const DescribeAutoSnapshotPolicyExResponseBody &) = default ;
    DescribeAutoSnapshotPolicyExResponseBody(DescribeAutoSnapshotPolicyExResponseBody &&) = default ;
    DescribeAutoSnapshotPolicyExResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoSnapshotPolicyExResponseBody() = default ;
    DescribeAutoSnapshotPolicyExResponseBody& operator=(const DescribeAutoSnapshotPolicyExResponseBody &) = default ;
    DescribeAutoSnapshotPolicyExResponseBody& operator=(DescribeAutoSnapshotPolicyExResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoSnapshotPolicies_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // autoSnapshotPolicies Field Functions 
    bool hasAutoSnapshotPolicies() const { return this->autoSnapshotPolicies_ != nullptr;};
    void deleteAutoSnapshotPolicies() { this->autoSnapshotPolicies_ = nullptr;};
    inline const DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies & autoSnapshotPolicies() const { DARABONBA_PTR_GET_CONST(autoSnapshotPolicies_, DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies) };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies autoSnapshotPolicies() { DARABONBA_PTR_GET(autoSnapshotPolicies_, DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies) };
    inline DescribeAutoSnapshotPolicyExResponseBody& setAutoSnapshotPolicies(const DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies & autoSnapshotPolicies) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicies_, autoSnapshotPolicies) };
    inline DescribeAutoSnapshotPolicyExResponseBody& setAutoSnapshotPolicies(DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies && autoSnapshotPolicies) { DARABONBA_PTR_SET_RVALUE(autoSnapshotPolicies_, autoSnapshotPolicies) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAutoSnapshotPolicyExResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAutoSnapshotPolicyExResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoSnapshotPolicyExResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAutoSnapshotPolicyExResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the automatic snapshot policies.
    std::shared_ptr<DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies> autoSnapshotPolicies_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of automatic snapshot policies
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
