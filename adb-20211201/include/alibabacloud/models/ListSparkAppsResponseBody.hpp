// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPARKAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSPARKAPPSRESPONSEBODY_HPP_
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
  class ListSparkAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSparkAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSparkAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSparkAppsResponseBody() = default ;
    ListSparkAppsResponseBody(const ListSparkAppsResponseBody &) = default ;
    ListSparkAppsResponseBody(ListSparkAppsResponseBody &&) = default ;
    ListSparkAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSparkAppsResponseBody() = default ;
    ListSparkAppsResponseBody& operator=(const ListSparkAppsResponseBody &) = default ;
    ListSparkAppsResponseBody& operator=(ListSparkAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppInfoList, appInfoList_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInfoList, appInfoList_);
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
      virtual bool empty() const override { return this->appInfoList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // appInfoList Field Functions 
      bool hasAppInfoList() const { return this->appInfoList_ != nullptr;};
      void deleteAppInfoList() { this->appInfoList_ = nullptr;};
      inline const vector<SparkAppInfo> & getAppInfoList() const { DARABONBA_PTR_GET_CONST(appInfoList_, vector<SparkAppInfo>) };
      inline vector<SparkAppInfo> getAppInfoList() { DARABONBA_PTR_GET(appInfoList_, vector<SparkAppInfo>) };
      inline Data& setAppInfoList(const vector<SparkAppInfo> & appInfoList) { DARABONBA_PTR_SET_VALUE(appInfoList_, appInfoList) };
      inline Data& setAppInfoList(vector<SparkAppInfo> && appInfoList) { DARABONBA_PTR_SET_RVALUE(appInfoList_, appInfoList) };


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
      shared_ptr<vector<SparkAppInfo>> appInfoList_ {};
      // The page number of the returned page.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries returned per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSparkAppsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSparkAppsResponseBody::Data) };
    inline ListSparkAppsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSparkAppsResponseBody::Data) };
    inline ListSparkAppsResponseBody& setData(const ListSparkAppsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSparkAppsResponseBody& setData(ListSparkAppsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListSparkAppsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListSparkAppsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSparkAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSparkAppsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The data returned.
    shared_ptr<ListSparkAppsResponseBody::Data> data_ {};
    // The page number of the returned page.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
