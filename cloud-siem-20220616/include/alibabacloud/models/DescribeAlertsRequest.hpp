// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTSREQUEST_HPP_
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
  class DescribeAlertsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(AlertStatus, alertStatus_);
      DARABONBA_PTR_TO_JSON(AlertTitle, alertTitle_);
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_TO_JSON(AssetId, assetId_);
      DARABONBA_PTR_TO_JSON(AssetName, assetName_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(EntityName, entityName_);
      DARABONBA_PTR_TO_JSON(IsDefend, isDefend_);
      DARABONBA_PTR_TO_JSON(LabelType, labelType_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(AlertStatus, alertStatus_);
      DARABONBA_PTR_FROM_JSON(AlertTitle, alertTitle_);
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_FROM_JSON(AssetId, assetId_);
      DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(EntityName, entityName_);
      DARABONBA_PTR_FROM_JSON(IsDefend, isDefend_);
      DARABONBA_PTR_FROM_JSON(LabelType, labelType_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
    };
    DescribeAlertsRequest() = default ;
    DescribeAlertsRequest(const DescribeAlertsRequest &) = default ;
    DescribeAlertsRequest(DescribeAlertsRequest &&) = default ;
    DescribeAlertsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertsRequest() = default ;
    DescribeAlertsRequest& operator=(const DescribeAlertsRequest &) = default ;
    DescribeAlertsRequest& operator=(DescribeAlertsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertName_ == nullptr
        && this->alertStatus_ == nullptr && this->alertTitle_ == nullptr && this->alertType_ == nullptr && this->alertUuid_ == nullptr && this->assetId_ == nullptr
        && this->assetName_ == nullptr && this->currentPage_ == nullptr && this->endTime_ == nullptr && this->entityId_ == nullptr && this->entityName_ == nullptr
        && this->isDefend_ == nullptr && this->labelType_ == nullptr && this->level_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->roleFor_ == nullptr && this->roleType_ == nullptr && this->source_ == nullptr && this->startTime_ == nullptr && this->subUserId_ == nullptr; };
    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string getAlertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline DescribeAlertsRequest& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // alertStatus Field Functions 
    bool hasAlertStatus() const { return this->alertStatus_ != nullptr;};
    void deleteAlertStatus() { this->alertStatus_ = nullptr;};
    inline const vector<string> & getAlertStatus() const { DARABONBA_PTR_GET_CONST(alertStatus_, vector<string>) };
    inline vector<string> getAlertStatus() { DARABONBA_PTR_GET(alertStatus_, vector<string>) };
    inline DescribeAlertsRequest& setAlertStatus(const vector<string> & alertStatus) { DARABONBA_PTR_SET_VALUE(alertStatus_, alertStatus) };
    inline DescribeAlertsRequest& setAlertStatus(vector<string> && alertStatus) { DARABONBA_PTR_SET_RVALUE(alertStatus_, alertStatus) };


    // alertTitle Field Functions 
    bool hasAlertTitle() const { return this->alertTitle_ != nullptr;};
    void deleteAlertTitle() { this->alertTitle_ = nullptr;};
    inline string getAlertTitle() const { DARABONBA_PTR_GET_DEFAULT(alertTitle_, "") };
    inline DescribeAlertsRequest& setAlertTitle(string alertTitle) { DARABONBA_PTR_SET_VALUE(alertTitle_, alertTitle) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline DescribeAlertsRequest& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // alertUuid Field Functions 
    bool hasAlertUuid() const { return this->alertUuid_ != nullptr;};
    void deleteAlertUuid() { this->alertUuid_ = nullptr;};
    inline string getAlertUuid() const { DARABONBA_PTR_GET_DEFAULT(alertUuid_, "") };
    inline DescribeAlertsRequest& setAlertUuid(string alertUuid) { DARABONBA_PTR_SET_VALUE(alertUuid_, alertUuid) };


    // assetId Field Functions 
    bool hasAssetId() const { return this->assetId_ != nullptr;};
    void deleteAssetId() { this->assetId_ = nullptr;};
    inline string getAssetId() const { DARABONBA_PTR_GET_DEFAULT(assetId_, "") };
    inline DescribeAlertsRequest& setAssetId(string assetId) { DARABONBA_PTR_SET_VALUE(assetId_, assetId) };


    // assetName Field Functions 
    bool hasAssetName() const { return this->assetName_ != nullptr;};
    void deleteAssetName() { this->assetName_ = nullptr;};
    inline string getAssetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
    inline DescribeAlertsRequest& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeAlertsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeAlertsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline DescribeAlertsRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityName Field Functions 
    bool hasEntityName() const { return this->entityName_ != nullptr;};
    void deleteEntityName() { this->entityName_ = nullptr;};
    inline string getEntityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
    inline DescribeAlertsRequest& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


    // isDefend Field Functions 
    bool hasIsDefend() const { return this->isDefend_ != nullptr;};
    void deleteIsDefend() { this->isDefend_ = nullptr;};
    inline string getIsDefend() const { DARABONBA_PTR_GET_DEFAULT(isDefend_, "") };
    inline DescribeAlertsRequest& setIsDefend(string isDefend) { DARABONBA_PTR_SET_VALUE(isDefend_, isDefend) };


    // labelType Field Functions 
    bool hasLabelType() const { return this->labelType_ != nullptr;};
    void deleteLabelType() { this->labelType_ = nullptr;};
    inline string getLabelType() const { DARABONBA_PTR_GET_DEFAULT(labelType_, "") };
    inline DescribeAlertsRequest& setLabelType(string labelType) { DARABONBA_PTR_SET_VALUE(labelType_, labelType) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline const vector<string> & getLevel() const { DARABONBA_PTR_GET_CONST(level_, vector<string>) };
    inline vector<string> getLevel() { DARABONBA_PTR_GET(level_, vector<string>) };
    inline DescribeAlertsRequest& setLevel(const vector<string> & level) { DARABONBA_PTR_SET_VALUE(level_, level) };
    inline DescribeAlertsRequest& setLevel(vector<string> && level) { DARABONBA_PTR_SET_RVALUE(level_, level) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAlertsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAlertsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DescribeAlertsRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline DescribeAlertsRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeAlertsRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeAlertsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline string getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, "") };
    inline DescribeAlertsRequest& setSubUserId(string subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


  protected:
    shared_ptr<string> alertName_ {};
    shared_ptr<vector<string>> alertStatus_ {};
    // The title of the alert.
    shared_ptr<string> alertTitle_ {};
    shared_ptr<string> alertType_ {};
    // The UUID of the alert.
    shared_ptr<string> alertUuid_ {};
    shared_ptr<string> assetId_ {};
    shared_ptr<string> assetName_ {};
    // The page number. Pages start from page 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The end of the time range to query. Unit: milliseconds.
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> entityId_ {};
    shared_ptr<string> entityName_ {};
    // Specifies whether an attack is defended. Valid values:
    // 
    // *   0: detected.
    // *   1: blocked.
    shared_ptr<string> isDefend_ {};
    shared_ptr<string> labelType_ {};
    // The risk level. The value is a JSON array. Valid values:
    // 
    // *   serious: high
    // *   suspicious: medium
    // *   remind: low
    shared_ptr<vector<string>> level_ {};
    // The number of entries per page. Maximum value: 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    shared_ptr<string> regionId_ {};
    // The ID of the account that you switch from the management account.
    shared_ptr<int64_t> roleFor_ {};
    // The type of the view. Valid values:
    // - 0: the current Alibaba Cloud account
    // - 1: the global account
    shared_ptr<int32_t> roleType_ {};
    // The source of the alert.
    shared_ptr<string> source_ {};
    // The beginning of the time range to query. Unit: milliseconds.
    shared_ptr<int64_t> startTime_ {};
    // The ID of the Alibaba Cloud account within which the alert is generated.
    shared_ptr<string> subUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
