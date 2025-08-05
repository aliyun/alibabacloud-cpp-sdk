// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECURITYPROXYREQUESTNATROUTEENTRYLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECURITYPROXYREQUESTNATROUTEENTRYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateSecurityProxyRequestNatRouteEntryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecurityProxyRequestNatRouteEntryList& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidr, destinationCidr_);
      DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecurityProxyRequestNatRouteEntryList& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidr, destinationCidr_);
      DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
    };
    CreateSecurityProxyRequestNatRouteEntryList() = default ;
    CreateSecurityProxyRequestNatRouteEntryList(const CreateSecurityProxyRequestNatRouteEntryList &) = default ;
    CreateSecurityProxyRequestNatRouteEntryList(CreateSecurityProxyRequestNatRouteEntryList &&) = default ;
    CreateSecurityProxyRequestNatRouteEntryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecurityProxyRequestNatRouteEntryList() = default ;
    CreateSecurityProxyRequestNatRouteEntryList& operator=(const CreateSecurityProxyRequestNatRouteEntryList &) = default ;
    CreateSecurityProxyRequestNatRouteEntryList& operator=(CreateSecurityProxyRequestNatRouteEntryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationCidr_ != nullptr
        && this->nextHopId_ != nullptr && this->nextHopType_ != nullptr && this->routeTableId_ != nullptr; };
    // destinationCidr Field Functions 
    bool hasDestinationCidr() const { return this->destinationCidr_ != nullptr;};
    void deleteDestinationCidr() { this->destinationCidr_ = nullptr;};
    inline string destinationCidr() const { DARABONBA_PTR_GET_DEFAULT(destinationCidr_, "") };
    inline CreateSecurityProxyRequestNatRouteEntryList& setDestinationCidr(string destinationCidr) { DARABONBA_PTR_SET_VALUE(destinationCidr_, destinationCidr) };


    // nextHopId Field Functions 
    bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
    void deleteNextHopId() { this->nextHopId_ = nullptr;};
    inline string nextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
    inline CreateSecurityProxyRequestNatRouteEntryList& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline CreateSecurityProxyRequestNatRouteEntryList& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline CreateSecurityProxyRequestNatRouteEntryList& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


  protected:
    // The destination CIDR block of the default route.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationCidr_ = nullptr;
    // The next hop of the original NAT gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextHopId_ = nullptr;
    // The network type of the next hop. Set the value to NatGateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextHopType_ = nullptr;
    // The route table to which the default route of the NAT gateway belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> routeTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
