// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINERESPONSEBODYENVS_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINERESPONSEBODYENVS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRoutineResponseBodyEnvsCodeDeploy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRoutineResponseBodyEnvs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoutineResponseBodyEnvs& obj) { 
      DARABONBA_PTR_TO_JSON(CodeDeploy, codeDeploy_);
      DARABONBA_PTR_TO_JSON(Env, env_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoutineResponseBodyEnvs& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeDeploy, codeDeploy_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
    };
    GetRoutineResponseBodyEnvs() = default ;
    GetRoutineResponseBodyEnvs(const GetRoutineResponseBodyEnvs &) = default ;
    GetRoutineResponseBodyEnvs(GetRoutineResponseBodyEnvs &&) = default ;
    GetRoutineResponseBodyEnvs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoutineResponseBodyEnvs() = default ;
    GetRoutineResponseBodyEnvs& operator=(const GetRoutineResponseBodyEnvs &) = default ;
    GetRoutineResponseBodyEnvs& operator=(GetRoutineResponseBodyEnvs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeDeploy_ == nullptr
        && return this->env_ == nullptr; };
    // codeDeploy Field Functions 
    bool hasCodeDeploy() const { return this->codeDeploy_ != nullptr;};
    void deleteCodeDeploy() { this->codeDeploy_ = nullptr;};
    inline const Models::GetRoutineResponseBodyEnvsCodeDeploy & codeDeploy() const { DARABONBA_PTR_GET_CONST(codeDeploy_, Models::GetRoutineResponseBodyEnvsCodeDeploy) };
    inline Models::GetRoutineResponseBodyEnvsCodeDeploy codeDeploy() { DARABONBA_PTR_GET(codeDeploy_, Models::GetRoutineResponseBodyEnvsCodeDeploy) };
    inline GetRoutineResponseBodyEnvs& setCodeDeploy(const Models::GetRoutineResponseBodyEnvsCodeDeploy & codeDeploy) { DARABONBA_PTR_SET_VALUE(codeDeploy_, codeDeploy) };
    inline GetRoutineResponseBodyEnvs& setCodeDeploy(Models::GetRoutineResponseBodyEnvsCodeDeploy && codeDeploy) { DARABONBA_PTR_SET_RVALUE(codeDeploy_, codeDeploy) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetRoutineResponseBodyEnvs& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


  protected:
    std::shared_ptr<Models::GetRoutineResponseBodyEnvsCodeDeploy> codeDeploy_ = nullptr;
    // The environment type.
    std::shared_ptr<string> env_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
