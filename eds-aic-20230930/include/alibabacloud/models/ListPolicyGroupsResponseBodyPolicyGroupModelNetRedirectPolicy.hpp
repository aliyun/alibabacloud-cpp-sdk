// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYGROUPSRESPONSEBODYPOLICYGROUPMODELNETREDIRECTPOLICY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYGROUPSRESPONSEBODYPOLICYGROUPMODELNETREDIRECTPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicyRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(CustomProxy, customProxy_);
      DARABONBA_PTR_TO_JSON(HostAddr, hostAddr_);
      DARABONBA_PTR_TO_JSON(NetRedirect, netRedirect_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ProxyPassword, proxyPassword_);
      DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
      DARABONBA_PTR_TO_JSON(ProxyUserName, proxyUserName_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomProxy, customProxy_);
      DARABONBA_PTR_FROM_JSON(HostAddr, hostAddr_);
      DARABONBA_PTR_FROM_JSON(NetRedirect, netRedirect_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ProxyPassword, proxyPassword_);
      DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
      DARABONBA_PTR_FROM_JSON(ProxyUserName, proxyUserName_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy() = default ;
    ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy(const ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy &) = default ;
    ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy(ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy &&) = default ;
    ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy() = default ;
    ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy& operator=(const ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy &) = default ;
    ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy& operator=(ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customProxy_ == nullptr
        && return this->hostAddr_ == nullptr && return this->netRedirect_ == nullptr && return this->port_ == nullptr && return this->proxyPassword_ == nullptr && return this->proxyType_ == nullptr
        && return this->proxyUserName_ == nullptr && return this->rules_ == nullptr; };
    // customProxy Field Functions 
    bool hasCustomProxy() const { return this->customProxy_ != nullptr;};
    void deleteCustomProxy() { this->customProxy_ = nullptr;};
    inline string customProxy() const { DARABONBA_PTR_GET_DEFAULT(customProxy_, "") };
    inline ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy& setCustomProxy(string customProxy) { DARABONBA_PTR_SET_VALUE(customProxy_, customProxy) };


    // hostAddr Field Functions 
    bool hasHostAddr() const { return this->hostAddr_ != nullptr;};
    void deleteHostAddr() { this->hostAddr_ = nullptr;};
    inline string hostAddr() const { DARABONBA_PTR_GET_DEFAULT(hostAddr_, "") };
    inline ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy& setHostAddr(string hostAddr) { DARABONBA_PTR_SET_VALUE(hostAddr_, hostAddr) };


    // netRedirect Field Functions 
    bool hasNetRedirect() const { return this->netRedirect_ != nullptr;};
    void deleteNetRedirect() { this->netRedirect_ = nullptr;};
    inline string netRedirect() const { DARABONBA_PTR_GET_DEFAULT(netRedirect_, "") };
    inline ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy& setNetRedirect(string netRedirect) { DARABONBA_PTR_SET_VALUE(netRedirect_, netRedirect) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // proxyPassword Field Functions 
    bool hasProxyPassword() const { return this->proxyPassword_ != nullptr;};
    void deleteProxyPassword() { this->proxyPassword_ = nullptr;};
    inline string proxyPassword() const { DARABONBA_PTR_GET_DEFAULT(proxyPassword_, "") };
    inline ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy& setProxyPassword(string proxyPassword) { DARABONBA_PTR_SET_VALUE(proxyPassword_, proxyPassword) };


    // proxyType Field Functions 
    bool hasProxyType() const { return this->proxyType_ != nullptr;};
    void deleteProxyType() { this->proxyType_ = nullptr;};
    inline string proxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
    inline ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


    // proxyUserName Field Functions 
    bool hasProxyUserName() const { return this->proxyUserName_ != nullptr;};
    void deleteProxyUserName() { this->proxyUserName_ = nullptr;};
    inline string proxyUserName() const { DARABONBA_PTR_GET_DEFAULT(proxyUserName_, "") };
    inline ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy& setProxyUserName(string proxyUserName) { DARABONBA_PTR_SET_VALUE(proxyUserName_, proxyUserName) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicyRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicyRules>) };
    inline vector<Models::ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicyRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicyRules>) };
    inline ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy& setRules(const vector<Models::ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicyRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy& setRules(vector<Models::ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicyRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // Indicates whether a custom proxy is manually configured.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> customProxy_ = nullptr;
    // The IPv4 address of the custom proxy.
    std::shared_ptr<string> hostAddr_ = nullptr;
    // Indicates whether the network redirection feature is enabled. When this feature is enabled, network traffic is automatically redirected to the on-premises network by default.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> netRedirect_ = nullptr;
    // The port of the custom proxy. Valid values: 1 to 65535.
    std::shared_ptr<string> port_ = nullptr;
    // The password of the proxy. The password must be 1 to 256 in length and cannot contain Chinese character or space characters.
    std::shared_ptr<string> proxyPassword_ = nullptr;
    // The type of the proxy protocol.
    // 
    // Valid values:
    // 
    // *   socks5.
    std::shared_ptr<string> proxyType_ = nullptr;
    // The username of the proxy. The name must be 1 to 256 in length and cannot contain Chinese character or space characters.
    std::shared_ptr<string> proxyUserName_ = nullptr;
    // The proxy rules.
    std::shared_ptr<vector<Models::ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicyRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
