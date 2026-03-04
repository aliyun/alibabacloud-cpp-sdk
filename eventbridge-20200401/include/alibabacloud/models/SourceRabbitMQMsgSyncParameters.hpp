// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SOURCERABBITMQMSGSYNCPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_SOURCERABBITMQMSGSYNCPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class SourceRabbitMQMsgSyncParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SourceRabbitMQMsgSyncParameters& obj) { 
      DARABONBA_PTR_TO_JSON(BodyDataType, bodyDataType_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OrderConsume, orderConsume_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PrefetchCount, prefetchCount_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VirtualHostName, virtualHostName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, SourceRabbitMQMsgSyncParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyDataType, bodyDataType_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OrderConsume, orderConsume_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PrefetchCount, prefetchCount_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VirtualHostName, virtualHostName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    SourceRabbitMQMsgSyncParameters() = default ;
    SourceRabbitMQMsgSyncParameters(const SourceRabbitMQMsgSyncParameters &) = default ;
    SourceRabbitMQMsgSyncParameters(SourceRabbitMQMsgSyncParameters &&) = default ;
    SourceRabbitMQMsgSyncParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SourceRabbitMQMsgSyncParameters() = default ;
    SourceRabbitMQMsgSyncParameters& operator=(const SourceRabbitMQMsgSyncParameters &) = default ;
    SourceRabbitMQMsgSyncParameters& operator=(SourceRabbitMQMsgSyncParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyDataType_ == nullptr
        && this->endpoint_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->networkType_ == nullptr && this->orderConsume_ == nullptr
        && this->password_ == nullptr && this->prefetchCount_ == nullptr && this->securityGroupId_ == nullptr && this->username_ == nullptr && this->vSwitchIds_ == nullptr
        && this->virtualHostName_ == nullptr && this->vpcId_ == nullptr; };
    // bodyDataType Field Functions 
    bool hasBodyDataType() const { return this->bodyDataType_ != nullptr;};
    void deleteBodyDataType() { this->bodyDataType_ = nullptr;};
    inline string getBodyDataType() const { DARABONBA_PTR_GET_DEFAULT(bodyDataType_, "") };
    inline SourceRabbitMQMsgSyncParameters& setBodyDataType(string bodyDataType) { DARABONBA_PTR_SET_VALUE(bodyDataType_, bodyDataType) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline SourceRabbitMQMsgSyncParameters& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SourceRabbitMQMsgSyncParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline SourceRabbitMQMsgSyncParameters& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline SourceRabbitMQMsgSyncParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // orderConsume Field Functions 
    bool hasOrderConsume() const { return this->orderConsume_ != nullptr;};
    void deleteOrderConsume() { this->orderConsume_ = nullptr;};
    inline string getOrderConsume() const { DARABONBA_PTR_GET_DEFAULT(orderConsume_, "") };
    inline SourceRabbitMQMsgSyncParameters& setOrderConsume(string orderConsume) { DARABONBA_PTR_SET_VALUE(orderConsume_, orderConsume) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline SourceRabbitMQMsgSyncParameters& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // prefetchCount Field Functions 
    bool hasPrefetchCount() const { return this->prefetchCount_ != nullptr;};
    void deletePrefetchCount() { this->prefetchCount_ = nullptr;};
    inline string getPrefetchCount() const { DARABONBA_PTR_GET_DEFAULT(prefetchCount_, "") };
    inline SourceRabbitMQMsgSyncParameters& setPrefetchCount(string prefetchCount) { DARABONBA_PTR_SET_VALUE(prefetchCount_, prefetchCount) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline SourceRabbitMQMsgSyncParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline SourceRabbitMQMsgSyncParameters& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline string getVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
    inline SourceRabbitMQMsgSyncParameters& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


    // virtualHostName Field Functions 
    bool hasVirtualHostName() const { return this->virtualHostName_ != nullptr;};
    void deleteVirtualHostName() { this->virtualHostName_ = nullptr;};
    inline string getVirtualHostName() const { DARABONBA_PTR_GET_DEFAULT(virtualHostName_, "") };
    inline SourceRabbitMQMsgSyncParameters& setVirtualHostName(string virtualHostName) { DARABONBA_PTR_SET_VALUE(virtualHostName_, virtualHostName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline SourceRabbitMQMsgSyncParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<string> bodyDataType_ {};
    shared_ptr<string> endpoint_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instanceType_ {};
    shared_ptr<string> networkType_ {};
    shared_ptr<string> orderConsume_ {};
    shared_ptr<string> password_ {};
    shared_ptr<string> prefetchCount_ {};
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
