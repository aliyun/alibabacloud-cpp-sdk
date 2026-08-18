// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETROUTINEENVIRONMENTVARIABLESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETROUTINEENVIRONMENTVARIABLESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class SetRoutineEnvironmentVariablesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetRoutineEnvironmentVariablesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(EnvironmentVariables, environmentVariablesShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, SetRoutineEnvironmentVariablesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVariables, environmentVariablesShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    SetRoutineEnvironmentVariablesShrinkRequest() = default ;
    SetRoutineEnvironmentVariablesShrinkRequest(const SetRoutineEnvironmentVariablesShrinkRequest &) = default ;
    SetRoutineEnvironmentVariablesShrinkRequest(SetRoutineEnvironmentVariablesShrinkRequest &&) = default ;
    SetRoutineEnvironmentVariablesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetRoutineEnvironmentVariablesShrinkRequest() = default ;
    SetRoutineEnvironmentVariablesShrinkRequest& operator=(const SetRoutineEnvironmentVariablesShrinkRequest &) = default ;
    SetRoutineEnvironmentVariablesShrinkRequest& operator=(SetRoutineEnvironmentVariablesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && this->environmentVariablesShrink_ == nullptr && this->name_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline SetRoutineEnvironmentVariablesShrinkRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // environmentVariablesShrink Field Functions 
    bool hasEnvironmentVariablesShrink() const { return this->environmentVariablesShrink_ != nullptr;};
    void deleteEnvironmentVariablesShrink() { this->environmentVariablesShrink_ = nullptr;};
    inline string getEnvironmentVariablesShrink() const { DARABONBA_PTR_GET_DEFAULT(environmentVariablesShrink_, "") };
    inline SetRoutineEnvironmentVariablesShrinkRequest& setEnvironmentVariablesShrink(string environmentVariablesShrink) { DARABONBA_PTR_SET_VALUE(environmentVariablesShrink_, environmentVariablesShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SetRoutineEnvironmentVariablesShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The environment name. Valid values:
    // - `staging`: staging environment.
    // - `production`: production environment.
    // 
    // This parameter is required.
    shared_ptr<string> env_ {};
    // The dictionary of environment variables. The key is the environment variable name, and the value is the environment variable value.
    // 
    // This parameter is required.
    shared_ptr<string> environmentVariablesShrink_ {};
    // The function name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
