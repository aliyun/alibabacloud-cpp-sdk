// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHOOKCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHOOKCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateHookConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHookConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HooksConfiguration, hooksConfiguration_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHookConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HooksConfiguration, hooksConfiguration_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateHookConfigurationResponseBody() = default ;
    UpdateHookConfigurationResponseBody(const UpdateHookConfigurationResponseBody &) = default ;
    UpdateHookConfigurationResponseBody(UpdateHookConfigurationResponseBody &&) = default ;
    UpdateHookConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHookConfigurationResponseBody() = default ;
    UpdateHookConfigurationResponseBody& operator=(const UpdateHookConfigurationResponseBody &) = default ;
    UpdateHookConfigurationResponseBody& operator=(UpdateHookConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HooksConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HooksConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(IgnoreFail, ignoreFail_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Script, script_);
      };
      friend void from_json(const Darabonba::Json& j, HooksConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(IgnoreFail, ignoreFail_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Script, script_);
      };
      HooksConfiguration() = default ;
      HooksConfiguration(const HooksConfiguration &) = default ;
      HooksConfiguration(HooksConfiguration &&) = default ;
      HooksConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HooksConfiguration() = default ;
      HooksConfiguration& operator=(const HooksConfiguration &) = default ;
      HooksConfiguration& operator=(HooksConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ignoreFail_ == nullptr
        && this->name_ == nullptr && this->script_ == nullptr; };
      // ignoreFail Field Functions 
      bool hasIgnoreFail() const { return this->ignoreFail_ != nullptr;};
      void deleteIgnoreFail() { this->ignoreFail_ = nullptr;};
      inline bool getIgnoreFail() const { DARABONBA_PTR_GET_DEFAULT(ignoreFail_, false) };
      inline HooksConfiguration& setIgnoreFail(bool ignoreFail) { DARABONBA_PTR_SET_VALUE(ignoreFail_, ignoreFail) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline HooksConfiguration& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // script Field Functions 
      bool hasScript() const { return this->script_ != nullptr;};
      void deleteScript() { this->script_ = nullptr;};
      inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
      inline HooksConfiguration& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    protected:
      // Indicates whether a mount failure is ignored. Valid values:
      // 
      // - **true**: A mount failure is ignored.
      // 
      // - **false**: A mount failure is not ignored.
      shared_ptr<bool> ignoreFail_ {};
      // The name of the mounted script.
      shared_ptr<string> name_ {};
      // The content of the mounted script.
      shared_ptr<string> script_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->hooksConfiguration_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdateHookConfigurationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hooksConfiguration Field Functions 
    bool hasHooksConfiguration() const { return this->hooksConfiguration_ != nullptr;};
    void deleteHooksConfiguration() { this->hooksConfiguration_ = nullptr;};
    inline const vector<UpdateHookConfigurationResponseBody::HooksConfiguration> & getHooksConfiguration() const { DARABONBA_PTR_GET_CONST(hooksConfiguration_, vector<UpdateHookConfigurationResponseBody::HooksConfiguration>) };
    inline vector<UpdateHookConfigurationResponseBody::HooksConfiguration> getHooksConfiguration() { DARABONBA_PTR_GET(hooksConfiguration_, vector<UpdateHookConfigurationResponseBody::HooksConfiguration>) };
    inline UpdateHookConfigurationResponseBody& setHooksConfiguration(const vector<UpdateHookConfigurationResponseBody::HooksConfiguration> & hooksConfiguration) { DARABONBA_PTR_SET_VALUE(hooksConfiguration_, hooksConfiguration) };
    inline UpdateHookConfigurationResponseBody& setHooksConfiguration(vector<UpdateHookConfigurationResponseBody::HooksConfiguration> && hooksConfiguration) { DARABONBA_PTR_SET_RVALUE(hooksConfiguration_, hooksConfiguration) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateHookConfigurationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateHookConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The information about the mounted script.
    shared_ptr<vector<UpdateHookConfigurationResponseBody::HooksConfiguration>> hooksConfiguration_ {};
    // The message that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
