// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScalingInstancesResponseBodyScalingInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingInstances, scalingInstances_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalSpotCount, totalSpotCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingInstances, scalingInstances_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalSpotCount, totalSpotCount_);
    };
    DescribeScalingInstancesResponseBody() = default ;
    DescribeScalingInstancesResponseBody(const DescribeScalingInstancesResponseBody &) = default ;
    DescribeScalingInstancesResponseBody(DescribeScalingInstancesResponseBody &&) = default ;
    DescribeScalingInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingInstancesResponseBody() = default ;
    DescribeScalingInstancesResponseBody& operator=(const DescribeScalingInstancesResponseBody &) = default ;
    DescribeScalingInstancesResponseBody& operator=(DescribeScalingInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->scalingInstances_ != nullptr && this->totalCount_ != nullptr && this->totalSpotCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScalingInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScalingInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScalingInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingInstances Field Functions 
    bool hasScalingInstances() const { return this->scalingInstances_ != nullptr;};
    void deleteScalingInstances() { this->scalingInstances_ = nullptr;};
    inline const vector<DescribeScalingInstancesResponseBodyScalingInstances> & scalingInstances() const { DARABONBA_PTR_GET_CONST(scalingInstances_, vector<DescribeScalingInstancesResponseBodyScalingInstances>) };
    inline vector<DescribeScalingInstancesResponseBodyScalingInstances> scalingInstances() { DARABONBA_PTR_GET(scalingInstances_, vector<DescribeScalingInstancesResponseBodyScalingInstances>) };
    inline DescribeScalingInstancesResponseBody& setScalingInstances(const vector<DescribeScalingInstancesResponseBodyScalingInstances> & scalingInstances) { DARABONBA_PTR_SET_VALUE(scalingInstances_, scalingInstances) };
    inline DescribeScalingInstancesResponseBody& setScalingInstances(vector<DescribeScalingInstancesResponseBodyScalingInstances> && scalingInstances) { DARABONBA_PTR_SET_RVALUE(scalingInstances_, scalingInstances) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeScalingInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalSpotCount Field Functions 
    bool hasTotalSpotCount() const { return this->totalSpotCount_ != nullptr;};
    void deleteTotalSpotCount() { this->totalSpotCount_ = nullptr;};
    inline int32_t totalSpotCount() const { DARABONBA_PTR_GET_DEFAULT(totalSpotCount_, 0) };
    inline DescribeScalingInstancesResponseBody& setTotalSpotCount(int32_t totalSpotCount) { DARABONBA_PTR_SET_VALUE(totalSpotCount_, totalSpotCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ECS instances.
    std::shared_ptr<vector<DescribeScalingInstancesResponseBodyScalingInstances>> scalingInstances_ = nullptr;
    // The total number of ECS instances in the scaling group.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The total number of preemptible instances that run as expected in the scaling group.
    std::shared_ptr<int32_t> totalSpotCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
