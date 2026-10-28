// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeGadInstanceDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGadInstanceDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DbEngineType, dbEngineType_);
      DARABONBA_PTR_TO_JSON(DbListMode, dbListMode_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MasterDbInstanceId, masterDbInstanceId_);
      DARABONBA_PTR_TO_JSON(MasterDbInstanceRegion, masterDbInstanceRegion_);
      DARABONBA_PTR_TO_JSON(MasterDblnstanceZoneld, masterDblnstanceZoneld_);
      DARABONBA_PTR_TO_JSON(MasterEngineArchType, masterEngineArchType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SlaveDbInstances, slaveDbInstances_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGadInstanceDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DbEngineType, dbEngineType_);
      DARABONBA_PTR_FROM_JSON(DbListMode, dbListMode_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MasterDbInstanceId, masterDbInstanceId_);
      DARABONBA_PTR_FROM_JSON(MasterDbInstanceRegion, masterDbInstanceRegion_);
      DARABONBA_PTR_FROM_JSON(MasterDblnstanceZoneld, masterDblnstanceZoneld_);
      DARABONBA_PTR_FROM_JSON(MasterEngineArchType, masterEngineArchType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SlaveDbInstances, slaveDbInstances_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeGadInstanceDetailResponseBody() = default ;
    DescribeGadInstanceDetailResponseBody(const DescribeGadInstanceDetailResponseBody &) = default ;
    DescribeGadInstanceDetailResponseBody(DescribeGadInstanceDetailResponseBody &&) = default ;
    DescribeGadInstanceDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGadInstanceDetailResponseBody() = default ;
    DescribeGadInstanceDetailResponseBody& operator=(const DescribeGadInstanceDetailResponseBody &) = default ;
    DescribeGadInstanceDetailResponseBody& operator=(DescribeGadInstanceDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SlaveDbInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlaveDbInstances& obj) { 
        DARABONBA_PTR_TO_JSON(SlaveDbInstances, slaveDbInstances_);
      };
      friend void from_json(const Darabonba::Json& j, SlaveDbInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(SlaveDbInstances, slaveDbInstances_);
      };
      SlaveDbInstances() = default ;
      SlaveDbInstances(const SlaveDbInstances &) = default ;
      SlaveDbInstances(SlaveDbInstances &&) = default ;
      SlaveDbInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlaveDbInstances() = default ;
      SlaveDbInstances& operator=(const SlaveDbInstances &) = default ;
      SlaveDbInstances& operator=(SlaveDbInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SlaveDbInstancesItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlaveDbInstancesItem& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
          DARABONBA_PTR_TO_JSON(DbInstanceRegion, dbInstanceRegion_);
          DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
          DARABONBA_PTR_TO_JSON(SyncArchitecture, syncArchitecture_);
        };
        friend void from_json(const Darabonba::Json& j, SlaveDbInstancesItem& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
          DARABONBA_PTR_FROM_JSON(DbInstanceRegion, dbInstanceRegion_);
          DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
          DARABONBA_PTR_FROM_JSON(SyncArchitecture, syncArchitecture_);
        };
        SlaveDbInstancesItem() = default ;
        SlaveDbInstancesItem(const SlaveDbInstancesItem &) = default ;
        SlaveDbInstancesItem(SlaveDbInstancesItem &&) = default ;
        SlaveDbInstancesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlaveDbInstancesItem() = default ;
        SlaveDbInstancesItem& operator=(const SlaveDbInstancesItem &) = default ;
        SlaveDbInstancesItem& operator=(SlaveDbInstancesItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dbInstanceId_ == nullptr && this->dbInstanceRegion_ == nullptr && this->dtsInstanceId_ == nullptr && this->syncArchitecture_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline SlaveDbInstancesItem& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dbInstanceId Field Functions 
        bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
        void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
        inline string getDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
        inline SlaveDbInstancesItem& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


        // dbInstanceRegion Field Functions 
        bool hasDbInstanceRegion() const { return this->dbInstanceRegion_ != nullptr;};
        void deleteDbInstanceRegion() { this->dbInstanceRegion_ = nullptr;};
        inline string getDbInstanceRegion() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceRegion_, "") };
        inline SlaveDbInstancesItem& setDbInstanceRegion(string dbInstanceRegion) { DARABONBA_PTR_SET_VALUE(dbInstanceRegion_, dbInstanceRegion) };


        // dtsInstanceId Field Functions 
        bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
        void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
        inline string getDtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
        inline SlaveDbInstancesItem& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


        // syncArchitecture Field Functions 
        bool hasSyncArchitecture() const { return this->syncArchitecture_ != nullptr;};
        void deleteSyncArchitecture() { this->syncArchitecture_ = nullptr;};
        inline string getSyncArchitecture() const { DARABONBA_PTR_GET_DEFAULT(syncArchitecture_, "") };
        inline SlaveDbInstancesItem& setSyncArchitecture(string syncArchitecture) { DARABONBA_PTR_SET_VALUE(syncArchitecture_, syncArchitecture) };


      protected:
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> dbInstanceId_ {};
        shared_ptr<string> dbInstanceRegion_ {};
        shared_ptr<string> dtsInstanceId_ {};
        shared_ptr<string> syncArchitecture_ {};
      };

      virtual bool empty() const override { return this->slaveDbInstances_ == nullptr; };
      // slaveDbInstances Field Functions 
      bool hasSlaveDbInstances() const { return this->slaveDbInstances_ != nullptr;};
      void deleteSlaveDbInstances() { this->slaveDbInstances_ = nullptr;};
      inline const vector<SlaveDbInstances::SlaveDbInstancesItem> & getSlaveDbInstances() const { DARABONBA_PTR_GET_CONST(slaveDbInstances_, vector<SlaveDbInstances::SlaveDbInstancesItem>) };
      inline vector<SlaveDbInstances::SlaveDbInstancesItem> getSlaveDbInstances() { DARABONBA_PTR_GET(slaveDbInstances_, vector<SlaveDbInstances::SlaveDbInstancesItem>) };
      inline SlaveDbInstances& setSlaveDbInstances(const vector<SlaveDbInstances::SlaveDbInstancesItem> & slaveDbInstances) { DARABONBA_PTR_SET_VALUE(slaveDbInstances_, slaveDbInstances) };
      inline SlaveDbInstances& setSlaveDbInstances(vector<SlaveDbInstances::SlaveDbInstancesItem> && slaveDbInstances) { DARABONBA_PTR_SET_RVALUE(slaveDbInstances_, slaveDbInstances) };


    protected:
      shared_ptr<vector<SlaveDbInstances::SlaveDbInstancesItem>> slaveDbInstances_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dbEngineType_ == nullptr && this->dbListMode_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errCode_ == nullptr
        && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceType_ == nullptr
        && this->masterDbInstanceId_ == nullptr && this->masterDbInstanceRegion_ == nullptr && this->masterDblnstanceZoneld_ == nullptr && this->masterEngineArchType_ == nullptr && this->regionId_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->slaveDbInstances_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeGadInstanceDetailResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dbEngineType Field Functions 
    bool hasDbEngineType() const { return this->dbEngineType_ != nullptr;};
    void deleteDbEngineType() { this->dbEngineType_ = nullptr;};
    inline string getDbEngineType() const { DARABONBA_PTR_GET_DEFAULT(dbEngineType_, "") };
    inline DescribeGadInstanceDetailResponseBody& setDbEngineType(string dbEngineType) { DARABONBA_PTR_SET_VALUE(dbEngineType_, dbEngineType) };


    // dbListMode Field Functions 
    bool hasDbListMode() const { return this->dbListMode_ != nullptr;};
    void deleteDbListMode() { this->dbListMode_ = nullptr;};
    inline int32_t getDbListMode() const { DARABONBA_PTR_GET_DEFAULT(dbListMode_, 0) };
    inline DescribeGadInstanceDetailResponseBody& setDbListMode(int32_t dbListMode) { DARABONBA_PTR_SET_VALUE(dbListMode_, dbListMode) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeGadInstanceDetailResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeGadInstanceDetailResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeGadInstanceDetailResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeGadInstanceDetailResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline DescribeGadInstanceDetailResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeGadInstanceDetailResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeGadInstanceDetailResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeGadInstanceDetailResponseBody& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // masterDbInstanceId Field Functions 
    bool hasMasterDbInstanceId() const { return this->masterDbInstanceId_ != nullptr;};
    void deleteMasterDbInstanceId() { this->masterDbInstanceId_ = nullptr;};
    inline string getMasterDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterDbInstanceId_, "") };
    inline DescribeGadInstanceDetailResponseBody& setMasterDbInstanceId(string masterDbInstanceId) { DARABONBA_PTR_SET_VALUE(masterDbInstanceId_, masterDbInstanceId) };


    // masterDbInstanceRegion Field Functions 
    bool hasMasterDbInstanceRegion() const { return this->masterDbInstanceRegion_ != nullptr;};
    void deleteMasterDbInstanceRegion() { this->masterDbInstanceRegion_ = nullptr;};
    inline string getMasterDbInstanceRegion() const { DARABONBA_PTR_GET_DEFAULT(masterDbInstanceRegion_, "") };
    inline DescribeGadInstanceDetailResponseBody& setMasterDbInstanceRegion(string masterDbInstanceRegion) { DARABONBA_PTR_SET_VALUE(masterDbInstanceRegion_, masterDbInstanceRegion) };


    // masterDblnstanceZoneld Field Functions 
    bool hasMasterDblnstanceZoneld() const { return this->masterDblnstanceZoneld_ != nullptr;};
    void deleteMasterDblnstanceZoneld() { this->masterDblnstanceZoneld_ = nullptr;};
    inline string getMasterDblnstanceZoneld() const { DARABONBA_PTR_GET_DEFAULT(masterDblnstanceZoneld_, "") };
    inline DescribeGadInstanceDetailResponseBody& setMasterDblnstanceZoneld(string masterDblnstanceZoneld) { DARABONBA_PTR_SET_VALUE(masterDblnstanceZoneld_, masterDblnstanceZoneld) };


    // masterEngineArchType Field Functions 
    bool hasMasterEngineArchType() const { return this->masterEngineArchType_ != nullptr;};
    void deleteMasterEngineArchType() { this->masterEngineArchType_ = nullptr;};
    inline int32_t getMasterEngineArchType() const { DARABONBA_PTR_GET_DEFAULT(masterEngineArchType_, 0) };
    inline DescribeGadInstanceDetailResponseBody& setMasterEngineArchType(int32_t masterEngineArchType) { DARABONBA_PTR_SET_VALUE(masterEngineArchType_, masterEngineArchType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGadInstanceDetailResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGadInstanceDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeGadInstanceDetailResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // slaveDbInstances Field Functions 
    bool hasSlaveDbInstances() const { return this->slaveDbInstances_ != nullptr;};
    void deleteSlaveDbInstances() { this->slaveDbInstances_ = nullptr;};
    inline const DescribeGadInstanceDetailResponseBody::SlaveDbInstances & getSlaveDbInstances() const { DARABONBA_PTR_GET_CONST(slaveDbInstances_, DescribeGadInstanceDetailResponseBody::SlaveDbInstances) };
    inline DescribeGadInstanceDetailResponseBody::SlaveDbInstances getSlaveDbInstances() { DARABONBA_PTR_GET(slaveDbInstances_, DescribeGadInstanceDetailResponseBody::SlaveDbInstances) };
    inline DescribeGadInstanceDetailResponseBody& setSlaveDbInstances(const DescribeGadInstanceDetailResponseBody::SlaveDbInstances & slaveDbInstances) { DARABONBA_PTR_SET_VALUE(slaveDbInstances_, slaveDbInstances) };
    inline DescribeGadInstanceDetailResponseBody& setSlaveDbInstances(DescribeGadInstanceDetailResponseBody::SlaveDbInstances && slaveDbInstances) { DARABONBA_PTR_SET_RVALUE(slaveDbInstances_, slaveDbInstances) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeGadInstanceDetailResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeGadInstanceDetailResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The creation timestamp.
    shared_ptr<int64_t> createTime_ {};
    // The database engine.
    shared_ptr<string> dbEngineType_ {};
    // The database list mode in disaster recovery scenarios.
    shared_ptr<int32_t> dbListMode_ {};
    // The dynamic error code. This parameter will be deprecated soon.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message related to the request.
    shared_ptr<string> dynamicMessage_ {};
    // The error code returned when an error occurs during the call.
    shared_ptr<string> errCode_ {};
    // The error message returned when an error occurs during the call.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<string> httpStatusCode_ {};
    // The ID of the global active instance group.
    shared_ptr<string> instanceId_ {};
    // The name of the global active instance group.
    shared_ptr<string> instanceName_ {};
    // The GAD instance type.
    shared_ptr<string> instanceType_ {};
    // The instance ID of the primary instance.
    shared_ptr<string> masterDbInstanceId_ {};
    // The region of the primary instance.
    shared_ptr<string> masterDbInstanceRegion_ {};
    // The zone of the primary instance.
    shared_ptr<string> masterDblnstanceZoneld_ {};
    // The architecture type of the primary MongoDB instance. This parameter is specific to MongoDB. Valid values:
    // - 1: replica set
    // - 2: sharded cluster
    shared_ptr<int32_t> masterEngineArchType_ {};
    // The region ID. You can specify this parameter to indicate the region where the instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<DescribeGadInstanceDetailResponseBody::SlaveDbInstances> slaveDbInstances_ {};
    // The status of the global active instance group.
    shared_ptr<string> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
