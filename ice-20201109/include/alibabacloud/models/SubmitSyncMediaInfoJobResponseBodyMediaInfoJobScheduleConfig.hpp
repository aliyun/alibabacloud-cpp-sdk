// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSYNCMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOBSCHEDULECONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSYNCMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOBSCHEDULECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
    };
    SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig() = default ;
    SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig(const SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig &) = default ;
    SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig(SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig &&) = default ;
    SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig() = default ;
    SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig& operator=(const SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig &) = default ;
    SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig& operator=(SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig &&) = default ;
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
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


  protected:
    // The ID of the MPS queue to which the job was submitted.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The priority of the job. Valid values: 1 to 10. The greater the value, the higher the priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
