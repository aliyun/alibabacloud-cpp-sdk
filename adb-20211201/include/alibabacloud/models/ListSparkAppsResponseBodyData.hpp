// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPARKAPPSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSPARKAPPSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SparkAppInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListSparkAppsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSparkAppsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppInfoList, appInfoList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSparkAppsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInfoList, appInfoList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSparkAppsResponseBodyData() = default ;
    ListSparkAppsResponseBodyData(const ListSparkAppsResponseBodyData &) = default ;
    ListSparkAppsResponseBodyData(ListSparkAppsResponseBodyData &&) = default ;
    ListSparkAppsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSparkAppsResponseBodyData() = default ;
    ListSparkAppsResponseBodyData& operator=(const ListSparkAppsResponseBodyData &) = default ;
    ListSparkAppsResponseBodyData& operator=(ListSparkAppsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInfoList_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // appInfoList Field Functions 
    bool hasAppInfoList() const { return this->appInfoList_ != nullptr;};
    void deleteAppInfoList() { this->appInfoList_ = nullptr;};
    inline const vector<Models::SparkAppInfo> & appInfoList() const { DARABONBA_PTR_GET_CONST(appInfoList_, vector<Models::SparkAppInfo>) };
    inline vector<Models::SparkAppInfo> appInfoList() { DARABONBA_PTR_GET(appInfoList_, vector<Models::SparkAppInfo>) };
    inline ListSparkAppsResponseBodyData& setAppInfoList(const vector<Models::SparkAppInfo> & appInfoList) { DARABONBA_PTR_SET_VALUE(appInfoList_, appInfoList) };
    inline ListSparkAppsResponseBodyData& setAppInfoList(vector<Models::SparkAppInfo> && appInfoList) { DARABONBA_PTR_SET_RVALUE(appInfoList_, appInfoList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListSparkAppsResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListSparkAppsResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSparkAppsResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details of the applications. Fields in the response parameter:
    // 
    // - **Data**: the data of the Spark application template.
    // - **EstimateExecutionCpuTimeInSeconds**: the amount of time it takes to consume CPU resources for running the Spark application. Unit: milliseconds.
    // - **LogRootPath**: the storage path of log files.
    // - **LastAttemptId**: the most recent attempt ID.
    // - **WebUiAddress**: the web UI URL.
    // - **SubmittedTimeInMillis**: the time when the Spark application was submitted. The time is displayed in the UNIX timestamp format. Unit: milliseconds.
    // - **StartedTimeInMillis**: the time when the Spark application was created. The time is displayed in the UNIX timestamp format. Unit: milliseconds.
    // - **LastUpdatedTimeInMillis**: the time when the Spark application was last updated. The time is displayed in the UNIX timestamp format. Unit: milliseconds.
    // - **TerminatedTimeInMillis**: the time when the Spark application task was terminated. The time is displayed in the UNIX timestamp format. Unit: milliseconds.
    // - **DBClusterId**: the ID of the cluster on which the Spark application runs.
    // - **ResourceGroupName**: the name of the job resource group.
    // - **DurationInMillis**: the amount of time it takes to run the Spark application. Unit: milliseconds.
    std::shared_ptr<vector<Models::SparkAppInfo>> appInfoList_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
