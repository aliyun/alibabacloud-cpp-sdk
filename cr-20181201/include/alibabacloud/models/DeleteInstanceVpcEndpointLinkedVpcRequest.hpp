// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCEVPCENDPOINTLINKEDVPCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCEVPCENDPOINTLINKEDVPCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class DeleteInstanceVpcEndpointLinkedVpcRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstanceVpcEndpointLinkedVpcRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstanceVpcEndpointLinkedVpcRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    DeleteInstanceVpcEndpointLinkedVpcRequest() = default ;
    DeleteInstanceVpcEndpointLinkedVpcRequest(const DeleteInstanceVpcEndpointLinkedVpcRequest &) = default ;
    DeleteInstanceVpcEndpointLinkedVpcRequest(DeleteInstanceVpcEndpointLinkedVpcRequest &&) = default ;
    DeleteInstanceVpcEndpointLinkedVpcRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstanceVpcEndpointLinkedVpcRequest() = default ;
    DeleteInstanceVpcEndpointLinkedVpcRequest& operator=(const DeleteInstanceVpcEndpointLinkedVpcRequest &) = default ;
    DeleteInstanceVpcEndpointLinkedVpcRequest& operator=(DeleteInstanceVpcEndpointLinkedVpcRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->moduleName_ == nullptr && this->vpcId_ == nullptr && this->vswitchId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteInstanceVpcEndpointLinkedVpcRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline DeleteInstanceVpcEndpointLinkedVpcRequest& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DeleteInstanceVpcEndpointLinkedVpcRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DeleteInstanceVpcEndpointLinkedVpcRequest& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the module that you want to access. Valid values:
    // 
    // *   `Registry`: the image repository.
    // *   `Chart`: a Helm chart.
    shared_ptr<string> moduleName_ {};
    // The ID of the VPC.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The ID of the vSwitch.
    // 
    // This parameter is required.
    shared_ptr<string> vswitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
