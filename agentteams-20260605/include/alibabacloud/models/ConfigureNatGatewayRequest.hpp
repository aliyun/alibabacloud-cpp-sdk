// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURENATGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURENATGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class ConfigureNatGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureNatGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EipAllocationId, eipAllocationId_);
      DARABONBA_PTR_TO_JSON(EipBandwidth, eipBandwidth_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NatGatewayInstanceId, natGatewayInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureNatGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EipAllocationId, eipAllocationId_);
      DARABONBA_PTR_FROM_JSON(EipBandwidth, eipBandwidth_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NatGatewayInstanceId, natGatewayInstanceId_);
    };
    ConfigureNatGatewayRequest() = default ;
    ConfigureNatGatewayRequest(const ConfigureNatGatewayRequest &) = default ;
    ConfigureNatGatewayRequest(ConfigureNatGatewayRequest &&) = default ;
    ConfigureNatGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureNatGatewayRequest() = default ;
    ConfigureNatGatewayRequest& operator=(const ConfigureNatGatewayRequest &) = default ;
    ConfigureNatGatewayRequest& operator=(ConfigureNatGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->eipAllocationId_ == nullptr && this->eipBandwidth_ == nullptr && this->instanceId_ == nullptr && this->natGatewayInstanceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ConfigureNatGatewayRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ConfigureNatGatewayRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eipAllocationId Field Functions 
    bool hasEipAllocationId() const { return this->eipAllocationId_ != nullptr;};
    void deleteEipAllocationId() { this->eipAllocationId_ = nullptr;};
    inline string getEipAllocationId() const { DARABONBA_PTR_GET_DEFAULT(eipAllocationId_, "") };
    inline ConfigureNatGatewayRequest& setEipAllocationId(string eipAllocationId) { DARABONBA_PTR_SET_VALUE(eipAllocationId_, eipAllocationId) };


    // eipBandwidth Field Functions 
    bool hasEipBandwidth() const { return this->eipBandwidth_ != nullptr;};
    void deleteEipBandwidth() { this->eipBandwidth_ = nullptr;};
    inline int32_t getEipBandwidth() const { DARABONBA_PTR_GET_DEFAULT(eipBandwidth_, 0) };
    inline ConfigureNatGatewayRequest& setEipBandwidth(int32_t eipBandwidth) { DARABONBA_PTR_SET_VALUE(eipBandwidth_, eipBandwidth) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ConfigureNatGatewayRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // natGatewayInstanceId Field Functions 
    bool hasNatGatewayInstanceId() const { return this->natGatewayInstanceId_ != nullptr;};
    void deleteNatGatewayInstanceId() { this->natGatewayInstanceId_ = nullptr;};
    inline string getNatGatewayInstanceId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayInstanceId_, "") };
    inline ConfigureNatGatewayRequest& setNatGatewayInstanceId(string natGatewayInstanceId) { DARABONBA_PTR_SET_VALUE(natGatewayInstanceId_, natGatewayInstanceId) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> eipAllocationId_ {};
    shared_ptr<int32_t> eipBandwidth_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> natGatewayInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
