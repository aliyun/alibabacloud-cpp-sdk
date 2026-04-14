// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeHealthStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHealthStatusResponseBody() = default ;
    DescribeHealthStatusResponseBody(const DescribeHealthStatusResponseBody &) = default ;
    DescribeHealthStatusResponseBody(DescribeHealthStatusResponseBody &&) = default ;
    DescribeHealthStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthStatusResponseBody() = default ;
    DescribeHealthStatusResponseBody& operator=(const DescribeHealthStatusResponseBody &) = default ;
    DescribeHealthStatusResponseBody& operator=(DescribeHealthStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackendServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackendServers& obj) { 
        DARABONBA_PTR_TO_JSON(BackendServer, backendServer_);
      };
      friend void from_json(const Darabonba::Json& j, BackendServers& obj) { 
        DARABONBA_PTR_FROM_JSON(BackendServer, backendServer_);
      };
      BackendServers() = default ;
      BackendServers(const BackendServers &) = default ;
      BackendServers(BackendServers &&) = default ;
      BackendServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackendServers() = default ;
      BackendServers& operator=(const BackendServers &) = default ;
      BackendServers& operator=(BackendServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BackendServer : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackendServer& obj) { 
          DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(ServerHealthStatus, serverHealthStatus_);
          DARABONBA_PTR_TO_JSON(ServerId, serverId_);
          DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
        };
        friend void from_json(const Darabonba::Json& j, BackendServer& obj) { 
          DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(ServerHealthStatus, serverHealthStatus_);
          DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
          DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
        };
        BackendServer() = default ;
        BackendServer(const BackendServer &) = default ;
        BackendServer(BackendServer &&) = default ;
        BackendServer(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackendServer() = default ;
        BackendServer& operator=(const BackendServer &) = default ;
        BackendServer& operator=(BackendServer &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->listenerPort_ == nullptr
        && this->port_ == nullptr && this->protocol_ == nullptr && this->serverHealthStatus_ == nullptr && this->serverId_ == nullptr && this->serverIp_ == nullptr; };
        // listenerPort Field Functions 
        bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
        void deleteListenerPort() { this->listenerPort_ = nullptr;};
        inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
        inline BackendServer& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline BackendServer& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline BackendServer& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // serverHealthStatus Field Functions 
        bool hasServerHealthStatus() const { return this->serverHealthStatus_ != nullptr;};
        void deleteServerHealthStatus() { this->serverHealthStatus_ = nullptr;};
        inline string getServerHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(serverHealthStatus_, "") };
        inline BackendServer& setServerHealthStatus(string serverHealthStatus) { DARABONBA_PTR_SET_VALUE(serverHealthStatus_, serverHealthStatus) };


        // serverId Field Functions 
        bool hasServerId() const { return this->serverId_ != nullptr;};
        void deleteServerId() { this->serverId_ = nullptr;};
        inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
        inline BackendServer& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


        // serverIp Field Functions 
        bool hasServerIp() const { return this->serverIp_ != nullptr;};
        void deleteServerIp() { this->serverIp_ = nullptr;};
        inline string getServerIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
        inline BackendServer& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


      protected:
        shared_ptr<int32_t> listenerPort_ {};
        shared_ptr<int32_t> port_ {};
        shared_ptr<string> protocol_ {};
        shared_ptr<string> serverHealthStatus_ {};
        shared_ptr<string> serverId_ {};
        shared_ptr<string> serverIp_ {};
      };

      virtual bool empty() const override { return this->backendServer_ == nullptr; };
      // backendServer Field Functions 
      bool hasBackendServer() const { return this->backendServer_ != nullptr;};
      void deleteBackendServer() { this->backendServer_ = nullptr;};
      inline const vector<BackendServers::BackendServer> & getBackendServer() const { DARABONBA_PTR_GET_CONST(backendServer_, vector<BackendServers::BackendServer>) };
      inline vector<BackendServers::BackendServer> getBackendServer() { DARABONBA_PTR_GET(backendServer_, vector<BackendServers::BackendServer>) };
      inline BackendServers& setBackendServer(const vector<BackendServers::BackendServer> & backendServer) { DARABONBA_PTR_SET_VALUE(backendServer_, backendServer) };
      inline BackendServers& setBackendServer(vector<BackendServers::BackendServer> && backendServer) { DARABONBA_PTR_SET_RVALUE(backendServer_, backendServer) };


    protected:
      shared_ptr<vector<BackendServers::BackendServer>> backendServer_ {};
    };

    virtual bool empty() const override { return this->backendServers_ == nullptr
        && this->requestId_ == nullptr; };
    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline const DescribeHealthStatusResponseBody::BackendServers & getBackendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, DescribeHealthStatusResponseBody::BackendServers) };
    inline DescribeHealthStatusResponseBody::BackendServers getBackendServers() { DARABONBA_PTR_GET(backendServers_, DescribeHealthStatusResponseBody::BackendServers) };
    inline DescribeHealthStatusResponseBody& setBackendServers(const DescribeHealthStatusResponseBody::BackendServers & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
    inline DescribeHealthStatusResponseBody& setBackendServers(DescribeHealthStatusResponseBody::BackendServers && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHealthStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeHealthStatusResponseBody::BackendServers> backendServers_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
