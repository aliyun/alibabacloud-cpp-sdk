// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTINEENVIRONMENTVARIABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTINEENVIRONMENTVARIABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteRoutineEnvironmentVariablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRoutineEnvironmentVariablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(EnvironmentVariableKeys, environmentVariableKeys_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRoutineEnvironmentVariablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVariableKeys, environmentVariableKeys_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DeleteRoutineEnvironmentVariablesRequest() = default ;
    DeleteRoutineEnvironmentVariablesRequest(const DeleteRoutineEnvironmentVariablesRequest &) = default ;
    DeleteRoutineEnvironmentVariablesRequest(DeleteRoutineEnvironmentVariablesRequest &&) = default ;
    DeleteRoutineEnvironmentVariablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRoutineEnvironmentVariablesRequest() = default ;
    DeleteRoutineEnvironmentVariablesRequest& operator=(const DeleteRoutineEnvironmentVariablesRequest &) = default ;
    DeleteRoutineEnvironmentVariablesRequest& operator=(DeleteRoutineEnvironmentVariablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && this->environmentVariableKeys_ == nullptr && this->name_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline DeleteRoutineEnvironmentVariablesRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // environmentVariableKeys Field Functions 
    bool hasEnvironmentVariableKeys() const { return this->environmentVariableKeys_ != nullptr;};
    void deleteEnvironmentVariableKeys() { this->environmentVariableKeys_ = nullptr;};
    inline const vector<string> & getEnvironmentVariableKeys() const { DARABONBA_PTR_GET_CONST(environmentVariableKeys_, vector<string>) };
    inline vector<string> getEnvironmentVariableKeys() { DARABONBA_PTR_GET(environmentVariableKeys_, vector<string>) };
    inline DeleteRoutineEnvironmentVariablesRequest& setEnvironmentVariableKeys(const vector<string> & environmentVariableKeys) { DARABONBA_PTR_SET_VALUE(environmentVariableKeys_, environmentVariableKeys) };
    inline DeleteRoutineEnvironmentVariablesRequest& setEnvironmentVariableKeys(vector<string> && environmentVariableKeys) { DARABONBA_PTR_SET_RVALUE(environmentVariableKeys_, environmentVariableKeys) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteRoutineEnvironmentVariablesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The environment name.
    // 
    // Valid values:
    // - `staging`: staging environment
    // - `production`: production environment
    // 
    // This parameter is required.
    shared_ptr<string> env_ {};
    // The list of environment variable keys to delete.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> environmentVariableKeys_ {};
    // The name of the Routine function.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
