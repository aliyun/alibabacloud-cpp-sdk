// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVEDATAAUDITLOGRESPONSEBODYSENSITIVEDATAAUDITLOGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVEDATAAUDITLOGRESPONSEBODYSENSITIVEDATAAUDITLOGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList& obj) { 
      DARABONBA_PTR_TO_JSON(DbDisplayName, dbDisplayName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_TO_JSON(OpTime, opTime_);
      DARABONBA_PTR_TO_JSON(SensitiveDataLog, sensitiveDataLog_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList& obj) { 
      DARABONBA_PTR_FROM_JSON(DbDisplayName, dbDisplayName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(OpTime, opTime_);
      DARABONBA_PTR_FROM_JSON(SensitiveDataLog, sensitiveDataLog_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList() = default ;
    ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList(const ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList &) = default ;
    ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList(ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList &&) = default ;
    ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList() = default ;
    ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList& operator=(const ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList &) = default ;
    ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList& operator=(ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbDisplayName_ != nullptr
        && this->instanceId_ != nullptr && this->moduleName_ != nullptr && this->opTime_ != nullptr && this->sensitiveDataLog_ != nullptr && this->targetName_ != nullptr
        && this->userId_ != nullptr && this->userName_ != nullptr; };
    // dbDisplayName Field Functions 
    bool hasDbDisplayName() const { return this->dbDisplayName_ != nullptr;};
    void deleteDbDisplayName() { this->dbDisplayName_ = nullptr;};
    inline string dbDisplayName() const { DARABONBA_PTR_GET_DEFAULT(dbDisplayName_, "") };
    inline ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList& setDbDisplayName(string dbDisplayName) { DARABONBA_PTR_SET_VALUE(dbDisplayName_, dbDisplayName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // opTime Field Functions 
    bool hasOpTime() const { return this->opTime_ != nullptr;};
    void deleteOpTime() { this->opTime_ = nullptr;};
    inline string opTime() const { DARABONBA_PTR_GET_DEFAULT(opTime_, "") };
    inline ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList& setOpTime(string opTime) { DARABONBA_PTR_SET_VALUE(opTime_, opTime) };


    // sensitiveDataLog Field Functions 
    bool hasSensitiveDataLog() const { return this->sensitiveDataLog_ != nullptr;};
    void deleteSensitiveDataLog() { this->sensitiveDataLog_ = nullptr;};
    inline const vector<Models::ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog> & sensitiveDataLog() const { DARABONBA_PTR_GET_CONST(sensitiveDataLog_, vector<Models::ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog>) };
    inline vector<Models::ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog> sensitiveDataLog() { DARABONBA_PTR_GET(sensitiveDataLog_, vector<Models::ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog>) };
    inline ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList& setSensitiveDataLog(const vector<Models::ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog> & sensitiveDataLog) { DARABONBA_PTR_SET_VALUE(sensitiveDataLog_, sensitiveDataLog) };
    inline ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList& setSensitiveDataLog(vector<Models::ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog> && sensitiveDataLog) { DARABONBA_PTR_SET_RVALUE(sensitiveDataLog_, sensitiveDataLog) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The name of the database that stores the sensitive data.
    std::shared_ptr<string> dbDisplayName_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The name of the function module whose audit logs were queried.
    std::shared_ptr<string> moduleName_ = nullptr;
    // The time when the operation was performed. The time is in the yyyy-MM-DD HH:mm:ss format.
    std::shared_ptr<string> opTime_ = nullptr;
    // The logs for sensitive data.
    std::shared_ptr<vector<Models::ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog>> sensitiveDataLog_ = nullptr;
    // The details of the object on which the operation was performed. The value of this parameter is in one of the following formats:
    // 
    // *   Object name - object ID
    // *   Object name (object ID)
    std::shared_ptr<string> targetName_ = nullptr;
    // The user ID of the requester.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // The username of the requester.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
