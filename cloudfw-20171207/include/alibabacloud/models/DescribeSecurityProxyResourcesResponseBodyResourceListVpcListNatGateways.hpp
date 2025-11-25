// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYPROXYRESOURCESRESPONSEBODYRESOURCELISTVPCLISTNATGATEWAYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYPROXYRESOURCESRESPONSEBODYRESOURCELISTVPCLISTNATGATEWAYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatGatewayName, natGatewayName_);
      DARABONBA_PTR_TO_JSON(NatRouteEntryList, natRouteEntryList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatGatewayName, natGatewayName_);
      DARABONBA_PTR_FROM_JSON(NatRouteEntryList, natRouteEntryList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways() = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways(const DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways &) = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways(DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways &&) = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways() = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways& operator=(const DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways &) = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways& operator=(DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && return this->natGatewayId_ == nullptr && return this->natGatewayName_ == nullptr && return this->natRouteEntryList_ == nullptr && return this->status_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natGatewayName Field Functions 
    bool hasNatGatewayName() const { return this->natGatewayName_ != nullptr;};
    void deleteNatGatewayName() { this->natGatewayName_ = nullptr;};
    inline string natGatewayName() const { DARABONBA_PTR_GET_DEFAULT(natGatewayName_, "") };
    inline DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways& setNatGatewayName(string natGatewayName) { DARABONBA_PTR_SET_VALUE(natGatewayName_, natGatewayName) };


    // natRouteEntryList Field Functions 
    bool hasNatRouteEntryList() const { return this->natRouteEntryList_ != nullptr;};
    void deleteNatRouteEntryList() { this->natRouteEntryList_ = nullptr;};
    inline const vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList> & natRouteEntryList() const { DARABONBA_PTR_GET_CONST(natRouteEntryList_, vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList>) };
    inline vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList> natRouteEntryList() { DARABONBA_PTR_GET(natRouteEntryList_, vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList>) };
    inline DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways& setNatRouteEntryList(const vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList> & natRouteEntryList) { DARABONBA_PTR_SET_VALUE(natRouteEntryList_, natRouteEntryList) };
    inline DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways& setNatRouteEntryList(vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList> && natRouteEntryList) { DARABONBA_PTR_SET_RVALUE(natRouteEntryList_, natRouteEntryList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> detail_ = nullptr;
    std::shared_ptr<string> natGatewayId_ = nullptr;
    std::shared_ptr<string> natGatewayName_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList>> natRouteEntryList_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
