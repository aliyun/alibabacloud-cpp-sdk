// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYPLANSRESPONSEBODYDATALISTINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYPLANSRESPONSEBODYDATALISTINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListDisasterRecoveryPlansResponseBodyDataListInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDisasterRecoveryPlansResponseBodyDataListInstances& obj) { 
      DARABONBA_PTR_TO_JSON(authType, authType_);
      DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_TO_JSON(endpointUrl, endpointUrl_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(instanceRole, instanceRole_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(messageProperty, messageProperty_);
      DARABONBA_PTR_TO_JSON(networkType, networkType_);
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(username, username_);
      DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDisasterRecoveryPlansResponseBodyDataListInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(authType, authType_);
      DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_FROM_JSON(endpointUrl, endpointUrl_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(instanceRole, instanceRole_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(messageProperty, messageProperty_);
      DARABONBA_PTR_FROM_JSON(networkType, networkType_);
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(username, username_);
      DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    ListDisasterRecoveryPlansResponseBodyDataListInstances() = default ;
    ListDisasterRecoveryPlansResponseBodyDataListInstances(const ListDisasterRecoveryPlansResponseBodyDataListInstances &) = default ;
    ListDisasterRecoveryPlansResponseBodyDataListInstances(ListDisasterRecoveryPlansResponseBodyDataListInstances &&) = default ;
    ListDisasterRecoveryPlansResponseBodyDataListInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDisasterRecoveryPlansResponseBodyDataListInstances() = default ;
    ListDisasterRecoveryPlansResponseBodyDataListInstances& operator=(const ListDisasterRecoveryPlansResponseBodyDataListInstances &) = default ;
    ListDisasterRecoveryPlansResponseBodyDataListInstances& operator=(ListDisasterRecoveryPlansResponseBodyDataListInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authType_ == nullptr
        && return this->consumerGroupId_ == nullptr && return this->endpointUrl_ == nullptr && return this->instanceId_ == nullptr && return this->instanceRole_ == nullptr && return this->instanceType_ == nullptr
        && return this->messageProperty_ == nullptr && return this->networkType_ == nullptr && return this->password_ == nullptr && return this->regionId_ == nullptr && return this->securityGroupId_ == nullptr
        && return this->username_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataListInstances& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // consumerGroupId Field Functions 
    bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
    void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
    inline string consumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataListInstances& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


    // endpointUrl Field Functions 
    bool hasEndpointUrl() const { return this->endpointUrl_ != nullptr;};
    void deleteEndpointUrl() { this->endpointUrl_ = nullptr;};
    inline string endpointUrl() const { DARABONBA_PTR_GET_DEFAULT(endpointUrl_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataListInstances& setEndpointUrl(string endpointUrl) { DARABONBA_PTR_SET_VALUE(endpointUrl_, endpointUrl) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataListInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceRole Field Functions 
    bool hasInstanceRole() const { return this->instanceRole_ != nullptr;};
    void deleteInstanceRole() { this->instanceRole_ = nullptr;};
    inline string instanceRole() const { DARABONBA_PTR_GET_DEFAULT(instanceRole_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataListInstances& setInstanceRole(string instanceRole) { DARABONBA_PTR_SET_VALUE(instanceRole_, instanceRole) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataListInstances& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // messageProperty Field Functions 
    bool hasMessageProperty() const { return this->messageProperty_ != nullptr;};
    void deleteMessageProperty() { this->messageProperty_ = nullptr;};
    inline const Models::ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty & messageProperty() const { DARABONBA_PTR_GET_CONST(messageProperty_, Models::ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty) };
    inline Models::ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty messageProperty() { DARABONBA_PTR_GET(messageProperty_, Models::ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty) };
    inline ListDisasterRecoveryPlansResponseBodyDataListInstances& setMessageProperty(const Models::ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty & messageProperty) { DARABONBA_PTR_SET_VALUE(messageProperty_, messageProperty) };
    inline ListDisasterRecoveryPlansResponseBodyDataListInstances& setMessageProperty(Models::ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty && messageProperty) { DARABONBA_PTR_SET_RVALUE(messageProperty_, messageProperty) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataListInstances& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataListInstances& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataListInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataListInstances& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataListInstances& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataListInstances& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataListInstances& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The authentication type.
    std::shared_ptr<string> authType_ = nullptr;
    // The ID of the consumer group.
    std::shared_ptr<string> consumerGroupId_ = nullptr;
    // The endpoint.
    std::shared_ptr<string> endpointUrl_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance role.
    std::shared_ptr<string> instanceRole_ = nullptr;
    // The instance type.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The message attribute.
    std::shared_ptr<Models::ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty> messageProperty_ = nullptr;
    // The network type.
    std::shared_ptr<string> networkType_ = nullptr;
    // The password used for authentication.
    std::shared_ptr<string> password_ = nullptr;
    // The ID of the region where the instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The security group ID.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The username used for authentication.
    std::shared_ptr<string> username_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The virtual private cloud (VPC) ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
