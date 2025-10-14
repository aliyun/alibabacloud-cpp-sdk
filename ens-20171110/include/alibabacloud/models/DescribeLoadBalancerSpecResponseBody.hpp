// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeLoadBalancerSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerSpecs, loadBalancerSpecs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerSpecs, loadBalancerSpecs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLoadBalancerSpecResponseBody() = default ;
    DescribeLoadBalancerSpecResponseBody(const DescribeLoadBalancerSpecResponseBody &) = default ;
    DescribeLoadBalancerSpecResponseBody(DescribeLoadBalancerSpecResponseBody &&) = default ;
    DescribeLoadBalancerSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerSpecResponseBody() = default ;
    DescribeLoadBalancerSpecResponseBody& operator=(const DescribeLoadBalancerSpecResponseBody &) = default ;
    DescribeLoadBalancerSpecResponseBody& operator=(DescribeLoadBalancerSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loadBalancerSpecs_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // loadBalancerSpecs Field Functions 
    bool hasLoadBalancerSpecs() const { return this->loadBalancerSpecs_ != nullptr;};
    void deleteLoadBalancerSpecs() { this->loadBalancerSpecs_ = nullptr;};
    inline const vector<DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs> & loadBalancerSpecs() const { DARABONBA_PTR_GET_CONST(loadBalancerSpecs_, vector<DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs>) };
    inline vector<DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs> loadBalancerSpecs() { DARABONBA_PTR_GET(loadBalancerSpecs_, vector<DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs>) };
    inline DescribeLoadBalancerSpecResponseBody& setLoadBalancerSpecs(const vector<DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs> & loadBalancerSpecs) { DARABONBA_PTR_SET_VALUE(loadBalancerSpecs_, loadBalancerSpecs) };
    inline DescribeLoadBalancerSpecResponseBody& setLoadBalancerSpecs(vector<DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs> && loadBalancerSpecs) { DARABONBA_PTR_SET_RVALUE(loadBalancerSpecs_, loadBalancerSpecs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLoadBalancerSpecResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLoadBalancerSpecResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancerSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLoadBalancerSpecResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The specifications. Valid values:
    std::shared_ptr<vector<DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs>> loadBalancerSpecs_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Maximum value: 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
