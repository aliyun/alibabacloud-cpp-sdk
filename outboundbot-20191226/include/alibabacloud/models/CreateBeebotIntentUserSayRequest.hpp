// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTUSERSAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTUSERSAYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateBeebotIntentUserSayRequestUserSayDefinition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateBeebotIntentUserSayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBeebotIntentUserSayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(UserSayDefinition, userSayDefinition_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBeebotIntentUserSayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(UserSayDefinition, userSayDefinition_);
    };
    CreateBeebotIntentUserSayRequest() = default ;
    CreateBeebotIntentUserSayRequest(const CreateBeebotIntentUserSayRequest &) = default ;
    CreateBeebotIntentUserSayRequest(CreateBeebotIntentUserSayRequest &&) = default ;
    CreateBeebotIntentUserSayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBeebotIntentUserSayRequest() = default ;
    CreateBeebotIntentUserSayRequest& operator=(const CreateBeebotIntentUserSayRequest &) = default ;
    CreateBeebotIntentUserSayRequest& operator=(CreateBeebotIntentUserSayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->scriptId_ == nullptr && return this->userSayDefinition_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBeebotIntentUserSayRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateBeebotIntentUserSayRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // userSayDefinition Field Functions 
    bool hasUserSayDefinition() const { return this->userSayDefinition_ != nullptr;};
    void deleteUserSayDefinition() { this->userSayDefinition_ = nullptr;};
    inline const CreateBeebotIntentUserSayRequestUserSayDefinition & userSayDefinition() const { DARABONBA_PTR_GET_CONST(userSayDefinition_, CreateBeebotIntentUserSayRequestUserSayDefinition) };
    inline CreateBeebotIntentUserSayRequestUserSayDefinition userSayDefinition() { DARABONBA_PTR_GET(userSayDefinition_, CreateBeebotIntentUserSayRequestUserSayDefinition) };
    inline CreateBeebotIntentUserSayRequest& setUserSayDefinition(const CreateBeebotIntentUserSayRequestUserSayDefinition & userSayDefinition) { DARABONBA_PTR_SET_VALUE(userSayDefinition_, userSayDefinition) };
    inline CreateBeebotIntentUserSayRequest& setUserSayDefinition(CreateBeebotIntentUserSayRequestUserSayDefinition && userSayDefinition) { DARABONBA_PTR_SET_RVALUE(userSayDefinition_, userSayDefinition) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateBeebotIntentUserSayRequestUserSayDefinition> userSayDefinition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
