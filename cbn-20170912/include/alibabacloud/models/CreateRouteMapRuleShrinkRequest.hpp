// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTEMAPRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTEMAPRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateRouteMapRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRouteMapRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(MatchConditions, matchConditionsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RouteMapId, routeMapId_);
      DARABONBA_PTR_TO_JSON(SetActions, setActionsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRouteMapRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(MatchConditions, matchConditionsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RouteMapId, routeMapId_);
      DARABONBA_PTR_FROM_JSON(SetActions, setActionsShrink_);
    };
    CreateRouteMapRuleShrinkRequest() = default ;
    CreateRouteMapRuleShrinkRequest(const CreateRouteMapRuleShrinkRequest &) = default ;
    CreateRouteMapRuleShrinkRequest(CreateRouteMapRuleShrinkRequest &&) = default ;
    CreateRouteMapRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRouteMapRuleShrinkRequest() = default ;
    CreateRouteMapRuleShrinkRequest& operator=(const CreateRouteMapRuleShrinkRequest &) = default ;
    CreateRouteMapRuleShrinkRequest& operator=(CreateRouteMapRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->matchConditionsShrink_ == nullptr && this->name_ == nullptr && this->priority_ == nullptr
        && this->routeMapId_ == nullptr && this->setActionsShrink_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateRouteMapRuleShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRouteMapRuleShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateRouteMapRuleShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // matchConditionsShrink Field Functions 
    bool hasMatchConditionsShrink() const { return this->matchConditionsShrink_ != nullptr;};
    void deleteMatchConditionsShrink() { this->matchConditionsShrink_ = nullptr;};
    inline string getMatchConditionsShrink() const { DARABONBA_PTR_GET_DEFAULT(matchConditionsShrink_, "") };
    inline CreateRouteMapRuleShrinkRequest& setMatchConditionsShrink(string matchConditionsShrink) { DARABONBA_PTR_SET_VALUE(matchConditionsShrink_, matchConditionsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRouteMapRuleShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateRouteMapRuleShrinkRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // routeMapId Field Functions 
    bool hasRouteMapId() const { return this->routeMapId_ != nullptr;};
    void deleteRouteMapId() { this->routeMapId_ = nullptr;};
    inline string getRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(routeMapId_, "") };
    inline CreateRouteMapRuleShrinkRequest& setRouteMapId(string routeMapId) { DARABONBA_PTR_SET_VALUE(routeMapId_, routeMapId) };


    // setActionsShrink Field Functions 
    bool hasSetActionsShrink() const { return this->setActionsShrink_ != nullptr;};
    void deleteSetActionsShrink() { this->setActionsShrink_ = nullptr;};
    inline string getSetActionsShrink() const { DARABONBA_PTR_GET_DEFAULT(setActionsShrink_, "") };
    inline CreateRouteMapRuleShrinkRequest& setSetActionsShrink(string setActionsShrink) { DARABONBA_PTR_SET_VALUE(setActionsShrink_, setActionsShrink) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the parameter value on your client. Make sure that the token is unique across different requests. The client token supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The detailed description of the rule. The description can be empty or 1 to 256 characters in length, and cannot start with http:// or https://.
    shared_ptr<string> description_ {};
    // Specifies whether to only precheck the request. Valid values:
    // 
    // - **true**: Prechecks the request without creating the route map rule. The system checks whether required parameters are specified, the request format, and service limits. If the request fails the precheck, the corresponding error is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // - **false** (default): Sends the request. After the request passes the precheck, the route map rule is created.
    shared_ptr<bool> dryRun_ {};
    // The match conditions of the route map rule. The system executes the actions defined in **SetActions** only when a route meets all the match conditions defined in this parameter.
    shared_ptr<string> matchConditionsShrink_ {};
    // The name of the rule for easy identification. The name can be empty or 1 to 128 characters in length, and cannot start with http:// or https://.
    shared_ptr<string> name_ {};
    // The priority of the rule. A smaller value indicates a higher priority.
    // 
    // This parameter is required.
    shared_ptr<int32_t> priority_ {};
    // The ID of the route map.
    // 
    // This parameter is required.
    shared_ptr<string> routeMapId_ {};
    // The actions to execute for the route map rule. After a route meets all the match conditions defined in **MatchConditions**, the system processes the route based on the actions defined in this parameter.
    shared_ptr<string> setActionsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
