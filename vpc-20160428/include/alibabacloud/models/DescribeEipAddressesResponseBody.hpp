// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEipAddressesResponseBodyEipAddresses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeEipAddressesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipAddressesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EipAddresses, eipAddresses_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipAddressesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EipAddresses, eipAddresses_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEipAddressesResponseBody() = default ;
    DescribeEipAddressesResponseBody(const DescribeEipAddressesResponseBody &) = default ;
    DescribeEipAddressesResponseBody(DescribeEipAddressesResponseBody &&) = default ;
    DescribeEipAddressesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipAddressesResponseBody() = default ;
    DescribeEipAddressesResponseBody& operator=(const DescribeEipAddressesResponseBody &) = default ;
    DescribeEipAddressesResponseBody& operator=(DescribeEipAddressesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eipAddresses_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // eipAddresses Field Functions 
    bool hasEipAddresses() const { return this->eipAddresses_ != nullptr;};
    void deleteEipAddresses() { this->eipAddresses_ = nullptr;};
    inline const DescribeEipAddressesResponseBodyEipAddresses & eipAddresses() const { DARABONBA_PTR_GET_CONST(eipAddresses_, DescribeEipAddressesResponseBodyEipAddresses) };
    inline DescribeEipAddressesResponseBodyEipAddresses eipAddresses() { DARABONBA_PTR_GET(eipAddresses_, DescribeEipAddressesResponseBodyEipAddresses) };
    inline DescribeEipAddressesResponseBody& setEipAddresses(const DescribeEipAddressesResponseBodyEipAddresses & eipAddresses) { DARABONBA_PTR_SET_VALUE(eipAddresses_, eipAddresses) };
    inline DescribeEipAddressesResponseBody& setEipAddresses(DescribeEipAddressesResponseBodyEipAddresses && eipAddresses) { DARABONBA_PTR_SET_RVALUE(eipAddresses_, eipAddresses) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEipAddressesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEipAddressesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEipAddressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEipAddressesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details of the EIPs.
    std::shared_ptr<DescribeEipAddressesResponseBodyEipAddresses> eipAddresses_ = nullptr;
    // The page number.
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
} // namespace Vpc20160428
#endif
