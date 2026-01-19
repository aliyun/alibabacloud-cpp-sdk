// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSITEDELIVERYTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSITEDELIVERYTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListSiteDeliveryTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSiteDeliveryTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSiteDeliveryTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSiteDeliveryTasksResponseBody() = default ;
    ListSiteDeliveryTasksResponseBody(const ListSiteDeliveryTasksResponseBody &) = default ;
    ListSiteDeliveryTasksResponseBody(ListSiteDeliveryTasksResponseBody &&) = default ;
    ListSiteDeliveryTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSiteDeliveryTasksResponseBody() = default ;
    ListSiteDeliveryTasksResponseBody& operator=(const ListSiteDeliveryTasksResponseBody &) = default ;
    ListSiteDeliveryTasksResponseBody& operator=(ListSiteDeliveryTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
        DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
        DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
        DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
        DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      };
      Tasks() = default ;
      Tasks(const Tasks &) = default ;
      Tasks(Tasks &&) = default ;
      Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tasks() = default ;
      Tasks& operator=(const Tasks &) = default ;
      Tasks& operator=(Tasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->businessType_ == nullptr
        && this->dataCenter_ == nullptr && this->deliveryType_ == nullptr && this->status_ == nullptr && this->taskName_ == nullptr; };
      // businessType Field Functions 
      bool hasBusinessType() const { return this->businessType_ != nullptr;};
      void deleteBusinessType() { this->businessType_ = nullptr;};
      inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
      inline Tasks& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


      // dataCenter Field Functions 
      bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
      void deleteDataCenter() { this->dataCenter_ = nullptr;};
      inline string getDataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
      inline Tasks& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


      // deliveryType Field Functions 
      bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
      void deleteDeliveryType() { this->deliveryType_ = nullptr;};
      inline string getDeliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
      inline Tasks& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Tasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Tasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    protected:
      // The log category. Valid values:
      // 
      // *   dcdn_log_access_l1 (default): access logs.
      // *   dcdn_log_er: Edge Routine logs.
      // *   dcdn_log_waf: firewall logs.
      // *   dcdn_log_ipa: TCP/UDP proxy logs.
      shared_ptr<string> businessType_ {};
      // The data center. Valid values:
      // 
      // *   cn: the Chinese mainland.
      // *   sg: outside the Chinese mainland.
      shared_ptr<string> dataCenter_ {};
      // The destination of the delivery. Valid values:
      // 
      // 1.  sls: Alibaba Cloud Simple Log Service (SLS).
      // 2.  http: HTTP server.
      // 3.  aws3: Amazon Simple Storage Service (S3).
      // 4.  oss: Alibaba Cloud Object Storage Service (OSS).
      // 5.  kafka: Kafka.
      // 6.  aws3cmpt: S3-compatible storage service.
      shared_ptr<string> deliveryType_ {};
      // The status of the delivery task.
      // 
      // *   **online**
      // *   **offline**
      shared_ptr<string> status_ {};
      // The name of the delivery task.
      shared_ptr<string> taskName_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->tasks_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSiteDeliveryTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSiteDeliveryTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSiteDeliveryTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ListSiteDeliveryTasksResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ListSiteDeliveryTasksResponseBody::Tasks>) };
    inline vector<ListSiteDeliveryTasksResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<ListSiteDeliveryTasksResponseBody::Tasks>) };
    inline ListSiteDeliveryTasksResponseBody& setTasks(const vector<ListSiteDeliveryTasksResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ListSiteDeliveryTasksResponseBody& setTasks(vector<ListSiteDeliveryTasksResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSiteDeliveryTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Default value: 0.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: **1 to 500**. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The delivery tasks.
    shared_ptr<vector<ListSiteDeliveryTasksResponseBody::Tasks>> tasks_ {};
    // The total number of log delivery tasks.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
