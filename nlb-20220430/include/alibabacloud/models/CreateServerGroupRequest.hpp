// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class CreateServerGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServerGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(AnyPortEnabled, anyPortEnabled_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainEnabled, connectionDrainEnabled_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(IpVersionAffinityMode, ipVersionAffinityMode_);
      DARABONBA_PTR_TO_JSON(PreserveClientIpEnabled, preserveClientIpEnabled_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(ServerGroupName, serverGroupName_);
      DARABONBA_PTR_TO_JSON(ServerGroupType, serverGroupType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServerGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(AnyPortEnabled, anyPortEnabled_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainEnabled, connectionDrainEnabled_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(IpVersionAffinityMode, ipVersionAffinityMode_);
      DARABONBA_PTR_FROM_JSON(PreserveClientIpEnabled, preserveClientIpEnabled_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(ServerGroupName, serverGroupName_);
      DARABONBA_PTR_FROM_JSON(ServerGroupType, serverGroupType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateServerGroupRequest() = default ;
    CreateServerGroupRequest(const CreateServerGroupRequest &) = default ;
    CreateServerGroupRequest(CreateServerGroupRequest &&) = default ;
    CreateServerGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServerGroupRequest() = default ;
    CreateServerGroupRequest& operator=(const CreateServerGroupRequest &) = default ;
    CreateServerGroupRequest& operator=(CreateServerGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag. The tag key can be up to 64 characters in length, cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`. The tag key can contain letters, digits, and the following special characters: _ . : / = + - @
      // 
      // You can specify up to 20 tags in each call.
      shared_ptr<string> key_ {};
      // The value of the tag. The tag value can be up to 128 characters in length, cannot start with `acs:` or `aliyun`, and cannot contain `http://` or `https://`. The tag value can contain letters, digits, and the following special characters: _ . : / = + - @
      // 
      // You can specify up to 20 tags in each call.
      shared_ptr<string> value_ {};
    };

    class HealthCheckConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HealthCheckConfig& obj) { 
        DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
        DARABONBA_PTR_TO_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
        DARABONBA_PTR_TO_JSON(HealthCheckDomain, healthCheckDomain_);
        DARABONBA_PTR_TO_JSON(HealthCheckEnabled, healthCheckEnabled_);
        DARABONBA_PTR_TO_JSON(HealthCheckExp, healthCheckExp_);
        DARABONBA_PTR_TO_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
        DARABONBA_PTR_TO_JSON(HealthCheckHttpVersion, healthCheckHttpVersion_);
        DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
        DARABONBA_PTR_TO_JSON(HealthCheckReq, healthCheckReq_);
        DARABONBA_PTR_TO_JSON(HealthCheckType, healthCheckType_);
        DARABONBA_PTR_TO_JSON(HealthCheckUrl, healthCheckUrl_);
        DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
        DARABONBA_PTR_TO_JSON(HttpCheckMethod, httpCheckMethod_);
        DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
      };
      friend void from_json(const Darabonba::Json& j, HealthCheckConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
        DARABONBA_PTR_FROM_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
        DARABONBA_PTR_FROM_JSON(HealthCheckDomain, healthCheckDomain_);
        DARABONBA_PTR_FROM_JSON(HealthCheckEnabled, healthCheckEnabled_);
        DARABONBA_PTR_FROM_JSON(HealthCheckExp, healthCheckExp_);
        DARABONBA_PTR_FROM_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
        DARABONBA_PTR_FROM_JSON(HealthCheckHttpVersion, healthCheckHttpVersion_);
        DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
        DARABONBA_PTR_FROM_JSON(HealthCheckReq, healthCheckReq_);
        DARABONBA_PTR_FROM_JSON(HealthCheckType, healthCheckType_);
        DARABONBA_PTR_FROM_JSON(HealthCheckUrl, healthCheckUrl_);
        DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
        DARABONBA_PTR_FROM_JSON(HttpCheckMethod, httpCheckMethod_);
        DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
      };
      HealthCheckConfig() = default ;
      HealthCheckConfig(const HealthCheckConfig &) = default ;
      HealthCheckConfig(HealthCheckConfig &&) = default ;
      HealthCheckConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HealthCheckConfig() = default ;
      HealthCheckConfig& operator=(const HealthCheckConfig &) = default ;
      HealthCheckConfig& operator=(HealthCheckConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->healthCheckConnectPort_ == nullptr
        && this->healthCheckConnectTimeout_ == nullptr && this->healthCheckDomain_ == nullptr && this->healthCheckEnabled_ == nullptr && this->healthCheckExp_ == nullptr && this->healthCheckHttpCode_ == nullptr
        && this->healthCheckHttpVersion_ == nullptr && this->healthCheckInterval_ == nullptr && this->healthCheckReq_ == nullptr && this->healthCheckType_ == nullptr && this->healthCheckUrl_ == nullptr
        && this->healthyThreshold_ == nullptr && this->httpCheckMethod_ == nullptr && this->unhealthyThreshold_ == nullptr; };
      // healthCheckConnectPort Field Functions 
      bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
      void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
      inline int32_t getHealthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
      inline HealthCheckConfig& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


      // healthCheckConnectTimeout Field Functions 
      bool hasHealthCheckConnectTimeout() const { return this->healthCheckConnectTimeout_ != nullptr;};
      void deleteHealthCheckConnectTimeout() { this->healthCheckConnectTimeout_ = nullptr;};
      inline int32_t getHealthCheckConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectTimeout_, 0) };
      inline HealthCheckConfig& setHealthCheckConnectTimeout(int32_t healthCheckConnectTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckConnectTimeout_, healthCheckConnectTimeout) };


      // healthCheckDomain Field Functions 
      bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
      void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
      inline string getHealthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
      inline HealthCheckConfig& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


      // healthCheckEnabled Field Functions 
      bool hasHealthCheckEnabled() const { return this->healthCheckEnabled_ != nullptr;};
      void deleteHealthCheckEnabled() { this->healthCheckEnabled_ = nullptr;};
      inline bool getHealthCheckEnabled() const { DARABONBA_PTR_GET_DEFAULT(healthCheckEnabled_, false) };
      inline HealthCheckConfig& setHealthCheckEnabled(bool healthCheckEnabled) { DARABONBA_PTR_SET_VALUE(healthCheckEnabled_, healthCheckEnabled) };


      // healthCheckExp Field Functions 
      bool hasHealthCheckExp() const { return this->healthCheckExp_ != nullptr;};
      void deleteHealthCheckExp() { this->healthCheckExp_ = nullptr;};
      inline string getHealthCheckExp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckExp_, "") };
      inline HealthCheckConfig& setHealthCheckExp(string healthCheckExp) { DARABONBA_PTR_SET_VALUE(healthCheckExp_, healthCheckExp) };


      // healthCheckHttpCode Field Functions 
      bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
      void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
      inline const vector<string> & getHealthCheckHttpCode() const { DARABONBA_PTR_GET_CONST(healthCheckHttpCode_, vector<string>) };
      inline vector<string> getHealthCheckHttpCode() { DARABONBA_PTR_GET(healthCheckHttpCode_, vector<string>) };
      inline HealthCheckConfig& setHealthCheckHttpCode(const vector<string> & healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };
      inline HealthCheckConfig& setHealthCheckHttpCode(vector<string> && healthCheckHttpCode) { DARABONBA_PTR_SET_RVALUE(healthCheckHttpCode_, healthCheckHttpCode) };


      // healthCheckHttpVersion Field Functions 
      bool hasHealthCheckHttpVersion() const { return this->healthCheckHttpVersion_ != nullptr;};
      void deleteHealthCheckHttpVersion() { this->healthCheckHttpVersion_ = nullptr;};
      inline string getHealthCheckHttpVersion() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpVersion_, "") };
      inline HealthCheckConfig& setHealthCheckHttpVersion(string healthCheckHttpVersion) { DARABONBA_PTR_SET_VALUE(healthCheckHttpVersion_, healthCheckHttpVersion) };


      // healthCheckInterval Field Functions 
      bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
      void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
      inline int32_t getHealthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
      inline HealthCheckConfig& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


      // healthCheckReq Field Functions 
      bool hasHealthCheckReq() const { return this->healthCheckReq_ != nullptr;};
      void deleteHealthCheckReq() { this->healthCheckReq_ = nullptr;};
      inline string getHealthCheckReq() const { DARABONBA_PTR_GET_DEFAULT(healthCheckReq_, "") };
      inline HealthCheckConfig& setHealthCheckReq(string healthCheckReq) { DARABONBA_PTR_SET_VALUE(healthCheckReq_, healthCheckReq) };


      // healthCheckType Field Functions 
      bool hasHealthCheckType() const { return this->healthCheckType_ != nullptr;};
      void deleteHealthCheckType() { this->healthCheckType_ = nullptr;};
      inline string getHealthCheckType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckType_, "") };
      inline HealthCheckConfig& setHealthCheckType(string healthCheckType) { DARABONBA_PTR_SET_VALUE(healthCheckType_, healthCheckType) };


      // healthCheckUrl Field Functions 
      bool hasHealthCheckUrl() const { return this->healthCheckUrl_ != nullptr;};
      void deleteHealthCheckUrl() { this->healthCheckUrl_ = nullptr;};
      inline string getHealthCheckUrl() const { DARABONBA_PTR_GET_DEFAULT(healthCheckUrl_, "") };
      inline HealthCheckConfig& setHealthCheckUrl(string healthCheckUrl) { DARABONBA_PTR_SET_VALUE(healthCheckUrl_, healthCheckUrl) };


      // healthyThreshold Field Functions 
      bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
      void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
      inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
      inline HealthCheckConfig& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


      // httpCheckMethod Field Functions 
      bool hasHttpCheckMethod() const { return this->httpCheckMethod_ != nullptr;};
      void deleteHttpCheckMethod() { this->httpCheckMethod_ = nullptr;};
      inline string getHttpCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(httpCheckMethod_, "") };
      inline HealthCheckConfig& setHttpCheckMethod(string httpCheckMethod) { DARABONBA_PTR_SET_VALUE(httpCheckMethod_, httpCheckMethod) };


      // unhealthyThreshold Field Functions 
      bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
      void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
      inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
      inline HealthCheckConfig& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


    protected:
      // The port that you want to use for health checks on backend servers.
      // 
      // Valid values: **0** to **65535**.
      // 
      // Default value: **0**. If you set this parameter to 0, the port that the backend server uses to provide services is also used for health checks.
      shared_ptr<int32_t> healthCheckConnectPort_ {};
      // The timeout period for a health check response. Unit: seconds. Valid values: **1** to **300**. Default value: **5**.
      shared_ptr<int32_t> healthCheckConnectTimeout_ {};
      // The domain name that is used for health checks. Valid values:
      // 
      // *   **$SERVER_IP**: the internal IP address of a backend server.
      // *   **domain**: a domain name. The domain name must be 1 to 80 characters in length, and can contain letters, digits, hyphens (-), and periods (.).
      // 
      // >  This parameter takes effect only if you set **HealthCheckType** to **HTTP**.
      shared_ptr<string> healthCheckDomain_ {};
      // Specifies whether to enable health checks. Valid values:
      // 
      // *   **true** (default)
      // *   **false**
      shared_ptr<bool> healthCheckEnabled_ {};
      // The response string that backend servers return to UDP listeners for health checks. The string must be 1 to 512 characters in length and can contain only letters and digits.
      shared_ptr<string> healthCheckExp_ {};
      // The HTTP status codes to return for health checks. Separate multiple HTTP status codes with commas (,). Valid values: **http_2xx** (default), **http_3xx**, **http_4xx**, and **http_5xx**.
      // 
      // >  This parameter takes effect only if you set **HealthCheckType** to **HTTP**.
      shared_ptr<vector<string>> healthCheckHttpCode_ {};
      // The HTTP version used for health checks. Valid values: **HTTP1.0** (default) and **HTTP1.1**.
      // 
      // >  This parameter takes effect only if you set **HealthCheckType** to **HTTP**.
      shared_ptr<string> healthCheckHttpVersion_ {};
      // The interval at which health checks are performed. Unit: seconds. Default value: **5**.
      // 
      // *   If you set **HealthCheckType** to **TCP** or **HTTP**, valid values are **1** to **50**.
      // *   If you set **HealthCheckType** to **UDP**, valid values are **1** to **300**. Set the health check interval equal to or larger than the response timeout period to ensure that UDP response timeouts are not determined as no responses.
      shared_ptr<int32_t> healthCheckInterval_ {};
      // The request string that UDP listeners send to backend servers for health checks. The string must be 1 to 512 characters in length and can contain only letters and digits.
      shared_ptr<string> healthCheckReq_ {};
      // The protocol that you want to use for health checks. Valid values:
      // 
      // *   **TCP**
      // *   **HTTP**
      // *   **UDP**
      shared_ptr<string> healthCheckType_ {};
      // The URL path to which health check probes are sent.
      // 
      // The URL path must be 1 to 80 characters in length, and can contain letters, digits, and the following special characters: ` - / . % ? # &  `. It must start with a forward slash (/).
      // 
      // >  This parameter takes effect only if you set **HealthCheckType** to **HTTP**.
      shared_ptr<string> healthCheckUrl_ {};
      // The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health status changes from **fail** to **success**.
      // 
      // Valid values: **2** to **10**.
      // 
      // Default value: **2**.
      shared_ptr<int32_t> healthyThreshold_ {};
      // The HTTP method that is used for health checks. Valid values: **GET** (default) and **HEAD**.
      // 
      // >  This parameter takes effect only if you set **HealthCheckType** to **HTTP**.
      shared_ptr<string> httpCheckMethod_ {};
      // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health status changes from **success** to **fail**.
      // 
      // Valid values: **2** to **10**.
      // 
      // Default value: **2**.
      shared_ptr<int32_t> unhealthyThreshold_ {};
    };

    virtual bool empty() const override { return this->addressIPVersion_ == nullptr
        && this->anyPortEnabled_ == nullptr && this->clientToken_ == nullptr && this->connectionDrainEnabled_ == nullptr && this->connectionDrainTimeout_ == nullptr && this->dryRun_ == nullptr
        && this->healthCheckConfig_ == nullptr && this->ipVersionAffinityMode_ == nullptr && this->preserveClientIpEnabled_ == nullptr && this->protocol_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->scheduler_ == nullptr && this->serverGroupName_ == nullptr && this->serverGroupType_ == nullptr && this->tag_ == nullptr
        && this->vpcId_ == nullptr; };
    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string getAddressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline CreateServerGroupRequest& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // anyPortEnabled Field Functions 
    bool hasAnyPortEnabled() const { return this->anyPortEnabled_ != nullptr;};
    void deleteAnyPortEnabled() { this->anyPortEnabled_ = nullptr;};
    inline bool getAnyPortEnabled() const { DARABONBA_PTR_GET_DEFAULT(anyPortEnabled_, false) };
    inline CreateServerGroupRequest& setAnyPortEnabled(bool anyPortEnabled) { DARABONBA_PTR_SET_VALUE(anyPortEnabled_, anyPortEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateServerGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionDrainEnabled Field Functions 
    bool hasConnectionDrainEnabled() const { return this->connectionDrainEnabled_ != nullptr;};
    void deleteConnectionDrainEnabled() { this->connectionDrainEnabled_ = nullptr;};
    inline bool getConnectionDrainEnabled() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainEnabled_, false) };
    inline CreateServerGroupRequest& setConnectionDrainEnabled(bool connectionDrainEnabled) { DARABONBA_PTR_SET_VALUE(connectionDrainEnabled_, connectionDrainEnabled) };


    // connectionDrainTimeout Field Functions 
    bool hasConnectionDrainTimeout() const { return this->connectionDrainTimeout_ != nullptr;};
    void deleteConnectionDrainTimeout() { this->connectionDrainTimeout_ = nullptr;};
    inline int32_t getConnectionDrainTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainTimeout_, 0) };
    inline CreateServerGroupRequest& setConnectionDrainTimeout(int32_t connectionDrainTimeout) { DARABONBA_PTR_SET_VALUE(connectionDrainTimeout_, connectionDrainTimeout) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateServerGroupRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // healthCheckConfig Field Functions 
    bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
    void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
    inline const CreateServerGroupRequest::HealthCheckConfig & getHealthCheckConfig() const { DARABONBA_PTR_GET_CONST(healthCheckConfig_, CreateServerGroupRequest::HealthCheckConfig) };
    inline CreateServerGroupRequest::HealthCheckConfig getHealthCheckConfig() { DARABONBA_PTR_GET(healthCheckConfig_, CreateServerGroupRequest::HealthCheckConfig) };
    inline CreateServerGroupRequest& setHealthCheckConfig(const CreateServerGroupRequest::HealthCheckConfig & healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };
    inline CreateServerGroupRequest& setHealthCheckConfig(CreateServerGroupRequest::HealthCheckConfig && healthCheckConfig) { DARABONBA_PTR_SET_RVALUE(healthCheckConfig_, healthCheckConfig) };


    // ipVersionAffinityMode Field Functions 
    bool hasIpVersionAffinityMode() const { return this->ipVersionAffinityMode_ != nullptr;};
    void deleteIpVersionAffinityMode() { this->ipVersionAffinityMode_ = nullptr;};
    inline string getIpVersionAffinityMode() const { DARABONBA_PTR_GET_DEFAULT(ipVersionAffinityMode_, "") };
    inline CreateServerGroupRequest& setIpVersionAffinityMode(string ipVersionAffinityMode) { DARABONBA_PTR_SET_VALUE(ipVersionAffinityMode_, ipVersionAffinityMode) };


    // preserveClientIpEnabled Field Functions 
    bool hasPreserveClientIpEnabled() const { return this->preserveClientIpEnabled_ != nullptr;};
    void deletePreserveClientIpEnabled() { this->preserveClientIpEnabled_ = nullptr;};
    inline bool getPreserveClientIpEnabled() const { DARABONBA_PTR_GET_DEFAULT(preserveClientIpEnabled_, false) };
    inline CreateServerGroupRequest& setPreserveClientIpEnabled(bool preserveClientIpEnabled) { DARABONBA_PTR_SET_VALUE(preserveClientIpEnabled_, preserveClientIpEnabled) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateServerGroupRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateServerGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateServerGroupRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline CreateServerGroupRequest& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // serverGroupName Field Functions 
    bool hasServerGroupName() const { return this->serverGroupName_ != nullptr;};
    void deleteServerGroupName() { this->serverGroupName_ = nullptr;};
    inline string getServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(serverGroupName_, "") };
    inline CreateServerGroupRequest& setServerGroupName(string serverGroupName) { DARABONBA_PTR_SET_VALUE(serverGroupName_, serverGroupName) };


    // serverGroupType Field Functions 
    bool hasServerGroupType() const { return this->serverGroupType_ != nullptr;};
    void deleteServerGroupType() { this->serverGroupType_ = nullptr;};
    inline string getServerGroupType() const { DARABONBA_PTR_GET_DEFAULT(serverGroupType_, "") };
    inline CreateServerGroupRequest& setServerGroupType(string serverGroupType) { DARABONBA_PTR_SET_VALUE(serverGroupType_, serverGroupType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateServerGroupRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateServerGroupRequest::Tag>) };
    inline vector<CreateServerGroupRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateServerGroupRequest::Tag>) };
    inline CreateServerGroupRequest& setTag(const vector<CreateServerGroupRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateServerGroupRequest& setTag(vector<CreateServerGroupRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateServerGroupRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The IP version. Valid values:
    // 
    // *   **ipv4** (default): IPv4
    // *   **DualStack**: dual-stack
    shared_ptr<string> addressIPVersion_ {};
    // Specifies whether to enable multi-port forwarding. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    shared_ptr<bool> anyPortEnabled_ {};
    // The client token used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token. Ensure that the token is unique among different requests. Only ASCII characters are allowed.
    // 
    // >  If you do not set this parameter, the value of **RequestId** is used.**** The value of **RequestId** is different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to enable connection draining. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    shared_ptr<bool> connectionDrainEnabled_ {};
    // Specifies a timeout period for connection draining. Unit: seconds. Valid values: **0** to **900**.
    shared_ptr<int32_t> connectionDrainTimeout_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true:**: validates the request without performing the operation. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the validation, the corresponding error message is returned. If the request passes the validation, the `DryRunOperation` error code is returned.
    // *   **false** (default): validates the request and performs the operation. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The configurations of health checks.
    shared_ptr<CreateServerGroupRequest::HealthCheckConfig> healthCheckConfig_ {};
    shared_ptr<string> ipVersionAffinityMode_ {};
    // Specifies whether to enable client IP preservation. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    // 
    // >  If you set this parameter to **true** and **Protocol** to **TCP**, the server group cannot be associated with **TCPSSL** listeners.
    shared_ptr<bool> preserveClientIpEnabled_ {};
    // The protocol between the NLB instance and backend servers. Valid values:
    // 
    // *   **TCP** (default)
    // *   **UDP**
    // *   **TCP_UDP**
    // 
    // > *   If you set this parameter to **UDP**, you can associate the server group only with **UDP** listeners.
    // > *   If you set this parameter to **TCP** and **PreserveClientIpEnabled** to **true**, you can associate the server group only with **TCP** listeners.
    // > *   If you set this parameter to **TCP** and **PreserveClientIpEnabled** to **false**, you can associate the server group with **TCPSSL** and **TCP** listeners.
    // > *   If you set this parameter to **TCP_UDP**, you can associate the server group with **TCP** and **UDP** listeners.
    shared_ptr<string> protocol_ {};
    // The ID of the region where the NLB instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the server group belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The scheduling algorithm. Valid values:
    // 
    // *   **Wrr** (default): weighted round-robin. Backend servers with higher weights receive more requests.
    // *   **Wlc**: weighted least connections. Requests are distributed based on the weights and the number of connections to backend servers. If multiple backend servers have the same weight, requests are forwarded to the backend server with the least connections.
    // *   **rr**: Requests are forwarded to backend servers in sequence.
    // *   **sch**: source IP hash. Requests from the same source IP address are forwarded to the same backend server.
    // *   **tch**: consistent hashing based on four factors: source IP address, destination IP address, source port, and destination port. Requests that contain the same four factors are forwarded to the same backend server.
    // *   **qch**: QUIC ID hash. Requests that contain the same QUIC ID are forwarded to the same backend server.
    // 
    // >  QUIC ID hash is supported only when the backend protocol is set to UDP.
    shared_ptr<string> scheduler_ {};
    // The server group name.
    // 
    // The name must be 2 to 128 characters in length, can contain digits, periods (.), underscores (_), and hyphens (-), and must start with a letter.
    // 
    // This parameter is required.
    shared_ptr<string> serverGroupName_ {};
    // The type of the server group. Valid values:
    // 
    // *   **Instance** (default): allows you to specify servers of the **Ecs**, **Eni**, or **Eci** type.
    // *   **Ip**: allows you to specify IP addresses.
    shared_ptr<string> serverGroupType_ {};
    // The tags.
    shared_ptr<vector<CreateServerGroupRequest::Tag>> tag_ {};
    // The ID of the virtual private cloud (VPC) where the server group is deployed.
    // 
    // >  If **ServerGroupType** is set to **Instance**, only servers in the specified VPC can be added to the server group.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
