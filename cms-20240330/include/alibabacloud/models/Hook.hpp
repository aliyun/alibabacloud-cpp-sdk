// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOOK_HPP_
#define ALIBABACLOUD_MODELS_HOOK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class Hook : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Hook& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(event, event_);
      DARABONBA_PTR_TO_JSON(execution, execution_);
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(schemaVersion, schemaVersion_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, Hook& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(event, event_);
      DARABONBA_PTR_FROM_JSON(execution, execution_);
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(schemaVersion, schemaVersion_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
    };
    Hook() = default ;
    Hook(const Hook &) = default ;
    Hook(Hook &&) = default ;
    Hook(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Hook() = default ;
    Hook& operator=(const Hook &) = default ;
    Hook& operator=(Hook &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Execution : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Execution& obj) { 
        DARABONBA_PTR_TO_JSON(failResult, failResult_);
        DARABONBA_PTR_TO_JSON(instruction, instruction_);
        DARABONBA_PTR_TO_JSON(maxRetry, maxRetry_);
        DARABONBA_PTR_TO_JSON(timeoutSeconds, timeoutSeconds_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Execution& obj) { 
        DARABONBA_PTR_FROM_JSON(failResult, failResult_);
        DARABONBA_PTR_FROM_JSON(instruction, instruction_);
        DARABONBA_PTR_FROM_JSON(maxRetry, maxRetry_);
        DARABONBA_PTR_FROM_JSON(timeoutSeconds, timeoutSeconds_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Execution() = default ;
      Execution(const Execution &) = default ;
      Execution(Execution &&) = default ;
      Execution(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Execution() = default ;
      Execution& operator=(const Execution &) = default ;
      Execution& operator=(Execution &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->failResult_ == nullptr
        && this->instruction_ == nullptr && this->maxRetry_ == nullptr && this->timeoutSeconds_ == nullptr && this->type_ == nullptr; };
      // failResult Field Functions 
      bool hasFailResult() const { return this->failResult_ != nullptr;};
      void deleteFailResult() { this->failResult_ = nullptr;};
      inline string getFailResult() const { DARABONBA_PTR_GET_DEFAULT(failResult_, "") };
      inline Execution& setFailResult(string failResult) { DARABONBA_PTR_SET_VALUE(failResult_, failResult) };


      // instruction Field Functions 
      bool hasInstruction() const { return this->instruction_ != nullptr;};
      void deleteInstruction() { this->instruction_ = nullptr;};
      inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
      inline Execution& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


      // maxRetry Field Functions 
      bool hasMaxRetry() const { return this->maxRetry_ != nullptr;};
      void deleteMaxRetry() { this->maxRetry_ = nullptr;};
      inline int64_t getMaxRetry() const { DARABONBA_PTR_GET_DEFAULT(maxRetry_, 0L) };
      inline Execution& setMaxRetry(int64_t maxRetry) { DARABONBA_PTR_SET_VALUE(maxRetry_, maxRetry) };


      // timeoutSeconds Field Functions 
      bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
      void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
      inline int64_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0L) };
      inline Execution& setTimeoutSeconds(int64_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Execution& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The handling policy for invalid return values. If the handler return value remains invalid after retries, it is processed as allow or reject.
      shared_ptr<string> failResult_ {};
      // The execution instruction. The prompt type indicates a prompt, the bash type indicates a Bash script, the python3 type indicates a Python 3 script, and the hint type indicates contextual text directly appended. A non-empty UTF-8 text must be provided for all four types.
      shared_ptr<string> instruction_ {};
      // The maximum number of additional attempts after a failure. Valid values: 0 to 3.
      shared_ptr<int64_t> maxRetry_ {};
      // The timeout period in seconds. Valid values: 1 to 30. All attempts and waits for the Hook share this timeout period.
      shared_ptr<int64_t> timeoutSeconds_ {};
      // The handler type. Valid values: prompt, bash, python3, and hint.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->enable_ == nullptr && this->event_ == nullptr && this->execution_ == nullptr && this->match_ == nullptr && this->name_ == nullptr
        && this->schemaVersion_ == nullptr && this->scope_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Hook& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline Hook& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline Hook& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // execution Field Functions 
    bool hasExecution() const { return this->execution_ != nullptr;};
    void deleteExecution() { this->execution_ = nullptr;};
    inline const Hook::Execution & getExecution() const { DARABONBA_PTR_GET_CONST(execution_, Hook::Execution) };
    inline Hook::Execution getExecution() { DARABONBA_PTR_GET(execution_, Hook::Execution) };
    inline Hook& setExecution(const Hook::Execution & execution) { DARABONBA_PTR_SET_VALUE(execution_, execution) };
    inline Hook& setExecution(Hook::Execution && execution) { DARABONBA_PTR_SET_RVALUE(execution_, execution) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const vector<string> & getMatch() const { DARABONBA_PTR_GET_CONST(match_, vector<string>) };
    inline vector<string> getMatch() { DARABONBA_PTR_GET(match_, vector<string>) };
    inline Hook& setMatch(const vector<string> & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline Hook& setMatch(vector<string> && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Hook& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // schemaVersion Field Functions 
    bool hasSchemaVersion() const { return this->schemaVersion_ != nullptr;};
    void deleteSchemaVersion() { this->schemaVersion_ = nullptr;};
    inline string getSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(schemaVersion_, "") };
    inline Hook& setSchemaVersion(string schemaVersion) { DARABONBA_PTR_SET_VALUE(schemaVersion_, schemaVersion) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline Hook& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The description.
    shared_ptr<string> description_ {};
    // Specifies whether the Hook is enabled. The Hook is executed only when this parameter is set to true. If not configured, the Hook is disabled.
    shared_ptr<bool> enable_ {};
    // The event processed by the Hook. Each Hook processes only one event.
    shared_ptr<string> event_ {};
    // The execution configuration that specifies the synchronous execution, total timeout, number of retries, and invalid return value handling policy for the Hook.
    shared_ptr<Hook::Execution> execution_ {};
    // The list of tool names. Only ToolStart and ToolEnd events perform exact matching based on the actual tool name. Tool names such as Read, Write, Bash, and Edit are supported, but wildcards are not supported. An empty array does not restrict tools. This field is ignored for other events.
    shared_ptr<vector<string>> match_ {};
    // The Hook name. Only digits, letters, underscores, and hyphens are allowed. The name cannot be empty. Hooks with the same name are still executed independently in the order of the list.
    shared_ptr<string> name_ {};
    // The configuration protocol version.
    shared_ptr<string> schemaVersion_ {};
    // The effective scope. Valid values: all, chat, and mission. A value of all indicates that the scope includes Chat and Mission. A value of chat or mission indicates that the scope applies only to the corresponding scenario.
    shared_ptr<string> scope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
