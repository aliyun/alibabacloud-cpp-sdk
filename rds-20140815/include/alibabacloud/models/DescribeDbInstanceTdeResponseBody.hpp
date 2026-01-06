// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETDERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETDERESPONSEBODY_HPP_
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
  class DescribeDBInstanceTDEResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceTDEResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TDEMode, TDEMode_);
      DARABONBA_PTR_TO_JSON(TDEStatus, TDEStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceTDEResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TDEMode, TDEMode_);
      DARABONBA_PTR_FROM_JSON(TDEStatus, TDEStatus_);
    };
    DescribeDBInstanceTDEResponseBody() = default ;
    DescribeDBInstanceTDEResponseBody(const DescribeDBInstanceTDEResponseBody &) = default ;
    DescribeDBInstanceTDEResponseBody(DescribeDBInstanceTDEResponseBody &&) = default ;
    DescribeDBInstanceTDEResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceTDEResponseBody() = default ;
    DescribeDBInstanceTDEResponseBody& operator=(const DescribeDBInstanceTDEResponseBody &) = default ;
    DescribeDBInstanceTDEResponseBody& operator=(DescribeDBInstanceTDEResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(TDEStatus, TDEStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Database& obj) { 
          DARABONBA_PTR_FROM_JSON(DBName, DBName_);
          DARABONBA_PTR_FROM_JSON(TDEStatus, TDEStatus_);
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
        virtual bool empty() const override { return this->DBName_ == nullptr
        && this->TDEStatus_ == nullptr; };
        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline Database& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


        // TDEStatus Field Functions 
        bool hasTDEStatus() const { return this->TDEStatus_ != nullptr;};
        void deleteTDEStatus() { this->TDEStatus_ = nullptr;};
        inline string getTDEStatus() const { DARABONBA_PTR_GET_DEFAULT(TDEStatus_, "") };
        inline Database& setTDEStatus(string TDEStatus) { DARABONBA_PTR_SET_VALUE(TDEStatus_, TDEStatus) };


      protected:
        // The name of the database.
        shared_ptr<string> DBName_ {};
        // The TDE status at the database level. Valid values:
        // 
        // *   **Enabled**
        // *   **Disabled**
        shared_ptr<string> TDEStatus_ {};
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
        && this->encryptionKey_ == nullptr && this->requestId_ == nullptr && this->TDEMode_ == nullptr && this->TDEStatus_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const DescribeDBInstanceTDEResponseBody::Databases & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, DescribeDBInstanceTDEResponseBody::Databases) };
    inline DescribeDBInstanceTDEResponseBody::Databases getDatabases() { DARABONBA_PTR_GET(databases_, DescribeDBInstanceTDEResponseBody::Databases) };
    inline DescribeDBInstanceTDEResponseBody& setDatabases(const DescribeDBInstanceTDEResponseBody::Databases & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline DescribeDBInstanceTDEResponseBody& setDatabases(DescribeDBInstanceTDEResponseBody::Databases && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string getEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline DescribeDBInstanceTDEResponseBody& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceTDEResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // TDEMode Field Functions 
    bool hasTDEMode() const { return this->TDEMode_ != nullptr;};
    void deleteTDEMode() { this->TDEMode_ = nullptr;};
    inline string getTDEMode() const { DARABONBA_PTR_GET_DEFAULT(TDEMode_, "") };
    inline DescribeDBInstanceTDEResponseBody& setTDEMode(string TDEMode) { DARABONBA_PTR_SET_VALUE(TDEMode_, TDEMode) };


    // TDEStatus Field Functions 
    bool hasTDEStatus() const { return this->TDEStatus_ != nullptr;};
    void deleteTDEStatus() { this->TDEStatus_ = nullptr;};
    inline string getTDEStatus() const { DARABONBA_PTR_GET_DEFAULT(TDEStatus_, "") };
    inline DescribeDBInstanceTDEResponseBody& setTDEStatus(string TDEStatus) { DARABONBA_PTR_SET_VALUE(TDEStatus_, TDEStatus) };


  protected:
    // The TDE status at the database level.
    // 
    // >  If your instance runs SQL Server 2019 SE or SQL Server EE, you can specify whether to enable TDE at the database level when you enable TDE at the instance level.
    shared_ptr<DescribeDBInstanceTDEResponseBody::Databases> databases_ {};
    // The ID of the custom key.
    shared_ptr<string> encryptionKey_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The method that is used to generate the key for TDE at the instance level. Valid values:
    // 
    // *   **Aliyun_Generate_Key**
    // *   **Customer_Provided_Key**
    // *   **Unknown**
    shared_ptr<string> TDEMode_ {};
    // The TDE status of the instance. Valid values:
    // 
    // *   **Enabled**
    // *   **Disabled**
    shared_ptr<string> TDEStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
