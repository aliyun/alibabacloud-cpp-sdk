// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETADATACOMPONENTPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMETADATACOMPONENTPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListMetaDataComponentPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaDataComponentPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaDataComponentPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListMetaDataComponentPageResponseBody() = default ;
    ListMetaDataComponentPageResponseBody(const ListMetaDataComponentPageResponseBody &) = default ;
    ListMetaDataComponentPageResponseBody(ListMetaDataComponentPageResponseBody &&) = default ;
    ListMetaDataComponentPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaDataComponentPageResponseBody() = default ;
    ListMetaDataComponentPageResponseBody& operator=(const ListMetaDataComponentPageResponseBody &) = default ;
    ListMetaDataComponentPageResponseBody& operator=(ListMetaDataComponentPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(componentType, componentType_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(dsConfig, dsConfig_);
        DARABONBA_PTR_TO_JSON(dsDesc, dsDesc_);
        DARABONBA_PTR_TO_JSON(dsId, dsId_);
        DARABONBA_PTR_TO_JSON(dsName, dsName_);
        DARABONBA_PTR_TO_JSON(dsStatus, dsStatus_);
        DARABONBA_PTR_TO_JSON(dsType, dsType_);
        DARABONBA_PTR_TO_JSON(dsVersion, dsVersion_);
        DARABONBA_PTR_TO_JSON(expired, expired_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(profilingJob, profilingJob_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(componentType, componentType_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(dsConfig, dsConfig_);
        DARABONBA_PTR_FROM_JSON(dsDesc, dsDesc_);
        DARABONBA_PTR_FROM_JSON(dsId, dsId_);
        DARABONBA_PTR_FROM_JSON(dsName, dsName_);
        DARABONBA_PTR_FROM_JSON(dsStatus, dsStatus_);
        DARABONBA_PTR_FROM_JSON(dsType, dsType_);
        DARABONBA_PTR_FROM_JSON(dsVersion, dsVersion_);
        DARABONBA_PTR_FROM_JSON(expired, expired_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(profilingJob, profilingJob_);
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
      class ProfilingJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProfilingJob& obj) { 
          DARABONBA_PTR_TO_JSON(componentId, componentId_);
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(jobDesc, jobDesc_);
          DARABONBA_PTR_TO_JSON(jobName, jobName_);
          DARABONBA_PTR_TO_JSON(lastBatchId, lastBatchId_);
          DARABONBA_PTR_TO_JSON(profilingEnable, profilingEnable_);
          DARABONBA_PTR_TO_JSON(profilingPermission, profilingPermission_);
          DARABONBA_PTR_TO_JSON(profilingRule, profilingRule_);
          DARABONBA_PTR_TO_JSON(profilingType, profilingType_);
          DARABONBA_PTR_TO_JSON(schedulerToken, schedulerToken_);
        };
        friend void from_json(const Darabonba::Json& j, ProfilingJob& obj) { 
          DARABONBA_PTR_FROM_JSON(componentId, componentId_);
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(jobDesc, jobDesc_);
          DARABONBA_PTR_FROM_JSON(jobName, jobName_);
          DARABONBA_PTR_FROM_JSON(lastBatchId, lastBatchId_);
          DARABONBA_PTR_FROM_JSON(profilingEnable, profilingEnable_);
          DARABONBA_PTR_FROM_JSON(profilingPermission, profilingPermission_);
          DARABONBA_PTR_FROM_JSON(profilingRule, profilingRule_);
          DARABONBA_PTR_FROM_JSON(profilingType, profilingType_);
          DARABONBA_PTR_FROM_JSON(schedulerToken, schedulerToken_);
        };
        ProfilingJob() = default ;
        ProfilingJob(const ProfilingJob &) = default ;
        ProfilingJob(ProfilingJob &&) = default ;
        ProfilingJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProfilingJob() = default ;
        ProfilingJob& operator=(const ProfilingJob &) = default ;
        ProfilingJob& operator=(ProfilingJob &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->componentId_ == nullptr
        && this->createTime_ == nullptr && this->id_ == nullptr && this->jobDesc_ == nullptr && this->jobName_ == nullptr && this->lastBatchId_ == nullptr
        && this->profilingEnable_ == nullptr && this->profilingPermission_ == nullptr && this->profilingRule_ == nullptr && this->profilingType_ == nullptr && this->schedulerToken_ == nullptr; };
        // componentId Field Functions 
        bool hasComponentId() const { return this->componentId_ != nullptr;};
        void deleteComponentId() { this->componentId_ = nullptr;};
        inline int64_t getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, 0L) };
        inline ProfilingJob& setComponentId(int64_t componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ProfilingJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ProfilingJob& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // jobDesc Field Functions 
        bool hasJobDesc() const { return this->jobDesc_ != nullptr;};
        void deleteJobDesc() { this->jobDesc_ = nullptr;};
        inline string getJobDesc() const { DARABONBA_PTR_GET_DEFAULT(jobDesc_, "") };
        inline ProfilingJob& setJobDesc(string jobDesc) { DARABONBA_PTR_SET_VALUE(jobDesc_, jobDesc) };


        // jobName Field Functions 
        bool hasJobName() const { return this->jobName_ != nullptr;};
        void deleteJobName() { this->jobName_ = nullptr;};
        inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
        inline ProfilingJob& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


        // lastBatchId Field Functions 
        bool hasLastBatchId() const { return this->lastBatchId_ != nullptr;};
        void deleteLastBatchId() { this->lastBatchId_ = nullptr;};
        inline string getLastBatchId() const { DARABONBA_PTR_GET_DEFAULT(lastBatchId_, "") };
        inline ProfilingJob& setLastBatchId(string lastBatchId) { DARABONBA_PTR_SET_VALUE(lastBatchId_, lastBatchId) };


        // profilingEnable Field Functions 
        bool hasProfilingEnable() const { return this->profilingEnable_ != nullptr;};
        void deleteProfilingEnable() { this->profilingEnable_ = nullptr;};
        inline int32_t getProfilingEnable() const { DARABONBA_PTR_GET_DEFAULT(profilingEnable_, 0) };
        inline ProfilingJob& setProfilingEnable(int32_t profilingEnable) { DARABONBA_PTR_SET_VALUE(profilingEnable_, profilingEnable) };


        // profilingPermission Field Functions 
        bool hasProfilingPermission() const { return this->profilingPermission_ != nullptr;};
        void deleteProfilingPermission() { this->profilingPermission_ = nullptr;};
        inline int32_t getProfilingPermission() const { DARABONBA_PTR_GET_DEFAULT(profilingPermission_, 0) };
        inline ProfilingJob& setProfilingPermission(int32_t profilingPermission) { DARABONBA_PTR_SET_VALUE(profilingPermission_, profilingPermission) };


        // profilingRule Field Functions 
        bool hasProfilingRule() const { return this->profilingRule_ != nullptr;};
        void deleteProfilingRule() { this->profilingRule_ = nullptr;};
        inline string getProfilingRule() const { DARABONBA_PTR_GET_DEFAULT(profilingRule_, "") };
        inline ProfilingJob& setProfilingRule(string profilingRule) { DARABONBA_PTR_SET_VALUE(profilingRule_, profilingRule) };


        // profilingType Field Functions 
        bool hasProfilingType() const { return this->profilingType_ != nullptr;};
        void deleteProfilingType() { this->profilingType_ = nullptr;};
        inline int32_t getProfilingType() const { DARABONBA_PTR_GET_DEFAULT(profilingType_, 0) };
        inline ProfilingJob& setProfilingType(int32_t profilingType) { DARABONBA_PTR_SET_VALUE(profilingType_, profilingType) };


        // schedulerToken Field Functions 
        bool hasSchedulerToken() const { return this->schedulerToken_ != nullptr;};
        void deleteSchedulerToken() { this->schedulerToken_ = nullptr;};
        inline string getSchedulerToken() const { DARABONBA_PTR_GET_DEFAULT(schedulerToken_, "") };
        inline ProfilingJob& setSchedulerToken(string schedulerToken) { DARABONBA_PTR_SET_VALUE(schedulerToken_, schedulerToken) };


      protected:
        // The component ID, which is the primary key of the data source component.
        shared_ptr<int64_t> componentId_ {};
        // The creation time of the table or partition.
        shared_ptr<string> createTime_ {};
        // The primary key ID that uniquely identifies a record.
        shared_ptr<int64_t> id_ {};
        // The description of the profiling task.
        shared_ptr<string> jobDesc_ {};
        // The name of the profiling task.
        shared_ptr<string> jobName_ {};
        // The ID of the most recent profiling task batch.
        shared_ptr<string> lastBatchId_ {};
        // The profiling task status. Valid values:
        // - 0: Not started.
        // - 1: Running.
        // - 2: Stopped.
        shared_ptr<int32_t> profilingEnable_ {};
        // The profiling permission. Valid values:
        // - 0: read-only link
        // - 1: client
        shared_ptr<int32_t> profilingPermission_ {};
        // The cron expression for scheduled profiling. This parameter takes effect only when profilingType is set to CRON.
        shared_ptr<string> profilingRule_ {};
        // The profiling policy (scheduling type). Valid values:
        // - 0: daily
        // - 1: CRON
        shared_ptr<int32_t> profilingType_ {};
        // The scheduling ID, which uniquely identifies the profiling task on the scheduling side.
        shared_ptr<string> schedulerToken_ {};
      };

      virtual bool empty() const override { return this->componentType_ == nullptr
        && this->createTime_ == nullptr && this->dsConfig_ == nullptr && this->dsDesc_ == nullptr && this->dsId_ == nullptr && this->dsName_ == nullptr
        && this->dsStatus_ == nullptr && this->dsType_ == nullptr && this->dsVersion_ == nullptr && this->expired_ == nullptr && this->id_ == nullptr
        && this->profilingJob_ == nullptr; };
      // componentType Field Functions 
      bool hasComponentType() const { return this->componentType_ != nullptr;};
      void deleteComponentType() { this->componentType_ = nullptr;};
      inline int64_t getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, 0L) };
      inline Data& setComponentType(int64_t componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dsConfig Field Functions 
      bool hasDsConfig() const { return this->dsConfig_ != nullptr;};
      void deleteDsConfig() { this->dsConfig_ = nullptr;};
      inline string getDsConfig() const { DARABONBA_PTR_GET_DEFAULT(dsConfig_, "") };
      inline Data& setDsConfig(string dsConfig) { DARABONBA_PTR_SET_VALUE(dsConfig_, dsConfig) };


      // dsDesc Field Functions 
      bool hasDsDesc() const { return this->dsDesc_ != nullptr;};
      void deleteDsDesc() { this->dsDesc_ = nullptr;};
      inline string getDsDesc() const { DARABONBA_PTR_GET_DEFAULT(dsDesc_, "") };
      inline Data& setDsDesc(string dsDesc) { DARABONBA_PTR_SET_VALUE(dsDesc_, dsDesc) };


      // dsId Field Functions 
      bool hasDsId() const { return this->dsId_ != nullptr;};
      void deleteDsId() { this->dsId_ = nullptr;};
      inline string getDsId() const { DARABONBA_PTR_GET_DEFAULT(dsId_, "") };
      inline Data& setDsId(string dsId) { DARABONBA_PTR_SET_VALUE(dsId_, dsId) };


      // dsName Field Functions 
      bool hasDsName() const { return this->dsName_ != nullptr;};
      void deleteDsName() { this->dsName_ = nullptr;};
      inline string getDsName() const { DARABONBA_PTR_GET_DEFAULT(dsName_, "") };
      inline Data& setDsName(string dsName) { DARABONBA_PTR_SET_VALUE(dsName_, dsName) };


      // dsStatus Field Functions 
      bool hasDsStatus() const { return this->dsStatus_ != nullptr;};
      void deleteDsStatus() { this->dsStatus_ = nullptr;};
      inline int32_t getDsStatus() const { DARABONBA_PTR_GET_DEFAULT(dsStatus_, 0) };
      inline Data& setDsStatus(int32_t dsStatus) { DARABONBA_PTR_SET_VALUE(dsStatus_, dsStatus) };


      // dsType Field Functions 
      bool hasDsType() const { return this->dsType_ != nullptr;};
      void deleteDsType() { this->dsType_ = nullptr;};
      inline string getDsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
      inline Data& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


      // dsVersion Field Functions 
      bool hasDsVersion() const { return this->dsVersion_ != nullptr;};
      void deleteDsVersion() { this->dsVersion_ = nullptr;};
      inline string getDsVersion() const { DARABONBA_PTR_GET_DEFAULT(dsVersion_, "") };
      inline Data& setDsVersion(string dsVersion) { DARABONBA_PTR_SET_VALUE(dsVersion_, dsVersion) };


      // expired Field Functions 
      bool hasExpired() const { return this->expired_ != nullptr;};
      void deleteExpired() { this->expired_ = nullptr;};
      inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
      inline Data& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // profilingJob Field Functions 
      bool hasProfilingJob() const { return this->profilingJob_ != nullptr;};
      void deleteProfilingJob() { this->profilingJob_ = nullptr;};
      inline const Data::ProfilingJob & getProfilingJob() const { DARABONBA_PTR_GET_CONST(profilingJob_, Data::ProfilingJob) };
      inline Data::ProfilingJob getProfilingJob() { DARABONBA_PTR_GET(profilingJob_, Data::ProfilingJob) };
      inline Data& setProfilingJob(const Data::ProfilingJob & profilingJob) { DARABONBA_PTR_SET_VALUE(profilingJob_, profilingJob) };
      inline Data& setProfilingJob(Data::ProfilingJob && profilingJob) { DARABONBA_PTR_SET_RVALUE(profilingJob_, profilingJob) };


    protected:
      // The entry component type. In some operations, this parameter is used as a backward compatible field for version 1.1.0. Valid values:
      // - 0: source
      // - 1: destination
      shared_ptr<int64_t> componentType_ {};
      // The creation time of the table or partition.
      shared_ptr<string> createTime_ {};
      // The datasource config in JSON string format. The structure is defined by each dsType. Parse the JSON string before use. Sensitive fields such as tokens are masked in the response.
      shared_ptr<string> dsConfig_ {};
      // The description of the data source.
      shared_ptr<string> dsDesc_ {};
      // The business ID of the data source (external ID, which may be the same as the primary key ID).
      shared_ptr<string> dsId_ {};
      // The data source name. Exact match and fuzzy match are supported.
      shared_ptr<string> dsName_ {};
      // The connectivity status of the data source. Valid values:
      // - 0: Not tested.
      // - 1: Connected.
      // - 2: Connection failed.
      // - -1: Connectivity test not supported.
      shared_ptr<int32_t> dsStatus_ {};
      // The data source type, such as Hive or MaxCompute.
      shared_ptr<string> dsType_ {};
      // The version number of the data source.
      shared_ptr<string> dsVersion_ {};
      // Indicates whether the data source has expired. Valid values:
      // - true: Expired.
      // - false: Not expired.
      shared_ptr<bool> expired_ {};
      // The primary key ID that uniquely identifies a record.
      shared_ptr<int64_t> id_ {};
      // The profiling task information, including the task status, scheduling ID, profiling rule, and profiling type. This field is empty if the data source is not associated with a profiling task.
      shared_ptr<Data::ProfilingJob> profilingJob_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListMetaDataComponentPageResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListMetaDataComponentPageResponseBody::Data>) };
    inline vector<ListMetaDataComponentPageResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListMetaDataComponentPageResponseBody::Data>) };
    inline ListMetaDataComponentPageResponseBody& setData(const vector<ListMetaDataComponentPageResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMetaDataComponentPageResponseBody& setData(vector<ListMetaDataComponentPageResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListMetaDataComponentPageResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListMetaDataComponentPageResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListMetaDataComponentPageResponseBody& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMetaDataComponentPageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMetaDataComponentPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMetaDataComponentPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMetaDataComponentPageResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The data list returned by the operation. For the structure of each element, see the child parameters.
    shared_ptr<vector<ListMetaDataComponentPageResponseBody::Data>> data_ {};
    // The error code. An empty string is returned if the call is successful.
    shared_ptr<string> errCode_ {};
    // The error message. An empty string is returned if the call is successful.
    shared_ptr<string> errMessage_ {};
    // The page number, starting from 1.
    shared_ptr<int32_t> pageIndex_ {};
    // The page size, which is the number of records returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // - true: Successful.
    // - false: Failed. Check errCode and errMessage for details.
    shared_ptr<bool> success_ {};
    // The total number of records that meet the query conditions. This parameter is used for pagination.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
