// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTHTTPTRIGGER_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTHTTPTRIGGER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeployCustomContainerInputHttpTriggerTriggerConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployCustomContainerInputHttpTrigger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployCustomContainerInputHttpTrigger& obj) { 
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(triggerConfig, triggerConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DeployCustomContainerInputHttpTrigger& obj) { 
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(triggerConfig, triggerConfig_);
    };
    DeployCustomContainerInputHttpTrigger() = default ;
    DeployCustomContainerInputHttpTrigger(const DeployCustomContainerInputHttpTrigger &) = default ;
    DeployCustomContainerInputHttpTrigger(DeployCustomContainerInputHttpTrigger &&) = default ;
    DeployCustomContainerInputHttpTrigger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployCustomContainerInputHttpTrigger() = default ;
    DeployCustomContainerInputHttpTrigger& operator=(const DeployCustomContainerInputHttpTrigger &) = default ;
    DeployCustomContainerInputHttpTrigger& operator=(DeployCustomContainerInputHttpTrigger &&) = default ;
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
    inline DeployCustomContainerInputHttpTrigger& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline const Models::DeployCustomContainerInputHttpTriggerTriggerConfig & triggerConfig() const { DARABONBA_PTR_GET_CONST(triggerConfig_, Models::DeployCustomContainerInputHttpTriggerTriggerConfig) };
    inline Models::DeployCustomContainerInputHttpTriggerTriggerConfig triggerConfig() { DARABONBA_PTR_GET(triggerConfig_, Models::DeployCustomContainerInputHttpTriggerTriggerConfig) };
    inline DeployCustomContainerInputHttpTrigger& setTriggerConfig(const Models::DeployCustomContainerInputHttpTriggerTriggerConfig & triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };
    inline DeployCustomContainerInputHttpTrigger& setTriggerConfig(Models::DeployCustomContainerInputHttpTriggerTriggerConfig && triggerConfig) { DARABONBA_PTR_SET_RVALUE(triggerConfig_, triggerConfig) };


  protected:
    std::shared_ptr<string> qualifier_ = nullptr;
    std::shared_ptr<Models::DeployCustomContainerInputHttpTriggerTriggerConfig> triggerConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
