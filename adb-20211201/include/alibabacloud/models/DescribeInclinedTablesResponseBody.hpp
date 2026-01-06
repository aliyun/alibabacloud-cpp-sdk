// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINCLINEDTABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINCLINEDTABLESRESPONSEBODY_HPP_
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
  class DescribeInclinedTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInclinedTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInclinedTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInclinedTablesResponseBody() = default ;
    DescribeInclinedTablesResponseBody(const DescribeInclinedTablesResponseBody &) = default ;
    DescribeInclinedTablesResponseBody(DescribeInclinedTablesResponseBody &&) = default ;
    DescribeInclinedTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInclinedTablesResponseBody() = default ;
    DescribeInclinedTablesResponseBody& operator=(const DescribeInclinedTablesResponseBody &) = default ;
    DescribeInclinedTablesResponseBody& operator=(DescribeInclinedTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Table, table_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Table, table_);
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
      class Table : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Table& obj) { 
          DARABONBA_PTR_TO_JSON(IsIncline, isIncline_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
          DARABONBA_PTR_TO_JSON(Schema, schema_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(SpaceRatio, spaceRatio_);
          DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Table& obj) { 
          DARABONBA_PTR_FROM_JSON(IsIncline, isIncline_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
          DARABONBA_PTR_FROM_JSON(Schema, schema_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(SpaceRatio, spaceRatio_);
          DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Table() = default ;
        Table(const Table &) = default ;
        Table(Table &&) = default ;
        Table(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Table() = default ;
        Table& operator=(const Table &) = default ;
        Table& operator=(Table &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->isIncline_ == nullptr
        && this->name_ == nullptr && this->rowCount_ == nullptr && this->schema_ == nullptr && this->size_ == nullptr && this->spaceRatio_ == nullptr
        && this->totalSize_ == nullptr && this->type_ == nullptr; };
        // isIncline Field Functions 
        bool hasIsIncline() const { return this->isIncline_ != nullptr;};
        void deleteIsIncline() { this->isIncline_ = nullptr;};
        inline bool getIsIncline() const { DARABONBA_PTR_GET_DEFAULT(isIncline_, false) };
        inline Table& setIsIncline(bool isIncline) { DARABONBA_PTR_SET_VALUE(isIncline_, isIncline) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Table& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // rowCount Field Functions 
        bool hasRowCount() const { return this->rowCount_ != nullptr;};
        void deleteRowCount() { this->rowCount_ = nullptr;};
        inline int64_t getRowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
        inline Table& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


        // schema Field Functions 
        bool hasSchema() const { return this->schema_ != nullptr;};
        void deleteSchema() { this->schema_ = nullptr;};
        inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
        inline Table& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline Table& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // spaceRatio Field Functions 
        bool hasSpaceRatio() const { return this->spaceRatio_ != nullptr;};
        void deleteSpaceRatio() { this->spaceRatio_ = nullptr;};
        inline double getSpaceRatio() const { DARABONBA_PTR_GET_DEFAULT(spaceRatio_, 0.0) };
        inline Table& setSpaceRatio(double spaceRatio) { DARABONBA_PTR_SET_VALUE(spaceRatio_, spaceRatio) };


        // totalSize Field Functions 
        bool hasTotalSize() const { return this->totalSize_ != nullptr;};
        void deleteTotalSize() { this->totalSize_ = nullptr;};
        inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
        inline Table& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Table& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // Indicates whether data is skewed in the table.
        shared_ptr<bool> isIncline_ {};
        // The name of the table.
        shared_ptr<string> name_ {};
        // The number of rows in the table.
        shared_ptr<int64_t> rowCount_ {};
        // The name of the database.
        shared_ptr<string> schema_ {};
        // The number of rows in the table.
        shared_ptr<int64_t> size_ {};
        // The percentage of the table size. Unit: %.
        // 
        // >  Formula: Table storage percentage = Total data size of a table/Total data size of the cluster × 100%.
        shared_ptr<double> spaceRatio_ {};
        // The total data size of the table. Unit: bytes.
        // 
        // >  The following formulas can be used to calculate the total data size:
        // 
        // *   Formula 1: Total data size = Hot data size + Cold data size.
        // *   Formula 2: Total data size = Data size of table records + Data size of regular indexes + Data size of primary key indexes + Data size of other data.
        shared_ptr<int64_t> totalSize_ {};
        // The detection type of the table.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->table_ == nullptr; };
      // table Field Functions 
      bool hasTable() const { return this->table_ != nullptr;};
      void deleteTable() { this->table_ = nullptr;};
      inline const vector<Items::Table> & getTable() const { DARABONBA_PTR_GET_CONST(table_, vector<Items::Table>) };
      inline vector<Items::Table> getTable() { DARABONBA_PTR_GET(table_, vector<Items::Table>) };
      inline Items& setTable(const vector<Items::Table> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
      inline Items& setTable(vector<Items::Table> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


    protected:
      // The queried table.
      shared_ptr<vector<Items::Table>> table_ {};
    };

    class DetectionItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetectionItems& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DetectionItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DetectionItems() = default ;
      DetectionItems(const DetectionItems &) = default ;
      DetectionItems(DetectionItems &&) = default ;
      DetectionItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetectionItems() = default ;
      DetectionItems& operator=(const DetectionItems &) = default ;
      DetectionItems& operator=(DetectionItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr
        && this->name_ == nullptr && this->status_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline DetectionItems& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DetectionItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DetectionItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The message of the detection result.
      shared_ptr<string> message_ {};
      // The name of the detection item.
      shared_ptr<string> name_ {};
      // The severity level of the detection result.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->detectionItems_ == nullptr && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeInclinedTablesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // detectionItems Field Functions 
    bool hasDetectionItems() const { return this->detectionItems_ != nullptr;};
    void deleteDetectionItems() { this->detectionItems_ = nullptr;};
    inline const vector<DescribeInclinedTablesResponseBody::DetectionItems> & getDetectionItems() const { DARABONBA_PTR_GET_CONST(detectionItems_, vector<DescribeInclinedTablesResponseBody::DetectionItems>) };
    inline vector<DescribeInclinedTablesResponseBody::DetectionItems> getDetectionItems() { DARABONBA_PTR_GET(detectionItems_, vector<DescribeInclinedTablesResponseBody::DetectionItems>) };
    inline DescribeInclinedTablesResponseBody& setDetectionItems(const vector<DescribeInclinedTablesResponseBody::DetectionItems> & detectionItems) { DARABONBA_PTR_SET_VALUE(detectionItems_, detectionItems) };
    inline DescribeInclinedTablesResponseBody& setDetectionItems(vector<DescribeInclinedTablesResponseBody::DetectionItems> && detectionItems) { DARABONBA_PTR_SET_RVALUE(detectionItems_, detectionItems) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeInclinedTablesResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeInclinedTablesResponseBody::Items) };
    inline DescribeInclinedTablesResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeInclinedTablesResponseBody::Items) };
    inline DescribeInclinedTablesResponseBody& setItems(const DescribeInclinedTablesResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeInclinedTablesResponseBody& setItems(DescribeInclinedTablesResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeInclinedTablesResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeInclinedTablesResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInclinedTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeInclinedTablesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details about the access denial. This parameter is returned only if Resource Access Management (RAM) permission verification failed.
    shared_ptr<string> accessDeniedDetail_ {};
    // The queried detection items and detection results.
    shared_ptr<vector<DescribeInclinedTablesResponseBody::DetectionItems>> detectionItems_ {};
    // The queried tables.
    shared_ptr<DescribeInclinedTablesResponseBody::Items> items_ {};
    // The page number. Pages start from page 1.
    shared_ptr<string> pageNumber_ {};
    // The total number of pages.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
