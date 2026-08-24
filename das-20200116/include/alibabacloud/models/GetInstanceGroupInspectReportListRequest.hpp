// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEGROUPINSPECTREPORTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEGROUPINSPECTREPORTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetInstanceGroupInspectReportListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceGroupInspectReportListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceGroupInspectReportListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetInstanceGroupInspectReportListRequest() = default ;
    GetInstanceGroupInspectReportListRequest(const GetInstanceGroupInspectReportListRequest &) = default ;
    GetInstanceGroupInspectReportListRequest(GetInstanceGroupInspectReportListRequest &&) = default ;
    GetInstanceGroupInspectReportListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceGroupInspectReportListRequest() = default ;
    GetInstanceGroupInspectReportListRequest& operator=(const GetInstanceGroupInspectReportListRequest &) = default ;
    GetInstanceGroupInspectReportListRequest& operator=(GetInstanceGroupInspectReportListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->endTime_ == nullptr && this->groupId_ == nullptr && this->reportType_ == nullptr && this->startTime_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline GetInstanceGroupInspectReportListRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetInstanceGroupInspectReportListRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline GetInstanceGroupInspectReportListRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline GetInstanceGroupInspectReportListRequest& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetInstanceGroupInspectReportListRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Optional. By default, the default Agent is used. You can also specify the Agent that was generated after DAS Agent was activated or that was manually created.
    shared_ptr<string> agentId_ {};
    // The end timestamp.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // Reserved parameter.
    shared_ptr<string> groupId_ {};
    shared_ptr<string> reportType_ {};
    // The start timestamp.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
