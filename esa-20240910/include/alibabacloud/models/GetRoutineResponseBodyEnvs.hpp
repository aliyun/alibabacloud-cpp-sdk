// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINERESPONSEBODYENVS_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINERESPONSEBODYENVS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(CanaryAreaList, canaryAreaList_);
      DARABONBA_PTR_TO_JSON(CanaryCodeVersion, canaryCodeVersion_);
      DARABONBA_PTR_TO_JSON(CodeDeploy, codeDeploy_);
      DARABONBA_PTR_TO_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_TO_JSON(Env, env_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoutineResponseBodyEnvs& obj) { 
      DARABONBA_PTR_FROM_JSON(CanaryAreaList, canaryAreaList_);
      DARABONBA_PTR_FROM_JSON(CanaryCodeVersion, canaryCodeVersion_);
      DARABONBA_PTR_FROM_JSON(CodeDeploy, codeDeploy_);
      DARABONBA_PTR_FROM_JSON(CodeVersion, codeVersion_);
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
    virtual bool empty() const override { this->canaryAreaList_ != nullptr
        && this->canaryCodeVersion_ != nullptr && this->codeDeploy_ != nullptr && this->codeVersion_ != nullptr && this->env_ != nullptr; };
    // canaryAreaList Field Functions 
    bool hasCanaryAreaList() const { return this->canaryAreaList_ != nullptr;};
    void deleteCanaryAreaList() { this->canaryAreaList_ = nullptr;};
    inline const vector<string> & canaryAreaList() const { DARABONBA_PTR_GET_CONST(canaryAreaList_, vector<string>) };
    inline vector<string> canaryAreaList() { DARABONBA_PTR_GET(canaryAreaList_, vector<string>) };
    inline GetRoutineResponseBodyEnvs& setCanaryAreaList(const vector<string> & canaryAreaList) { DARABONBA_PTR_SET_VALUE(canaryAreaList_, canaryAreaList) };
    inline GetRoutineResponseBodyEnvs& setCanaryAreaList(vector<string> && canaryAreaList) { DARABONBA_PTR_SET_RVALUE(canaryAreaList_, canaryAreaList) };


    // canaryCodeVersion Field Functions 
    bool hasCanaryCodeVersion() const { return this->canaryCodeVersion_ != nullptr;};
    void deleteCanaryCodeVersion() { this->canaryCodeVersion_ = nullptr;};
    inline string canaryCodeVersion() const { DARABONBA_PTR_GET_DEFAULT(canaryCodeVersion_, "") };
    inline GetRoutineResponseBodyEnvs& setCanaryCodeVersion(string canaryCodeVersion) { DARABONBA_PTR_SET_VALUE(canaryCodeVersion_, canaryCodeVersion) };


    // codeDeploy Field Functions 
    bool hasCodeDeploy() const { return this->codeDeploy_ != nullptr;};
    void deleteCodeDeploy() { this->codeDeploy_ = nullptr;};
    inline const Models::GetRoutineResponseBodyEnvsCodeDeploy & codeDeploy() const { DARABONBA_PTR_GET_CONST(codeDeploy_, Models::GetRoutineResponseBodyEnvsCodeDeploy) };
    inline Models::GetRoutineResponseBodyEnvsCodeDeploy codeDeploy() { DARABONBA_PTR_GET(codeDeploy_, Models::GetRoutineResponseBodyEnvsCodeDeploy) };
    inline GetRoutineResponseBodyEnvs& setCodeDeploy(const Models::GetRoutineResponseBodyEnvsCodeDeploy & codeDeploy) { DARABONBA_PTR_SET_VALUE(codeDeploy_, codeDeploy) };
    inline GetRoutineResponseBodyEnvs& setCodeDeploy(Models::GetRoutineResponseBodyEnvsCodeDeploy && codeDeploy) { DARABONBA_PTR_SET_RVALUE(codeDeploy_, codeDeploy) };


    // codeVersion Field Functions 
    bool hasCodeVersion() const { return this->codeVersion_ != nullptr;};
    void deleteCodeVersion() { this->codeVersion_ = nullptr;};
    inline string codeVersion() const { DARABONBA_PTR_GET_DEFAULT(codeVersion_, "") };
    inline GetRoutineResponseBodyEnvs& setCodeVersion(string codeVersion) { DARABONBA_PTR_SET_VALUE(codeVersion_, codeVersion) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetRoutineResponseBodyEnvs& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


  protected:
    // The regions for canary release.
    std::shared_ptr<vector<string>> canaryAreaList_ = nullptr;
    // The version number for canary release.
    std::shared_ptr<string> canaryCodeVersion_ = nullptr;
    std::shared_ptr<Models::GetRoutineResponseBodyEnvsCodeDeploy> codeDeploy_ = nullptr;
    // The version number of the code in the environment.
    std::shared_ptr<string> codeVersion_ = nullptr;
    // The environment type.
    std::shared_ptr<string> env_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
