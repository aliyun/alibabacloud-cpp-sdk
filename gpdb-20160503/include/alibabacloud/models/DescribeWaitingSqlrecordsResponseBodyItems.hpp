// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWAITINGSQLRECORDSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWAITINGSQLRECORDSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeWaitingSQLRecordsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWaitingSQLRecordsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(PID, PID_);
      DARABONBA_PTR_TO_JSON(SQLStmt, SQLStmt_);
      DARABONBA_PTR_TO_JSON(SessionID, sessionID_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(User, user_);
      DARABONBA_PTR_TO_JSON(WaitingTime, waitingTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWaitingSQLRecordsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(PID, PID_);
      DARABONBA_PTR_FROM_JSON(SQLStmt, SQLStmt_);
      DARABONBA_PTR_FROM_JSON(SessionID, sessionID_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(User, user_);
      DARABONBA_PTR_FROM_JSON(WaitingTime, waitingTime_);
    };
    DescribeWaitingSQLRecordsResponseBodyItems() = default ;
    DescribeWaitingSQLRecordsResponseBodyItems(const DescribeWaitingSQLRecordsResponseBodyItems &) = default ;
    DescribeWaitingSQLRecordsResponseBodyItems(DescribeWaitingSQLRecordsResponseBodyItems &&) = default ;
    DescribeWaitingSQLRecordsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWaitingSQLRecordsResponseBodyItems() = default ;
    DescribeWaitingSQLRecordsResponseBodyItems& operator=(const DescribeWaitingSQLRecordsResponseBodyItems &) = default ;
    DescribeWaitingSQLRecordsResponseBodyItems& operator=(DescribeWaitingSQLRecordsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->database_ != nullptr
        && this->PID_ != nullptr && this->SQLStmt_ != nullptr && this->sessionID_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr
        && this->user_ != nullptr && this->waitingTime_ != nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeWaitingSQLRecordsResponseBodyItems& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // PID Field Functions 
    bool hasPID() const { return this->PID_ != nullptr;};
    void deletePID() { this->PID_ = nullptr;};
    inline string PID() const { DARABONBA_PTR_GET_DEFAULT(PID_, "") };
    inline DescribeWaitingSQLRecordsResponseBodyItems& setPID(string PID) { DARABONBA_PTR_SET_VALUE(PID_, PID) };


    // SQLStmt Field Functions 
    bool hasSQLStmt() const { return this->SQLStmt_ != nullptr;};
    void deleteSQLStmt() { this->SQLStmt_ = nullptr;};
    inline string SQLStmt() const { DARABONBA_PTR_GET_DEFAULT(SQLStmt_, "") };
    inline DescribeWaitingSQLRecordsResponseBodyItems& setSQLStmt(string SQLStmt) { DARABONBA_PTR_SET_VALUE(SQLStmt_, SQLStmt) };


    // sessionID Field Functions 
    bool hasSessionID() const { return this->sessionID_ != nullptr;};
    void deleteSessionID() { this->sessionID_ = nullptr;};
    inline string sessionID() const { DARABONBA_PTR_GET_DEFAULT(sessionID_, "") };
    inline DescribeWaitingSQLRecordsResponseBodyItems& setSessionID(string sessionID) { DARABONBA_PTR_SET_VALUE(sessionID_, sessionID) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeWaitingSQLRecordsResponseBodyItems& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeWaitingSQLRecordsResponseBodyItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeWaitingSQLRecordsResponseBodyItems& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    // waitingTime Field Functions 
    bool hasWaitingTime() const { return this->waitingTime_ != nullptr;};
    void deleteWaitingTime() { this->waitingTime_ = nullptr;};
    inline int64_t waitingTime() const { DARABONBA_PTR_GET_DEFAULT(waitingTime_, 0L) };
    inline DescribeWaitingSQLRecordsResponseBodyItems& setWaitingTime(int64_t waitingTime) { DARABONBA_PTR_SET_VALUE(waitingTime_, waitingTime) };


  protected:
    // The name of the database.
    std::shared_ptr<string> database_ = nullptr;
    // The ID of the process that uniquely identifies the query.
    std::shared_ptr<string> PID_ = nullptr;
    // The SQL statement of the query.
    std::shared_ptr<string> SQLStmt_ = nullptr;
    // The ID of the session that contains the query.
    std::shared_ptr<string> sessionID_ = nullptr;
    // The start time of the query. This value is in the timestamp format. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The waiting state of the query. Valid values:
    // 
    // *   **LockWaiting**
    // *   **ResourceWaiting**
    std::shared_ptr<string> status_ = nullptr;
    // The database account that is used to perform the query.
    std::shared_ptr<string> user_ = nullptr;
    // The waiting period of the query. Unit: milliseconds.
    std::shared_ptr<int64_t> waitingTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
