// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRACINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_TRACINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/JaegerConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class TracingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TracingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(jaegerConfig, jaegerConfig_);
      DARABONBA_ANY_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, TracingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(jaegerConfig, jaegerConfig_);
      DARABONBA_ANY_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    TracingConfig() = default ;
    TracingConfig(const TracingConfig &) = default ;
    TracingConfig(TracingConfig &&) = default ;
    TracingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TracingConfig() = default ;
    TracingConfig& operator=(const TracingConfig &) = default ;
    TracingConfig& operator=(TracingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jaegerConfig_ == nullptr
        && return this->params_ == nullptr && return this->type_ == nullptr; };
    // jaegerConfig Field Functions 
    bool hasJaegerConfig() const { return this->jaegerConfig_ != nullptr;};
    void deleteJaegerConfig() { this->jaegerConfig_ = nullptr;};
    inline const JaegerConfig & jaegerConfig() const { DARABONBA_PTR_GET_CONST(jaegerConfig_, JaegerConfig) };
    inline JaegerConfig jaegerConfig() { DARABONBA_PTR_GET(jaegerConfig_, JaegerConfig) };
    inline TracingConfig& setJaegerConfig(const JaegerConfig & jaegerConfig) { DARABONBA_PTR_SET_VALUE(jaegerConfig_, jaegerConfig) };
    inline TracingConfig& setJaegerConfig(JaegerConfig && jaegerConfig) { DARABONBA_PTR_SET_RVALUE(jaegerConfig_, jaegerConfig) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & params() const { DARABONBA_GET(params_) };
    Darabonba::Json & params() { DARABONBA_GET(params_) };
    inline TracingConfig& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline TracingConfig& setParams(Darabonba::Json & params) { DARABONBA_SET_RVALUE(params_, params) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline TracingConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<JaegerConfig> jaegerConfig_ = nullptr;
    Darabonba::Json params_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
