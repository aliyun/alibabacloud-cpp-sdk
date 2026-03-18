// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNNINGJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRUNNINGJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetRunningJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRunningJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRunningJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetRunningJobsResponseBody() = default ;
    GetRunningJobsResponseBody(const GetRunningJobsResponseBody &) = default ;
    GetRunningJobsResponseBody(GetRunningJobsResponseBody &&) = default ;
    GetRunningJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRunningJobsResponseBody() = default ;
    GetRunningJobsResponseBody& operator=(const GetRunningJobsResponseBody &) = default ;
    GetRunningJobsResponseBody& operator=(GetRunningJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(runningJobInfoList, runningJobInfoList_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(runningJobInfoList, runningJobInfoList_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
      class RunningJobInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RunningJobInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(cuSnapshot, cuSnapshot_);
          DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(jobOwner, jobOwner_);
          DARABONBA_PTR_TO_JSON(memorySnapshot, memorySnapshot_);
          DARABONBA_PTR_TO_JSON(progress, progress_);
          DARABONBA_PTR_TO_JSON(project, project_);
          DARABONBA_PTR_TO_JSON(quotaNickname, quotaNickname_);
          DARABONBA_PTR_TO_JSON(runningAtTime, runningAtTime_);
          DARABONBA_PTR_TO_JSON(submittedAtTime, submittedAtTime_);
        };
        friend void from_json(const Darabonba::Json& j, RunningJobInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(cuSnapshot, cuSnapshot_);
          DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(jobOwner, jobOwner_);
          DARABONBA_PTR_FROM_JSON(memorySnapshot, memorySnapshot_);
          DARABONBA_PTR_FROM_JSON(progress, progress_);
          DARABONBA_PTR_FROM_JSON(project, project_);
          DARABONBA_PTR_FROM_JSON(quotaNickname, quotaNickname_);
          DARABONBA_PTR_FROM_JSON(runningAtTime, runningAtTime_);
          DARABONBA_PTR_FROM_JSON(submittedAtTime, submittedAtTime_);
        };
        RunningJobInfoList() = default ;
        RunningJobInfoList(const RunningJobInfoList &) = default ;
        RunningJobInfoList(RunningJobInfoList &&) = default ;
        RunningJobInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RunningJobInfoList() = default ;
        RunningJobInfoList& operator=(const RunningJobInfoList &) = default ;
        RunningJobInfoList& operator=(RunningJobInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cuSnapshot_ == nullptr
        && this->instanceId_ == nullptr && this->jobOwner_ == nullptr && this->memorySnapshot_ == nullptr && this->progress_ == nullptr && this->project_ == nullptr
        && this->quotaNickname_ == nullptr && this->runningAtTime_ == nullptr && this->submittedAtTime_ == nullptr; };
        // cuSnapshot Field Functions 
        bool hasCuSnapshot() const { return this->cuSnapshot_ != nullptr;};
        void deleteCuSnapshot() { this->cuSnapshot_ = nullptr;};
        inline double getCuSnapshot() const { DARABONBA_PTR_GET_DEFAULT(cuSnapshot_, 0.0) };
        inline RunningJobInfoList& setCuSnapshot(double cuSnapshot) { DARABONBA_PTR_SET_VALUE(cuSnapshot_, cuSnapshot) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline RunningJobInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // jobOwner Field Functions 
        bool hasJobOwner() const { return this->jobOwner_ != nullptr;};
        void deleteJobOwner() { this->jobOwner_ = nullptr;};
        inline string getJobOwner() const { DARABONBA_PTR_GET_DEFAULT(jobOwner_, "") };
        inline RunningJobInfoList& setJobOwner(string jobOwner) { DARABONBA_PTR_SET_VALUE(jobOwner_, jobOwner) };


        // memorySnapshot Field Functions 
        bool hasMemorySnapshot() const { return this->memorySnapshot_ != nullptr;};
        void deleteMemorySnapshot() { this->memorySnapshot_ = nullptr;};
        inline double getMemorySnapshot() const { DARABONBA_PTR_GET_DEFAULT(memorySnapshot_, 0.0) };
        inline RunningJobInfoList& setMemorySnapshot(double memorySnapshot) { DARABONBA_PTR_SET_VALUE(memorySnapshot_, memorySnapshot) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline double getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0.0) };
        inline RunningJobInfoList& setProgress(double progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline RunningJobInfoList& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // quotaNickname Field Functions 
        bool hasQuotaNickname() const { return this->quotaNickname_ != nullptr;};
        void deleteQuotaNickname() { this->quotaNickname_ = nullptr;};
        inline string getQuotaNickname() const { DARABONBA_PTR_GET_DEFAULT(quotaNickname_, "") };
        inline RunningJobInfoList& setQuotaNickname(string quotaNickname) { DARABONBA_PTR_SET_VALUE(quotaNickname_, quotaNickname) };


        // runningAtTime Field Functions 
        bool hasRunningAtTime() const { return this->runningAtTime_ != nullptr;};
        void deleteRunningAtTime() { this->runningAtTime_ = nullptr;};
        inline int64_t getRunningAtTime() const { DARABONBA_PTR_GET_DEFAULT(runningAtTime_, 0L) };
        inline RunningJobInfoList& setRunningAtTime(int64_t runningAtTime) { DARABONBA_PTR_SET_VALUE(runningAtTime_, runningAtTime) };


        // submittedAtTime Field Functions 
        bool hasSubmittedAtTime() const { return this->submittedAtTime_ != nullptr;};
        void deleteSubmittedAtTime() { this->submittedAtTime_ = nullptr;};
        inline int64_t getSubmittedAtTime() const { DARABONBA_PTR_GET_DEFAULT(submittedAtTime_, 0L) };
        inline RunningJobInfoList& setSubmittedAtTime(int64_t submittedAtTime) { DARABONBA_PTR_SET_VALUE(submittedAtTime_, submittedAtTime) };


      protected:
        shared_ptr<double> cuSnapshot_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> jobOwner_ {};
        shared_ptr<double> memorySnapshot_ {};
        shared_ptr<double> progress_ {};
        shared_ptr<string> project_ {};
        shared_ptr<string> quotaNickname_ {};
        shared_ptr<int64_t> runningAtTime_ {};
        shared_ptr<int64_t> submittedAtTime_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->runningJobInfoList_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // runningJobInfoList Field Functions 
      bool hasRunningJobInfoList() const { return this->runningJobInfoList_ != nullptr;};
      void deleteRunningJobInfoList() { this->runningJobInfoList_ = nullptr;};
      inline const vector<Data::RunningJobInfoList> & getRunningJobInfoList() const { DARABONBA_PTR_GET_CONST(runningJobInfoList_, vector<Data::RunningJobInfoList>) };
      inline vector<Data::RunningJobInfoList> getRunningJobInfoList() { DARABONBA_PTR_GET(runningJobInfoList_, vector<Data::RunningJobInfoList>) };
      inline Data& setRunningJobInfoList(const vector<Data::RunningJobInfoList> & runningJobInfoList) { DARABONBA_PTR_SET_VALUE(runningJobInfoList_, runningJobInfoList) };
      inline Data& setRunningJobInfoList(vector<Data::RunningJobInfoList> && runningJobInfoList) { DARABONBA_PTR_SET_RVALUE(runningJobInfoList_, runningJobInfoList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int64_t> pageNumber_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<vector<Data::RunningJobInfoList>> runningJobInfoList_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRunningJobsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRunningJobsResponseBody::Data) };
    inline GetRunningJobsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRunningJobsResponseBody::Data) };
    inline GetRunningJobsResponseBody& setData(const GetRunningJobsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRunningJobsResponseBody& setData(GetRunningJobsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetRunningJobsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetRunningJobsResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetRunningJobsResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRunningJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetRunningJobsResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
