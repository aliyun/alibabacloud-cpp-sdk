// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTINEENVIRONMENTVARIABLESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTINEENVIRONMENTVARIABLESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteRoutineEnvironmentVariablesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRoutineEnvironmentVariablesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(EnvironmentVariableKeys, environmentVariableKeysShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRoutineEnvironmentVariablesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVariableKeys, environmentVariableKeysShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DeleteRoutineEnvironmentVariablesShrinkRequest() = default ;
    DeleteRoutineEnvironmentVariablesShrinkRequest(const DeleteRoutineEnvironmentVariablesShrinkRequest &) = default ;
    DeleteRoutineEnvironmentVariablesShrinkRequest(DeleteRoutineEnvironmentVariablesShrinkRequest &&) = default ;
    DeleteRoutineEnvironmentVariablesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRoutineEnvironmentVariablesShrinkRequest() = default ;
    DeleteRoutineEnvironmentVariablesShrinkRequest& operator=(const DeleteRoutineEnvironmentVariablesShrinkRequest &) = default ;
    DeleteRoutineEnvironmentVariablesShrinkRequest& operator=(DeleteRoutineEnvironmentVariablesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && this->environmentVariableKeysShrink_ == nullptr && this->name_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline DeleteRoutineEnvironmentVariablesShrinkRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // environmentVariableKeysShrink Field Functions 
    bool hasEnvironmentVariableKeysShrink() const { return this->environmentVariableKeysShrink_ != nullptr;};
    void deleteEnvironmentVariableKeysShrink() { this->environmentVariableKeysShrink_ = nullptr;};
    inline string getEnvironmentVariableKeysShrink() const { DARABONBA_PTR_GET_DEFAULT(environmentVariableKeysShrink_, "") };
    inline DeleteRoutineEnvironmentVariablesShrinkRequest& setEnvironmentVariableKeysShrink(string environmentVariableKeysShrink) { DARABONBA_PTR_SET_VALUE(environmentVariableKeysShrink_, environmentVariableKeysShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteRoutineEnvironmentVariablesShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


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
    shared_ptr<string> environmentVariableKeysShrink_ {};
    // The name of the Routine function.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
