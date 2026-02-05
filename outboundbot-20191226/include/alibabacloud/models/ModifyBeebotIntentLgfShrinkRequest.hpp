// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTLGFSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTLGFSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyBeebotIntentLgfShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBeebotIntentLgfShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LgfDefinition, lgfDefinitionShrink_);
      DARABONBA_PTR_TO_JSON(LgfId, lgfId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBeebotIntentLgfShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LgfDefinition, lgfDefinitionShrink_);
      DARABONBA_PTR_FROM_JSON(LgfId, lgfId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    ModifyBeebotIntentLgfShrinkRequest() = default ;
    ModifyBeebotIntentLgfShrinkRequest(const ModifyBeebotIntentLgfShrinkRequest &) = default ;
    ModifyBeebotIntentLgfShrinkRequest(ModifyBeebotIntentLgfShrinkRequest &&) = default ;
    ModifyBeebotIntentLgfShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBeebotIntentLgfShrinkRequest() = default ;
    ModifyBeebotIntentLgfShrinkRequest& operator=(const ModifyBeebotIntentLgfShrinkRequest &) = default ;
    ModifyBeebotIntentLgfShrinkRequest& operator=(ModifyBeebotIntentLgfShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->lgfDefinitionShrink_ == nullptr && this->lgfId_ == nullptr && this->scriptId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyBeebotIntentLgfShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lgfDefinitionShrink Field Functions 
    bool hasLgfDefinitionShrink() const { return this->lgfDefinitionShrink_ != nullptr;};
    void deleteLgfDefinitionShrink() { this->lgfDefinitionShrink_ = nullptr;};
    inline string getLgfDefinitionShrink() const { DARABONBA_PTR_GET_DEFAULT(lgfDefinitionShrink_, "") };
    inline ModifyBeebotIntentLgfShrinkRequest& setLgfDefinitionShrink(string lgfDefinitionShrink) { DARABONBA_PTR_SET_VALUE(lgfDefinitionShrink_, lgfDefinitionShrink) };


    // lgfId Field Functions 
    bool hasLgfId() const { return this->lgfId_ != nullptr;};
    void deleteLgfId() { this->lgfId_ = nullptr;};
    inline int64_t getLgfId() const { DARABONBA_PTR_GET_DEFAULT(lgfId_, 0L) };
    inline ModifyBeebotIntentLgfShrinkRequest& setLgfId(int64_t lgfId) { DARABONBA_PTR_SET_VALUE(lgfId_, lgfId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ModifyBeebotIntentLgfShrinkRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> lgfDefinitionShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> lgfId_ {};
    // This parameter is required.
    shared_ptr<string> scriptId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
