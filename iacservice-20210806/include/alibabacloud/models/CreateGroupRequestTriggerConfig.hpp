// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPREQUESTTRIGGERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPREQUESTTRIGGERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class CreateGroupRequestTriggerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupRequestTriggerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(triggerStrategy, triggerStrategy_);
      DARABONBA_PTR_TO_JSON(triggerValue, triggerValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupRequestTriggerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(triggerStrategy, triggerStrategy_);
      DARABONBA_PTR_FROM_JSON(triggerValue, triggerValue_);
    };
    CreateGroupRequestTriggerConfig() = default ;
    CreateGroupRequestTriggerConfig(const CreateGroupRequestTriggerConfig &) = default ;
    CreateGroupRequestTriggerConfig(CreateGroupRequestTriggerConfig &&) = default ;
    CreateGroupRequestTriggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupRequestTriggerConfig() = default ;
    CreateGroupRequestTriggerConfig& operator=(const CreateGroupRequestTriggerConfig &) = default ;
    CreateGroupRequestTriggerConfig& operator=(CreateGroupRequestTriggerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->triggerStrategy_ == nullptr
        && return this->triggerValue_ == nullptr; };
    // triggerStrategy Field Functions 
    bool hasTriggerStrategy() const { return this->triggerStrategy_ != nullptr;};
    void deleteTriggerStrategy() { this->triggerStrategy_ = nullptr;};
    inline string triggerStrategy() const { DARABONBA_PTR_GET_DEFAULT(triggerStrategy_, "") };
    inline CreateGroupRequestTriggerConfig& setTriggerStrategy(string triggerStrategy) { DARABONBA_PTR_SET_VALUE(triggerStrategy_, triggerStrategy) };


    // triggerValue Field Functions 
    bool hasTriggerValue() const { return this->triggerValue_ != nullptr;};
    void deleteTriggerValue() { this->triggerValue_ = nullptr;};
    inline string triggerValue() const { DARABONBA_PTR_GET_DEFAULT(triggerValue_, "") };
    inline CreateGroupRequestTriggerConfig& setTriggerValue(string triggerValue) { DARABONBA_PTR_SET_VALUE(triggerValue_, triggerValue) };


  protected:
    std::shared_ptr<string> triggerStrategy_ = nullptr;
    std::shared_ptr<string> triggerValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
