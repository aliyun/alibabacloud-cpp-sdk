// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICECONFIG_HPP_
#define ALIBABACLOUD_MODELS_SERVICECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AiServiceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ServiceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServiceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(aiServiceConfig, aiServiceConfig_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ServiceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(aiServiceConfig, aiServiceConfig_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ServiceConfig() = default ;
    ServiceConfig(const ServiceConfig &) = default ;
    ServiceConfig(ServiceConfig &&) = default ;
    ServiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServiceConfig() = default ;
    ServiceConfig& operator=(const ServiceConfig &) = default ;
    ServiceConfig& operator=(ServiceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiServiceConfig_ == nullptr
        && return this->name_ == nullptr; };
    // aiServiceConfig Field Functions 
    bool hasAiServiceConfig() const { return this->aiServiceConfig_ != nullptr;};
    void deleteAiServiceConfig() { this->aiServiceConfig_ = nullptr;};
    inline const AiServiceConfig & aiServiceConfig() const { DARABONBA_PTR_GET_CONST(aiServiceConfig_, AiServiceConfig) };
    inline AiServiceConfig aiServiceConfig() { DARABONBA_PTR_GET(aiServiceConfig_, AiServiceConfig) };
    inline ServiceConfig& setAiServiceConfig(const AiServiceConfig & aiServiceConfig) { DARABONBA_PTR_SET_VALUE(aiServiceConfig_, aiServiceConfig) };
    inline ServiceConfig& setAiServiceConfig(AiServiceConfig && aiServiceConfig) { DARABONBA_PTR_SET_RVALUE(aiServiceConfig_, aiServiceConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ServiceConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<AiServiceConfig> aiServiceConfig_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
