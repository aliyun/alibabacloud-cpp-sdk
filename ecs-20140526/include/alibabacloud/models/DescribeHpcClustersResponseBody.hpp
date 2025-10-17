// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHPCCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHPCCLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHpcClustersResponseBodyHpcClusters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeHpcClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHpcClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HpcClusters, hpcClusters_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHpcClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HpcClusters, hpcClusters_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHpcClustersResponseBody() = default ;
    DescribeHpcClustersResponseBody(const DescribeHpcClustersResponseBody &) = default ;
    DescribeHpcClustersResponseBody(DescribeHpcClustersResponseBody &&) = default ;
    DescribeHpcClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHpcClustersResponseBody() = default ;
    DescribeHpcClustersResponseBody& operator=(const DescribeHpcClustersResponseBody &) = default ;
    DescribeHpcClustersResponseBody& operator=(DescribeHpcClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hpcClusters_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // hpcClusters Field Functions 
    bool hasHpcClusters() const { return this->hpcClusters_ != nullptr;};
    void deleteHpcClusters() { this->hpcClusters_ = nullptr;};
    inline const DescribeHpcClustersResponseBodyHpcClusters & hpcClusters() const { DARABONBA_PTR_GET_CONST(hpcClusters_, DescribeHpcClustersResponseBodyHpcClusters) };
    inline DescribeHpcClustersResponseBodyHpcClusters hpcClusters() { DARABONBA_PTR_GET(hpcClusters_, DescribeHpcClustersResponseBodyHpcClusters) };
    inline DescribeHpcClustersResponseBody& setHpcClusters(const DescribeHpcClustersResponseBodyHpcClusters & hpcClusters) { DARABONBA_PTR_SET_VALUE(hpcClusters_, hpcClusters) };
    inline DescribeHpcClustersResponseBody& setHpcClusters(DescribeHpcClustersResponseBodyHpcClusters && hpcClusters) { DARABONBA_PTR_SET_RVALUE(hpcClusters_, hpcClusters) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHpcClustersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHpcClustersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHpcClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHpcClustersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The name of the HPC cluster.
    std::shared_ptr<DescribeHpcClustersResponseBodyHpcClusters> hpcClusters_ = nullptr;
    // Details about the HPC clusters. The value is an array that consists of the information of each HPC cluster.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of HPC clusters.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the HPC cluster.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
