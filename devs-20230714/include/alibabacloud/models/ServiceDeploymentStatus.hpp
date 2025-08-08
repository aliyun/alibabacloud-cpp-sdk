// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICEDEPLOYMENTSTATUS_HPP_
#define ALIBABACLOUD_MODELS_SERVICEDEPLOYMENTSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ServiceDeploymentStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServiceDeploymentStatus& obj) { 
      DARABONBA_PTR_TO_JSON(finishedTime, finishedTime_);
      DARABONBA_PTR_TO_JSON(phase, phase_);
      DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, ServiceDeploymentStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(finishedTime, finishedTime_);
      DARABONBA_PTR_FROM_JSON(phase, phase_);
      DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
    };
    ServiceDeploymentStatus() = default ;
    ServiceDeploymentStatus(const ServiceDeploymentStatus &) = default ;
    ServiceDeploymentStatus(ServiceDeploymentStatus &&) = default ;
    ServiceDeploymentStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServiceDeploymentStatus() = default ;
    ServiceDeploymentStatus& operator=(const ServiceDeploymentStatus &) = default ;
    ServiceDeploymentStatus& operator=(ServiceDeploymentStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->finishedTime_ != nullptr
        && this->phase_ != nullptr && this->pipelineName_ != nullptr && this->startTime_ != nullptr && this->taskName_ != nullptr; };
    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline string finishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
    inline ServiceDeploymentStatus& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ServiceDeploymentStatus& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string pipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline ServiceDeploymentStatus& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ServiceDeploymentStatus& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ServiceDeploymentStatus& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    std::shared_ptr<string> finishedTime_ = nullptr;
    std::shared_ptr<string> phase_ = nullptr;
    std::shared_ptr<string> pipelineName_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
