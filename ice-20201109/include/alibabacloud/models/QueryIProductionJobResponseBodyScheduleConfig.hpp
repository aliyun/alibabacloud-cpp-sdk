// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYIPRODUCTIONJOBRESPONSEBODYSCHEDULECONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYIPRODUCTIONJOBRESPONSEBODYSCHEDULECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryIProductionJobResponseBodyScheduleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryIProductionJobResponseBodyScheduleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
    };
    friend void from_json(const Darabonba::Json& j, QueryIProductionJobResponseBodyScheduleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
    };
    QueryIProductionJobResponseBodyScheduleConfig() = default ;
    QueryIProductionJobResponseBodyScheduleConfig(const QueryIProductionJobResponseBodyScheduleConfig &) = default ;
    QueryIProductionJobResponseBodyScheduleConfig(QueryIProductionJobResponseBodyScheduleConfig &&) = default ;
    QueryIProductionJobResponseBodyScheduleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryIProductionJobResponseBodyScheduleConfig() = default ;
    QueryIProductionJobResponseBodyScheduleConfig& operator=(const QueryIProductionJobResponseBodyScheduleConfig &) = default ;
    QueryIProductionJobResponseBodyScheduleConfig& operator=(QueryIProductionJobResponseBodyScheduleConfig &&) = default ;
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
    inline QueryIProductionJobResponseBodyScheduleConfig& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline QueryIProductionJobResponseBodyScheduleConfig& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


  protected:
    // The ID of the ApsaraVideo Media Processing (MPS) queue.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The priority of the job in the MPS queue to which the job is added.
    // 
    // *   A value of 10 indicates the highest priority.
    // *   Default value: **6**.
    std::shared_ptr<int32_t> priority_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
