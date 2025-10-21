// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEDULEDPLANEXECUTEDSTATUS_HPP_
#define ALIBABACLOUD_MODELS_SCHEDULEDPLANEXECUTEDSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ScheduledPlanExecutedStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScheduledPlanExecutedStatus& obj) { 
      DARABONBA_PTR_TO_JSON(restartType, restartType_);
      DARABONBA_PTR_TO_JSON(statusState, statusState_);
    };
    friend void from_json(const Darabonba::Json& j, ScheduledPlanExecutedStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(restartType, restartType_);
      DARABONBA_PTR_FROM_JSON(statusState, statusState_);
    };
    ScheduledPlanExecutedStatus() = default ;
    ScheduledPlanExecutedStatus(const ScheduledPlanExecutedStatus &) = default ;
    ScheduledPlanExecutedStatus(ScheduledPlanExecutedStatus &&) = default ;
    ScheduledPlanExecutedStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScheduledPlanExecutedStatus() = default ;
    ScheduledPlanExecutedStatus& operator=(const ScheduledPlanExecutedStatus &) = default ;
    ScheduledPlanExecutedStatus& operator=(ScheduledPlanExecutedStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->restartType_ == nullptr
        && return this->statusState_ == nullptr; };
    // restartType Field Functions 
    bool hasRestartType() const { return this->restartType_ != nullptr;};
    void deleteRestartType() { this->restartType_ = nullptr;};
    inline string restartType() const { DARABONBA_PTR_GET_DEFAULT(restartType_, "") };
    inline ScheduledPlanExecutedStatus& setRestartType(string restartType) { DARABONBA_PTR_SET_VALUE(restartType_, restartType) };


    // statusState Field Functions 
    bool hasStatusState() const { return this->statusState_ != nullptr;};
    void deleteStatusState() { this->statusState_ = nullptr;};
    inline string statusState() const { DARABONBA_PTR_GET_DEFAULT(statusState_, "") };
    inline ScheduledPlanExecutedStatus& setStatusState(string statusState) { DARABONBA_PTR_SET_VALUE(statusState_, statusState) };


  protected:
    std::shared_ptr<string> restartType_ = nullptr;
    std::shared_ptr<string> statusState_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
