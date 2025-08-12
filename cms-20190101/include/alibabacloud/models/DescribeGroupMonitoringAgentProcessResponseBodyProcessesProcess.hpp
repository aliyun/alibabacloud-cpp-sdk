// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPMONITORINGAGENTPROCESSRESPONSEBODYPROCESSESPROCESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPMONITORINGAGENTPROCESSRESPONSEBODYPROCESSESPROCESS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig.hpp>
#include <alibabacloud/models/DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MatchExpress, matchExpress_);
      DARABONBA_PTR_TO_JSON(MatchExpressFilterRelation, matchExpressFilterRelation_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MatchExpress, matchExpress_);
      DARABONBA_PTR_FROM_JSON(MatchExpressFilterRelation, matchExpressFilterRelation_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
    };
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess() = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess(const DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess &) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess(DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess &&) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess() = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess& operator=(const DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess &) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess& operator=(DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertConfig_ != nullptr
        && this->groupId_ != nullptr && this->id_ != nullptr && this->matchExpress_ != nullptr && this->matchExpressFilterRelation_ != nullptr && this->processName_ != nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig & alertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig) };
    inline Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig alertConfig() { DARABONBA_PTR_GET(alertConfig_, Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig) };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess& setAlertConfig(const Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess& setAlertConfig(Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matchExpress Field Functions 
    bool hasMatchExpress() const { return this->matchExpress_ != nullptr;};
    void deleteMatchExpress() { this->matchExpress_ = nullptr;};
    inline const Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress & matchExpress() const { DARABONBA_PTR_GET_CONST(matchExpress_, Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress) };
    inline Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress matchExpress() { DARABONBA_PTR_GET(matchExpress_, Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress) };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess& setMatchExpress(const Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress & matchExpress) { DARABONBA_PTR_SET_VALUE(matchExpress_, matchExpress) };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess& setMatchExpress(Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress && matchExpress) { DARABONBA_PTR_SET_RVALUE(matchExpress_, matchExpress) };


    // matchExpressFilterRelation Field Functions 
    bool hasMatchExpressFilterRelation() const { return this->matchExpressFilterRelation_ != nullptr;};
    void deleteMatchExpressFilterRelation() { this->matchExpressFilterRelation_ = nullptr;};
    inline string matchExpressFilterRelation() const { DARABONBA_PTR_GET_DEFAULT(matchExpressFilterRelation_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess& setMatchExpressFilterRelation(string matchExpressFilterRelation) { DARABONBA_PTR_SET_VALUE(matchExpressFilterRelation_, matchExpressFilterRelation) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


  protected:
    // The alert rule configurations.
    std::shared_ptr<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig> alertConfig_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the process monitoring task.
    std::shared_ptr<string> id_ = nullptr;
    // The matching conditions.
    // 
    // >  Only the instances that meet the conditional expressions are monitored by the process monitoring task.
    std::shared_ptr<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress> matchExpress_ = nullptr;
    // The logical operator used between conditional expressions that are used to match instances. Valid values:
    // 
    // *   all
    // *   and
    // *   or
    std::shared_ptr<string> matchExpressFilterRelation_ = nullptr;
    // The process name.
    std::shared_ptr<string> processName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
