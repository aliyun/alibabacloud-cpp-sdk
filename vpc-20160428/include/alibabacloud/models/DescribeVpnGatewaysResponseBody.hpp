// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpnGatewaysResponseBodyVpnGateways.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnGatewaysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnGatewaysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpnGateways, vpnGateways_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnGatewaysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpnGateways, vpnGateways_);
    };
    DescribeVpnGatewaysResponseBody() = default ;
    DescribeVpnGatewaysResponseBody(const DescribeVpnGatewaysResponseBody &) = default ;
    DescribeVpnGatewaysResponseBody(DescribeVpnGatewaysResponseBody &&) = default ;
    DescribeVpnGatewaysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnGatewaysResponseBody() = default ;
    DescribeVpnGatewaysResponseBody& operator=(const DescribeVpnGatewaysResponseBody &) = default ;
    DescribeVpnGatewaysResponseBody& operator=(DescribeVpnGatewaysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->vpnGateways_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpnGatewaysResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpnGatewaysResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpnGatewaysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpnGatewaysResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpnGateways Field Functions 
    bool hasVpnGateways() const { return this->vpnGateways_ != nullptr;};
    void deleteVpnGateways() { this->vpnGateways_ = nullptr;};
    inline const DescribeVpnGatewaysResponseBodyVpnGateways & vpnGateways() const { DARABONBA_PTR_GET_CONST(vpnGateways_, DescribeVpnGatewaysResponseBodyVpnGateways) };
    inline DescribeVpnGatewaysResponseBodyVpnGateways vpnGateways() { DARABONBA_PTR_GET(vpnGateways_, DescribeVpnGatewaysResponseBodyVpnGateways) };
    inline DescribeVpnGatewaysResponseBody& setVpnGateways(const DescribeVpnGatewaysResponseBodyVpnGateways & vpnGateways) { DARABONBA_PTR_SET_VALUE(vpnGateways_, vpnGateways) };
    inline DescribeVpnGatewaysResponseBody& setVpnGateways(DescribeVpnGatewaysResponseBodyVpnGateways && vpnGateways) { DARABONBA_PTR_SET_RVALUE(vpnGateways_, vpnGateways) };


  protected:
    // The number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The information about the VPN gateways.
    std::shared_ptr<DescribeVpnGatewaysResponseBodyVpnGateways> vpnGateways_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
