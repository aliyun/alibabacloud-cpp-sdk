// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHREMOTEMCPTOOLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FETCHREMOTEMCPTOOLSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class FetchRemoteMcpToolsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchRemoteMcpToolsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(connection, connection_);
      DARABONBA_PTR_TO_JSON(network, network_);
    };
    friend void from_json(const Darabonba::Json& j, FetchRemoteMcpToolsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(connection, connection_);
      DARABONBA_PTR_FROM_JSON(network, network_);
    };
    FetchRemoteMcpToolsRequest() = default ;
    FetchRemoteMcpToolsRequest(const FetchRemoteMcpToolsRequest &) = default ;
    FetchRemoteMcpToolsRequest(FetchRemoteMcpToolsRequest &&) = default ;
    FetchRemoteMcpToolsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchRemoteMcpToolsRequest() = default ;
    FetchRemoteMcpToolsRequest& operator=(const FetchRemoteMcpToolsRequest &) = default ;
    FetchRemoteMcpToolsRequest& operator=(FetchRemoteMcpToolsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Network : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Network& obj) { 
        DARABONBA_PTR_TO_JSON(accessIp, accessIp_);
        DARABONBA_PTR_TO_JSON(accessPort, accessPort_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(mcpServerId, mcpServerId_);
        DARABONBA_PTR_TO_JSON(mode, mode_);
        DARABONBA_PTR_TO_JSON(region, region_);
        DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(vswId, vswId_);
      };
      friend void from_json(const Darabonba::Json& j, Network& obj) { 
        DARABONBA_PTR_FROM_JSON(accessIp, accessIp_);
        DARABONBA_PTR_FROM_JSON(accessPort, accessPort_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(mcpServerId, mcpServerId_);
        DARABONBA_PTR_FROM_JSON(mode, mode_);
        DARABONBA_PTR_FROM_JSON(region, region_);
        DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(vswId, vswId_);
      };
      Network() = default ;
      Network(const Network &) = default ;
      Network(Network &&) = default ;
      Network(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Network() = default ;
      Network& operator=(const Network &) = default ;
      Network& operator=(Network &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessIp_ == nullptr
        && this->accessPort_ == nullptr && this->gatewayId_ == nullptr && this->mcpServerId_ == nullptr && this->mode_ == nullptr && this->region_ == nullptr
        && this->securityGroupId_ == nullptr && this->vpcId_ == nullptr && this->vswId_ == nullptr; };
      // accessIp Field Functions 
      bool hasAccessIp() const { return this->accessIp_ != nullptr;};
      void deleteAccessIp() { this->accessIp_ = nullptr;};
      inline string getAccessIp() const { DARABONBA_PTR_GET_DEFAULT(accessIp_, "") };
      inline Network& setAccessIp(string accessIp) { DARABONBA_PTR_SET_VALUE(accessIp_, accessIp) };


      // accessPort Field Functions 
      bool hasAccessPort() const { return this->accessPort_ != nullptr;};
      void deleteAccessPort() { this->accessPort_ = nullptr;};
      inline int64_t getAccessPort() const { DARABONBA_PTR_GET_DEFAULT(accessPort_, 0L) };
      inline Network& setAccessPort(int64_t accessPort) { DARABONBA_PTR_SET_VALUE(accessPort_, accessPort) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Network& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // mcpServerId Field Functions 
      bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
      void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
      inline string getMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
      inline Network& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Network& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Network& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Network& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Network& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswId Field Functions 
      bool hasVswId() const { return this->vswId_ != nullptr;};
      void deleteVswId() { this->vswId_ = nullptr;};
      inline string getVswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
      inline Network& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


    protected:
      shared_ptr<string> accessIp_ {};
      shared_ptr<int64_t> accessPort_ {};
      shared_ptr<string> gatewayId_ {};
      shared_ptr<string> mcpServerId_ {};
      shared_ptr<string> mode_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> securityGroupId_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<string> vswId_ {};
    };

    class Connection : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Connection& obj) { 
        DARABONBA_PTR_TO_JSON(auth, auth_);
        DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(platform, platform_);
        DARABONBA_PTR_TO_JSON(timeout, timeout_);
        DARABONBA_PTR_TO_JSON(transport, transport_);
      };
      friend void from_json(const Darabonba::Json& j, Connection& obj) { 
        DARABONBA_PTR_FROM_JSON(auth, auth_);
        DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(platform, platform_);
        DARABONBA_PTR_FROM_JSON(timeout, timeout_);
        DARABONBA_PTR_FROM_JSON(transport, transport_);
      };
      Connection() = default ;
      Connection(const Connection &) = default ;
      Connection(Connection &&) = default ;
      Connection(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Connection() = default ;
      Connection& operator=(const Connection &) = default ;
      Connection& operator=(Connection &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Auth : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Auth& obj) { 
          DARABONBA_PTR_TO_JSON(keyInfo, keyInfo_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Auth& obj) { 
          DARABONBA_PTR_FROM_JSON(keyInfo, keyInfo_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Auth() = default ;
        Auth(const Auth &) = default ;
        Auth(Auth &&) = default ;
        Auth(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Auth() = default ;
        Auth& operator=(const Auth &) = default ;
        Auth& operator=(Auth &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->keyInfo_ == nullptr
        && this->type_ == nullptr; };
        // keyInfo Field Functions 
        bool hasKeyInfo() const { return this->keyInfo_ != nullptr;};
        void deleteKeyInfo() { this->keyInfo_ = nullptr;};
        inline const map<string, string> & getKeyInfo() const { DARABONBA_PTR_GET_CONST(keyInfo_, map<string, string>) };
        inline map<string, string> getKeyInfo() { DARABONBA_PTR_GET(keyInfo_, map<string, string>) };
        inline Auth& setKeyInfo(const map<string, string> & keyInfo) { DARABONBA_PTR_SET_VALUE(keyInfo_, keyInfo) };
        inline Auth& setKeyInfo(map<string, string> && keyInfo) { DARABONBA_PTR_SET_RVALUE(keyInfo_, keyInfo) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Auth& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<map<string, string>> keyInfo_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->auth_ == nullptr
        && this->endpoint_ == nullptr && this->platform_ == nullptr && this->timeout_ == nullptr && this->transport_ == nullptr; };
      // auth Field Functions 
      bool hasAuth() const { return this->auth_ != nullptr;};
      void deleteAuth() { this->auth_ = nullptr;};
      inline const Connection::Auth & getAuth() const { DARABONBA_PTR_GET_CONST(auth_, Connection::Auth) };
      inline Connection::Auth getAuth() { DARABONBA_PTR_GET(auth_, Connection::Auth) };
      inline Connection& setAuth(const Connection::Auth & auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };
      inline Connection& setAuth(Connection::Auth && auth) { DARABONBA_PTR_SET_RVALUE(auth_, auth) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Connection& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Connection& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
      inline Connection& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      // transport Field Functions 
      bool hasTransport() const { return this->transport_ != nullptr;};
      void deleteTransport() { this->transport_ = nullptr;};
      inline string getTransport() const { DARABONBA_PTR_GET_DEFAULT(transport_, "") };
      inline Connection& setTransport(string transport) { DARABONBA_PTR_SET_VALUE(transport_, transport) };


    protected:
      shared_ptr<Connection::Auth> auth_ {};
      // This parameter is required.
      shared_ptr<string> endpoint_ {};
      shared_ptr<string> platform_ {};
      shared_ptr<int64_t> timeout_ {};
      // This parameter is required.
      shared_ptr<string> transport_ {};
    };

    virtual bool empty() const override { return this->connection_ == nullptr
        && this->network_ == nullptr; };
    // connection Field Functions 
    bool hasConnection() const { return this->connection_ != nullptr;};
    void deleteConnection() { this->connection_ = nullptr;};
    inline const FetchRemoteMcpToolsRequest::Connection & getConnection() const { DARABONBA_PTR_GET_CONST(connection_, FetchRemoteMcpToolsRequest::Connection) };
    inline FetchRemoteMcpToolsRequest::Connection getConnection() { DARABONBA_PTR_GET(connection_, FetchRemoteMcpToolsRequest::Connection) };
    inline FetchRemoteMcpToolsRequest& setConnection(const FetchRemoteMcpToolsRequest::Connection & connection) { DARABONBA_PTR_SET_VALUE(connection_, connection) };
    inline FetchRemoteMcpToolsRequest& setConnection(FetchRemoteMcpToolsRequest::Connection && connection) { DARABONBA_PTR_SET_RVALUE(connection_, connection) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const FetchRemoteMcpToolsRequest::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, FetchRemoteMcpToolsRequest::Network) };
    inline FetchRemoteMcpToolsRequest::Network getNetwork() { DARABONBA_PTR_GET(network_, FetchRemoteMcpToolsRequest::Network) };
    inline FetchRemoteMcpToolsRequest& setNetwork(const FetchRemoteMcpToolsRequest::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline FetchRemoteMcpToolsRequest& setNetwork(FetchRemoteMcpToolsRequest::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


  protected:
    // This parameter is required.
    shared_ptr<FetchRemoteMcpToolsRequest::Connection> connection_ {};
    shared_ptr<FetchRemoteMcpToolsRequest::Network> network_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
