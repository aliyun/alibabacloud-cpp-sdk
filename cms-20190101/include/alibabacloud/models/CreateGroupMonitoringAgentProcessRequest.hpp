// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPMONITORINGAGENTPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPMONITORINGAGENTPROCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateGroupMonitoringAgentProcessRequestAlertConfig.hpp>
#include <alibabacloud/models/CreateGroupMonitoringAgentProcessRequestMatchExpress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateGroupMonitoringAgentProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupMonitoringAgentProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MatchExpress, matchExpress_);
      DARABONBA_PTR_TO_JSON(MatchExpressFilterRelation, matchExpressFilterRelation_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupMonitoringAgentProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MatchExpress, matchExpress_);
      DARABONBA_PTR_FROM_JSON(MatchExpressFilterRelation, matchExpressFilterRelation_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateGroupMonitoringAgentProcessRequest() = default ;
    CreateGroupMonitoringAgentProcessRequest(const CreateGroupMonitoringAgentProcessRequest &) = default ;
    CreateGroupMonitoringAgentProcessRequest(CreateGroupMonitoringAgentProcessRequest &&) = default ;
    CreateGroupMonitoringAgentProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupMonitoringAgentProcessRequest() = default ;
    CreateGroupMonitoringAgentProcessRequest& operator=(const CreateGroupMonitoringAgentProcessRequest &) = default ;
    CreateGroupMonitoringAgentProcessRequest& operator=(CreateGroupMonitoringAgentProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertConfig_ == nullptr
        && return this->groupId_ == nullptr && return this->matchExpress_ == nullptr && return this->matchExpressFilterRelation_ == nullptr && return this->processName_ == nullptr && return this->regionId_ == nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const vector<CreateGroupMonitoringAgentProcessRequestAlertConfig> & alertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, vector<CreateGroupMonitoringAgentProcessRequestAlertConfig>) };
    inline vector<CreateGroupMonitoringAgentProcessRequestAlertConfig> alertConfig() { DARABONBA_PTR_GET(alertConfig_, vector<CreateGroupMonitoringAgentProcessRequestAlertConfig>) };
    inline CreateGroupMonitoringAgentProcessRequest& setAlertConfig(const vector<CreateGroupMonitoringAgentProcessRequestAlertConfig> & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline CreateGroupMonitoringAgentProcessRequest& setAlertConfig(vector<CreateGroupMonitoringAgentProcessRequestAlertConfig> && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateGroupMonitoringAgentProcessRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // matchExpress Field Functions 
    bool hasMatchExpress() const { return this->matchExpress_ != nullptr;};
    void deleteMatchExpress() { this->matchExpress_ = nullptr;};
    inline const vector<CreateGroupMonitoringAgentProcessRequestMatchExpress> & matchExpress() const { DARABONBA_PTR_GET_CONST(matchExpress_, vector<CreateGroupMonitoringAgentProcessRequestMatchExpress>) };
    inline vector<CreateGroupMonitoringAgentProcessRequestMatchExpress> matchExpress() { DARABONBA_PTR_GET(matchExpress_, vector<CreateGroupMonitoringAgentProcessRequestMatchExpress>) };
    inline CreateGroupMonitoringAgentProcessRequest& setMatchExpress(const vector<CreateGroupMonitoringAgentProcessRequestMatchExpress> & matchExpress) { DARABONBA_PTR_SET_VALUE(matchExpress_, matchExpress) };
    inline CreateGroupMonitoringAgentProcessRequest& setMatchExpress(vector<CreateGroupMonitoringAgentProcessRequestMatchExpress> && matchExpress) { DARABONBA_PTR_SET_RVALUE(matchExpress_, matchExpress) };


    // matchExpressFilterRelation Field Functions 
    bool hasMatchExpressFilterRelation() const { return this->matchExpressFilterRelation_ != nullptr;};
    void deleteMatchExpressFilterRelation() { this->matchExpressFilterRelation_ = nullptr;};
    inline string matchExpressFilterRelation() const { DARABONBA_PTR_GET_DEFAULT(matchExpressFilterRelation_, "") };
    inline CreateGroupMonitoringAgentProcessRequest& setMatchExpressFilterRelation(string matchExpressFilterRelation) { DARABONBA_PTR_SET_VALUE(matchExpressFilterRelation_, matchExpressFilterRelation) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline CreateGroupMonitoringAgentProcessRequest& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateGroupMonitoringAgentProcessRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The alert rule configurations.
    // 
    // Valid values of N: 1 to 3.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateGroupMonitoringAgentProcessRequestAlertConfig>> alertConfig_ = nullptr;
    // The ID of the application group.
    // 
    // For more information about how to obtain the ID of an application group, see [DescribeMonitorGroups](https://help.aliyun.com/document_detail/115032.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The expressions used to match instances.
    // 
    // Valid values of N: 1 to 3.
    std::shared_ptr<vector<CreateGroupMonitoringAgentProcessRequestMatchExpress>> matchExpress_ = nullptr;
    // The logical operator used between conditional expressions that are used to match instances. Valid values:
    // 
    // *   all
    // *   and
    // *   or
    std::shared_ptr<string> matchExpressFilterRelation_ = nullptr;
    // The process name.
    // 
    // This parameter is required.
    std::shared_ptr<string> processName_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
