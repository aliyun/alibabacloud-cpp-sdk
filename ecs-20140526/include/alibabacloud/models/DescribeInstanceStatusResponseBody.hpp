// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceStatuses, instanceStatuses_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceStatuses, instanceStatuses_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceStatusResponseBody() = default ;
    DescribeInstanceStatusResponseBody(const DescribeInstanceStatusResponseBody &) = default ;
    DescribeInstanceStatusResponseBody(DescribeInstanceStatusResponseBody &&) = default ;
    DescribeInstanceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceStatusResponseBody() = default ;
    DescribeInstanceStatusResponseBody& operator=(const DescribeInstanceStatusResponseBody &) = default ;
    DescribeInstanceStatusResponseBody& operator=(DescribeInstanceStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceStatuses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceStatuses& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceStatuses& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      };
      InstanceStatuses() = default ;
      InstanceStatuses(const InstanceStatuses &) = default ;
      InstanceStatuses(InstanceStatuses &&) = default ;
      InstanceStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceStatuses() = default ;
      InstanceStatuses& operator=(const InstanceStatuses &) = default ;
      InstanceStatuses& operator=(InstanceStatuses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceStatus& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        InstanceStatus() = default ;
        InstanceStatus(const InstanceStatus &) = default ;
        InstanceStatus(InstanceStatus &&) = default ;
        InstanceStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceStatus() = default ;
        InstanceStatus& operator=(const InstanceStatus &) = default ;
        InstanceStatus& operator=(InstanceStatus &&) = default ;
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
        inline InstanceStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline InstanceStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The status of the instance. Valid values:
        // 
        // *   Pending: The instance is being created.
        // *   Running: The instance is running.
        // *   Starting: The instance is being started.
        // *   Stopping: The instance is being stopped.
        // *   Stopped: The instance is stopped.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->instanceStatus_ == nullptr; };
      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline const vector<InstanceStatuses::InstanceStatus> & getInstanceStatus() const { DARABONBA_PTR_GET_CONST(instanceStatus_, vector<InstanceStatuses::InstanceStatus>) };
      inline vector<InstanceStatuses::InstanceStatus> getInstanceStatus() { DARABONBA_PTR_GET(instanceStatus_, vector<InstanceStatuses::InstanceStatus>) };
      inline InstanceStatuses& setInstanceStatus(const vector<InstanceStatuses::InstanceStatus> & instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };
      inline InstanceStatuses& setInstanceStatus(vector<InstanceStatuses::InstanceStatus> && instanceStatus) { DARABONBA_PTR_SET_RVALUE(instanceStatus_, instanceStatus) };


    protected:
      shared_ptr<vector<InstanceStatuses::InstanceStatus>> instanceStatus_ {};
    };

    virtual bool empty() const override { return this->instanceStatuses_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instanceStatuses Field Functions 
    bool hasInstanceStatuses() const { return this->instanceStatuses_ != nullptr;};
    void deleteInstanceStatuses() { this->instanceStatuses_ = nullptr;};
    inline const DescribeInstanceStatusResponseBody::InstanceStatuses & getInstanceStatuses() const { DARABONBA_PTR_GET_CONST(instanceStatuses_, DescribeInstanceStatusResponseBody::InstanceStatuses) };
    inline DescribeInstanceStatusResponseBody::InstanceStatuses getInstanceStatuses() { DARABONBA_PTR_GET(instanceStatuses_, DescribeInstanceStatusResponseBody::InstanceStatuses) };
    inline DescribeInstanceStatusResponseBody& setInstanceStatuses(const DescribeInstanceStatusResponseBody::InstanceStatuses & instanceStatuses) { DARABONBA_PTR_SET_VALUE(instanceStatuses_, instanceStatuses) };
    inline DescribeInstanceStatusResponseBody& setInstanceStatuses(DescribeInstanceStatusResponseBody::InstanceStatuses && instanceStatuses) { DARABONBA_PTR_SET_RVALUE(instanceStatuses_, instanceStatuses) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstanceStatusResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceStatusResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstanceStatusResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The IDs and status of the ECS instances.
    shared_ptr<DescribeInstanceStatusResponseBody::InstanceStatuses> instanceStatuses_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of instances.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
