// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GATEWAYLOGCONFIGSLSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GATEWAYLOGCONFIGSLSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GatewayLogConfigSlsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GatewayLogConfigSlsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, GatewayLogConfigSlsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
    };
    GatewayLogConfigSlsConfig() = default ;
    GatewayLogConfigSlsConfig(const GatewayLogConfigSlsConfig &) = default ;
    GatewayLogConfigSlsConfig(GatewayLogConfigSlsConfig &&) = default ;
    GatewayLogConfigSlsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GatewayLogConfigSlsConfig() = default ;
    GatewayLogConfigSlsConfig& operator=(const GatewayLogConfigSlsConfig &) = default ;
    GatewayLogConfigSlsConfig& operator=(GatewayLogConfigSlsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GatewayLogConfigSlsConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
