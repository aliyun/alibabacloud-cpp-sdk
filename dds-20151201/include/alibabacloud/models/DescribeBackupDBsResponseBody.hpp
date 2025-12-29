// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPDBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPDBSRESPONSEBODY_HPP_
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
  class DescribeBackupDBsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupDBsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupDBsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBackupDBsResponseBody() = default ;
    DescribeBackupDBsResponseBody(const DescribeBackupDBsResponseBody &) = default ;
    DescribeBackupDBsResponseBody(DescribeBackupDBsResponseBody &&) = default ;
    DescribeBackupDBsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupDBsResponseBody() = default ;
    DescribeBackupDBsResponseBody& operator=(const DescribeBackupDBsResponseBody &) = default ;
    DescribeBackupDBsResponseBody& operator=(DescribeBackupDBsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Databases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Databases& obj) { 
        DARABONBA_PTR_TO_JSON(Database, database_);
      };
      friend void from_json(const Darabonba::Json& j, Databases& obj) { 
        DARABONBA_PTR_FROM_JSON(Database, database_);
      };
      Databases() = default ;
      Databases(const Databases &) = default ;
      Databases(Databases &&) = default ;
      Databases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Databases() = default ;
      Databases& operator=(const Databases &) = default ;
      Databases& operator=(Databases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Database : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Database& obj) { 
          DARABONBA_PTR_TO_JSON(DBName, DBName_);
        };
        friend void from_json(const Darabonba::Json& j, Database& obj) { 
          DARABONBA_PTR_FROM_JSON(DBName, DBName_);
        };
        Database() = default ;
        Database(const Database &) = default ;
        Database(Database &&) = default ;
        Database(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Database() = default ;
        Database& operator=(const Database &) = default ;
        Database& operator=(Database &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DBName_ == nullptr; };
        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline Database& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


      protected:
        // The name of the database.
        shared_ptr<string> DBName_ {};
      };

      virtual bool empty() const override { return this->database_ == nullptr; };
      // database Field Functions 
      bool hasDatabase() const { return this->database_ != nullptr;};
      void deleteDatabase() { this->database_ = nullptr;};
      inline const vector<Databases::Database> & getDatabase() const { DARABONBA_PTR_GET_CONST(database_, vector<Databases::Database>) };
      inline vector<Databases::Database> getDatabase() { DARABONBA_PTR_GET(database_, vector<Databases::Database>) };
      inline Databases& setDatabase(const vector<Databases::Database> & database) { DARABONBA_PTR_SET_VALUE(database_, database) };
      inline Databases& setDatabase(vector<Databases::Database> && database) { DARABONBA_PTR_SET_RVALUE(database_, database) };


    protected:
      shared_ptr<vector<Databases::Database>> database_ {};
    };

    virtual bool empty() const override { return this->databases_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const DescribeBackupDBsResponseBody::Databases & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, DescribeBackupDBsResponseBody::Databases) };
    inline DescribeBackupDBsResponseBody::Databases getDatabases() { DARABONBA_PTR_GET(databases_, DescribeBackupDBsResponseBody::Databases) };
    inline DescribeBackupDBsResponseBody& setDatabases(const DescribeBackupDBsResponseBody::Databases & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline DescribeBackupDBsResponseBody& setDatabases(DescribeBackupDBsResponseBody::Databases && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBackupDBsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupDBsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupDBsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeBackupDBsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the databases.
    shared_ptr<DescribeBackupDBsResponseBody::Databases> databases_ {};
    // The page number of the page returned.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of returned databases.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
