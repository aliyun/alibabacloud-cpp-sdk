// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNETWORKDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNETWORKDOMAINREQUEST_HPP_
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
  class ModifyNetworkDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNetworkDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_TO_JSON(NetworkDomainName, networkDomainName_);
      DARABONBA_PTR_TO_JSON(NetworkDomainType, networkDomainType_);
      DARABONBA_PTR_TO_JSON(Proxies, proxies_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNetworkDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainName, networkDomainName_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainType, networkDomainType_);
      DARABONBA_PTR_FROM_JSON(Proxies, proxies_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyNetworkDomainRequest() = default ;
    ModifyNetworkDomainRequest(const ModifyNetworkDomainRequest &) = default ;
    ModifyNetworkDomainRequest(ModifyNetworkDomainRequest &&) = default ;
    ModifyNetworkDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNetworkDomainRequest() = default ;
    ModifyNetworkDomainRequest& operator=(const ModifyNetworkDomainRequest &) = default ;
    ModifyNetworkDomainRequest& operator=(ModifyNetworkDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Proxies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Proxies& obj) { 
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, Proxies& obj) { 
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
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
        && this->nodeType_ == nullptr && this->password_ == nullptr && this->port_ == nullptr && this->proxyType_ == nullptr && this->user_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline Proxies& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline Proxies& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline Proxies& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Proxies& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


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
      // The new IP address of the proxy server.
      shared_ptr<string> address_ {};
      // The node type of the proxy server to modify. Valid values:
      // 
      // *   **Master**: primary proxy server.
      // *   **Slave**: secondary proxy server.
      shared_ptr<string> nodeType_ {};
      // The new password of the proxy server account.
      shared_ptr<string> password_ {};
      // The new port of the proxy server.
      shared_ptr<int32_t> port_ {};
      // The new proxy mode. Valid values:
      // 
      // *   **SSHProxy**
      // *   **HTTPProxy**
      // *   **Socks5Proxy**
      shared_ptr<string> proxyType_ {};
      // The new username of the proxy server account.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->comment_ == nullptr
        && this->instanceId_ == nullptr && this->networkDomainId_ == nullptr && this->networkDomainName_ == nullptr && this->networkDomainType_ == nullptr && this->proxies_ == nullptr
        && this->regionId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ModifyNetworkDomainRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyNetworkDomainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkDomainId Field Functions 
    bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
    void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
    inline string getNetworkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
    inline ModifyNetworkDomainRequest& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


    // networkDomainName Field Functions 
    bool hasNetworkDomainName() const { return this->networkDomainName_ != nullptr;};
    void deleteNetworkDomainName() { this->networkDomainName_ = nullptr;};
    inline string getNetworkDomainName() const { DARABONBA_PTR_GET_DEFAULT(networkDomainName_, "") };
    inline ModifyNetworkDomainRequest& setNetworkDomainName(string networkDomainName) { DARABONBA_PTR_SET_VALUE(networkDomainName_, networkDomainName) };


    // networkDomainType Field Functions 
    bool hasNetworkDomainType() const { return this->networkDomainType_ != nullptr;};
    void deleteNetworkDomainType() { this->networkDomainType_ = nullptr;};
    inline string getNetworkDomainType() const { DARABONBA_PTR_GET_DEFAULT(networkDomainType_, "") };
    inline ModifyNetworkDomainRequest& setNetworkDomainType(string networkDomainType) { DARABONBA_PTR_SET_VALUE(networkDomainType_, networkDomainType) };


    // proxies Field Functions 
    bool hasProxies() const { return this->proxies_ != nullptr;};
    void deleteProxies() { this->proxies_ = nullptr;};
    inline const vector<ModifyNetworkDomainRequest::Proxies> & getProxies() const { DARABONBA_PTR_GET_CONST(proxies_, vector<ModifyNetworkDomainRequest::Proxies>) };
    inline vector<ModifyNetworkDomainRequest::Proxies> getProxies() { DARABONBA_PTR_GET(proxies_, vector<ModifyNetworkDomainRequest::Proxies>) };
    inline ModifyNetworkDomainRequest& setProxies(const vector<ModifyNetworkDomainRequest::Proxies> & proxies) { DARABONBA_PTR_SET_VALUE(proxies_, proxies) };
    inline ModifyNetworkDomainRequest& setProxies(vector<ModifyNetworkDomainRequest::Proxies> && proxies) { DARABONBA_PTR_SET_RVALUE(proxies_, proxies) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyNetworkDomainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The new remarks of the network domain.
    shared_ptr<string> comment_ {};
    // The ID of the bastion host to which the network domain to modify belongs.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the network domain to modify.
    // 
    // This parameter is required.
    shared_ptr<string> networkDomainId_ {};
    // The new name of the network domain.
    shared_ptr<string> networkDomainName_ {};
    // The new connection mode of the network domain. Valid values:
    // 
    // *   **Direct**
    // *   **Proxy**
    shared_ptr<string> networkDomainType_ {};
    // The information about the proxy servers in the network domain.
    shared_ptr<vector<ModifyNetworkDomainRequest::Proxies>> proxies_ {};
    // The region ID of the bastion host to which the network domain to modify belongs.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
