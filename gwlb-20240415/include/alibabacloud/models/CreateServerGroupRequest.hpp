// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gwlb20240415
{
namespace Models
{
  class CreateServerGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServerGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainConfig, connectionDrainConfig_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(ServerFailoverMode, serverFailoverMode_);
      DARABONBA_PTR_TO_JSON(ServerGroupName, serverGroupName_);
      DARABONBA_PTR_TO_JSON(ServerGroupType, serverGroupType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServerGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainConfig, connectionDrainConfig_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(ServerFailoverMode, serverFailoverMode_);
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
      // The tag key. The tag key cannot be an empty string. The tag key can be up to 128 characters in length, and cannot start with `acs:` or `aliyun`. The tag key cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. The tag value can be up to 256 characters in length and cannot contain `http://` or `https://`.
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
        DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
        DARABONBA_PTR_TO_JSON(HealthCheckPath, healthCheckPath_);
        DARABONBA_PTR_TO_JSON(HealthCheckProtocol, healthCheckProtocol_);
        DARABONBA_PTR_TO_JSON(HealthCheckReq, healthCheckReq_);
        DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
        DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
      };
      friend void from_json(const Darabonba::Json& j, HealthCheckConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
        DARABONBA_PTR_FROM_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
        DARABONBA_PTR_FROM_JSON(HealthCheckDomain, healthCheckDomain_);
        DARABONBA_PTR_FROM_JSON(HealthCheckEnabled, healthCheckEnabled_);
        DARABONBA_PTR_FROM_JSON(HealthCheckExp, healthCheckExp_);
        DARABONBA_PTR_FROM_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
        DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
        DARABONBA_PTR_FROM_JSON(HealthCheckPath, healthCheckPath_);
        DARABONBA_PTR_FROM_JSON(HealthCheckProtocol, healthCheckProtocol_);
        DARABONBA_PTR_FROM_JSON(HealthCheckReq, healthCheckReq_);
        DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
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
        && this->healthCheckInterval_ == nullptr && this->healthCheckPath_ == nullptr && this->healthCheckProtocol_ == nullptr && this->healthCheckReq_ == nullptr && this->healthyThreshold_ == nullptr
        && this->unhealthyThreshold_ == nullptr; };
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


      // healthCheckInterval Field Functions 
      bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
      void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
      inline int32_t getHealthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
      inline HealthCheckConfig& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


      // healthCheckPath Field Functions 
      bool hasHealthCheckPath() const { return this->healthCheckPath_ != nullptr;};
      void deleteHealthCheckPath() { this->healthCheckPath_ = nullptr;};
      inline string getHealthCheckPath() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPath_, "") };
      inline HealthCheckConfig& setHealthCheckPath(string healthCheckPath) { DARABONBA_PTR_SET_VALUE(healthCheckPath_, healthCheckPath) };


      // healthCheckProtocol Field Functions 
      bool hasHealthCheckProtocol() const { return this->healthCheckProtocol_ != nullptr;};
      void deleteHealthCheckProtocol() { this->healthCheckProtocol_ = nullptr;};
      inline string getHealthCheckProtocol() const { DARABONBA_PTR_GET_DEFAULT(healthCheckProtocol_, "") };
      inline HealthCheckConfig& setHealthCheckProtocol(string healthCheckProtocol) { DARABONBA_PTR_SET_VALUE(healthCheckProtocol_, healthCheckProtocol) };


      // healthCheckReq Field Functions 
      bool hasHealthCheckReq() const { return this->healthCheckReq_ != nullptr;};
      void deleteHealthCheckReq() { this->healthCheckReq_ = nullptr;};
      inline string getHealthCheckReq() const { DARABONBA_PTR_GET_DEFAULT(healthCheckReq_, "") };
      inline HealthCheckConfig& setHealthCheckReq(string healthCheckReq) { DARABONBA_PTR_SET_VALUE(healthCheckReq_, healthCheckReq) };


      // healthyThreshold Field Functions 
      bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
      void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
      inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
      inline HealthCheckConfig& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


      // unhealthyThreshold Field Functions 
      bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
      void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
      inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
      inline HealthCheckConfig& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


    protected:
      // The backend server port used for health checks.
      // 
      // Valid values: **1** to **65535**.
      // 
      // Default value: **80**.
      shared_ptr<int32_t> healthCheckConnectPort_ {};
      // The maximum timeout period for a health check response.
      // 
      // Unit: seconds.
      // 
      // Valid values: **1** to **300**.
      // 
      // Default value: **5**.
      shared_ptr<int32_t> healthCheckConnectTimeout_ {};
      // The domain name used for health checks. Valid values:
      // 
      // *   **$SERVER_IP** (default): the private IP address of a backend server.
      // *   **domain**: a domain name. The domain name must be 1 to 80 characters in length, and can contain letters, digits, hyphens (-), and periods (.).
      // 
      // >  This parameter takes effect only if you set **HealthCheckProtocol** to **HTTP**.
      shared_ptr<string> healthCheckDomain_ {};
      // Specifies whether to enable health checks. Valid values:
      // 
      // *   **true** (default)
      // *   **false**
      shared_ptr<bool> healthCheckEnabled_ {};
      shared_ptr<string> healthCheckExp_ {};
      // The HTTP status codes that the system returns for health checks.
      shared_ptr<vector<string>> healthCheckHttpCode_ {};
      // The interval at which health checks are performed.
      // 
      // Unit: seconds.
      // 
      // Valid values: **1** to **50**.
      // 
      // Default value: **10**.
      shared_ptr<int32_t> healthCheckInterval_ {};
      // The path used for health checks.
      // 
      // It must be 1 to 80 characters in length, and can contain letters, digits, hyphens (-), forward slashes (/), periods (.), percent signs (%), question marks (?), number signs (#), and ampersands (&). The URL can also contain the following extended characters: _ ; ~ ! ( ) \\* [ ] @ $ ^ : \\" , + =
      // 
      // It must start with a forward slash (/).
      // 
      // >  This parameter takes effect only if you set **HealthCheckProtocol** to **HTTP**.
      shared_ptr<string> healthCheckPath_ {};
      // The protocol used for health checks. Valid values:
      // 
      // *   **TCP** (default): GWLB performs TCP health checks by sending SYN packets to a backend server to check whether the port of the backend server is available to receive requests.
      // *   **HTTP**: GWLB performs HTTP health checks to check whether backend servers are healthy by sending GET requests which simulate access from browsers.
      shared_ptr<string> healthCheckProtocol_ {};
      shared_ptr<string> healthCheckReq_ {};
      // The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health check status of the backend server changes from **fail** to **success**.
      // 
      // Valid values: **2** to **10**.
      // 
      // Default value: **2**.
      shared_ptr<int32_t> healthyThreshold_ {};
      // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health check status of the backend server changes from **success** to **fail**.
      // 
      // Valid values: **2** to **10**.
      // 
      // Default value: **2**.
      shared_ptr<int32_t> unhealthyThreshold_ {};
    };

    class ConnectionDrainConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConnectionDrainConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectionDrainEnabled, connectionDrainEnabled_);
        DARABONBA_PTR_TO_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
      };
      friend void from_json(const Darabonba::Json& j, ConnectionDrainConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionDrainEnabled, connectionDrainEnabled_);
        DARABONBA_PTR_FROM_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
      };
      ConnectionDrainConfig() = default ;
      ConnectionDrainConfig(const ConnectionDrainConfig &) = default ;
      ConnectionDrainConfig(ConnectionDrainConfig &&) = default ;
      ConnectionDrainConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConnectionDrainConfig() = default ;
      ConnectionDrainConfig& operator=(const ConnectionDrainConfig &) = default ;
      ConnectionDrainConfig& operator=(ConnectionDrainConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectionDrainEnabled_ == nullptr
        && this->connectionDrainTimeout_ == nullptr; };
      // connectionDrainEnabled Field Functions 
      bool hasConnectionDrainEnabled() const { return this->connectionDrainEnabled_ != nullptr;};
      void deleteConnectionDrainEnabled() { this->connectionDrainEnabled_ = nullptr;};
      inline bool getConnectionDrainEnabled() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainEnabled_, false) };
      inline ConnectionDrainConfig& setConnectionDrainEnabled(bool connectionDrainEnabled) { DARABONBA_PTR_SET_VALUE(connectionDrainEnabled_, connectionDrainEnabled) };


      // connectionDrainTimeout Field Functions 
      bool hasConnectionDrainTimeout() const { return this->connectionDrainTimeout_ != nullptr;};
      void deleteConnectionDrainTimeout() { this->connectionDrainTimeout_ = nullptr;};
      inline int32_t getConnectionDrainTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainTimeout_, 0) };
      inline ConnectionDrainConfig& setConnectionDrainTimeout(int32_t connectionDrainTimeout) { DARABONBA_PTR_SET_VALUE(connectionDrainTimeout_, connectionDrainTimeout) };


    protected:
      // Specifies whether to enable connection draining. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> connectionDrainEnabled_ {};
      // The timeout period of connection draining.
      // 
      // Unit: seconds
      // 
      // Valid values: **1** to **3600**.
      // 
      // Default value: **300**.
      shared_ptr<int32_t> connectionDrainTimeout_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->connectionDrainConfig_ == nullptr && this->dryRun_ == nullptr && this->healthCheckConfig_ == nullptr && this->protocol_ == nullptr && this->resourceGroupId_ == nullptr
        && this->scheduler_ == nullptr && this->serverFailoverMode_ == nullptr && this->serverGroupName_ == nullptr && this->serverGroupType_ == nullptr && this->tag_ == nullptr
        && this->vpcId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateServerGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionDrainConfig Field Functions 
    bool hasConnectionDrainConfig() const { return this->connectionDrainConfig_ != nullptr;};
    void deleteConnectionDrainConfig() { this->connectionDrainConfig_ = nullptr;};
    inline const CreateServerGroupRequest::ConnectionDrainConfig & getConnectionDrainConfig() const { DARABONBA_PTR_GET_CONST(connectionDrainConfig_, CreateServerGroupRequest::ConnectionDrainConfig) };
    inline CreateServerGroupRequest::ConnectionDrainConfig getConnectionDrainConfig() { DARABONBA_PTR_GET(connectionDrainConfig_, CreateServerGroupRequest::ConnectionDrainConfig) };
    inline CreateServerGroupRequest& setConnectionDrainConfig(const CreateServerGroupRequest::ConnectionDrainConfig & connectionDrainConfig) { DARABONBA_PTR_SET_VALUE(connectionDrainConfig_, connectionDrainConfig) };
    inline CreateServerGroupRequest& setConnectionDrainConfig(CreateServerGroupRequest::ConnectionDrainConfig && connectionDrainConfig) { DARABONBA_PTR_SET_RVALUE(connectionDrainConfig_, connectionDrainConfig) };


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


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateServerGroupRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


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


    // serverFailoverMode Field Functions 
    bool hasServerFailoverMode() const { return this->serverFailoverMode_ != nullptr;};
    void deleteServerFailoverMode() { this->serverFailoverMode_ = nullptr;};
    inline string getServerFailoverMode() const { DARABONBA_PTR_GET_DEFAULT(serverFailoverMode_, "") };
    inline CreateServerGroupRequest& setServerFailoverMode(string serverFailoverMode) { DARABONBA_PTR_SET_VALUE(serverFailoverMode_, serverFailoverMode) };


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
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The configurations of connection draining.
    shared_ptr<CreateServerGroupRequest::ConnectionDrainConfig> connectionDrainConfig_ {};
    // Specifies whether to perform only a dry run without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The health check configurations.
    shared_ptr<CreateServerGroupRequest::HealthCheckConfig> healthCheckConfig_ {};
    // The backend protocol. Valid value:
    // 
    // *   **GENEVE** (default)
    shared_ptr<string> protocol_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The scheduling algorithm. Valid values:
    // 
    // *   **5TCH** (default): specifies consistent hashing that is based on the following factors: source IP address, destination IP address, source port, protocol, and destination port. Requests that contain the same information based on the preceding factors are forwarded to the same backend server.
    // *   **3TCH**: specifies consistent hashing that is based on the following factors: source IP address, destination IP address, and protocol. Requests that contain the same information based on the preceding factors are forwarded to the same backend server.
    // *   **2TCH**: specifies consistent hashing that is based on the following factors: source IP address and destination IP address. Requests that contain the same information based on the preceding factors are forwarded to the same backend server.
    shared_ptr<string> scheduler_ {};
    // Specifies how GWLB processes requests over existing connections when a backend server is not running as expected. Valid values:
    // 
    // *   **NoRebalance** (default): GWLB continues to forward requests over existing connections to the unavailable backend server.
    // *   **Rebalance**: GWLB forwards requests over existing connections to the remaining healthy backend servers.
    shared_ptr<string> serverFailoverMode_ {};
    // The server group name.
    // 
    // The name must be 2 to 128 characters in length, and can contain digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
    shared_ptr<string> serverGroupName_ {};
    // The type of the server group. Valid values:
    // 
    // *   **Instance** (default): allows you to specify resources of the **Ecs**, **Eni**, or **Eci** type.
    // *   **Ip**: allows you to add servers by specifying their IP addresses.
    shared_ptr<string> serverGroupType_ {};
    // The tag keys.
    // 
    // You can specify at most 20 tags in each call.
    shared_ptr<vector<CreateServerGroupRequest::Tag>> tag_ {};
    // The VPC ID.
    // 
    // > If **ServerGroupType** is set to **Instance**, only servers in the specified VPC can be added to the server group.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gwlb20240415
#endif
