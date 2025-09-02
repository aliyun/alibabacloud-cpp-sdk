// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMINDSRESPONSEBODYDATAREMINDS_HPP_
#define ALIBABACLOUD_MODELS_LISTREMINDSRESPONSEBODYDATAREMINDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListRemindsResponseBodyDataReminds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemindsResponseBodyDataReminds& obj) { 
      DARABONBA_PTR_TO_JSON(AlertMethods, alertMethods_);
      DARABONBA_PTR_TO_JSON(AlertTargets, alertTargets_);
      DARABONBA_PTR_TO_JSON(AlertUnit, alertUnit_);
      DARABONBA_PTR_TO_JSON(BaselineIds, baselineIds_);
      DARABONBA_PTR_TO_JSON(BizProcessIds, bizProcessIds_);
      DARABONBA_PTR_TO_JSON(DndEnd, dndEnd_);
      DARABONBA_PTR_TO_JSON(DndStart, dndStart_);
      DARABONBA_PTR_TO_JSON(Founder, founder_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
      DARABONBA_PTR_TO_JSON(RemindId, remindId_);
      DARABONBA_PTR_TO_JSON(RemindName, remindName_);
      DARABONBA_PTR_TO_JSON(RemindType, remindType_);
      DARABONBA_PTR_TO_JSON(RemindUnit, remindUnit_);
      DARABONBA_PTR_TO_JSON(Useflag, useflag_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemindsResponseBodyDataReminds& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertMethods, alertMethods_);
      DARABONBA_PTR_FROM_JSON(AlertTargets, alertTargets_);
      DARABONBA_PTR_FROM_JSON(AlertUnit, alertUnit_);
      DARABONBA_PTR_FROM_JSON(BaselineIds, baselineIds_);
      DARABONBA_PTR_FROM_JSON(BizProcessIds, bizProcessIds_);
      DARABONBA_PTR_FROM_JSON(DndEnd, dndEnd_);
      DARABONBA_PTR_FROM_JSON(DndStart, dndStart_);
      DARABONBA_PTR_FROM_JSON(Founder, founder_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
      DARABONBA_PTR_FROM_JSON(RemindId, remindId_);
      DARABONBA_PTR_FROM_JSON(RemindName, remindName_);
      DARABONBA_PTR_FROM_JSON(RemindType, remindType_);
      DARABONBA_PTR_FROM_JSON(RemindUnit, remindUnit_);
      DARABONBA_PTR_FROM_JSON(Useflag, useflag_);
    };
    ListRemindsResponseBodyDataReminds() = default ;
    ListRemindsResponseBodyDataReminds(const ListRemindsResponseBodyDataReminds &) = default ;
    ListRemindsResponseBodyDataReminds(ListRemindsResponseBodyDataReminds &&) = default ;
    ListRemindsResponseBodyDataReminds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemindsResponseBodyDataReminds() = default ;
    ListRemindsResponseBodyDataReminds& operator=(const ListRemindsResponseBodyDataReminds &) = default ;
    ListRemindsResponseBodyDataReminds& operator=(ListRemindsResponseBodyDataReminds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertMethods_ != nullptr
        && this->alertTargets_ != nullptr && this->alertUnit_ != nullptr && this->baselineIds_ != nullptr && this->bizProcessIds_ != nullptr && this->dndEnd_ != nullptr
        && this->dndStart_ != nullptr && this->founder_ != nullptr && this->nodeIds_ != nullptr && this->projectIds_ != nullptr && this->remindId_ != nullptr
        && this->remindName_ != nullptr && this->remindType_ != nullptr && this->remindUnit_ != nullptr && this->useflag_ != nullptr; };
    // alertMethods Field Functions 
    bool hasAlertMethods() const { return this->alertMethods_ != nullptr;};
    void deleteAlertMethods() { this->alertMethods_ = nullptr;};
    inline const vector<string> & alertMethods() const { DARABONBA_PTR_GET_CONST(alertMethods_, vector<string>) };
    inline vector<string> alertMethods() { DARABONBA_PTR_GET(alertMethods_, vector<string>) };
    inline ListRemindsResponseBodyDataReminds& setAlertMethods(const vector<string> & alertMethods) { DARABONBA_PTR_SET_VALUE(alertMethods_, alertMethods) };
    inline ListRemindsResponseBodyDataReminds& setAlertMethods(vector<string> && alertMethods) { DARABONBA_PTR_SET_RVALUE(alertMethods_, alertMethods) };


    // alertTargets Field Functions 
    bool hasAlertTargets() const { return this->alertTargets_ != nullptr;};
    void deleteAlertTargets() { this->alertTargets_ = nullptr;};
    inline const vector<string> & alertTargets() const { DARABONBA_PTR_GET_CONST(alertTargets_, vector<string>) };
    inline vector<string> alertTargets() { DARABONBA_PTR_GET(alertTargets_, vector<string>) };
    inline ListRemindsResponseBodyDataReminds& setAlertTargets(const vector<string> & alertTargets) { DARABONBA_PTR_SET_VALUE(alertTargets_, alertTargets) };
    inline ListRemindsResponseBodyDataReminds& setAlertTargets(vector<string> && alertTargets) { DARABONBA_PTR_SET_RVALUE(alertTargets_, alertTargets) };


    // alertUnit Field Functions 
    bool hasAlertUnit() const { return this->alertUnit_ != nullptr;};
    void deleteAlertUnit() { this->alertUnit_ = nullptr;};
    inline string alertUnit() const { DARABONBA_PTR_GET_DEFAULT(alertUnit_, "") };
    inline ListRemindsResponseBodyDataReminds& setAlertUnit(string alertUnit) { DARABONBA_PTR_SET_VALUE(alertUnit_, alertUnit) };


    // baselineIds Field Functions 
    bool hasBaselineIds() const { return this->baselineIds_ != nullptr;};
    void deleteBaselineIds() { this->baselineIds_ = nullptr;};
    inline const vector<int64_t> & baselineIds() const { DARABONBA_PTR_GET_CONST(baselineIds_, vector<int64_t>) };
    inline vector<int64_t> baselineIds() { DARABONBA_PTR_GET(baselineIds_, vector<int64_t>) };
    inline ListRemindsResponseBodyDataReminds& setBaselineIds(const vector<int64_t> & baselineIds) { DARABONBA_PTR_SET_VALUE(baselineIds_, baselineIds) };
    inline ListRemindsResponseBodyDataReminds& setBaselineIds(vector<int64_t> && baselineIds) { DARABONBA_PTR_SET_RVALUE(baselineIds_, baselineIds) };


    // bizProcessIds Field Functions 
    bool hasBizProcessIds() const { return this->bizProcessIds_ != nullptr;};
    void deleteBizProcessIds() { this->bizProcessIds_ = nullptr;};
    inline const vector<int64_t> & bizProcessIds() const { DARABONBA_PTR_GET_CONST(bizProcessIds_, vector<int64_t>) };
    inline vector<int64_t> bizProcessIds() { DARABONBA_PTR_GET(bizProcessIds_, vector<int64_t>) };
    inline ListRemindsResponseBodyDataReminds& setBizProcessIds(const vector<int64_t> & bizProcessIds) { DARABONBA_PTR_SET_VALUE(bizProcessIds_, bizProcessIds) };
    inline ListRemindsResponseBodyDataReminds& setBizProcessIds(vector<int64_t> && bizProcessIds) { DARABONBA_PTR_SET_RVALUE(bizProcessIds_, bizProcessIds) };


    // dndEnd Field Functions 
    bool hasDndEnd() const { return this->dndEnd_ != nullptr;};
    void deleteDndEnd() { this->dndEnd_ = nullptr;};
    inline string dndEnd() const { DARABONBA_PTR_GET_DEFAULT(dndEnd_, "") };
    inline ListRemindsResponseBodyDataReminds& setDndEnd(string dndEnd) { DARABONBA_PTR_SET_VALUE(dndEnd_, dndEnd) };


    // dndStart Field Functions 
    bool hasDndStart() const { return this->dndStart_ != nullptr;};
    void deleteDndStart() { this->dndStart_ = nullptr;};
    inline string dndStart() const { DARABONBA_PTR_GET_DEFAULT(dndStart_, "") };
    inline ListRemindsResponseBodyDataReminds& setDndStart(string dndStart) { DARABONBA_PTR_SET_VALUE(dndStart_, dndStart) };


    // founder Field Functions 
    bool hasFounder() const { return this->founder_ != nullptr;};
    void deleteFounder() { this->founder_ = nullptr;};
    inline string founder() const { DARABONBA_PTR_GET_DEFAULT(founder_, "") };
    inline ListRemindsResponseBodyDataReminds& setFounder(string founder) { DARABONBA_PTR_SET_VALUE(founder_, founder) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<int64_t> & nodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<int64_t>) };
    inline vector<int64_t> nodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<int64_t>) };
    inline ListRemindsResponseBodyDataReminds& setNodeIds(const vector<int64_t> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline ListRemindsResponseBodyDataReminds& setNodeIds(vector<int64_t> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


    // projectIds Field Functions 
    bool hasProjectIds() const { return this->projectIds_ != nullptr;};
    void deleteProjectIds() { this->projectIds_ = nullptr;};
    inline const vector<int64_t> & projectIds() const { DARABONBA_PTR_GET_CONST(projectIds_, vector<int64_t>) };
    inline vector<int64_t> projectIds() { DARABONBA_PTR_GET(projectIds_, vector<int64_t>) };
    inline ListRemindsResponseBodyDataReminds& setProjectIds(const vector<int64_t> & projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };
    inline ListRemindsResponseBodyDataReminds& setProjectIds(vector<int64_t> && projectIds) { DARABONBA_PTR_SET_RVALUE(projectIds_, projectIds) };


    // remindId Field Functions 
    bool hasRemindId() const { return this->remindId_ != nullptr;};
    void deleteRemindId() { this->remindId_ = nullptr;};
    inline int64_t remindId() const { DARABONBA_PTR_GET_DEFAULT(remindId_, 0L) };
    inline ListRemindsResponseBodyDataReminds& setRemindId(int64_t remindId) { DARABONBA_PTR_SET_VALUE(remindId_, remindId) };


    // remindName Field Functions 
    bool hasRemindName() const { return this->remindName_ != nullptr;};
    void deleteRemindName() { this->remindName_ = nullptr;};
    inline string remindName() const { DARABONBA_PTR_GET_DEFAULT(remindName_, "") };
    inline ListRemindsResponseBodyDataReminds& setRemindName(string remindName) { DARABONBA_PTR_SET_VALUE(remindName_, remindName) };


    // remindType Field Functions 
    bool hasRemindType() const { return this->remindType_ != nullptr;};
    void deleteRemindType() { this->remindType_ = nullptr;};
    inline string remindType() const { DARABONBA_PTR_GET_DEFAULT(remindType_, "") };
    inline ListRemindsResponseBodyDataReminds& setRemindType(string remindType) { DARABONBA_PTR_SET_VALUE(remindType_, remindType) };


    // remindUnit Field Functions 
    bool hasRemindUnit() const { return this->remindUnit_ != nullptr;};
    void deleteRemindUnit() { this->remindUnit_ = nullptr;};
    inline string remindUnit() const { DARABONBA_PTR_GET_DEFAULT(remindUnit_, "") };
    inline ListRemindsResponseBodyDataReminds& setRemindUnit(string remindUnit) { DARABONBA_PTR_SET_VALUE(remindUnit_, remindUnit) };


    // useflag Field Functions 
    bool hasUseflag() const { return this->useflag_ != nullptr;};
    void deleteUseflag() { this->useflag_ = nullptr;};
    inline bool useflag() const { DARABONBA_PTR_GET_DEFAULT(useflag_, false) };
    inline ListRemindsResponseBodyDataReminds& setUseflag(bool useflag) { DARABONBA_PTR_SET_VALUE(useflag_, useflag) };


  protected:
    // The notification method. Valid values: MAIL, SMS, and PHONE. The value MAIL indicates that the notification is sent by email. Only DataWorks Professional Edition and more advanced editions support the PHONE notification method.
    std::shared_ptr<vector<string>> alertMethods_ = nullptr;
    // The IDs of the Alibaba Cloud accounts used by alert recipients.
    std::shared_ptr<vector<string>> alertTargets_ = nullptr;
    // The alert recipient. Valid values: OWNER and OTHER. The value OWNER indicates the node owner. The value OTHER indicates a specified user.
    std::shared_ptr<string> alertUnit_ = nullptr;
    // The IDs of the baselines to which the custom alert rule is applied. This parameter is returned if the value of the RemindUnit parameter is BASELINE.
    std::shared_ptr<vector<int64_t>> baselineIds_ = nullptr;
    // The IDs of the workflows to which the custom alert rule is applied. This parameter is returned if the value of the RemindUnit parameter is BIZPROCESS.
    std::shared_ptr<vector<int64_t>> bizProcessIds_ = nullptr;
    // The end time of the quiet hours. The time is in the hh:mm format. Valid values of hh: [0,23]. Valid values of mm: [0,59].
    std::shared_ptr<string> dndEnd_ = nullptr;
    // The start time of the quiet hours. The time is in the hh:mm format. Valid values of hh: [0,23]. Valid values of mm: [0,59].
    std::shared_ptr<string> dndStart_ = nullptr;
    // The ID of the Alibaba Cloud account used by the rule creator.
    std::shared_ptr<string> founder_ = nullptr;
    // The IDs of the nodes to which the custom alert rule is applied. This parameter is returned if the value of the RemindUnit parameter is NODE.
    std::shared_ptr<vector<int64_t>> nodeIds_ = nullptr;
    // The IDs of the workspaces to which the custom alert rule is applied. This parameter is returned if the value of the RemindUnit parameter is PROJECT.
    std::shared_ptr<vector<int64_t>> projectIds_ = nullptr;
    // The custom alert rule ID.
    std::shared_ptr<int64_t> remindId_ = nullptr;
    // The name of the custom alert rule.
    std::shared_ptr<string> remindName_ = nullptr;
    // The condition that triggers an alert. Valid values: FINISHED, UNFINISHED, ERROR, CYCLE_UNFINISHED, and TIMEOUT.
    std::shared_ptr<string> remindType_ = nullptr;
    // The type of the object to which the custom alert rule is applied. Valid values: NODE, BASELINE, PROJECT, and BIZPROCESS. The value NODE indicates a node. The value BASELINE indicates a baseline. The value PROJECT indicates a workspace. The value BIZPROCESS indicates a workflow.
    std::shared_ptr<string> remindUnit_ = nullptr;
    // Indicates whether the custom alert rule is enabled. Valid values: true and false.
    std::shared_ptr<bool> useflag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
