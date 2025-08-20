// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEVPCENDPOINTLINKEDVPCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEVPCENDPOINTLINKEDVPCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateInstanceVpcEndpointLinkedVpcRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceVpcEndpointLinkedVpcRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableCreateDNSRecordInPvzt, enableCreateDNSRecordInPvzt_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceVpcEndpointLinkedVpcRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableCreateDNSRecordInPvzt, enableCreateDNSRecordInPvzt_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    CreateInstanceVpcEndpointLinkedVpcRequest() = default ;
    CreateInstanceVpcEndpointLinkedVpcRequest(const CreateInstanceVpcEndpointLinkedVpcRequest &) = default ;
    CreateInstanceVpcEndpointLinkedVpcRequest(CreateInstanceVpcEndpointLinkedVpcRequest &&) = default ;
    CreateInstanceVpcEndpointLinkedVpcRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceVpcEndpointLinkedVpcRequest() = default ;
    CreateInstanceVpcEndpointLinkedVpcRequest& operator=(const CreateInstanceVpcEndpointLinkedVpcRequest &) = default ;
    CreateInstanceVpcEndpointLinkedVpcRequest& operator=(CreateInstanceVpcEndpointLinkedVpcRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableCreateDNSRecordInPvzt_ != nullptr
        && this->instanceId_ != nullptr && this->moduleName_ != nullptr && this->vpcId_ != nullptr && this->vswitchId_ != nullptr; };
    // enableCreateDNSRecordInPvzt Field Functions 
    bool hasEnableCreateDNSRecordInPvzt() const { return this->enableCreateDNSRecordInPvzt_ != nullptr;};
    void deleteEnableCreateDNSRecordInPvzt() { this->enableCreateDNSRecordInPvzt_ = nullptr;};
    inline bool enableCreateDNSRecordInPvzt() const { DARABONBA_PTR_GET_DEFAULT(enableCreateDNSRecordInPvzt_, false) };
    inline CreateInstanceVpcEndpointLinkedVpcRequest& setEnableCreateDNSRecordInPvzt(bool enableCreateDNSRecordInPvzt) { DARABONBA_PTR_SET_VALUE(enableCreateDNSRecordInPvzt_, enableCreateDNSRecordInPvzt) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateInstanceVpcEndpointLinkedVpcRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline CreateInstanceVpcEndpointLinkedVpcRequest& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateInstanceVpcEndpointLinkedVpcRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline CreateInstanceVpcEndpointLinkedVpcRequest& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // Specifies whether to automatically create Alibaba Cloud DNS PrivateZone records. Valid values:
    // 
    // >  If you enable automatic creation of PrivateZone records, a PrivateZone record is automatically created when you associate a VPC with the instance.
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> enableCreateDNSRecordInPvzt_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the module that you want to access. Valid values:
    // 
    // *   `Registry`: image repositories.
    // *   `Chart`: Helm charts.
    std::shared_ptr<string> moduleName_ = nullptr;
    // The VPC ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the vSwitch that is associated with the specified VPC.
    // 
    // This parameter is required.
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
