// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTUSERSAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTUSERSAYREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class UserSayDefinition : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserSayDefinition& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      };
      friend void from_json(const Darabonba::Json& j, UserSayDefinition& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      };
      UserSayDefinition() = default ;
      UserSayDefinition(const UserSayDefinition &) = default ;
      UserSayDefinition(UserSayDefinition &&) = default ;
      UserSayDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserSayDefinition() = default ;
      UserSayDefinition& operator=(const UserSayDefinition &) = default ;
      UserSayDefinition& operator=(UserSayDefinition &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->intentId_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline UserSayDefinition& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // intentId Field Functions 
      bool hasIntentId() const { return this->intentId_ != nullptr;};
      void deleteIntentId() { this->intentId_ = nullptr;};
      inline int64_t getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
      inline UserSayDefinition& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    protected:
      // This parameter is required.
      shared_ptr<string> content_ {};
      // This parameter is required.
      shared_ptr<int64_t> intentId_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->scriptId_ == nullptr && this->userSayDefinition_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBeebotIntentUserSayRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateBeebotIntentUserSayRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // userSayDefinition Field Functions 
    bool hasUserSayDefinition() const { return this->userSayDefinition_ != nullptr;};
    void deleteUserSayDefinition() { this->userSayDefinition_ = nullptr;};
    inline const CreateBeebotIntentUserSayRequest::UserSayDefinition & getUserSayDefinition() const { DARABONBA_PTR_GET_CONST(userSayDefinition_, CreateBeebotIntentUserSayRequest::UserSayDefinition) };
    inline CreateBeebotIntentUserSayRequest::UserSayDefinition getUserSayDefinition() { DARABONBA_PTR_GET(userSayDefinition_, CreateBeebotIntentUserSayRequest::UserSayDefinition) };
    inline CreateBeebotIntentUserSayRequest& setUserSayDefinition(const CreateBeebotIntentUserSayRequest::UserSayDefinition & userSayDefinition) { DARABONBA_PTR_SET_VALUE(userSayDefinition_, userSayDefinition) };
    inline CreateBeebotIntentUserSayRequest& setUserSayDefinition(CreateBeebotIntentUserSayRequest::UserSayDefinition && userSayDefinition) { DARABONBA_PTR_SET_RVALUE(userSayDefinition_, userSayDefinition) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> scriptId_ {};
    // This parameter is required.
    shared_ptr<CreateBeebotIntentUserSayRequest::UserSayDefinition> userSayDefinition_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
