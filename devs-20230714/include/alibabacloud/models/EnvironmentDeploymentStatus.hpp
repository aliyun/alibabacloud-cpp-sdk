// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENVIRONMENTDEPLOYMENTSTATUS_HPP_
#define ALIBABACLOUD_MODELS_ENVIRONMENTDEPLOYMENTSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class EnvironmentDeploymentStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnvironmentDeploymentStatus& obj) { 
      DARABONBA_PTR_TO_JSON(finishedTime, finishedTime_);
      DARABONBA_PTR_TO_JSON(phase, phase_);
      DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(serviceDeployments, serviceDeployments_);
    };
    friend void from_json(const Darabonba::Json& j, EnvironmentDeploymentStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(finishedTime, finishedTime_);
      DARABONBA_PTR_FROM_JSON(phase, phase_);
      DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(serviceDeployments, serviceDeployments_);
    };
    EnvironmentDeploymentStatus() = default ;
    EnvironmentDeploymentStatus(const EnvironmentDeploymentStatus &) = default ;
    EnvironmentDeploymentStatus(EnvironmentDeploymentStatus &&) = default ;
    EnvironmentDeploymentStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnvironmentDeploymentStatus() = default ;
    EnvironmentDeploymentStatus& operator=(const EnvironmentDeploymentStatus &) = default ;
    EnvironmentDeploymentStatus& operator=(EnvironmentDeploymentStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->finishedTime_ != nullptr
        && this->phase_ != nullptr && this->pipelineName_ != nullptr && this->serviceDeployments_ != nullptr; };
    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline string finishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
    inline EnvironmentDeploymentStatus& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline EnvironmentDeploymentStatus& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string pipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline EnvironmentDeploymentStatus& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // serviceDeployments Field Functions 
    bool hasServiceDeployments() const { return this->serviceDeployments_ != nullptr;};
    void deleteServiceDeployments() { this->serviceDeployments_ = nullptr;};
    inline const map<string, string> & serviceDeployments() const { DARABONBA_PTR_GET_CONST(serviceDeployments_, map<string, string>) };
    inline map<string, string> serviceDeployments() { DARABONBA_PTR_GET(serviceDeployments_, map<string, string>) };
    inline EnvironmentDeploymentStatus& setServiceDeployments(const map<string, string> & serviceDeployments) { DARABONBA_PTR_SET_VALUE(serviceDeployments_, serviceDeployments) };
    inline EnvironmentDeploymentStatus& setServiceDeployments(map<string, string> && serviceDeployments) { DARABONBA_PTR_SET_RVALUE(serviceDeployments_, serviceDeployments) };


  protected:
    std::shared_ptr<string> finishedTime_ = nullptr;
    std::shared_ptr<string> phase_ = nullptr;
    std::shared_ptr<string> pipelineName_ = nullptr;
    std::shared_ptr<map<string, string>> serviceDeployments_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
