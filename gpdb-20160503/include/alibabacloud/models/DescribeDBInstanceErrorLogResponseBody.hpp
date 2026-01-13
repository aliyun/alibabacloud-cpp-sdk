// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEERRORLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEERRORLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceErrorLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceErrorLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceErrorLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDBInstanceErrorLogResponseBody() = default ;
    DescribeDBInstanceErrorLogResponseBody(const DescribeDBInstanceErrorLogResponseBody &) = default ;
    DescribeDBInstanceErrorLogResponseBody(DescribeDBInstanceErrorLogResponseBody &&) = default ;
    DescribeDBInstanceErrorLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceErrorLogResponseBody() = default ;
    DescribeDBInstanceErrorLogResponseBody& operator=(const DescribeDBInstanceErrorLogResponseBody &) = default ;
    DescribeDBInstanceErrorLogResponseBody& operator=(DescribeDBInstanceErrorLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Database, database_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(LogContext, logContext_);
        DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
        DARABONBA_PTR_TO_JSON(Time, time_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Database, database_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(LogContext, logContext_);
        DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
        DARABONBA_PTR_FROM_JSON(User, user_);
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
      virtual bool empty() const override { return this->database_ == nullptr
        && this->host_ == nullptr && this->logContext_ == nullptr && this->logLevel_ == nullptr && this->time_ == nullptr && this->user_ == nullptr; };
      // database Field Functions 
      bool hasDatabase() const { return this->database_ != nullptr;};
      void deleteDatabase() { this->database_ = nullptr;};
      inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
      inline Items& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline Items& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // logContext Field Functions 
      bool hasLogContext() const { return this->logContext_ != nullptr;};
      void deleteLogContext() { this->logContext_ = nullptr;};
      inline string getLogContext() const { DARABONBA_PTR_GET_DEFAULT(logContext_, "") };
      inline Items& setLogContext(string logContext) { DARABONBA_PTR_SET_VALUE(logContext_, logContext) };


      // logLevel Field Functions 
      bool hasLogLevel() const { return this->logLevel_ != nullptr;};
      void deleteLogLevel() { this->logLevel_ = nullptr;};
      inline string getLogLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, "") };
      inline Items& setLogLevel(string logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline Items& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Items& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // The name of the database.
      shared_ptr<string> database_ {};
      // This parameter is not supported.
      shared_ptr<string> host_ {};
      // The content of the error log.
      shared_ptr<string> logContext_ {};
      // The level of the queried log.
      shared_ptr<string> logLevel_ {};
      // The time when the log was generated. The time is displayed in UTC.
      shared_ptr<int64_t> time_ {};
      // The name of the database account.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDBInstanceErrorLogResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDBInstanceErrorLogResponseBody::Items>) };
    inline vector<DescribeDBInstanceErrorLogResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeDBInstanceErrorLogResponseBody::Items>) };
    inline DescribeDBInstanceErrorLogResponseBody& setItems(const vector<DescribeDBInstanceErrorLogResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstanceErrorLogResponseBody& setItems(vector<DescribeDBInstanceErrorLogResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBInstanceErrorLogResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceErrorLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDBInstanceErrorLogResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The content of the error log.
    shared_ptr<vector<DescribeDBInstanceErrorLogResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
