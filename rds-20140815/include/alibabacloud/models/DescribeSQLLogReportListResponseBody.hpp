// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGREPORTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGREPORTLISTRESPONSEBODY_HPP_
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
  class DescribeSQLLogReportListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogReportListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogReportListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeSQLLogReportListResponseBody() = default ;
    DescribeSQLLogReportListResponseBody(const DescribeSQLLogReportListResponseBody &) = default ;
    DescribeSQLLogReportListResponseBody(DescribeSQLLogReportListResponseBody &&) = default ;
    DescribeSQLLogReportListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogReportListResponseBody() = default ;
    DescribeSQLLogReportListResponseBody& operator=(const DescribeSQLLogReportListResponseBody &) = default ;
    DescribeSQLLogReportListResponseBody& operator=(DescribeSQLLogReportListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Item, item_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Item, item_);
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
      class Item : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Item& obj) { 
          DARABONBA_PTR_TO_JSON(LatencyTopNItems, latencyTopNItems_);
          DARABONBA_PTR_TO_JSON(QPSTopNItems, QPSTopNItems_);
          DARABONBA_PTR_TO_JSON(ReportTime, reportTime_);
        };
        friend void from_json(const Darabonba::Json& j, Item& obj) { 
          DARABONBA_PTR_FROM_JSON(LatencyTopNItems, latencyTopNItems_);
          DARABONBA_PTR_FROM_JSON(QPSTopNItems, QPSTopNItems_);
          DARABONBA_PTR_FROM_JSON(ReportTime, reportTime_);
        };
        Item() = default ;
        Item(const Item &) = default ;
        Item(Item &&) = default ;
        Item(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Item() = default ;
        Item& operator=(const Item &) = default ;
        Item& operator=(Item &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class QPSTopNItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const QPSTopNItems& obj) { 
            DARABONBA_PTR_TO_JSON(QPSTopNItem, QPSTopNItem_);
          };
          friend void from_json(const Darabonba::Json& j, QPSTopNItems& obj) { 
            DARABONBA_PTR_FROM_JSON(QPSTopNItem, QPSTopNItem_);
          };
          QPSTopNItems() = default ;
          QPSTopNItems(const QPSTopNItems &) = default ;
          QPSTopNItems(QPSTopNItems &&) = default ;
          QPSTopNItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~QPSTopNItems() = default ;
          QPSTopNItems& operator=(const QPSTopNItems &) = default ;
          QPSTopNItems& operator=(QPSTopNItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class QPSTopNItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const QPSTopNItem& obj) { 
              DARABONBA_PTR_TO_JSON(SQLExecuteTimes, SQLExecuteTimes_);
              DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
            };
            friend void from_json(const Darabonba::Json& j, QPSTopNItem& obj) { 
              DARABONBA_PTR_FROM_JSON(SQLExecuteTimes, SQLExecuteTimes_);
              DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
            };
            QPSTopNItem() = default ;
            QPSTopNItem(const QPSTopNItem &) = default ;
            QPSTopNItem(QPSTopNItem &&) = default ;
            QPSTopNItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~QPSTopNItem() = default ;
            QPSTopNItem& operator=(const QPSTopNItem &) = default ;
            QPSTopNItem& operator=(QPSTopNItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->SQLExecuteTimes_ == nullptr
        && this->SQLText_ == nullptr; };
            // SQLExecuteTimes Field Functions 
            bool hasSQLExecuteTimes() const { return this->SQLExecuteTimes_ != nullptr;};
            void deleteSQLExecuteTimes() { this->SQLExecuteTimes_ = nullptr;};
            inline int64_t getSQLExecuteTimes() const { DARABONBA_PTR_GET_DEFAULT(SQLExecuteTimes_, 0L) };
            inline QPSTopNItem& setSQLExecuteTimes(int64_t SQLExecuteTimes) { DARABONBA_PTR_SET_VALUE(SQLExecuteTimes_, SQLExecuteTimes) };


            // SQLText Field Functions 
            bool hasSQLText() const { return this->SQLText_ != nullptr;};
            void deleteSQLText() { this->SQLText_ = nullptr;};
            inline string getSQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
            inline QPSTopNItem& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


          protected:
            // The number of times that the SQL statement is executed.
            shared_ptr<int64_t> SQLExecuteTimes_ {};
            // The SQL statement.
            // 
            // >  Only the first 128 characters of the SQL statement are returned. In addition, only the SQL statements that take more than 5 ms to execute are returned.
            shared_ptr<string> SQLText_ {};
          };

          virtual bool empty() const override { return this->QPSTopNItem_ == nullptr; };
          // QPSTopNItem Field Functions 
          bool hasQPSTopNItem() const { return this->QPSTopNItem_ != nullptr;};
          void deleteQPSTopNItem() { this->QPSTopNItem_ = nullptr;};
          inline const vector<QPSTopNItems::QPSTopNItem> & getQPSTopNItem() const { DARABONBA_PTR_GET_CONST(QPSTopNItem_, vector<QPSTopNItems::QPSTopNItem>) };
          inline vector<QPSTopNItems::QPSTopNItem> getQPSTopNItem() { DARABONBA_PTR_GET(QPSTopNItem_, vector<QPSTopNItems::QPSTopNItem>) };
          inline QPSTopNItems& setQPSTopNItem(const vector<QPSTopNItems::QPSTopNItem> & qPSTopNItem) { DARABONBA_PTR_SET_VALUE(QPSTopNItem_, qPSTopNItem) };
          inline QPSTopNItems& setQPSTopNItem(vector<QPSTopNItems::QPSTopNItem> && qPSTopNItem) { DARABONBA_PTR_SET_RVALUE(QPSTopNItem_, qPSTopNItem) };


        protected:
          shared_ptr<vector<QPSTopNItems::QPSTopNItem>> QPSTopNItem_ {};
        };

        class LatencyTopNItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LatencyTopNItems& obj) { 
            DARABONBA_PTR_TO_JSON(LatencyTopNItem, latencyTopNItem_);
          };
          friend void from_json(const Darabonba::Json& j, LatencyTopNItems& obj) { 
            DARABONBA_PTR_FROM_JSON(LatencyTopNItem, latencyTopNItem_);
          };
          LatencyTopNItems() = default ;
          LatencyTopNItems(const LatencyTopNItems &) = default ;
          LatencyTopNItems(LatencyTopNItems &&) = default ;
          LatencyTopNItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LatencyTopNItems() = default ;
          LatencyTopNItems& operator=(const LatencyTopNItems &) = default ;
          LatencyTopNItems& operator=(LatencyTopNItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class LatencyTopNItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LatencyTopNItem& obj) { 
              DARABONBA_PTR_TO_JSON(AvgLatency, avgLatency_);
              DARABONBA_PTR_TO_JSON(SQLExecuteTimes, SQLExecuteTimes_);
              DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
            };
            friend void from_json(const Darabonba::Json& j, LatencyTopNItem& obj) { 
              DARABONBA_PTR_FROM_JSON(AvgLatency, avgLatency_);
              DARABONBA_PTR_FROM_JSON(SQLExecuteTimes, SQLExecuteTimes_);
              DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
            };
            LatencyTopNItem() = default ;
            LatencyTopNItem(const LatencyTopNItem &) = default ;
            LatencyTopNItem(LatencyTopNItem &&) = default ;
            LatencyTopNItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LatencyTopNItem() = default ;
            LatencyTopNItem& operator=(const LatencyTopNItem &) = default ;
            LatencyTopNItem& operator=(LatencyTopNItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->avgLatency_ == nullptr
        && this->SQLExecuteTimes_ == nullptr && this->SQLText_ == nullptr; };
            // avgLatency Field Functions 
            bool hasAvgLatency() const { return this->avgLatency_ != nullptr;};
            void deleteAvgLatency() { this->avgLatency_ = nullptr;};
            inline int64_t getAvgLatency() const { DARABONBA_PTR_GET_DEFAULT(avgLatency_, 0L) };
            inline LatencyTopNItem& setAvgLatency(int64_t avgLatency) { DARABONBA_PTR_SET_VALUE(avgLatency_, avgLatency) };


            // SQLExecuteTimes Field Functions 
            bool hasSQLExecuteTimes() const { return this->SQLExecuteTimes_ != nullptr;};
            void deleteSQLExecuteTimes() { this->SQLExecuteTimes_ = nullptr;};
            inline int64_t getSQLExecuteTimes() const { DARABONBA_PTR_GET_DEFAULT(SQLExecuteTimes_, 0L) };
            inline LatencyTopNItem& setSQLExecuteTimes(int64_t SQLExecuteTimes) { DARABONBA_PTR_SET_VALUE(SQLExecuteTimes_, SQLExecuteTimes) };


            // SQLText Field Functions 
            bool hasSQLText() const { return this->SQLText_ != nullptr;};
            void deleteSQLText() { this->SQLText_ = nullptr;};
            inline string getSQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
            inline LatencyTopNItem& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


          protected:
            // The average time that is required to execute the SQL statement. Unit: milliseconds.
            shared_ptr<int64_t> avgLatency_ {};
            // The number of times that the SQL statement is executed.
            shared_ptr<int64_t> SQLExecuteTimes_ {};
            // The SQL statement.
            // 
            // >  Only the first 128 characters of the SQL statement are returned. In addition, only the SQL statements that take more than 100 ms to execute are returned.
            shared_ptr<string> SQLText_ {};
          };

          virtual bool empty() const override { return this->latencyTopNItem_ == nullptr; };
          // latencyTopNItem Field Functions 
          bool hasLatencyTopNItem() const { return this->latencyTopNItem_ != nullptr;};
          void deleteLatencyTopNItem() { this->latencyTopNItem_ = nullptr;};
          inline const vector<LatencyTopNItems::LatencyTopNItem> & getLatencyTopNItem() const { DARABONBA_PTR_GET_CONST(latencyTopNItem_, vector<LatencyTopNItems::LatencyTopNItem>) };
          inline vector<LatencyTopNItems::LatencyTopNItem> getLatencyTopNItem() { DARABONBA_PTR_GET(latencyTopNItem_, vector<LatencyTopNItems::LatencyTopNItem>) };
          inline LatencyTopNItems& setLatencyTopNItem(const vector<LatencyTopNItems::LatencyTopNItem> & latencyTopNItem) { DARABONBA_PTR_SET_VALUE(latencyTopNItem_, latencyTopNItem) };
          inline LatencyTopNItems& setLatencyTopNItem(vector<LatencyTopNItems::LatencyTopNItem> && latencyTopNItem) { DARABONBA_PTR_SET_RVALUE(latencyTopNItem_, latencyTopNItem) };


        protected:
          shared_ptr<vector<LatencyTopNItems::LatencyTopNItem>> latencyTopNItem_ {};
        };

        virtual bool empty() const override { return this->latencyTopNItems_ == nullptr
        && this->QPSTopNItems_ == nullptr && this->reportTime_ == nullptr; };
        // latencyTopNItems Field Functions 
        bool hasLatencyTopNItems() const { return this->latencyTopNItems_ != nullptr;};
        void deleteLatencyTopNItems() { this->latencyTopNItems_ = nullptr;};
        inline const Item::LatencyTopNItems & getLatencyTopNItems() const { DARABONBA_PTR_GET_CONST(latencyTopNItems_, Item::LatencyTopNItems) };
        inline Item::LatencyTopNItems getLatencyTopNItems() { DARABONBA_PTR_GET(latencyTopNItems_, Item::LatencyTopNItems) };
        inline Item& setLatencyTopNItems(const Item::LatencyTopNItems & latencyTopNItems) { DARABONBA_PTR_SET_VALUE(latencyTopNItems_, latencyTopNItems) };
        inline Item& setLatencyTopNItems(Item::LatencyTopNItems && latencyTopNItems) { DARABONBA_PTR_SET_RVALUE(latencyTopNItems_, latencyTopNItems) };


        // QPSTopNItems Field Functions 
        bool hasQPSTopNItems() const { return this->QPSTopNItems_ != nullptr;};
        void deleteQPSTopNItems() { this->QPSTopNItems_ = nullptr;};
        inline const Item::QPSTopNItems & getQPSTopNItems() const { DARABONBA_PTR_GET_CONST(QPSTopNItems_, Item::QPSTopNItems) };
        inline Item::QPSTopNItems getQPSTopNItems() { DARABONBA_PTR_GET(QPSTopNItems_, Item::QPSTopNItems) };
        inline Item& setQPSTopNItems(const Item::QPSTopNItems & qPSTopNItems) { DARABONBA_PTR_SET_VALUE(QPSTopNItems_, qPSTopNItems) };
        inline Item& setQPSTopNItems(Item::QPSTopNItems && qPSTopNItems) { DARABONBA_PTR_SET_RVALUE(QPSTopNItems_, qPSTopNItems) };


        // reportTime Field Functions 
        bool hasReportTime() const { return this->reportTime_ != nullptr;};
        void deleteReportTime() { this->reportTime_ = nullptr;};
        inline string getReportTime() const { DARABONBA_PTR_GET_DEFAULT(reportTime_, "") };
        inline Item& setReportTime(string reportTime) { DARABONBA_PTR_SET_VALUE(reportTime_, reportTime) };


      protected:
        // An array that consists of SQL statements executed with the highest latency.
        shared_ptr<Item::LatencyTopNItems> latencyTopNItems_ {};
        // An array that consists of SQL statements executed the most frequently.
        shared_ptr<Item::QPSTopNItems> QPSTopNItems_ {};
        // The time when the report was generated. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> reportTime_ {};
      };

      virtual bool empty() const override { return this->item_ == nullptr; };
      // item Field Functions 
      bool hasItem() const { return this->item_ != nullptr;};
      void deleteItem() { this->item_ = nullptr;};
      inline const vector<Items::Item> & getItem() const { DARABONBA_PTR_GET_CONST(item_, vector<Items::Item>) };
      inline vector<Items::Item> getItem() { DARABONBA_PTR_GET(item_, vector<Items::Item>) };
      inline Items& setItem(const vector<Items::Item> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
      inline Items& setItem(vector<Items::Item> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    protected:
      shared_ptr<vector<Items::Item>> item_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeSQLLogReportListResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeSQLLogReportListResponseBody::Items) };
    inline DescribeSQLLogReportListResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeSQLLogReportListResponseBody::Items) };
    inline DescribeSQLLogReportListResponseBody& setItems(const DescribeSQLLogReportListResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSQLLogReportListResponseBody& setItems(DescribeSQLLogReportListResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSQLLogReportListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeSQLLogReportListResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSQLLogReportListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeSQLLogReportListResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // An array that consists of SQL log reports.
    shared_ptr<DescribeSQLLogReportListResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of SQL log reports on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
