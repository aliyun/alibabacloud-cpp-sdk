// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRELOADDETAILBYIDRESPONSEBODYURLDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRELOADDETAILBYIDRESPONSEBODYURLDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePreloadDetailByIdResponseBodyUrlDetailsUrls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribePreloadDetailByIdResponseBodyUrlDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreloadDetailByIdResponseBodyUrlDetails& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Process, process_);
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Urls, urls_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreloadDetailByIdResponseBodyUrlDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Process, process_);
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Urls, urls_);
    };
    DescribePreloadDetailByIdResponseBodyUrlDetails() = default ;
    DescribePreloadDetailByIdResponseBodyUrlDetails(const DescribePreloadDetailByIdResponseBodyUrlDetails &) = default ;
    DescribePreloadDetailByIdResponseBodyUrlDetails(DescribePreloadDetailByIdResponseBodyUrlDetails &&) = default ;
    DescribePreloadDetailByIdResponseBodyUrlDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreloadDetailByIdResponseBodyUrlDetails() = default ;
    DescribePreloadDetailByIdResponseBodyUrlDetails& operator=(const DescribePreloadDetailByIdResponseBodyUrlDetails &) = default ;
    DescribePreloadDetailByIdResponseBodyUrlDetails& operator=(DescribePreloadDetailByIdResponseBodyUrlDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->domain_ != nullptr && this->endTime_ != nullptr && this->process_ != nullptr && this->retCode_ != nullptr && this->status_ != nullptr
        && this->taskId_ != nullptr && this->urls_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribePreloadDetailByIdResponseBodyUrlDetails& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribePreloadDetailByIdResponseBodyUrlDetails& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribePreloadDetailByIdResponseBodyUrlDetails& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline string process() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
    inline DescribePreloadDetailByIdResponseBodyUrlDetails& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline string retCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, "") };
    inline DescribePreloadDetailByIdResponseBodyUrlDetails& setRetCode(string retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePreloadDetailByIdResponseBodyUrlDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribePreloadDetailByIdResponseBodyUrlDetails& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // urls Field Functions 
    bool hasUrls() const { return this->urls_ != nullptr;};
    void deleteUrls() { this->urls_ = nullptr;};
    inline const vector<Models::DescribePreloadDetailByIdResponseBodyUrlDetailsUrls> & urls() const { DARABONBA_PTR_GET_CONST(urls_, vector<Models::DescribePreloadDetailByIdResponseBodyUrlDetailsUrls>) };
    inline vector<Models::DescribePreloadDetailByIdResponseBodyUrlDetailsUrls> urls() { DARABONBA_PTR_GET(urls_, vector<Models::DescribePreloadDetailByIdResponseBodyUrlDetailsUrls>) };
    inline DescribePreloadDetailByIdResponseBodyUrlDetails& setUrls(const vector<Models::DescribePreloadDetailByIdResponseBodyUrlDetailsUrls> & urls) { DARABONBA_PTR_SET_VALUE(urls_, urls) };
    inline DescribePreloadDetailByIdResponseBodyUrlDetails& setUrls(vector<Models::DescribePreloadDetailByIdResponseBodyUrlDetailsUrls> && urls) { DARABONBA_PTR_SET_RVALUE(urls_, urls) };


  protected:
    // The time when the task was created. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The domain name for prefetching resources.
    std::shared_ptr<string> domain_ = nullptr;
    // The time when the task ended. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The progress of the prefetch task, which indicates the number of points of presence (POPs) on which the prefetch task is completed.
    std::shared_ptr<string> process_ = nullptr;
    // The turned error code. A value of `0` indicates that the task succeeded.
    std::shared_ptr<string> retCode_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   **Complete**
    // *   **Refreshing**
    // *   **Failed**
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the task that you want to query.
    // 
    // You can call the PushObjectCache operation to query task IDs. Then, you can use the task IDs to query task status.
    // 
    // You can query one task ID at a time.
    std::shared_ptr<string> taskId_ = nullptr;
    // The completion details of all URL resources in the task.
    std::shared_ptr<vector<Models::DescribePreloadDetailByIdResponseBodyUrlDetailsUrls>> urls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
