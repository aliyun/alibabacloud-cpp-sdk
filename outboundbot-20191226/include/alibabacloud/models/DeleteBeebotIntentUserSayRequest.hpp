// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBEEBOTINTENTUSERSAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBEEBOTINTENTUSERSAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DeleteBeebotIntentUserSayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBeebotIntentUserSayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(UserSayId, userSayId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBeebotIntentUserSayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(UserSayId, userSayId_);
    };
    DeleteBeebotIntentUserSayRequest() = default ;
    DeleteBeebotIntentUserSayRequest(const DeleteBeebotIntentUserSayRequest &) = default ;
    DeleteBeebotIntentUserSayRequest(DeleteBeebotIntentUserSayRequest &&) = default ;
    DeleteBeebotIntentUserSayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBeebotIntentUserSayRequest() = default ;
    DeleteBeebotIntentUserSayRequest& operator=(const DeleteBeebotIntentUserSayRequest &) = default ;
    DeleteBeebotIntentUserSayRequest& operator=(DeleteBeebotIntentUserSayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->intentId_ == nullptr && this->scriptId_ == nullptr && this->userSayId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteBeebotIntentUserSayRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline string getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, "") };
    inline DeleteBeebotIntentUserSayRequest& setIntentId(string intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline DeleteBeebotIntentUserSayRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // userSayId Field Functions 
    bool hasUserSayId() const { return this->userSayId_ != nullptr;};
    void deleteUserSayId() { this->userSayId_ = nullptr;};
    inline string getUserSayId() const { DARABONBA_PTR_GET_DEFAULT(userSayId_, "") };
    inline DeleteBeebotIntentUserSayRequest& setUserSayId(string userSayId) { DARABONBA_PTR_SET_VALUE(userSayId_, userSayId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> intentId_ {};
    // This parameter is required.
    shared_ptr<string> scriptId_ {};
    // This parameter is required.
    shared_ptr<string> userSayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
