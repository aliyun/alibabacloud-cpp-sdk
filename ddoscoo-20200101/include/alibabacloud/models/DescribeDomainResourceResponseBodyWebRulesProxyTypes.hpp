// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESOURCERESPONSEBODYWEBRULESPROXYTYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESOURCERESPONSEBODYWEBRULESPROXYTYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainResourceResponseBodyWebRulesProxyTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainResourceResponseBodyWebRulesProxyTypes& obj) { 
      DARABONBA_PTR_TO_JSON(ProxyPorts, proxyPorts_);
      DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainResourceResponseBodyWebRulesProxyTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(ProxyPorts, proxyPorts_);
      DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
    };
    DescribeDomainResourceResponseBodyWebRulesProxyTypes() = default ;
    DescribeDomainResourceResponseBodyWebRulesProxyTypes(const DescribeDomainResourceResponseBodyWebRulesProxyTypes &) = default ;
    DescribeDomainResourceResponseBodyWebRulesProxyTypes(DescribeDomainResourceResponseBodyWebRulesProxyTypes &&) = default ;
    DescribeDomainResourceResponseBodyWebRulesProxyTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainResourceResponseBodyWebRulesProxyTypes() = default ;
    DescribeDomainResourceResponseBodyWebRulesProxyTypes& operator=(const DescribeDomainResourceResponseBodyWebRulesProxyTypes &) = default ;
    DescribeDomainResourceResponseBodyWebRulesProxyTypes& operator=(DescribeDomainResourceResponseBodyWebRulesProxyTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->proxyPorts_ != nullptr
        && this->proxyType_ != nullptr; };
    // proxyPorts Field Functions 
    bool hasProxyPorts() const { return this->proxyPorts_ != nullptr;};
    void deleteProxyPorts() { this->proxyPorts_ = nullptr;};
    inline const vector<string> & proxyPorts() const { DARABONBA_PTR_GET_CONST(proxyPorts_, vector<string>) };
    inline vector<string> proxyPorts() { DARABONBA_PTR_GET(proxyPorts_, vector<string>) };
    inline DescribeDomainResourceResponseBodyWebRulesProxyTypes& setProxyPorts(const vector<string> & proxyPorts) { DARABONBA_PTR_SET_VALUE(proxyPorts_, proxyPorts) };
    inline DescribeDomainResourceResponseBodyWebRulesProxyTypes& setProxyPorts(vector<string> && proxyPorts) { DARABONBA_PTR_SET_RVALUE(proxyPorts_, proxyPorts) };


    // proxyType Field Functions 
    bool hasProxyType() const { return this->proxyType_ != nullptr;};
    void deleteProxyType() { this->proxyType_ = nullptr;};
    inline string proxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
    inline DescribeDomainResourceResponseBodyWebRulesProxyTypes& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


  protected:
    // The port numbers.
    std::shared_ptr<vector<string>> proxyPorts_ = nullptr;
    // The type of the protocol. Valid values:
    // 
    // *   **http**
    // *   **https**
    // *   **websocket**
    // *   **websockets**
    std::shared_ptr<string> proxyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
