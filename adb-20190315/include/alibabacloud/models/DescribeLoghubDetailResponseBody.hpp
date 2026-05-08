// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGHUBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGHUBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeLoghubDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoghubDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoghubInfo, loghubInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoghubDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoghubInfo, loghubInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLoghubDetailResponseBody() = default ;
    DescribeLoghubDetailResponseBody(const DescribeLoghubDetailResponseBody &) = default ;
    DescribeLoghubDetailResponseBody(DescribeLoghubDetailResponseBody &&) = default ;
    DescribeLoghubDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoghubDetailResponseBody() = default ;
    DescribeLoghubDetailResponseBody& operator=(const DescribeLoghubDetailResponseBody &) = default ;
    DescribeLoghubDetailResponseBody& operator=(DescribeLoghubDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoghubInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoghubInfo& obj) { 
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
      friend void from_json(const Darabonba::Json& j, LoghubInfo& obj) { 
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
      LoghubInfo() = default ;
      LoghubInfo(const LoghubInfo &) = default ;
      LoghubInfo(LoghubInfo &&) = default ;
      LoghubInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoghubInfo() = default ;
      LoghubInfo& operator=(const LoghubInfo &) = default ;
      LoghubInfo& operator=(LoghubInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LogHubStores : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogHubStores& obj) { 
          DARABONBA_PTR_TO_JSON(LogHubStore, logHubStore_);
        };
        friend void from_json(const Darabonba::Json& j, LogHubStores& obj) { 
          DARABONBA_PTR_FROM_JSON(LogHubStore, logHubStore_);
        };
        LogHubStores() = default ;
        LogHubStores(const LogHubStores &) = default ;
        LogHubStores(LogHubStores &&) = default ;
        LogHubStores(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogHubStores() = default ;
        LogHubStores& operator=(const LogHubStores &) = default ;
        LogHubStores& operator=(LogHubStores &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LogHubStore : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LogHubStore& obj) { 
            DARABONBA_PTR_TO_JSON(FieldKey, fieldKey_);
            DARABONBA_PTR_TO_JSON(LogKey, logKey_);
          };
          friend void from_json(const Darabonba::Json& j, LogHubStore& obj) { 
            DARABONBA_PTR_FROM_JSON(FieldKey, fieldKey_);
            DARABONBA_PTR_FROM_JSON(LogKey, logKey_);
          };
          LogHubStore() = default ;
          LogHubStore(const LogHubStore &) = default ;
          LogHubStore(LogHubStore &&) = default ;
          LogHubStore(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LogHubStore() = default ;
          LogHubStore& operator=(const LogHubStore &) = default ;
          LogHubStore& operator=(LogHubStore &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fieldKey_ == nullptr
        && this->logKey_ == nullptr; };
          // fieldKey Field Functions 
          bool hasFieldKey() const { return this->fieldKey_ != nullptr;};
          void deleteFieldKey() { this->fieldKey_ = nullptr;};
          inline string getFieldKey() const { DARABONBA_PTR_GET_DEFAULT(fieldKey_, "") };
          inline LogHubStore& setFieldKey(string fieldKey) { DARABONBA_PTR_SET_VALUE(fieldKey_, fieldKey) };


          // logKey Field Functions 
          bool hasLogKey() const { return this->logKey_ != nullptr;};
          void deleteLogKey() { this->logKey_ = nullptr;};
          inline string getLogKey() const { DARABONBA_PTR_GET_DEFAULT(logKey_, "") };
          inline LogHubStore& setLogKey(string logKey) { DARABONBA_PTR_SET_VALUE(logKey_, logKey) };


        protected:
          shared_ptr<string> fieldKey_ {};
          shared_ptr<string> logKey_ {};
        };

        virtual bool empty() const override { return this->logHubStore_ == nullptr; };
        // logHubStore Field Functions 
        bool hasLogHubStore() const { return this->logHubStore_ != nullptr;};
        void deleteLogHubStore() { this->logHubStore_ = nullptr;};
        inline const vector<LogHubStores::LogHubStore> & getLogHubStore() const { DARABONBA_PTR_GET_CONST(logHubStore_, vector<LogHubStores::LogHubStore>) };
        inline vector<LogHubStores::LogHubStore> getLogHubStore() { DARABONBA_PTR_GET(logHubStore_, vector<LogHubStores::LogHubStore>) };
        inline LogHubStores& setLogHubStore(const vector<LogHubStores::LogHubStore> & logHubStore) { DARABONBA_PTR_SET_VALUE(logHubStore_, logHubStore) };
        inline LogHubStores& setLogHubStore(vector<LogHubStores::LogHubStore> && logHubStore) { DARABONBA_PTR_SET_RVALUE(logHubStore_, logHubStore) };


      protected:
        shared_ptr<vector<LogHubStores::LogHubStore>> logHubStore_ {};
      };

      virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->DBType_ == nullptr && this->deliverName_ == nullptr && this->deliverTime_ == nullptr && this->description_ == nullptr && this->domainUrl_ == nullptr
        && this->filterDirtyData_ == nullptr && this->logHubStores_ == nullptr && this->logStoreName_ == nullptr && this->projectName_ == nullptr && this->regionId_ == nullptr
        && this->schemaName_ == nullptr && this->tableName_ == nullptr && this->userName_ == nullptr && this->zoneId_ == nullptr; };
      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline LoghubInfo& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // DBType Field Functions 
      bool hasDBType() const { return this->DBType_ != nullptr;};
      void deleteDBType() { this->DBType_ = nullptr;};
      inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
      inline LoghubInfo& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


      // deliverName Field Functions 
      bool hasDeliverName() const { return this->deliverName_ != nullptr;};
      void deleteDeliverName() { this->deliverName_ = nullptr;};
      inline string getDeliverName() const { DARABONBA_PTR_GET_DEFAULT(deliverName_, "") };
      inline LoghubInfo& setDeliverName(string deliverName) { DARABONBA_PTR_SET_VALUE(deliverName_, deliverName) };


      // deliverTime Field Functions 
      bool hasDeliverTime() const { return this->deliverTime_ != nullptr;};
      void deleteDeliverTime() { this->deliverTime_ = nullptr;};
      inline string getDeliverTime() const { DARABONBA_PTR_GET_DEFAULT(deliverTime_, "") };
      inline LoghubInfo& setDeliverTime(string deliverTime) { DARABONBA_PTR_SET_VALUE(deliverTime_, deliverTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline LoghubInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // domainUrl Field Functions 
      bool hasDomainUrl() const { return this->domainUrl_ != nullptr;};
      void deleteDomainUrl() { this->domainUrl_ = nullptr;};
      inline string getDomainUrl() const { DARABONBA_PTR_GET_DEFAULT(domainUrl_, "") };
      inline LoghubInfo& setDomainUrl(string domainUrl) { DARABONBA_PTR_SET_VALUE(domainUrl_, domainUrl) };


      // filterDirtyData Field Functions 
      bool hasFilterDirtyData() const { return this->filterDirtyData_ != nullptr;};
      void deleteFilterDirtyData() { this->filterDirtyData_ = nullptr;};
      inline bool getFilterDirtyData() const { DARABONBA_PTR_GET_DEFAULT(filterDirtyData_, false) };
      inline LoghubInfo& setFilterDirtyData(bool filterDirtyData) { DARABONBA_PTR_SET_VALUE(filterDirtyData_, filterDirtyData) };


      // logHubStores Field Functions 
      bool hasLogHubStores() const { return this->logHubStores_ != nullptr;};
      void deleteLogHubStores() { this->logHubStores_ = nullptr;};
      inline const LoghubInfo::LogHubStores & getLogHubStores() const { DARABONBA_PTR_GET_CONST(logHubStores_, LoghubInfo::LogHubStores) };
      inline LoghubInfo::LogHubStores getLogHubStores() { DARABONBA_PTR_GET(logHubStores_, LoghubInfo::LogHubStores) };
      inline LoghubInfo& setLogHubStores(const LoghubInfo::LogHubStores & logHubStores) { DARABONBA_PTR_SET_VALUE(logHubStores_, logHubStores) };
      inline LoghubInfo& setLogHubStores(LoghubInfo::LogHubStores && logHubStores) { DARABONBA_PTR_SET_RVALUE(logHubStores_, logHubStores) };


      // logStoreName Field Functions 
      bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
      void deleteLogStoreName() { this->logStoreName_ = nullptr;};
      inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
      inline LoghubInfo& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline LoghubInfo& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline LoghubInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // schemaName Field Functions 
      bool hasSchemaName() const { return this->schemaName_ != nullptr;};
      void deleteSchemaName() { this->schemaName_ = nullptr;};
      inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
      inline LoghubInfo& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline LoghubInfo& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline LoghubInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline LoghubInfo& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The cluster ID.
      shared_ptr<string> DBClusterId_ {};
      // The database type.
      shared_ptr<string> DBType_ {};
      // The name of the log shipping job.
      shared_ptr<string> deliverName_ {};
      // The log shipping time.
      shared_ptr<string> deliverTime_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The endpoint.
      shared_ptr<string> domainUrl_ {};
      // Indicates whether dirty data is filtered.
      shared_ptr<bool> filterDirtyData_ {};
      shared_ptr<LoghubInfo::LogHubStores> logHubStores_ {};
      // The name of the Logstore.
      shared_ptr<string> logStoreName_ {};
      // The name of the Simple Log Service project.
      shared_ptr<string> projectName_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The name of the database.
      shared_ptr<string> schemaName_ {};
      // The name of the table.
      shared_ptr<string> tableName_ {};
      // The name of the database account.
      shared_ptr<string> userName_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->loghubInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // loghubInfo Field Functions 
    bool hasLoghubInfo() const { return this->loghubInfo_ != nullptr;};
    void deleteLoghubInfo() { this->loghubInfo_ = nullptr;};
    inline const DescribeLoghubDetailResponseBody::LoghubInfo & getLoghubInfo() const { DARABONBA_PTR_GET_CONST(loghubInfo_, DescribeLoghubDetailResponseBody::LoghubInfo) };
    inline DescribeLoghubDetailResponseBody::LoghubInfo getLoghubInfo() { DARABONBA_PTR_GET(loghubInfo_, DescribeLoghubDetailResponseBody::LoghubInfo) };
    inline DescribeLoghubDetailResponseBody& setLoghubInfo(const DescribeLoghubDetailResponseBody::LoghubInfo & loghubInfo) { DARABONBA_PTR_SET_VALUE(loghubInfo_, loghubInfo) };
    inline DescribeLoghubDetailResponseBody& setLoghubInfo(DescribeLoghubDetailResponseBody::LoghubInfo && loghubInfo) { DARABONBA_PTR_SET_RVALUE(loghubInfo_, loghubInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoghubDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried log collection information.
    shared_ptr<DescribeLoghubDetailResponseBody::LoghubInfo> loghubInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
