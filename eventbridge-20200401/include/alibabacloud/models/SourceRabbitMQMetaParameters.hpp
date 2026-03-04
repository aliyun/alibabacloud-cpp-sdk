// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SOURCERABBITMQMETAPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_SOURCERABBITMQMETAPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class SourceRabbitMQMetaParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SourceRabbitMQMetaParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(InnerNameSuffix, innerNameSuffix_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaxHops, maxHops_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OrderConsume, orderConsume_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Regex, regex_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VirtualHostName, virtualHostName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, SourceRabbitMQMetaParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(InnerNameSuffix, innerNameSuffix_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaxHops, maxHops_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OrderConsume, orderConsume_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Regex, regex_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VirtualHostName, virtualHostName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    SourceRabbitMQMetaParameters() = default ;
    SourceRabbitMQMetaParameters(const SourceRabbitMQMetaParameters &) = default ;
    SourceRabbitMQMetaParameters(SourceRabbitMQMetaParameters &&) = default ;
    SourceRabbitMQMetaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SourceRabbitMQMetaParameters() = default ;
    SourceRabbitMQMetaParameters& operator=(const SourceRabbitMQMetaParameters &) = default ;
    SourceRabbitMQMetaParameters& operator=(SourceRabbitMQMetaParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->innerNameSuffix_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->maxHops_ == nullptr && this->networkType_ == nullptr
        && this->orderConsume_ == nullptr && this->password_ == nullptr && this->regex_ == nullptr && this->securityGroupId_ == nullptr && this->username_ == nullptr
        && this->vSwitchIds_ == nullptr && this->virtualHostName_ == nullptr && this->vpcId_ == nullptr; };
    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline SourceRabbitMQMetaParameters& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // innerNameSuffix Field Functions 
    bool hasInnerNameSuffix() const { return this->innerNameSuffix_ != nullptr;};
    void deleteInnerNameSuffix() { this->innerNameSuffix_ = nullptr;};
    inline string getInnerNameSuffix() const { DARABONBA_PTR_GET_DEFAULT(innerNameSuffix_, "") };
    inline SourceRabbitMQMetaParameters& setInnerNameSuffix(string innerNameSuffix) { DARABONBA_PTR_SET_VALUE(innerNameSuffix_, innerNameSuffix) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SourceRabbitMQMetaParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline SourceRabbitMQMetaParameters& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maxHops Field Functions 
    bool hasMaxHops() const { return this->maxHops_ != nullptr;};
    void deleteMaxHops() { this->maxHops_ = nullptr;};
    inline string getMaxHops() const { DARABONBA_PTR_GET_DEFAULT(maxHops_, "") };
    inline SourceRabbitMQMetaParameters& setMaxHops(string maxHops) { DARABONBA_PTR_SET_VALUE(maxHops_, maxHops) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline SourceRabbitMQMetaParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // orderConsume Field Functions 
    bool hasOrderConsume() const { return this->orderConsume_ != nullptr;};
    void deleteOrderConsume() { this->orderConsume_ = nullptr;};
    inline string getOrderConsume() const { DARABONBA_PTR_GET_DEFAULT(orderConsume_, "") };
    inline SourceRabbitMQMetaParameters& setOrderConsume(string orderConsume) { DARABONBA_PTR_SET_VALUE(orderConsume_, orderConsume) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline SourceRabbitMQMetaParameters& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regex Field Functions 
    bool hasRegex() const { return this->regex_ != nullptr;};
    void deleteRegex() { this->regex_ = nullptr;};
    inline string getRegex() const { DARABONBA_PTR_GET_DEFAULT(regex_, "") };
    inline SourceRabbitMQMetaParameters& setRegex(string regex) { DARABONBA_PTR_SET_VALUE(regex_, regex) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline SourceRabbitMQMetaParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline SourceRabbitMQMetaParameters& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline string getVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
    inline SourceRabbitMQMetaParameters& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


    // virtualHostName Field Functions 
    bool hasVirtualHostName() const { return this->virtualHostName_ != nullptr;};
    void deleteVirtualHostName() { this->virtualHostName_ = nullptr;};
    inline string getVirtualHostName() const { DARABONBA_PTR_GET_DEFAULT(virtualHostName_, "") };
    inline SourceRabbitMQMetaParameters& setVirtualHostName(string virtualHostName) { DARABONBA_PTR_SET_VALUE(virtualHostName_, virtualHostName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline SourceRabbitMQMetaParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<string> endpoint_ {};
    shared_ptr<string> innerNameSuffix_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instanceType_ {};
    shared_ptr<string> maxHops_ {};
    shared_ptr<string> networkType_ {};
    shared_ptr<string> orderConsume_ {};
    shared_ptr<string> password_ {};
    shared_ptr<string> regex_ {};
    shared_ptr<string> securityGroupId_ {};
    shared_ptr<string> username_ {};
    shared_ptr<string> vSwitchIds_ {};
    shared_ptr<string> virtualHostName_ {};
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
