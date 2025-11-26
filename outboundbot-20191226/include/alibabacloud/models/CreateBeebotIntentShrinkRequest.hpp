// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateBeebotIntentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBeebotIntentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentDefinition, intentDefinitionShrink_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBeebotIntentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentDefinition, intentDefinitionShrink_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    CreateBeebotIntentShrinkRequest() = default ;
    CreateBeebotIntentShrinkRequest(const CreateBeebotIntentShrinkRequest &) = default ;
    CreateBeebotIntentShrinkRequest(CreateBeebotIntentShrinkRequest &&) = default ;
    CreateBeebotIntentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBeebotIntentShrinkRequest() = default ;
    CreateBeebotIntentShrinkRequest& operator=(const CreateBeebotIntentShrinkRequest &) = default ;
    CreateBeebotIntentShrinkRequest& operator=(CreateBeebotIntentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->intentDefinitionShrink_ == nullptr && return this->scriptId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBeebotIntentShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentDefinitionShrink Field Functions 
    bool hasIntentDefinitionShrink() const { return this->intentDefinitionShrink_ != nullptr;};
    void deleteIntentDefinitionShrink() { this->intentDefinitionShrink_ = nullptr;};
    inline string intentDefinitionShrink() const { DARABONBA_PTR_GET_DEFAULT(intentDefinitionShrink_, "") };
    inline CreateBeebotIntentShrinkRequest& setIntentDefinitionShrink(string intentDefinitionShrink) { DARABONBA_PTR_SET_VALUE(intentDefinitionShrink_, intentDefinitionShrink) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateBeebotIntentShrinkRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> intentDefinitionShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
