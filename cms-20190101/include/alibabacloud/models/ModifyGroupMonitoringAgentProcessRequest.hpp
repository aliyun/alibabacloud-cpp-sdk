// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYGROUPMONITORINGAGENTPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYGROUPMONITORINGAGENTPROCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyGroupMonitoringAgentProcessRequestAlertConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyGroupMonitoringAgentProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyGroupMonitoringAgentProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MatchExpressFilterRelation, matchExpressFilterRelation_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyGroupMonitoringAgentProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MatchExpressFilterRelation, matchExpressFilterRelation_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyGroupMonitoringAgentProcessRequest() = default ;
    ModifyGroupMonitoringAgentProcessRequest(const ModifyGroupMonitoringAgentProcessRequest &) = default ;
    ModifyGroupMonitoringAgentProcessRequest(ModifyGroupMonitoringAgentProcessRequest &&) = default ;
    ModifyGroupMonitoringAgentProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyGroupMonitoringAgentProcessRequest() = default ;
    ModifyGroupMonitoringAgentProcessRequest& operator=(const ModifyGroupMonitoringAgentProcessRequest &) = default ;
    ModifyGroupMonitoringAgentProcessRequest& operator=(ModifyGroupMonitoringAgentProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertConfig_ == nullptr
        && return this->groupId_ == nullptr && return this->id_ == nullptr && return this->matchExpressFilterRelation_ == nullptr && return this->regionId_ == nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const vector<ModifyGroupMonitoringAgentProcessRequestAlertConfig> & alertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, vector<ModifyGroupMonitoringAgentProcessRequestAlertConfig>) };
    inline vector<ModifyGroupMonitoringAgentProcessRequestAlertConfig> alertConfig() { DARABONBA_PTR_GET(alertConfig_, vector<ModifyGroupMonitoringAgentProcessRequestAlertConfig>) };
    inline ModifyGroupMonitoringAgentProcessRequest& setAlertConfig(const vector<ModifyGroupMonitoringAgentProcessRequestAlertConfig> & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline ModifyGroupMonitoringAgentProcessRequest& setAlertConfig(vector<ModifyGroupMonitoringAgentProcessRequestAlertConfig> && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyGroupMonitoringAgentProcessRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModifyGroupMonitoringAgentProcessRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matchExpressFilterRelation Field Functions 
    bool hasMatchExpressFilterRelation() const { return this->matchExpressFilterRelation_ != nullptr;};
    void deleteMatchExpressFilterRelation() { this->matchExpressFilterRelation_ = nullptr;};
    inline string matchExpressFilterRelation() const { DARABONBA_PTR_GET_DEFAULT(matchExpressFilterRelation_, "") };
    inline ModifyGroupMonitoringAgentProcessRequest& setMatchExpressFilterRelation(string matchExpressFilterRelation) { DARABONBA_PTR_SET_VALUE(matchExpressFilterRelation_, matchExpressFilterRelation) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyGroupMonitoringAgentProcessRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The alert rule configurations.
    // 
    // This parameter is required.
    std::shared_ptr<vector<ModifyGroupMonitoringAgentProcessRequestAlertConfig>> alertConfig_ = nullptr;
    // The ID of the application group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the process monitoring task.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // The logical operator used between conditional expressions that are used to match instances. Valid values:
    // 
    // *   all
    // *   and
    // *   or
    std::shared_ptr<string> matchExpressFilterRelation_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
