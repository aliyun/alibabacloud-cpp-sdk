// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTORAGEDOMAINROUTINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTORAGEDOMAINROUTINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RouteItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class UpdateStorageDomainRoutingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStorageDomainRoutingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Routes, routes_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStorageDomainRoutingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Routes, routes_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    UpdateStorageDomainRoutingRuleRequest() = default ;
    UpdateStorageDomainRoutingRuleRequest(const UpdateStorageDomainRoutingRuleRequest &) = default ;
    UpdateStorageDomainRoutingRuleRequest(UpdateStorageDomainRoutingRuleRequest &&) = default ;
    UpdateStorageDomainRoutingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStorageDomainRoutingRuleRequest() = default ;
    UpdateStorageDomainRoutingRuleRequest& operator=(const UpdateStorageDomainRoutingRuleRequest &) = default ;
    UpdateStorageDomainRoutingRuleRequest& operator=(UpdateStorageDomainRoutingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->routes_ == nullptr && return this->ruleId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateStorageDomainRoutingRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // routes Field Functions 
    bool hasRoutes() const { return this->routes_ != nullptr;};
    void deleteRoutes() { this->routes_ = nullptr;};
    inline const vector<RouteItem> & routes() const { DARABONBA_PTR_GET_CONST(routes_, vector<RouteItem>) };
    inline vector<RouteItem> routes() { DARABONBA_PTR_GET(routes_, vector<RouteItem>) };
    inline UpdateStorageDomainRoutingRuleRequest& setRoutes(const vector<RouteItem> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
    inline UpdateStorageDomainRoutingRuleRequest& setRoutes(vector<RouteItem> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline UpdateStorageDomainRoutingRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<RouteItem>> routes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
