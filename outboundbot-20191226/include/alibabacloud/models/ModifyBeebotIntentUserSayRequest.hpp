// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTUSERSAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTUSERSAYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyBeebotIntentUserSayRequestUserSayDefinition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyBeebotIntentUserSayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBeebotIntentUserSayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(UserSayDefinition, userSayDefinition_);
      DARABONBA_PTR_TO_JSON(UserSayId, userSayId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBeebotIntentUserSayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(UserSayDefinition, userSayDefinition_);
      DARABONBA_PTR_FROM_JSON(UserSayId, userSayId_);
    };
    ModifyBeebotIntentUserSayRequest() = default ;
    ModifyBeebotIntentUserSayRequest(const ModifyBeebotIntentUserSayRequest &) = default ;
    ModifyBeebotIntentUserSayRequest(ModifyBeebotIntentUserSayRequest &&) = default ;
    ModifyBeebotIntentUserSayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBeebotIntentUserSayRequest() = default ;
    ModifyBeebotIntentUserSayRequest& operator=(const ModifyBeebotIntentUserSayRequest &) = default ;
    ModifyBeebotIntentUserSayRequest& operator=(ModifyBeebotIntentUserSayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->scriptId_ == nullptr && return this->userSayDefinition_ == nullptr && return this->userSayId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyBeebotIntentUserSayRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ModifyBeebotIntentUserSayRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // userSayDefinition Field Functions 
    bool hasUserSayDefinition() const { return this->userSayDefinition_ != nullptr;};
    void deleteUserSayDefinition() { this->userSayDefinition_ = nullptr;};
    inline const ModifyBeebotIntentUserSayRequestUserSayDefinition & userSayDefinition() const { DARABONBA_PTR_GET_CONST(userSayDefinition_, ModifyBeebotIntentUserSayRequestUserSayDefinition) };
    inline ModifyBeebotIntentUserSayRequestUserSayDefinition userSayDefinition() { DARABONBA_PTR_GET(userSayDefinition_, ModifyBeebotIntentUserSayRequestUserSayDefinition) };
    inline ModifyBeebotIntentUserSayRequest& setUserSayDefinition(const ModifyBeebotIntentUserSayRequestUserSayDefinition & userSayDefinition) { DARABONBA_PTR_SET_VALUE(userSayDefinition_, userSayDefinition) };
    inline ModifyBeebotIntentUserSayRequest& setUserSayDefinition(ModifyBeebotIntentUserSayRequestUserSayDefinition && userSayDefinition) { DARABONBA_PTR_SET_RVALUE(userSayDefinition_, userSayDefinition) };


    // userSayId Field Functions 
    bool hasUserSayId() const { return this->userSayId_ != nullptr;};
    void deleteUserSayId() { this->userSayId_ = nullptr;};
    inline string userSayId() const { DARABONBA_PTR_GET_DEFAULT(userSayId_, "") };
    inline ModifyBeebotIntentUserSayRequest& setUserSayId(string userSayId) { DARABONBA_PTR_SET_VALUE(userSayId_, userSayId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ModifyBeebotIntentUserSayRequestUserSayDefinition> userSayDefinition_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userSayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
