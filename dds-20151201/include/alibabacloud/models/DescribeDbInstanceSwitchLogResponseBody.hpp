// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESWITCHLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESWITCHLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeDBInstanceSwitchLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceSwitchLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(LogItems, logItems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceSwitchLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(LogItems, logItems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDBInstanceSwitchLogResponseBody() = default ;
    DescribeDBInstanceSwitchLogResponseBody(const DescribeDBInstanceSwitchLogResponseBody &) = default ;
    DescribeDBInstanceSwitchLogResponseBody(DescribeDBInstanceSwitchLogResponseBody &&) = default ;
    DescribeDBInstanceSwitchLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceSwitchLogResponseBody() = default ;
    DescribeDBInstanceSwitchLogResponseBody& operator=(const DescribeDBInstanceSwitchLogResponseBody &) = default ;
    DescribeDBInstanceSwitchLogResponseBody& operator=(DescribeDBInstanceSwitchLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogItems& obj) { 
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(SwitchCode, switchCode_);
        DARABONBA_PTR_TO_JSON(SwitchStatus, switchStatus_);
        DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      };
      friend void from_json(const Darabonba::Json& j, LogItems& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(SwitchCode, switchCode_);
        DARABONBA_PTR_FROM_JSON(SwitchStatus, switchStatus_);
        DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      };
      LogItems() = default ;
      LogItems(const LogItems &) = default ;
      LogItems(LogItems &&) = default ;
      LogItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogItems() = default ;
      LogItems& operator=(const LogItems &) = default ;
      LogItems& operator=(LogItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nodeId_ == nullptr
        && this->switchCode_ == nullptr && this->switchStatus_ == nullptr && this->switchTime_ == nullptr; };
      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline LogItems& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // switchCode Field Functions 
      bool hasSwitchCode() const { return this->switchCode_ != nullptr;};
      void deleteSwitchCode() { this->switchCode_ = nullptr;};
      inline string getSwitchCode() const { DARABONBA_PTR_GET_DEFAULT(switchCode_, "") };
      inline LogItems& setSwitchCode(string switchCode) { DARABONBA_PTR_SET_VALUE(switchCode_, switchCode) };


      // switchStatus Field Functions 
      bool hasSwitchStatus() const { return this->switchStatus_ != nullptr;};
      void deleteSwitchStatus() { this->switchStatus_ = nullptr;};
      inline string getSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(switchStatus_, "") };
      inline LogItems& setSwitchStatus(string switchStatus) { DARABONBA_PTR_SET_VALUE(switchStatus_, switchStatus) };


      // switchTime Field Functions 
      bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
      void deleteSwitchTime() { this->switchTime_ = nullptr;};
      inline string getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
      inline LogItems& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    protected:
      // The ID of the replica set instance or the ID of the node on which a primary/secondary switchover is performed.
      shared_ptr<string> nodeId_ {};
      // The code that indicates the reason of a primary/secondary switchover. Valid values:
      // 
      // *   USER_CONSOLE_OPERATION: The switchover is manually performed.
      // *   OPERATION_AND_MAINTENANCE: Potential risks exist.
      // *   MACHINE_DOWNTIME: The host is offline.
      // *   PRIMARY_UNHEALTHY: An exception occurs on the primary node of the instance.
      // *   SECONDARY_UNHEALTHY: An exception occurs on the secondary node of the instance.
      // *   MULTIPLE_NODE_FAILURES: An exception occurs on multiple nodes of the instance.
      shared_ptr<string> switchCode_ {};
      // The switchover status. Valid values: **1** and **0**. The value 1 indicates a successful primary/secondary switchover and the value 0 indicates a failed primary/secondary switchover.
      shared_ptr<string> switchStatus_ {};
      // The point in time when a primary/secondary switchover was performed. The time follows the ISO 8601 standard in the *yyyy-mm-dd*T*hh:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> switchTime_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->logItems_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceSwitchLogResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // logItems Field Functions 
    bool hasLogItems() const { return this->logItems_ != nullptr;};
    void deleteLogItems() { this->logItems_ = nullptr;};
    inline const vector<DescribeDBInstanceSwitchLogResponseBody::LogItems> & getLogItems() const { DARABONBA_PTR_GET_CONST(logItems_, vector<DescribeDBInstanceSwitchLogResponseBody::LogItems>) };
    inline vector<DescribeDBInstanceSwitchLogResponseBody::LogItems> getLogItems() { DARABONBA_PTR_GET(logItems_, vector<DescribeDBInstanceSwitchLogResponseBody::LogItems>) };
    inline DescribeDBInstanceSwitchLogResponseBody& setLogItems(const vector<DescribeDBInstanceSwitchLogResponseBody::LogItems> & logItems) { DARABONBA_PTR_SET_VALUE(logItems_, logItems) };
    inline DescribeDBInstanceSwitchLogResponseBody& setLogItems(vector<DescribeDBInstanceSwitchLogResponseBody::LogItems> && logItems) { DARABONBA_PTR_SET_RVALUE(logItems_, logItems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDBInstanceSwitchLogResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDBInstanceSwitchLogResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceSwitchLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDBInstanceSwitchLogResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The primary/secondary switchover logs.
    shared_ptr<vector<DescribeDBInstanceSwitchLogResponseBody::LogItems>> logItems_ {};
    // The page number returned.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of primary/secondary switching entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
