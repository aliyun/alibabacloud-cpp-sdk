// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTLGFSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTLGFSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateBeebotIntentLgfShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBeebotIntentLgfShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LgfDefinition, lgfDefinitionShrink_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBeebotIntentLgfShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LgfDefinition, lgfDefinitionShrink_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    CreateBeebotIntentLgfShrinkRequest() = default ;
    CreateBeebotIntentLgfShrinkRequest(const CreateBeebotIntentLgfShrinkRequest &) = default ;
    CreateBeebotIntentLgfShrinkRequest(CreateBeebotIntentLgfShrinkRequest &&) = default ;
    CreateBeebotIntentLgfShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBeebotIntentLgfShrinkRequest() = default ;
    CreateBeebotIntentLgfShrinkRequest& operator=(const CreateBeebotIntentLgfShrinkRequest &) = default ;
    CreateBeebotIntentLgfShrinkRequest& operator=(CreateBeebotIntentLgfShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->lgfDefinitionShrink_ == nullptr && this->scriptId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBeebotIntentLgfShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lgfDefinitionShrink Field Functions 
    bool hasLgfDefinitionShrink() const { return this->lgfDefinitionShrink_ != nullptr;};
    void deleteLgfDefinitionShrink() { this->lgfDefinitionShrink_ = nullptr;};
    inline string getLgfDefinitionShrink() const { DARABONBA_PTR_GET_DEFAULT(lgfDefinitionShrink_, "") };
    inline CreateBeebotIntentLgfShrinkRequest& setLgfDefinitionShrink(string lgfDefinitionShrink) { DARABONBA_PTR_SET_VALUE(lgfDefinitionShrink_, lgfDefinitionShrink) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateBeebotIntentLgfShrinkRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> lgfDefinitionShrink_ {};
    // This parameter is required.
    shared_ptr<string> scriptId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
