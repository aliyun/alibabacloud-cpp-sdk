// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLEACCESSCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLEACCESSCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeTableAccessCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTableAccessCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTableAccessCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTableAccessCountResponseBody() = default ;
    DescribeTableAccessCountResponseBody(const DescribeTableAccessCountResponseBody &) = default ;
    DescribeTableAccessCountResponseBody(DescribeTableAccessCountResponseBody &&) = default ;
    DescribeTableAccessCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTableAccessCountResponseBody() = default ;
    DescribeTableAccessCountResponseBody& operator=(const DescribeTableAccessCountResponseBody &) = default ;
    DescribeTableAccessCountResponseBody& operator=(DescribeTableAccessCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AccessCount, accessCount_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(ReportDate, reportDate_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(TableSchema, tableSchema_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessCount, accessCount_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(ReportDate, reportDate_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(TableSchema, tableSchema_);
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
      virtual bool empty() const override { return this->accessCount_ == nullptr
        && this->instanceName_ == nullptr && this->reportDate_ == nullptr && this->tableName_ == nullptr && this->tableSchema_ == nullptr; };
      // accessCount Field Functions 
      bool hasAccessCount() const { return this->accessCount_ != nullptr;};
      void deleteAccessCount() { this->accessCount_ = nullptr;};
      inline string getAccessCount() const { DARABONBA_PTR_GET_DEFAULT(accessCount_, "") };
      inline Items& setAccessCount(string accessCount) { DARABONBA_PTR_SET_VALUE(accessCount_, accessCount) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Items& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // reportDate Field Functions 
      bool hasReportDate() const { return this->reportDate_ != nullptr;};
      void deleteReportDate() { this->reportDate_ = nullptr;};
      inline string getReportDate() const { DARABONBA_PTR_GET_DEFAULT(reportDate_, "") };
      inline Items& setReportDate(string reportDate) { DARABONBA_PTR_SET_VALUE(reportDate_, reportDate) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Items& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // tableSchema Field Functions 
      bool hasTableSchema() const { return this->tableSchema_ != nullptr;};
      void deleteTableSchema() { this->tableSchema_ = nullptr;};
      inline string getTableSchema() const { DARABONBA_PTR_GET_DEFAULT(tableSchema_, "") };
      inline Items& setTableSchema(string tableSchema) { DARABONBA_PTR_SET_VALUE(tableSchema_, tableSchema) };


    protected:
      // The number of accesses to the table.
      shared_ptr<string> accessCount_ {};
      // The ID of the cluster to which the table belongs.
      shared_ptr<string> instanceName_ {};
      // The date when the table was accessed.
      shared_ptr<string> reportDate_ {};
      // The name of the table.
      shared_ptr<string> tableName_ {};
      // The database to which the table belongs.
      shared_ptr<string> tableSchema_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeTableAccessCountResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeTableAccessCountResponseBody::Items>) };
    inline vector<DescribeTableAccessCountResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeTableAccessCountResponseBody::Items>) };
    inline DescribeTableAccessCountResponseBody& setItems(const vector<DescribeTableAccessCountResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeTableAccessCountResponseBody& setItems(vector<DescribeTableAccessCountResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeTableAccessCountResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeTableAccessCountResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTableAccessCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTableAccessCountResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried tables.
    shared_ptr<vector<DescribeTableAccessCountResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
