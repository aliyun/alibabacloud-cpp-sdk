// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKDOMAINSRESPONSEBODYNETWORKDOMAINSPROXIESSTATE_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKDOMAINSRESPONSEBODYNETWORKDOMAINSPROXIESSTATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListNetworkDomainsResponseBodyNetworkDomainsProxiesState : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkDomainsResponseBodyNetworkDomainsProxiesState& obj) { 
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(ProxyState, proxyState_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkDomainsResponseBodyNetworkDomainsProxiesState& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(ProxyState, proxyState_);
    };
    ListNetworkDomainsResponseBodyNetworkDomainsProxiesState() = default ;
    ListNetworkDomainsResponseBodyNetworkDomainsProxiesState(const ListNetworkDomainsResponseBodyNetworkDomainsProxiesState &) = default ;
    ListNetworkDomainsResponseBodyNetworkDomainsProxiesState(ListNetworkDomainsResponseBodyNetworkDomainsProxiesState &&) = default ;
    ListNetworkDomainsResponseBodyNetworkDomainsProxiesState(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkDomainsResponseBodyNetworkDomainsProxiesState() = default ;
    ListNetworkDomainsResponseBodyNetworkDomainsProxiesState& operator=(const ListNetworkDomainsResponseBodyNetworkDomainsProxiesState &) = default ;
    ListNetworkDomainsResponseBodyNetworkDomainsProxiesState& operator=(ListNetworkDomainsResponseBodyNetworkDomainsProxiesState &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeType_ == nullptr
        && return this->proxyState_ == nullptr; };
    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ListNetworkDomainsResponseBodyNetworkDomainsProxiesState& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // proxyState Field Functions 
    bool hasProxyState() const { return this->proxyState_ != nullptr;};
    void deleteProxyState() { this->proxyState_ = nullptr;};
    inline string proxyState() const { DARABONBA_PTR_GET_DEFAULT(proxyState_, "") };
    inline ListNetworkDomainsResponseBodyNetworkDomainsProxiesState& setProxyState(string proxyState) { DARABONBA_PTR_SET_VALUE(proxyState_, proxyState) };


  protected:
    // The node type of the proxy server. Valid values:
    // 
    // *   **Master**: primary proxy server.
    // *   **Slave**: secondary proxy server.
    std::shared_ptr<string> nodeType_ = nullptr;
    // The status of the proxy server.
    // 
    // *   **Available**
    // *   **Unavailable**
    std::shared_ptr<string> proxyState_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
