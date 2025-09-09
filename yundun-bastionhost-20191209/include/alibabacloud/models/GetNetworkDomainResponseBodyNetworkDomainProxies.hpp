// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKDOMAINRESPONSEBODYNETWORKDOMAINPROXIES_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKDOMAINRESPONSEBODYNETWORKDOMAINPROXIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetNetworkDomainResponseBodyNetworkDomainProxies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkDomainResponseBodyNetworkDomainProxies& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(HasPassword, hasPassword_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ProxyState, proxyState_);
      DARABONBA_PTR_TO_JSON(ProxyStateErrorCode, proxyStateErrorCode_);
      DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkDomainResponseBodyNetworkDomainProxies& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(HasPassword, hasPassword_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ProxyState, proxyState_);
      DARABONBA_PTR_FROM_JSON(ProxyStateErrorCode, proxyStateErrorCode_);
      DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    GetNetworkDomainResponseBodyNetworkDomainProxies() = default ;
    GetNetworkDomainResponseBodyNetworkDomainProxies(const GetNetworkDomainResponseBodyNetworkDomainProxies &) = default ;
    GetNetworkDomainResponseBodyNetworkDomainProxies(GetNetworkDomainResponseBodyNetworkDomainProxies &&) = default ;
    GetNetworkDomainResponseBodyNetworkDomainProxies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkDomainResponseBodyNetworkDomainProxies() = default ;
    GetNetworkDomainResponseBodyNetworkDomainProxies& operator=(const GetNetworkDomainResponseBodyNetworkDomainProxies &) = default ;
    GetNetworkDomainResponseBodyNetworkDomainProxies& operator=(GetNetworkDomainResponseBodyNetworkDomainProxies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->hasPassword_ != nullptr && this->nodeType_ != nullptr && this->port_ != nullptr && this->proxyState_ != nullptr && this->proxyStateErrorCode_ != nullptr
        && this->proxyType_ != nullptr && this->user_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline GetNetworkDomainResponseBodyNetworkDomainProxies& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // hasPassword Field Functions 
    bool hasHasPassword() const { return this->hasPassword_ != nullptr;};
    void deleteHasPassword() { this->hasPassword_ = nullptr;};
    inline bool hasPassword() const { DARABONBA_PTR_GET_DEFAULT(hasPassword_, false) };
    inline GetNetworkDomainResponseBodyNetworkDomainProxies& setHasPassword(bool hasPassword) { DARABONBA_PTR_SET_VALUE(hasPassword_, hasPassword) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline GetNetworkDomainResponseBodyNetworkDomainProxies& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GetNetworkDomainResponseBodyNetworkDomainProxies& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // proxyState Field Functions 
    bool hasProxyState() const { return this->proxyState_ != nullptr;};
    void deleteProxyState() { this->proxyState_ = nullptr;};
    inline string proxyState() const { DARABONBA_PTR_GET_DEFAULT(proxyState_, "") };
    inline GetNetworkDomainResponseBodyNetworkDomainProxies& setProxyState(string proxyState) { DARABONBA_PTR_SET_VALUE(proxyState_, proxyState) };


    // proxyStateErrorCode Field Functions 
    bool hasProxyStateErrorCode() const { return this->proxyStateErrorCode_ != nullptr;};
    void deleteProxyStateErrorCode() { this->proxyStateErrorCode_ = nullptr;};
    inline string proxyStateErrorCode() const { DARABONBA_PTR_GET_DEFAULT(proxyStateErrorCode_, "") };
    inline GetNetworkDomainResponseBodyNetworkDomainProxies& setProxyStateErrorCode(string proxyStateErrorCode) { DARABONBA_PTR_SET_VALUE(proxyStateErrorCode_, proxyStateErrorCode) };


    // proxyType Field Functions 
    bool hasProxyType() const { return this->proxyType_ != nullptr;};
    void deleteProxyType() { this->proxyType_ = nullptr;};
    inline string proxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
    inline GetNetworkDomainResponseBodyNetworkDomainProxies& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline GetNetworkDomainResponseBodyNetworkDomainProxies& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The IP address of the proxy server.
    std::shared_ptr<string> address_ = nullptr;
    // Indicates whether the proxy server has a password. Valid values:
    // 
    // - **true**
    // - **false**
    std::shared_ptr<bool> hasPassword_ = nullptr;
    // The node type of the proxy server. Valid values:
    // - **Master**: primary proxy server.
    // - **Slave**: secondary proxy server.
    std::shared_ptr<string> nodeType_ = nullptr;
    // The port of the proxy server.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The status of the proxy server.
    // 
    // - **Available**
    // - **Unavailable**
    std::shared_ptr<string> proxyState_ = nullptr;
    // The error code that indicates the status of the proxy server.
    // 
    // - **CHECK_PWD_FAILED**: The password is invalid.
    // - **CHECK_PWD_TIMEOUT**: The password verification session timed out.
    // - **CHECK_PWD_NETWORK_ERR**: A network error occurred.
    // - **UNEXPECTED**: An unknown error occurred.
    std::shared_ptr<string> proxyStateErrorCode_ = nullptr;
    // The proxy type. Valid values:
    // 
    // - **SSHProxy**
    // - **HTTPProxy**
    // - **Socks5Proxy**
    std::shared_ptr<string> proxyType_ = nullptr;
    // The username of the proxy server.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
