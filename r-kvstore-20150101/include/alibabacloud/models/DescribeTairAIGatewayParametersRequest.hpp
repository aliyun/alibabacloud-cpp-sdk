// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAIRAIGATEWAYPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAIRAIGATEWAYPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeTairAIGatewayParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTairAIGatewayParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PluginType, pluginType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTairAIGatewayParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PluginType, pluginType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeTairAIGatewayParametersRequest() = default ;
    DescribeTairAIGatewayParametersRequest(const DescribeTairAIGatewayParametersRequest &) = default ;
    DescribeTairAIGatewayParametersRequest(DescribeTairAIGatewayParametersRequest &&) = default ;
    DescribeTairAIGatewayParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTairAIGatewayParametersRequest() = default ;
    DescribeTairAIGatewayParametersRequest& operator=(const DescribeTairAIGatewayParametersRequest &) = default ;
    DescribeTairAIGatewayParametersRequest& operator=(DescribeTairAIGatewayParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->pluginType_ == nullptr && this->regionId_ == nullptr && this->securityToken_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeTairAIGatewayParametersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pluginType Field Functions 
    bool hasPluginType() const { return this->pluginType_ != nullptr;};
    void deletePluginType() { this->pluginType_ = nullptr;};
    inline string getPluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
    inline DescribeTairAIGatewayParametersRequest& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeTairAIGatewayParametersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeTairAIGatewayParametersRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The plug-in type. You can use this parameter to filter the parameters of a specific plug-in.
    shared_ptr<string> pluginType_ {};
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61012.html) operation to obtain the region ID.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
