// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GATEWAYLOGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GATEWAYLOGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GatewayLogConfigSlsConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GatewayLogConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GatewayLogConfig& obj) { 
      DARABONBA_PTR_TO_JSON(slsConfig, slsConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GatewayLogConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(slsConfig, slsConfig_);
    };
    GatewayLogConfig() = default ;
    GatewayLogConfig(const GatewayLogConfig &) = default ;
    GatewayLogConfig(GatewayLogConfig &&) = default ;
    GatewayLogConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GatewayLogConfig() = default ;
    GatewayLogConfig& operator=(const GatewayLogConfig &) = default ;
    GatewayLogConfig& operator=(GatewayLogConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slsConfig_ == nullptr; };
    // slsConfig Field Functions 
    bool hasSlsConfig() const { return this->slsConfig_ != nullptr;};
    void deleteSlsConfig() { this->slsConfig_ = nullptr;};
    inline const GatewayLogConfigSlsConfig & slsConfig() const { DARABONBA_PTR_GET_CONST(slsConfig_, GatewayLogConfigSlsConfig) };
    inline GatewayLogConfigSlsConfig slsConfig() { DARABONBA_PTR_GET(slsConfig_, GatewayLogConfigSlsConfig) };
    inline GatewayLogConfig& setSlsConfig(const GatewayLogConfigSlsConfig & slsConfig) { DARABONBA_PTR_SET_VALUE(slsConfig_, slsConfig) };
    inline GatewayLogConfig& setSlsConfig(GatewayLogConfigSlsConfig && slsConfig) { DARABONBA_PTR_SET_RVALUE(slsConfig_, slsConfig) };


  protected:
    std::shared_ptr<GatewayLogConfigSlsConfig> slsConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
