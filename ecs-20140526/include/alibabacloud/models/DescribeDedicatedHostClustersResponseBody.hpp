// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTCLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostClusters, dedicatedHostClusters_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostClusters, dedicatedHostClusters_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDedicatedHostClustersResponseBody() = default ;
    DescribeDedicatedHostClustersResponseBody(const DescribeDedicatedHostClustersResponseBody &) = default ;
    DescribeDedicatedHostClustersResponseBody(DescribeDedicatedHostClustersResponseBody &&) = default ;
    DescribeDedicatedHostClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostClustersResponseBody() = default ;
    DescribeDedicatedHostClustersResponseBody& operator=(const DescribeDedicatedHostClustersResponseBody &) = default ;
    DescribeDedicatedHostClustersResponseBody& operator=(DescribeDedicatedHostClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedHostClusters_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // dedicatedHostClusters Field Functions 
    bool hasDedicatedHostClusters() const { return this->dedicatedHostClusters_ != nullptr;};
    void deleteDedicatedHostClusters() { this->dedicatedHostClusters_ = nullptr;};
    inline const DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters & dedicatedHostClusters() const { DARABONBA_PTR_GET_CONST(dedicatedHostClusters_, DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters dedicatedHostClusters() { DARABONBA_PTR_GET(dedicatedHostClusters_, DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters) };
    inline DescribeDedicatedHostClustersResponseBody& setDedicatedHostClusters(const DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters & dedicatedHostClusters) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusters_, dedicatedHostClusters) };
    inline DescribeDedicatedHostClustersResponseBody& setDedicatedHostClusters(DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters && dedicatedHostClusters) { DARABONBA_PTR_SET_RVALUE(dedicatedHostClusters_, dedicatedHostClusters) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDedicatedHostClustersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDedicatedHostClustersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDedicatedHostClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDedicatedHostClustersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array consisting of host group information.
    std::shared_ptr<DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters> dedicatedHostClusters_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of dedicated host clusters.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
