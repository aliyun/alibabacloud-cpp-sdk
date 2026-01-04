// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTRESPONSEBODY_HPP_
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
  class DescribePortResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkRules, networkRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkRules, networkRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePortResponseBody() = default ;
    DescribePortResponseBody(const DescribePortResponseBody &) = default ;
    DescribePortResponseBody(DescribePortResponseBody &&) = default ;
    DescribePortResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortResponseBody() = default ;
    DescribePortResponseBody& operator=(const DescribePortResponseBody &) = default ;
    DescribePortResponseBody& operator=(DescribePortResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkRules& obj) { 
        DARABONBA_PTR_TO_JSON(BackendPort, backendPort_);
        DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
        DARABONBA_PTR_TO_JSON(FrontendProtocol, frontendProtocol_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(IsAutoCreate, isAutoCreate_);
        DARABONBA_PTR_TO_JSON(RealServers, realServers_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkRules& obj) { 
        DARABONBA_PTR_FROM_JSON(BackendPort, backendPort_);
        DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
        DARABONBA_PTR_FROM_JSON(FrontendProtocol, frontendProtocol_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(IsAutoCreate, isAutoCreate_);
        DARABONBA_PTR_FROM_JSON(RealServers, realServers_);
      };
      NetworkRules() = default ;
      NetworkRules(const NetworkRules &) = default ;
      NetworkRules(NetworkRules &&) = default ;
      NetworkRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkRules() = default ;
      NetworkRules& operator=(const NetworkRules &) = default ;
      NetworkRules& operator=(NetworkRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backendPort_ == nullptr
        && this->frontendPort_ == nullptr && this->frontendProtocol_ == nullptr && this->instanceId_ == nullptr && this->isAutoCreate_ == nullptr && this->realServers_ == nullptr; };
      // backendPort Field Functions 
      bool hasBackendPort() const { return this->backendPort_ != nullptr;};
      void deleteBackendPort() { this->backendPort_ = nullptr;};
      inline int32_t getBackendPort() const { DARABONBA_PTR_GET_DEFAULT(backendPort_, 0) };
      inline NetworkRules& setBackendPort(int32_t backendPort) { DARABONBA_PTR_SET_VALUE(backendPort_, backendPort) };


      // frontendPort Field Functions 
      bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
      void deleteFrontendPort() { this->frontendPort_ = nullptr;};
      inline int32_t getFrontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
      inline NetworkRules& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


      // frontendProtocol Field Functions 
      bool hasFrontendProtocol() const { return this->frontendProtocol_ != nullptr;};
      void deleteFrontendProtocol() { this->frontendProtocol_ = nullptr;};
      inline string getFrontendProtocol() const { DARABONBA_PTR_GET_DEFAULT(frontendProtocol_, "") };
      inline NetworkRules& setFrontendProtocol(string frontendProtocol) { DARABONBA_PTR_SET_VALUE(frontendProtocol_, frontendProtocol) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline NetworkRules& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // isAutoCreate Field Functions 
      bool hasIsAutoCreate() const { return this->isAutoCreate_ != nullptr;};
      void deleteIsAutoCreate() { this->isAutoCreate_ = nullptr;};
      inline bool getIsAutoCreate() const { DARABONBA_PTR_GET_DEFAULT(isAutoCreate_, false) };
      inline NetworkRules& setIsAutoCreate(bool isAutoCreate) { DARABONBA_PTR_SET_VALUE(isAutoCreate_, isAutoCreate) };


      // realServers Field Functions 
      bool hasRealServers() const { return this->realServers_ != nullptr;};
      void deleteRealServers() { this->realServers_ = nullptr;};
      inline const vector<string> & getRealServers() const { DARABONBA_PTR_GET_CONST(realServers_, vector<string>) };
      inline vector<string> getRealServers() { DARABONBA_PTR_GET(realServers_, vector<string>) };
      inline NetworkRules& setRealServers(const vector<string> & realServers) { DARABONBA_PTR_SET_VALUE(realServers_, realServers) };
      inline NetworkRules& setRealServers(vector<string> && realServers) { DARABONBA_PTR_SET_RVALUE(realServers_, realServers) };


    protected:
      // The port of the origin server.
      shared_ptr<int32_t> backendPort_ {};
      // The forwarding port.
      shared_ptr<int32_t> frontendPort_ {};
      // The type of the protocol. Valid values:
      // 
      // *   **tcp**
      // *   **udp**
      shared_ptr<string> frontendProtocol_ {};
      // The ID of the instance to which the port forwarding rule is applied.
      shared_ptr<string> instanceId_ {};
      // Indicates whether the port forwarding rule is automatically created by the instance. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> isAutoCreate_ {};
      // An array that consists of IP addresses of origin servers.
      shared_ptr<vector<string>> realServers_ {};
    };

    virtual bool empty() const override { return this->networkRules_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // networkRules Field Functions 
    bool hasNetworkRules() const { return this->networkRules_ != nullptr;};
    void deleteNetworkRules() { this->networkRules_ = nullptr;};
    inline const vector<DescribePortResponseBody::NetworkRules> & getNetworkRules() const { DARABONBA_PTR_GET_CONST(networkRules_, vector<DescribePortResponseBody::NetworkRules>) };
    inline vector<DescribePortResponseBody::NetworkRules> getNetworkRules() { DARABONBA_PTR_GET(networkRules_, vector<DescribePortResponseBody::NetworkRules>) };
    inline DescribePortResponseBody& setNetworkRules(const vector<DescribePortResponseBody::NetworkRules> & networkRules) { DARABONBA_PTR_SET_VALUE(networkRules_, networkRules) };
    inline DescribePortResponseBody& setNetworkRules(vector<DescribePortResponseBody::NetworkRules> && networkRules) { DARABONBA_PTR_SET_RVALUE(networkRules_, networkRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePortResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of port forwarding rules.
    shared_ptr<vector<DescribePortResponseBody::NetworkRules>> networkRules_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The number of port forwarding rules returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
