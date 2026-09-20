// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeBackupPlanConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlanConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FullBackupCycle, fullBackupCycle_);
      DARABONBA_PTR_TO_JSON(MinHFileBackupCount, minHFileBackupCount_);
      DARABONBA_PTR_TO_JSON(NextFullBackupDate, nextFullBackupDate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlanConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FullBackupCycle, fullBackupCycle_);
      DARABONBA_PTR_FROM_JSON(MinHFileBackupCount, minHFileBackupCount_);
      DARABONBA_PTR_FROM_JSON(NextFullBackupDate, nextFullBackupDate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    DescribeBackupPlanConfigResponseBody() = default ;
    DescribeBackupPlanConfigResponseBody(const DescribeBackupPlanConfigResponseBody &) = default ;
    DescribeBackupPlanConfigResponseBody(DescribeBackupPlanConfigResponseBody &&) = default ;
    DescribeBackupPlanConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlanConfigResponseBody() = default ;
    DescribeBackupPlanConfigResponseBody& operator=(const DescribeBackupPlanConfigResponseBody &) = default ;
    DescribeBackupPlanConfigResponseBody& operator=(DescribeBackupPlanConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tables& obj) { 
        DARABONBA_PTR_TO_JSON(Table, table_);
      };
      friend void from_json(const Darabonba::Json& j, Tables& obj) { 
        DARABONBA_PTR_FROM_JSON(Table, table_);
      };
      Tables() = default ;
      Tables(const Tables &) = default ;
      Tables(Tables &&) = default ;
      Tables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tables() = default ;
      Tables& operator=(const Tables &) = default ;
      Tables& operator=(Tables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->table_ == nullptr; };
      // table Field Functions 
      bool hasTable() const { return this->table_ != nullptr;};
      void deleteTable() { this->table_ = nullptr;};
      inline const vector<string> & getTable() const { DARABONBA_PTR_GET_CONST(table_, vector<string>) };
      inline vector<string> getTable() { DARABONBA_PTR_GET(table_, vector<string>) };
      inline Tables& setTable(const vector<string> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
      inline Tables& setTable(vector<string> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


    protected:
      shared_ptr<vector<string>> table_ {};
    };

    virtual bool empty() const override { return this->fullBackupCycle_ == nullptr
        && this->minHFileBackupCount_ == nullptr && this->nextFullBackupDate_ == nullptr && this->requestId_ == nullptr && this->tables_ == nullptr; };
    // fullBackupCycle Field Functions 
    bool hasFullBackupCycle() const { return this->fullBackupCycle_ != nullptr;};
    void deleteFullBackupCycle() { this->fullBackupCycle_ = nullptr;};
    inline int32_t getFullBackupCycle() const { DARABONBA_PTR_GET_DEFAULT(fullBackupCycle_, 0) };
    inline DescribeBackupPlanConfigResponseBody& setFullBackupCycle(int32_t fullBackupCycle) { DARABONBA_PTR_SET_VALUE(fullBackupCycle_, fullBackupCycle) };


    // minHFileBackupCount Field Functions 
    bool hasMinHFileBackupCount() const { return this->minHFileBackupCount_ != nullptr;};
    void deleteMinHFileBackupCount() { this->minHFileBackupCount_ = nullptr;};
    inline int32_t getMinHFileBackupCount() const { DARABONBA_PTR_GET_DEFAULT(minHFileBackupCount_, 0) };
    inline DescribeBackupPlanConfigResponseBody& setMinHFileBackupCount(int32_t minHFileBackupCount) { DARABONBA_PTR_SET_VALUE(minHFileBackupCount_, minHFileBackupCount) };


    // nextFullBackupDate Field Functions 
    bool hasNextFullBackupDate() const { return this->nextFullBackupDate_ != nullptr;};
    void deleteNextFullBackupDate() { this->nextFullBackupDate_ = nullptr;};
    inline string getNextFullBackupDate() const { DARABONBA_PTR_GET_DEFAULT(nextFullBackupDate_, "") };
    inline DescribeBackupPlanConfigResponseBody& setNextFullBackupDate(string nextFullBackupDate) { DARABONBA_PTR_SET_VALUE(nextFullBackupDate_, nextFullBackupDate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupPlanConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const DescribeBackupPlanConfigResponseBody::Tables & getTables() const { DARABONBA_PTR_GET_CONST(tables_, DescribeBackupPlanConfigResponseBody::Tables) };
    inline DescribeBackupPlanConfigResponseBody::Tables getTables() { DARABONBA_PTR_GET(tables_, DescribeBackupPlanConfigResponseBody::Tables) };
    inline DescribeBackupPlanConfigResponseBody& setTables(const DescribeBackupPlanConfigResponseBody::Tables & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline DescribeBackupPlanConfigResponseBody& setTables(DescribeBackupPlanConfigResponseBody::Tables && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    // The full backup cycle.
    shared_ptr<int32_t> fullBackupCycle_ {};
    // The number of full backups to retain.
    shared_ptr<int32_t> minHFileBackupCount_ {};
    // The date of the next full backup.
    shared_ptr<string> nextFullBackupDate_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeBackupPlanConfigResponseBody::Tables> tables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
