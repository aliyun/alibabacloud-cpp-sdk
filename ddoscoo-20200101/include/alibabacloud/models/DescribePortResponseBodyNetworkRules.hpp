// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTRESPONSEBODYNETWORKRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTRESPONSEBODYNETWORKRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortResponseBodyNetworkRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortResponseBodyNetworkRules& obj) { 
      DARABONBA_PTR_TO_JSON(BackendPort, backendPort_);
      DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_TO_JSON(FrontendProtocol, frontendProtocol_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsAutoCreate, isAutoCreate_);
      DARABONBA_PTR_TO_JSON(RealServers, realServers_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortResponseBodyNetworkRules& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendPort, backendPort_);
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(FrontendProtocol, frontendProtocol_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsAutoCreate, isAutoCreate_);
      DARABONBA_PTR_FROM_JSON(RealServers, realServers_);
    };
    DescribePortResponseBodyNetworkRules() = default ;
    DescribePortResponseBodyNetworkRules(const DescribePortResponseBodyNetworkRules &) = default ;
    DescribePortResponseBodyNetworkRules(DescribePortResponseBodyNetworkRules &&) = default ;
    DescribePortResponseBodyNetworkRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortResponseBodyNetworkRules() = default ;
    DescribePortResponseBodyNetworkRules& operator=(const DescribePortResponseBodyNetworkRules &) = default ;
    DescribePortResponseBodyNetworkRules& operator=(DescribePortResponseBodyNetworkRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendPort_ == nullptr
        && return this->frontendPort_ == nullptr && return this->frontendProtocol_ == nullptr && return this->instanceId_ == nullptr && return this->isAutoCreate_ == nullptr && return this->realServers_ == nullptr; };
    // backendPort Field Functions 
    bool hasBackendPort() const { return this->backendPort_ != nullptr;};
    void deleteBackendPort() { this->backendPort_ = nullptr;};
    inline int32_t backendPort() const { DARABONBA_PTR_GET_DEFAULT(backendPort_, 0) };
    inline DescribePortResponseBodyNetworkRules& setBackendPort(int32_t backendPort) { DARABONBA_PTR_SET_VALUE(backendPort_, backendPort) };


    // frontendPort Field Functions 
    bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
    void deleteFrontendPort() { this->frontendPort_ = nullptr;};
    inline int32_t frontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
    inline DescribePortResponseBodyNetworkRules& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // frontendProtocol Field Functions 
    bool hasFrontendProtocol() const { return this->frontendProtocol_ != nullptr;};
    void deleteFrontendProtocol() { this->frontendProtocol_ = nullptr;};
    inline string frontendProtocol() const { DARABONBA_PTR_GET_DEFAULT(frontendProtocol_, "") };
    inline DescribePortResponseBodyNetworkRules& setFrontendProtocol(string frontendProtocol) { DARABONBA_PTR_SET_VALUE(frontendProtocol_, frontendProtocol) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePortResponseBodyNetworkRules& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isAutoCreate Field Functions 
    bool hasIsAutoCreate() const { return this->isAutoCreate_ != nullptr;};
    void deleteIsAutoCreate() { this->isAutoCreate_ = nullptr;};
    inline bool isAutoCreate() const { DARABONBA_PTR_GET_DEFAULT(isAutoCreate_, false) };
    inline DescribePortResponseBodyNetworkRules& setIsAutoCreate(bool isAutoCreate) { DARABONBA_PTR_SET_VALUE(isAutoCreate_, isAutoCreate) };


    // realServers Field Functions 
    bool hasRealServers() const { return this->realServers_ != nullptr;};
    void deleteRealServers() { this->realServers_ = nullptr;};
    inline const vector<string> & realServers() const { DARABONBA_PTR_GET_CONST(realServers_, vector<string>) };
    inline vector<string> realServers() { DARABONBA_PTR_GET(realServers_, vector<string>) };
    inline DescribePortResponseBodyNetworkRules& setRealServers(const vector<string> & realServers) { DARABONBA_PTR_SET_VALUE(realServers_, realServers) };
    inline DescribePortResponseBodyNetworkRules& setRealServers(vector<string> && realServers) { DARABONBA_PTR_SET_RVALUE(realServers_, realServers) };


  protected:
    // The port of the origin server.
    std::shared_ptr<int32_t> backendPort_ = nullptr;
    // The forwarding port.
    std::shared_ptr<int32_t> frontendPort_ = nullptr;
    // The type of the protocol. Valid values:
    // 
    // *   **tcp**
    // *   **udp**
    std::shared_ptr<string> frontendProtocol_ = nullptr;
    // The ID of the instance to which the port forwarding rule is applied.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether the port forwarding rule is automatically created by the instance. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> isAutoCreate_ = nullptr;
    // An array that consists of IP addresses of origin servers.
    std::shared_ptr<vector<string>> realServers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
