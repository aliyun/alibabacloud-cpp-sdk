// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICEINSTANCELATESTDEPLOYMENT_HPP_
#define ALIBABACLOUD_MODELS_SERVICEINSTANCELATESTDEPLOYMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ServiceInstanceLatestDeployment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServiceInstanceLatestDeployment& obj) { 
      DARABONBA_PTR_TO_JSON(finishedTime, finishedTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(phase, phase_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ServiceInstanceLatestDeployment& obj) { 
      DARABONBA_PTR_FROM_JSON(finishedTime, finishedTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(phase, phase_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    ServiceInstanceLatestDeployment() = default ;
    ServiceInstanceLatestDeployment(const ServiceInstanceLatestDeployment &) = default ;
    ServiceInstanceLatestDeployment(ServiceInstanceLatestDeployment &&) = default ;
    ServiceInstanceLatestDeployment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServiceInstanceLatestDeployment() = default ;
    ServiceInstanceLatestDeployment& operator=(const ServiceInstanceLatestDeployment &) = default ;
    ServiceInstanceLatestDeployment& operator=(ServiceInstanceLatestDeployment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->finishedTime_ != nullptr
        && this->name_ != nullptr && this->phase_ != nullptr && this->startTime_ != nullptr; };
    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline string finishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
    inline ServiceInstanceLatestDeployment& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ServiceInstanceLatestDeployment& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ServiceInstanceLatestDeployment& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ServiceInstanceLatestDeployment& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> finishedTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> phase_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
