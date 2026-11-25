// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHSECURITYPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHSECURITYPROXYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class SwitchSecurityProxyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchSecurityProxyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NatRouteEntryList, natRouteEntryList_);
      DARABONBA_PTR_TO_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_TO_JSON(RouteAction, routeAction_);
      DARABONBA_PTR_TO_JSON(Switch, switch_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchSecurityProxyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NatRouteEntryList, natRouteEntryList_);
      DARABONBA_PTR_FROM_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_FROM_JSON(RouteAction, routeAction_);
      DARABONBA_PTR_FROM_JSON(Switch, switch_);
    };
    SwitchSecurityProxyRequest() = default ;
    SwitchSecurityProxyRequest(const SwitchSecurityProxyRequest &) = default ;
    SwitchSecurityProxyRequest(SwitchSecurityProxyRequest &&) = default ;
    SwitchSecurityProxyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchSecurityProxyRequest() = default ;
    SwitchSecurityProxyRequest& operator=(const SwitchSecurityProxyRequest &) = default ;
    SwitchSecurityProxyRequest& operator=(SwitchSecurityProxyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NatRouteEntryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NatRouteEntryList& obj) { 
        DARABONBA_PTR_TO_JSON(DestinationCidr, destinationCidr_);
        DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
        DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
        DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      };
      friend void from_json(const Darabonba::Json& j, NatRouteEntryList& obj) { 
        DARABONBA_PTR_FROM_JSON(DestinationCidr, destinationCidr_);
        DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
        DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
        DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      };
      NatRouteEntryList() = default ;
      NatRouteEntryList(const NatRouteEntryList &) = default ;
      NatRouteEntryList(NatRouteEntryList &&) = default ;
      NatRouteEntryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NatRouteEntryList() = default ;
      NatRouteEntryList& operator=(const NatRouteEntryList &) = default ;
      NatRouteEntryList& operator=(NatRouteEntryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->destinationCidr_ == nullptr
        && this->nextHopId_ == nullptr && this->nextHopType_ == nullptr && this->routeTableId_ == nullptr; };
      // destinationCidr Field Functions 
      bool hasDestinationCidr() const { return this->destinationCidr_ != nullptr;};
      void deleteDestinationCidr() { this->destinationCidr_ = nullptr;};
      inline string getDestinationCidr() const { DARABONBA_PTR_GET_DEFAULT(destinationCidr_, "") };
      inline NatRouteEntryList& setDestinationCidr(string destinationCidr) { DARABONBA_PTR_SET_VALUE(destinationCidr_, destinationCidr) };


      // nextHopId Field Functions 
      bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
      void deleteNextHopId() { this->nextHopId_ = nullptr;};
      inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
      inline NatRouteEntryList& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


      // nextHopType Field Functions 
      bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
      void deleteNextHopType() { this->nextHopType_ = nullptr;};
      inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
      inline NatRouteEntryList& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


      // routeTableId Field Functions 
      bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
      void deleteRouteTableId() { this->routeTableId_ = nullptr;};
      inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
      inline NatRouteEntryList& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    protected:
      // The destination CIDR block of the route entry. When RouteAction is specified, only the default route 0.0.0.0/0 is supported. If other CIDR blocks are passed, a parameter error is returned.
      // 
      // This parameter is required.
      shared_ptr<string> destinationCidr_ {};
      // The ID of the NAT gateway to which the route entry pointed before traffic redirection. You can obtain the ID by calling the DescribeSecurityProxyResources operation. When RouteAction is specified, this value must be consistent with the NAT gateway involved in the current operation. When traffic redirection is disabled, you must still pass this NAT gateway ID instead of the current next hop ID of the firewall.
      // 
      // This parameter is required.
      shared_ptr<string> nextHopId_ {};
      // The next hop type of the route entry before traffic redirection. When RouteAction is specified, this value is fixed to NatGateway and must be passed in pairs with NextHopId. If other values are passed, a parameter error is returned.
      // 
      // This parameter is required.
      shared_ptr<string> nextHopType_ {};
      // The ID of the route table to which the route entry belongs. The route table must exist in the user\"s VPC. This parameter and DestinationCidr are used together to locate a route. If the route does not exist, the task fails and a message indicating that the route entry does not exist is returned.
      // 
      // This parameter is required.
      shared_ptr<string> routeTableId_ {};
    };

    virtual bool empty() const override { return this->lang_ == nullptr
        && this->natRouteEntryList_ == nullptr && this->proxyId_ == nullptr && this->routeAction_ == nullptr && this->switch_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SwitchSecurityProxyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // natRouteEntryList Field Functions 
    bool hasNatRouteEntryList() const { return this->natRouteEntryList_ != nullptr;};
    void deleteNatRouteEntryList() { this->natRouteEntryList_ = nullptr;};
    inline const vector<SwitchSecurityProxyRequest::NatRouteEntryList> & getNatRouteEntryList() const { DARABONBA_PTR_GET_CONST(natRouteEntryList_, vector<SwitchSecurityProxyRequest::NatRouteEntryList>) };
    inline vector<SwitchSecurityProxyRequest::NatRouteEntryList> getNatRouteEntryList() { DARABONBA_PTR_GET(natRouteEntryList_, vector<SwitchSecurityProxyRequest::NatRouteEntryList>) };
    inline SwitchSecurityProxyRequest& setNatRouteEntryList(const vector<SwitchSecurityProxyRequest::NatRouteEntryList> & natRouteEntryList) { DARABONBA_PTR_SET_VALUE(natRouteEntryList_, natRouteEntryList) };
    inline SwitchSecurityProxyRequest& setNatRouteEntryList(vector<SwitchSecurityProxyRequest::NatRouteEntryList> && natRouteEntryList) { DARABONBA_PTR_SET_RVALUE(natRouteEntryList_, natRouteEntryList) };


    // proxyId Field Functions 
    bool hasProxyId() const { return this->proxyId_ != nullptr;};
    void deleteProxyId() { this->proxyId_ = nullptr;};
    inline string getProxyId() const { DARABONBA_PTR_GET_DEFAULT(proxyId_, "") };
    inline SwitchSecurityProxyRequest& setProxyId(string proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


    // routeAction Field Functions 
    bool hasRouteAction() const { return this->routeAction_ != nullptr;};
    void deleteRouteAction() { this->routeAction_ = nullptr;};
    inline string getRouteAction() const { DARABONBA_PTR_GET_DEFAULT(routeAction_, "") };
    inline SwitchSecurityProxyRequest& setRouteAction(string routeAction) { DARABONBA_PTR_SET_VALUE(routeAction_, routeAction) };


    // switch Field Functions 
    bool hasSwitch() const { return this->switch_ != nullptr;};
    void deleteSwitch() { this->switch_ = nullptr;};
    inline string getSwitch() const { DARABONBA_PTR_GET_DEFAULT(switch_, "") };
    inline SwitchSecurityProxyRequest& setSwitch(string _switch) { DARABONBA_PTR_SET_VALUE(switch_, _switch) };


  protected:
    // The language of the request and response. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The route entry list for routing to be redirected or un-redirected. Maximum number of entries: 10,000. When RouteAction (divert or undivert) is specified, a non-empty list must be provided and used according to the incremental semantics. Each entry must include the RouteTableId, DestinationCidr, NextHopId, and NextHopType fields, and the combination of RouteTableId and DestinationCidr must be unique. In the Gateway Load Balancer (GWLB) architecture, when committed together with Switch=open, this parameter is used to specify the route entry for which traffic redirection is enabled in the current request. If no list is provided, the saved list is used. If no active list exists, a parameter error is returned.
    shared_ptr<vector<SwitchSecurityProxyRequest::NatRouteEntryList>> natRouteEntryList_ {};
    // The ID of the NAT firewall.
    // 
    // This parameter is required.
    shared_ptr<string> proxyId_ {};
    // Makes incremental traffic redirection changes to the route entry passed in this request. Other redirected route tables in the list are not affected. Valid values: divert (enables traffic redirection for the passed route entry) and undivert (shutdown of traffic redirection for the passed route entry). This parameter is active only when the firewall is in the traffic redirection state (normal). This parameter and Switch are mutually exclusive and cannot be both set to non-empty values at the same time. If this parameter is not specified or is set to an empty string, the incremental semantics are not used.
    shared_ptr<string> routeAction_ {};
    // The security protection switch. Valid values:
    // - open: Enabled.
    // - close: Disabled.
    // 
    // This parameter is required.
    shared_ptr<string> switch_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
