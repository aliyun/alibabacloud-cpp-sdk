// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGHUBATTRIBUTERESPONSEBODYLOGHUBINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGHUBATTRIBUTERESPONSEBODYLOGHUBINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeLogHubAttributeResponseBodyLoghubInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogHubAttributeResponseBodyLoghubInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(DeliverName, deliverName_);
      DARABONBA_PTR_TO_JSON(DeliverTime, deliverTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FilterDirtyData, filterDirtyData_);
      DARABONBA_PTR_TO_JSON(LogHubStores, logHubStores_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SyncStatus, syncStatus_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogHubAttributeResponseBodyLoghubInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(DeliverName, deliverName_);
      DARABONBA_PTR_FROM_JSON(DeliverTime, deliverTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FilterDirtyData, filterDirtyData_);
      DARABONBA_PTR_FROM_JSON(LogHubStores, logHubStores_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SyncStatus, syncStatus_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeLogHubAttributeResponseBodyLoghubInfo() = default ;
    DescribeLogHubAttributeResponseBodyLoghubInfo(const DescribeLogHubAttributeResponseBodyLoghubInfo &) = default ;
    DescribeLogHubAttributeResponseBodyLoghubInfo(DescribeLogHubAttributeResponseBodyLoghubInfo &&) = default ;
    DescribeLogHubAttributeResponseBodyLoghubInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogHubAttributeResponseBodyLoghubInfo() = default ;
    DescribeLogHubAttributeResponseBodyLoghubInfo& operator=(const DescribeLogHubAttributeResponseBodyLoghubInfo &) = default ;
    DescribeLogHubAttributeResponseBodyLoghubInfo& operator=(DescribeLogHubAttributeResponseBodyLoghubInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->DBType_ == nullptr && return this->delay_ == nullptr && return this->deliverName_ == nullptr && return this->deliverTime_ == nullptr && return this->description_ == nullptr
        && return this->filterDirtyData_ == nullptr && return this->logHubStores_ == nullptr && return this->logStoreName_ == nullptr && return this->message_ == nullptr && return this->projectName_ == nullptr
        && return this->regionId_ == nullptr && return this->schemaName_ == nullptr && return this->syncStatus_ == nullptr && return this->tableName_ == nullptr && return this->userName_ == nullptr
        && return this->zoneId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline int64_t delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // deliverName Field Functions 
    bool hasDeliverName() const { return this->deliverName_ != nullptr;};
    void deleteDeliverName() { this->deliverName_ = nullptr;};
    inline string deliverName() const { DARABONBA_PTR_GET_DEFAULT(deliverName_, "") };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo& setDeliverName(string deliverName) { DARABONBA_PTR_SET_VALUE(deliverName_, deliverName) };


    // deliverTime Field Functions 
    bool hasDeliverTime() const { return this->deliverTime_ != nullptr;};
    void deleteDeliverTime() { this->deliverTime_ = nullptr;};
    inline string deliverTime() const { DARABONBA_PTR_GET_DEFAULT(deliverTime_, "") };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo& setDeliverTime(string deliverTime) { DARABONBA_PTR_SET_VALUE(deliverTime_, deliverTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // filterDirtyData Field Functions 
    bool hasFilterDirtyData() const { return this->filterDirtyData_ != nullptr;};
    void deleteFilterDirtyData() { this->filterDirtyData_ = nullptr;};
    inline bool filterDirtyData() const { DARABONBA_PTR_GET_DEFAULT(filterDirtyData_, false) };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo& setFilterDirtyData(bool filterDirtyData) { DARABONBA_PTR_SET_VALUE(filterDirtyData_, filterDirtyData) };


    // logHubStores Field Functions 
    bool hasLogHubStores() const { return this->logHubStores_ != nullptr;};
    void deleteLogHubStores() { this->logHubStores_ = nullptr;};
    inline const Models::DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores & logHubStores() const { DARABONBA_PTR_GET_CONST(logHubStores_, Models::DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores) };
    inline Models::DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores logHubStores() { DARABONBA_PTR_GET(logHubStores_, Models::DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores) };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo& setLogHubStores(const Models::DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores & logHubStores) { DARABONBA_PTR_SET_VALUE(logHubStores_, logHubStores) };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo& setLogHubStores(Models::DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores && logHubStores) { DARABONBA_PTR_SET_RVALUE(logHubStores_, logHubStores) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // syncStatus Field Functions 
    bool hasSyncStatus() const { return this->syncStatus_ != nullptr;};
    void deleteSyncStatus() { this->syncStatus_ = nullptr;};
    inline string syncStatus() const { DARABONBA_PTR_GET_DEFAULT(syncStatus_, "") };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo& setSyncStatus(string syncStatus) { DARABONBA_PTR_SET_VALUE(syncStatus_, syncStatus) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The database type.
    std::shared_ptr<string> DBType_ = nullptr;
    // The synchronization latency, which is the latency between the latest update time of the synchronization job and the current system time. Unit: seconds.
    std::shared_ptr<int64_t> delay_ = nullptr;
    // The name of the log shipping job.
    std::shared_ptr<string> deliverName_ = nullptr;
    // The log shipping time.
    std::shared_ptr<string> deliverTime_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether dirty data is filtered.
    std::shared_ptr<bool> filterDirtyData_ = nullptr;
    // The names of the Logstores.
    std::shared_ptr<Models::DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores> logHubStores_ = nullptr;
    // The name of the Logstore.
    std::shared_ptr<string> logStoreName_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The name of the Simple Log Service project.
    std::shared_ptr<string> projectName_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The synchronization status.
    std::shared_ptr<string> syncStatus_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The name of the database account.
    std::shared_ptr<string> userName_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
