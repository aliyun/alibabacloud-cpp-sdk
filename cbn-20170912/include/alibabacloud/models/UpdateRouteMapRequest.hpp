// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROUTEMAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROUTEMAPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class UpdateRouteMapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRouteMapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RouteMapId, routeMapId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRouteMapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RouteMapId, routeMapId_);
    };
    UpdateRouteMapRequest() = default ;
    UpdateRouteMapRequest(const UpdateRouteMapRequest &) = default ;
    UpdateRouteMapRequest(UpdateRouteMapRequest &&) = default ;
    UpdateRouteMapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRouteMapRequest() = default ;
    UpdateRouteMapRequest& operator=(const UpdateRouteMapRequest &) = default ;
    UpdateRouteMapRequest& operator=(UpdateRouteMapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->name_ == nullptr && this->priority_ == nullptr && this->routeMapId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateRouteMapRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateRouteMapRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateRouteMapRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateRouteMapRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateRouteMapRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // routeMapId Field Functions 
    bool hasRouteMapId() const { return this->routeMapId_ != nullptr;};
    void deleteRouteMapId() { this->routeMapId_ = nullptr;};
    inline string getRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(routeMapId_, "") };
    inline UpdateRouteMapRequest& setRouteMapId(string routeMapId) { DARABONBA_PTR_SET_VALUE(routeMapId_, routeMapId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the client token. The RequestId of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The description of the route map.
    // 
    // The description can be empty or 1 to 256 characters in length. It cannot start with http:// or https://.
    shared_ptr<string> description_ {};
    // Specifies whether to only precheck the request. Valid values:
    // - **true**: prechecks the request without updating the route map. The system checks whether required parameters are specified, the request format is valid, and the service limits are met. If the request fails the precheck, the corresponding error is returned. If the request passes the precheck, the DryRunOperation error code is returned.
    // - **false** (default): sends the request. If the request passes the precheck, the route map is updated.
    shared_ptr<bool> dryRun_ {};
    // The name of the route map.
    // 
    // The name can be empty or 1 to 128 characters in length. It cannot start with http:// or https://.
    shared_ptr<string> name_ {};
    // Policy priority of the route map. Valid values: **1** to **100**. A smaller value indicates a higher priority.
    // 
    // > Policy priority of each route map within an Alibaba Cloud account must be unique. When a route map is applied, the system starts to match routes against the rules of the route map that has the highest priority (the smallest priority value) and then proceeds to route maps with lower priorities based on the rule priorities. Therefore, when you specify policy priority of a route map, make sure that policy priority meets your expected matching order.
    shared_ptr<int32_t> priority_ {};
    // The ID of the route map.
    // 
    // This parameter is required.
    shared_ptr<string> routeMapId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
