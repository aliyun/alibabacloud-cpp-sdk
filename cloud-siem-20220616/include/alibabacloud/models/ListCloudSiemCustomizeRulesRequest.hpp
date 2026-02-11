// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDSIEMCUSTOMIZERULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDSIEMCUSTOMIZERULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListCloudSiemCustomizeRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudSiemCustomizeRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderField, orderField_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudSiemCustomizeRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
    };
    ListCloudSiemCustomizeRulesRequest() = default ;
    ListCloudSiemCustomizeRulesRequest(const ListCloudSiemCustomizeRulesRequest &) = default ;
    ListCloudSiemCustomizeRulesRequest(ListCloudSiemCustomizeRulesRequest &&) = default ;
    ListCloudSiemCustomizeRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudSiemCustomizeRulesRequest() = default ;
    ListCloudSiemCustomizeRulesRequest& operator=(const ListCloudSiemCustomizeRulesRequest &) = default ;
    ListCloudSiemCustomizeRulesRequest& operator=(ListCloudSiemCustomizeRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertType_ == nullptr
        && this->currentPage_ == nullptr && this->endTime_ == nullptr && this->id_ == nullptr && this->order_ == nullptr && this->orderField_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr && this->ruleName_ == nullptr
        && this->ruleType_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->threatLevel_ == nullptr; };
    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline ListCloudSiemCustomizeRulesRequest& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCloudSiemCustomizeRulesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListCloudSiemCustomizeRulesRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListCloudSiemCustomizeRulesRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListCloudSiemCustomizeRulesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string getOrderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline ListCloudSiemCustomizeRulesRequest& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCloudSiemCustomizeRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCloudSiemCustomizeRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListCloudSiemCustomizeRulesRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline ListCloudSiemCustomizeRulesRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListCloudSiemCustomizeRulesRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ListCloudSiemCustomizeRulesRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListCloudSiemCustomizeRulesRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListCloudSiemCustomizeRulesRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // threatLevel Field Functions 
    bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
    void deleteThreatLevel() { this->threatLevel_ = nullptr;};
    inline const vector<string> & getThreatLevel() const { DARABONBA_PTR_GET_CONST(threatLevel_, vector<string>) };
    inline vector<string> getThreatLevel() { DARABONBA_PTR_GET(threatLevel_, vector<string>) };
    inline ListCloudSiemCustomizeRulesRequest& setThreatLevel(const vector<string> & threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };
    inline ListCloudSiemCustomizeRulesRequest& setThreatLevel(vector<string> && threatLevel) { DARABONBA_PTR_SET_RVALUE(threatLevel_, threatLevel) };


  protected:
    // The alert type.
    shared_ptr<string> alertType_ {};
    // The page number. Pages start from page 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The end of the time range to query. Unit: milliseconds.
    shared_ptr<int64_t> endTime_ {};
    // The ID of the custom rule.
    shared_ptr<string> id_ {};
    // The sort method. Valid values:
    // 
    // *   desc: descending order.
    // *   asc: ascending order.
    shared_ptr<string> order_ {};
    // The field that is used to sort the rules. Valid values:
    // 
    // *   GmtModified: The rules are sorted based on the modification time.
    // *   Id (default): The rules are sorted based on the rule ID.
    shared_ptr<string> orderField_ {};
    // The number of entries per page. The value can be up to 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The data management center of the threat analysis feature. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   **cn-hangzhou**: Your assets reside in regions in China.
    // *   **ap-southeast-1**: Your assets reside in regions outside China.
    shared_ptr<string> regionId_ {};
    // The ID of the destination account to which you switch the view from the management account.
    shared_ptr<int64_t> roleFor_ {};
    // The type of the view. Valid values:
    // 
    // *   0: view of the current Alibaba Cloud account.
    // *   1: view of all accounts for the enterprise.
    shared_ptr<int32_t> roleType_ {};
    // The name of the rule. The name can contain letters, digits, underscores (_), and periods (.).
    shared_ptr<string> ruleName_ {};
    // The type of the rule. Valid values:
    // 
    // *   **predefine**
    // *   **customize**
    shared_ptr<string> ruleType_ {};
    // The beginning of the time range to query. Unit: milliseconds.
    shared_ptr<int64_t> startTime_ {};
    // The status of the rule. Valid values:
    // 
    // *   **0**: The rule is in the initial state.
    // *   **10**: The simulation data is tested.
    // *   **15**: The business data is being tested.
    // *   **20**: The business data test is complete.
    // *   **100**: The rule is in effect.
    shared_ptr<int32_t> status_ {};
    // The threat level. The value must be a JSON array. Valid values:
    // 
    // *   **serious**: high-risk.
    // *   **suspicious**: medium-risk.
    // *   **remind**: low-risk.
    shared_ptr<vector<string>> threatLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
