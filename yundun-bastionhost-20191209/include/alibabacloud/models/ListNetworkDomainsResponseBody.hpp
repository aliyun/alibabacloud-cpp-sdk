// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKDOMAINSRESPONSEBODY_HPP_
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
  class ListNetworkDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkDomains, networkDomains_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkDomains, networkDomains_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNetworkDomainsResponseBody() = default ;
    ListNetworkDomainsResponseBody(const ListNetworkDomainsResponseBody &) = default ;
    ListNetworkDomainsResponseBody(ListNetworkDomainsResponseBody &&) = default ;
    ListNetworkDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkDomainsResponseBody() = default ;
    ListNetworkDomainsResponseBody& operator=(const ListNetworkDomainsResponseBody &) = default ;
    ListNetworkDomainsResponseBody& operator=(ListNetworkDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkDomains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkDomains& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(Default, default_);
        DARABONBA_PTR_TO_JSON(NetworkDomainId, networkDomainId_);
        DARABONBA_PTR_TO_JSON(NetworkDomainName, networkDomainName_);
        DARABONBA_PTR_TO_JSON(NetworkDomainType, networkDomainType_);
        DARABONBA_PTR_TO_JSON(ProxiesState, proxiesState_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkDomains& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(Default, default_);
        DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
        DARABONBA_PTR_FROM_JSON(NetworkDomainName, networkDomainName_);
        DARABONBA_PTR_FROM_JSON(NetworkDomainType, networkDomainType_);
        DARABONBA_PTR_FROM_JSON(ProxiesState, proxiesState_);
      };
      NetworkDomains() = default ;
      NetworkDomains(const NetworkDomains &) = default ;
      NetworkDomains(NetworkDomains &&) = default ;
      NetworkDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkDomains() = default ;
      NetworkDomains& operator=(const NetworkDomains &) = default ;
      NetworkDomains& operator=(NetworkDomains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProxiesState : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProxiesState& obj) { 
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(ProxyState, proxyState_);
        };
        friend void from_json(const Darabonba::Json& j, ProxiesState& obj) { 
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(ProxyState, proxyState_);
        };
        ProxiesState() = default ;
        ProxiesState(const ProxiesState &) = default ;
        ProxiesState(ProxiesState &&) = default ;
        ProxiesState(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProxiesState() = default ;
        ProxiesState& operator=(const ProxiesState &) = default ;
        ProxiesState& operator=(ProxiesState &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->nodeType_ == nullptr
        && this->proxyState_ == nullptr; };
        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline ProxiesState& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // proxyState Field Functions 
        bool hasProxyState() const { return this->proxyState_ != nullptr;};
        void deleteProxyState() { this->proxyState_ = nullptr;};
        inline string getProxyState() const { DARABONBA_PTR_GET_DEFAULT(proxyState_, "") };
        inline ProxiesState& setProxyState(string proxyState) { DARABONBA_PTR_SET_VALUE(proxyState_, proxyState) };


      protected:
        // The node type of the proxy server. Valid values:
        // 
        // *   **Master**: primary proxy server.
        // *   **Slave**: secondary proxy server.
        shared_ptr<string> nodeType_ {};
        // The status of the proxy server.
        // 
        // *   **Available**
        // *   **Unavailable**
        shared_ptr<string> proxyState_ {};
      };

      virtual bool empty() const override { return this->comment_ == nullptr
        && this->default_ == nullptr && this->networkDomainId_ == nullptr && this->networkDomainName_ == nullptr && this->networkDomainType_ == nullptr && this->proxiesState_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline NetworkDomains& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // default Field Functions 
      bool hasDefault() const { return this->default_ != nullptr;};
      void deleteDefault() { this->default_ = nullptr;};
      inline bool getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, false) };
      inline NetworkDomains& setDefault(bool _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


      // networkDomainId Field Functions 
      bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
      void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
      inline string getNetworkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
      inline NetworkDomains& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


      // networkDomainName Field Functions 
      bool hasNetworkDomainName() const { return this->networkDomainName_ != nullptr;};
      void deleteNetworkDomainName() { this->networkDomainName_ = nullptr;};
      inline string getNetworkDomainName() const { DARABONBA_PTR_GET_DEFAULT(networkDomainName_, "") };
      inline NetworkDomains& setNetworkDomainName(string networkDomainName) { DARABONBA_PTR_SET_VALUE(networkDomainName_, networkDomainName) };


      // networkDomainType Field Functions 
      bool hasNetworkDomainType() const { return this->networkDomainType_ != nullptr;};
      void deleteNetworkDomainType() { this->networkDomainType_ = nullptr;};
      inline string getNetworkDomainType() const { DARABONBA_PTR_GET_DEFAULT(networkDomainType_, "") };
      inline NetworkDomains& setNetworkDomainType(string networkDomainType) { DARABONBA_PTR_SET_VALUE(networkDomainType_, networkDomainType) };


      // proxiesState Field Functions 
      bool hasProxiesState() const { return this->proxiesState_ != nullptr;};
      void deleteProxiesState() { this->proxiesState_ = nullptr;};
      inline const vector<NetworkDomains::ProxiesState> & getProxiesState() const { DARABONBA_PTR_GET_CONST(proxiesState_, vector<NetworkDomains::ProxiesState>) };
      inline vector<NetworkDomains::ProxiesState> getProxiesState() { DARABONBA_PTR_GET(proxiesState_, vector<NetworkDomains::ProxiesState>) };
      inline NetworkDomains& setProxiesState(const vector<NetworkDomains::ProxiesState> & proxiesState) { DARABONBA_PTR_SET_VALUE(proxiesState_, proxiesState) };
      inline NetworkDomains& setProxiesState(vector<NetworkDomains::ProxiesState> && proxiesState) { DARABONBA_PTR_SET_RVALUE(proxiesState_, proxiesState) };


    protected:
      // The remarks of the network domain.
      shared_ptr<string> comment_ {};
      // Indicates whether the network domain is built-in.
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> default_ {};
      // The network domain ID.
      shared_ptr<string> networkDomainId_ {};
      // The name of the network domain.
      shared_ptr<string> networkDomainName_ {};
      // The connection mode of the network domain. Valid values:
      // 
      // *   **Direct**
      // *   **Proxy**
      shared_ptr<string> networkDomainType_ {};
      shared_ptr<vector<NetworkDomains::ProxiesState>> proxiesState_ {};
    };

    virtual bool empty() const override { return this->networkDomains_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // networkDomains Field Functions 
    bool hasNetworkDomains() const { return this->networkDomains_ != nullptr;};
    void deleteNetworkDomains() { this->networkDomains_ = nullptr;};
    inline const vector<ListNetworkDomainsResponseBody::NetworkDomains> & getNetworkDomains() const { DARABONBA_PTR_GET_CONST(networkDomains_, vector<ListNetworkDomainsResponseBody::NetworkDomains>) };
    inline vector<ListNetworkDomainsResponseBody::NetworkDomains> getNetworkDomains() { DARABONBA_PTR_GET(networkDomains_, vector<ListNetworkDomainsResponseBody::NetworkDomains>) };
    inline ListNetworkDomainsResponseBody& setNetworkDomains(const vector<ListNetworkDomainsResponseBody::NetworkDomains> & networkDomains) { DARABONBA_PTR_SET_VALUE(networkDomains_, networkDomains) };
    inline ListNetworkDomainsResponseBody& setNetworkDomains(vector<ListNetworkDomainsResponseBody::NetworkDomains> && networkDomains) { DARABONBA_PTR_SET_RVALUE(networkDomains_, networkDomains) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNetworkDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListNetworkDomainsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The network domains that are returned.
    shared_ptr<vector<ListNetworkDomainsResponseBody::NetworkDomains>> networkDomains_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of network domains that are returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
