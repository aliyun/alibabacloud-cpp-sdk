// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VPCDESCRIBEVPCNATGATEWAYNETWORKINTERFACEQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VPCDESCRIBEVPCNATGATEWAYNETWORKINTERFACEQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponseBody() = default ;
    VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponseBody(const VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponseBody &) = default ;
    VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponseBody(VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponseBody &&) = default ;
    VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponseBody() = default ;
    VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponseBody& operator=(const VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponseBody &) = default ;
    VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponseBody& operator=(VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->quota_ != nullptr
        && this->requestId_ != nullptr; };
    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int64_t quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0L) };
    inline VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponseBody& setQuota(int64_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of endpoints that can be created.
    std::shared_ptr<int64_t> quota_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
