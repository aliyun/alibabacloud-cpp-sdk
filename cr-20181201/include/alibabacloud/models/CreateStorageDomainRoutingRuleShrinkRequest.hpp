// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTORAGEDOMAINROUTINGRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTORAGEDOMAINROUTINGRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateStorageDomainRoutingRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStorageDomainRoutingRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Routes, routesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStorageDomainRoutingRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Routes, routesShrink_);
    };
    CreateStorageDomainRoutingRuleShrinkRequest() = default ;
    CreateStorageDomainRoutingRuleShrinkRequest(const CreateStorageDomainRoutingRuleShrinkRequest &) = default ;
    CreateStorageDomainRoutingRuleShrinkRequest(CreateStorageDomainRoutingRuleShrinkRequest &&) = default ;
    CreateStorageDomainRoutingRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStorageDomainRoutingRuleShrinkRequest() = default ;
    CreateStorageDomainRoutingRuleShrinkRequest& operator=(const CreateStorageDomainRoutingRuleShrinkRequest &) = default ;
    CreateStorageDomainRoutingRuleShrinkRequest& operator=(CreateStorageDomainRoutingRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->routesShrink_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateStorageDomainRoutingRuleShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // routesShrink Field Functions 
    bool hasRoutesShrink() const { return this->routesShrink_ != nullptr;};
    void deleteRoutesShrink() { this->routesShrink_ = nullptr;};
    inline string routesShrink() const { DARABONBA_PTR_GET_DEFAULT(routesShrink_, "") };
    inline CreateStorageDomainRoutingRuleShrinkRequest& setRoutesShrink(string routesShrink) { DARABONBA_PTR_SET_VALUE(routesShrink_, routesShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> routesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
