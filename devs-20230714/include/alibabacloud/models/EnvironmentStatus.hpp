// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENVIRONMENTSTATUS_HPP_
#define ALIBABACLOUD_MODELS_ENVIRONMENTSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/Devs20230714.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class EnvironmentStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnvironmentStatus& obj) { 
      DARABONBA_PTR_TO_JSON(latestEnvironmentDeploymentName, latestEnvironmentDeploymentName_);
      DARABONBA_PTR_TO_JSON(observedGeneration, observedGeneration_);
      DARABONBA_PTR_TO_JSON(observedTime, observedTime_);
      DARABONBA_PTR_TO_JSON(servicesInstances, servicesInstances_);
      DARABONBA_PTR_TO_JSON(servicesWithPendingChanges, servicesWithPendingChanges_);
    };
    friend void from_json(const Darabonba::Json& j, EnvironmentStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(latestEnvironmentDeploymentName, latestEnvironmentDeploymentName_);
      DARABONBA_PTR_FROM_JSON(observedGeneration, observedGeneration_);
      DARABONBA_PTR_FROM_JSON(observedTime, observedTime_);
      DARABONBA_PTR_FROM_JSON(servicesInstances, servicesInstances_);
      DARABONBA_PTR_FROM_JSON(servicesWithPendingChanges, servicesWithPendingChanges_);
    };
    EnvironmentStatus() = default ;
    EnvironmentStatus(const EnvironmentStatus &) = default ;
    EnvironmentStatus(EnvironmentStatus &&) = default ;
    EnvironmentStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnvironmentStatus() = default ;
    EnvironmentStatus& operator=(const EnvironmentStatus &) = default ;
    EnvironmentStatus& operator=(EnvironmentStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->latestEnvironmentDeploymentName_ != nullptr
        && this->observedGeneration_ != nullptr && this->observedTime_ != nullptr && this->servicesInstances_ != nullptr && this->servicesWithPendingChanges_ != nullptr; };
    // latestEnvironmentDeploymentName Field Functions 
    bool hasLatestEnvironmentDeploymentName() const { return this->latestEnvironmentDeploymentName_ != nullptr;};
    void deleteLatestEnvironmentDeploymentName() { this->latestEnvironmentDeploymentName_ = nullptr;};
    inline string latestEnvironmentDeploymentName() const { DARABONBA_PTR_GET_DEFAULT(latestEnvironmentDeploymentName_, "") };
    inline EnvironmentStatus& setLatestEnvironmentDeploymentName(string latestEnvironmentDeploymentName) { DARABONBA_PTR_SET_VALUE(latestEnvironmentDeploymentName_, latestEnvironmentDeploymentName) };


    // observedGeneration Field Functions 
    bool hasObservedGeneration() const { return this->observedGeneration_ != nullptr;};
    void deleteObservedGeneration() { this->observedGeneration_ = nullptr;};
    inline int64_t observedGeneration() const { DARABONBA_PTR_GET_DEFAULT(observedGeneration_, 0L) };
    inline EnvironmentStatus& setObservedGeneration(int64_t observedGeneration) { DARABONBA_PTR_SET_VALUE(observedGeneration_, observedGeneration) };


    // observedTime Field Functions 
    bool hasObservedTime() const { return this->observedTime_ != nullptr;};
    void deleteObservedTime() { this->observedTime_ = nullptr;};
    inline string observedTime() const { DARABONBA_PTR_GET_DEFAULT(observedTime_, "") };
    inline EnvironmentStatus& setObservedTime(string observedTime) { DARABONBA_PTR_SET_VALUE(observedTime_, observedTime) };


    // servicesInstances Field Functions 
    bool hasServicesInstances() const { return this->servicesInstances_ != nullptr;};
    void deleteServicesInstances() { this->servicesInstances_ = nullptr;};
    inline const map<string, ServiceInstance> & servicesInstances() const { DARABONBA_PTR_GET_CONST(servicesInstances_, map<string, ServiceInstance>) };
    inline map<string, ServiceInstance> servicesInstances() { DARABONBA_PTR_GET(servicesInstances_, map<string, ServiceInstance>) };
    inline EnvironmentStatus& setServicesInstances(const map<string, ServiceInstance> & servicesInstances) { DARABONBA_PTR_SET_VALUE(servicesInstances_, servicesInstances) };
    inline EnvironmentStatus& setServicesInstances(map<string, ServiceInstance> && servicesInstances) { DARABONBA_PTR_SET_RVALUE(servicesInstances_, servicesInstances) };


    // servicesWithPendingChanges Field Functions 
    bool hasServicesWithPendingChanges() const { return this->servicesWithPendingChanges_ != nullptr;};
    void deleteServicesWithPendingChanges() { this->servicesWithPendingChanges_ = nullptr;};
    inline const vector<string> & servicesWithPendingChanges() const { DARABONBA_PTR_GET_CONST(servicesWithPendingChanges_, vector<string>) };
    inline vector<string> servicesWithPendingChanges() { DARABONBA_PTR_GET(servicesWithPendingChanges_, vector<string>) };
    inline EnvironmentStatus& setServicesWithPendingChanges(const vector<string> & servicesWithPendingChanges) { DARABONBA_PTR_SET_VALUE(servicesWithPendingChanges_, servicesWithPendingChanges) };
    inline EnvironmentStatus& setServicesWithPendingChanges(vector<string> && servicesWithPendingChanges) { DARABONBA_PTR_SET_RVALUE(servicesWithPendingChanges_, servicesWithPendingChanges) };


  protected:
    std::shared_ptr<string> latestEnvironmentDeploymentName_ = nullptr;
    std::shared_ptr<int64_t> observedGeneration_ = nullptr;
    std::shared_ptr<string> observedTime_ = nullptr;
    std::shared_ptr<map<string, ServiceInstance>> servicesInstances_ = nullptr;
    std::shared_ptr<vector<string>> servicesWithPendingChanges_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
