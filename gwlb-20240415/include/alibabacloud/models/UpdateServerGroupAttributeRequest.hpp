// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVERGROUPATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVERGROUPATTRIBUTEREQUEST_HPP_
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
  class UpdateServerGroupAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServerGroupAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainConfig, connectionDrainConfig_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(ServerFailoverMode, serverFailoverMode_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(ServerGroupName, serverGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServerGroupAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainConfig, connectionDrainConfig_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(ServerFailoverMode, serverFailoverMode_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(ServerGroupName, serverGroupName_);
    };
    UpdateServerGroupAttributeRequest() = default ;
    UpdateServerGroupAttributeRequest(const UpdateServerGroupAttributeRequest &) = default ;
    UpdateServerGroupAttributeRequest(UpdateServerGroupAttributeRequest &&) = default ;
    UpdateServerGroupAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServerGroupAttributeRequest() = default ;
    UpdateServerGroupAttributeRequest& operator=(const UpdateServerGroupAttributeRequest &) = default ;
    UpdateServerGroupAttributeRequest& operator=(UpdateServerGroupAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // The backend server port that is used for health checks.
      // 
      // Valid values: **1** to **65535**.
      shared_ptr<int32_t> healthCheckConnectPort_ {};
      // The maximum timeout period for a health check response.
      // 
      // Unit: seconds.
      // 
      // Valid values: **1** to **300**.
      shared_ptr<int32_t> healthCheckConnectTimeout_ {};
      // The domain name used for health checks. Valid values:
      // 
      // *   **$SERVER_IP**: the internal IP address of a backend server.
      // *   **domain**: a domain name. The domain name must be 1 to 80 characters in length, and can contain letters, digits, hyphens (-), and periods (.).
      // 
      // >  This parameter takes effect only if you set **HealthCheckProtocol** to **HTTP**.
      shared_ptr<string> healthCheckDomain_ {};
      // Specifies whether to enable health checks. Valid values:
      // 
      // *   **true**
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
      shared_ptr<int32_t> healthCheckInterval_ {};
      // The URL used for health checks.
      // 
      // The URL must be 1 to 80 characters in length, and can contain letters, digits, and the following special characters: ` - / . % ? # &  `It must start with a forward slash (/).
      // 
      // >  This parameter takes effect only if you set **HealthCheckProtocol** to **HTTP**.
      shared_ptr<string> healthCheckPath_ {};
      // The protocol that is used for health checks. Valid values:
      // 
      // *   **TCP**: TCP health checks send TCP SYN packets to a backend server to check whether the port of the backend server is reachable.
      // *   **HTTP**: HTTP health checks simulate a process that uses a web browser to access resources by sending GET requests to an instance. These requests are used to check whether the instance is healthy.
      shared_ptr<string> healthCheckProtocol_ {};
      shared_ptr<string> healthCheckReq_ {};
      // The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health check status of the backend server changes from **fail** to **success**.
      // 
      // Valid values: **2** to **10**.
      shared_ptr<int32_t> healthyThreshold_ {};
      // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health check status of the backend server changes from **success** to **fail**.
      // 
      // Valid values: **2** to **10**.
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
      // Valid values: 1 to 3600.
      shared_ptr<int32_t> connectionDrainTimeout_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->connectionDrainConfig_ == nullptr && this->dryRun_ == nullptr && this->healthCheckConfig_ == nullptr && this->scheduler_ == nullptr && this->serverFailoverMode_ == nullptr
        && this->serverGroupId_ == nullptr && this->serverGroupName_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateServerGroupAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionDrainConfig Field Functions 
    bool hasConnectionDrainConfig() const { return this->connectionDrainConfig_ != nullptr;};
    void deleteConnectionDrainConfig() { this->connectionDrainConfig_ = nullptr;};
    inline const UpdateServerGroupAttributeRequest::ConnectionDrainConfig & getConnectionDrainConfig() const { DARABONBA_PTR_GET_CONST(connectionDrainConfig_, UpdateServerGroupAttributeRequest::ConnectionDrainConfig) };
    inline UpdateServerGroupAttributeRequest::ConnectionDrainConfig getConnectionDrainConfig() { DARABONBA_PTR_GET(connectionDrainConfig_, UpdateServerGroupAttributeRequest::ConnectionDrainConfig) };
    inline UpdateServerGroupAttributeRequest& setConnectionDrainConfig(const UpdateServerGroupAttributeRequest::ConnectionDrainConfig & connectionDrainConfig) { DARABONBA_PTR_SET_VALUE(connectionDrainConfig_, connectionDrainConfig) };
    inline UpdateServerGroupAttributeRequest& setConnectionDrainConfig(UpdateServerGroupAttributeRequest::ConnectionDrainConfig && connectionDrainConfig) { DARABONBA_PTR_SET_RVALUE(connectionDrainConfig_, connectionDrainConfig) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateServerGroupAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // healthCheckConfig Field Functions 
    bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
    void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
    inline const UpdateServerGroupAttributeRequest::HealthCheckConfig & getHealthCheckConfig() const { DARABONBA_PTR_GET_CONST(healthCheckConfig_, UpdateServerGroupAttributeRequest::HealthCheckConfig) };
    inline UpdateServerGroupAttributeRequest::HealthCheckConfig getHealthCheckConfig() { DARABONBA_PTR_GET(healthCheckConfig_, UpdateServerGroupAttributeRequest::HealthCheckConfig) };
    inline UpdateServerGroupAttributeRequest& setHealthCheckConfig(const UpdateServerGroupAttributeRequest::HealthCheckConfig & healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };
    inline UpdateServerGroupAttributeRequest& setHealthCheckConfig(UpdateServerGroupAttributeRequest::HealthCheckConfig && healthCheckConfig) { DARABONBA_PTR_SET_RVALUE(healthCheckConfig_, healthCheckConfig) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline UpdateServerGroupAttributeRequest& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // serverFailoverMode Field Functions 
    bool hasServerFailoverMode() const { return this->serverFailoverMode_ != nullptr;};
    void deleteServerFailoverMode() { this->serverFailoverMode_ = nullptr;};
    inline string getServerFailoverMode() const { DARABONBA_PTR_GET_DEFAULT(serverFailoverMode_, "") };
    inline UpdateServerGroupAttributeRequest& setServerFailoverMode(string serverFailoverMode) { DARABONBA_PTR_SET_VALUE(serverFailoverMode_, serverFailoverMode) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline UpdateServerGroupAttributeRequest& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // serverGroupName Field Functions 
    bool hasServerGroupName() const { return this->serverGroupName_ != nullptr;};
    void deleteServerGroupName() { this->serverGroupName_ = nullptr;};
    inline string getServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(serverGroupName_, "") };
    inline UpdateServerGroupAttributeRequest& setServerGroupName(string serverGroupName) { DARABONBA_PTR_SET_VALUE(serverGroupName_, serverGroupName) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The configurations of connection draining.
    shared_ptr<UpdateServerGroupAttributeRequest::ConnectionDrainConfig> connectionDrainConfig_ {};
    // Specifies whether to perform only a dry run without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The health check configuration.
    shared_ptr<UpdateServerGroupAttributeRequest::HealthCheckConfig> healthCheckConfig_ {};
    // The scheduling algorithm. Valid values:
    // 
    // *   **5TCH**: specifies consistent hashing that is based on the following factors: source IP address, destination IP address, source port, protocol, and destination port. Requests that contain the same information based on the preceding factors are forwarded to the same backend server.
    // *   **3TCH**: indicates consistent hashing that is based on the following factors: source IP address, destination IP address, and protocol. Requests that contain the same information based on the preceding factors are forwarded to the same backend server.
    // *   **2TCH**: specifies consistent hashing that is based on the following factors: source IP address and destination IP address. Requests that contain the same information based on the preceding factors are forwarded to the same backend server.
    shared_ptr<string> scheduler_ {};
    // Specifies how GWLB processes requests over existing connections when a backend server is not running as expected. Valid values:
    // 
    // *   **NoRebalance**: GWLB continues to forward requests over existing connections to the unavailable backend server.
    // *   **Rebalance**: GWLB forwards requests over existing connections to the remaining healthy backend servers.
    shared_ptr<string> serverFailoverMode_ {};
    // The server group ID.
    // 
    // This parameter is required.
    shared_ptr<string> serverGroupId_ {};
    // The server group name.
    // 
    // The name must be 2 to 128 characters in length, and can contain digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
    shared_ptr<string> serverGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gwlb20240415
#endif
