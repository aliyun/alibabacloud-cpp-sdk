// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPARKAPPATTEMPTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSPARKAPPATTEMPTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SparkAttemptInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListSparkAppAttemptsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSparkAppAttemptsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSparkAppAttemptsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSparkAppAttemptsResponseBody() = default ;
    ListSparkAppAttemptsResponseBody(const ListSparkAppAttemptsResponseBody &) = default ;
    ListSparkAppAttemptsResponseBody(ListSparkAppAttemptsResponseBody &&) = default ;
    ListSparkAppAttemptsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSparkAppAttemptsResponseBody() = default ;
    ListSparkAppAttemptsResponseBody& operator=(const ListSparkAppAttemptsResponseBody &) = default ;
    ListSparkAppAttemptsResponseBody& operator=(ListSparkAppAttemptsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AttemptInfoList, attemptInfoList_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AttemptInfoList, attemptInfoList_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
      virtual bool empty() const override { return this->attemptInfoList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // attemptInfoList Field Functions 
      bool hasAttemptInfoList() const { return this->attemptInfoList_ != nullptr;};
      void deleteAttemptInfoList() { this->attemptInfoList_ = nullptr;};
      inline const vector<SparkAttemptInfo> & getAttemptInfoList() const { DARABONBA_PTR_GET_CONST(attemptInfoList_, vector<SparkAttemptInfo>) };
      inline vector<SparkAttemptInfo> getAttemptInfoList() { DARABONBA_PTR_GET(attemptInfoList_, vector<SparkAttemptInfo>) };
      inline Data& setAttemptInfoList(const vector<SparkAttemptInfo> & attemptInfoList) { DARABONBA_PTR_SET_VALUE(attemptInfoList_, attemptInfoList) };
      inline Data& setAttemptInfoList(vector<SparkAttemptInfo> && attemptInfoList) { DARABONBA_PTR_SET_RVALUE(attemptInfoList_, attemptInfoList) };


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


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of retry information. Metric description:
      // - **AttemptId**: the retry ID.
      // - **State**: the execute status of the application. Valid values:
      //     - **SUBMITTED**: commit.
      //     - **STARTING**: starting.
      //     - **RUNNING**: executing.
      //     - **FAILING**: the node failed and the environment is being cleaned up.
      //     - **FAILED**: failed.
      //     - **KILLING**: aborting the task and cleaning up the environment.
      //     - **KILLED**: the task is aborted.
      //     - **SUCCEEDING**: the node execution is complete and the environment is being cleaned up.
      //     - **COMPLETED**: the node execution is complete.
      //     - **FATAL**: unexpected failure.
      //     - **UNKNOWN**: unknown fault.
      // - **Message**: the alerting message. This parameter is empty if no alerting is generated.
      // - **Data**: the Spark application template data.
      // - **EstimateExecutionCpuTimeInSeconds**: the CPU time consumed to execute the Spark application, in milliseconds (ms).
      // - **LogRootPath**: the storage path of log files.
      // - **LastAttemptId**: the ID of the last retry.
      // - **WebUiAddress**: the web UI address.
      // - **SubmittedTimeInMillis**: the time when the Spark application was committed. This value is a UNIX timestamp in milliseconds (ms).
      // - **StartedTimeInMillis**: the time when the Spark application was created. This value is a UNIX timestamp in milliseconds (ms).
      // - **LastUpdatedTimeInMillis**: the time when the Spark application was last updated. This value is a UNIX timestamp in milliseconds (ms).
      // - **TerminatedTimeInMillis**: the time when the Spark application stopped executing. This value is a UNIX timestamp in milliseconds (ms).
      // - **DBClusterId**: the ID of the cluster that executes the Spark application.
      // - **ResourceGroupName**: the name of the Job-type resource group.
      // - **DurationInMillis**: the execution duration of the Spark application, in milliseconds (ms).
      shared_ptr<vector<SparkAttemptInfo>> attemptInfoList_ {};
      // The page number.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSparkAppAttemptsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSparkAppAttemptsResponseBody::Data) };
    inline ListSparkAppAttemptsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSparkAppAttemptsResponseBody::Data) };
    inline ListSparkAppAttemptsResponseBody& setData(const ListSparkAppAttemptsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSparkAppAttemptsResponseBody& setData(ListSparkAppAttemptsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSparkAppAttemptsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ListSparkAppAttemptsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
