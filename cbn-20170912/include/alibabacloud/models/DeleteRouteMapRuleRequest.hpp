// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTEMAPRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTEMAPRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DeleteRouteMapRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRouteMapRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RouteMapRuleId, routeMapRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRouteMapRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RouteMapRuleId, routeMapRuleId_);
    };
    DeleteRouteMapRuleRequest() = default ;
    DeleteRouteMapRuleRequest(const DeleteRouteMapRuleRequest &) = default ;
    DeleteRouteMapRuleRequest(DeleteRouteMapRuleRequest &&) = default ;
    DeleteRouteMapRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRouteMapRuleRequest() = default ;
    DeleteRouteMapRuleRequest& operator=(const DeleteRouteMapRuleRequest &) = default ;
    DeleteRouteMapRuleRequest& operator=(DeleteRouteMapRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->routeMapRuleId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteRouteMapRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteRouteMapRuleRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // routeMapRuleId Field Functions 
    bool hasRouteMapRuleId() const { return this->routeMapRuleId_ != nullptr;};
    void deleteRouteMapRuleId() { this->routeMapRuleId_ = nullptr;};
    inline string getRouteMapRuleId() const { DARABONBA_PTR_GET_DEFAULT(routeMapRuleId_, "") };
    inline DeleteRouteMapRuleRequest& setRouteMapRuleId(string routeMapRuleId) { DARABONBA_PTR_SET_VALUE(routeMapRuleId_, routeMapRuleId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the parameter value from your client to ensure that the value is unique across different requests. The ClientToken parameter supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to only precheck the request. Valid values:
    // 
    // - **true**: sends a check request and does not delete the route map rule. The system checks whether required parameters are specified, the request format, and service limits. If the request fails the check, the corresponding error is returned. If the request passes the check, the DryRunOperation error code is returned.
    // - **false** (default): sends a regular request and directly deletes the route map rule after the request passes the check.
    shared_ptr<bool> dryRun_ {};
    // The ID of the route map rule to delete.
    // 
    // This parameter is required.
    shared_ptr<string> routeMapRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
