// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREDBINSTANCELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREDBINSTANCELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeRestoreDBInstanceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreDBInstanceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreDBInstanceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRestoreDBInstanceListResponseBody() = default ;
    DescribeRestoreDBInstanceListResponseBody(const DescribeRestoreDBInstanceListResponseBody &) = default ;
    DescribeRestoreDBInstanceListResponseBody(DescribeRestoreDBInstanceListResponseBody &&) = default ;
    DescribeRestoreDBInstanceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreDBInstanceListResponseBody() = default ;
    DescribeRestoreDBInstanceListResponseBody& operator=(const DescribeRestoreDBInstanceListResponseBody &) = default ;
    DescribeRestoreDBInstanceListResponseBody& operator=(DescribeRestoreDBInstanceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBInstances& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstance, DBInstance_);
      };
      friend void from_json(const Darabonba::Json& j, DBInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstance, DBInstance_);
      };
      DBInstances() = default ;
      DBInstances(const DBInstances &) = default ;
      DBInstances(DBInstances &&) = default ;
      DBInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBInstances() = default ;
      DBInstances& operator=(const DBInstances &) = default ;
      DBInstances& operator=(DBInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstance& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
          DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(HiddenZoneId, hiddenZoneId_);
          DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
          DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
          DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(HiddenZoneId, hiddenZoneId_);
          DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
          DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        DBInstance() = default ;
        DBInstance(const DBInstance &) = default ;
        DBInstance(DBInstance &&) = default ;
        DBInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstance() = default ;
        DBInstance& operator=(const DBInstance &) = default ;
        DBInstance& operator=(DBInstance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->DBInstanceDescription_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceStatus_ == nullptr && this->DBInstanceType_ == nullptr && this->engineVersion_ == nullptr
        && this->hiddenZoneId_ == nullptr && this->isDeleted_ == nullptr && this->lockMode_ == nullptr && this->regionId_ == nullptr && this->secondaryZoneId_ == nullptr
        && this->zoneId_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline DBInstance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // DBInstanceDescription Field Functions 
        bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
        void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
        inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
        inline DBInstance& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline DBInstance& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // DBInstanceStatus Field Functions 
        bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
        void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
        inline string getDBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
        inline DBInstance& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


        // DBInstanceType Field Functions 
        bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
        void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
        inline string getDBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
        inline DBInstance& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline DBInstance& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // hiddenZoneId Field Functions 
        bool hasHiddenZoneId() const { return this->hiddenZoneId_ != nullptr;};
        void deleteHiddenZoneId() { this->hiddenZoneId_ = nullptr;};
        inline string getHiddenZoneId() const { DARABONBA_PTR_GET_DEFAULT(hiddenZoneId_, "") };
        inline DBInstance& setHiddenZoneId(string hiddenZoneId) { DARABONBA_PTR_SET_VALUE(hiddenZoneId_, hiddenZoneId) };


        // isDeleted Field Functions 
        bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
        void deleteIsDeleted() { this->isDeleted_ = nullptr;};
        inline int32_t getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, 0) };
        inline DBInstance& setIsDeleted(int32_t isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


        // lockMode Field Functions 
        bool hasLockMode() const { return this->lockMode_ != nullptr;};
        void deleteLockMode() { this->lockMode_ = nullptr;};
        inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
        inline DBInstance& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DBInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // secondaryZoneId Field Functions 
        bool hasSecondaryZoneId() const { return this->secondaryZoneId_ != nullptr;};
        void deleteSecondaryZoneId() { this->secondaryZoneId_ = nullptr;};
        inline string getSecondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryZoneId_, "") };
        inline DBInstance& setSecondaryZoneId(string secondaryZoneId) { DARABONBA_PTR_SET_VALUE(secondaryZoneId_, secondaryZoneId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DBInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The time of instance creation, formatted as <i>yyyy-MM-dd</i>T<i>HH:00:00</i>Z (UTC time).
        shared_ptr<string> creationTime_ {};
        // The description of the instance.
        shared_ptr<string> DBInstanceDescription_ {};
        // The instance ID.
        shared_ptr<string> DBInstanceId_ {};
        // The status of the instance. For more information, see [Instance states](https://help.aliyun.com/document_detail/63870.html).
        shared_ptr<string> DBInstanceStatus_ {};
        // The architecture of the instance. Valid values:
        // 
        // *   **sharding**: sharded cluster instance
        // *   **replicate**: replica set or standalone instance
        shared_ptr<string> DBInstanceType_ {};
        // The database engine version of the instance. Valid values:
        // 
        // *   **7.0**
        // *   **6.0**
        // *   **5.0**
        // *   **4.4**
        // *   **4.2**
        // *   **4.0**
        // *   **3.4**
        shared_ptr<string> engineVersion_ {};
        // The secondary availability zone 2 for the instance when implementing multi-AZ deployment.
        shared_ptr<string> hiddenZoneId_ {};
        // Specifies whether the instance is deleted. Valid values:
        // 
        // *   **0**: not deleted
        // *   **1**: deleted
        shared_ptr<int32_t> isDeleted_ {};
        // The locked state of the instance, value description:
        // - Unlock: Normal.
        // - ManualLock: Manually triggered lock.
        // - LockByExpiration: Automatically locked due to expiration.
        // - LockByRestoration: Automatically locked before restoration.
        // - LockByDiskQuota: Automatically locked due to disk quota exceeded.
        shared_ptr<string> lockMode_ {};
        // The region ID of the instance.
        shared_ptr<string> regionId_ {};
        // The secondary availability zone 1 for the instance when implementing multi-AZ deployment.
        shared_ptr<string> secondaryZoneId_ {};
        // The zone ID of the instance.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->DBInstance_ == nullptr; };
      // DBInstance Field Functions 
      bool hasDBInstance() const { return this->DBInstance_ != nullptr;};
      void deleteDBInstance() { this->DBInstance_ = nullptr;};
      inline const vector<DBInstances::DBInstance> & getDBInstance() const { DARABONBA_PTR_GET_CONST(DBInstance_, vector<DBInstances::DBInstance>) };
      inline vector<DBInstances::DBInstance> getDBInstance() { DARABONBA_PTR_GET(DBInstance_, vector<DBInstances::DBInstance>) };
      inline DBInstances& setDBInstance(const vector<DBInstances::DBInstance> & dBInstance) { DARABONBA_PTR_SET_VALUE(DBInstance_, dBInstance) };
      inline DBInstances& setDBInstance(vector<DBInstances::DBInstance> && dBInstance) { DARABONBA_PTR_SET_RVALUE(DBInstance_, dBInstance) };


    protected:
      shared_ptr<vector<DBInstances::DBInstance>> DBInstance_ {};
    };

    virtual bool empty() const override { return this->DBInstances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // DBInstances Field Functions 
    bool hasDBInstances() const { return this->DBInstances_ != nullptr;};
    void deleteDBInstances() { this->DBInstances_ = nullptr;};
    inline const DescribeRestoreDBInstanceListResponseBody::DBInstances & getDBInstances() const { DARABONBA_PTR_GET_CONST(DBInstances_, DescribeRestoreDBInstanceListResponseBody::DBInstances) };
    inline DescribeRestoreDBInstanceListResponseBody::DBInstances getDBInstances() { DARABONBA_PTR_GET(DBInstances_, DescribeRestoreDBInstanceListResponseBody::DBInstances) };
    inline DescribeRestoreDBInstanceListResponseBody& setDBInstances(const DescribeRestoreDBInstanceListResponseBody::DBInstances & dBInstances) { DARABONBA_PTR_SET_VALUE(DBInstances_, dBInstances) };
    inline DescribeRestoreDBInstanceListResponseBody& setDBInstances(DescribeRestoreDBInstanceListResponseBody::DBInstances && dBInstances) { DARABONBA_PTR_SET_RVALUE(DBInstances_, dBInstances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRestoreDBInstanceListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRestoreDBInstanceListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRestoreDBInstanceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRestoreDBInstanceListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // DB instances list.
    shared_ptr<DescribeRestoreDBInstanceListResponseBody::DBInstances> DBInstances_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of instances in the query results.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
