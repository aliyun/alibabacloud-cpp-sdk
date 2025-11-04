// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBREQUESTSCHEDULECONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBREQUESTSCHEDULECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSnapshotJobRequestScheduleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSnapshotJobRequestScheduleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSnapshotJobRequestScheduleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
    };
    SubmitSnapshotJobRequestScheduleConfig() = default ;
    SubmitSnapshotJobRequestScheduleConfig(const SubmitSnapshotJobRequestScheduleConfig &) = default ;
    SubmitSnapshotJobRequestScheduleConfig(SubmitSnapshotJobRequestScheduleConfig &&) = default ;
    SubmitSnapshotJobRequestScheduleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSnapshotJobRequestScheduleConfig() = default ;
    SubmitSnapshotJobRequestScheduleConfig& operator=(const SubmitSnapshotJobRequestScheduleConfig &) = default ;
    SubmitSnapshotJobRequestScheduleConfig& operator=(SubmitSnapshotJobRequestScheduleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pipelineId_ == nullptr; };
    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline SubmitSnapshotJobRequestScheduleConfig& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


  protected:
    // The ID of the ApsaraVideo Media Processing (MPS) queue that is used to run the job.
    std::shared_ptr<string> pipelineId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
