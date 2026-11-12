// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGEALERTRULESRESULT_HPP_
#define ALIBABACLOUD_MODELS_MANAGEALERTRULESRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AlertRuleV2.hpp>
#include <vector>
#include <alibabacloud/models/DryRunResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ManageAlertRulesResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManageAlertRulesResult& obj) { 
      DARABONBA_PTR_TO_JSON(alertRule, alertRule_);
      DARABONBA_PTR_TO_JSON(deletedCount, deletedCount_);
      DARABONBA_PTR_TO_JSON(deletedUuidList, deletedUuidList_);
      DARABONBA_PTR_TO_JSON(drillUuid, drillUuid_);
      DARABONBA_PTR_TO_JSON(dryRunResult, dryRunResult_);
      DARABONBA_PTR_TO_JSON(updatedCount, updatedCount_);
      DARABONBA_PTR_TO_JSON(updatedUuidList, updatedUuidList_);
    };
    friend void from_json(const Darabonba::Json& j, ManageAlertRulesResult& obj) { 
      DARABONBA_PTR_FROM_JSON(alertRule, alertRule_);
      DARABONBA_PTR_FROM_JSON(deletedCount, deletedCount_);
      DARABONBA_PTR_FROM_JSON(deletedUuidList, deletedUuidList_);
      DARABONBA_PTR_FROM_JSON(drillUuid, drillUuid_);
      DARABONBA_PTR_FROM_JSON(dryRunResult, dryRunResult_);
      DARABONBA_PTR_FROM_JSON(updatedCount, updatedCount_);
      DARABONBA_PTR_FROM_JSON(updatedUuidList, updatedUuidList_);
    };
    ManageAlertRulesResult() = default ;
    ManageAlertRulesResult(const ManageAlertRulesResult &) = default ;
    ManageAlertRulesResult(ManageAlertRulesResult &&) = default ;
    ManageAlertRulesResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManageAlertRulesResult() = default ;
    ManageAlertRulesResult& operator=(const ManageAlertRulesResult &) = default ;
    ManageAlertRulesResult& operator=(ManageAlertRulesResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertRule_ == nullptr
        && this->deletedCount_ == nullptr && this->deletedUuidList_ == nullptr && this->drillUuid_ == nullptr && this->dryRunResult_ == nullptr && this->updatedCount_ == nullptr
        && this->updatedUuidList_ == nullptr; };
    // alertRule Field Functions 
    bool hasAlertRule() const { return this->alertRule_ != nullptr;};
    void deleteAlertRule() { this->alertRule_ = nullptr;};
    inline const AlertRuleV2 & getAlertRule() const { DARABONBA_PTR_GET_CONST(alertRule_, AlertRuleV2) };
    inline AlertRuleV2 getAlertRule() { DARABONBA_PTR_GET(alertRule_, AlertRuleV2) };
    inline ManageAlertRulesResult& setAlertRule(const AlertRuleV2 & alertRule) { DARABONBA_PTR_SET_VALUE(alertRule_, alertRule) };
    inline ManageAlertRulesResult& setAlertRule(AlertRuleV2 && alertRule) { DARABONBA_PTR_SET_RVALUE(alertRule_, alertRule) };


    // deletedCount Field Functions 
    bool hasDeletedCount() const { return this->deletedCount_ != nullptr;};
    void deleteDeletedCount() { this->deletedCount_ = nullptr;};
    inline int32_t getDeletedCount() const { DARABONBA_PTR_GET_DEFAULT(deletedCount_, 0) };
    inline ManageAlertRulesResult& setDeletedCount(int32_t deletedCount) { DARABONBA_PTR_SET_VALUE(deletedCount_, deletedCount) };


    // deletedUuidList Field Functions 
    bool hasDeletedUuidList() const { return this->deletedUuidList_ != nullptr;};
    void deleteDeletedUuidList() { this->deletedUuidList_ = nullptr;};
    inline const vector<string> & getDeletedUuidList() const { DARABONBA_PTR_GET_CONST(deletedUuidList_, vector<string>) };
    inline vector<string> getDeletedUuidList() { DARABONBA_PTR_GET(deletedUuidList_, vector<string>) };
    inline ManageAlertRulesResult& setDeletedUuidList(const vector<string> & deletedUuidList) { DARABONBA_PTR_SET_VALUE(deletedUuidList_, deletedUuidList) };
    inline ManageAlertRulesResult& setDeletedUuidList(vector<string> && deletedUuidList) { DARABONBA_PTR_SET_RVALUE(deletedUuidList_, deletedUuidList) };


    // drillUuid Field Functions 
    bool hasDrillUuid() const { return this->drillUuid_ != nullptr;};
    void deleteDrillUuid() { this->drillUuid_ = nullptr;};
    inline string getDrillUuid() const { DARABONBA_PTR_GET_DEFAULT(drillUuid_, "") };
    inline ManageAlertRulesResult& setDrillUuid(string drillUuid) { DARABONBA_PTR_SET_VALUE(drillUuid_, drillUuid) };


    // dryRunResult Field Functions 
    bool hasDryRunResult() const { return this->dryRunResult_ != nullptr;};
    void deleteDryRunResult() { this->dryRunResult_ = nullptr;};
    inline const DryRunResult & getDryRunResult() const { DARABONBA_PTR_GET_CONST(dryRunResult_, DryRunResult) };
    inline DryRunResult getDryRunResult() { DARABONBA_PTR_GET(dryRunResult_, DryRunResult) };
    inline ManageAlertRulesResult& setDryRunResult(const DryRunResult & dryRunResult) { DARABONBA_PTR_SET_VALUE(dryRunResult_, dryRunResult) };
    inline ManageAlertRulesResult& setDryRunResult(DryRunResult && dryRunResult) { DARABONBA_PTR_SET_RVALUE(dryRunResult_, dryRunResult) };


    // updatedCount Field Functions 
    bool hasUpdatedCount() const { return this->updatedCount_ != nullptr;};
    void deleteUpdatedCount() { this->updatedCount_ = nullptr;};
    inline int32_t getUpdatedCount() const { DARABONBA_PTR_GET_DEFAULT(updatedCount_, 0) };
    inline ManageAlertRulesResult& setUpdatedCount(int32_t updatedCount) { DARABONBA_PTR_SET_VALUE(updatedCount_, updatedCount) };


    // updatedUuidList Field Functions 
    bool hasUpdatedUuidList() const { return this->updatedUuidList_ != nullptr;};
    void deleteUpdatedUuidList() { this->updatedUuidList_ = nullptr;};
    inline const vector<string> & getUpdatedUuidList() const { DARABONBA_PTR_GET_CONST(updatedUuidList_, vector<string>) };
    inline vector<string> getUpdatedUuidList() { DARABONBA_PTR_GET(updatedUuidList_, vector<string>) };
    inline ManageAlertRulesResult& setUpdatedUuidList(const vector<string> & updatedUuidList) { DARABONBA_PTR_SET_VALUE(updatedUuidList_, updatedUuidList) };
    inline ManageAlertRulesResult& setUpdatedUuidList(vector<string> && updatedUuidList) { DARABONBA_PTR_SET_RVALUE(updatedUuidList_, updatedUuidList) };


  protected:
    // The V2 alert rule.
    shared_ptr<AlertRuleV2> alertRule_ {};
    // The number of successfully deleted rules.
    shared_ptr<int32_t> deletedCount_ {};
    // The list of UUIDs of successfully deleted rules.
    shared_ptr<vector<string>> deletedUuidList_ {};
    // The unique identifier of the current alert drill (returned only when action=DRILL_ALERT). The drill is an asynchronous action. The drillUuid is returned immediately after the API operation is accepted. The alert events generated by the drill are stored in the database and carry the labels _cms_alert_drill=true, _cms_alert_drill_uuid=drillUuid, and _cms_alert_drill_request_id=request ID of the current call for tracing. You can use the existing event query API operation to retrieve the OCCURRED, PERSISTENT, or RECOVERED events generated by the drill based on these labels.
    shared_ptr<string> drillUuid_ {};
    // The fixed three items: exitCode is the result code (0 for success, 1 for business rule rejection, and 2 for unparsable request structure), result is the result text (ok or rejected, and empty when the structure is unparsable), and violations is the list of violation details (an empty array when the exit code is 0). This field is returned only for calls with dryRun=true and is not returned for other calls.
    shared_ptr<DryRunResult> dryRunResult_ {};
    // The number of successfully enabled or disabled rules.
    shared_ptr<int32_t> updatedCount_ {};
    // The list of UUIDs of successfully enabled or disabled rules.
    shared_ptr<vector<string>> updatedUuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
