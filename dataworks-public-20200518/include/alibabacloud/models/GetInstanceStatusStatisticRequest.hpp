// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESTATUSSTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESTATUSSTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetInstanceStatusStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceStatusStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(DagType, dagType_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SchedulerPeriod, schedulerPeriod_);
      DARABONBA_PTR_TO_JSON(SchedulerType, schedulerType_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceStatusStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(DagType, dagType_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SchedulerPeriod, schedulerPeriod_);
      DARABONBA_PTR_FROM_JSON(SchedulerType, schedulerType_);
    };
    GetInstanceStatusStatisticRequest() = default ;
    GetInstanceStatusStatisticRequest(const GetInstanceStatusStatisticRequest &) = default ;
    GetInstanceStatusStatisticRequest(GetInstanceStatusStatisticRequest &&) = default ;
    GetInstanceStatusStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceStatusStatisticRequest() = default ;
    GetInstanceStatusStatisticRequest& operator=(const GetInstanceStatusStatisticRequest &) = default ;
    GetInstanceStatusStatisticRequest& operator=(GetInstanceStatusStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizDate_ != nullptr
        && this->dagType_ != nullptr && this->projectEnv_ != nullptr && this->projectId_ != nullptr && this->schedulerPeriod_ != nullptr && this->schedulerType_ != nullptr; };
    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline string bizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
    inline GetInstanceStatusStatisticRequest& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // dagType Field Functions 
    bool hasDagType() const { return this->dagType_ != nullptr;};
    void deleteDagType() { this->dagType_ = nullptr;};
    inline string dagType() const { DARABONBA_PTR_GET_DEFAULT(dagType_, "") };
    inline GetInstanceStatusStatisticRequest& setDagType(string dagType) { DARABONBA_PTR_SET_VALUE(dagType_, dagType) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline GetInstanceStatusStatisticRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetInstanceStatusStatisticRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // schedulerPeriod Field Functions 
    bool hasSchedulerPeriod() const { return this->schedulerPeriod_ != nullptr;};
    void deleteSchedulerPeriod() { this->schedulerPeriod_ = nullptr;};
    inline string schedulerPeriod() const { DARABONBA_PTR_GET_DEFAULT(schedulerPeriod_, "") };
    inline GetInstanceStatusStatisticRequest& setSchedulerPeriod(string schedulerPeriod) { DARABONBA_PTR_SET_VALUE(schedulerPeriod_, schedulerPeriod) };


    // schedulerType Field Functions 
    bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
    void deleteSchedulerType() { this->schedulerType_ = nullptr;};
    inline string schedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
    inline GetInstanceStatusStatisticRequest& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


  protected:
    // The date on which the numbers of instances in different states are obtained. Specify the date in the yyyy-MM-dd format.
    // 
    // This parameter is required.
    std::shared_ptr<string> bizDate_ = nullptr;
    // The type of the directed acyclic graph (DAG). Valid values:
    // 
    // *   MANUAL: DAG for a manually triggered workflow
    // *   SMOKE_TEST: DAG for a smoke testing workflow
    // *   SUPPLY_DATA: DAG for a data backfill instance
    // *   BUSINESS_PROCESS_DAG: DAG for a one-time workflow
    // 
    // <!---->
    // 
    // *   DAILY
    // *   MANUAL
    // *   SMOKE_TEST
    // *   SUPPLY_DATA
    // *   BUSINESS_PROCESS_DAG
    std::shared_ptr<string> dagType_ = nullptr;
    // The runtime environment. Valid values: PROD and DEV.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectEnv_ = nullptr;
    // The DataWorks workspace ID. You can log on to the DataWorks console and go to the Workspace page to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The scheduling cycle. Valid values:
    // 
    // *   MINUTE
    // *   HOUR
    // *   DAY
    // *   WEEK
    // *   MONTH
    std::shared_ptr<string> schedulerPeriod_ = nullptr;
    // The scheduling type of the node. Valid values:
    // 
    // *   NORMAL: auto triggered node
    // *   MANUAL: manually triggered node
    // *   PAUSE: paused node
    // *   SKIP: dry-run node
    std::shared_ptr<string> schedulerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
