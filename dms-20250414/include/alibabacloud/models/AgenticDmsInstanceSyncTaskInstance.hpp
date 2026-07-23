// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTICDMSINSTANCESYNCTASKINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_AGENTICDMSINSTANCESYNCTASKINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class AgenticDmsInstanceSyncTaskInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgenticDmsInstanceSyncTaskInstance& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_TO_JSON(CrawlerTaskId, crawlerTaskId_);
      DARABONBA_PTR_TO_JSON(DatasourceUuid, datasourceUuid_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(DmsInstanceId, dmsInstanceId_);
      DARABONBA_PTR_TO_JSON(DmsInstanceSummary, dmsInstanceSummary_);
      DARABONBA_PTR_TO_JSON(DmsRegionId, dmsRegionId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorSummary, errorSummary_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, AgenticDmsInstanceSyncTaskInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_FROM_JSON(CrawlerTaskId, crawlerTaskId_);
      DARABONBA_PTR_FROM_JSON(DatasourceUuid, datasourceUuid_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(DmsInstanceId, dmsInstanceId_);
      DARABONBA_PTR_FROM_JSON(DmsInstanceSummary, dmsInstanceSummary_);
      DARABONBA_PTR_FROM_JSON(DmsRegionId, dmsRegionId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorSummary, errorSummary_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    AgenticDmsInstanceSyncTaskInstance() = default ;
    AgenticDmsInstanceSyncTaskInstance(const AgenticDmsInstanceSyncTaskInstance &) = default ;
    AgenticDmsInstanceSyncTaskInstance(AgenticDmsInstanceSyncTaskInstance &&) = default ;
    AgenticDmsInstanceSyncTaskInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgenticDmsInstanceSyncTaskInstance() = default ;
    AgenticDmsInstanceSyncTaskInstance& operator=(const AgenticDmsInstanceSyncTaskInstance &) = default ;
    AgenticDmsInstanceSyncTaskInstance& operator=(AgenticDmsInstanceSyncTaskInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DmsInstanceSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DmsInstanceSummary& obj) { 
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(DbType, dbType_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(InstanceResourceId, instanceResourceId_);
        DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, DmsInstanceSummary& obj) { 
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(DbType, dbType_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(InstanceResourceId, instanceResourceId_);
        DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      DmsInstanceSummary() = default ;
      DmsInstanceSummary(const DmsInstanceSummary &) = default ;
      DmsInstanceSummary(DmsInstanceSummary &&) = default ;
      DmsInstanceSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DmsInstanceSummary() = default ;
      DmsInstanceSummary& operator=(const DmsInstanceSummary &) = default ;
      DmsInstanceSummary& operator=(DmsInstanceSummary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alias_ == nullptr
        && this->dbType_ == nullptr && this->envType_ == nullptr && this->host_ == nullptr && this->instanceResourceId_ == nullptr && this->instanceSource_ == nullptr
        && this->port_ == nullptr && this->regionId_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline DmsInstanceSummary& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // dbType Field Functions 
      bool hasDbType() const { return this->dbType_ != nullptr;};
      void deleteDbType() { this->dbType_ = nullptr;};
      inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
      inline DmsInstanceSummary& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline DmsInstanceSummary& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline DmsInstanceSummary& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // instanceResourceId Field Functions 
      bool hasInstanceResourceId() const { return this->instanceResourceId_ != nullptr;};
      void deleteInstanceResourceId() { this->instanceResourceId_ = nullptr;};
      inline string getInstanceResourceId() const { DARABONBA_PTR_GET_DEFAULT(instanceResourceId_, "") };
      inline DmsInstanceSummary& setInstanceResourceId(string instanceResourceId) { DARABONBA_PTR_SET_VALUE(instanceResourceId_, instanceResourceId) };


      // instanceSource Field Functions 
      bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
      void deleteInstanceSource() { this->instanceSource_ = nullptr;};
      inline string getInstanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
      inline DmsInstanceSummary& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline DmsInstanceSummary& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DmsInstanceSummary& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      shared_ptr<string> alias_ {};
      shared_ptr<string> dbType_ {};
      shared_ptr<string> envType_ {};
      shared_ptr<string> host_ {};
      shared_ptr<string> instanceResourceId_ {};
      shared_ptr<string> instanceSource_ {};
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->catalogUuid_ == nullptr
        && this->crawlerTaskId_ == nullptr && this->datasourceUuid_ == nullptr && this->dbType_ == nullptr && this->dmsInstanceId_ == nullptr && this->dmsInstanceSummary_ == nullptr
        && this->dmsRegionId_ == nullptr && this->errorCode_ == nullptr && this->errorSummary_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->phase_ == nullptr && this->status_ == nullptr; };
    // catalogUuid Field Functions 
    bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
    void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
    inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
    inline AgenticDmsInstanceSyncTaskInstance& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


    // crawlerTaskId Field Functions 
    bool hasCrawlerTaskId() const { return this->crawlerTaskId_ != nullptr;};
    void deleteCrawlerTaskId() { this->crawlerTaskId_ = nullptr;};
    inline string getCrawlerTaskId() const { DARABONBA_PTR_GET_DEFAULT(crawlerTaskId_, "") };
    inline AgenticDmsInstanceSyncTaskInstance& setCrawlerTaskId(string crawlerTaskId) { DARABONBA_PTR_SET_VALUE(crawlerTaskId_, crawlerTaskId) };


    // datasourceUuid Field Functions 
    bool hasDatasourceUuid() const { return this->datasourceUuid_ != nullptr;};
    void deleteDatasourceUuid() { this->datasourceUuid_ = nullptr;};
    inline string getDatasourceUuid() const { DARABONBA_PTR_GET_DEFAULT(datasourceUuid_, "") };
    inline AgenticDmsInstanceSyncTaskInstance& setDatasourceUuid(string datasourceUuid) { DARABONBA_PTR_SET_VALUE(datasourceUuid_, datasourceUuid) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline AgenticDmsInstanceSyncTaskInstance& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // dmsInstanceId Field Functions 
    bool hasDmsInstanceId() const { return this->dmsInstanceId_ != nullptr;};
    void deleteDmsInstanceId() { this->dmsInstanceId_ = nullptr;};
    inline string getDmsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dmsInstanceId_, "") };
    inline AgenticDmsInstanceSyncTaskInstance& setDmsInstanceId(string dmsInstanceId) { DARABONBA_PTR_SET_VALUE(dmsInstanceId_, dmsInstanceId) };


    // dmsInstanceSummary Field Functions 
    bool hasDmsInstanceSummary() const { return this->dmsInstanceSummary_ != nullptr;};
    void deleteDmsInstanceSummary() { this->dmsInstanceSummary_ = nullptr;};
    inline const AgenticDmsInstanceSyncTaskInstance::DmsInstanceSummary & getDmsInstanceSummary() const { DARABONBA_PTR_GET_CONST(dmsInstanceSummary_, AgenticDmsInstanceSyncTaskInstance::DmsInstanceSummary) };
    inline AgenticDmsInstanceSyncTaskInstance::DmsInstanceSummary getDmsInstanceSummary() { DARABONBA_PTR_GET(dmsInstanceSummary_, AgenticDmsInstanceSyncTaskInstance::DmsInstanceSummary) };
    inline AgenticDmsInstanceSyncTaskInstance& setDmsInstanceSummary(const AgenticDmsInstanceSyncTaskInstance::DmsInstanceSummary & dmsInstanceSummary) { DARABONBA_PTR_SET_VALUE(dmsInstanceSummary_, dmsInstanceSummary) };
    inline AgenticDmsInstanceSyncTaskInstance& setDmsInstanceSummary(AgenticDmsInstanceSyncTaskInstance::DmsInstanceSummary && dmsInstanceSummary) { DARABONBA_PTR_SET_RVALUE(dmsInstanceSummary_, dmsInstanceSummary) };


    // dmsRegionId Field Functions 
    bool hasDmsRegionId() const { return this->dmsRegionId_ != nullptr;};
    void deleteDmsRegionId() { this->dmsRegionId_ = nullptr;};
    inline string getDmsRegionId() const { DARABONBA_PTR_GET_DEFAULT(dmsRegionId_, "") };
    inline AgenticDmsInstanceSyncTaskInstance& setDmsRegionId(string dmsRegionId) { DARABONBA_PTR_SET_VALUE(dmsRegionId_, dmsRegionId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline AgenticDmsInstanceSyncTaskInstance& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorSummary Field Functions 
    bool hasErrorSummary() const { return this->errorSummary_ != nullptr;};
    void deleteErrorSummary() { this->errorSummary_ = nullptr;};
    inline string getErrorSummary() const { DARABONBA_PTR_GET_DEFAULT(errorSummary_, "") };
    inline AgenticDmsInstanceSyncTaskInstance& setErrorSummary(string errorSummary) { DARABONBA_PTR_SET_VALUE(errorSummary_, errorSummary) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline AgenticDmsInstanceSyncTaskInstance& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline AgenticDmsInstanceSyncTaskInstance& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline AgenticDmsInstanceSyncTaskInstance& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AgenticDmsInstanceSyncTaskInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> catalogUuid_ {};
    shared_ptr<string> crawlerTaskId_ {};
    shared_ptr<string> datasourceUuid_ {};
    shared_ptr<string> dbType_ {};
    shared_ptr<string> dmsInstanceId_ {};
    shared_ptr<AgenticDmsInstanceSyncTaskInstance::DmsInstanceSummary> dmsInstanceSummary_ {};
    shared_ptr<string> dmsRegionId_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorSummary_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> phase_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
