// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEERRORLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEERRORLOGSRESPONSEBODY_HPP_
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
  class DescribeErrorLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeErrorLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeErrorLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeErrorLogsResponseBody() = default ;
    DescribeErrorLogsResponseBody(const DescribeErrorLogsResponseBody &) = default ;
    DescribeErrorLogsResponseBody(DescribeErrorLogsResponseBody &&) = default ;
    DescribeErrorLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeErrorLogsResponseBody() = default ;
    DescribeErrorLogsResponseBody& operator=(const DescribeErrorLogsResponseBody &) = default ;
    DescribeErrorLogsResponseBody& operator=(DescribeErrorLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorLog, errorLog_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorLog, errorLog_);
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
      class ErrorLog : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErrorLog& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Database, database_);
          DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
          DARABONBA_PTR_TO_JSON(User, user_);
          DARABONBA_PTR_TO_JSON(UserIp, userIp_);
        };
        friend void from_json(const Darabonba::Json& j, ErrorLog& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Database, database_);
          DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
          DARABONBA_PTR_FROM_JSON(User, user_);
          DARABONBA_PTR_FROM_JSON(UserIp, userIp_);
        };
        ErrorLog() = default ;
        ErrorLog(const ErrorLog &) = default ;
        ErrorLog(ErrorLog &&) = default ;
        ErrorLog(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErrorLog() = default ;
        ErrorLog& operator=(const ErrorLog &) = default ;
        ErrorLog& operator=(ErrorLog &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->database_ == nullptr && this->errorInfo_ == nullptr && this->user_ == nullptr && this->userIp_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ErrorLog& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // database Field Functions 
        bool hasDatabase() const { return this->database_ != nullptr;};
        void deleteDatabase() { this->database_ = nullptr;};
        inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
        inline ErrorLog& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


        // errorInfo Field Functions 
        bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
        void deleteErrorInfo() { this->errorInfo_ = nullptr;};
        inline string getErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
        inline ErrorLog& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


        // user Field Functions 
        bool hasUser() const { return this->user_ != nullptr;};
        void deleteUser() { this->user_ = nullptr;};
        inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
        inline ErrorLog& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


        // userIp Field Functions 
        bool hasUserIp() const { return this->userIp_ != nullptr;};
        void deleteUserIp() { this->userIp_ = nullptr;};
        inline string getUserIp() const { DARABONBA_PTR_GET_DEFAULT(userIp_, "") };
        inline ErrorLog& setUserIp(string userIp) { DARABONBA_PTR_SET_VALUE(userIp_, userIp) };


      protected:
        // The time when the error log entry was generated. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        shared_ptr<string> database_ {};
        // The error log information.
        shared_ptr<string> errorInfo_ {};
        shared_ptr<string> user_ {};
        shared_ptr<string> userIp_ {};
      };

      virtual bool empty() const override { return this->errorLog_ == nullptr; };
      // errorLog Field Functions 
      bool hasErrorLog() const { return this->errorLog_ != nullptr;};
      void deleteErrorLog() { this->errorLog_ = nullptr;};
      inline const vector<Items::ErrorLog> & getErrorLog() const { DARABONBA_PTR_GET_CONST(errorLog_, vector<Items::ErrorLog>) };
      inline vector<Items::ErrorLog> getErrorLog() { DARABONBA_PTR_GET(errorLog_, vector<Items::ErrorLog>) };
      inline Items& setErrorLog(const vector<Items::ErrorLog> & errorLog) { DARABONBA_PTR_SET_VALUE(errorLog_, errorLog) };
      inline Items& setErrorLog(vector<Items::ErrorLog> && errorLog) { DARABONBA_PTR_SET_RVALUE(errorLog_, errorLog) };


    protected:
      shared_ptr<vector<Items::ErrorLog>> errorLog_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeErrorLogsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeErrorLogsResponseBody::Items) };
    inline DescribeErrorLogsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeErrorLogsResponseBody::Items) };
    inline DescribeErrorLogsResponseBody& setItems(const DescribeErrorLogsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeErrorLogsResponseBody& setItems(DescribeErrorLogsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeErrorLogsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeErrorLogsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeErrorLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeErrorLogsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // Details about the log entries returned.
    shared_ptr<DescribeErrorLogsResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of error logs on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
