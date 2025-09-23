// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGLAYER4RULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGLAYER4RULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConfigLayer4RuleRequestUsTimeout.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class ConfigLayer4RuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigLayer4RuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(ProxyEnable, proxyEnable_);
      DARABONBA_PTR_TO_JSON(UsTimeout, usTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigLayer4RuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(ProxyEnable, proxyEnable_);
      DARABONBA_PTR_FROM_JSON(UsTimeout, usTimeout_);
    };
    ConfigLayer4RuleRequest() = default ;
    ConfigLayer4RuleRequest(const ConfigLayer4RuleRequest &) = default ;
    ConfigLayer4RuleRequest(ConfigLayer4RuleRequest &&) = default ;
    ConfigLayer4RuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigLayer4RuleRequest() = default ;
    ConfigLayer4RuleRequest& operator=(const ConfigLayer4RuleRequest &) = default ;
    ConfigLayer4RuleRequest& operator=(ConfigLayer4RuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listeners_ != nullptr
        && this->proxyEnable_ != nullptr && this->usTimeout_ != nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline string listeners() const { DARABONBA_PTR_GET_DEFAULT(listeners_, "") };
    inline ConfigLayer4RuleRequest& setListeners(string listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };


    // proxyEnable Field Functions 
    bool hasProxyEnable() const { return this->proxyEnable_ != nullptr;};
    void deleteProxyEnable() { this->proxyEnable_ = nullptr;};
    inline int64_t proxyEnable() const { DARABONBA_PTR_GET_DEFAULT(proxyEnable_, 0L) };
    inline ConfigLayer4RuleRequest& setProxyEnable(int64_t proxyEnable) { DARABONBA_PTR_SET_VALUE(proxyEnable_, proxyEnable) };


    // usTimeout Field Functions 
    bool hasUsTimeout() const { return this->usTimeout_ != nullptr;};
    void deleteUsTimeout() { this->usTimeout_ = nullptr;};
    inline const ConfigLayer4RuleRequestUsTimeout & usTimeout() const { DARABONBA_PTR_GET_CONST(usTimeout_, ConfigLayer4RuleRequestUsTimeout) };
    inline ConfigLayer4RuleRequestUsTimeout usTimeout() { DARABONBA_PTR_GET(usTimeout_, ConfigLayer4RuleRequestUsTimeout) };
    inline ConfigLayer4RuleRequest& setUsTimeout(const ConfigLayer4RuleRequestUsTimeout & usTimeout) { DARABONBA_PTR_SET_VALUE(usTimeout_, usTimeout) };
    inline ConfigLayer4RuleRequest& setUsTimeout(ConfigLayer4RuleRequestUsTimeout && usTimeout) { DARABONBA_PTR_SET_RVALUE(usTimeout_, usTimeout) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> listeners_ = nullptr;
    std::shared_ptr<int64_t> proxyEnable_ = nullptr;
    std::shared_ptr<ConfigLayer4RuleRequestUsTimeout> usTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
