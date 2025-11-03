// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMERGATEWAYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMERGATEWAYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCustomerGatewaysResponseBodyCustomerGateways.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeCustomerGatewaysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomerGatewaysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerGateways, customerGateways_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomerGatewaysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerGateways, customerGateways_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCustomerGatewaysResponseBody() = default ;
    DescribeCustomerGatewaysResponseBody(const DescribeCustomerGatewaysResponseBody &) = default ;
    DescribeCustomerGatewaysResponseBody(DescribeCustomerGatewaysResponseBody &&) = default ;
    DescribeCustomerGatewaysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomerGatewaysResponseBody() = default ;
    DescribeCustomerGatewaysResponseBody& operator=(const DescribeCustomerGatewaysResponseBody &) = default ;
    DescribeCustomerGatewaysResponseBody& operator=(DescribeCustomerGatewaysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerGateways_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // customerGateways Field Functions 
    bool hasCustomerGateways() const { return this->customerGateways_ != nullptr;};
    void deleteCustomerGateways() { this->customerGateways_ = nullptr;};
    inline const DescribeCustomerGatewaysResponseBodyCustomerGateways & customerGateways() const { DARABONBA_PTR_GET_CONST(customerGateways_, DescribeCustomerGatewaysResponseBodyCustomerGateways) };
    inline DescribeCustomerGatewaysResponseBodyCustomerGateways customerGateways() { DARABONBA_PTR_GET(customerGateways_, DescribeCustomerGatewaysResponseBodyCustomerGateways) };
    inline DescribeCustomerGatewaysResponseBody& setCustomerGateways(const DescribeCustomerGatewaysResponseBodyCustomerGateways & customerGateways) { DARABONBA_PTR_SET_VALUE(customerGateways_, customerGateways) };
    inline DescribeCustomerGatewaysResponseBody& setCustomerGateways(DescribeCustomerGatewaysResponseBodyCustomerGateways && customerGateways) { DARABONBA_PTR_SET_RVALUE(customerGateways_, customerGateways) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCustomerGatewaysResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCustomerGatewaysResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomerGatewaysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCustomerGatewaysResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about customer gateways.
    std::shared_ptr<DescribeCustomerGatewaysResponseBodyCustomerGateways> customerGateways_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
