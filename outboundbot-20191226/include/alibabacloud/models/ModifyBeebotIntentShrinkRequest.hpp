// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyBeebotIntentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBeebotIntentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentDefinition, intentDefinitionShrink_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBeebotIntentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentDefinition, intentDefinitionShrink_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    ModifyBeebotIntentShrinkRequest() = default ;
    ModifyBeebotIntentShrinkRequest(const ModifyBeebotIntentShrinkRequest &) = default ;
    ModifyBeebotIntentShrinkRequest(ModifyBeebotIntentShrinkRequest &&) = default ;
    ModifyBeebotIntentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBeebotIntentShrinkRequest() = default ;
    ModifyBeebotIntentShrinkRequest& operator=(const ModifyBeebotIntentShrinkRequest &) = default ;
    ModifyBeebotIntentShrinkRequest& operator=(ModifyBeebotIntentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->intentDefinitionShrink_ == nullptr && return this->intentId_ == nullptr && return this->scriptId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyBeebotIntentShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentDefinitionShrink Field Functions 
    bool hasIntentDefinitionShrink() const { return this->intentDefinitionShrink_ != nullptr;};
    void deleteIntentDefinitionShrink() { this->intentDefinitionShrink_ = nullptr;};
    inline string intentDefinitionShrink() const { DARABONBA_PTR_GET_DEFAULT(intentDefinitionShrink_, "") };
    inline ModifyBeebotIntentShrinkRequest& setIntentDefinitionShrink(string intentDefinitionShrink) { DARABONBA_PTR_SET_VALUE(intentDefinitionShrink_, intentDefinitionShrink) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline ModifyBeebotIntentShrinkRequest& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ModifyBeebotIntentShrinkRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> intentDefinitionShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> intentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
