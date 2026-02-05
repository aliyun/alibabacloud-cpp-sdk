// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTUSERSAYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTUSERSAYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyBeebotIntentUserSayShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBeebotIntentUserSayShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(UserSayDefinition, userSayDefinitionShrink_);
      DARABONBA_PTR_TO_JSON(UserSayId, userSayId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBeebotIntentUserSayShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(UserSayDefinition, userSayDefinitionShrink_);
      DARABONBA_PTR_FROM_JSON(UserSayId, userSayId_);
    };
    ModifyBeebotIntentUserSayShrinkRequest() = default ;
    ModifyBeebotIntentUserSayShrinkRequest(const ModifyBeebotIntentUserSayShrinkRequest &) = default ;
    ModifyBeebotIntentUserSayShrinkRequest(ModifyBeebotIntentUserSayShrinkRequest &&) = default ;
    ModifyBeebotIntentUserSayShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBeebotIntentUserSayShrinkRequest() = default ;
    ModifyBeebotIntentUserSayShrinkRequest& operator=(const ModifyBeebotIntentUserSayShrinkRequest &) = default ;
    ModifyBeebotIntentUserSayShrinkRequest& operator=(ModifyBeebotIntentUserSayShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->scriptId_ == nullptr && this->userSayDefinitionShrink_ == nullptr && this->userSayId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyBeebotIntentUserSayShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ModifyBeebotIntentUserSayShrinkRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // userSayDefinitionShrink Field Functions 
    bool hasUserSayDefinitionShrink() const { return this->userSayDefinitionShrink_ != nullptr;};
    void deleteUserSayDefinitionShrink() { this->userSayDefinitionShrink_ = nullptr;};
    inline string getUserSayDefinitionShrink() const { DARABONBA_PTR_GET_DEFAULT(userSayDefinitionShrink_, "") };
    inline ModifyBeebotIntentUserSayShrinkRequest& setUserSayDefinitionShrink(string userSayDefinitionShrink) { DARABONBA_PTR_SET_VALUE(userSayDefinitionShrink_, userSayDefinitionShrink) };


    // userSayId Field Functions 
    bool hasUserSayId() const { return this->userSayId_ != nullptr;};
    void deleteUserSayId() { this->userSayId_ = nullptr;};
    inline string getUserSayId() const { DARABONBA_PTR_GET_DEFAULT(userSayId_, "") };
    inline ModifyBeebotIntentUserSayShrinkRequest& setUserSayId(string userSayId) { DARABONBA_PTR_SET_VALUE(userSayId_, userSayId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> scriptId_ {};
    // This parameter is required.
    shared_ptr<string> userSayDefinitionShrink_ {};
    // This parameter is required.
    shared_ptr<string> userSayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
