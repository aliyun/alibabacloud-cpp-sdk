// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRIGGERINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRIGGERINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class UpdateTriggerInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTriggerInput& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(invocationRole, invocationRole_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(triggerConfig, triggerConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTriggerInput& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(invocationRole, invocationRole_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(triggerConfig, triggerConfig_);
    };
    UpdateTriggerInput() = default ;
    UpdateTriggerInput(const UpdateTriggerInput &) = default ;
    UpdateTriggerInput(UpdateTriggerInput &&) = default ;
    UpdateTriggerInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTriggerInput() = default ;
    UpdateTriggerInput& operator=(const UpdateTriggerInput &) = default ;
    UpdateTriggerInput& operator=(UpdateTriggerInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->invocationRole_ == nullptr && this->qualifier_ == nullptr && this->triggerConfig_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTriggerInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // invocationRole Field Functions 
    bool hasInvocationRole() const { return this->invocationRole_ != nullptr;};
    void deleteInvocationRole() { this->invocationRole_ = nullptr;};
    inline string getInvocationRole() const { DARABONBA_PTR_GET_DEFAULT(invocationRole_, "") };
    inline UpdateTriggerInput& setInvocationRole(string invocationRole) { DARABONBA_PTR_SET_VALUE(invocationRole_, invocationRole) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline UpdateTriggerInput& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline string getTriggerConfig() const { DARABONBA_PTR_GET_DEFAULT(triggerConfig_, "") };
    inline UpdateTriggerInput& setTriggerConfig(string triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> invocationRole_ {};
    shared_ptr<string> qualifier_ {};
    shared_ptr<string> triggerConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
