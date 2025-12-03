// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENERSRESPONSEBODYLISTENERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENERSRESPONSEBODYLISTENERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoadBalancerListenersResponseBodyListenersHTTPListenerConfig.hpp>
#include <alibabacloud/models/DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig.hpp>
#include <alibabacloud/models/DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig.hpp>
#include <alibabacloud/models/DescribeLoadBalancerListenersResponseBodyListenersTags.hpp>
#include <alibabacloud/models/DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerListenersResponseBodyListeners : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerListenersResponseBodyListeners& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclIds, aclIds_);
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HTTPListenerConfig, HTTPListenerConfig_);
      DARABONBA_PTR_TO_JSON(HTTPSListenerConfig, HTTPSListenerConfig_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TCPListenerConfig, TCPListenerConfig_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UDPListenerConfig, UDPListenerConfig_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerListenersResponseBodyListeners& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclIds, aclIds_);
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HTTPListenerConfig, HTTPListenerConfig_);
      DARABONBA_PTR_FROM_JSON(HTTPSListenerConfig, HTTPSListenerConfig_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TCPListenerConfig, TCPListenerConfig_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UDPListenerConfig, UDPListenerConfig_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
    };
    DescribeLoadBalancerListenersResponseBodyListeners() = default ;
    DescribeLoadBalancerListenersResponseBodyListeners(const DescribeLoadBalancerListenersResponseBodyListeners &) = default ;
    DescribeLoadBalancerListenersResponseBodyListeners(DescribeLoadBalancerListenersResponseBodyListeners &&) = default ;
    DescribeLoadBalancerListenersResponseBodyListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerListenersResponseBodyListeners() = default ;
    DescribeLoadBalancerListenersResponseBodyListeners& operator=(const DescribeLoadBalancerListenersResponseBodyListeners &) = default ;
    DescribeLoadBalancerListenersResponseBodyListeners& operator=(DescribeLoadBalancerListenersResponseBodyListeners &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && return this->aclIds_ == nullptr && return this->aclStatus_ == nullptr && return this->aclType_ == nullptr && return this->backendServerPort_ == nullptr && return this->bandwidth_ == nullptr
        && return this->description_ == nullptr && return this->HTTPListenerConfig_ == nullptr && return this->HTTPSListenerConfig_ == nullptr && return this->listenerPort_ == nullptr && return this->listenerProtocol_ == nullptr
        && return this->loadBalancerId_ == nullptr && return this->scheduler_ == nullptr && return this->status_ == nullptr && return this->TCPListenerConfig_ == nullptr && return this->tags_ == nullptr
        && return this->UDPListenerConfig_ == nullptr && return this->VServerGroupId_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclIds Field Functions 
    bool hasAclIds() const { return this->aclIds_ != nullptr;};
    void deleteAclIds() { this->aclIds_ = nullptr;};
    inline const vector<string> & aclIds() const { DARABONBA_PTR_GET_CONST(aclIds_, vector<string>) };
    inline vector<string> aclIds() { DARABONBA_PTR_GET(aclIds_, vector<string>) };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setAclIds(const vector<string> & aclIds) { DARABONBA_PTR_SET_VALUE(aclIds_, aclIds) };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setAclIds(vector<string> && aclIds) { DARABONBA_PTR_SET_RVALUE(aclIds_, aclIds) };


    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline string aclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // backendServerPort Field Functions 
    bool hasBackendServerPort() const { return this->backendServerPort_ != nullptr;};
    void deleteBackendServerPort() { this->backendServerPort_ = nullptr;};
    inline int32_t backendServerPort() const { DARABONBA_PTR_GET_DEFAULT(backendServerPort_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setBackendServerPort(int32_t backendServerPort) { DARABONBA_PTR_SET_VALUE(backendServerPort_, backendServerPort) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // HTTPListenerConfig Field Functions 
    bool hasHTTPListenerConfig() const { return this->HTTPListenerConfig_ != nullptr;};
    void deleteHTTPListenerConfig() { this->HTTPListenerConfig_ = nullptr;};
    inline const Models::DescribeLoadBalancerListenersResponseBodyListenersHTTPListenerConfig & HTTPListenerConfig() const { DARABONBA_PTR_GET_CONST(HTTPListenerConfig_, Models::DescribeLoadBalancerListenersResponseBodyListenersHTTPListenerConfig) };
    inline Models::DescribeLoadBalancerListenersResponseBodyListenersHTTPListenerConfig HTTPListenerConfig() { DARABONBA_PTR_GET(HTTPListenerConfig_, Models::DescribeLoadBalancerListenersResponseBodyListenersHTTPListenerConfig) };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setHTTPListenerConfig(const Models::DescribeLoadBalancerListenersResponseBodyListenersHTTPListenerConfig & HTTPListenerConfig) { DARABONBA_PTR_SET_VALUE(HTTPListenerConfig_, HTTPListenerConfig) };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setHTTPListenerConfig(Models::DescribeLoadBalancerListenersResponseBodyListenersHTTPListenerConfig && HTTPListenerConfig) { DARABONBA_PTR_SET_RVALUE(HTTPListenerConfig_, HTTPListenerConfig) };


    // HTTPSListenerConfig Field Functions 
    bool hasHTTPSListenerConfig() const { return this->HTTPSListenerConfig_ != nullptr;};
    void deleteHTTPSListenerConfig() { this->HTTPSListenerConfig_ = nullptr;};
    inline const Models::DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig & HTTPSListenerConfig() const { DARABONBA_PTR_GET_CONST(HTTPSListenerConfig_, Models::DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig) };
    inline Models::DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig HTTPSListenerConfig() { DARABONBA_PTR_GET(HTTPSListenerConfig_, Models::DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig) };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setHTTPSListenerConfig(const Models::DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig & HTTPSListenerConfig) { DARABONBA_PTR_SET_VALUE(HTTPSListenerConfig_, HTTPSListenerConfig) };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setHTTPSListenerConfig(Models::DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig && HTTPSListenerConfig) { DARABONBA_PTR_SET_RVALUE(HTTPSListenerConfig_, HTTPSListenerConfig) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string listenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string scheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // TCPListenerConfig Field Functions 
    bool hasTCPListenerConfig() const { return this->TCPListenerConfig_ != nullptr;};
    void deleteTCPListenerConfig() { this->TCPListenerConfig_ = nullptr;};
    inline const Models::DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig & TCPListenerConfig() const { DARABONBA_PTR_GET_CONST(TCPListenerConfig_, Models::DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig) };
    inline Models::DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig TCPListenerConfig() { DARABONBA_PTR_GET(TCPListenerConfig_, Models::DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig) };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setTCPListenerConfig(const Models::DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig & TCPListenerConfig) { DARABONBA_PTR_SET_VALUE(TCPListenerConfig_, TCPListenerConfig) };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setTCPListenerConfig(Models::DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig && TCPListenerConfig) { DARABONBA_PTR_SET_RVALUE(TCPListenerConfig_, TCPListenerConfig) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeLoadBalancerListenersResponseBodyListenersTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeLoadBalancerListenersResponseBodyListenersTags>) };
    inline vector<Models::DescribeLoadBalancerListenersResponseBodyListenersTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeLoadBalancerListenersResponseBodyListenersTags>) };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setTags(const vector<Models::DescribeLoadBalancerListenersResponseBodyListenersTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setTags(vector<Models::DescribeLoadBalancerListenersResponseBodyListenersTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // UDPListenerConfig Field Functions 
    bool hasUDPListenerConfig() const { return this->UDPListenerConfig_ != nullptr;};
    void deleteUDPListenerConfig() { this->UDPListenerConfig_ = nullptr;};
    inline const Models::DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig & UDPListenerConfig() const { DARABONBA_PTR_GET_CONST(UDPListenerConfig_, Models::DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig) };
    inline Models::DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig UDPListenerConfig() { DARABONBA_PTR_GET(UDPListenerConfig_, Models::DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig) };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setUDPListenerConfig(const Models::DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig & UDPListenerConfig) { DARABONBA_PTR_SET_VALUE(UDPListenerConfig_, UDPListenerConfig) };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setUDPListenerConfig(Models::DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig && UDPListenerConfig) { DARABONBA_PTR_SET_RVALUE(UDPListenerConfig_, UDPListenerConfig) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


  protected:
    // The ID of the access control list (ACL).
    std::shared_ptr<string> aclId_ = nullptr;
    // The IDs of the ACLs.
    std::shared_ptr<vector<string>> aclIds_ = nullptr;
    // Indicates whether access control is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> aclStatus_ = nullptr;
    // The type of access control. Valid values:
    // 
    // *   **white**: The listener forwards requests only from IP addresses and CIDR blocks on the whitelist. Your service may be adversely affected if the whitelist is not properly configured. If a whitelist is configured, the listener forwards requests only from IP addresses that are added to the whitelist.
    // 
    // If you configure a whitelist but no IP address is added to the whitelist, the listener forwards all requests.
    // 
    // *   **black**: The listener blocks requests from IP addresses and CIDR blocks on the blacklist.
    // 
    // If you configure a blacklist but no IP address is added to the blacklist, the listener forwards all requests.
    std::shared_ptr<string> aclType_ = nullptr;
    // The port of the backend server.
    // 
    // >  This parameter takes effect only when the `VServerGroupId` and `MasterSlaveServerGroupId` parameters are both empty.
    std::shared_ptr<int32_t> backendServerPort_ = nullptr;
    // The maximum bandwidth of the listener. Unit: Mbit/s.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The description of the listener.
    std::shared_ptr<string> description_ = nullptr;
    // The configurations of the HTTP listener.
    std::shared_ptr<Models::DescribeLoadBalancerListenersResponseBodyListenersHTTPListenerConfig> HTTPListenerConfig_ = nullptr;
    // The configurations of the HTTPS listener.
    std::shared_ptr<Models::DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig> HTTPSListenerConfig_ = nullptr;
    // The listener port.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The protocol used by the listener.
    std::shared_ptr<string> listenerProtocol_ = nullptr;
    // The ID of the CLB instance.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The scheduling algorithm. Valid values:
    // 
    // *   **wrr**: Backend servers with higher weights receive more requests than those with lower weights.
    // *   **rr**: Requests are distributed to backend servers in sequence.
    // *   **sch**: consistent hashing that is based on source IP addresses. Requests from the same source IP address are distributed to the same backend server.
    // *   **tch**: specifies consistent hashing based on the source IP address, destination IP address, source port, and destination port. Requests that have the same four factors are distributed to the same backend server.
    // *   **qch**: specifies consistent hashing based on Quick UDP Internet Connection (QUIC) IDs. Requests that contain the same QUIC ID are scheduled to the same backend server.
    // 
    // >  Only high-performance CLB instances support the **sch**, **tch**, and **qch** consistent hashing algorithms.
    std::shared_ptr<string> scheduler_ = nullptr;
    // The status of the listener. Valid values:
    // 
    // *   **running**
    // *   **stopped**
    std::shared_ptr<string> status_ = nullptr;
    // The configurations of the TCP listener.
    std::shared_ptr<Models::DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig> TCPListenerConfig_ = nullptr;
    // A list of tags.
    std::shared_ptr<vector<Models::DescribeLoadBalancerListenersResponseBodyListenersTags>> tags_ = nullptr;
    // The configurations of the UDP listener.
    std::shared_ptr<Models::DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig> UDPListenerConfig_ = nullptr;
    // The ID of the vServer group associated with the listener.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
