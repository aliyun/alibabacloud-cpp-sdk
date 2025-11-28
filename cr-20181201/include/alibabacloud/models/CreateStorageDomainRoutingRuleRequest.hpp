// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTORAGEDOMAINROUTINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTORAGEDOMAINROUTINGRULEREQUEST_HPP_
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
  class CreateStorageDomainRoutingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStorageDomainRoutingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Routes, routes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStorageDomainRoutingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Routes, routes_);
    };
    CreateStorageDomainRoutingRuleRequest() = default ;
    CreateStorageDomainRoutingRuleRequest(const CreateStorageDomainRoutingRuleRequest &) = default ;
    CreateStorageDomainRoutingRuleRequest(CreateStorageDomainRoutingRuleRequest &&) = default ;
    CreateStorageDomainRoutingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStorageDomainRoutingRuleRequest() = default ;
    CreateStorageDomainRoutingRuleRequest& operator=(const CreateStorageDomainRoutingRuleRequest &) = default ;
    CreateStorageDomainRoutingRuleRequest& operator=(CreateStorageDomainRoutingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->routes_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateStorageDomainRoutingRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // routes Field Functions 
    bool hasRoutes() const { return this->routes_ != nullptr;};
    void deleteRoutes() { this->routes_ = nullptr;};
    inline const vector<RouteItem> & routes() const { DARABONBA_PTR_GET_CONST(routes_, vector<RouteItem>) };
    inline vector<RouteItem> routes() { DARABONBA_PTR_GET(routes_, vector<RouteItem>) };
    inline CreateStorageDomainRoutingRuleRequest& setRoutes(const vector<RouteItem> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
    inline CreateStorageDomainRoutingRuleRequest& setRoutes(vector<RouteItem> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<RouteItem>> routes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
