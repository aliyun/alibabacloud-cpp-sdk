// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDINSTANCE2VPCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDINSTANCE2VPCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class BindInstance2VpcRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindInstance2VpcRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceVpcName, instanceVpcName_);
      DARABONBA_PTR_TO_JSON(VirtualSwitchId, virtualSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, BindInstance2VpcRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceVpcName, instanceVpcName_);
      DARABONBA_PTR_FROM_JSON(VirtualSwitchId, virtualSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    BindInstance2VpcRequest() = default ;
    BindInstance2VpcRequest(const BindInstance2VpcRequest &) = default ;
    BindInstance2VpcRequest(BindInstance2VpcRequest &&) = default ;
    BindInstance2VpcRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindInstance2VpcRequest() = default ;
    BindInstance2VpcRequest& operator=(const BindInstance2VpcRequest &) = default ;
    BindInstance2VpcRequest& operator=(BindInstance2VpcRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->instanceVpcName_ == nullptr && this->virtualSwitchId_ == nullptr && this->vpcId_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline BindInstance2VpcRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceVpcName Field Functions 
    bool hasInstanceVpcName() const { return this->instanceVpcName_ != nullptr;};
    void deleteInstanceVpcName() { this->instanceVpcName_ = nullptr;};
    inline string getInstanceVpcName() const { DARABONBA_PTR_GET_DEFAULT(instanceVpcName_, "") };
    inline BindInstance2VpcRequest& setInstanceVpcName(string instanceVpcName) { DARABONBA_PTR_SET_VALUE(instanceVpcName_, instanceVpcName) };


    // virtualSwitchId Field Functions 
    bool hasVirtualSwitchId() const { return this->virtualSwitchId_ != nullptr;};
    void deleteVirtualSwitchId() { this->virtualSwitchId_ = nullptr;};
    inline string getVirtualSwitchId() const { DARABONBA_PTR_GET_DEFAULT(virtualSwitchId_, "") };
    inline BindInstance2VpcRequest& setVirtualSwitchId(string virtualSwitchId) { DARABONBA_PTR_SET_VALUE(virtualSwitchId_, virtualSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline BindInstance2VpcRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // This parameter is required.
    shared_ptr<string> instanceVpcName_ {};
    // This parameter is required.
    shared_ptr<string> virtualSwitchId_ {};
    // VPC ID
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
