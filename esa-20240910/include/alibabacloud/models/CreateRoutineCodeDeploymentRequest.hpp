// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTINECODEDEPLOYMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTINECODEDEPLOYMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRoutineCodeDeploymentRequestCodeVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateRoutineCodeDeploymentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoutineCodeDeploymentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CodeVersions, codeVersions_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoutineCodeDeploymentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeVersions, codeVersions_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    CreateRoutineCodeDeploymentRequest() = default ;
    CreateRoutineCodeDeploymentRequest(const CreateRoutineCodeDeploymentRequest &) = default ;
    CreateRoutineCodeDeploymentRequest(CreateRoutineCodeDeploymentRequest &&) = default ;
    CreateRoutineCodeDeploymentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoutineCodeDeploymentRequest() = default ;
    CreateRoutineCodeDeploymentRequest& operator=(const CreateRoutineCodeDeploymentRequest &) = default ;
    CreateRoutineCodeDeploymentRequest& operator=(CreateRoutineCodeDeploymentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeVersions_ == nullptr
        && return this->env_ == nullptr && return this->name_ == nullptr && return this->strategy_ == nullptr; };
    // codeVersions Field Functions 
    bool hasCodeVersions() const { return this->codeVersions_ != nullptr;};
    void deleteCodeVersions() { this->codeVersions_ = nullptr;};
    inline const vector<CreateRoutineCodeDeploymentRequestCodeVersions> & codeVersions() const { DARABONBA_PTR_GET_CONST(codeVersions_, vector<CreateRoutineCodeDeploymentRequestCodeVersions>) };
    inline vector<CreateRoutineCodeDeploymentRequestCodeVersions> codeVersions() { DARABONBA_PTR_GET(codeVersions_, vector<CreateRoutineCodeDeploymentRequestCodeVersions>) };
    inline CreateRoutineCodeDeploymentRequest& setCodeVersions(const vector<CreateRoutineCodeDeploymentRequestCodeVersions> & codeVersions) { DARABONBA_PTR_SET_VALUE(codeVersions_, codeVersions) };
    inline CreateRoutineCodeDeploymentRequest& setCodeVersions(vector<CreateRoutineCodeDeploymentRequestCodeVersions> && codeVersions) { DARABONBA_PTR_SET_RVALUE(codeVersions_, codeVersions) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline CreateRoutineCodeDeploymentRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRoutineCodeDeploymentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline CreateRoutineCodeDeploymentRequest& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


  protected:
    // The configuration list of phased release version numbers. A maximum of two versions are supported, and the sum of the total proportions is equal to 100.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateRoutineCodeDeploymentRequestCodeVersions>> codeVersions_ = nullptr;
    // The name of the environment. Only supports test environment `staging` or production environment `production`.
    // 
    // This parameter is required.
    std::shared_ptr<string> env_ = nullptr;
    // The function name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The deployment policy. Valid value: percentage.
    // 
    // This parameter is required.
    std::shared_ptr<string> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
