// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNatGatewaysResponseBodyNatGateways.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNatGatewaysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NatGateways, natGateways_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NatGateways, natGateways_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNatGatewaysResponseBody() = default ;
    DescribeNatGatewaysResponseBody(const DescribeNatGatewaysResponseBody &) = default ;
    DescribeNatGatewaysResponseBody(DescribeNatGatewaysResponseBody &&) = default ;
    DescribeNatGatewaysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysResponseBody() = default ;
    DescribeNatGatewaysResponseBody& operator=(const DescribeNatGatewaysResponseBody &) = default ;
    DescribeNatGatewaysResponseBody& operator=(DescribeNatGatewaysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->natGateways_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // natGateways Field Functions 
    bool hasNatGateways() const { return this->natGateways_ != nullptr;};
    void deleteNatGateways() { this->natGateways_ = nullptr;};
    inline const vector<DescribeNatGatewaysResponseBodyNatGateways> & natGateways() const { DARABONBA_PTR_GET_CONST(natGateways_, vector<DescribeNatGatewaysResponseBodyNatGateways>) };
    inline vector<DescribeNatGatewaysResponseBodyNatGateways> natGateways() { DARABONBA_PTR_GET(natGateways_, vector<DescribeNatGatewaysResponseBodyNatGateways>) };
    inline DescribeNatGatewaysResponseBody& setNatGateways(const vector<DescribeNatGatewaysResponseBodyNatGateways> & natGateways) { DARABONBA_PTR_SET_VALUE(natGateways_, natGateways) };
    inline DescribeNatGatewaysResponseBody& setNatGateways(vector<DescribeNatGatewaysResponseBodyNatGateways> && natGateways) { DARABONBA_PTR_SET_RVALUE(natGateways_, natGateways) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeNatGatewaysResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeNatGatewaysResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatGatewaysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNatGatewaysResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the NAT gateways.
    std::shared_ptr<vector<DescribeNatGatewaysResponseBodyNatGateways>> natGateways_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of NAT gateways that are returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
