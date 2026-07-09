// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONNECTORPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_CONNECTORPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ConnectorProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConnectorProperties& obj) { 
      DARABONBA_PTR_TO_JSON(channelType, channelType_);
      DARABONBA_PTR_TO_JSON(dryRunRequestBody, dryRunRequestBody_);
      DARABONBA_PTR_TO_JSON(modelList, modelList_);
      DARABONBA_PTR_TO_JSON(network, network_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(responseBodyPath, responseBodyPath_);
      DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ConnectorProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(channelType, channelType_);
      DARABONBA_PTR_FROM_JSON(dryRunRequestBody, dryRunRequestBody_);
      DARABONBA_PTR_FROM_JSON(modelList, modelList_);
      DARABONBA_PTR_FROM_JSON(network, network_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(responseBodyPath, responseBodyPath_);
      DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    ConnectorProperties() = default ;
    ConnectorProperties(const ConnectorProperties &) = default ;
    ConnectorProperties(ConnectorProperties &&) = default ;
    ConnectorProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConnectorProperties() = default ;
    ConnectorProperties& operator=(const ConnectorProperties &) = default ;
    ConnectorProperties& operator=(ConnectorProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelType_ == nullptr
        && this->dryRunRequestBody_ == nullptr && this->modelList_ == nullptr && this->network_ == nullptr && this->protocol_ == nullptr && this->region_ == nullptr
        && this->responseBodyPath_ == nullptr && this->securityGroupId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline ConnectorProperties& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // dryRunRequestBody Field Functions 
    bool hasDryRunRequestBody() const { return this->dryRunRequestBody_ != nullptr;};
    void deleteDryRunRequestBody() { this->dryRunRequestBody_ = nullptr;};
    inline string getDryRunRequestBody() const { DARABONBA_PTR_GET_DEFAULT(dryRunRequestBody_, "") };
    inline ConnectorProperties& setDryRunRequestBody(string dryRunRequestBody) { DARABONBA_PTR_SET_VALUE(dryRunRequestBody_, dryRunRequestBody) };


    // modelList Field Functions 
    bool hasModelList() const { return this->modelList_ != nullptr;};
    void deleteModelList() { this->modelList_ = nullptr;};
    inline string getModelList() const { DARABONBA_PTR_GET_DEFAULT(modelList_, "") };
    inline ConnectorProperties& setModelList(string modelList) { DARABONBA_PTR_SET_VALUE(modelList_, modelList) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline ConnectorProperties& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ConnectorProperties& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ConnectorProperties& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // responseBodyPath Field Functions 
    bool hasResponseBodyPath() const { return this->responseBodyPath_ != nullptr;};
    void deleteResponseBodyPath() { this->responseBodyPath_ = nullptr;};
    inline string getResponseBodyPath() const { DARABONBA_PTR_GET_DEFAULT(responseBodyPath_, "") };
    inline ConnectorProperties& setResponseBodyPath(string responseBodyPath) { DARABONBA_PTR_SET_VALUE(responseBodyPath_, responseBodyPath) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ConnectorProperties& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ConnectorProperties& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ConnectorProperties& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<string> channelType_ {};
    shared_ptr<string> dryRunRequestBody_ {};
    shared_ptr<string> modelList_ {};
    shared_ptr<string> network_ {};
    shared_ptr<string> protocol_ {};
    shared_ptr<string> region_ {};
    shared_ptr<string> responseBodyPath_ {};
    shared_ptr<string> securityGroupId_ {};
    shared_ptr<string> vSwitchId_ {};
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
