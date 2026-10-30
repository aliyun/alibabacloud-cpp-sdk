// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTEMAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTEMAPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DeleteRouteMapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRouteMapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RouteMapId, routeMapId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRouteMapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RouteMapId, routeMapId_);
    };
    DeleteRouteMapRequest() = default ;
    DeleteRouteMapRequest(const DeleteRouteMapRequest &) = default ;
    DeleteRouteMapRequest(DeleteRouteMapRequest &&) = default ;
    DeleteRouteMapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRouteMapRequest() = default ;
    DeleteRouteMapRequest& operator=(const DeleteRouteMapRequest &) = default ;
    DeleteRouteMapRequest& operator=(DeleteRouteMapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->routeMapId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteRouteMapRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteRouteMapRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // routeMapId Field Functions 
    bool hasRouteMapId() const { return this->routeMapId_ != nullptr;};
    void deleteRouteMapId() { this->routeMapId_ = nullptr;};
    inline string getRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(routeMapId_, "") };
    inline DeleteRouteMapRequest& setRouteMapId(string routeMapId) { DARABONBA_PTR_SET_VALUE(routeMapId_, routeMapId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the value from your client and make sure that the value is unique across different requests. The ClientToken parameter supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to only precheck the request. Valid values:
    // - **true**: The system prechecks the request without deleting the route map. The system checks whether the required parameters are specified, the request format is valid, and the service limits are met. If the request fails the precheck, the system returns an error. If the request passes the precheck, the system returns the DryRunOperation error code.
    // - **false** (default): The system sends a normal request and deletes the route map after the request passes the precheck.
    shared_ptr<bool> dryRun_ {};
    // The ID of the route map.
    // 
    // This parameter is required.
    shared_ptr<string> routeMapId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
