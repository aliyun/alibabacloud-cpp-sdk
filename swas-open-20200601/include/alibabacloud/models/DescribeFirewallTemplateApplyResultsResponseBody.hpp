// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIREWALLTEMPLATEAPPLYRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIREWALLTEMPLATEAPPLYRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeFirewallTemplateApplyResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirewallTemplateApplyResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirewallTemplateApplyResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    DescribeFirewallTemplateApplyResultsResponseBody() = default ;
    DescribeFirewallTemplateApplyResultsResponseBody(const DescribeFirewallTemplateApplyResultsResponseBody &) = default ;
    DescribeFirewallTemplateApplyResultsResponseBody(DescribeFirewallTemplateApplyResultsResponseBody &&) = default ;
    DescribeFirewallTemplateApplyResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirewallTemplateApplyResultsResponseBody() = default ;
    DescribeFirewallTemplateApplyResultsResponseBody& operator=(const DescribeFirewallTemplateApplyResultsResponseBody &) = default ;
    DescribeFirewallTemplateApplyResultsResponseBody& operator=(DescribeFirewallTemplateApplyResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
        DARABONBA_PTR_TO_JSON(FirewallTemplateId, firewallTemplateId_);
        DARABONBA_PTR_TO_JSON(InstanceApplyResults, instanceApplyResults_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
        DARABONBA_PTR_FROM_JSON(FirewallTemplateId, firewallTemplateId_);
        DARABONBA_PTR_FROM_JSON(InstanceApplyResults, instanceApplyResults_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      class InstanceApplyResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceApplyResults& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceApplyResults& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        InstanceApplyResults() = default ;
        InstanceApplyResults(const InstanceApplyResults &) = default ;
        InstanceApplyResults(InstanceApplyResults &&) = default ;
        InstanceApplyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceApplyResults() = default ;
        InstanceApplyResults& operator=(const InstanceApplyResults &) = default ;
        InstanceApplyResults& operator=(InstanceApplyResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->status_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceApplyResults& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline InstanceApplyResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The simple application server instance ID.
        shared_ptr<string> instanceId_ {};
        // The status of applying the firewall template to a specific instance. Valid values:
        // 
        // - Running: The firewall template is being applied.
        // - Failed: The firewall template failed to be applied.
        // - Success: The firewall template was applied.
        // - PartFailed: The firewall template was partially applied. Some rules failed.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->failedCount_ == nullptr && this->firewallTemplateId_ == nullptr && this->instanceApplyResults_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr
        && this->totalCount_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // failedCount Field Functions 
      bool hasFailedCount() const { return this->failedCount_ != nullptr;};
      void deleteFailedCount() { this->failedCount_ = nullptr;};
      inline string getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, "") };
      inline Data& setFailedCount(string failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


      // firewallTemplateId Field Functions 
      bool hasFirewallTemplateId() const { return this->firewallTemplateId_ != nullptr;};
      void deleteFirewallTemplateId() { this->firewallTemplateId_ = nullptr;};
      inline string getFirewallTemplateId() const { DARABONBA_PTR_GET_DEFAULT(firewallTemplateId_, "") };
      inline Data& setFirewallTemplateId(string firewallTemplateId) { DARABONBA_PTR_SET_VALUE(firewallTemplateId_, firewallTemplateId) };


      // instanceApplyResults Field Functions 
      bool hasInstanceApplyResults() const { return this->instanceApplyResults_ != nullptr;};
      void deleteInstanceApplyResults() { this->instanceApplyResults_ = nullptr;};
      inline const vector<Data::InstanceApplyResults> & getInstanceApplyResults() const { DARABONBA_PTR_GET_CONST(instanceApplyResults_, vector<Data::InstanceApplyResults>) };
      inline vector<Data::InstanceApplyResults> getInstanceApplyResults() { DARABONBA_PTR_GET(instanceApplyResults_, vector<Data::InstanceApplyResults>) };
      inline Data& setInstanceApplyResults(const vector<Data::InstanceApplyResults> & instanceApplyResults) { DARABONBA_PTR_SET_VALUE(instanceApplyResults_, instanceApplyResults) };
      inline Data& setInstanceApplyResults(vector<Data::InstanceApplyResults> && instanceApplyResults) { DARABONBA_PTR_SET_RVALUE(instanceApplyResults_, instanceApplyResults) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
      inline Data& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The time when the firewall template application task was executed, in the format of EEE MMM dd HH:mm:ss zzz yyyy.
      shared_ptr<string> createTime_ {};
      // The total number of instances to which the firewall template failed to be applied.
      shared_ptr<string> failedCount_ {};
      // The firewall template ID.
      shared_ptr<string> firewallTemplateId_ {};
      // The results of applying the firewall template to instances.
      shared_ptr<vector<Data::InstanceApplyResults>> instanceApplyResults_ {};
      // The status of applying the firewall template to all instances. Valid values:
      // 
      // - Running: The firewall template is being applied.
      // - Failed: The firewall template failed to be applied to all instances.
      // - Success: The firewall template was applied.
      // - PartFailed: The firewall template was partially applied. Some instances failed.
      shared_ptr<string> status_ {};
      // The ID of the template application task.
      shared_ptr<string> taskId_ {};
      // The total number of instances to which the firewall template is applied.
      shared_ptr<string> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->data_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeFirewallTemplateApplyResultsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeFirewallTemplateApplyResultsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFirewallTemplateApplyResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeFirewallTemplateApplyResultsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeFirewallTemplateApplyResultsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeFirewallTemplateApplyResultsResponseBody::Data>) };
    inline vector<DescribeFirewallTemplateApplyResultsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeFirewallTemplateApplyResultsResponseBody::Data>) };
    inline DescribeFirewallTemplateApplyResultsResponseBody& setData(const vector<DescribeFirewallTemplateApplyResultsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeFirewallTemplateApplyResultsResponseBody& setData(vector<DescribeFirewallTemplateApplyResultsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // The number of entries per page for a paged query.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page for a paged query. Default value: 20.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of firewall rules.
    shared_ptr<string> totalCount_ {};
    // The returned results.
    shared_ptr<vector<DescribeFirewallTemplateApplyResultsResponseBody::Data>> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
