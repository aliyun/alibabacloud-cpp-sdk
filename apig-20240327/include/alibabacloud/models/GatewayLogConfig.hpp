// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GATEWAYLOGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GATEWAYLOGCONFIG_HPP_
#include <darabonba/Core.hpp>
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
    class SlsConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlsConfig& obj) { 
        DARABONBA_PTR_TO_JSON(enable, enable_);
      };
      friend void from_json(const Darabonba::Json& j, SlsConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(enable, enable_);
      };
      SlsConfig() = default ;
      SlsConfig(const SlsConfig &) = default ;
      SlsConfig(SlsConfig &&) = default ;
      SlsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlsConfig() = default ;
      SlsConfig& operator=(const SlsConfig &) = default ;
      SlsConfig& operator=(SlsConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enable_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline SlsConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    protected:
      shared_ptr<bool> enable_ {};
    };

    virtual bool empty() const override { return this->slsConfig_ == nullptr; };
    // slsConfig Field Functions 
    bool hasSlsConfig() const { return this->slsConfig_ != nullptr;};
    void deleteSlsConfig() { this->slsConfig_ = nullptr;};
    inline const GatewayLogConfig::SlsConfig & getSlsConfig() const { DARABONBA_PTR_GET_CONST(slsConfig_, GatewayLogConfig::SlsConfig) };
    inline GatewayLogConfig::SlsConfig getSlsConfig() { DARABONBA_PTR_GET(slsConfig_, GatewayLogConfig::SlsConfig) };
    inline GatewayLogConfig& setSlsConfig(const GatewayLogConfig::SlsConfig & slsConfig) { DARABONBA_PTR_SET_VALUE(slsConfig_, slsConfig) };
    inline GatewayLogConfig& setSlsConfig(GatewayLogConfig::SlsConfig && slsConfig) { DARABONBA_PTR_SET_RVALUE(slsConfig_, slsConfig) };


  protected:
    shared_ptr<GatewayLogConfig::SlsConfig> slsConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
