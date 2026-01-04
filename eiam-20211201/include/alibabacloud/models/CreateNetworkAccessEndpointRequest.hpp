// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKACCESSENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKACCESSENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateNetworkAccessEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkAccessEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointName, networkAccessEndpointName_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcRegionId, vpcRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkAccessEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointName, networkAccessEndpointName_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcRegionId, vpcRegionId_);
    };
    CreateNetworkAccessEndpointRequest() = default ;
    CreateNetworkAccessEndpointRequest(const CreateNetworkAccessEndpointRequest &) = default ;
    CreateNetworkAccessEndpointRequest(CreateNetworkAccessEndpointRequest &&) = default ;
    CreateNetworkAccessEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkAccessEndpointRequest() = default ;
    CreateNetworkAccessEndpointRequest& operator=(const CreateNetworkAccessEndpointRequest &) = default ;
    CreateNetworkAccessEndpointRequest& operator=(CreateNetworkAccessEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->instanceId_ == nullptr && this->networkAccessEndpointName_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr && this->vpcRegionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateNetworkAccessEndpointRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateNetworkAccessEndpointRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkAccessEndpointName Field Functions 
    bool hasNetworkAccessEndpointName() const { return this->networkAccessEndpointName_ != nullptr;};
    void deleteNetworkAccessEndpointName() { this->networkAccessEndpointName_ = nullptr;};
    inline string getNetworkAccessEndpointName() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointName_, "") };
    inline CreateNetworkAccessEndpointRequest& setNetworkAccessEndpointName(string networkAccessEndpointName) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointName_, networkAccessEndpointName) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline CreateNetworkAccessEndpointRequest& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline CreateNetworkAccessEndpointRequest& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateNetworkAccessEndpointRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcRegionId Field Functions 
    bool hasVpcRegionId() const { return this->vpcRegionId_ != nullptr;};
    void deleteVpcRegionId() { this->vpcRegionId_ = nullptr;};
    inline string getVpcRegionId() const { DARABONBA_PTR_GET_DEFAULT(vpcRegionId_, "") };
    inline CreateNetworkAccessEndpointRequest& setVpcRegionId(string vpcRegionId) { DARABONBA_PTR_SET_VALUE(vpcRegionId_, vpcRegionId) };


  protected:
    // Idempotent token.
    shared_ptr<string> clientToken_ {};
    // The region ID of the VPC.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Private network endpoint name.
    // 
    // This parameter is required.
    shared_ptr<string> networkAccessEndpointName_ {};
    // The IDs of vSwitches.
    shared_ptr<vector<string>> vSwitchIds_ {};
    // The ID of the VPC.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The region ID of the outbound VPC.
    // 
    // This parameter is required.
    shared_ptr<string> vpcRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
