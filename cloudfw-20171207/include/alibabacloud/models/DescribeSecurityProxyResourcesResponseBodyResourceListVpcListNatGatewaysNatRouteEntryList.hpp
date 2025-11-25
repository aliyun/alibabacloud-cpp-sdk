// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYPROXYRESOURCESRESPONSEBODYRESOURCELISTVPCLISTNATGATEWAYSNATROUTEENTRYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYPROXYRESOURCESRESPONSEBODYRESOURCELISTVPCLISTNATGATEWAYSNATROUTEENTRYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidr, destinationCidr_);
      DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidr, destinationCidr_);
      DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
    };
    DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList() = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList(const DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList &) = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList(DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList &&) = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList() = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList& operator=(const DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList &) = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList& operator=(DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationCidr_ == nullptr
        && return this->nextHopId_ == nullptr && return this->nextHopType_ == nullptr && return this->routeTableId_ == nullptr; };
    // destinationCidr Field Functions 
    bool hasDestinationCidr() const { return this->destinationCidr_ != nullptr;};
    void deleteDestinationCidr() { this->destinationCidr_ = nullptr;};
    inline string destinationCidr() const { DARABONBA_PTR_GET_DEFAULT(destinationCidr_, "") };
    inline DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList& setDestinationCidr(string destinationCidr) { DARABONBA_PTR_SET_VALUE(destinationCidr_, destinationCidr) };


    // nextHopId Field Functions 
    bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
    void deleteNextHopId() { this->nextHopId_ = nullptr;};
    inline string nextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
    inline DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGatewaysNatRouteEntryList& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


  protected:
    std::shared_ptr<string> destinationCidr_ = nullptr;
    std::shared_ptr<string> nextHopId_ = nullptr;
    std::shared_ptr<string> nextHopType_ = nullptr;
    std::shared_ptr<string> routeTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
