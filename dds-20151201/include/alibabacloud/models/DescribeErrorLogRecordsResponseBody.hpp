// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEERRORLOGRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEERRORLOGRECORDSRESPONSEBODY_HPP_
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
  class DescribeErrorLogRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeErrorLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeErrorLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeErrorLogRecordsResponseBody() = default ;
    DescribeErrorLogRecordsResponseBody(const DescribeErrorLogRecordsResponseBody &) = default ;
    DescribeErrorLogRecordsResponseBody(DescribeErrorLogRecordsResponseBody &&) = default ;
    DescribeErrorLogRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeErrorLogRecordsResponseBody() = default ;
    DescribeErrorLogRecordsResponseBody& operator=(const DescribeErrorLogRecordsResponseBody &) = default ;
    DescribeErrorLogRecordsResponseBody& operator=(DescribeErrorLogRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(LogRecords, logRecords_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(LogRecords, logRecords_);
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
      class LogRecords : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogRecords& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(ConnInfo, connInfo_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, LogRecords& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(ConnInfo, connInfo_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        LogRecords() = default ;
        LogRecords(const LogRecords &) = default ;
        LogRecords(LogRecords &&) = default ;
        LogRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogRecords() = default ;
        LogRecords& operator=(const LogRecords &) = default ;
        LogRecords& operator=(LogRecords &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->category_ == nullptr
        && this->connInfo_ == nullptr && this->content_ == nullptr && this->createTime_ == nullptr && this->id_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline LogRecords& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // connInfo Field Functions 
        bool hasConnInfo() const { return this->connInfo_ != nullptr;};
        void deleteConnInfo() { this->connInfo_ = nullptr;};
        inline string getConnInfo() const { DARABONBA_PTR_GET_DEFAULT(connInfo_, "") };
        inline LogRecords& setConnInfo(string connInfo) { DARABONBA_PTR_SET_VALUE(connInfo_, connInfo) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline LogRecords& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline LogRecords& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
        inline LogRecords& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        // The category of the log entry. Valid values:
        // 
        // *   NETWORK: network connection log
        // *   ACCESS: access control log
        // *   \\-: general log
        // *   COMMAND: slow query log
        // *   SHARDING: sharded cluster log
        // *   STORAGE: storage engine log
        // *   CONNPOOL: connection pool log
        // *   ASIO: asynchronous I/O operation log
        // *   WRITE: slow update log
        shared_ptr<string> category_ {};
        // The connection information of the log entry.
        shared_ptr<string> connInfo_ {};
        // The content of the log entry.
        shared_ptr<string> content_ {};
        // The time when the log entry was generated. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The ID of the log entry.
        shared_ptr<int32_t> id_ {};
      };

      virtual bool empty() const override { return this->logRecords_ == nullptr; };
      // logRecords Field Functions 
      bool hasLogRecords() const { return this->logRecords_ != nullptr;};
      void deleteLogRecords() { this->logRecords_ = nullptr;};
      inline const vector<Items::LogRecords> & getLogRecords() const { DARABONBA_PTR_GET_CONST(logRecords_, vector<Items::LogRecords>) };
      inline vector<Items::LogRecords> getLogRecords() { DARABONBA_PTR_GET(logRecords_, vector<Items::LogRecords>) };
      inline Items& setLogRecords(const vector<Items::LogRecords> & logRecords) { DARABONBA_PTR_SET_VALUE(logRecords_, logRecords) };
      inline Items& setLogRecords(vector<Items::LogRecords> && logRecords) { DARABONBA_PTR_SET_RVALUE(logRecords_, logRecords) };


    protected:
      shared_ptr<vector<Items::LogRecords>> logRecords_ {};
    };

    virtual bool empty() const override { return this->engine_ == nullptr
        && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeErrorLogRecordsResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeErrorLogRecordsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeErrorLogRecordsResponseBody::Items) };
    inline DescribeErrorLogRecordsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeErrorLogRecordsResponseBody::Items) };
    inline DescribeErrorLogRecordsResponseBody& setItems(const DescribeErrorLogRecordsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeErrorLogRecordsResponseBody& setItems(DescribeErrorLogRecordsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeErrorLogRecordsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeErrorLogRecordsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeErrorLogRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeErrorLogRecordsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The database engine.
    shared_ptr<string> engine_ {};
    // Details about the log entries returned.
    shared_ptr<DescribeErrorLogRecordsResponseBody::Items> items_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
