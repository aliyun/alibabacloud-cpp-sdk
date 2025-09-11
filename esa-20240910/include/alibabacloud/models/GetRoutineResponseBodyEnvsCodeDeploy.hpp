// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINERESPONSEBODYENVSCODEDEPLOY_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINERESPONSEBODYENVSCODEDEPLOY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRoutineResponseBodyEnvsCodeDeployCodeVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRoutineResponseBodyEnvsCodeDeploy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoutineResponseBodyEnvsCodeDeploy& obj) { 
      DARABONBA_PTR_TO_JSON(CodeVersions, codeVersions_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DeployId, deployId_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoutineResponseBodyEnvsCodeDeploy& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeVersions, codeVersions_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DeployId, deployId_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    GetRoutineResponseBodyEnvsCodeDeploy() = default ;
    GetRoutineResponseBodyEnvsCodeDeploy(const GetRoutineResponseBodyEnvsCodeDeploy &) = default ;
    GetRoutineResponseBodyEnvsCodeDeploy(GetRoutineResponseBodyEnvsCodeDeploy &&) = default ;
    GetRoutineResponseBodyEnvsCodeDeploy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoutineResponseBodyEnvsCodeDeploy() = default ;
    GetRoutineResponseBodyEnvsCodeDeploy& operator=(const GetRoutineResponseBodyEnvsCodeDeploy &) = default ;
    GetRoutineResponseBodyEnvsCodeDeploy& operator=(GetRoutineResponseBodyEnvsCodeDeploy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeVersions_ != nullptr
        && this->creationTime_ != nullptr && this->deployId_ != nullptr && this->strategy_ != nullptr; };
    // codeVersions Field Functions 
    bool hasCodeVersions() const { return this->codeVersions_ != nullptr;};
    void deleteCodeVersions() { this->codeVersions_ = nullptr;};
    inline const vector<Models::GetRoutineResponseBodyEnvsCodeDeployCodeVersions> & codeVersions() const { DARABONBA_PTR_GET_CONST(codeVersions_, vector<Models::GetRoutineResponseBodyEnvsCodeDeployCodeVersions>) };
    inline vector<Models::GetRoutineResponseBodyEnvsCodeDeployCodeVersions> codeVersions() { DARABONBA_PTR_GET(codeVersions_, vector<Models::GetRoutineResponseBodyEnvsCodeDeployCodeVersions>) };
    inline GetRoutineResponseBodyEnvsCodeDeploy& setCodeVersions(const vector<Models::GetRoutineResponseBodyEnvsCodeDeployCodeVersions> & codeVersions) { DARABONBA_PTR_SET_VALUE(codeVersions_, codeVersions) };
    inline GetRoutineResponseBodyEnvsCodeDeploy& setCodeVersions(vector<Models::GetRoutineResponseBodyEnvsCodeDeployCodeVersions> && codeVersions) { DARABONBA_PTR_SET_RVALUE(codeVersions_, codeVersions) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetRoutineResponseBodyEnvsCodeDeploy& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // deployId Field Functions 
    bool hasDeployId() const { return this->deployId_ != nullptr;};
    void deleteDeployId() { this->deployId_ = nullptr;};
    inline string deployId() const { DARABONBA_PTR_GET_DEFAULT(deployId_, "") };
    inline GetRoutineResponseBodyEnvsCodeDeploy& setDeployId(string deployId) { DARABONBA_PTR_SET_VALUE(deployId_, deployId) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline GetRoutineResponseBodyEnvsCodeDeploy& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


  protected:
    std::shared_ptr<vector<Models::GetRoutineResponseBodyEnvsCodeDeployCodeVersions>> codeVersions_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> deployId_ = nullptr;
    std::shared_ptr<string> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
