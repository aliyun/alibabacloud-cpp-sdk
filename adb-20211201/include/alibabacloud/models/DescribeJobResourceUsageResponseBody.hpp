// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBRESOURCEUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBRESOURCEUSAGERESPONSEBODY_HPP_
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
  class DescribeJobResourceUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeJobResourceUsageResponseBody() = default ;
    DescribeJobResourceUsageResponseBody(const DescribeJobResourceUsageResponseBody &) = default ;
    DescribeJobResourceUsageResponseBody(DescribeJobResourceUsageResponseBody &&) = default ;
    DescribeJobResourceUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobResourceUsageResponseBody() = default ;
    DescribeJobResourceUsageResponseBody& operator=(const DescribeJobResourceUsageResponseBody &) = default ;
    DescribeJobResourceUsageResponseBody& operator=(DescribeJobResourceUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(JobAcuUsage, jobAcuUsage_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(JobAcuUsage, jobAcuUsage_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class JobAcuUsage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobAcuUsage& obj) { 
          DARABONBA_PTR_TO_JSON(AcuUsageDetail, acuUsageDetail_);
          DARABONBA_PTR_TO_JSON(JobEndTime, jobEndTime_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(JobStartTime, jobStartTime_);
          DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
          DARABONBA_PTR_TO_JSON(UseCachePool, useCachePool_);
        };
        friend void from_json(const Darabonba::Json& j, JobAcuUsage& obj) { 
          DARABONBA_PTR_FROM_JSON(AcuUsageDetail, acuUsageDetail_);
          DARABONBA_PTR_FROM_JSON(JobEndTime, jobEndTime_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(JobStartTime, jobStartTime_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
          DARABONBA_PTR_FROM_JSON(UseCachePool, useCachePool_);
        };
        JobAcuUsage() = default ;
        JobAcuUsage(const JobAcuUsage &) = default ;
        JobAcuUsage(JobAcuUsage &&) = default ;
        JobAcuUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobAcuUsage() = default ;
        JobAcuUsage& operator=(const JobAcuUsage &) = default ;
        JobAcuUsage& operator=(JobAcuUsage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AcuUsageDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AcuUsageDetail& obj) { 
            DARABONBA_PTR_TO_JSON(ElasticAcuNumber, elasticAcuNumber_);
            DARABONBA_PTR_TO_JSON(ReservedAcuNumber, reservedAcuNumber_);
            DARABONBA_PTR_TO_JSON(SpotAcuNumber, spotAcuNumber_);
            DARABONBA_PTR_TO_JSON(SpotAcuPercentage, spotAcuPercentage_);
            DARABONBA_PTR_TO_JSON(TotalAcuNumber, totalAcuNumber_);
          };
          friend void from_json(const Darabonba::Json& j, AcuUsageDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(ElasticAcuNumber, elasticAcuNumber_);
            DARABONBA_PTR_FROM_JSON(ReservedAcuNumber, reservedAcuNumber_);
            DARABONBA_PTR_FROM_JSON(SpotAcuNumber, spotAcuNumber_);
            DARABONBA_PTR_FROM_JSON(SpotAcuPercentage, spotAcuPercentage_);
            DARABONBA_PTR_FROM_JSON(TotalAcuNumber, totalAcuNumber_);
          };
          AcuUsageDetail() = default ;
          AcuUsageDetail(const AcuUsageDetail &) = default ;
          AcuUsageDetail(AcuUsageDetail &&) = default ;
          AcuUsageDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AcuUsageDetail() = default ;
          AcuUsageDetail& operator=(const AcuUsageDetail &) = default ;
          AcuUsageDetail& operator=(AcuUsageDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->elasticAcuNumber_ == nullptr
        && this->reservedAcuNumber_ == nullptr && this->spotAcuNumber_ == nullptr && this->spotAcuPercentage_ == nullptr && this->totalAcuNumber_ == nullptr; };
          // elasticAcuNumber Field Functions 
          bool hasElasticAcuNumber() const { return this->elasticAcuNumber_ != nullptr;};
          void deleteElasticAcuNumber() { this->elasticAcuNumber_ = nullptr;};
          inline float getElasticAcuNumber() const { DARABONBA_PTR_GET_DEFAULT(elasticAcuNumber_, 0.0) };
          inline AcuUsageDetail& setElasticAcuNumber(float elasticAcuNumber) { DARABONBA_PTR_SET_VALUE(elasticAcuNumber_, elasticAcuNumber) };


          // reservedAcuNumber Field Functions 
          bool hasReservedAcuNumber() const { return this->reservedAcuNumber_ != nullptr;};
          void deleteReservedAcuNumber() { this->reservedAcuNumber_ = nullptr;};
          inline float getReservedAcuNumber() const { DARABONBA_PTR_GET_DEFAULT(reservedAcuNumber_, 0.0) };
          inline AcuUsageDetail& setReservedAcuNumber(float reservedAcuNumber) { DARABONBA_PTR_SET_VALUE(reservedAcuNumber_, reservedAcuNumber) };


          // spotAcuNumber Field Functions 
          bool hasSpotAcuNumber() const { return this->spotAcuNumber_ != nullptr;};
          void deleteSpotAcuNumber() { this->spotAcuNumber_ = nullptr;};
          inline float getSpotAcuNumber() const { DARABONBA_PTR_GET_DEFAULT(spotAcuNumber_, 0.0) };
          inline AcuUsageDetail& setSpotAcuNumber(float spotAcuNumber) { DARABONBA_PTR_SET_VALUE(spotAcuNumber_, spotAcuNumber) };


          // spotAcuPercentage Field Functions 
          bool hasSpotAcuPercentage() const { return this->spotAcuPercentage_ != nullptr;};
          void deleteSpotAcuPercentage() { this->spotAcuPercentage_ = nullptr;};
          inline float getSpotAcuPercentage() const { DARABONBA_PTR_GET_DEFAULT(spotAcuPercentage_, 0.0) };
          inline AcuUsageDetail& setSpotAcuPercentage(float spotAcuPercentage) { DARABONBA_PTR_SET_VALUE(spotAcuPercentage_, spotAcuPercentage) };


          // totalAcuNumber Field Functions 
          bool hasTotalAcuNumber() const { return this->totalAcuNumber_ != nullptr;};
          void deleteTotalAcuNumber() { this->totalAcuNumber_ = nullptr;};
          inline float getTotalAcuNumber() const { DARABONBA_PTR_GET_DEFAULT(totalAcuNumber_, 0.0) };
          inline AcuUsageDetail& setTotalAcuNumber(float totalAcuNumber) { DARABONBA_PTR_SET_VALUE(totalAcuNumber_, totalAcuNumber) };


        protected:
          // The number of ACUs for the elastic resources.
          shared_ptr<float> elasticAcuNumber_ {};
          // The number of ACUs for the reserved resources.
          shared_ptr<float> reservedAcuNumber_ {};
          // The number of spot ACUs.
          shared_ptr<float> spotAcuNumber_ {};
          // The percent of spot ACUs.
          shared_ptr<float> spotAcuPercentage_ {};
          // The total number of ACUs.
          shared_ptr<float> totalAcuNumber_ {};
        };

        virtual bool empty() const override { return this->acuUsageDetail_ == nullptr
        && this->jobEndTime_ == nullptr && this->jobId_ == nullptr && this->jobStartTime_ == nullptr && this->resourceGroupName_ == nullptr && this->useCachePool_ == nullptr; };
        // acuUsageDetail Field Functions 
        bool hasAcuUsageDetail() const { return this->acuUsageDetail_ != nullptr;};
        void deleteAcuUsageDetail() { this->acuUsageDetail_ = nullptr;};
        inline const JobAcuUsage::AcuUsageDetail & getAcuUsageDetail() const { DARABONBA_PTR_GET_CONST(acuUsageDetail_, JobAcuUsage::AcuUsageDetail) };
        inline JobAcuUsage::AcuUsageDetail getAcuUsageDetail() { DARABONBA_PTR_GET(acuUsageDetail_, JobAcuUsage::AcuUsageDetail) };
        inline JobAcuUsage& setAcuUsageDetail(const JobAcuUsage::AcuUsageDetail & acuUsageDetail) { DARABONBA_PTR_SET_VALUE(acuUsageDetail_, acuUsageDetail) };
        inline JobAcuUsage& setAcuUsageDetail(JobAcuUsage::AcuUsageDetail && acuUsageDetail) { DARABONBA_PTR_SET_RVALUE(acuUsageDetail_, acuUsageDetail) };


        // jobEndTime Field Functions 
        bool hasJobEndTime() const { return this->jobEndTime_ != nullptr;};
        void deleteJobEndTime() { this->jobEndTime_ = nullptr;};
        inline string getJobEndTime() const { DARABONBA_PTR_GET_DEFAULT(jobEndTime_, "") };
        inline JobAcuUsage& setJobEndTime(string jobEndTime) { DARABONBA_PTR_SET_VALUE(jobEndTime_, jobEndTime) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline JobAcuUsage& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // jobStartTime Field Functions 
        bool hasJobStartTime() const { return this->jobStartTime_ != nullptr;};
        void deleteJobStartTime() { this->jobStartTime_ = nullptr;};
        inline string getJobStartTime() const { DARABONBA_PTR_GET_DEFAULT(jobStartTime_, "") };
        inline JobAcuUsage& setJobStartTime(string jobStartTime) { DARABONBA_PTR_SET_VALUE(jobStartTime_, jobStartTime) };


        // resourceGroupName Field Functions 
        bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
        void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
        inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
        inline JobAcuUsage& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


        // useCachePool Field Functions 
        bool hasUseCachePool() const { return this->useCachePool_ != nullptr;};
        void deleteUseCachePool() { this->useCachePool_ = nullptr;};
        inline bool getUseCachePool() const { DARABONBA_PTR_GET_DEFAULT(useCachePool_, false) };
        inline JobAcuUsage& setUseCachePool(bool useCachePool) { DARABONBA_PTR_SET_VALUE(useCachePool_, useCachePool) };


      protected:
        // The ACU usage.
        shared_ptr<JobAcuUsage::AcuUsageDetail> acuUsageDetail_ {};
        // The end time of the job. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> jobEndTime_ {};
        // The job ID.
        shared_ptr<string> jobId_ {};
        // The start time of the job. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> jobStartTime_ {};
        // The name of the job resource group.
        shared_ptr<string> resourceGroupName_ {};
        shared_ptr<bool> useCachePool_ {};
      };

      virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->endTime_ == nullptr && this->jobAcuUsage_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->startTime_ == nullptr
        && this->totalCount_ == nullptr; };
      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline Data& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // jobAcuUsage Field Functions 
      bool hasJobAcuUsage() const { return this->jobAcuUsage_ != nullptr;};
      void deleteJobAcuUsage() { this->jobAcuUsage_ = nullptr;};
      inline const vector<Data::JobAcuUsage> & getJobAcuUsage() const { DARABONBA_PTR_GET_CONST(jobAcuUsage_, vector<Data::JobAcuUsage>) };
      inline vector<Data::JobAcuUsage> getJobAcuUsage() { DARABONBA_PTR_GET(jobAcuUsage_, vector<Data::JobAcuUsage>) };
      inline Data& setJobAcuUsage(const vector<Data::JobAcuUsage> & jobAcuUsage) { DARABONBA_PTR_SET_VALUE(jobAcuUsage_, jobAcuUsage) };
      inline Data& setJobAcuUsage(vector<Data::JobAcuUsage> && jobAcuUsage) { DARABONBA_PTR_SET_RVALUE(jobAcuUsage_, jobAcuUsage) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
      shared_ptr<string> DBClusterId_ {};
      // The end time of the query. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> endTime_ {};
      // The AnalyticDB compute unit (ACU) usage of the job resource group.
      shared_ptr<vector<Data::JobAcuUsage>> jobAcuUsage_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      // The start time of the query. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> startTime_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeJobResourceUsageResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeJobResourceUsageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeJobResourceUsageResponseBody::Data) };
    inline DescribeJobResourceUsageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeJobResourceUsageResponseBody::Data) };
    inline DescribeJobResourceUsageResponseBody& setData(const DescribeJobResourceUsageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeJobResourceUsageResponseBody& setData(DescribeJobResourceUsageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeJobResourceUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The queried resource usage.
    shared_ptr<DescribeJobResourceUsageResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
