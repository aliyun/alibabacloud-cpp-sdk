// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetNetworkDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkDomain, networkDomain_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkDomain, networkDomain_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNetworkDomainResponseBody() = default ;
    GetNetworkDomainResponseBody(const GetNetworkDomainResponseBody &) = default ;
    GetNetworkDomainResponseBody(GetNetworkDomainResponseBody &&) = default ;
    GetNetworkDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkDomainResponseBody() = default ;
    GetNetworkDomainResponseBody& operator=(const GetNetworkDomainResponseBody &) = default ;
    GetNetworkDomainResponseBody& operator=(GetNetworkDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkDomain : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkDomain& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(Default, default_);
        DARABONBA_PTR_TO_JSON(NetworkDomainId, networkDomainId_);
        DARABONBA_PTR_TO_JSON(NetworkDomainName, networkDomainName_);
        DARABONBA_PTR_TO_JSON(NetworkDomainType, networkDomainType_);
        DARABONBA_PTR_TO_JSON(Proxies, proxies_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkDomain& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(Default, default_);
        DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
        DARABONBA_PTR_FROM_JSON(NetworkDomainName, networkDomainName_);
        DARABONBA_PTR_FROM_JSON(NetworkDomainType, networkDomainType_);
        DARABONBA_PTR_FROM_JSON(Proxies, proxies_);
      };
      NetworkDomain() = default ;
      NetworkDomain(const NetworkDomain &) = default ;
      NetworkDomain(NetworkDomain &&) = default ;
      NetworkDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkDomain() = default ;
      NetworkDomain& operator=(const NetworkDomain &) = default ;
      NetworkDomain& operator=(NetworkDomain &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Proxies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Proxies& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(HasPassword, hasPassword_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(ProxyState, proxyState_);
          DARABONBA_PTR_TO_JSON(ProxyStateErrorCode, proxyStateErrorCode_);
          DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
          DARABONBA_PTR_TO_JSON(User, user_);
        };
        friend void from_json(const Darabonba::Json& j, Proxies& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(HasPassword, hasPassword_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(ProxyState, proxyState_);
          DARABONBA_PTR_FROM_JSON(ProxyStateErrorCode, proxyStateErrorCode_);
          DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
          DARABONBA_PTR_FROM_JSON(User, user_);
        };
        Proxies() = default ;
        Proxies(const Proxies &) = default ;
        Proxies(Proxies &&) = default ;
        Proxies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Proxies() = default ;
        Proxies& operator=(const Proxies &) = default ;
        Proxies& operator=(Proxies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->hasPassword_ == nullptr && this->nodeType_ == nullptr && this->port_ == nullptr && this->proxyState_ == nullptr && this->proxyStateErrorCode_ == nullptr
        && this->proxyType_ == nullptr && this->user_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline Proxies& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // hasPassword Field Functions 
        bool hasHasPassword() const { return this->hasPassword_ != nullptr;};
        void deleteHasPassword() { this->hasPassword_ = nullptr;};
        inline bool getHasPassword() const { DARABONBA_PTR_GET_DEFAULT(hasPassword_, false) };
        inline Proxies& setHasPassword(bool hasPassword) { DARABONBA_PTR_SET_VALUE(hasPassword_, hasPassword) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline Proxies& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline Proxies& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // proxyState Field Functions 
        bool hasProxyState() const { return this->proxyState_ != nullptr;};
        void deleteProxyState() { this->proxyState_ = nullptr;};
        inline string getProxyState() const { DARABONBA_PTR_GET_DEFAULT(proxyState_, "") };
        inline Proxies& setProxyState(string proxyState) { DARABONBA_PTR_SET_VALUE(proxyState_, proxyState) };


        // proxyStateErrorCode Field Functions 
        bool hasProxyStateErrorCode() const { return this->proxyStateErrorCode_ != nullptr;};
        void deleteProxyStateErrorCode() { this->proxyStateErrorCode_ = nullptr;};
        inline string getProxyStateErrorCode() const { DARABONBA_PTR_GET_DEFAULT(proxyStateErrorCode_, "") };
        inline Proxies& setProxyStateErrorCode(string proxyStateErrorCode) { DARABONBA_PTR_SET_VALUE(proxyStateErrorCode_, proxyStateErrorCode) };


        // proxyType Field Functions 
        bool hasProxyType() const { return this->proxyType_ != nullptr;};
        void deleteProxyType() { this->proxyType_ = nullptr;};
        inline string getProxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
        inline Proxies& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


        // user Field Functions 
        bool hasUser() const { return this->user_ != nullptr;};
        void deleteUser() { this->user_ = nullptr;};
        inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
        inline Proxies& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      protected:
        // The IP address of the proxy server.
        shared_ptr<string> address_ {};
        // Indicates whether the proxy server has a password. Valid values:
        // 
        // - **true**
        // - **false**
        shared_ptr<bool> hasPassword_ {};
        // The node type of the proxy server. Valid values:
        // - **Master**: primary proxy server.
        // - **Slave**: secondary proxy server.
        shared_ptr<string> nodeType_ {};
        // The port of the proxy server.
        shared_ptr<int32_t> port_ {};
        // The status of the proxy server.
        // 
        // - **Available**
        // - **Unavailable**
        shared_ptr<string> proxyState_ {};
        // The error code that indicates the status of the proxy server.
        // 
        // - **CHECK_PWD_FAILED**: The password is invalid.
        // - **CHECK_PWD_TIMEOUT**: The password verification session timed out.
        // - **CHECK_PWD_NETWORK_ERR**: A network error occurred.
        // - **UNEXPECTED**: An unknown error occurred.
        shared_ptr<string> proxyStateErrorCode_ {};
        // The proxy type. Valid values:
        // 
        // - **SSHProxy**
        // - **HTTPProxy**
        // - **Socks5Proxy**
        shared_ptr<string> proxyType_ {};
        // The username of the proxy server.
        shared_ptr<string> user_ {};
      };

      virtual bool empty() const override { return this->comment_ == nullptr
        && this->default_ == nullptr && this->networkDomainId_ == nullptr && this->networkDomainName_ == nullptr && this->networkDomainType_ == nullptr && this->proxies_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline NetworkDomain& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // default Field Functions 
      bool hasDefault() const { return this->default_ != nullptr;};
      void deleteDefault() { this->default_ = nullptr;};
      inline bool getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, false) };
      inline NetworkDomain& setDefault(bool _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


      // networkDomainId Field Functions 
      bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
      void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
      inline string getNetworkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
      inline NetworkDomain& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


      // networkDomainName Field Functions 
      bool hasNetworkDomainName() const { return this->networkDomainName_ != nullptr;};
      void deleteNetworkDomainName() { this->networkDomainName_ = nullptr;};
      inline string getNetworkDomainName() const { DARABONBA_PTR_GET_DEFAULT(networkDomainName_, "") };
      inline NetworkDomain& setNetworkDomainName(string networkDomainName) { DARABONBA_PTR_SET_VALUE(networkDomainName_, networkDomainName) };


      // networkDomainType Field Functions 
      bool hasNetworkDomainType() const { return this->networkDomainType_ != nullptr;};
      void deleteNetworkDomainType() { this->networkDomainType_ = nullptr;};
      inline string getNetworkDomainType() const { DARABONBA_PTR_GET_DEFAULT(networkDomainType_, "") };
      inline NetworkDomain& setNetworkDomainType(string networkDomainType) { DARABONBA_PTR_SET_VALUE(networkDomainType_, networkDomainType) };


      // proxies Field Functions 
      bool hasProxies() const { return this->proxies_ != nullptr;};
      void deleteProxies() { this->proxies_ = nullptr;};
      inline const vector<NetworkDomain::Proxies> & getProxies() const { DARABONBA_PTR_GET_CONST(proxies_, vector<NetworkDomain::Proxies>) };
      inline vector<NetworkDomain::Proxies> getProxies() { DARABONBA_PTR_GET(proxies_, vector<NetworkDomain::Proxies>) };
      inline NetworkDomain& setProxies(const vector<NetworkDomain::Proxies> & proxies) { DARABONBA_PTR_SET_VALUE(proxies_, proxies) };
      inline NetworkDomain& setProxies(vector<NetworkDomain::Proxies> && proxies) { DARABONBA_PTR_SET_RVALUE(proxies_, proxies) };


    protected:
      // The remarks of the network domain.
      shared_ptr<string> comment_ {};
      // Indicates whether the network domain is a built-in network domain.
      // 
      // * **true**
      // * **false**
      shared_ptr<bool> default_ {};
      // The network domain ID.
      shared_ptr<string> networkDomainId_ {};
      // The name of the network domain.
      shared_ptr<string> networkDomainName_ {};
      // The connection mode of the network domain. Valid values:
      // 
      // * Direct
      // * Proxy
      shared_ptr<string> networkDomainType_ {};
      // The information about the proxy servers.
      shared_ptr<vector<NetworkDomain::Proxies>> proxies_ {};
    };

    virtual bool empty() const override { return this->networkDomain_ == nullptr
        && this->requestId_ == nullptr; };
    // networkDomain Field Functions 
    bool hasNetworkDomain() const { return this->networkDomain_ != nullptr;};
    void deleteNetworkDomain() { this->networkDomain_ = nullptr;};
    inline const GetNetworkDomainResponseBody::NetworkDomain & getNetworkDomain() const { DARABONBA_PTR_GET_CONST(networkDomain_, GetNetworkDomainResponseBody::NetworkDomain) };
    inline GetNetworkDomainResponseBody::NetworkDomain getNetworkDomain() { DARABONBA_PTR_GET(networkDomain_, GetNetworkDomainResponseBody::NetworkDomain) };
    inline GetNetworkDomainResponseBody& setNetworkDomain(const GetNetworkDomainResponseBody::NetworkDomain & networkDomain) { DARABONBA_PTR_SET_VALUE(networkDomain_, networkDomain) };
    inline GetNetworkDomainResponseBody& setNetworkDomain(GetNetworkDomainResponseBody::NetworkDomain && networkDomain) { DARABONBA_PTR_SET_RVALUE(networkDomain_, networkDomain) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNetworkDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The detailed information about the network domain.
    shared_ptr<GetNetworkDomainResponseBody::NetworkDomain> networkDomain_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
