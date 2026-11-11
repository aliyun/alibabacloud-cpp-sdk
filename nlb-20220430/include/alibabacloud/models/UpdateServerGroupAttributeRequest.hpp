// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVERGROUPATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVERGROUPATTRIBUTEREQUEST_HPP_
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
  class UpdateServerGroupAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServerGroupAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainEnabled, connectionDrainEnabled_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(IpVersionAffinityMode, ipVersionAffinityMode_);
      DARABONBA_PTR_TO_JSON(PreserveClientIpEnabled, preserveClientIpEnabled_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(ServerGroupName, serverGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServerGroupAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainEnabled, connectionDrainEnabled_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(IpVersionAffinityMode, ipVersionAffinityMode_);
      DARABONBA_PTR_FROM_JSON(PreserveClientIpEnabled, preserveClientIpEnabled_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
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
      // The port used for health checks on backend servers. Valid values: **0** to **65535**. A value of **0** indicates that the port of the backend server is used for health checks.
      shared_ptr<int32_t> healthCheckConnectPort_ {};
      // The maximum timeout period for a health check response. Unit: seconds. Valid values: **1** to **300**. Default value: **5**.
      shared_ptr<int32_t> healthCheckConnectTimeout_ {};
      // The domain name used for health checks. Valid values:
      // - **$SERVER_IP**: the internal IP address of the backend server.
      // - **domain**: a custom domain name. The domain name must be 1 to 80 characters in length, and can contain only lowercase letters, digits, hyphens (-), and periods (.).
      // 
      // > This parameter takes effect only when **HealthCheckType** is set to **HTTP**.
      shared_ptr<string> healthCheckDomain_ {};
      // Specifies whether to enable health checks. Valid values:
      // 
      // - **true**: Enables health checks.
      // 
      // - **false**: Disables health checks.
      shared_ptr<bool> healthCheckEnabled_ {};
      // The response string used for UDP health checks. The string can contain only letters and digits, and can be up to 512 characters in length.
      shared_ptr<string> healthCheckExp_ {};
      // The HTTP status codes that indicate a successful health check. Separate multiple HTTP status codes with commas (,). Valid values: **http_2xx** (default), **http_3xx**, **http_4xx**, and **http_5xx**.
      // > This parameter takes effect only when **HealthCheckType** is set to **HTTP**.
      shared_ptr<vector<string>> healthCheckHttpCode_ {};
      // The HTTP version used for health checks. Valid values: **HTTP1.0** and **HTTP1.1**.
      // 
      // > This parameter takes effect only when **HealthCheckType** is set to **HTTP**.
      shared_ptr<string> healthCheckHttpVersion_ {};
      // The interval between two consecutive health checks. Unit: seconds. Default value: **5**.
      // 
      // - If **HealthCheckType** is set to **TCP** or **HTTP**, valid values are **1** to **50**.
      // 
      // - If **HealthCheckType** is set to **UDP**, valid values are **1** to **300**. You must set the interval to a value greater than or equal to the response timeout period to ensure that UDP probe responses are not mistakenly identified as timeouts.
      shared_ptr<int32_t> healthCheckInterval_ {};
      // The request string used for UDP health checks. The string can contain only letters and digits, and can be up to 512 characters in length.
      shared_ptr<string> healthCheckReq_ {};
      // The health check protocol. Valid values:
      // 
      // - **TCP**
      // - **HTTP**
      // - **UDP**
      shared_ptr<string> healthCheckType_ {};
      // The health check path.
      // 
      // The path must be 1 to 80 characters in length. It can contain only letters, digits, the characters `-/.%?#&=`, and extension characters `_;~!()*[]@$^:\\",+`. It must start with a forward slash (/).
      // > This parameter takes effect only when **HealthCheckType** is set to **HTTP**.
      shared_ptr<string> healthCheckUrl_ {};
      // The number of consecutive successful health checks required to change the health status of a backend server from **Failed** to **Success**. Valid values: **2** to **10**.
      shared_ptr<int32_t> healthyThreshold_ {};
      // The HTTP method used for health checks. Valid values: **GET** and **HEAD**.
      // > This parameter takes effect only when **HealthCheckType** is set to **HTTP**.
      shared_ptr<string> httpCheckMethod_ {};
      // The number of consecutive failed health checks required to change the health status of a backend server from **Success** to **Failed**. Valid values: **2** to **10**.
      shared_ptr<int32_t> unhealthyThreshold_ {};
    };

    virtual bool empty() const override { return this->addressIPVersion_ == nullptr
        && this->clientToken_ == nullptr && this->connectionDrainEnabled_ == nullptr && this->connectionDrainTimeout_ == nullptr && this->dryRun_ == nullptr && this->healthCheckConfig_ == nullptr
        && this->ipVersionAffinityMode_ == nullptr && this->preserveClientIpEnabled_ == nullptr && this->regionId_ == nullptr && this->scheduler_ == nullptr && this->serverGroupId_ == nullptr
        && this->serverGroupName_ == nullptr; };
    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string getAddressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline UpdateServerGroupAttributeRequest& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateServerGroupAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionDrainEnabled Field Functions 
    bool hasConnectionDrainEnabled() const { return this->connectionDrainEnabled_ != nullptr;};
    void deleteConnectionDrainEnabled() { this->connectionDrainEnabled_ = nullptr;};
    inline bool getConnectionDrainEnabled() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainEnabled_, false) };
    inline UpdateServerGroupAttributeRequest& setConnectionDrainEnabled(bool connectionDrainEnabled) { DARABONBA_PTR_SET_VALUE(connectionDrainEnabled_, connectionDrainEnabled) };


    // connectionDrainTimeout Field Functions 
    bool hasConnectionDrainTimeout() const { return this->connectionDrainTimeout_ != nullptr;};
    void deleteConnectionDrainTimeout() { this->connectionDrainTimeout_ = nullptr;};
    inline int32_t getConnectionDrainTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainTimeout_, 0) };
    inline UpdateServerGroupAttributeRequest& setConnectionDrainTimeout(int32_t connectionDrainTimeout) { DARABONBA_PTR_SET_VALUE(connectionDrainTimeout_, connectionDrainTimeout) };


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


    // ipVersionAffinityMode Field Functions 
    bool hasIpVersionAffinityMode() const { return this->ipVersionAffinityMode_ != nullptr;};
    void deleteIpVersionAffinityMode() { this->ipVersionAffinityMode_ = nullptr;};
    inline string getIpVersionAffinityMode() const { DARABONBA_PTR_GET_DEFAULT(ipVersionAffinityMode_, "") };
    inline UpdateServerGroupAttributeRequest& setIpVersionAffinityMode(string ipVersionAffinityMode) { DARABONBA_PTR_SET_VALUE(ipVersionAffinityMode_, ipVersionAffinityMode) };


    // preserveClientIpEnabled Field Functions 
    bool hasPreserveClientIpEnabled() const { return this->preserveClientIpEnabled_ != nullptr;};
    void deletePreserveClientIpEnabled() { this->preserveClientIpEnabled_ = nullptr;};
    inline bool getPreserveClientIpEnabled() const { DARABONBA_PTR_GET_DEFAULT(preserveClientIpEnabled_, false) };
    inline UpdateServerGroupAttributeRequest& setPreserveClientIpEnabled(bool preserveClientIpEnabled) { DARABONBA_PTR_SET_VALUE(preserveClientIpEnabled_, preserveClientIpEnabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateServerGroupAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline UpdateServerGroupAttributeRequest& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


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
    // The IP version. Valid values: **ipv4** and **dualStack**.
    shared_ptr<string> addressIPVersion_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is unique.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to enable connection draining. Valid values:
    // 
    // - **true**: Enables connection draining.
    // 
    // - **false**: Disables connection draining.
    shared_ptr<bool> connectionDrainEnabled_ {};
    // The timeout period for connection draining. Unit: seconds. Valid values: **0** to **900**.
    shared_ptr<int32_t> connectionDrainTimeout_ {};
    // Specifies whether to perform a dry run. Valid values:
    // - **true**: performs a dry run without updating the server group. The system checks whether required parameters are specified, the request format is valid, and the service limits are met. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // - **false** (default): performs a dry run and sends the actual request. If the request passes the dry run, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The health check configuration.
    shared_ptr<UpdateServerGroupAttributeRequest::HealthCheckConfig> healthCheckConfig_ {};
    // The traffic scheduling policy in dual-stack mode. Valid values:
    // 
    // - **NonAffinity**: non-affinity mode. Requests are forwarded to healthy backend servers based on the scheduling algorithm regardless of the IP version of the source address. This is the default value.
    // - **Affinity**: affinity mode. Requests are forwarded to backend servers based on the IP version of the source address. IPv4 requests are forwarded only to IPv4 backend servers, and IPv6 requests are forwarded only to IPv6 backend servers.
    // > This parameter takes effect only when **AddressIPVersion** is set to **DualStack**.
    shared_ptr<string> ipVersionAffinityMode_ {};
    // Specifies whether to enable client IP preservation. Valid values:
    // 
    // - **true**: Enables client IP preservation.
    // 
    // - **false**: Disables client IP preservation.
    // 
    // > If **PreserveClientIpEnabled** is set to **false** and the server group is associated with a **TCPSSL** listener, you cannot change the value of this parameter to **true**.
    shared_ptr<bool> preserveClientIpEnabled_ {};
    // The region ID of the network load balancing instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to obtain the region ID.
    shared_ptr<string> regionId_ {};
    // The scheduling algorithm. Valid values:
    // 
    // - **Wrr**: weighted round-robin. Backend servers with higher weights receive more requests.
    // 
    // - **Wlc**: weighted least connections. Requests are distributed based on the weights and actual loads (number of connections) of backend servers. If weights are the same, backend servers with fewer connections receive more requests.
    // 
    // - **rr**: round-robin. Requests are distributed to backend servers in sequence.
    // 
    // - **sch**: source IP hash. Requests from the same source IP address are distributed to the same backend server.
    // 
    // - **tch**: 4-tuple hash. Consistent hashing based on the 4-tuple (source IP address, destination IP address, source port, and destination port). Requests from the same flow are distributed to the same backend server.
    // 
    // - **qch**: QUIC ID hash. Requests with the same QUIC ID are distributed to the same backend server.
    // 
    // > QUIC ID hash is supported only when the backend protocol is UDP.
    shared_ptr<string> scheduler_ {};
    // The ID of the server group.
    // 
    // This parameter is required.
    shared_ptr<string> serverGroupId_ {};
    // The new name of the server group.
    // 
    // The name must be 2 to 128 characters in length, and must start with a letter or Chinese character. It can contain digits, periods (.), underscores (_), and hyphens (-).
    shared_ptr<string> serverGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
