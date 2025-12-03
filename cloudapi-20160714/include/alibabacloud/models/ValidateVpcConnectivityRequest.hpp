// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEVPCCONNECTIVITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEVPCCONNECTIVITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ValidateVpcConnectivityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateVpcConnectivityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(VpcAccessId, vpcAccessId_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateVpcConnectivityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(VpcAccessId, vpcAccessId_);
    };
    ValidateVpcConnectivityRequest() = default ;
    ValidateVpcConnectivityRequest(const ValidateVpcConnectivityRequest &) = default ;
    ValidateVpcConnectivityRequest(ValidateVpcConnectivityRequest &&) = default ;
    ValidateVpcConnectivityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateVpcConnectivityRequest() = default ;
    ValidateVpcConnectivityRequest& operator=(const ValidateVpcConnectivityRequest &) = default ;
    ValidateVpcConnectivityRequest& operator=(ValidateVpcConnectivityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->securityToken_ == nullptr && return this->vpcAccessId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ValidateVpcConnectivityRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ValidateVpcConnectivityRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // vpcAccessId Field Functions 
    bool hasVpcAccessId() const { return this->vpcAccessId_ != nullptr;};
    void deleteVpcAccessId() { this->vpcAccessId_ = nullptr;};
    inline string vpcAccessId() const { DARABONBA_PTR_GET_DEFAULT(vpcAccessId_, "") };
    inline ValidateVpcConnectivityRequest& setVpcAccessId(string vpcAccessId) { DARABONBA_PTR_SET_VALUE(vpcAccessId_, vpcAccessId) };


  protected:
    // The ID of the API Gateway instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The ID of the VPC access authorization.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcAccessId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
