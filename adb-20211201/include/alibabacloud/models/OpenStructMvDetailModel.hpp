// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSTRUCTMVDETAILMODEL_HPP_
#define ALIBABACLOUD_MODELS_OPENSTRUCTMVDETAILMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class OpenStructMvDetailModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenStructMvDetailModel& obj) { 
      DARABONBA_PTR_TO_JSON(BaseTableInfos, baseTableInfos_);
      DARABONBA_PTR_TO_JSON(BaseTableNames, baseTableNames_);
      DARABONBA_PTR_TO_JSON(EnableDelayAlert, enableDelayAlert_);
      DARABONBA_PTR_TO_JSON(EnableFailureAlert, enableFailureAlert_);
      DARABONBA_PTR_TO_JSON(ExplicitHit, explicitHit_);
      DARABONBA_PTR_TO_JSON(FirstRefreshTime, firstRefreshTime_);
      DARABONBA_PTR_TO_JSON(ImplicitHit, implicitHit_);
      DARABONBA_PTR_TO_JSON(IsInactive, isInactive_);
      DARABONBA_PTR_TO_JSON(LatencyTolerance, latencyTolerance_);
      DARABONBA_PTR_TO_JSON(LocalSize, localSize_);
      DARABONBA_PTR_TO_JSON(QueryRewriteEnabled, queryRewriteEnabled_);
      DARABONBA_PTR_TO_JSON(RefreshInterval, refreshInterval_);
      DARABONBA_PTR_TO_JSON(RefreshState, refreshState_);
      DARABONBA_PTR_TO_JSON(RemoteSize, remoteSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(TableEngine, tableEngine_);
      DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, OpenStructMvDetailModel& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseTableInfos, baseTableInfos_);
      DARABONBA_PTR_FROM_JSON(BaseTableNames, baseTableNames_);
      DARABONBA_PTR_FROM_JSON(EnableDelayAlert, enableDelayAlert_);
      DARABONBA_PTR_FROM_JSON(EnableFailureAlert, enableFailureAlert_);
      DARABONBA_PTR_FROM_JSON(ExplicitHit, explicitHit_);
      DARABONBA_PTR_FROM_JSON(FirstRefreshTime, firstRefreshTime_);
      DARABONBA_PTR_FROM_JSON(ImplicitHit, implicitHit_);
      DARABONBA_PTR_FROM_JSON(IsInactive, isInactive_);
      DARABONBA_PTR_FROM_JSON(LatencyTolerance, latencyTolerance_);
      DARABONBA_PTR_FROM_JSON(LocalSize, localSize_);
      DARABONBA_PTR_FROM_JSON(QueryRewriteEnabled, queryRewriteEnabled_);
      DARABONBA_PTR_FROM_JSON(RefreshInterval, refreshInterval_);
      DARABONBA_PTR_FROM_JSON(RefreshState, refreshState_);
      DARABONBA_PTR_FROM_JSON(RemoteSize, remoteSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(TableEngine, tableEngine_);
      DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
    };
    OpenStructMvDetailModel() = default ;
    OpenStructMvDetailModel(const OpenStructMvDetailModel &) = default ;
    OpenStructMvDetailModel(OpenStructMvDetailModel &&) = default ;
    OpenStructMvDetailModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenStructMvDetailModel() = default ;
    OpenStructMvDetailModel& operator=(const OpenStructMvDetailModel &) = default ;
    OpenStructMvDetailModel& operator=(OpenStructMvDetailModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BaseTableInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BaseTableInfos& obj) { 
        DARABONBA_PTR_TO_JSON(BaseTableIsMv, baseTableIsMv_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(TableEngine, tableEngine_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, BaseTableInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(BaseTableIsMv, baseTableIsMv_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(TableEngine, tableEngine_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      };
      BaseTableInfos() = default ;
      BaseTableInfos(const BaseTableInfos &) = default ;
      BaseTableInfos(BaseTableInfos &&) = default ;
      BaseTableInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BaseTableInfos() = default ;
      BaseTableInfos& operator=(const BaseTableInfos &) = default ;
      BaseTableInfos& operator=(BaseTableInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->baseTableIsMv_ == nullptr
        && this->schemaName_ == nullptr && this->tableEngine_ == nullptr && this->tableName_ == nullptr; };
      // baseTableIsMv Field Functions 
      bool hasBaseTableIsMv() const { return this->baseTableIsMv_ != nullptr;};
      void deleteBaseTableIsMv() { this->baseTableIsMv_ = nullptr;};
      inline bool getBaseTableIsMv() const { DARABONBA_PTR_GET_DEFAULT(baseTableIsMv_, false) };
      inline BaseTableInfos& setBaseTableIsMv(bool baseTableIsMv) { DARABONBA_PTR_SET_VALUE(baseTableIsMv_, baseTableIsMv) };


      // schemaName Field Functions 
      bool hasSchemaName() const { return this->schemaName_ != nullptr;};
      void deleteSchemaName() { this->schemaName_ = nullptr;};
      inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
      inline BaseTableInfos& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      // tableEngine Field Functions 
      bool hasTableEngine() const { return this->tableEngine_ != nullptr;};
      void deleteTableEngine() { this->tableEngine_ = nullptr;};
      inline string getTableEngine() const { DARABONBA_PTR_GET_DEFAULT(tableEngine_, "") };
      inline BaseTableInfos& setTableEngine(string tableEngine) { DARABONBA_PTR_SET_VALUE(tableEngine_, tableEngine) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline BaseTableInfos& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      shared_ptr<bool> baseTableIsMv_ {};
      shared_ptr<string> schemaName_ {};
      shared_ptr<string> tableEngine_ {};
      shared_ptr<string> tableName_ {};
    };

    virtual bool empty() const override { return this->baseTableInfos_ == nullptr
        && this->baseTableNames_ == nullptr && this->enableDelayAlert_ == nullptr && this->enableFailureAlert_ == nullptr && this->explicitHit_ == nullptr && this->firstRefreshTime_ == nullptr
        && this->implicitHit_ == nullptr && this->isInactive_ == nullptr && this->latencyTolerance_ == nullptr && this->localSize_ == nullptr && this->queryRewriteEnabled_ == nullptr
        && this->refreshInterval_ == nullptr && this->refreshState_ == nullptr && this->remoteSize_ == nullptr && this->resourceGroup_ == nullptr && this->tableEngine_ == nullptr
        && this->updatedAt_ == nullptr; };
    // baseTableInfos Field Functions 
    bool hasBaseTableInfos() const { return this->baseTableInfos_ != nullptr;};
    void deleteBaseTableInfos() { this->baseTableInfos_ = nullptr;};
    inline const vector<OpenStructMvDetailModel::BaseTableInfos> & getBaseTableInfos() const { DARABONBA_PTR_GET_CONST(baseTableInfos_, vector<OpenStructMvDetailModel::BaseTableInfos>) };
    inline vector<OpenStructMvDetailModel::BaseTableInfos> getBaseTableInfos() { DARABONBA_PTR_GET(baseTableInfos_, vector<OpenStructMvDetailModel::BaseTableInfos>) };
    inline OpenStructMvDetailModel& setBaseTableInfos(const vector<OpenStructMvDetailModel::BaseTableInfos> & baseTableInfos) { DARABONBA_PTR_SET_VALUE(baseTableInfos_, baseTableInfos) };
    inline OpenStructMvDetailModel& setBaseTableInfos(vector<OpenStructMvDetailModel::BaseTableInfos> && baseTableInfos) { DARABONBA_PTR_SET_RVALUE(baseTableInfos_, baseTableInfos) };


    // baseTableNames Field Functions 
    bool hasBaseTableNames() const { return this->baseTableNames_ != nullptr;};
    void deleteBaseTableNames() { this->baseTableNames_ = nullptr;};
    inline const vector<vector<string>> & getBaseTableNames() const { DARABONBA_PTR_GET_CONST(baseTableNames_, vector<vector<string>>) };
    inline vector<vector<string>> getBaseTableNames() { DARABONBA_PTR_GET(baseTableNames_, vector<vector<string>>) };
    inline OpenStructMvDetailModel& setBaseTableNames(const vector<vector<string>> & baseTableNames) { DARABONBA_PTR_SET_VALUE(baseTableNames_, baseTableNames) };
    inline OpenStructMvDetailModel& setBaseTableNames(vector<vector<string>> && baseTableNames) { DARABONBA_PTR_SET_RVALUE(baseTableNames_, baseTableNames) };


    // enableDelayAlert Field Functions 
    bool hasEnableDelayAlert() const { return this->enableDelayAlert_ != nullptr;};
    void deleteEnableDelayAlert() { this->enableDelayAlert_ = nullptr;};
    inline int32_t getEnableDelayAlert() const { DARABONBA_PTR_GET_DEFAULT(enableDelayAlert_, 0) };
    inline OpenStructMvDetailModel& setEnableDelayAlert(int32_t enableDelayAlert) { DARABONBA_PTR_SET_VALUE(enableDelayAlert_, enableDelayAlert) };


    // enableFailureAlert Field Functions 
    bool hasEnableFailureAlert() const { return this->enableFailureAlert_ != nullptr;};
    void deleteEnableFailureAlert() { this->enableFailureAlert_ = nullptr;};
    inline int32_t getEnableFailureAlert() const { DARABONBA_PTR_GET_DEFAULT(enableFailureAlert_, 0) };
    inline OpenStructMvDetailModel& setEnableFailureAlert(int32_t enableFailureAlert) { DARABONBA_PTR_SET_VALUE(enableFailureAlert_, enableFailureAlert) };


    // explicitHit Field Functions 
    bool hasExplicitHit() const { return this->explicitHit_ != nullptr;};
    void deleteExplicitHit() { this->explicitHit_ = nullptr;};
    inline int64_t getExplicitHit() const { DARABONBA_PTR_GET_DEFAULT(explicitHit_, 0L) };
    inline OpenStructMvDetailModel& setExplicitHit(int64_t explicitHit) { DARABONBA_PTR_SET_VALUE(explicitHit_, explicitHit) };


    // firstRefreshTime Field Functions 
    bool hasFirstRefreshTime() const { return this->firstRefreshTime_ != nullptr;};
    void deleteFirstRefreshTime() { this->firstRefreshTime_ = nullptr;};
    inline string getFirstRefreshTime() const { DARABONBA_PTR_GET_DEFAULT(firstRefreshTime_, "") };
    inline OpenStructMvDetailModel& setFirstRefreshTime(string firstRefreshTime) { DARABONBA_PTR_SET_VALUE(firstRefreshTime_, firstRefreshTime) };


    // implicitHit Field Functions 
    bool hasImplicitHit() const { return this->implicitHit_ != nullptr;};
    void deleteImplicitHit() { this->implicitHit_ = nullptr;};
    inline int64_t getImplicitHit() const { DARABONBA_PTR_GET_DEFAULT(implicitHit_, 0L) };
    inline OpenStructMvDetailModel& setImplicitHit(int64_t implicitHit) { DARABONBA_PTR_SET_VALUE(implicitHit_, implicitHit) };


    // isInactive Field Functions 
    bool hasIsInactive() const { return this->isInactive_ != nullptr;};
    void deleteIsInactive() { this->isInactive_ = nullptr;};
    inline bool getIsInactive() const { DARABONBA_PTR_GET_DEFAULT(isInactive_, false) };
    inline OpenStructMvDetailModel& setIsInactive(bool isInactive) { DARABONBA_PTR_SET_VALUE(isInactive_, isInactive) };


    // latencyTolerance Field Functions 
    bool hasLatencyTolerance() const { return this->latencyTolerance_ != nullptr;};
    void deleteLatencyTolerance() { this->latencyTolerance_ = nullptr;};
    inline int32_t getLatencyTolerance() const { DARABONBA_PTR_GET_DEFAULT(latencyTolerance_, 0) };
    inline OpenStructMvDetailModel& setLatencyTolerance(int32_t latencyTolerance) { DARABONBA_PTR_SET_VALUE(latencyTolerance_, latencyTolerance) };


    // localSize Field Functions 
    bool hasLocalSize() const { return this->localSize_ != nullptr;};
    void deleteLocalSize() { this->localSize_ = nullptr;};
    inline int64_t getLocalSize() const { DARABONBA_PTR_GET_DEFAULT(localSize_, 0L) };
    inline OpenStructMvDetailModel& setLocalSize(int64_t localSize) { DARABONBA_PTR_SET_VALUE(localSize_, localSize) };


    // queryRewriteEnabled Field Functions 
    bool hasQueryRewriteEnabled() const { return this->queryRewriteEnabled_ != nullptr;};
    void deleteQueryRewriteEnabled() { this->queryRewriteEnabled_ = nullptr;};
    inline bool getQueryRewriteEnabled() const { DARABONBA_PTR_GET_DEFAULT(queryRewriteEnabled_, false) };
    inline OpenStructMvDetailModel& setQueryRewriteEnabled(bool queryRewriteEnabled) { DARABONBA_PTR_SET_VALUE(queryRewriteEnabled_, queryRewriteEnabled) };


    // refreshInterval Field Functions 
    bool hasRefreshInterval() const { return this->refreshInterval_ != nullptr;};
    void deleteRefreshInterval() { this->refreshInterval_ = nullptr;};
    inline string getRefreshInterval() const { DARABONBA_PTR_GET_DEFAULT(refreshInterval_, "") };
    inline OpenStructMvDetailModel& setRefreshInterval(string refreshInterval) { DARABONBA_PTR_SET_VALUE(refreshInterval_, refreshInterval) };


    // refreshState Field Functions 
    bool hasRefreshState() const { return this->refreshState_ != nullptr;};
    void deleteRefreshState() { this->refreshState_ = nullptr;};
    inline string getRefreshState() const { DARABONBA_PTR_GET_DEFAULT(refreshState_, "") };
    inline OpenStructMvDetailModel& setRefreshState(string refreshState) { DARABONBA_PTR_SET_VALUE(refreshState_, refreshState) };


    // remoteSize Field Functions 
    bool hasRemoteSize() const { return this->remoteSize_ != nullptr;};
    void deleteRemoteSize() { this->remoteSize_ = nullptr;};
    inline int64_t getRemoteSize() const { DARABONBA_PTR_GET_DEFAULT(remoteSize_, 0L) };
    inline OpenStructMvDetailModel& setRemoteSize(int64_t remoteSize) { DARABONBA_PTR_SET_VALUE(remoteSize_, remoteSize) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline OpenStructMvDetailModel& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // tableEngine Field Functions 
    bool hasTableEngine() const { return this->tableEngine_ != nullptr;};
    void deleteTableEngine() { this->tableEngine_ = nullptr;};
    inline string getTableEngine() const { DARABONBA_PTR_GET_DEFAULT(tableEngine_, "") };
    inline OpenStructMvDetailModel& setTableEngine(string tableEngine) { DARABONBA_PTR_SET_VALUE(tableEngine_, tableEngine) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline OpenStructMvDetailModel& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    shared_ptr<vector<OpenStructMvDetailModel::BaseTableInfos>> baseTableInfos_ {};
    shared_ptr<vector<vector<string>>> baseTableNames_ {};
    shared_ptr<int32_t> enableDelayAlert_ {};
    shared_ptr<int32_t> enableFailureAlert_ {};
    shared_ptr<int64_t> explicitHit_ {};
    shared_ptr<string> firstRefreshTime_ {};
    shared_ptr<int64_t> implicitHit_ {};
    shared_ptr<bool> isInactive_ {};
    shared_ptr<int32_t> latencyTolerance_ {};
    shared_ptr<int64_t> localSize_ {};
    shared_ptr<bool> queryRewriteEnabled_ {};
    shared_ptr<string> refreshInterval_ {};
    shared_ptr<string> refreshState_ {};
    shared_ptr<int64_t> remoteSize_ {};
    shared_ptr<string> resourceGroup_ {};
    shared_ptr<string> tableEngine_ {};
    shared_ptr<string> updatedAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
