// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPARKAPPATTEMPTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSPARKAPPATTEMPTSRESPONSEBODYDATA_HPP_
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
  class ListSparkAppAttemptsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSparkAppAttemptsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AttemptInfoList, attemptInfoList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSparkAppAttemptsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AttemptInfoList, attemptInfoList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSparkAppAttemptsResponseBodyData() = default ;
    ListSparkAppAttemptsResponseBodyData(const ListSparkAppAttemptsResponseBodyData &) = default ;
    ListSparkAppAttemptsResponseBodyData(ListSparkAppAttemptsResponseBodyData &&) = default ;
    ListSparkAppAttemptsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSparkAppAttemptsResponseBodyData() = default ;
    ListSparkAppAttemptsResponseBodyData& operator=(const ListSparkAppAttemptsResponseBodyData &) = default ;
    ListSparkAppAttemptsResponseBodyData& operator=(ListSparkAppAttemptsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attemptInfoList_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // attemptInfoList Field Functions 
    bool hasAttemptInfoList() const { return this->attemptInfoList_ != nullptr;};
    void deleteAttemptInfoList() { this->attemptInfoList_ = nullptr;};
    inline const vector<Models::SparkAttemptInfo> & attemptInfoList() const { DARABONBA_PTR_GET_CONST(attemptInfoList_, vector<Models::SparkAttemptInfo>) };
    inline vector<Models::SparkAttemptInfo> attemptInfoList() { DARABONBA_PTR_GET(attemptInfoList_, vector<Models::SparkAttemptInfo>) };
    inline ListSparkAppAttemptsResponseBodyData& setAttemptInfoList(const vector<Models::SparkAttemptInfo> & attemptInfoList) { DARABONBA_PTR_SET_VALUE(attemptInfoList_, attemptInfoList) };
    inline ListSparkAppAttemptsResponseBodyData& setAttemptInfoList(vector<Models::SparkAttemptInfo> && attemptInfoList) { DARABONBA_PTR_SET_RVALUE(attemptInfoList_, attemptInfoList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListSparkAppAttemptsResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListSparkAppAttemptsResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSparkAppAttemptsResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried attempts. Fields in the response parameter:
    // 
    // *   **AttemptId**: the attempt ID.
    // 
    // *   **State**: the state of the Spark application. Valid values:
    // 
    //     *   **SUBMITTED**
    //     *   **STARTING**
    //     *   **RUNNING**
    //     *   **FAILING**
    //     *   **FAILED**
    //     *   **KILLING**
    //     *   **KILLED**
    //     *   **SUCCEEDING**
    //     *   **COMPLETED**
    //     *   **FATAL**
    //     *   **UNKNOWN**
    // 
    // *   **Message**: the alert message that is returned. If no alert is generated, null is returned.
    // 
    // *   **Data** the data of the Spark application template.
    // 
    // *   **EstimateExecutionCpuTimeInSeconds**: the amount of time that is required to consume CPU resources for running the Spark application. Unit: milliseconds.
    // 
    // *   **LogRootPath**: the storage path of log files.
    // 
    // *   **LastAttemptId**: the ID of the last attempt.
    // 
    // *   **WebUiAddress**: the web UI URL.
    // 
    // *   **SubmittedTimeInMillis**: the time when the Spark application was submitted. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // *   **StartedTimeInMillis**: the time when the Spark application was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // *   **LastUpdatedTimeInMillis**: the time when the Spark application was last updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // *   **TerminatedTimeInMillis**: the time when the Spark application task was terminated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // *   **DBClusterId**: the ID of the cluster on which the Spark application runs.
    // 
    // *   **ResourceGroupName**: the name of the job resource group.
    // 
    // *   **DurationInMillis**: the amount of time that is required to run the Spark application. Unit: milliseconds.
    std::shared_ptr<vector<Models::SparkAttemptInfo>> attemptInfoList_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
