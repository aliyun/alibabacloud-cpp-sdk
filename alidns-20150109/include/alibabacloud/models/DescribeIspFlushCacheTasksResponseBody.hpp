// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHETASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeIspFlushCacheTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIspFlushCacheTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IspFlushCacheTasks, ispFlushCacheTasks_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIspFlushCacheTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IspFlushCacheTasks, ispFlushCacheTasks_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeIspFlushCacheTasksResponseBody() = default ;
    DescribeIspFlushCacheTasksResponseBody(const DescribeIspFlushCacheTasksResponseBody &) = default ;
    DescribeIspFlushCacheTasksResponseBody(DescribeIspFlushCacheTasksResponseBody &&) = default ;
    DescribeIspFlushCacheTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIspFlushCacheTasksResponseBody() = default ;
    DescribeIspFlushCacheTasksResponseBody& operator=(const DescribeIspFlushCacheTasksResponseBody &) = default ;
    DescribeIspFlushCacheTasksResponseBody& operator=(DescribeIspFlushCacheTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IspFlushCacheTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IspFlushCacheTasks& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(Isp, isp_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, IspFlushCacheTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      };
      IspFlushCacheTasks() = default ;
      IspFlushCacheTasks(const IspFlushCacheTasks &) = default ;
      IspFlushCacheTasks(IspFlushCacheTasks &&) = default ;
      IspFlushCacheTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IspFlushCacheTasks() = default ;
      IspFlushCacheTasks& operator=(const IspFlushCacheTasks &) = default ;
      IspFlushCacheTasks& operator=(IspFlushCacheTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->domainName_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->isp_ == nullptr
        && this->taskId_ == nullptr && this->taskStatus_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline IspFlushCacheTasks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline IspFlushCacheTasks& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline IspFlushCacheTasks& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline IspFlushCacheTasks& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline IspFlushCacheTasks& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline IspFlushCacheTasks& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline IspFlushCacheTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline IspFlushCacheTasks& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<int64_t> createTimestamp_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceName_ {};
      shared_ptr<string> isp_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskStatus_ {};
    };

    virtual bool empty() const override { return this->ispFlushCacheTasks_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // ispFlushCacheTasks Field Functions 
    bool hasIspFlushCacheTasks() const { return this->ispFlushCacheTasks_ != nullptr;};
    void deleteIspFlushCacheTasks() { this->ispFlushCacheTasks_ = nullptr;};
    inline const vector<DescribeIspFlushCacheTasksResponseBody::IspFlushCacheTasks> & getIspFlushCacheTasks() const { DARABONBA_PTR_GET_CONST(ispFlushCacheTasks_, vector<DescribeIspFlushCacheTasksResponseBody::IspFlushCacheTasks>) };
    inline vector<DescribeIspFlushCacheTasksResponseBody::IspFlushCacheTasks> getIspFlushCacheTasks() { DARABONBA_PTR_GET(ispFlushCacheTasks_, vector<DescribeIspFlushCacheTasksResponseBody::IspFlushCacheTasks>) };
    inline DescribeIspFlushCacheTasksResponseBody& setIspFlushCacheTasks(const vector<DescribeIspFlushCacheTasksResponseBody::IspFlushCacheTasks> & ispFlushCacheTasks) { DARABONBA_PTR_SET_VALUE(ispFlushCacheTasks_, ispFlushCacheTasks) };
    inline DescribeIspFlushCacheTasksResponseBody& setIspFlushCacheTasks(vector<DescribeIspFlushCacheTasksResponseBody::IspFlushCacheTasks> && ispFlushCacheTasks) { DARABONBA_PTR_SET_RVALUE(ispFlushCacheTasks_, ispFlushCacheTasks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIspFlushCacheTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIspFlushCacheTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIspFlushCacheTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeIspFlushCacheTasksResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeIspFlushCacheTasksResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    shared_ptr<vector<DescribeIspFlushCacheTasksResponseBody::IspFlushCacheTasks>> ispFlushCacheTasks_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalItems_ {};
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
