// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWAITINGSQLINFORESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWAITINGSQLINFORESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeWaitingSQLInfoResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWaitingSQLInfoResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeWaitingSQLInfoResponseBodyItems& obj) { 
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
    DescribeWaitingSQLInfoResponseBodyItems() = default ;
    DescribeWaitingSQLInfoResponseBodyItems(const DescribeWaitingSQLInfoResponseBodyItems &) = default ;
    DescribeWaitingSQLInfoResponseBodyItems(DescribeWaitingSQLInfoResponseBodyItems &&) = default ;
    DescribeWaitingSQLInfoResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWaitingSQLInfoResponseBodyItems() = default ;
    DescribeWaitingSQLInfoResponseBodyItems& operator=(const DescribeWaitingSQLInfoResponseBodyItems &) = default ;
    DescribeWaitingSQLInfoResponseBodyItems& operator=(DescribeWaitingSQLInfoResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->application_ != nullptr
        && this->blockedByApplication_ != nullptr && this->blockedByPID_ != nullptr && this->blockedBySQLStmt_ != nullptr && this->blockedByUser_ != nullptr && this->grantLocks_ != nullptr
        && this->notGrantLocks_ != nullptr && this->PID_ != nullptr && this->SQLStmt_ != nullptr && this->user_ != nullptr; };
    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline string application() const { DARABONBA_PTR_GET_DEFAULT(application_, "") };
    inline DescribeWaitingSQLInfoResponseBodyItems& setApplication(string application) { DARABONBA_PTR_SET_VALUE(application_, application) };


    // blockedByApplication Field Functions 
    bool hasBlockedByApplication() const { return this->blockedByApplication_ != nullptr;};
    void deleteBlockedByApplication() { this->blockedByApplication_ = nullptr;};
    inline string blockedByApplication() const { DARABONBA_PTR_GET_DEFAULT(blockedByApplication_, "") };
    inline DescribeWaitingSQLInfoResponseBodyItems& setBlockedByApplication(string blockedByApplication) { DARABONBA_PTR_SET_VALUE(blockedByApplication_, blockedByApplication) };


    // blockedByPID Field Functions 
    bool hasBlockedByPID() const { return this->blockedByPID_ != nullptr;};
    void deleteBlockedByPID() { this->blockedByPID_ = nullptr;};
    inline string blockedByPID() const { DARABONBA_PTR_GET_DEFAULT(blockedByPID_, "") };
    inline DescribeWaitingSQLInfoResponseBodyItems& setBlockedByPID(string blockedByPID) { DARABONBA_PTR_SET_VALUE(blockedByPID_, blockedByPID) };


    // blockedBySQLStmt Field Functions 
    bool hasBlockedBySQLStmt() const { return this->blockedBySQLStmt_ != nullptr;};
    void deleteBlockedBySQLStmt() { this->blockedBySQLStmt_ = nullptr;};
    inline string blockedBySQLStmt() const { DARABONBA_PTR_GET_DEFAULT(blockedBySQLStmt_, "") };
    inline DescribeWaitingSQLInfoResponseBodyItems& setBlockedBySQLStmt(string blockedBySQLStmt) { DARABONBA_PTR_SET_VALUE(blockedBySQLStmt_, blockedBySQLStmt) };


    // blockedByUser Field Functions 
    bool hasBlockedByUser() const { return this->blockedByUser_ != nullptr;};
    void deleteBlockedByUser() { this->blockedByUser_ = nullptr;};
    inline string blockedByUser() const { DARABONBA_PTR_GET_DEFAULT(blockedByUser_, "") };
    inline DescribeWaitingSQLInfoResponseBodyItems& setBlockedByUser(string blockedByUser) { DARABONBA_PTR_SET_VALUE(blockedByUser_, blockedByUser) };


    // grantLocks Field Functions 
    bool hasGrantLocks() const { return this->grantLocks_ != nullptr;};
    void deleteGrantLocks() { this->grantLocks_ = nullptr;};
    inline string grantLocks() const { DARABONBA_PTR_GET_DEFAULT(grantLocks_, "") };
    inline DescribeWaitingSQLInfoResponseBodyItems& setGrantLocks(string grantLocks) { DARABONBA_PTR_SET_VALUE(grantLocks_, grantLocks) };


    // notGrantLocks Field Functions 
    bool hasNotGrantLocks() const { return this->notGrantLocks_ != nullptr;};
    void deleteNotGrantLocks() { this->notGrantLocks_ = nullptr;};
    inline string notGrantLocks() const { DARABONBA_PTR_GET_DEFAULT(notGrantLocks_, "") };
    inline DescribeWaitingSQLInfoResponseBodyItems& setNotGrantLocks(string notGrantLocks) { DARABONBA_PTR_SET_VALUE(notGrantLocks_, notGrantLocks) };


    // PID Field Functions 
    bool hasPID() const { return this->PID_ != nullptr;};
    void deletePID() { this->PID_ = nullptr;};
    inline string PID() const { DARABONBA_PTR_GET_DEFAULT(PID_, "") };
    inline DescribeWaitingSQLInfoResponseBodyItems& setPID(string PID) { DARABONBA_PTR_SET_VALUE(PID_, PID) };


    // SQLStmt Field Functions 
    bool hasSQLStmt() const { return this->SQLStmt_ != nullptr;};
    void deleteSQLStmt() { this->SQLStmt_ = nullptr;};
    inline string SQLStmt() const { DARABONBA_PTR_GET_DEFAULT(SQLStmt_, "") };
    inline DescribeWaitingSQLInfoResponseBodyItems& setSQLStmt(string SQLStmt) { DARABONBA_PTR_SET_VALUE(SQLStmt_, SQLStmt) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeWaitingSQLInfoResponseBodyItems& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The application that sent the query.
    std::shared_ptr<string> application_ = nullptr;
    // The application that sent the blocking query.
    std::shared_ptr<string> blockedByApplication_ = nullptr;
    // The process ID of the blocking query.
    std::shared_ptr<string> blockedByPID_ = nullptr;
    // The SQL statement of the blocking query.
    std::shared_ptr<string> blockedBySQLStmt_ = nullptr;
    // The database account that is used to perform the blocking query.
    std::shared_ptr<string> blockedByUser_ = nullptr;
    // The authorized locks.
    std::shared_ptr<string> grantLocks_ = nullptr;
    // The unauthorized locks.
    std::shared_ptr<string> notGrantLocks_ = nullptr;
    // The ID of the process that uniquely identifies the query.
    std::shared_ptr<string> PID_ = nullptr;
    // The SQL statement of the query.
    std::shared_ptr<string> SQLStmt_ = nullptr;
    // The database account that is used to perform the query.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
