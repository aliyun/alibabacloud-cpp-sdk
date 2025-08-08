// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCELOGINAUDITLOGRESPONSEBODYINSTANCELOGINAUDITLOGLISTINSTANCELOGINAUDITLOG_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCELOGINAUDITLOGRESPONSEBODYINSTANCELOGINAUDITLOGLISTINSTANCELOGINAUDITLOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog& obj) { 
      DARABONBA_PTR_TO_JSON(DbUser, dbUser_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(OpTime, opTime_);
      DARABONBA_PTR_TO_JSON(RequestIp, requestIp_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog& obj) { 
      DARABONBA_PTR_FROM_JSON(DbUser, dbUser_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(OpTime, opTime_);
      DARABONBA_PTR_FROM_JSON(RequestIp, requestIp_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog() = default ;
    ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog(const ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog &) = default ;
    ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog(ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog &&) = default ;
    ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog() = default ;
    ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog& operator=(const ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog &) = default ;
    ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog& operator=(ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbUser_ != nullptr
        && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->opTime_ != nullptr && this->requestIp_ != nullptr && this->userId_ != nullptr
        && this->userName_ != nullptr; };
    // dbUser Field Functions 
    bool hasDbUser() const { return this->dbUser_ != nullptr;};
    void deleteDbUser() { this->dbUser_ = nullptr;};
    inline string dbUser() const { DARABONBA_PTR_GET_DEFAULT(dbUser_, "") };
    inline ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog& setDbUser(string dbUser) { DARABONBA_PTR_SET_VALUE(dbUser_, dbUser) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // opTime Field Functions 
    bool hasOpTime() const { return this->opTime_ != nullptr;};
    void deleteOpTime() { this->opTime_ = nullptr;};
    inline string opTime() const { DARABONBA_PTR_GET_DEFAULT(opTime_, "") };
    inline ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog& setOpTime(string opTime) { DARABONBA_PTR_SET_VALUE(opTime_, opTime) };


    // requestIp Field Functions 
    bool hasRequestIp() const { return this->requestIp_ != nullptr;};
    void deleteRequestIp() { this->requestIp_ = nullptr;};
    inline string requestIp() const { DARABONBA_PTR_GET_DEFAULT(requestIp_, "") };
    inline ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog& setRequestIp(string requestIp) { DARABONBA_PTR_SET_VALUE(requestIp_, requestIp) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The database account that is used to log on to the instance.
    std::shared_ptr<string> dbUser_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The time when the user performed an operation on the instance.
    std::shared_ptr<string> opTime_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> requestIp_ = nullptr;
    // The ID of the user.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // The alias of the user.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
