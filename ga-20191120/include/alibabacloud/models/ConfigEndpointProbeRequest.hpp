// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGENDPOINTPROBEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGENDPOINTPROBEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ConfigEndpointProbeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigEndpointProbeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(ProbePort, probePort_);
      DARABONBA_PTR_TO_JSON(ProbeProtocol, probeProtocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigEndpointProbeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(ProbePort, probePort_);
      DARABONBA_PTR_FROM_JSON(ProbeProtocol, probeProtocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ConfigEndpointProbeRequest() = default ;
    ConfigEndpointProbeRequest(const ConfigEndpointProbeRequest &) = default ;
    ConfigEndpointProbeRequest(ConfigEndpointProbeRequest &&) = default ;
    ConfigEndpointProbeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigEndpointProbeRequest() = default ;
    ConfigEndpointProbeRequest& operator=(const ConfigEndpointProbeRequest &) = default ;
    ConfigEndpointProbeRequest& operator=(ConfigEndpointProbeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->enable_ == nullptr && this->endpoint_ == nullptr && this->endpointGroupId_ == nullptr && this->endpointType_ == nullptr && this->probePort_ == nullptr
        && this->probeProtocol_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ConfigEndpointProbeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline ConfigEndpointProbeRequest& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline ConfigEndpointProbeRequest& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline ConfigEndpointProbeRequest& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline ConfigEndpointProbeRequest& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // probePort Field Functions 
    bool hasProbePort() const { return this->probePort_ != nullptr;};
    void deleteProbePort() { this->probePort_ = nullptr;};
    inline string getProbePort() const { DARABONBA_PTR_GET_DEFAULT(probePort_, "") };
    inline ConfigEndpointProbeRequest& setProbePort(string probePort) { DARABONBA_PTR_SET_VALUE(probePort_, probePort) };


    // probeProtocol Field Functions 
    bool hasProbeProtocol() const { return this->probeProtocol_ != nullptr;};
    void deleteProbeProtocol() { this->probeProtocol_ = nullptr;};
    inline string getProbeProtocol() const { DARABONBA_PTR_GET_DEFAULT(probeProtocol_, "") };
    inline ConfigEndpointProbeRequest& setProbeProtocol(string probeProtocol) { DARABONBA_PTR_SET_VALUE(probeProtocol_, probeProtocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigEndpointProbeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to enable latency monitoring. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // This parameter is required.
    shared_ptr<string> enable_ {};
    // The endpoint.
    // 
    // This parameter is required.
    shared_ptr<string> endpoint_ {};
    // The endpoint group ID.
    // 
    // This parameter is required.
    shared_ptr<string> endpointGroupId_ {};
    // The type of the endpoint. Valid values:
    // 
    // *   **Ip:** a custom IP address.
    // *   **Domain:** a custom domain name.
    // *   **EIP:** an Alibaba Cloud elastic IP address (EIP).
    // *   **PublicIp:** an Alibaba Cloud public IP address.
    // 
    // This parameter is required.
    shared_ptr<string> endpointType_ {};
    // The port that is used to monitor latency. Valid values: **0** to **65535**.
    shared_ptr<string> probePort_ {};
    // The protocol that is used to monitor latency. Valid values:
    // 
    // *   **tcp:** TCP.
    // *   **icmp:** ICMP.
    shared_ptr<string> probeProtocol_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
