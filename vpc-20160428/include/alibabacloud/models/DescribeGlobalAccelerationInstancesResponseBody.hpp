// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALACCELERATIONINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALACCELERATIONINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeGlobalAccelerationInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalAccelerationInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalAccelerationInstances, globalAccelerationInstances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalAccelerationInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalAccelerationInstances, globalAccelerationInstances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeGlobalAccelerationInstancesResponseBody() = default ;
    DescribeGlobalAccelerationInstancesResponseBody(const DescribeGlobalAccelerationInstancesResponseBody &) = default ;
    DescribeGlobalAccelerationInstancesResponseBody(DescribeGlobalAccelerationInstancesResponseBody &&) = default ;
    DescribeGlobalAccelerationInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalAccelerationInstancesResponseBody() = default ;
    DescribeGlobalAccelerationInstancesResponseBody& operator=(const DescribeGlobalAccelerationInstancesResponseBody &) = default ;
    DescribeGlobalAccelerationInstancesResponseBody& operator=(DescribeGlobalAccelerationInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->globalAccelerationInstances_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // globalAccelerationInstances Field Functions 
    bool hasGlobalAccelerationInstances() const { return this->globalAccelerationInstances_ != nullptr;};
    void deleteGlobalAccelerationInstances() { this->globalAccelerationInstances_ = nullptr;};
    inline const DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances & globalAccelerationInstances() const { DARABONBA_PTR_GET_CONST(globalAccelerationInstances_, DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances) };
    inline DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances globalAccelerationInstances() { DARABONBA_PTR_GET(globalAccelerationInstances_, DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances) };
    inline DescribeGlobalAccelerationInstancesResponseBody& setGlobalAccelerationInstances(const DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances & globalAccelerationInstances) { DARABONBA_PTR_SET_VALUE(globalAccelerationInstances_, globalAccelerationInstances) };
    inline DescribeGlobalAccelerationInstancesResponseBody& setGlobalAccelerationInstances(DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances && globalAccelerationInstances) { DARABONBA_PTR_SET_RVALUE(globalAccelerationInstances_, globalAccelerationInstances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGlobalAccelerationInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGlobalAccelerationInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGlobalAccelerationInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeGlobalAccelerationInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the GA instances.
    std::shared_ptr<DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances> globalAccelerationInstances_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
