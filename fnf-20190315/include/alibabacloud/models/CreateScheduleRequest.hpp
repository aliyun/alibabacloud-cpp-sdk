// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class CreateScheduleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(ScheduleName, scheduleName_);
      DARABONBA_PTR_TO_JSON(SignatureVersion, signatureVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(ScheduleName, scheduleName_);
      DARABONBA_PTR_FROM_JSON(SignatureVersion, signatureVersion_);
    };
    CreateScheduleRequest() = default ;
    CreateScheduleRequest(const CreateScheduleRequest &) = default ;
    CreateScheduleRequest(CreateScheduleRequest &&) = default ;
    CreateScheduleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduleRequest() = default ;
    CreateScheduleRequest& operator=(const CreateScheduleRequest &) = default ;
    CreateScheduleRequest& operator=(CreateScheduleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cronExpression_ == nullptr
        && return this->description_ == nullptr && return this->enable_ == nullptr && return this->flowName_ == nullptr && return this->payload_ == nullptr && return this->scheduleName_ == nullptr
        && return this->signatureVersion_ == nullptr; };
    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline CreateScheduleRequest& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateScheduleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateScheduleRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline CreateScheduleRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline string payload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
    inline CreateScheduleRequest& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


    // scheduleName Field Functions 
    bool hasScheduleName() const { return this->scheduleName_ != nullptr;};
    void deleteScheduleName() { this->scheduleName_ = nullptr;};
    inline string scheduleName() const { DARABONBA_PTR_GET_DEFAULT(scheduleName_, "") };
    inline CreateScheduleRequest& setScheduleName(string scheduleName) { DARABONBA_PTR_SET_VALUE(scheduleName_, scheduleName) };


    // signatureVersion Field Functions 
    bool hasSignatureVersion() const { return this->signatureVersion_ != nullptr;};
    void deleteSignatureVersion() { this->signatureVersion_ = nullptr;};
    inline string signatureVersion() const { DARABONBA_PTR_GET_DEFAULT(signatureVersion_, "") };
    inline CreateScheduleRequest& setSignatureVersion(string signatureVersion) { DARABONBA_PTR_SET_VALUE(signatureVersion_, signatureVersion) };


  protected:
    // The CRON expression.
    // 
    // This parameter is required.
    std::shared_ptr<string> cronExpression_ = nullptr;
    // The description of the time-based schedule.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to enable the time-based schedule. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enable_ = nullptr;
    // The name of the workflow that is associated with the time-based schedule.
    // 
    // This parameter is required.
    std::shared_ptr<string> flowName_ = nullptr;
    // The trigger message of the time-based schedule. Specify the value in the JSON format.
    std::shared_ptr<string> payload_ = nullptr;
    // The name of the time-based schedule. The name must meet the following conventions:
    // 
    // *   The name can contain letters, digits, underscores (_), and hyphens (-).
    // *   The name must start with a letter or an underscore (_).
    // *   It is case-sensitive.
    // *   The name must be 1 to 128 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> scheduleName_ = nullptr;
    std::shared_ptr<string> signatureVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
