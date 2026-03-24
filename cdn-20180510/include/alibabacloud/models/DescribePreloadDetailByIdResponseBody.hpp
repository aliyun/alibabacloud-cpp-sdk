// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRELOADDETAILBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRELOADDETAILBYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribePreloadDetailByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreloadDetailByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UrlDetails, urlDetails_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreloadDetailByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UrlDetails, urlDetails_);
    };
    DescribePreloadDetailByIdResponseBody() = default ;
    DescribePreloadDetailByIdResponseBody(const DescribePreloadDetailByIdResponseBody &) = default ;
    DescribePreloadDetailByIdResponseBody(DescribePreloadDetailByIdResponseBody &&) = default ;
    DescribePreloadDetailByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreloadDetailByIdResponseBody() = default ;
    DescribePreloadDetailByIdResponseBody& operator=(const DescribePreloadDetailByIdResponseBody &) = default ;
    DescribePreloadDetailByIdResponseBody& operator=(DescribePreloadDetailByIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UrlDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UrlDetails& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Process, process_);
        DARABONBA_PTR_TO_JSON(RetCode, retCode_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Urls, urls_);
      };
      friend void from_json(const Darabonba::Json& j, UrlDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Process, process_);
        DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Urls, urls_);
      };
      UrlDetails() = default ;
      UrlDetails(const UrlDetails &) = default ;
      UrlDetails(UrlDetails &&) = default ;
      UrlDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UrlDetails() = default ;
      UrlDetails& operator=(const UrlDetails &) = default ;
      UrlDetails& operator=(UrlDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Urls : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Urls& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Success, success_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Urls& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        Urls() = default ;
        Urls(const Urls &) = default ;
        Urls(Urls &&) = default ;
        Urls(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Urls() = default ;
        Urls& operator=(const Urls &) = default ;
        Urls& operator=(Urls &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->success_ == nullptr && this->url_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Urls& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
        inline Urls& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Urls& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The details of resource prefetch.
        // 
        // *   If the resource is prefetched on all POPs, "Successfully preloaded" is returned.
        // *   If the resource fails to be prefetched on some POPs, the failure details separated by vertical bars (|) are returned.
        shared_ptr<string> description_ {};
        // The success percentage, which indicates the number of POPs on which the resource is prefetched.
        shared_ptr<string> success_ {};
        // The URL of the prefetched resource.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->domain_ == nullptr && this->endTime_ == nullptr && this->process_ == nullptr && this->retCode_ == nullptr && this->status_ == nullptr
        && this->taskId_ == nullptr && this->urls_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline UrlDetails& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline UrlDetails& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline UrlDetails& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // process Field Functions 
      bool hasProcess() const { return this->process_ != nullptr;};
      void deleteProcess() { this->process_ = nullptr;};
      inline string getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
      inline UrlDetails& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


      // retCode Field Functions 
      bool hasRetCode() const { return this->retCode_ != nullptr;};
      void deleteRetCode() { this->retCode_ = nullptr;};
      inline string getRetCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, "") };
      inline UrlDetails& setRetCode(string retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline UrlDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline UrlDetails& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // urls Field Functions 
      bool hasUrls() const { return this->urls_ != nullptr;};
      void deleteUrls() { this->urls_ = nullptr;};
      inline const vector<UrlDetails::Urls> & getUrls() const { DARABONBA_PTR_GET_CONST(urls_, vector<UrlDetails::Urls>) };
      inline vector<UrlDetails::Urls> getUrls() { DARABONBA_PTR_GET(urls_, vector<UrlDetails::Urls>) };
      inline UrlDetails& setUrls(const vector<UrlDetails::Urls> & urls) { DARABONBA_PTR_SET_VALUE(urls_, urls) };
      inline UrlDetails& setUrls(vector<UrlDetails::Urls> && urls) { DARABONBA_PTR_SET_RVALUE(urls_, urls) };


    protected:
      // The time when the task was created. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The domain name for prefetching resources.
      shared_ptr<string> domain_ {};
      // The time when the task ended. The time is displayed in UTC.
      shared_ptr<string> endTime_ {};
      // The progress of the prefetch task, which indicates the number of points of presence (POPs) on which the prefetch task is completed.
      shared_ptr<string> process_ {};
      // The turned error code. A value of `0` indicates that the task succeeded.
      shared_ptr<string> retCode_ {};
      // The status of the task. Valid values:
      // 
      // *   **Complete**
      // *   **Refreshing**
      // *   **Failed**
      shared_ptr<string> status_ {};
      // The ID of the task that you want to query.
      // 
      // You can call the PushObjectCache operation to query task IDs. Then, you can use the task IDs to query task status.
      // 
      // You can query one task ID at a time.
      shared_ptr<string> taskId_ {};
      // The completion details of all URL resources in the task.
      shared_ptr<vector<UrlDetails::Urls>> urls_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->urlDetails_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePreloadDetailByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePreloadDetailByIdResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // urlDetails Field Functions 
    bool hasUrlDetails() const { return this->urlDetails_ != nullptr;};
    void deleteUrlDetails() { this->urlDetails_ = nullptr;};
    inline const vector<DescribePreloadDetailByIdResponseBody::UrlDetails> & getUrlDetails() const { DARABONBA_PTR_GET_CONST(urlDetails_, vector<DescribePreloadDetailByIdResponseBody::UrlDetails>) };
    inline vector<DescribePreloadDetailByIdResponseBody::UrlDetails> getUrlDetails() { DARABONBA_PTR_GET(urlDetails_, vector<DescribePreloadDetailByIdResponseBody::UrlDetails>) };
    inline DescribePreloadDetailByIdResponseBody& setUrlDetails(const vector<DescribePreloadDetailByIdResponseBody::UrlDetails> & urlDetails) { DARABONBA_PTR_SET_VALUE(urlDetails_, urlDetails) };
    inline DescribePreloadDetailByIdResponseBody& setUrlDetails(vector<DescribePreloadDetailByIdResponseBody::UrlDetails> && urlDetails) { DARABONBA_PTR_SET_RVALUE(urlDetails_, urlDetails) };


  protected:
    // The ID of the request. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The number of queried tasks.
    shared_ptr<int64_t> totalCount_ {};
    // The details of the task, including the task ID, start time, end time, domain name, success rate, status, returned error code, and completion details of all URL resources.
    shared_ptr<vector<DescribePreloadDetailByIdResponseBody::UrlDetails>> urlDetails_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
