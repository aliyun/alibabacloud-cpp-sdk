// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceClusterListResponseBodyInstanceClusters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceClusterListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceClusterListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceClusters, instanceClusters_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceClusterListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceClusters, instanceClusters_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceClusterListResponseBody() = default ;
    DescribeInstanceClusterListResponseBody(const DescribeInstanceClusterListResponseBody &) = default ;
    DescribeInstanceClusterListResponseBody(DescribeInstanceClusterListResponseBody &&) = default ;
    DescribeInstanceClusterListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceClusterListResponseBody() = default ;
    DescribeInstanceClusterListResponseBody& operator=(const DescribeInstanceClusterListResponseBody &) = default ;
    DescribeInstanceClusterListResponseBody& operator=(DescribeInstanceClusterListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceClusters_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // instanceClusters Field Functions 
    bool hasInstanceClusters() const { return this->instanceClusters_ != nullptr;};
    void deleteInstanceClusters() { this->instanceClusters_ = nullptr;};
    inline const DescribeInstanceClusterListResponseBodyInstanceClusters & instanceClusters() const { DARABONBA_PTR_GET_CONST(instanceClusters_, DescribeInstanceClusterListResponseBodyInstanceClusters) };
    inline DescribeInstanceClusterListResponseBodyInstanceClusters instanceClusters() { DARABONBA_PTR_GET(instanceClusters_, DescribeInstanceClusterListResponseBodyInstanceClusters) };
    inline DescribeInstanceClusterListResponseBody& setInstanceClusters(const DescribeInstanceClusterListResponseBodyInstanceClusters & instanceClusters) { DARABONBA_PTR_SET_VALUE(instanceClusters_, instanceClusters) };
    inline DescribeInstanceClusterListResponseBody& setInstanceClusters(DescribeInstanceClusterListResponseBodyInstanceClusters && instanceClusters) { DARABONBA_PTR_SET_RVALUE(instanceClusters_, instanceClusters) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstanceClusterListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceClusterListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceClusterListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstanceClusterListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The instance cluster list.
    std::shared_ptr<DescribeInstanceClusterListResponseBodyInstanceClusters> instanceClusters_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
