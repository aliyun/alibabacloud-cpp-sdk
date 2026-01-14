// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeInstanceSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceSourcesResponseBody() = default ;
    DescribeInstanceSourcesResponseBody(const DescribeInstanceSourcesResponseBody &) = default ;
    DescribeInstanceSourcesResponseBody(DescribeInstanceSourcesResponseBody &&) = default ;
    DescribeInstanceSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSourcesResponseBody() = default ;
    DescribeInstanceSourcesResponseBody& operator=(const DescribeInstanceSourcesResponseBody &) = default ;
    DescribeInstanceSourcesResponseBody& operator=(DescribeInstanceSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
        DARABONBA_PTR_TO_JSON(AutoScan, autoScan_);
        DARABONBA_PTR_TO_JSON(CanModifyUserName, canModifyUserName_);
        DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
        DARABONBA_PTR_TO_JSON(DatamaskStatus, datamaskStatus_);
        DARABONBA_PTR_TO_JSON(DbName, dbName_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(EngineType, engineType_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceSize, instanceSize_);
        DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
        DARABONBA_PTR_TO_JSON(LastModifyUserId, lastModifyUserId_);
        DARABONBA_PTR_TO_JSON(LogStoreDay, logStoreDay_);
        DARABONBA_PTR_TO_JSON(PasswordStatus, passwordStatus_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RegionName, regionName_);
        DARABONBA_PTR_TO_JSON(SamplingSize, samplingSize_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
        DARABONBA_PTR_FROM_JSON(AutoScan, autoScan_);
        DARABONBA_PTR_FROM_JSON(CanModifyUserName, canModifyUserName_);
        DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
        DARABONBA_PTR_FROM_JSON(DatamaskStatus, datamaskStatus_);
        DARABONBA_PTR_FROM_JSON(DbName, dbName_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceSize, instanceSize_);
        DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
        DARABONBA_PTR_FROM_JSON(LastModifyUserId, lastModifyUserId_);
        DARABONBA_PTR_FROM_JSON(LogStoreDay, logStoreDay_);
        DARABONBA_PTR_FROM_JSON(PasswordStatus, passwordStatus_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
        DARABONBA_PTR_FROM_JSON(SamplingSize, samplingSize_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auditStatus_ == nullptr
        && this->autoScan_ == nullptr && this->canModifyUserName_ == nullptr && this->checkStatus_ == nullptr && this->datamaskStatus_ == nullptr && this->dbName_ == nullptr
        && this->enable_ == nullptr && this->engineType_ == nullptr && this->errorMessage_ == nullptr && this->gmtCreate_ == nullptr && this->id_ == nullptr
        && this->instanceDescription_ == nullptr && this->instanceId_ == nullptr && this->instanceSize_ == nullptr && this->lastModifyTime_ == nullptr && this->lastModifyUserId_ == nullptr
        && this->logStoreDay_ == nullptr && this->passwordStatus_ == nullptr && this->productId_ == nullptr && this->regionId_ == nullptr && this->regionName_ == nullptr
        && this->samplingSize_ == nullptr && this->tenantId_ == nullptr && this->tenantName_ == nullptr && this->userName_ == nullptr; };
      // auditStatus Field Functions 
      bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
      void deleteAuditStatus() { this->auditStatus_ = nullptr;};
      inline int32_t getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, 0) };
      inline Items& setAuditStatus(int32_t auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


      // autoScan Field Functions 
      bool hasAutoScan() const { return this->autoScan_ != nullptr;};
      void deleteAutoScan() { this->autoScan_ = nullptr;};
      inline int32_t getAutoScan() const { DARABONBA_PTR_GET_DEFAULT(autoScan_, 0) };
      inline Items& setAutoScan(int32_t autoScan) { DARABONBA_PTR_SET_VALUE(autoScan_, autoScan) };


      // canModifyUserName Field Functions 
      bool hasCanModifyUserName() const { return this->canModifyUserName_ != nullptr;};
      void deleteCanModifyUserName() { this->canModifyUserName_ = nullptr;};
      inline bool getCanModifyUserName() const { DARABONBA_PTR_GET_DEFAULT(canModifyUserName_, false) };
      inline Items& setCanModifyUserName(bool canModifyUserName) { DARABONBA_PTR_SET_VALUE(canModifyUserName_, canModifyUserName) };


      // checkStatus Field Functions 
      bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
      void deleteCheckStatus() { this->checkStatus_ = nullptr;};
      inline int32_t getCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, 0) };
      inline Items& setCheckStatus(int32_t checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


      // datamaskStatus Field Functions 
      bool hasDatamaskStatus() const { return this->datamaskStatus_ != nullptr;};
      void deleteDatamaskStatus() { this->datamaskStatus_ = nullptr;};
      inline int32_t getDatamaskStatus() const { DARABONBA_PTR_GET_DEFAULT(datamaskStatus_, 0) };
      inline Items& setDatamaskStatus(int32_t datamaskStatus) { DARABONBA_PTR_SET_VALUE(datamaskStatus_, datamaskStatus) };


      // dbName Field Functions 
      bool hasDbName() const { return this->dbName_ != nullptr;};
      void deleteDbName() { this->dbName_ = nullptr;};
      inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
      inline Items& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline int32_t getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
      inline Items& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // engineType Field Functions 
      bool hasEngineType() const { return this->engineType_ != nullptr;};
      void deleteEngineType() { this->engineType_ = nullptr;};
      inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
      inline Items& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Items& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Items& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Items& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceDescription Field Functions 
      bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
      void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
      inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
      inline Items& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Items& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceSize Field Functions 
      bool hasInstanceSize() const { return this->instanceSize_ != nullptr;};
      void deleteInstanceSize() { this->instanceSize_ = nullptr;};
      inline int64_t getInstanceSize() const { DARABONBA_PTR_GET_DEFAULT(instanceSize_, 0L) };
      inline Items& setInstanceSize(int64_t instanceSize) { DARABONBA_PTR_SET_VALUE(instanceSize_, instanceSize) };


      // lastModifyTime Field Functions 
      bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
      void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
      inline int64_t getLastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, 0L) };
      inline Items& setLastModifyTime(int64_t lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


      // lastModifyUserId Field Functions 
      bool hasLastModifyUserId() const { return this->lastModifyUserId_ != nullptr;};
      void deleteLastModifyUserId() { this->lastModifyUserId_ = nullptr;};
      inline string getLastModifyUserId() const { DARABONBA_PTR_GET_DEFAULT(lastModifyUserId_, "") };
      inline Items& setLastModifyUserId(string lastModifyUserId) { DARABONBA_PTR_SET_VALUE(lastModifyUserId_, lastModifyUserId) };


      // logStoreDay Field Functions 
      bool hasLogStoreDay() const { return this->logStoreDay_ != nullptr;};
      void deleteLogStoreDay() { this->logStoreDay_ = nullptr;};
      inline int32_t getLogStoreDay() const { DARABONBA_PTR_GET_DEFAULT(logStoreDay_, 0) };
      inline Items& setLogStoreDay(int32_t logStoreDay) { DARABONBA_PTR_SET_VALUE(logStoreDay_, logStoreDay) };


      // passwordStatus Field Functions 
      bool hasPasswordStatus() const { return this->passwordStatus_ != nullptr;};
      void deletePasswordStatus() { this->passwordStatus_ = nullptr;};
      inline int32_t getPasswordStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordStatus_, 0) };
      inline Items& setPasswordStatus(int32_t passwordStatus) { DARABONBA_PTR_SET_VALUE(passwordStatus_, passwordStatus) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
      inline Items& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Items& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // regionName Field Functions 
      bool hasRegionName() const { return this->regionName_ != nullptr;};
      void deleteRegionName() { this->regionName_ = nullptr;};
      inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
      inline Items& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


      // samplingSize Field Functions 
      bool hasSamplingSize() const { return this->samplingSize_ != nullptr;};
      void deleteSamplingSize() { this->samplingSize_ = nullptr;};
      inline int32_t getSamplingSize() const { DARABONBA_PTR_GET_DEFAULT(samplingSize_, 0) };
      inline Items& setSamplingSize(int32_t samplingSize) { DARABONBA_PTR_SET_VALUE(samplingSize_, samplingSize) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Items& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // tenantName Field Functions 
      bool hasTenantName() const { return this->tenantName_ != nullptr;};
      void deleteTenantName() { this->tenantName_ = nullptr;};
      inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
      inline Items& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Items& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // Indicates whether the security audit feature is enabled. Valid values:
      // 
      // *   **1**: yes
      // *   **0**: no
      shared_ptr<int32_t> auditStatus_ {};
      // Indicates whether the automatic scan feature is enabled to detect sensitive data. Valid values:
      // 
      // *   **0**: no
      // *   **1**: yes
      shared_ptr<int32_t> autoScan_ {};
      // Indicates whether the username and password can be changed. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> canModifyUserName_ {};
      // The data detection status. Valid values:
      // 
      // *   **0**: The data detection is ready.
      // *   **1**: The data detection is running.
      // *   **2**: The connectivity test is in progress.
      // *   **3**: The connectivity test passed.
      // *   **4**: The connectivity test failed.
      shared_ptr<int32_t> checkStatus_ {};
      // Indicates whether DSC has the data de-identification permissions on the data asset. Valid values:
      // 
      // *   **1**: yes
      // *   **0**: no
      shared_ptr<int32_t> datamaskStatus_ {};
      // The name of the database to which the data asset belongs.
      shared_ptr<string> dbName_ {};
      // Indicates whether sensitive data detection is enabled for the data asset. Valid values:
      // 
      // *   **1**: yes
      // *   **0**: no
      shared_ptr<int32_t> enable_ {};
      // The engine type. Valid values:
      // 
      // *   **MySQL**
      // *   **MariaDB**
      // *   **Oracle**
      // *   **PostgreSQL**
      // *   **SQLServer**
      shared_ptr<string> engineType_ {};
      // The reason for the failure.
      shared_ptr<string> errorMessage_ {};
      // The time when the data asset was created. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The unique ID of the data asset.
      shared_ptr<int64_t> id_ {};
      // The description of the instance.
      shared_ptr<string> instanceDescription_ {};
      // The ID of the instance
      shared_ptr<string> instanceId_ {};
      // The storage space size of the instance. This parameter is valid only if the value of the ProductId parameter is 2. Unit: bytes.
      shared_ptr<int64_t> instanceSize_ {};
      // The time when the data asset was last modified. Unit: milliseconds.
      shared_ptr<int64_t> lastModifyTime_ {};
      // The ID of the account that is last used to modify the data asset.
      shared_ptr<string> lastModifyUserId_ {};
      // The retention period of raw logs. Unit: days.
      shared_ptr<int32_t> logStoreDay_ {};
      // Indicates whether the password is used. Valid values:
      // 
      // *   **1**: yes
      // *   **0**: no
      shared_ptr<int32_t> passwordStatus_ {};
      // The ID of the service to which the asset belongs. Valid values:
      // 
      // *   **1**: MaxCompute
      // *   **2**: OSS
      // *   **3**: AnalyticDB for MySQL
      // *   **4**: OTS
      // *   **5**: ApsaraDB RDS
      // *   **6**: self-managed databases
      shared_ptr<int64_t> productId_ {};
      // The ID of the region where the instance resides.
      shared_ptr<string> regionId_ {};
      // The name of the region.
      shared_ptr<string> regionName_ {};
      // The number of sensitive data samples. Valid values: **0**, **5**, and **10**. Unit: data entries.
      shared_ptr<int32_t> samplingSize_ {};
      // The ID of the tenant.
      shared_ptr<string> tenantId_ {};
      // The name of the tenant.
      shared_ptr<string> tenantName_ {};
      // The username of the account.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeInstanceSourcesResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeInstanceSourcesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeInstanceSourcesResponseBody::Items>) };
    inline vector<DescribeInstanceSourcesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeInstanceSourcesResponseBody::Items>) };
    inline DescribeInstanceSourcesResponseBody& setItems(const vector<DescribeInstanceSourcesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeInstanceSourcesResponseBody& setItems(vector<DescribeInstanceSourcesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceSourcesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstanceSourcesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The assets.
    shared_ptr<vector<DescribeInstanceSourcesResponseBody::Items>> items_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
