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
      // The retry information list. Response parameter description:
      // - **AttemptId**: The retry ID.
      // - **State**: The execution state of the application. Valid values:
      //     - **SUBMITTED**: Submitted.
      //     - **STARTING**: Starting.
      //     - **RUNNING**: Running.
      //     - **FAILING**: The task failed. Cleaning up the environment.
      //     - **FAILED**: Failed.
      //     - **KILLING**: Aborting the task. Cleaning up the environment.
      //     - **KILLED**: The task aborted.
      //     - **SUCCEEDING**: The task execution ended. Cleaning up the environment.
      //     - **COMPLETED**: The task execution ended.
      //     - **FATAL**: Unexpected failure.
      //     - **UNKNOWN**: Unknown error.
      // - **Message**: The alert information. If no alert is generated, an empty value is returned.
      // - **Data**: The Spark application template data.
      // - **EstimateExecutionCpuTimeInSeconds**: The CPU time consumed to execute the Spark application, in milliseconds.
      // - **LogRootPath**: The storage path of the log file.
      // - **LastAttemptId**: The ID of the last retry.
      // - **WebUiAddress**: The Web UI address.
      // - **SubmittedTimeInMillis**: The time when the Spark application was submitted. The value is a UNIX timestamp in milliseconds.
      // - **StartedTimeInMillis**: The time when the Spark application was created. The value is a UNIX timestamp in milliseconds.
      // - **LastUpdatedTimeInMillis**: The time when the Spark application was last updated. The value is a UNIX timestamp in milliseconds.
      // - **TerminatedTimeInMillis**: The time when the execution of the Spark application was stopped. The value is a UNIX timestamp in milliseconds.
      // - **DBClusterId**: The ID of the cluster where the Spark application is executed.
      // - **ResourceGroupName**: The name of the job resource group.
      // - **DurationInMillis**: The execution duration of the Spark application, in milliseconds.
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
