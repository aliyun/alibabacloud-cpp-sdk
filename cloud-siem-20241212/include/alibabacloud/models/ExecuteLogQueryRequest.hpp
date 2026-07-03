// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTELOGQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTELOGQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ExecuteLogQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteLogQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExtendContentPacked, extendContentPacked_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogCondition, logCondition_);
      DARABONBA_PTR_TO_JSON(LogProjectName, logProjectName_);
      DARABONBA_PTR_TO_JSON(LogQuery, logQuery_);
      DARABONBA_PTR_TO_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaId, normalizationSchemaId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteLogQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExtendContentPacked, extendContentPacked_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogCondition, logCondition_);
      DARABONBA_PTR_FROM_JSON(LogProjectName, logProjectName_);
      DARABONBA_PTR_FROM_JSON(LogQuery, logQuery_);
      DARABONBA_PTR_FROM_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaId, normalizationSchemaId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ExecuteLogQueryRequest() = default ;
    ExecuteLogQueryRequest(const ExecuteLogQueryRequest &) = default ;
    ExecuteLogQueryRequest(ExecuteLogQueryRequest &&) = default ;
    ExecuteLogQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteLogQueryRequest() = default ;
    ExecuteLogQueryRequest& operator=(const ExecuteLogQueryRequest &) = default ;
    ExecuteLogQueryRequest& operator=(ExecuteLogQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->extendContentPacked_ == nullptr && this->lang_ == nullptr && this->logCondition_ == nullptr && this->logProjectName_ == nullptr && this->logQuery_ == nullptr
        && this->logRegionId_ == nullptr && this->logStoreName_ == nullptr && this->logUserId_ == nullptr && this->normalizationSchemaId_ == nullptr && this->regionId_ == nullptr
        && this->roleFor_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ExecuteLogQueryRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // extendContentPacked Field Functions 
    bool hasExtendContentPacked() const { return this->extendContentPacked_ != nullptr;};
    void deleteExtendContentPacked() { this->extendContentPacked_ = nullptr;};
    inline string getExtendContentPacked() const { DARABONBA_PTR_GET_DEFAULT(extendContentPacked_, "") };
    inline ExecuteLogQueryRequest& setExtendContentPacked(string extendContentPacked) { DARABONBA_PTR_SET_VALUE(extendContentPacked_, extendContentPacked) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ExecuteLogQueryRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logCondition Field Functions 
    bool hasLogCondition() const { return this->logCondition_ != nullptr;};
    void deleteLogCondition() { this->logCondition_ = nullptr;};
    inline string getLogCondition() const { DARABONBA_PTR_GET_DEFAULT(logCondition_, "") };
    inline ExecuteLogQueryRequest& setLogCondition(string logCondition) { DARABONBA_PTR_SET_VALUE(logCondition_, logCondition) };


    // logProjectName Field Functions 
    bool hasLogProjectName() const { return this->logProjectName_ != nullptr;};
    void deleteLogProjectName() { this->logProjectName_ = nullptr;};
    inline string getLogProjectName() const { DARABONBA_PTR_GET_DEFAULT(logProjectName_, "") };
    inline ExecuteLogQueryRequest& setLogProjectName(string logProjectName) { DARABONBA_PTR_SET_VALUE(logProjectName_, logProjectName) };


    // logQuery Field Functions 
    bool hasLogQuery() const { return this->logQuery_ != nullptr;};
    void deleteLogQuery() { this->logQuery_ = nullptr;};
    inline string getLogQuery() const { DARABONBA_PTR_GET_DEFAULT(logQuery_, "") };
    inline ExecuteLogQueryRequest& setLogQuery(string logQuery) { DARABONBA_PTR_SET_VALUE(logQuery_, logQuery) };


    // logRegionId Field Functions 
    bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
    void deleteLogRegionId() { this->logRegionId_ = nullptr;};
    inline string getLogRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
    inline ExecuteLogQueryRequest& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline ExecuteLogQueryRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // logUserId Field Functions 
    bool hasLogUserId() const { return this->logUserId_ != nullptr;};
    void deleteLogUserId() { this->logUserId_ = nullptr;};
    inline int64_t getLogUserId() const { DARABONBA_PTR_GET_DEFAULT(logUserId_, 0L) };
    inline ExecuteLogQueryRequest& setLogUserId(int64_t logUserId) { DARABONBA_PTR_SET_VALUE(logUserId_, logUserId) };


    // normalizationSchemaId Field Functions 
    bool hasNormalizationSchemaId() const { return this->normalizationSchemaId_ != nullptr;};
    void deleteNormalizationSchemaId() { this->normalizationSchemaId_ = nullptr;};
    inline string getNormalizationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaId_, "") };
    inline ExecuteLogQueryRequest& setNormalizationSchemaId(string normalizationSchemaId) { DARABONBA_PTR_SET_VALUE(normalizationSchemaId_, normalizationSchemaId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ExecuteLogQueryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ExecuteLogQueryRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ExecuteLogQueryRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time.
    shared_ptr<string> endTime_ {};
    // Specifies whether to pack non-standard fields into the extension field extend_content. Valid values:
    // - enabled: Enabled.
    // - disabled: Disabled.
    shared_ptr<string> extendContentPacked_ {};
    // The language of the response. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    shared_ptr<string> logCondition_ {};
    // The Simple Log Service project name.
    shared_ptr<string> logProjectName_ {};
    // The Simple Log Service query statement.
    shared_ptr<string> logQuery_ {};
    // The log storage region ID.
    shared_ptr<string> logRegionId_ {};
    // The Simple Log Service project name.
    shared_ptr<string> logStoreName_ {};
    // The user ID for data access.
    shared_ptr<int64_t> logUserId_ {};
    // If packing is enabled, you must specify NormalizationSchemaId.
    shared_ptr<string> normalizationSchemaId_ {};
    // The region where the threat analysis data management center is located. Specify the management center based on the region of your assets. Valid values:
    // - cn-hangzhou: the asset is in the Chinese mainland.
    // - ap-southeast-1: the asset is outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The user ID of the member to which the administrator switches the view.
    shared_ptr<int64_t> roleFor_ {};
    // The start time.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
