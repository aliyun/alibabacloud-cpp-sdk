// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTAIRAIGATEWAYPARAMETERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTAIRAIGATEWAYPARAMETERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class ModifyTairAIGatewayParameterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTairAIGatewayParameterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTairAIGatewayParameterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    ModifyTairAIGatewayParameterRequest() = default ;
    ModifyTairAIGatewayParameterRequest(const ModifyTairAIGatewayParameterRequest &) = default ;
    ModifyTairAIGatewayParameterRequest(ModifyTairAIGatewayParameterRequest &&) = default ;
    ModifyTairAIGatewayParameterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTairAIGatewayParameterRequest() = default ;
    ModifyTairAIGatewayParameterRequest& operator=(const ModifyTairAIGatewayParameterRequest &) = default ;
    ModifyTairAIGatewayParameterRequest& operator=(ModifyTairAIGatewayParameterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->parameters_ == nullptr && this->regionId_ == nullptr && this->securityToken_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyTairAIGatewayParameterRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ModifyTairAIGatewayParameterRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyTairAIGatewayParameterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyTairAIGatewayParameterRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The JSON-formatted text of parameters and their corresponding values. Format: {"Parameter1":"Value1","Parameter2":"Value2",...}. The specified values overwrite the existing values.
    // > The parameters available for different versions are subject to the console.
    // 
    // This parameter is required.
    shared_ptr<string> parameters_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
