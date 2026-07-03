// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDSIEMPREDEFINEDRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDSIEMPREDEFINEDRULESREQUEST_HPP_
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
  class ListCloudSiemPredefinedRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudSiemPredefinedRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(AttCk, attCk_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventTransferType, eventTransferType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LogSource, logSource_);
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
    friend void from_json(const Darabonba::Json& j, ListCloudSiemPredefinedRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(AttCk, attCk_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventTransferType, eventTransferType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LogSource, logSource_);
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
    ListCloudSiemPredefinedRulesRequest() = default ;
    ListCloudSiemPredefinedRulesRequest(const ListCloudSiemPredefinedRulesRequest &) = default ;
    ListCloudSiemPredefinedRulesRequest(ListCloudSiemPredefinedRulesRequest &&) = default ;
    ListCloudSiemPredefinedRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudSiemPredefinedRulesRequest() = default ;
    ListCloudSiemPredefinedRulesRequest& operator=(const ListCloudSiemPredefinedRulesRequest &) = default ;
    ListCloudSiemPredefinedRulesRequest& operator=(ListCloudSiemPredefinedRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertType_ == nullptr
        && this->attCk_ == nullptr && this->currentPage_ == nullptr && this->endTime_ == nullptr && this->eventTransferType_ == nullptr && this->id_ == nullptr
        && this->logSource_ == nullptr && this->order_ == nullptr && this->orderField_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->roleFor_ == nullptr && this->roleType_ == nullptr && this->ruleName_ == nullptr && this->ruleType_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->threatLevel_ == nullptr; };
    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline ListCloudSiemPredefinedRulesRequest& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // attCk Field Functions 
    bool hasAttCk() const { return this->attCk_ != nullptr;};
    void deleteAttCk() { this->attCk_ = nullptr;};
    inline string getAttCk() const { DARABONBA_PTR_GET_DEFAULT(attCk_, "") };
    inline ListCloudSiemPredefinedRulesRequest& setAttCk(string attCk) { DARABONBA_PTR_SET_VALUE(attCk_, attCk) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCloudSiemPredefinedRulesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListCloudSiemPredefinedRulesRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventTransferType Field Functions 
    bool hasEventTransferType() const { return this->eventTransferType_ != nullptr;};
    void deleteEventTransferType() { this->eventTransferType_ = nullptr;};
    inline string getEventTransferType() const { DARABONBA_PTR_GET_DEFAULT(eventTransferType_, "") };
    inline ListCloudSiemPredefinedRulesRequest& setEventTransferType(string eventTransferType) { DARABONBA_PTR_SET_VALUE(eventTransferType_, eventTransferType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListCloudSiemPredefinedRulesRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // logSource Field Functions 
    bool hasLogSource() const { return this->logSource_ != nullptr;};
    void deleteLogSource() { this->logSource_ = nullptr;};
    inline string getLogSource() const { DARABONBA_PTR_GET_DEFAULT(logSource_, "") };
    inline ListCloudSiemPredefinedRulesRequest& setLogSource(string logSource) { DARABONBA_PTR_SET_VALUE(logSource_, logSource) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListCloudSiemPredefinedRulesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string getOrderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline ListCloudSiemPredefinedRulesRequest& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCloudSiemPredefinedRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCloudSiemPredefinedRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListCloudSiemPredefinedRulesRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline ListCloudSiemPredefinedRulesRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListCloudSiemPredefinedRulesRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ListCloudSiemPredefinedRulesRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListCloudSiemPredefinedRulesRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListCloudSiemPredefinedRulesRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // threatLevel Field Functions 
    bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
    void deleteThreatLevel() { this->threatLevel_ = nullptr;};
    inline const vector<string> & getThreatLevel() const { DARABONBA_PTR_GET_CONST(threatLevel_, vector<string>) };
    inline vector<string> getThreatLevel() { DARABONBA_PTR_GET(threatLevel_, vector<string>) };
    inline ListCloudSiemPredefinedRulesRequest& setThreatLevel(const vector<string> & threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };
    inline ListCloudSiemPredefinedRulesRequest& setThreatLevel(vector<string> && threatLevel) { DARABONBA_PTR_SET_RVALUE(threatLevel_, threatLevel) };


  protected:
    // The alert type.
    shared_ptr<string> alertType_ {};
    // The ATT\\&CK technique.
    shared_ptr<string> attCk_ {};
    // The page number. The value must be greater than or equal to 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The end of the time range to query. This value is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> endTime_ {};
    // The event generation method. Valid values:
    // 
    // - default: the default built-in method
    // 
    // - singleToSingle: An event is generated for each alert.
    // 
    // - allToSingle: An event is generated for all alerts in an epoch.
    shared_ptr<string> eventTransferType_ {};
    // The rule ID.
    shared_ptr<string> id_ {};
    // The log source.
    shared_ptr<string> logSource_ {};
    // The sort order. Valid values:
    // 
    // - desc: descending
    // 
    // - asc: ascending
    shared_ptr<string> order_ {};
    // The field to sort the rules by. Valid values:
    // 
    // - GmtModified: Sorts by modification time.
    // 
    // - Id: Sorts by rule ID. This is the default value.
    shared_ptr<string> orderField_ {};
    // The number of entries per page. The maximum value is 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The region where the Data Management center of the threat analysis feature is located. Select the region where your assets are located. Valid values:
    // 
    // - cn-hangzhou: assets in the Chinese mainland or China (Hong Kong)
    // 
    // - ap-southeast-1: assets outside China
    shared_ptr<string> regionId_ {};
    // The user ID that the administrator uses to switch to the perspective of a member.
    shared_ptr<int64_t> roleFor_ {};
    // The view type.
    // 
    // - 0: the view of the current Alibaba Cloud account.
    // 
    // - 1: the view of all accounts in the enterprise.
    shared_ptr<int32_t> roleType_ {};
    // The rule name. The name can contain only letters, digits, underscores (_), and periods (.).
    shared_ptr<string> ruleName_ {};
    // The rule type. Valid values:
    // 
    // - predefine: predefined
    // 
    // - customize: custom
    shared_ptr<string> ruleType_ {};
    // The start of the time range to query. This value is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> startTime_ {};
    // The rule status. Valid values:
    // 
    // - 0: initial
    // 
    // - 10: testing with simulated data
    // 
    // - 15: testing with production data
    // 
    // - 20: testing with production data is complete
    // 
    // - 100: published
    shared_ptr<int32_t> status_ {};
    // The threat level. The value is a JSON array. Valid values:
    // 
    // - serious: high
    // 
    // - suspicious: medium
    // 
    // - remind: low
    shared_ptr<vector<string>> threatLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
