// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEADDITIONALVPCLINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEADDITIONALVPCLINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class CreateAdditionalVpcLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAdditionalVpcLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalVpcId, additionalVpcId_);
      DARABONBA_PTR_TO_JSON(AdditionalVswitchId, additionalVswitchId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAdditionalVpcLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalVpcId, additionalVpcId_);
      DARABONBA_PTR_FROM_JSON(AdditionalVswitchId, additionalVswitchId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    CreateAdditionalVpcLinkRequest() = default ;
    CreateAdditionalVpcLinkRequest(const CreateAdditionalVpcLinkRequest &) = default ;
    CreateAdditionalVpcLinkRequest(CreateAdditionalVpcLinkRequest &&) = default ;
    CreateAdditionalVpcLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAdditionalVpcLinkRequest() = default ;
    CreateAdditionalVpcLinkRequest& operator=(const CreateAdditionalVpcLinkRequest &) = default ;
    CreateAdditionalVpcLinkRequest& operator=(CreateAdditionalVpcLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalVpcId_ == nullptr
        && this->additionalVswitchId_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->securityToken_ == nullptr; };
    // additionalVpcId Field Functions 
    bool hasAdditionalVpcId() const { return this->additionalVpcId_ != nullptr;};
    void deleteAdditionalVpcId() { this->additionalVpcId_ = nullptr;};
    inline string getAdditionalVpcId() const { DARABONBA_PTR_GET_DEFAULT(additionalVpcId_, "") };
    inline CreateAdditionalVpcLinkRequest& setAdditionalVpcId(string additionalVpcId) { DARABONBA_PTR_SET_VALUE(additionalVpcId_, additionalVpcId) };


    // additionalVswitchId Field Functions 
    bool hasAdditionalVswitchId() const { return this->additionalVswitchId_ != nullptr;};
    void deleteAdditionalVswitchId() { this->additionalVswitchId_ = nullptr;};
    inline string getAdditionalVswitchId() const { DARABONBA_PTR_GET_DEFAULT(additionalVswitchId_, "") };
    inline CreateAdditionalVpcLinkRequest& setAdditionalVswitchId(string additionalVswitchId) { DARABONBA_PTR_SET_VALUE(additionalVswitchId_, additionalVswitchId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateAdditionalVpcLinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAdditionalVpcLinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateAdditionalVpcLinkRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // This parameter is required.
    shared_ptr<string> additionalVpcId_ {};
    // This parameter is required.
    shared_ptr<string> additionalVswitchId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
