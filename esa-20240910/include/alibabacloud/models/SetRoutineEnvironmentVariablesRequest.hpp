// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETROUTINEENVIRONMENTVARIABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETROUTINEENVIRONMENTVARIABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/EnvironmentVariablesValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class SetRoutineEnvironmentVariablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetRoutineEnvironmentVariablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, SetRoutineEnvironmentVariablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    SetRoutineEnvironmentVariablesRequest() = default ;
    SetRoutineEnvironmentVariablesRequest(const SetRoutineEnvironmentVariablesRequest &) = default ;
    SetRoutineEnvironmentVariablesRequest(SetRoutineEnvironmentVariablesRequest &&) = default ;
    SetRoutineEnvironmentVariablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetRoutineEnvironmentVariablesRequest() = default ;
    SetRoutineEnvironmentVariablesRequest& operator=(const SetRoutineEnvironmentVariablesRequest &) = default ;
    SetRoutineEnvironmentVariablesRequest& operator=(SetRoutineEnvironmentVariablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && this->environmentVariables_ == nullptr && this->name_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline SetRoutineEnvironmentVariablesRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, EnvironmentVariablesValue> & getEnvironmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, EnvironmentVariablesValue>) };
    inline map<string, EnvironmentVariablesValue> getEnvironmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, EnvironmentVariablesValue>) };
    inline SetRoutineEnvironmentVariablesRequest& setEnvironmentVariables(const map<string, EnvironmentVariablesValue> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline SetRoutineEnvironmentVariablesRequest& setEnvironmentVariables(map<string, EnvironmentVariablesValue> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SetRoutineEnvironmentVariablesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


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
    shared_ptr<map<string, EnvironmentVariablesValue>> environmentVariables_ {};
    // The function name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
