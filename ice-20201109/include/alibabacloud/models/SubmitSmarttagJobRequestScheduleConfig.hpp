// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTTAGJOBREQUESTSCHEDULECONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTTAGJOBREQUESTSCHEDULECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSmarttagJobRequestScheduleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmarttagJobRequestScheduleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmarttagJobRequestScheduleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
    };
    SubmitSmarttagJobRequestScheduleConfig() = default ;
    SubmitSmarttagJobRequestScheduleConfig(const SubmitSmarttagJobRequestScheduleConfig &) = default ;
    SubmitSmarttagJobRequestScheduleConfig(SubmitSmarttagJobRequestScheduleConfig &&) = default ;
    SubmitSmarttagJobRequestScheduleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmarttagJobRequestScheduleConfig() = default ;
    SubmitSmarttagJobRequestScheduleConfig& operator=(const SubmitSmarttagJobRequestScheduleConfig &) = default ;
    SubmitSmarttagJobRequestScheduleConfig& operator=(SubmitSmarttagJobRequestScheduleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pipelineId_ == nullptr
        && return this->priority_ == nullptr; };
    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline SubmitSmarttagJobRequestScheduleConfig& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline SubmitSmarttagJobRequestScheduleConfig& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


  protected:
    // The ID of the ApsaraVideo Media Processing (MPS) queue to which you want to submit the smart tagging job. The MPS queue is bound to an SMQ queue. This parameter specifies the default MPS queue. By default, an MPS queue can process a maximum of two concurrent smart tagging jobs. To increase the limit, submit a ticket.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The job priority. This parameter is not implemented. You can leave this parameter empty or enter a random value.
    std::shared_ptr<string> priority_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
