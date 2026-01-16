// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKBYPARAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKBYPARAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryTaskByParamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskByParamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskByParamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    QueryTaskByParamResponseBody() = default ;
    QueryTaskByParamResponseBody(const QueryTaskByParamResponseBody &) = default ;
    QueryTaskByParamResponseBody(QueryTaskByParamResponseBody &&) = default ;
    QueryTaskByParamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskByParamResponseBody() = default ;
    QueryTaskByParamResponseBody& operator=(const QueryTaskByParamResponseBody &) = default ;
    QueryTaskByParamResponseBody& operator=(QueryTaskByParamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(task, task_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(task, task_);
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
      class Task : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Task& obj) { 
          DARABONBA_PTR_TO_JSON(AddressType, addressType_);
          DARABONBA_PTR_TO_JSON(ConfigSetId, configSetId_);
          DARABONBA_PTR_TO_JSON(ConfigSetName, configSetName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(IpPoolId, ipPoolId_);
          DARABONBA_PTR_TO_JSON(IpPoolName, ipPoolName_);
          DARABONBA_PTR_TO_JSON(ReceiversName, receiversName_);
          DARABONBA_PTR_TO_JSON(RequestCount, requestCount_);
          DARABONBA_PTR_TO_JSON(TagName, tagName_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
          DARABONBA_PTR_TO_JSON(UtcCreateTime, utcCreateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Task& obj) { 
          DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
          DARABONBA_PTR_FROM_JSON(ConfigSetId, configSetId_);
          DARABONBA_PTR_FROM_JSON(ConfigSetName, configSetName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(IpPoolId, ipPoolId_);
          DARABONBA_PTR_FROM_JSON(IpPoolName, ipPoolName_);
          DARABONBA_PTR_FROM_JSON(ReceiversName, receiversName_);
          DARABONBA_PTR_FROM_JSON(RequestCount, requestCount_);
          DARABONBA_PTR_FROM_JSON(TagName, tagName_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
          DARABONBA_PTR_FROM_JSON(UtcCreateTime, utcCreateTime_);
        };
        Task() = default ;
        Task(const Task &) = default ;
        Task(Task &&) = default ;
        Task(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Task() = default ;
        Task& operator=(const Task &) = default ;
        Task& operator=(Task &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addressType_ == nullptr
        && this->configSetId_ == nullptr && this->configSetName_ == nullptr && this->createTime_ == nullptr && this->ipPoolId_ == nullptr && this->ipPoolName_ == nullptr
        && this->receiversName_ == nullptr && this->requestCount_ == nullptr && this->tagName_ == nullptr && this->taskId_ == nullptr && this->taskStatus_ == nullptr
        && this->templateName_ == nullptr && this->utcCreateTime_ == nullptr; };
        // addressType Field Functions 
        bool hasAddressType() const { return this->addressType_ != nullptr;};
        void deleteAddressType() { this->addressType_ = nullptr;};
        inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
        inline Task& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


        // configSetId Field Functions 
        bool hasConfigSetId() const { return this->configSetId_ != nullptr;};
        void deleteConfigSetId() { this->configSetId_ = nullptr;};
        inline string getConfigSetId() const { DARABONBA_PTR_GET_DEFAULT(configSetId_, "") };
        inline Task& setConfigSetId(string configSetId) { DARABONBA_PTR_SET_VALUE(configSetId_, configSetId) };


        // configSetName Field Functions 
        bool hasConfigSetName() const { return this->configSetName_ != nullptr;};
        void deleteConfigSetName() { this->configSetName_ = nullptr;};
        inline string getConfigSetName() const { DARABONBA_PTR_GET_DEFAULT(configSetName_, "") };
        inline Task& setConfigSetName(string configSetName) { DARABONBA_PTR_SET_VALUE(configSetName_, configSetName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Task& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // ipPoolId Field Functions 
        bool hasIpPoolId() const { return this->ipPoolId_ != nullptr;};
        void deleteIpPoolId() { this->ipPoolId_ = nullptr;};
        inline string getIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipPoolId_, "") };
        inline Task& setIpPoolId(string ipPoolId) { DARABONBA_PTR_SET_VALUE(ipPoolId_, ipPoolId) };


        // ipPoolName Field Functions 
        bool hasIpPoolName() const { return this->ipPoolName_ != nullptr;};
        void deleteIpPoolName() { this->ipPoolName_ = nullptr;};
        inline string getIpPoolName() const { DARABONBA_PTR_GET_DEFAULT(ipPoolName_, "") };
        inline Task& setIpPoolName(string ipPoolName) { DARABONBA_PTR_SET_VALUE(ipPoolName_, ipPoolName) };


        // receiversName Field Functions 
        bool hasReceiversName() const { return this->receiversName_ != nullptr;};
        void deleteReceiversName() { this->receiversName_ = nullptr;};
        inline string getReceiversName() const { DARABONBA_PTR_GET_DEFAULT(receiversName_, "") };
        inline Task& setReceiversName(string receiversName) { DARABONBA_PTR_SET_VALUE(receiversName_, receiversName) };


        // requestCount Field Functions 
        bool hasRequestCount() const { return this->requestCount_ != nullptr;};
        void deleteRequestCount() { this->requestCount_ = nullptr;};
        inline string getRequestCount() const { DARABONBA_PTR_GET_DEFAULT(requestCount_, "") };
        inline Task& setRequestCount(string requestCount) { DARABONBA_PTR_SET_VALUE(requestCount_, requestCount) };


        // tagName Field Functions 
        bool hasTagName() const { return this->tagName_ != nullptr;};
        void deleteTagName() { this->tagName_ = nullptr;};
        inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
        inline Task& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Task& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
        inline Task& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline Task& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        // utcCreateTime Field Functions 
        bool hasUtcCreateTime() const { return this->utcCreateTime_ != nullptr;};
        void deleteUtcCreateTime() { this->utcCreateTime_ = nullptr;};
        inline int64_t getUtcCreateTime() const { DARABONBA_PTR_GET_DEFAULT(utcCreateTime_, 0L) };
        inline Task& setUtcCreateTime(int64_t utcCreateTime) { DARABONBA_PTR_SET_VALUE(utcCreateTime_, utcCreateTime) };


      protected:
        // Address type, sending address: 1; random address: 0;
        shared_ptr<string> addressType_ {};
        shared_ptr<string> configSetId_ {};
        shared_ptr<string> configSetName_ {};
        // Creation time
        shared_ptr<string> createTime_ {};
        // dedicated IP pool ID.
        shared_ptr<string> ipPoolId_ {};
        // dedicated IP pool name.
        shared_ptr<string> ipPoolName_ {};
        // Receiver\\"s name
        shared_ptr<string> receiversName_ {};
        // Request count
        shared_ptr<string> requestCount_ {};
        // Tag
        shared_ptr<string> tagName_ {};
        // Task ID
        shared_ptr<string> taskId_ {};
        // Task status, sent successfully: 1
        shared_ptr<string> taskStatus_ {};
        // Template name
        shared_ptr<string> templateName_ {};
        // Creation time in UTC format
        shared_ptr<int64_t> utcCreateTime_ {};
      };

      virtual bool empty() const override { return this->task_ == nullptr; };
      // task Field Functions 
      bool hasTask() const { return this->task_ != nullptr;};
      void deleteTask() { this->task_ = nullptr;};
      inline const vector<Data::Task> & getTask() const { DARABONBA_PTR_GET_CONST(task_, vector<Data::Task>) };
      inline vector<Data::Task> getTask() { DARABONBA_PTR_GET(task_, vector<Data::Task>) };
      inline Data& setTask(const vector<Data::Task> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
      inline Data& setTask(vector<Data::Task> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


    protected:
      shared_ptr<vector<Data::Task>> task_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->data_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryTaskByParamResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryTaskByParamResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTaskByParamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryTaskByParamResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryTaskByParamResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryTaskByParamResponseBody::Data) };
    inline QueryTaskByParamResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryTaskByParamResponseBody::Data) };
    inline QueryTaskByParamResponseBody& setData(const QueryTaskByParamResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTaskByParamResponseBody& setData(QueryTaskByParamResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Current page number
    shared_ptr<int32_t> pageNumber_ {};
    // Page size
    shared_ptr<int32_t> pageSize_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Total count
    shared_ptr<int32_t> totalCount_ {};
    // Returned results
    shared_ptr<QueryTaskByParamResponseBody::Data> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
