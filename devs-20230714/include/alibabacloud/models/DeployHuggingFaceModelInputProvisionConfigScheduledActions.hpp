// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYHUGGINGFACEMODELINPUTPROVISIONCONFIGSCHEDULEDACTIONS_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYHUGGINGFACEMODELINPUTPROVISIONCONFIGSCHEDULEDACTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployHuggingFaceModelInputProvisionConfigScheduledActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployHuggingFaceModelInputProvisionConfigScheduledActions& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(scheduleExpression, scheduleExpression_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(target, target_);
      DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, DeployHuggingFaceModelInputProvisionConfigScheduledActions& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(scheduleExpression, scheduleExpression_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(target, target_);
      DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
    };
    DeployHuggingFaceModelInputProvisionConfigScheduledActions() = default ;
    DeployHuggingFaceModelInputProvisionConfigScheduledActions(const DeployHuggingFaceModelInputProvisionConfigScheduledActions &) = default ;
    DeployHuggingFaceModelInputProvisionConfigScheduledActions(DeployHuggingFaceModelInputProvisionConfigScheduledActions &&) = default ;
    DeployHuggingFaceModelInputProvisionConfigScheduledActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployHuggingFaceModelInputProvisionConfigScheduledActions() = default ;
    DeployHuggingFaceModelInputProvisionConfigScheduledActions& operator=(const DeployHuggingFaceModelInputProvisionConfigScheduledActions &) = default ;
    DeployHuggingFaceModelInputProvisionConfigScheduledActions& operator=(DeployHuggingFaceModelInputProvisionConfigScheduledActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->name_ != nullptr && this->scheduleExpression_ != nullptr && this->startTime_ != nullptr && this->target_ != nullptr && this->timeZone_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DeployHuggingFaceModelInputProvisionConfigScheduledActions& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeployHuggingFaceModelInputProvisionConfigScheduledActions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scheduleExpression Field Functions 
    bool hasScheduleExpression() const { return this->scheduleExpression_ != nullptr;};
    void deleteScheduleExpression() { this->scheduleExpression_ = nullptr;};
    inline string scheduleExpression() const { DARABONBA_PTR_GET_DEFAULT(scheduleExpression_, "") };
    inline DeployHuggingFaceModelInputProvisionConfigScheduledActions& setScheduleExpression(string scheduleExpression) { DARABONBA_PTR_SET_VALUE(scheduleExpression_, scheduleExpression) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DeployHuggingFaceModelInputProvisionConfigScheduledActions& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline int32_t target() const { DARABONBA_PTR_GET_DEFAULT(target_, 0) };
    inline DeployHuggingFaceModelInputProvisionConfigScheduledActions& setTarget(int32_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline DeployHuggingFaceModelInputProvisionConfigScheduledActions& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> scheduleExpression_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<int32_t> target_ = nullptr;
    std::shared_ptr<string> timeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
