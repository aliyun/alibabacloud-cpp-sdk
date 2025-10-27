// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGHUBDETAILRESPONSEBODYLOGHUBINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGHUBDETAILRESPONSEBODYLOGHUBINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeLoghubDetailResponseBodyLoghubInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoghubDetailResponseBodyLoghubInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DeliverName, deliverName_);
      DARABONBA_PTR_TO_JSON(DeliverTime, deliverTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainUrl, domainUrl_);
      DARABONBA_PTR_TO_JSON(FilterDirtyData, filterDirtyData_);
      DARABONBA_PTR_TO_JSON(LogHubStores, logHubStores_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoghubDetailResponseBodyLoghubInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DeliverName, deliverName_);
      DARABONBA_PTR_FROM_JSON(DeliverTime, deliverTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainUrl, domainUrl_);
      DARABONBA_PTR_FROM_JSON(FilterDirtyData, filterDirtyData_);
      DARABONBA_PTR_FROM_JSON(LogHubStores, logHubStores_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeLoghubDetailResponseBodyLoghubInfo() = default ;
    DescribeLoghubDetailResponseBodyLoghubInfo(const DescribeLoghubDetailResponseBodyLoghubInfo &) = default ;
    DescribeLoghubDetailResponseBodyLoghubInfo(DescribeLoghubDetailResponseBodyLoghubInfo &&) = default ;
    DescribeLoghubDetailResponseBodyLoghubInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoghubDetailResponseBodyLoghubInfo() = default ;
    DescribeLoghubDetailResponseBodyLoghubInfo& operator=(const DescribeLoghubDetailResponseBodyLoghubInfo &) = default ;
    DescribeLoghubDetailResponseBodyLoghubInfo& operator=(DescribeLoghubDetailResponseBodyLoghubInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->DBType_ == nullptr && return this->deliverName_ == nullptr && return this->deliverTime_ == nullptr && return this->description_ == nullptr && return this->domainUrl_ == nullptr
        && return this->filterDirtyData_ == nullptr && return this->logHubStores_ == nullptr && return this->logStoreName_ == nullptr && return this->projectName_ == nullptr && return this->regionId_ == nullptr
        && return this->schemaName_ == nullptr && return this->tableName_ == nullptr && return this->userName_ == nullptr && return this->zoneId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeLoghubDetailResponseBodyLoghubInfo& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeLoghubDetailResponseBodyLoghubInfo& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // deliverName Field Functions 
    bool hasDeliverName() const { return this->deliverName_ != nullptr;};
    void deleteDeliverName() { this->deliverName_ = nullptr;};
    inline string deliverName() const { DARABONBA_PTR_GET_DEFAULT(deliverName_, "") };
    inline DescribeLoghubDetailResponseBodyLoghubInfo& setDeliverName(string deliverName) { DARABONBA_PTR_SET_VALUE(deliverName_, deliverName) };


    // deliverTime Field Functions 
    bool hasDeliverTime() const { return this->deliverTime_ != nullptr;};
    void deleteDeliverTime() { this->deliverTime_ = nullptr;};
    inline string deliverTime() const { DARABONBA_PTR_GET_DEFAULT(deliverTime_, "") };
    inline DescribeLoghubDetailResponseBodyLoghubInfo& setDeliverTime(string deliverTime) { DARABONBA_PTR_SET_VALUE(deliverTime_, deliverTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLoghubDetailResponseBodyLoghubInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainUrl Field Functions 
    bool hasDomainUrl() const { return this->domainUrl_ != nullptr;};
    void deleteDomainUrl() { this->domainUrl_ = nullptr;};
    inline string domainUrl() const { DARABONBA_PTR_GET_DEFAULT(domainUrl_, "") };
    inline DescribeLoghubDetailResponseBodyLoghubInfo& setDomainUrl(string domainUrl) { DARABONBA_PTR_SET_VALUE(domainUrl_, domainUrl) };


    // filterDirtyData Field Functions 
    bool hasFilterDirtyData() const { return this->filterDirtyData_ != nullptr;};
    void deleteFilterDirtyData() { this->filterDirtyData_ = nullptr;};
    inline bool filterDirtyData() const { DARABONBA_PTR_GET_DEFAULT(filterDirtyData_, false) };
    inline DescribeLoghubDetailResponseBodyLoghubInfo& setFilterDirtyData(bool filterDirtyData) { DARABONBA_PTR_SET_VALUE(filterDirtyData_, filterDirtyData) };


    // logHubStores Field Functions 
    bool hasLogHubStores() const { return this->logHubStores_ != nullptr;};
    void deleteLogHubStores() { this->logHubStores_ = nullptr;};
    inline const Models::DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores & logHubStores() const { DARABONBA_PTR_GET_CONST(logHubStores_, Models::DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores) };
    inline Models::DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores logHubStores() { DARABONBA_PTR_GET(logHubStores_, Models::DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores) };
    inline DescribeLoghubDetailResponseBodyLoghubInfo& setLogHubStores(const Models::DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores & logHubStores) { DARABONBA_PTR_SET_VALUE(logHubStores_, logHubStores) };
    inline DescribeLoghubDetailResponseBodyLoghubInfo& setLogHubStores(Models::DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores && logHubStores) { DARABONBA_PTR_SET_RVALUE(logHubStores_, logHubStores) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline DescribeLoghubDetailResponseBodyLoghubInfo& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DescribeLoghubDetailResponseBodyLoghubInfo& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLoghubDetailResponseBodyLoghubInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeLoghubDetailResponseBodyLoghubInfo& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeLoghubDetailResponseBodyLoghubInfo& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeLoghubDetailResponseBodyLoghubInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeLoghubDetailResponseBodyLoghubInfo& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The database type.
    std::shared_ptr<string> DBType_ = nullptr;
    // The name of the log shipping job.
    std::shared_ptr<string> deliverName_ = nullptr;
    // The log shipping time.
    std::shared_ptr<string> deliverTime_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The endpoint.
    std::shared_ptr<string> domainUrl_ = nullptr;
    // Indicates whether dirty data is filtered.
    std::shared_ptr<bool> filterDirtyData_ = nullptr;
    // The log keywords.
    std::shared_ptr<Models::DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores> logHubStores_ = nullptr;
    // The name of the Logstore.
    std::shared_ptr<string> logStoreName_ = nullptr;
    // The name of the Simple Log Service project.
    std::shared_ptr<string> projectName_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
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
