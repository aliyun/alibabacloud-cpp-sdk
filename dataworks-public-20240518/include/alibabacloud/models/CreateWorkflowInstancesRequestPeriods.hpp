// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESREQUESTPERIODS_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESREQUESTPERIODS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateWorkflowInstancesRequestPeriodsBizDates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateWorkflowInstancesRequestPeriods : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkflowInstancesRequestPeriods& obj) { 
      DARABONBA_PTR_TO_JSON(BizDates, bizDates_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkflowInstancesRequestPeriods& obj) { 
      DARABONBA_PTR_FROM_JSON(BizDates, bizDates_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    CreateWorkflowInstancesRequestPeriods() = default ;
    CreateWorkflowInstancesRequestPeriods(const CreateWorkflowInstancesRequestPeriods &) = default ;
    CreateWorkflowInstancesRequestPeriods(CreateWorkflowInstancesRequestPeriods &&) = default ;
    CreateWorkflowInstancesRequestPeriods(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkflowInstancesRequestPeriods() = default ;
    CreateWorkflowInstancesRequestPeriods& operator=(const CreateWorkflowInstancesRequestPeriods &) = default ;
    CreateWorkflowInstancesRequestPeriods& operator=(CreateWorkflowInstancesRequestPeriods &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizDates_ != nullptr
        && this->endTime_ != nullptr && this->startTime_ != nullptr; };
    // bizDates Field Functions 
    bool hasBizDates() const { return this->bizDates_ != nullptr;};
    void deleteBizDates() { this->bizDates_ = nullptr;};
    inline const vector<Models::CreateWorkflowInstancesRequestPeriodsBizDates> & bizDates() const { DARABONBA_PTR_GET_CONST(bizDates_, vector<Models::CreateWorkflowInstancesRequestPeriodsBizDates>) };
    inline vector<Models::CreateWorkflowInstancesRequestPeriodsBizDates> bizDates() { DARABONBA_PTR_GET(bizDates_, vector<Models::CreateWorkflowInstancesRequestPeriodsBizDates>) };
    inline CreateWorkflowInstancesRequestPeriods& setBizDates(const vector<Models::CreateWorkflowInstancesRequestPeriodsBizDates> & bizDates) { DARABONBA_PTR_SET_VALUE(bizDates_, bizDates) };
    inline CreateWorkflowInstancesRequestPeriods& setBizDates(vector<Models::CreateWorkflowInstancesRequestPeriodsBizDates> && bizDates) { DARABONBA_PTR_SET_RVALUE(bizDates_, bizDates) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateWorkflowInstancesRequestPeriods& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateWorkflowInstancesRequestPeriods& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The data timestamps. You can specify up to seven data timestamps.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateWorkflowInstancesRequestPeriodsBizDates>> bizDates_ = nullptr;
    // The end time of data backfill. Configure this parameter in the `hh:mm:ss` format. The time must be in the 24-hour clock. Default value: 23:59:59.
    // 
    // If you configure this parameter, you must also configure the StartTime parameter.
    std::shared_ptr<string> endTime_ = nullptr;
    // The start time of data backfill. Configure this parameter in the `hh:mm:ss` format. The time must be in the 24-hour clock. Default value: 00:00:00.
    // 
    // If you configure this parameter, you must also configure the EndTime parameter.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
