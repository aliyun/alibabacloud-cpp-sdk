// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHANADATABASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHANADATABASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeHanaDatabasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHanaDatabasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HanaDatabases, hanaDatabases_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHanaDatabasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HanaDatabases, hanaDatabases_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHanaDatabasesResponseBody() = default ;
    DescribeHanaDatabasesResponseBody(const DescribeHanaDatabasesResponseBody &) = default ;
    DescribeHanaDatabasesResponseBody(DescribeHanaDatabasesResponseBody &&) = default ;
    DescribeHanaDatabasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHanaDatabasesResponseBody() = default ;
    DescribeHanaDatabasesResponseBody& operator=(const DescribeHanaDatabasesResponseBody &) = default ;
    DescribeHanaDatabasesResponseBody& operator=(DescribeHanaDatabasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HanaDatabases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HanaDatabases& obj) { 
        DARABONBA_PTR_TO_JSON(HanaDatabase, hanaDatabase_);
      };
      friend void from_json(const Darabonba::Json& j, HanaDatabases& obj) { 
        DARABONBA_PTR_FROM_JSON(HanaDatabase, hanaDatabase_);
      };
      HanaDatabases() = default ;
      HanaDatabases(const HanaDatabases &) = default ;
      HanaDatabases(HanaDatabases &&) = default ;
      HanaDatabases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HanaDatabases() = default ;
      HanaDatabases& operator=(const HanaDatabases &) = default ;
      HanaDatabases& operator=(HanaDatabases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HanaDatabase : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HanaDatabase& obj) { 
          DARABONBA_PTR_TO_JSON(ActiveStatus, activeStatus_);
          DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_TO_JSON(Detail, detail_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_TO_JSON(SqlPort, sqlPort_);
        };
        friend void from_json(const Darabonba::Json& j, HanaDatabase& obj) { 
          DARABONBA_PTR_FROM_JSON(ActiveStatus, activeStatus_);
          DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_FROM_JSON(Detail, detail_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_FROM_JSON(SqlPort, sqlPort_);
        };
        HanaDatabase() = default ;
        HanaDatabase(const HanaDatabase &) = default ;
        HanaDatabase(HanaDatabase &&) = default ;
        HanaDatabase(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HanaDatabase() = default ;
        HanaDatabase& operator=(const HanaDatabase &) = default ;
        HanaDatabase& operator=(HanaDatabase &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activeStatus_ == nullptr
        && this->databaseName_ == nullptr && this->detail_ == nullptr && this->host_ == nullptr && this->serviceName_ == nullptr && this->sqlPort_ == nullptr; };
        // activeStatus Field Functions 
        bool hasActiveStatus() const { return this->activeStatus_ != nullptr;};
        void deleteActiveStatus() { this->activeStatus_ = nullptr;};
        inline string getActiveStatus() const { DARABONBA_PTR_GET_DEFAULT(activeStatus_, "") };
        inline HanaDatabase& setActiveStatus(string activeStatus) { DARABONBA_PTR_SET_VALUE(activeStatus_, activeStatus) };


        // databaseName Field Functions 
        bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
        void deleteDatabaseName() { this->databaseName_ = nullptr;};
        inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
        inline HanaDatabase& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
        inline HanaDatabase& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline HanaDatabase& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
        inline HanaDatabase& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


        // sqlPort Field Functions 
        bool hasSqlPort() const { return this->sqlPort_ != nullptr;};
        void deleteSqlPort() { this->sqlPort_ = nullptr;};
        inline int32_t getSqlPort() const { DARABONBA_PTR_GET_DEFAULT(sqlPort_, 0) };
        inline HanaDatabase& setSqlPort(int32_t sqlPort) { DARABONBA_PTR_SET_VALUE(sqlPort_, sqlPort) };


      protected:
        // Indicates whether the database is started. Valid values:
        // 
        // *   **YES**: The database is started.
        // *   **NO**: The database is not started.
        shared_ptr<string> activeStatus_ {};
        // The database name.
        shared_ptr<string> databaseName_ {};
        // The detailed information.
        shared_ptr<string> detail_ {};
        // The hostname.
        shared_ptr<string> host_ {};
        // The service name.
        shared_ptr<string> serviceName_ {};
        // The port number.
        shared_ptr<int32_t> sqlPort_ {};
      };

      virtual bool empty() const override { return this->hanaDatabase_ == nullptr; };
      // hanaDatabase Field Functions 
      bool hasHanaDatabase() const { return this->hanaDatabase_ != nullptr;};
      void deleteHanaDatabase() { this->hanaDatabase_ = nullptr;};
      inline const vector<HanaDatabases::HanaDatabase> & getHanaDatabase() const { DARABONBA_PTR_GET_CONST(hanaDatabase_, vector<HanaDatabases::HanaDatabase>) };
      inline vector<HanaDatabases::HanaDatabase> getHanaDatabase() { DARABONBA_PTR_GET(hanaDatabase_, vector<HanaDatabases::HanaDatabase>) };
      inline HanaDatabases& setHanaDatabase(const vector<HanaDatabases::HanaDatabase> & hanaDatabase) { DARABONBA_PTR_SET_VALUE(hanaDatabase_, hanaDatabase) };
      inline HanaDatabases& setHanaDatabase(vector<HanaDatabases::HanaDatabase> && hanaDatabase) { DARABONBA_PTR_SET_RVALUE(hanaDatabase_, hanaDatabase) };


    protected:
      shared_ptr<vector<HanaDatabases::HanaDatabase>> hanaDatabase_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->hanaDatabases_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeHanaDatabasesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hanaDatabases Field Functions 
    bool hasHanaDatabases() const { return this->hanaDatabases_ != nullptr;};
    void deleteHanaDatabases() { this->hanaDatabases_ = nullptr;};
    inline const DescribeHanaDatabasesResponseBody::HanaDatabases & getHanaDatabases() const { DARABONBA_PTR_GET_CONST(hanaDatabases_, DescribeHanaDatabasesResponseBody::HanaDatabases) };
    inline DescribeHanaDatabasesResponseBody::HanaDatabases getHanaDatabases() { DARABONBA_PTR_GET(hanaDatabases_, DescribeHanaDatabasesResponseBody::HanaDatabases) };
    inline DescribeHanaDatabasesResponseBody& setHanaDatabases(const DescribeHanaDatabasesResponseBody::HanaDatabases & hanaDatabases) { DARABONBA_PTR_SET_VALUE(hanaDatabases_, hanaDatabases) };
    inline DescribeHanaDatabasesResponseBody& setHanaDatabases(DescribeHanaDatabasesResponseBody::HanaDatabases && hanaDatabases) { DARABONBA_PTR_SET_RVALUE(hanaDatabases_, hanaDatabases) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHanaDatabasesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHanaDatabasesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHanaDatabasesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHanaDatabasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeHanaDatabasesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeHanaDatabasesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The response code. The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The information about SAP HANA databases.
    shared_ptr<DescribeHanaDatabasesResponseBody::HanaDatabases> hanaDatabases_ {};
    // The returned message. If the request was successful, "successful" is returned. If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 99. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
