// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKDOMAINSRESPONSEBODYNETWORKDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKDOMAINSRESPONSEBODYNETWORKDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNetworkDomainsResponseBodyNetworkDomainsProxiesState.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListNetworkDomainsResponseBodyNetworkDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkDomainsResponseBodyNetworkDomains& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Default, default_);
      DARABONBA_PTR_TO_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_TO_JSON(NetworkDomainName, networkDomainName_);
      DARABONBA_PTR_TO_JSON(NetworkDomainType, networkDomainType_);
      DARABONBA_PTR_TO_JSON(ProxiesState, proxiesState_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkDomainsResponseBodyNetworkDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Default, default_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainName, networkDomainName_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainType, networkDomainType_);
      DARABONBA_PTR_FROM_JSON(ProxiesState, proxiesState_);
    };
    ListNetworkDomainsResponseBodyNetworkDomains() = default ;
    ListNetworkDomainsResponseBodyNetworkDomains(const ListNetworkDomainsResponseBodyNetworkDomains &) = default ;
    ListNetworkDomainsResponseBodyNetworkDomains(ListNetworkDomainsResponseBodyNetworkDomains &&) = default ;
    ListNetworkDomainsResponseBodyNetworkDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkDomainsResponseBodyNetworkDomains() = default ;
    ListNetworkDomainsResponseBodyNetworkDomains& operator=(const ListNetworkDomainsResponseBodyNetworkDomains &) = default ;
    ListNetworkDomainsResponseBodyNetworkDomains& operator=(ListNetworkDomainsResponseBodyNetworkDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->default_ == nullptr && return this->networkDomainId_ == nullptr && return this->networkDomainName_ == nullptr && return this->networkDomainType_ == nullptr && return this->proxiesState_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListNetworkDomainsResponseBodyNetworkDomains& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // default Field Functions 
    bool hasDefault() const { return this->default_ != nullptr;};
    void deleteDefault() { this->default_ = nullptr;};
    inline bool _default() const { DARABONBA_PTR_GET_DEFAULT(default_, false) };
    inline ListNetworkDomainsResponseBodyNetworkDomains& setDefault(bool _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


    // networkDomainId Field Functions 
    bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
    void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
    inline string networkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
    inline ListNetworkDomainsResponseBodyNetworkDomains& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


    // networkDomainName Field Functions 
    bool hasNetworkDomainName() const { return this->networkDomainName_ != nullptr;};
    void deleteNetworkDomainName() { this->networkDomainName_ = nullptr;};
    inline string networkDomainName() const { DARABONBA_PTR_GET_DEFAULT(networkDomainName_, "") };
    inline ListNetworkDomainsResponseBodyNetworkDomains& setNetworkDomainName(string networkDomainName) { DARABONBA_PTR_SET_VALUE(networkDomainName_, networkDomainName) };


    // networkDomainType Field Functions 
    bool hasNetworkDomainType() const { return this->networkDomainType_ != nullptr;};
    void deleteNetworkDomainType() { this->networkDomainType_ = nullptr;};
    inline string networkDomainType() const { DARABONBA_PTR_GET_DEFAULT(networkDomainType_, "") };
    inline ListNetworkDomainsResponseBodyNetworkDomains& setNetworkDomainType(string networkDomainType) { DARABONBA_PTR_SET_VALUE(networkDomainType_, networkDomainType) };


    // proxiesState Field Functions 
    bool hasProxiesState() const { return this->proxiesState_ != nullptr;};
    void deleteProxiesState() { this->proxiesState_ = nullptr;};
    inline const vector<Models::ListNetworkDomainsResponseBodyNetworkDomainsProxiesState> & proxiesState() const { DARABONBA_PTR_GET_CONST(proxiesState_, vector<Models::ListNetworkDomainsResponseBodyNetworkDomainsProxiesState>) };
    inline vector<Models::ListNetworkDomainsResponseBodyNetworkDomainsProxiesState> proxiesState() { DARABONBA_PTR_GET(proxiesState_, vector<Models::ListNetworkDomainsResponseBodyNetworkDomainsProxiesState>) };
    inline ListNetworkDomainsResponseBodyNetworkDomains& setProxiesState(const vector<Models::ListNetworkDomainsResponseBodyNetworkDomainsProxiesState> & proxiesState) { DARABONBA_PTR_SET_VALUE(proxiesState_, proxiesState) };
    inline ListNetworkDomainsResponseBodyNetworkDomains& setProxiesState(vector<Models::ListNetworkDomainsResponseBodyNetworkDomainsProxiesState> && proxiesState) { DARABONBA_PTR_SET_RVALUE(proxiesState_, proxiesState) };


  protected:
    // The remarks of the network domain.
    std::shared_ptr<string> comment_ = nullptr;
    // Indicates whether the network domain is built-in.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> default_ = nullptr;
    // The network domain ID.
    std::shared_ptr<string> networkDomainId_ = nullptr;
    // The name of the network domain.
    std::shared_ptr<string> networkDomainName_ = nullptr;
    // The connection mode of the network domain. Valid values:
    // 
    // *   **Direct**
    // *   **Proxy**
    std::shared_ptr<string> networkDomainType_ = nullptr;
    std::shared_ptr<vector<Models::ListNetworkDomainsResponseBodyNetworkDomainsProxiesState>> proxiesState_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
