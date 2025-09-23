// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLAYER7CUSTOMPORTSRESPONSEBODYLAYER7CUSTOMPORTS_HPP_
#define ALIBABACLOUD_MODELS_LISTLAYER7CUSTOMPORTSRESPONSEBODYLAYER7CUSTOMPORTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class ListLayer7CustomPortsResponseBodyLayer7CustomPorts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLayer7CustomPortsResponseBodyLayer7CustomPorts& obj) { 
      DARABONBA_PTR_TO_JSON(Flag, flag_);
      DARABONBA_PTR_TO_JSON(ProxyPorts, proxyPorts_);
      DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
    };
    friend void from_json(const Darabonba::Json& j, ListLayer7CustomPortsResponseBodyLayer7CustomPorts& obj) { 
      DARABONBA_PTR_FROM_JSON(Flag, flag_);
      DARABONBA_PTR_FROM_JSON(ProxyPorts, proxyPorts_);
      DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
    };
    ListLayer7CustomPortsResponseBodyLayer7CustomPorts() = default ;
    ListLayer7CustomPortsResponseBodyLayer7CustomPorts(const ListLayer7CustomPortsResponseBodyLayer7CustomPorts &) = default ;
    ListLayer7CustomPortsResponseBodyLayer7CustomPorts(ListLayer7CustomPortsResponseBodyLayer7CustomPorts &&) = default ;
    ListLayer7CustomPortsResponseBodyLayer7CustomPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLayer7CustomPortsResponseBodyLayer7CustomPorts() = default ;
    ListLayer7CustomPortsResponseBodyLayer7CustomPorts& operator=(const ListLayer7CustomPortsResponseBodyLayer7CustomPorts &) = default ;
    ListLayer7CustomPortsResponseBodyLayer7CustomPorts& operator=(ListLayer7CustomPortsResponseBodyLayer7CustomPorts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flag_ != nullptr
        && this->proxyPorts_ != nullptr && this->proxyType_ != nullptr; };
    // flag Field Functions 
    bool hasFlag() const { return this->flag_ != nullptr;};
    void deleteFlag() { this->flag_ = nullptr;};
    inline string flag() const { DARABONBA_PTR_GET_DEFAULT(flag_, "") };
    inline ListLayer7CustomPortsResponseBodyLayer7CustomPorts& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


    // proxyPorts Field Functions 
    bool hasProxyPorts() const { return this->proxyPorts_ != nullptr;};
    void deleteProxyPorts() { this->proxyPorts_ = nullptr;};
    inline const vector<string> & proxyPorts() const { DARABONBA_PTR_GET_CONST(proxyPorts_, vector<string>) };
    inline vector<string> proxyPorts() { DARABONBA_PTR_GET(proxyPorts_, vector<string>) };
    inline ListLayer7CustomPortsResponseBodyLayer7CustomPorts& setProxyPorts(const vector<string> & proxyPorts) { DARABONBA_PTR_SET_VALUE(proxyPorts_, proxyPorts) };
    inline ListLayer7CustomPortsResponseBodyLayer7CustomPorts& setProxyPorts(vector<string> && proxyPorts) { DARABONBA_PTR_SET_RVALUE(proxyPorts_, proxyPorts) };


    // proxyType Field Functions 
    bool hasProxyType() const { return this->proxyType_ != nullptr;};
    void deleteProxyType() { this->proxyType_ = nullptr;};
    inline string proxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
    inline ListLayer7CustomPortsResponseBodyLayer7CustomPorts& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


  protected:
    std::shared_ptr<string> flag_ = nullptr;
    std::shared_ptr<vector<string>> proxyPorts_ = nullptr;
    std::shared_ptr<string> proxyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
