// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWAITINGSQLINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWAITINGSQLINFORESPONSEBODY_HPP_
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
  class DescribeWaitingSQLInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWaitingSQLInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWaitingSQLInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWaitingSQLInfoResponseBody() = default ;
    DescribeWaitingSQLInfoResponseBody(const DescribeWaitingSQLInfoResponseBody &) = default ;
    DescribeWaitingSQLInfoResponseBody(DescribeWaitingSQLInfoResponseBody &&) = default ;
    DescribeWaitingSQLInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWaitingSQLInfoResponseBody() = default ;
    DescribeWaitingSQLInfoResponseBody& operator=(const DescribeWaitingSQLInfoResponseBody &) = default ;
    DescribeWaitingSQLInfoResponseBody& operator=(DescribeWaitingSQLInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Application, application_);
        DARABONBA_PTR_TO_JSON(BlockedByApplication, blockedByApplication_);
        DARABONBA_PTR_TO_JSON(BlockedByPID, blockedByPID_);
        DARABONBA_PTR_TO_JSON(BlockedBySQLStmt, blockedBySQLStmt_);
        DARABONBA_PTR_TO_JSON(BlockedByUser, blockedByUser_);
        DARABONBA_PTR_TO_JSON(GrantLocks, grantLocks_);
        DARABONBA_PTR_TO_JSON(NotGrantLocks, notGrantLocks_);
        DARABONBA_PTR_TO_JSON(PID, PID_);
        DARABONBA_PTR_TO_JSON(SQLStmt, SQLStmt_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Application, application_);
        DARABONBA_PTR_FROM_JSON(BlockedByApplication, blockedByApplication_);
        DARABONBA_PTR_FROM_JSON(BlockedByPID, blockedByPID_);
        DARABONBA_PTR_FROM_JSON(BlockedBySQLStmt, blockedBySQLStmt_);
        DARABONBA_PTR_FROM_JSON(BlockedByUser, blockedByUser_);
        DARABONBA_PTR_FROM_JSON(GrantLocks, grantLocks_);
        DARABONBA_PTR_FROM_JSON(NotGrantLocks, notGrantLocks_);
        DARABONBA_PTR_FROM_JSON(PID, PID_);
        DARABONBA_PTR_FROM_JSON(SQLStmt, SQLStmt_);
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
      virtual bool empty() const override { return this->application_ == nullptr
        && this->blockedByApplication_ == nullptr && this->blockedByPID_ == nullptr && this->blockedBySQLStmt_ == nullptr && this->blockedByUser_ == nullptr && this->grantLocks_ == nullptr
        && this->notGrantLocks_ == nullptr && this->PID_ == nullptr && this->SQLStmt_ == nullptr && this->user_ == nullptr; };
      // application Field Functions 
      bool hasApplication() const { return this->application_ != nullptr;};
      void deleteApplication() { this->application_ = nullptr;};
      inline string getApplication() const { DARABONBA_PTR_GET_DEFAULT(application_, "") };
      inline Items& setApplication(string application) { DARABONBA_PTR_SET_VALUE(application_, application) };


      // blockedByApplication Field Functions 
      bool hasBlockedByApplication() const { return this->blockedByApplication_ != nullptr;};
      void deleteBlockedByApplication() { this->blockedByApplication_ = nullptr;};
      inline string getBlockedByApplication() const { DARABONBA_PTR_GET_DEFAULT(blockedByApplication_, "") };
      inline Items& setBlockedByApplication(string blockedByApplication) { DARABONBA_PTR_SET_VALUE(blockedByApplication_, blockedByApplication) };


      // blockedByPID Field Functions 
      bool hasBlockedByPID() const { return this->blockedByPID_ != nullptr;};
      void deleteBlockedByPID() { this->blockedByPID_ = nullptr;};
      inline string getBlockedByPID() const { DARABONBA_PTR_GET_DEFAULT(blockedByPID_, "") };
      inline Items& setBlockedByPID(string blockedByPID) { DARABONBA_PTR_SET_VALUE(blockedByPID_, blockedByPID) };


      // blockedBySQLStmt Field Functions 
      bool hasBlockedBySQLStmt() const { return this->blockedBySQLStmt_ != nullptr;};
      void deleteBlockedBySQLStmt() { this->blockedBySQLStmt_ = nullptr;};
      inline string getBlockedBySQLStmt() const { DARABONBA_PTR_GET_DEFAULT(blockedBySQLStmt_, "") };
      inline Items& setBlockedBySQLStmt(string blockedBySQLStmt) { DARABONBA_PTR_SET_VALUE(blockedBySQLStmt_, blockedBySQLStmt) };


      // blockedByUser Field Functions 
      bool hasBlockedByUser() const { return this->blockedByUser_ != nullptr;};
      void deleteBlockedByUser() { this->blockedByUser_ = nullptr;};
      inline string getBlockedByUser() const { DARABONBA_PTR_GET_DEFAULT(blockedByUser_, "") };
      inline Items& setBlockedByUser(string blockedByUser) { DARABONBA_PTR_SET_VALUE(blockedByUser_, blockedByUser) };


      // grantLocks Field Functions 
      bool hasGrantLocks() const { return this->grantLocks_ != nullptr;};
      void deleteGrantLocks() { this->grantLocks_ = nullptr;};
      inline string getGrantLocks() const { DARABONBA_PTR_GET_DEFAULT(grantLocks_, "") };
      inline Items& setGrantLocks(string grantLocks) { DARABONBA_PTR_SET_VALUE(grantLocks_, grantLocks) };


      // notGrantLocks Field Functions 
      bool hasNotGrantLocks() const { return this->notGrantLocks_ != nullptr;};
      void deleteNotGrantLocks() { this->notGrantLocks_ = nullptr;};
      inline string getNotGrantLocks() const { DARABONBA_PTR_GET_DEFAULT(notGrantLocks_, "") };
      inline Items& setNotGrantLocks(string notGrantLocks) { DARABONBA_PTR_SET_VALUE(notGrantLocks_, notGrantLocks) };


      // PID Field Functions 
      bool hasPID() const { return this->PID_ != nullptr;};
      void deletePID() { this->PID_ = nullptr;};
      inline string getPID() const { DARABONBA_PTR_GET_DEFAULT(PID_, "") };
      inline Items& setPID(string PID) { DARABONBA_PTR_SET_VALUE(PID_, PID) };


      // SQLStmt Field Functions 
      bool hasSQLStmt() const { return this->SQLStmt_ != nullptr;};
      void deleteSQLStmt() { this->SQLStmt_ = nullptr;};
      inline string getSQLStmt() const { DARABONBA_PTR_GET_DEFAULT(SQLStmt_, "") };
      inline Items& setSQLStmt(string SQLStmt) { DARABONBA_PTR_SET_VALUE(SQLStmt_, SQLStmt) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Items& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // The application that sent the query.
      shared_ptr<string> application_ {};
      // The application that sent the blocking query.
      shared_ptr<string> blockedByApplication_ {};
      // The process ID of the blocking query.
      shared_ptr<string> blockedByPID_ {};
      // The SQL statement of the blocking query.
      shared_ptr<string> blockedBySQLStmt_ {};
      // The database account that is used to perform the blocking query.
      shared_ptr<string> blockedByUser_ {};
      // The authorized locks.
      shared_ptr<string> grantLocks_ {};
      // The unauthorized locks.
      shared_ptr<string> notGrantLocks_ {};
      // The ID of the process that uniquely identifies the query.
      shared_ptr<string> PID_ {};
      // The SQL statement of the query.
      shared_ptr<string> SQLStmt_ {};
      // The database account that is used to perform the query.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->database_ == nullptr
        && this->items_ == nullptr && this->requestId_ == nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeWaitingSQLInfoResponseBody& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeWaitingSQLInfoResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeWaitingSQLInfoResponseBody::Items>) };
    inline vector<DescribeWaitingSQLInfoResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeWaitingSQLInfoResponseBody::Items>) };
    inline DescribeWaitingSQLInfoResponseBody& setItems(const vector<DescribeWaitingSQLInfoResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeWaitingSQLInfoResponseBody& setItems(vector<DescribeWaitingSQLInfoResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWaitingSQLInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The name of the database.
    shared_ptr<string> database_ {};
    // The queried lock-waiting query.
    shared_ptr<vector<DescribeWaitingSQLInfoResponseBody::Items>> items_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
