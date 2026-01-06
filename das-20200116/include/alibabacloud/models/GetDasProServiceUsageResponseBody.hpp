// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDASPROSERVICEUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDASPROSERVICEUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetDasProServiceUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDasProServiceUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDasProServiceUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDasProServiceUsageResponseBody() = default ;
    GetDasProServiceUsageResponseBody(const GetDasProServiceUsageResponseBody &) = default ;
    GetDasProServiceUsageResponseBody(GetDasProServiceUsageResponseBody &&) = default ;
    GetDasProServiceUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDasProServiceUsageResponseBody() = default ;
    GetDasProServiceUsageResponseBody& operator=(const GetDasProServiceUsageResponseBody &) = default ;
    GetDasProServiceUsageResponseBody& operator=(GetDasProServiceUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(commodityInstanceId, commodityInstanceId_);
        DARABONBA_PTR_TO_JSON(engine, engine_);
        DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(instanceAlias, instanceAlias_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ip, ip_);
        DARABONBA_PTR_TO_JSON(isSpare, isSpare_);
        DARABONBA_PTR_TO_JSON(migrationPredictRemainingTime, migrationPredictRemainingTime_);
        DARABONBA_PTR_TO_JSON(port, port_);
        DARABONBA_PTR_TO_JSON(region, region_);
        DARABONBA_PTR_TO_JSON(serviceUnitId, serviceUnitId_);
        DARABONBA_PTR_TO_JSON(sqlRetention, sqlRetention_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(storageFreeQuotaInMB, storageFreeQuotaInMB_);
        DARABONBA_PTR_TO_JSON(storageUsed, storageUsed_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
        DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(commodityInstanceId, commodityInstanceId_);
        DARABONBA_PTR_FROM_JSON(engine, engine_);
        DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(instanceAlias, instanceAlias_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ip, ip_);
        DARABONBA_PTR_FROM_JSON(isSpare, isSpare_);
        DARABONBA_PTR_FROM_JSON(migrationPredictRemainingTime, migrationPredictRemainingTime_);
        DARABONBA_PTR_FROM_JSON(port, port_);
        DARABONBA_PTR_FROM_JSON(region, region_);
        DARABONBA_PTR_FROM_JSON(serviceUnitId, serviceUnitId_);
        DARABONBA_PTR_FROM_JSON(sqlRetention, sqlRetention_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(storageFreeQuotaInMB, storageFreeQuotaInMB_);
        DARABONBA_PTR_FROM_JSON(storageUsed, storageUsed_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
        DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->commodityInstanceId_ == nullptr
        && this->engine_ == nullptr && this->expireTime_ == nullptr && this->instanceAlias_ == nullptr && this->instanceId_ == nullptr && this->ip_ == nullptr
        && this->isSpare_ == nullptr && this->migrationPredictRemainingTime_ == nullptr && this->port_ == nullptr && this->region_ == nullptr && this->serviceUnitId_ == nullptr
        && this->sqlRetention_ == nullptr && this->startTime_ == nullptr && this->storageFreeQuotaInMB_ == nullptr && this->storageUsed_ == nullptr && this->userId_ == nullptr
        && this->vpcId_ == nullptr; };
      // commodityInstanceId Field Functions 
      bool hasCommodityInstanceId() const { return this->commodityInstanceId_ != nullptr;};
      void deleteCommodityInstanceId() { this->commodityInstanceId_ = nullptr;};
      inline string getCommodityInstanceId() const { DARABONBA_PTR_GET_DEFAULT(commodityInstanceId_, "") };
      inline Data& setCommodityInstanceId(string commodityInstanceId) { DARABONBA_PTR_SET_VALUE(commodityInstanceId_, commodityInstanceId) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline Data& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline Data& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // instanceAlias Field Functions 
      bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
      void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
      inline string getInstanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
      inline Data& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Data& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // isSpare Field Functions 
      bool hasIsSpare() const { return this->isSpare_ != nullptr;};
      void deleteIsSpare() { this->isSpare_ = nullptr;};
      inline bool getIsSpare() const { DARABONBA_PTR_GET_DEFAULT(isSpare_, false) };
      inline Data& setIsSpare(bool isSpare) { DARABONBA_PTR_SET_VALUE(isSpare_, isSpare) };


      // migrationPredictRemainingTime Field Functions 
      bool hasMigrationPredictRemainingTime() const { return this->migrationPredictRemainingTime_ != nullptr;};
      void deleteMigrationPredictRemainingTime() { this->migrationPredictRemainingTime_ = nullptr;};
      inline int64_t getMigrationPredictRemainingTime() const { DARABONBA_PTR_GET_DEFAULT(migrationPredictRemainingTime_, 0L) };
      inline Data& setMigrationPredictRemainingTime(int64_t migrationPredictRemainingTime) { DARABONBA_PTR_SET_VALUE(migrationPredictRemainingTime_, migrationPredictRemainingTime) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Data& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // serviceUnitId Field Functions 
      bool hasServiceUnitId() const { return this->serviceUnitId_ != nullptr;};
      void deleteServiceUnitId() { this->serviceUnitId_ = nullptr;};
      inline string getServiceUnitId() const { DARABONBA_PTR_GET_DEFAULT(serviceUnitId_, "") };
      inline Data& setServiceUnitId(string serviceUnitId) { DARABONBA_PTR_SET_VALUE(serviceUnitId_, serviceUnitId) };


      // sqlRetention Field Functions 
      bool hasSqlRetention() const { return this->sqlRetention_ != nullptr;};
      void deleteSqlRetention() { this->sqlRetention_ = nullptr;};
      inline string getSqlRetention() const { DARABONBA_PTR_GET_DEFAULT(sqlRetention_, "") };
      inline Data& setSqlRetention(string sqlRetention) { DARABONBA_PTR_SET_VALUE(sqlRetention_, sqlRetention) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // storageFreeQuotaInMB Field Functions 
      bool hasStorageFreeQuotaInMB() const { return this->storageFreeQuotaInMB_ != nullptr;};
      void deleteStorageFreeQuotaInMB() { this->storageFreeQuotaInMB_ = nullptr;};
      inline double getStorageFreeQuotaInMB() const { DARABONBA_PTR_GET_DEFAULT(storageFreeQuotaInMB_, 0.0) };
      inline Data& setStorageFreeQuotaInMB(double storageFreeQuotaInMB) { DARABONBA_PTR_SET_VALUE(storageFreeQuotaInMB_, storageFreeQuotaInMB) };


      // storageUsed Field Functions 
      bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
      void deleteStorageUsed() { this->storageUsed_ = nullptr;};
      inline int64_t getStorageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, 0L) };
      inline Data& setStorageUsed(int64_t storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The ID of the DAS Enterprise Edition instance.
      shared_ptr<string> commodityInstanceId_ {};
      // The type of the database engine.
      shared_ptr<string> engine_ {};
      // The point of time when DAS Enterprise Edition for the database instance expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> expireTime_ {};
      // The name of the database instance.
      shared_ptr<string> instanceAlias_ {};
      // The database instance ID.
      shared_ptr<string> instanceId_ {};
      // The endpoint of the database instance.
      shared_ptr<string> ip_ {};
      // Indicates whether DAS Enterprise Edition for the database instance has expired. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isSpare_ {};
      // The estimated remaining time for migrating the data generated by the SQL Explorer and Audit feature from the previous version to the new version. Unit: milliseconds.
      // 
      // >  This parameter is returned only when the SQL Explorer and Audit feature is migrated from the previous version to the new version.
      shared_ptr<int64_t> migrationPredictRemainingTime_ {};
      // The port number that is used to connect to the database instance.
      shared_ptr<int32_t> port_ {};
      // The region in which the database instance resides.
      shared_ptr<string> region_ {};
      // The service unit ID.
      shared_ptr<string> serviceUnitId_ {};
      // The storage duration of SQL Explorer data. Unit: days.
      shared_ptr<string> sqlRetention_ {};
      // The time when DAS Enterprise Edition was enabled for the database instance. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> startTime_ {};
      // The SQL Explorer storage space that is offered free-of-charge. Unit: MB.
      shared_ptr<double> storageFreeQuotaInMB_ {};
      // The storage usage of SQL Explorer of the database instance. Unit: bytes.
      shared_ptr<int64_t> storageUsed_ {};
      // The ID of the Alibaba Cloud account that is used to create the database instance.
      shared_ptr<string> userId_ {};
      // The virtual private cloud (VPC) ID.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetDasProServiceUsageResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDasProServiceUsageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDasProServiceUsageResponseBody::Data) };
    inline GetDasProServiceUsageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDasProServiceUsageResponseBody::Data) };
    inline GetDasProServiceUsageResponseBody& setData(const GetDasProServiceUsageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDasProServiceUsageResponseBody& setData(GetDasProServiceUsageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDasProServiceUsageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDasProServiceUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDasProServiceUsageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<int64_t> code_ {};
    // The data returned.
    shared_ptr<GetDasProServiceUsageResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
