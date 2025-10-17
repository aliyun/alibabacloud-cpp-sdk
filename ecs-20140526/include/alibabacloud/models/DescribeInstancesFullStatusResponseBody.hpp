// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESFULLSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESFULLSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesFullStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesFullStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceFullStatusSet, instanceFullStatusSet_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesFullStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceFullStatusSet, instanceFullStatusSet_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstancesFullStatusResponseBody() = default ;
    DescribeInstancesFullStatusResponseBody(const DescribeInstancesFullStatusResponseBody &) = default ;
    DescribeInstancesFullStatusResponseBody(DescribeInstancesFullStatusResponseBody &&) = default ;
    DescribeInstancesFullStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesFullStatusResponseBody() = default ;
    DescribeInstancesFullStatusResponseBody& operator=(const DescribeInstancesFullStatusResponseBody &) = default ;
    DescribeInstancesFullStatusResponseBody& operator=(DescribeInstancesFullStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceFullStatusSet_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // instanceFullStatusSet Field Functions 
    bool hasInstanceFullStatusSet() const { return this->instanceFullStatusSet_ != nullptr;};
    void deleteInstanceFullStatusSet() { this->instanceFullStatusSet_ = nullptr;};
    inline const DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet & instanceFullStatusSet() const { DARABONBA_PTR_GET_CONST(instanceFullStatusSet_, DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet) };
    inline DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet instanceFullStatusSet() { DARABONBA_PTR_GET(instanceFullStatusSet_, DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet) };
    inline DescribeInstancesFullStatusResponseBody& setInstanceFullStatusSet(const DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet & instanceFullStatusSet) { DARABONBA_PTR_SET_VALUE(instanceFullStatusSet_, instanceFullStatusSet) };
    inline DescribeInstancesFullStatusResponseBody& setInstanceFullStatusSet(DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet && instanceFullStatusSet) { DARABONBA_PTR_SET_RVALUE(instanceFullStatusSet_, instanceFullStatusSet) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstancesFullStatusResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstancesFullStatusResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstancesFullStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstancesFullStatusResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried instances.
    // 
    // >  If no instances exist, this parameter is empty.
    std::shared_ptr<DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet> instanceFullStatusSet_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
