// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESBYPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESBYPERFORMANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancesByPerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesByPerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesByPerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeDBInstancesByPerformanceResponseBody() = default ;
    DescribeDBInstancesByPerformanceResponseBody(const DescribeDBInstancesByPerformanceResponseBody &) = default ;
    DescribeDBInstancesByPerformanceResponseBody(DescribeDBInstancesByPerformanceResponseBody &&) = default ;
    DescribeDBInstancesByPerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesByPerformanceResponseBody() = default ;
    DescribeDBInstancesByPerformanceResponseBody& operator=(const DescribeDBInstancesByPerformanceResponseBody &) = default ;
    DescribeDBInstancesByPerformanceResponseBody& operator=(DescribeDBInstancesByPerformanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstancePerformance, DBInstancePerformance_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstancePerformance, DBInstancePerformance_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBInstancePerformance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstancePerformance& obj) { 
          DARABONBA_PTR_TO_JSON(CPUUsage, CPUUsage_);
          DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(DiskUsage, diskUsage_);
          DARABONBA_PTR_TO_JSON(IOPSUsage, IOPSUsage_);
          DARABONBA_PTR_TO_JSON(SessionUsage, sessionUsage_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstancePerformance& obj) { 
          DARABONBA_PTR_FROM_JSON(CPUUsage, CPUUsage_);
          DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(DiskUsage, diskUsage_);
          DARABONBA_PTR_FROM_JSON(IOPSUsage, IOPSUsage_);
          DARABONBA_PTR_FROM_JSON(SessionUsage, sessionUsage_);
        };
        DBInstancePerformance() = default ;
        DBInstancePerformance(const DBInstancePerformance &) = default ;
        DBInstancePerformance(DBInstancePerformance &&) = default ;
        DBInstancePerformance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstancePerformance() = default ;
        DBInstancePerformance& operator=(const DBInstancePerformance &) = default ;
        DBInstancePerformance& operator=(DBInstancePerformance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->CPUUsage_ == nullptr
        && this->DBInstanceDescription_ == nullptr && this->DBInstanceId_ == nullptr && this->diskUsage_ == nullptr && this->IOPSUsage_ == nullptr && this->sessionUsage_ == nullptr; };
        // CPUUsage Field Functions 
        bool hasCPUUsage() const { return this->CPUUsage_ != nullptr;};
        void deleteCPUUsage() { this->CPUUsage_ = nullptr;};
        inline string getCPUUsage() const { DARABONBA_PTR_GET_DEFAULT(CPUUsage_, "") };
        inline DBInstancePerformance& setCPUUsage(string CPUUsage) { DARABONBA_PTR_SET_VALUE(CPUUsage_, CPUUsage) };


        // DBInstanceDescription Field Functions 
        bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
        void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
        inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
        inline DBInstancePerformance& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline DBInstancePerformance& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // diskUsage Field Functions 
        bool hasDiskUsage() const { return this->diskUsage_ != nullptr;};
        void deleteDiskUsage() { this->diskUsage_ = nullptr;};
        inline string getDiskUsage() const { DARABONBA_PTR_GET_DEFAULT(diskUsage_, "") };
        inline DBInstancePerformance& setDiskUsage(string diskUsage) { DARABONBA_PTR_SET_VALUE(diskUsage_, diskUsage) };


        // IOPSUsage Field Functions 
        bool hasIOPSUsage() const { return this->IOPSUsage_ != nullptr;};
        void deleteIOPSUsage() { this->IOPSUsage_ = nullptr;};
        inline string getIOPSUsage() const { DARABONBA_PTR_GET_DEFAULT(IOPSUsage_, "") };
        inline DBInstancePerformance& setIOPSUsage(string IOPSUsage) { DARABONBA_PTR_SET_VALUE(IOPSUsage_, IOPSUsage) };


        // sessionUsage Field Functions 
        bool hasSessionUsage() const { return this->sessionUsage_ != nullptr;};
        void deleteSessionUsage() { this->sessionUsage_ = nullptr;};
        inline string getSessionUsage() const { DARABONBA_PTR_GET_DEFAULT(sessionUsage_, "") };
        inline DBInstancePerformance& setSessionUsage(string sessionUsage) { DARABONBA_PTR_SET_VALUE(sessionUsage_, sessionUsage) };


      protected:
        // The CPU utilization of the instance in percentage.
        shared_ptr<string> CPUUsage_ {};
        // The name of the instance.
        shared_ptr<string> DBInstanceDescription_ {};
        // The ID of the instance.
        shared_ptr<string> DBInstanceId_ {};
        // The disk usage of the instance in percentage.
        shared_ptr<string> diskUsage_ {};
        // The IOPS usage of the instance in percentage.
        shared_ptr<string> IOPSUsage_ {};
        // The number of sessions.
        shared_ptr<string> sessionUsage_ {};
      };

      virtual bool empty() const override { return this->DBInstancePerformance_ == nullptr; };
      // DBInstancePerformance Field Functions 
      bool hasDBInstancePerformance() const { return this->DBInstancePerformance_ != nullptr;};
      void deleteDBInstancePerformance() { this->DBInstancePerformance_ = nullptr;};
      inline const vector<Items::DBInstancePerformance> & getDBInstancePerformance() const { DARABONBA_PTR_GET_CONST(DBInstancePerformance_, vector<Items::DBInstancePerformance>) };
      inline vector<Items::DBInstancePerformance> getDBInstancePerformance() { DARABONBA_PTR_GET(DBInstancePerformance_, vector<Items::DBInstancePerformance>) };
      inline Items& setDBInstancePerformance(const vector<Items::DBInstancePerformance> & dBInstancePerformance) { DARABONBA_PTR_SET_VALUE(DBInstancePerformance_, dBInstancePerformance) };
      inline Items& setDBInstancePerformance(vector<Items::DBInstancePerformance> && dBInstancePerformance) { DARABONBA_PTR_SET_RVALUE(DBInstancePerformance_, dBInstancePerformance) };


    protected:
      shared_ptr<vector<Items::DBInstancePerformance>> DBInstancePerformance_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDBInstancesByPerformanceResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBInstancesByPerformanceResponseBody::Items) };
    inline DescribeDBInstancesByPerformanceResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeDBInstancesByPerformanceResponseBody::Items) };
    inline DescribeDBInstancesByPerformanceResponseBody& setItems(const DescribeDBInstancesByPerformanceResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstancesByPerformanceResponseBody& setItems(DescribeDBInstancesByPerformanceResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBInstancesByPerformanceResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeDBInstancesByPerformanceResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstancesByPerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeDBInstancesByPerformanceResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The details about the instance.
    shared_ptr<DescribeDBInstancesByPerformanceResponseBody::Items> items_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
