// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROUTEMAPRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROUTEMAPRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class UpdateRouteMapRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRouteMapRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(MatchConditions, matchConditionsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RouteMapRuleId, routeMapRuleId_);
      DARABONBA_PTR_TO_JSON(SetActions, setActionsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRouteMapRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(MatchConditions, matchConditionsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RouteMapRuleId, routeMapRuleId_);
      DARABONBA_PTR_FROM_JSON(SetActions, setActionsShrink_);
    };
    UpdateRouteMapRuleShrinkRequest() = default ;
    UpdateRouteMapRuleShrinkRequest(const UpdateRouteMapRuleShrinkRequest &) = default ;
    UpdateRouteMapRuleShrinkRequest(UpdateRouteMapRuleShrinkRequest &&) = default ;
    UpdateRouteMapRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRouteMapRuleShrinkRequest() = default ;
    UpdateRouteMapRuleShrinkRequest& operator=(const UpdateRouteMapRuleShrinkRequest &) = default ;
    UpdateRouteMapRuleShrinkRequest& operator=(UpdateRouteMapRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->matchConditionsShrink_ == nullptr && this->name_ == nullptr && this->priority_ == nullptr
        && this->routeMapRuleId_ == nullptr && this->setActionsShrink_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateRouteMapRuleShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateRouteMapRuleShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateRouteMapRuleShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // matchConditionsShrink Field Functions 
    bool hasMatchConditionsShrink() const { return this->matchConditionsShrink_ != nullptr;};
    void deleteMatchConditionsShrink() { this->matchConditionsShrink_ = nullptr;};
    inline string getMatchConditionsShrink() const { DARABONBA_PTR_GET_DEFAULT(matchConditionsShrink_, "") };
    inline UpdateRouteMapRuleShrinkRequest& setMatchConditionsShrink(string matchConditionsShrink) { DARABONBA_PTR_SET_VALUE(matchConditionsShrink_, matchConditionsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateRouteMapRuleShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateRouteMapRuleShrinkRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // routeMapRuleId Field Functions 
    bool hasRouteMapRuleId() const { return this->routeMapRuleId_ != nullptr;};
    void deleteRouteMapRuleId() { this->routeMapRuleId_ = nullptr;};
    inline string getRouteMapRuleId() const { DARABONBA_PTR_GET_DEFAULT(routeMapRuleId_, "") };
    inline UpdateRouteMapRuleShrinkRequest& setRouteMapRuleId(string routeMapRuleId) { DARABONBA_PTR_SET_VALUE(routeMapRuleId_, routeMapRuleId) };


    // setActionsShrink Field Functions 
    bool hasSetActionsShrink() const { return this->setActionsShrink_ != nullptr;};
    void deleteSetActionsShrink() { this->setActionsShrink_ = nullptr;};
    inline string getSetActionsShrink() const { DARABONBA_PTR_GET_DEFAULT(setActionsShrink_, "") };
    inline UpdateRouteMapRuleShrinkRequest& setSetActionsShrink(string setActionsShrink) { DARABONBA_PTR_SET_VALUE(setActionsShrink_, setActionsShrink) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that the value is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The detailed description of the rule. The description can be empty or 1 to 256 characters in length, and cannot start with http:// or https://.
    shared_ptr<string> description_ {};
    // Specifies whether to precheck only this request. Valid values:
    // 
    // - **true**: prechecks the request without updating the route map rule. The system checks whether required parameters are set, the request format, and service limits. If the request fails the precheck, the corresponding error is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // - **false** (default): sends the request. If the request passes the precheck, the route map rule is updated.
    shared_ptr<bool> dryRun_ {};
    // The match conditions of the route map rule. The system performs the actions defined in **SetActions** only when a route meets all the match conditions defined in this parameter.
    shared_ptr<string> matchConditionsShrink_ {};
    // The name of the rule for easy identification. The name can be empty or 1 to 128 characters in length, and cannot start with http:// or https://.
    shared_ptr<string> name_ {};
    // The priority of the rule. A smaller value indicates a higher priority.
    shared_ptr<int32_t> priority_ {};
    // The ID of the route map rule to be updated.
    shared_ptr<string> routeMapRuleId_ {};
    // The actions to be performed for the route map rule. After a route meets all the match conditions defined in **MatchConditions**, the system processes the route based on the actions defined in this parameter.
    shared_ptr<string> setActionsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
