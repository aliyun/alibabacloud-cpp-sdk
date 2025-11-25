// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCUSTOMPORTSRESPONSEBODYWEBCUSTOMPORTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCUSTOMPORTSRESPONSEBODYWEBCUSTOMPORTS_HPP_
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
  class DescribeWebCustomPortsResponseBodyWebCustomPorts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCustomPortsResponseBodyWebCustomPorts& obj) { 
      DARABONBA_PTR_TO_JSON(ProxyPorts, proxyPorts_);
      DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCustomPortsResponseBodyWebCustomPorts& obj) { 
      DARABONBA_PTR_FROM_JSON(ProxyPorts, proxyPorts_);
      DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
    };
    DescribeWebCustomPortsResponseBodyWebCustomPorts() = default ;
    DescribeWebCustomPortsResponseBodyWebCustomPorts(const DescribeWebCustomPortsResponseBodyWebCustomPorts &) = default ;
    DescribeWebCustomPortsResponseBodyWebCustomPorts(DescribeWebCustomPortsResponseBodyWebCustomPorts &&) = default ;
    DescribeWebCustomPortsResponseBodyWebCustomPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCustomPortsResponseBodyWebCustomPorts() = default ;
    DescribeWebCustomPortsResponseBodyWebCustomPorts& operator=(const DescribeWebCustomPortsResponseBodyWebCustomPorts &) = default ;
    DescribeWebCustomPortsResponseBodyWebCustomPorts& operator=(DescribeWebCustomPortsResponseBodyWebCustomPorts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->proxyPorts_ == nullptr
        && return this->proxyType_ == nullptr; };
    // proxyPorts Field Functions 
    bool hasProxyPorts() const { return this->proxyPorts_ != nullptr;};
    void deleteProxyPorts() { this->proxyPorts_ = nullptr;};
    inline const vector<string> & proxyPorts() const { DARABONBA_PTR_GET_CONST(proxyPorts_, vector<string>) };
    inline vector<string> proxyPorts() { DARABONBA_PTR_GET(proxyPorts_, vector<string>) };
    inline DescribeWebCustomPortsResponseBodyWebCustomPorts& setProxyPorts(const vector<string> & proxyPorts) { DARABONBA_PTR_SET_VALUE(proxyPorts_, proxyPorts) };
    inline DescribeWebCustomPortsResponseBodyWebCustomPorts& setProxyPorts(vector<string> && proxyPorts) { DARABONBA_PTR_SET_RVALUE(proxyPorts_, proxyPorts) };


    // proxyType Field Functions 
    bool hasProxyType() const { return this->proxyType_ != nullptr;};
    void deleteProxyType() { this->proxyType_ = nullptr;};
    inline string proxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
    inline DescribeWebCustomPortsResponseBodyWebCustomPorts& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


  protected:
    // An array that consists of supported custom ports.
    std::shared_ptr<vector<string>> proxyPorts_ = nullptr;
    // The type of the protocol. Valid values:
    // 
    // *   **http**
    // *   **https**
    std::shared_ptr<string> proxyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
