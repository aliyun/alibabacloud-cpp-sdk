// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLARCLAWSKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLARCLAWSKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpdatePolarClawSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolarClawSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Ok, ok_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillKey, skillKey_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolarClawSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Ok, ok_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillKey, skillKey_);
    };
    UpdatePolarClawSkillResponseBody() = default ;
    UpdatePolarClawSkillResponseBody(const UpdatePolarClawSkillResponseBody &) = default ;
    UpdatePolarClawSkillResponseBody(UpdatePolarClawSkillResponseBody &&) = default ;
    UpdatePolarClawSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolarClawSkillResponseBody() = default ;
    UpdatePolarClawSkillResponseBody& operator=(const UpdatePolarClawSkillResponseBody &) = default ;
    UpdatePolarClawSkillResponseBody& operator=(UpdatePolarClawSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(Env, env_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(Env, env_);
      };
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->env_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Config& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline const map<string, string> & getEnv() const { DARABONBA_PTR_GET_CONST(env_, map<string, string>) };
      inline map<string, string> getEnv() { DARABONBA_PTR_GET(env_, map<string, string>) };
      inline Config& setEnv(const map<string, string> & env) { DARABONBA_PTR_SET_VALUE(env_, env) };
      inline Config& setEnv(map<string, string> && env) { DARABONBA_PTR_SET_RVALUE(env_, env) };


    protected:
      // Specifies whether to enable the Skill.
      shared_ptr<bool> enabled_ {};
      // The environment variable configuration.
      shared_ptr<map<string, string>> env_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->code_ == nullptr && this->config_ == nullptr && this->message_ == nullptr && this->ok_ == nullptr && this->requestId_ == nullptr
        && this->skillKey_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdatePolarClawSkillResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdatePolarClawSkillResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const UpdatePolarClawSkillResponseBody::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, UpdatePolarClawSkillResponseBody::Config) };
    inline UpdatePolarClawSkillResponseBody::Config getConfig() { DARABONBA_PTR_GET(config_, UpdatePolarClawSkillResponseBody::Config) };
    inline UpdatePolarClawSkillResponseBody& setConfig(const UpdatePolarClawSkillResponseBody::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline UpdatePolarClawSkillResponseBody& setConfig(UpdatePolarClawSkillResponseBody::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdatePolarClawSkillResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // ok Field Functions 
    bool hasOk() const { return this->ok_ != nullptr;};
    void deleteOk() { this->ok_ = nullptr;};
    inline bool getOk() const { DARABONBA_PTR_GET_DEFAULT(ok_, false) };
    inline UpdatePolarClawSkillResponseBody& setOk(bool ok) { DARABONBA_PTR_SET_VALUE(ok_, ok) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdatePolarClawSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillKey Field Functions 
    bool hasSkillKey() const { return this->skillKey_ != nullptr;};
    void deleteSkillKey() { this->skillKey_ = nullptr;};
    inline string getSkillKey() const { DARABONBA_PTR_GET_DEFAULT(skillKey_, "") };
    inline UpdatePolarClawSkillResponseBody& setSkillKey(string skillKey) { DARABONBA_PTR_SET_VALUE(skillKey_, skillKey) };


  protected:
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The updated Skill configuration. Sensitive values are masked.
    shared_ptr<UpdatePolarClawSkillResponseBody::Config> config_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Indicates whether the operation is successful.
    shared_ptr<bool> ok_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The Skill identifier key.
    shared_ptr<string> skillKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
