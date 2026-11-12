// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeDatabaseInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabaseInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseInstances, databaseInstances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabaseInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseInstances, databaseInstances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDatabaseInstancesResponseBody() = default ;
    DescribeDatabaseInstancesResponseBody(const DescribeDatabaseInstancesResponseBody &) = default ;
    DescribeDatabaseInstancesResponseBody(DescribeDatabaseInstancesResponseBody &&) = default ;
    DescribeDatabaseInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabaseInstancesResponseBody() = default ;
    DescribeDatabaseInstancesResponseBody& operator=(const DescribeDatabaseInstancesResponseBody &) = default ;
    DescribeDatabaseInstancesResponseBody& operator=(DescribeDatabaseInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DatabaseInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DatabaseInstances& obj) { 
        DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DatabaseInstanceEdition, databaseInstanceEdition_);
        DARABONBA_PTR_TO_JSON(DatabaseInstanceId, databaseInstanceId_);
        DARABONBA_PTR_TO_JSON(DatabaseInstanceName, databaseInstanceName_);
        DARABONBA_PTR_TO_JSON(DatabaseInstanceStatus, databaseInstanceStatus_);
        DARABONBA_PTR_TO_JSON(DatabaseVersion, databaseVersion_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(PrivateConnection, privateConnection_);
        DARABONBA_PTR_TO_JSON(PublicConnection, publicConnection_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Storage, storage_);
        DARABONBA_PTR_TO_JSON(SuperAccountName, superAccountName_);
      };
      friend void from_json(const Darabonba::Json& j, DatabaseInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DatabaseInstanceEdition, databaseInstanceEdition_);
        DARABONBA_PTR_FROM_JSON(DatabaseInstanceId, databaseInstanceId_);
        DARABONBA_PTR_FROM_JSON(DatabaseInstanceName, databaseInstanceName_);
        DARABONBA_PTR_FROM_JSON(DatabaseInstanceStatus, databaseInstanceStatus_);
        DARABONBA_PTR_FROM_JSON(DatabaseVersion, databaseVersion_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(PrivateConnection, privateConnection_);
        DARABONBA_PTR_FROM_JSON(PublicConnection, publicConnection_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Storage, storage_);
        DARABONBA_PTR_FROM_JSON(SuperAccountName, superAccountName_);
      };
      DatabaseInstances() = default ;
      DatabaseInstances(const DatabaseInstances &) = default ;
      DatabaseInstances(DatabaseInstances &&) = default ;
      DatabaseInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DatabaseInstances() = default ;
      DatabaseInstances& operator=(const DatabaseInstances &) = default ;
      DatabaseInstances& operator=(DatabaseInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->businessStatus_ == nullptr
        && this->chargeType_ == nullptr && this->cpu_ == nullptr && this->creationTime_ == nullptr && this->databaseInstanceEdition_ == nullptr && this->databaseInstanceId_ == nullptr
        && this->databaseInstanceName_ == nullptr && this->databaseInstanceStatus_ == nullptr && this->databaseVersion_ == nullptr && this->expiredTime_ == nullptr && this->memory_ == nullptr
        && this->privateConnection_ == nullptr && this->publicConnection_ == nullptr && this->regionId_ == nullptr && this->storage_ == nullptr && this->superAccountName_ == nullptr; };
      // businessStatus Field Functions 
      bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
      void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
      inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
      inline DatabaseInstances& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline DatabaseInstances& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
      inline DatabaseInstances& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline DatabaseInstances& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // databaseInstanceEdition Field Functions 
      bool hasDatabaseInstanceEdition() const { return this->databaseInstanceEdition_ != nullptr;};
      void deleteDatabaseInstanceEdition() { this->databaseInstanceEdition_ = nullptr;};
      inline string getDatabaseInstanceEdition() const { DARABONBA_PTR_GET_DEFAULT(databaseInstanceEdition_, "") };
      inline DatabaseInstances& setDatabaseInstanceEdition(string databaseInstanceEdition) { DARABONBA_PTR_SET_VALUE(databaseInstanceEdition_, databaseInstanceEdition) };


      // databaseInstanceId Field Functions 
      bool hasDatabaseInstanceId() const { return this->databaseInstanceId_ != nullptr;};
      void deleteDatabaseInstanceId() { this->databaseInstanceId_ = nullptr;};
      inline string getDatabaseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(databaseInstanceId_, "") };
      inline DatabaseInstances& setDatabaseInstanceId(string databaseInstanceId) { DARABONBA_PTR_SET_VALUE(databaseInstanceId_, databaseInstanceId) };


      // databaseInstanceName Field Functions 
      bool hasDatabaseInstanceName() const { return this->databaseInstanceName_ != nullptr;};
      void deleteDatabaseInstanceName() { this->databaseInstanceName_ = nullptr;};
      inline string getDatabaseInstanceName() const { DARABONBA_PTR_GET_DEFAULT(databaseInstanceName_, "") };
      inline DatabaseInstances& setDatabaseInstanceName(string databaseInstanceName) { DARABONBA_PTR_SET_VALUE(databaseInstanceName_, databaseInstanceName) };


      // databaseInstanceStatus Field Functions 
      bool hasDatabaseInstanceStatus() const { return this->databaseInstanceStatus_ != nullptr;};
      void deleteDatabaseInstanceStatus() { this->databaseInstanceStatus_ = nullptr;};
      inline string getDatabaseInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(databaseInstanceStatus_, "") };
      inline DatabaseInstances& setDatabaseInstanceStatus(string databaseInstanceStatus) { DARABONBA_PTR_SET_VALUE(databaseInstanceStatus_, databaseInstanceStatus) };


      // databaseVersion Field Functions 
      bool hasDatabaseVersion() const { return this->databaseVersion_ != nullptr;};
      void deleteDatabaseVersion() { this->databaseVersion_ = nullptr;};
      inline string getDatabaseVersion() const { DARABONBA_PTR_GET_DEFAULT(databaseVersion_, "") };
      inline DatabaseInstances& setDatabaseVersion(string databaseVersion) { DARABONBA_PTR_SET_VALUE(databaseVersion_, databaseVersion) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline DatabaseInstances& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
      inline DatabaseInstances& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // privateConnection Field Functions 
      bool hasPrivateConnection() const { return this->privateConnection_ != nullptr;};
      void deletePrivateConnection() { this->privateConnection_ = nullptr;};
      inline string getPrivateConnection() const { DARABONBA_PTR_GET_DEFAULT(privateConnection_, "") };
      inline DatabaseInstances& setPrivateConnection(string privateConnection) { DARABONBA_PTR_SET_VALUE(privateConnection_, privateConnection) };


      // publicConnection Field Functions 
      bool hasPublicConnection() const { return this->publicConnection_ != nullptr;};
      void deletePublicConnection() { this->publicConnection_ = nullptr;};
      inline string getPublicConnection() const { DARABONBA_PTR_GET_DEFAULT(publicConnection_, "") };
      inline DatabaseInstances& setPublicConnection(string publicConnection) { DARABONBA_PTR_SET_VALUE(publicConnection_, publicConnection) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DatabaseInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // storage Field Functions 
      bool hasStorage() const { return this->storage_ != nullptr;};
      void deleteStorage() { this->storage_ = nullptr;};
      inline int32_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0) };
      inline DatabaseInstances& setStorage(int32_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


      // superAccountName Field Functions 
      bool hasSuperAccountName() const { return this->superAccountName_ != nullptr;};
      void deleteSuperAccountName() { this->superAccountName_ = nullptr;};
      inline string getSuperAccountName() const { DARABONBA_PTR_GET_DEFAULT(superAccountName_, "") };
      inline DatabaseInstances& setSuperAccountName(string superAccountName) { DARABONBA_PTR_SET_VALUE(superAccountName_, superAccountName) };


    protected:
      // The business status of the instance. Valid values:
      // 
      // - normal: Normal.
      // - expired: Expired.
      // - overdue: Overdue payment.
      shared_ptr<string> businessStatus_ {};
      // The billing method of the lightweight database instance. Only the subscription billing method is supported. Set the value to PrePaid.
      // 
      // Default value: PrePaid.
      shared_ptr<string> chargeType_ {};
      // The number of vCPUs.
      shared_ptr<string> cpu_ {};
      // The time when the instance was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format and is displayed in UTC+0.
      shared_ptr<string> creationTime_ {};
      // The plan ID of the lightweight database instance. Valid values:
      // 
      // - swas.db.c1m1s25: CNY 35 per month.
      // 
      // - swas.db.c1m2s80: CNY 100 per month.
      // 
      // - swas.db.c2m4s120: CNY 200 per month.
      // - swas.db.c2m8s240: CNY 300 per month.
      shared_ptr<string> databaseInstanceEdition_ {};
      // The instance ID of the lightweight database.
      shared_ptr<string> databaseInstanceId_ {};
      // The name of the lightweight database instance.
      shared_ptr<string> databaseInstanceName_ {};
      // The status of the lightweight database instance. Valid values:
      // 
      // - Pending: The instance is being created.
      // - Restarting: The instance is being restarted.
      // - Running: The instance is running.
      // - Stopping: The instance is being stopped.
      // - Stopped: The instance is stopped.
      // - UPGRADING: The instance is being upgraded.
      // - DISABLED: The instance is disabled.
      shared_ptr<string> databaseInstanceStatus_ {};
      // The database version. Valid values:
      // 
      // - 5.7: MySQL 5.7.
      // - 8.0: MySQL 8.0.
      shared_ptr<string> databaseVersion_ {};
      // The time when the instance expires. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format and is displayed in UTC+0.
      // 
      // > The expiration time displayed in the console is 8 hours ahead of the UTC time.
      shared_ptr<string> expiredTime_ {};
      // The memory size. Unit: GB.
      shared_ptr<string> memory_ {};
      // The internal endpoint.
      shared_ptr<string> privateConnection_ {};
      // The public endpoint.
      // 
      // > This parameter is returned only if a public endpoint is applied for. You can call the [AllocatePublicConnection](https://help.aliyun.com/document_detail/451413.html) operation to apply for a public endpoint.
      shared_ptr<string> publicConnection_ {};
      // The region ID of the lightweight database instance.
      shared_ptr<string> regionId_ {};
      // The capacity of the ESSD cloud disk. Unit: GB.
      shared_ptr<int32_t> storage_ {};
      // The name of the privileged account of the lightweight database instance.
      shared_ptr<string> superAccountName_ {};
    };

    virtual bool empty() const override { return this->databaseInstances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // databaseInstances Field Functions 
    bool hasDatabaseInstances() const { return this->databaseInstances_ != nullptr;};
    void deleteDatabaseInstances() { this->databaseInstances_ = nullptr;};
    inline const vector<DescribeDatabaseInstancesResponseBody::DatabaseInstances> & getDatabaseInstances() const { DARABONBA_PTR_GET_CONST(databaseInstances_, vector<DescribeDatabaseInstancesResponseBody::DatabaseInstances>) };
    inline vector<DescribeDatabaseInstancesResponseBody::DatabaseInstances> getDatabaseInstances() { DARABONBA_PTR_GET(databaseInstances_, vector<DescribeDatabaseInstancesResponseBody::DatabaseInstances>) };
    inline DescribeDatabaseInstancesResponseBody& setDatabaseInstances(const vector<DescribeDatabaseInstancesResponseBody::DatabaseInstances> & databaseInstances) { DARABONBA_PTR_SET_VALUE(databaseInstances_, databaseInstances) };
    inline DescribeDatabaseInstancesResponseBody& setDatabaseInstances(vector<DescribeDatabaseInstancesResponseBody::DatabaseInstances> && databaseInstances) { DARABONBA_PTR_SET_RVALUE(databaseInstances_, databaseInstances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDatabaseInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDatabaseInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDatabaseInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDatabaseInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the lightweight database instances.
    shared_ptr<vector<DescribeDatabaseInstancesResponseBody::DatabaseInstances>> databaseInstances_ {};
    // The page number for a paged query.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page in the lightweight database instance list.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
