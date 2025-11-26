// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTUSERSAYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTUSERSAYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateBeebotIntentUserSayShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBeebotIntentUserSayShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(UserSayDefinition, userSayDefinitionShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBeebotIntentUserSayShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(UserSayDefinition, userSayDefinitionShrink_);
    };
    CreateBeebotIntentUserSayShrinkRequest() = default ;
    CreateBeebotIntentUserSayShrinkRequest(const CreateBeebotIntentUserSayShrinkRequest &) = default ;
    CreateBeebotIntentUserSayShrinkRequest(CreateBeebotIntentUserSayShrinkRequest &&) = default ;
    CreateBeebotIntentUserSayShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBeebotIntentUserSayShrinkRequest() = default ;
    CreateBeebotIntentUserSayShrinkRequest& operator=(const CreateBeebotIntentUserSayShrinkRequest &) = default ;
    CreateBeebotIntentUserSayShrinkRequest& operator=(CreateBeebotIntentUserSayShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->scriptId_ == nullptr && return this->userSayDefinitionShrink_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBeebotIntentUserSayShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateBeebotIntentUserSayShrinkRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // userSayDefinitionShrink Field Functions 
    bool hasUserSayDefinitionShrink() const { return this->userSayDefinitionShrink_ != nullptr;};
    void deleteUserSayDefinitionShrink() { this->userSayDefinitionShrink_ = nullptr;};
    inline string userSayDefinitionShrink() const { DARABONBA_PTR_GET_DEFAULT(userSayDefinitionShrink_, "") };
    inline CreateBeebotIntentUserSayShrinkRequest& setUserSayDefinitionShrink(string userSayDefinitionShrink) { DARABONBA_PTR_SET_VALUE(userSayDefinitionShrink_, userSayDefinitionShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userSayDefinitionShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
