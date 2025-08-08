// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYSGLANGMODELINPUTHTTPTRIGGER_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYSGLANGMODELINPUTHTTPTRIGGER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeploySGLangModelInputHttpTriggerTriggerConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeploySGLangModelInputHttpTrigger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploySGLangModelInputHttpTrigger& obj) { 
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(triggerConfig, triggerConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DeploySGLangModelInputHttpTrigger& obj) { 
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(triggerConfig, triggerConfig_);
    };
    DeploySGLangModelInputHttpTrigger() = default ;
    DeploySGLangModelInputHttpTrigger(const DeploySGLangModelInputHttpTrigger &) = default ;
    DeploySGLangModelInputHttpTrigger(DeploySGLangModelInputHttpTrigger &&) = default ;
    DeploySGLangModelInputHttpTrigger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploySGLangModelInputHttpTrigger() = default ;
    DeploySGLangModelInputHttpTrigger& operator=(const DeploySGLangModelInputHttpTrigger &) = default ;
    DeploySGLangModelInputHttpTrigger& operator=(DeploySGLangModelInputHttpTrigger &&) = default ;
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
    inline DeploySGLangModelInputHttpTrigger& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline const Models::DeploySGLangModelInputHttpTriggerTriggerConfig & triggerConfig() const { DARABONBA_PTR_GET_CONST(triggerConfig_, Models::DeploySGLangModelInputHttpTriggerTriggerConfig) };
    inline Models::DeploySGLangModelInputHttpTriggerTriggerConfig triggerConfig() { DARABONBA_PTR_GET(triggerConfig_, Models::DeploySGLangModelInputHttpTriggerTriggerConfig) };
    inline DeploySGLangModelInputHttpTrigger& setTriggerConfig(const Models::DeploySGLangModelInputHttpTriggerTriggerConfig & triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };
    inline DeploySGLangModelInputHttpTrigger& setTriggerConfig(Models::DeploySGLangModelInputHttpTriggerTriggerConfig && triggerConfig) { DARABONBA_PTR_SET_RVALUE(triggerConfig_, triggerConfig) };


  protected:
    std::shared_ptr<string> qualifier_ = nullptr;
    std::shared_ptr<Models::DeploySGLangModelInputHttpTriggerTriggerConfig> triggerConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
