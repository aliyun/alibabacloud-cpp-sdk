// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRIGGERINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATETRIGGERINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CreateTriggerInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTriggerInput& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(invocationRole, invocationRole_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(sourceArn, sourceArn_);
      DARABONBA_PTR_TO_JSON(triggerConfig, triggerConfig_);
      DARABONBA_PTR_TO_JSON(triggerName, triggerName_);
      DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTriggerInput& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(invocationRole, invocationRole_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(sourceArn, sourceArn_);
      DARABONBA_PTR_FROM_JSON(triggerConfig, triggerConfig_);
      DARABONBA_PTR_FROM_JSON(triggerName, triggerName_);
      DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
    };
    CreateTriggerInput() = default ;
    CreateTriggerInput(const CreateTriggerInput &) = default ;
    CreateTriggerInput(CreateTriggerInput &&) = default ;
    CreateTriggerInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTriggerInput() = default ;
    CreateTriggerInput& operator=(const CreateTriggerInput &) = default ;
    CreateTriggerInput& operator=(CreateTriggerInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->invocationRole_ != nullptr && this->qualifier_ != nullptr && this->sourceArn_ != nullptr && this->triggerConfig_ != nullptr && this->triggerName_ != nullptr
        && this->triggerType_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTriggerInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // invocationRole Field Functions 
    bool hasInvocationRole() const { return this->invocationRole_ != nullptr;};
    void deleteInvocationRole() { this->invocationRole_ = nullptr;};
    inline string invocationRole() const { DARABONBA_PTR_GET_DEFAULT(invocationRole_, "") };
    inline CreateTriggerInput& setInvocationRole(string invocationRole) { DARABONBA_PTR_SET_VALUE(invocationRole_, invocationRole) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline CreateTriggerInput& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // sourceArn Field Functions 
    bool hasSourceArn() const { return this->sourceArn_ != nullptr;};
    void deleteSourceArn() { this->sourceArn_ = nullptr;};
    inline string sourceArn() const { DARABONBA_PTR_GET_DEFAULT(sourceArn_, "") };
    inline CreateTriggerInput& setSourceArn(string sourceArn) { DARABONBA_PTR_SET_VALUE(sourceArn_, sourceArn) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline string triggerConfig() const { DARABONBA_PTR_GET_DEFAULT(triggerConfig_, "") };
    inline CreateTriggerInput& setTriggerConfig(string triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };


    // triggerName Field Functions 
    bool hasTriggerName() const { return this->triggerName_ != nullptr;};
    void deleteTriggerName() { this->triggerName_ = nullptr;};
    inline string triggerName() const { DARABONBA_PTR_GET_DEFAULT(triggerName_, "") };
    inline CreateTriggerInput& setTriggerName(string triggerName) { DARABONBA_PTR_SET_VALUE(triggerName_, triggerName) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline CreateTriggerInput& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> invocationRole_ = nullptr;
    std::shared_ptr<string> qualifier_ = nullptr;
    std::shared_ptr<string> sourceArn_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> triggerConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> triggerName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> triggerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
