// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYOLLAMAMODELINPUTHTTPTRIGGER_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYOLLAMAMODELINPUTHTTPTRIGGER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeployOllamaModelInputHttpTriggerTriggerConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployOllamaModelInputHttpTrigger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployOllamaModelInputHttpTrigger& obj) { 
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(triggerConfig, triggerConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DeployOllamaModelInputHttpTrigger& obj) { 
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(triggerConfig, triggerConfig_);
    };
    DeployOllamaModelInputHttpTrigger() = default ;
    DeployOllamaModelInputHttpTrigger(const DeployOllamaModelInputHttpTrigger &) = default ;
    DeployOllamaModelInputHttpTrigger(DeployOllamaModelInputHttpTrigger &&) = default ;
    DeployOllamaModelInputHttpTrigger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployOllamaModelInputHttpTrigger() = default ;
    DeployOllamaModelInputHttpTrigger& operator=(const DeployOllamaModelInputHttpTrigger &) = default ;
    DeployOllamaModelInputHttpTrigger& operator=(DeployOllamaModelInputHttpTrigger &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->qualifier_ != nullptr
        && this->triggerConfig_ != nullptr; };
    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline DeployOllamaModelInputHttpTrigger& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline const Models::DeployOllamaModelInputHttpTriggerTriggerConfig & triggerConfig() const { DARABONBA_PTR_GET_CONST(triggerConfig_, Models::DeployOllamaModelInputHttpTriggerTriggerConfig) };
    inline Models::DeployOllamaModelInputHttpTriggerTriggerConfig triggerConfig() { DARABONBA_PTR_GET(triggerConfig_, Models::DeployOllamaModelInputHttpTriggerTriggerConfig) };
    inline DeployOllamaModelInputHttpTrigger& setTriggerConfig(const Models::DeployOllamaModelInputHttpTriggerTriggerConfig & triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };
    inline DeployOllamaModelInputHttpTrigger& setTriggerConfig(Models::DeployOllamaModelInputHttpTriggerTriggerConfig && triggerConfig) { DARABONBA_PTR_SET_RVALUE(triggerConfig_, triggerConfig) };


  protected:
    std::shared_ptr<string> qualifier_ = nullptr;
    std::shared_ptr<Models::DeployOllamaModelInputHttpTriggerTriggerConfig> triggerConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
