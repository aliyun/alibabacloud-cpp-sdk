// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPUTEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPUTEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaStreaming20260202
{
namespace Models
{
  class GetComputeJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComputeJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetComputeJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetComputeJobResponseBody() = default ;
    GetComputeJobResponseBody(const GetComputeJobResponseBody &) = default ;
    GetComputeJobResponseBody(GetComputeJobResponseBody &&) = default ;
    GetComputeJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComputeJobResponseBody() = default ;
    GetComputeJobResponseBody& operator=(const GetComputeJobResponseBody &) = default ;
    GetComputeJobResponseBody& operator=(GetComputeJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CuLimit, cuLimit_);
        DARABONBA_PTR_TO_JSON(CuReserved, cuReserved_);
        DARABONBA_PTR_TO_JSON(CuUsed, cuUsed_);
        DARABONBA_PTR_TO_JSON(DebugMode, debugMode_);
        DARABONBA_PTR_TO_JSON(DeployedSql, deployedSql_);
        DARABONBA_PTR_TO_JSON(DraftSql, draftSql_);
        DARABONBA_PTR_TO_JSON(HistoryInfos, historyInfos_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(JobConfig, jobConfig_);
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpgradeMode, upgradeMode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CuLimit, cuLimit_);
        DARABONBA_PTR_FROM_JSON(CuReserved, cuReserved_);
        DARABONBA_PTR_FROM_JSON(CuUsed, cuUsed_);
        DARABONBA_PTR_FROM_JSON(DebugMode, debugMode_);
        DARABONBA_PTR_FROM_JSON(DeployedSql, deployedSql_);
        DARABONBA_PTR_FROM_JSON(DraftSql, draftSql_);
        DARABONBA_PTR_FROM_JSON(HistoryInfos, historyInfos_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(JobConfig, jobConfig_);
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpgradeMode, upgradeMode_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->cuLimit_ == nullptr && this->cuReserved_ == nullptr && this->cuUsed_ == nullptr && this->debugMode_ == nullptr && this->deployedSql_ == nullptr
        && this->draftSql_ == nullptr && this->historyInfos_ == nullptr && this->instanceId_ == nullptr && this->jobConfig_ == nullptr && this->jobName_ == nullptr
        && this->owner_ == nullptr && this->regionId_ == nullptr && this->remark_ == nullptr && this->status_ == nullptr && this->upgradeMode_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // cuLimit Field Functions 
      bool hasCuLimit() const { return this->cuLimit_ != nullptr;};
      void deleteCuLimit() { this->cuLimit_ = nullptr;};
      inline double getCuLimit() const { DARABONBA_PTR_GET_DEFAULT(cuLimit_, 0.0) };
      inline Data& setCuLimit(double cuLimit) { DARABONBA_PTR_SET_VALUE(cuLimit_, cuLimit) };


      // cuReserved Field Functions 
      bool hasCuReserved() const { return this->cuReserved_ != nullptr;};
      void deleteCuReserved() { this->cuReserved_ = nullptr;};
      inline double getCuReserved() const { DARABONBA_PTR_GET_DEFAULT(cuReserved_, 0.0) };
      inline Data& setCuReserved(double cuReserved) { DARABONBA_PTR_SET_VALUE(cuReserved_, cuReserved) };


      // cuUsed Field Functions 
      bool hasCuUsed() const { return this->cuUsed_ != nullptr;};
      void deleteCuUsed() { this->cuUsed_ = nullptr;};
      inline double getCuUsed() const { DARABONBA_PTR_GET_DEFAULT(cuUsed_, 0.0) };
      inline Data& setCuUsed(double cuUsed) { DARABONBA_PTR_SET_VALUE(cuUsed_, cuUsed) };


      // debugMode Field Functions 
      bool hasDebugMode() const { return this->debugMode_ != nullptr;};
      void deleteDebugMode() { this->debugMode_ = nullptr;};
      inline int32_t getDebugMode() const { DARABONBA_PTR_GET_DEFAULT(debugMode_, 0) };
      inline Data& setDebugMode(int32_t debugMode) { DARABONBA_PTR_SET_VALUE(debugMode_, debugMode) };


      // deployedSql Field Functions 
      bool hasDeployedSql() const { return this->deployedSql_ != nullptr;};
      void deleteDeployedSql() { this->deployedSql_ = nullptr;};
      inline string getDeployedSql() const { DARABONBA_PTR_GET_DEFAULT(deployedSql_, "") };
      inline Data& setDeployedSql(string deployedSql) { DARABONBA_PTR_SET_VALUE(deployedSql_, deployedSql) };


      // draftSql Field Functions 
      bool hasDraftSql() const { return this->draftSql_ != nullptr;};
      void deleteDraftSql() { this->draftSql_ = nullptr;};
      inline string getDraftSql() const { DARABONBA_PTR_GET_DEFAULT(draftSql_, "") };
      inline Data& setDraftSql(string draftSql) { DARABONBA_PTR_SET_VALUE(draftSql_, draftSql) };


      // historyInfos Field Functions 
      bool hasHistoryInfos() const { return this->historyInfos_ != nullptr;};
      void deleteHistoryInfos() { this->historyInfos_ = nullptr;};
      inline string getHistoryInfos() const { DARABONBA_PTR_GET_DEFAULT(historyInfos_, "") };
      inline Data& setHistoryInfos(string historyInfos) { DARABONBA_PTR_SET_VALUE(historyInfos_, historyInfos) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // jobConfig Field Functions 
      bool hasJobConfig() const { return this->jobConfig_ != nullptr;};
      void deleteJobConfig() { this->jobConfig_ = nullptr;};
      inline string getJobConfig() const { DARABONBA_PTR_GET_DEFAULT(jobConfig_, "") };
      inline Data& setJobConfig(string jobConfig) { DARABONBA_PTR_SET_VALUE(jobConfig_, jobConfig) };


      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline Data& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Data& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Data& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // upgradeMode Field Functions 
      bool hasUpgradeMode() const { return this->upgradeMode_ != nullptr;};
      void deleteUpgradeMode() { this->upgradeMode_ = nullptr;};
      inline string getUpgradeMode() const { DARABONBA_PTR_GET_DEFAULT(upgradeMode_, "") };
      inline Data& setUpgradeMode(string upgradeMode) { DARABONBA_PTR_SET_VALUE(upgradeMode_, upgradeMode) };


    protected:
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> createTime_ {};
      shared_ptr<double> cuLimit_ {};
      shared_ptr<double> cuReserved_ {};
      shared_ptr<double> cuUsed_ {};
      shared_ptr<int32_t> debugMode_ {};
      shared_ptr<string> deployedSql_ {};
      shared_ptr<string> draftSql_ {};
      shared_ptr<string> historyInfos_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> jobConfig_ {};
      shared_ptr<string> jobName_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> remark_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> upgradeMode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetComputeJobResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetComputeJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetComputeJobResponseBody::Data) };
    inline GetComputeJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetComputeJobResponseBody::Data) };
    inline GetComputeJobResponseBody& setData(const GetComputeJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetComputeJobResponseBody& setData(GetComputeJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetComputeJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetComputeJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<GetComputeJobResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaStreaming20260202
#endif
