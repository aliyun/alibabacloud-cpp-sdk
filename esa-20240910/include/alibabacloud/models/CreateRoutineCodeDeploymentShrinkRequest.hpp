// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTINECODEDEPLOYMENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTINECODEDEPLOYMENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateRoutineCodeDeploymentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoutineCodeDeploymentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CodeVersions, codeVersionsShrink_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoutineCodeDeploymentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeVersions, codeVersionsShrink_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    CreateRoutineCodeDeploymentShrinkRequest() = default ;
    CreateRoutineCodeDeploymentShrinkRequest(const CreateRoutineCodeDeploymentShrinkRequest &) = default ;
    CreateRoutineCodeDeploymentShrinkRequest(CreateRoutineCodeDeploymentShrinkRequest &&) = default ;
    CreateRoutineCodeDeploymentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoutineCodeDeploymentShrinkRequest() = default ;
    CreateRoutineCodeDeploymentShrinkRequest& operator=(const CreateRoutineCodeDeploymentShrinkRequest &) = default ;
    CreateRoutineCodeDeploymentShrinkRequest& operator=(CreateRoutineCodeDeploymentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeVersionsShrink_ == nullptr
        && this->env_ == nullptr && this->name_ == nullptr && this->strategy_ == nullptr; };
    // codeVersionsShrink Field Functions 
    bool hasCodeVersionsShrink() const { return this->codeVersionsShrink_ != nullptr;};
    void deleteCodeVersionsShrink() { this->codeVersionsShrink_ = nullptr;};
    inline string getCodeVersionsShrink() const { DARABONBA_PTR_GET_DEFAULT(codeVersionsShrink_, "") };
    inline CreateRoutineCodeDeploymentShrinkRequest& setCodeVersionsShrink(string codeVersionsShrink) { DARABONBA_PTR_SET_VALUE(codeVersionsShrink_, codeVersionsShrink) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline CreateRoutineCodeDeploymentShrinkRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRoutineCodeDeploymentShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline CreateRoutineCodeDeploymentShrinkRequest& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


  protected:
    // The configuration list of phased release version numbers. A maximum of two versions are supported, and the sum of the total proportions is equal to 100.
    // 
    // This parameter is required.
    shared_ptr<string> codeVersionsShrink_ {};
    // The name of the environment. Only supports test environment `staging` or production environment `production`.
    // 
    // This parameter is required.
    shared_ptr<string> env_ {};
    // The function name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The deployment policy. Valid value: percentage.
    // 
    // This parameter is required.
    shared_ptr<string> strategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
