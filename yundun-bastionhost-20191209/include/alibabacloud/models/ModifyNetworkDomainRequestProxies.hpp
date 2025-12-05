// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNETWORKDOMAINREQUESTPROXIES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNETWORKDOMAINREQUESTPROXIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyNetworkDomainRequestProxies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNetworkDomainRequestProxies& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNetworkDomainRequestProxies& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    ModifyNetworkDomainRequestProxies() = default ;
    ModifyNetworkDomainRequestProxies(const ModifyNetworkDomainRequestProxies &) = default ;
    ModifyNetworkDomainRequestProxies(ModifyNetworkDomainRequestProxies &&) = default ;
    ModifyNetworkDomainRequestProxies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNetworkDomainRequestProxies() = default ;
    ModifyNetworkDomainRequestProxies& operator=(const ModifyNetworkDomainRequestProxies &) = default ;
    ModifyNetworkDomainRequestProxies& operator=(ModifyNetworkDomainRequestProxies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->nodeType_ == nullptr && return this->password_ == nullptr && return this->port_ == nullptr && return this->proxyType_ == nullptr && return this->user_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ModifyNetworkDomainRequestProxies& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ModifyNetworkDomainRequestProxies& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyNetworkDomainRequestProxies& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ModifyNetworkDomainRequestProxies& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // proxyType Field Functions 
    bool hasProxyType() const { return this->proxyType_ != nullptr;};
    void deleteProxyType() { this->proxyType_ = nullptr;};
    inline string proxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
    inline ModifyNetworkDomainRequestProxies& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline ModifyNetworkDomainRequestProxies& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The new IP address of the proxy server.
    std::shared_ptr<string> address_ = nullptr;
    // The node type of the proxy server to modify. Valid values:
    // 
    // *   **Master**: primary proxy server.
    // *   **Slave**: secondary proxy server.
    std::shared_ptr<string> nodeType_ = nullptr;
    // The new password of the proxy server account.
    std::shared_ptr<string> password_ = nullptr;
    // The new port of the proxy server.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The new proxy mode. Valid values:
    // 
    // *   **SSHProxy**
    // *   **HTTPProxy**
    // *   **Socks5Proxy**
    std::shared_ptr<string> proxyType_ = nullptr;
    // The new username of the proxy server account.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
