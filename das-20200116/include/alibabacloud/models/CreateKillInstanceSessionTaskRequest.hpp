// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKILLINSTANCESESSIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKILLINSTANCESESSIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class CreateKillInstanceSessionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKillInstanceSessionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbUser, dbUser_);
      DARABONBA_PTR_TO_JSON(DbUserPassword, dbUserPassword_);
      DARABONBA_PTR_TO_JSON(IgnoredUsers, ignoredUsers_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KillAllSessions, killAllSessions_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(SessionIds, sessionIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKillInstanceSessionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbUser, dbUser_);
      DARABONBA_PTR_FROM_JSON(DbUserPassword, dbUserPassword_);
      DARABONBA_PTR_FROM_JSON(IgnoredUsers, ignoredUsers_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KillAllSessions, killAllSessions_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(SessionIds, sessionIds_);
    };
    CreateKillInstanceSessionTaskRequest() = default ;
    CreateKillInstanceSessionTaskRequest(const CreateKillInstanceSessionTaskRequest &) = default ;
    CreateKillInstanceSessionTaskRequest(CreateKillInstanceSessionTaskRequest &&) = default ;
    CreateKillInstanceSessionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKillInstanceSessionTaskRequest() = default ;
    CreateKillInstanceSessionTaskRequest& operator=(const CreateKillInstanceSessionTaskRequest &) = default ;
    CreateKillInstanceSessionTaskRequest& operator=(CreateKillInstanceSessionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbUser_ != nullptr
        && this->dbUserPassword_ != nullptr && this->ignoredUsers_ != nullptr && this->instanceId_ != nullptr && this->killAllSessions_ != nullptr && this->nodeId_ != nullptr
        && this->sessionIds_ != nullptr; };
    // dbUser Field Functions 
    bool hasDbUser() const { return this->dbUser_ != nullptr;};
    void deleteDbUser() { this->dbUser_ = nullptr;};
    inline string dbUser() const { DARABONBA_PTR_GET_DEFAULT(dbUser_, "") };
    inline CreateKillInstanceSessionTaskRequest& setDbUser(string dbUser) { DARABONBA_PTR_SET_VALUE(dbUser_, dbUser) };


    // dbUserPassword Field Functions 
    bool hasDbUserPassword() const { return this->dbUserPassword_ != nullptr;};
    void deleteDbUserPassword() { this->dbUserPassword_ = nullptr;};
    inline string dbUserPassword() const { DARABONBA_PTR_GET_DEFAULT(dbUserPassword_, "") };
    inline CreateKillInstanceSessionTaskRequest& setDbUserPassword(string dbUserPassword) { DARABONBA_PTR_SET_VALUE(dbUserPassword_, dbUserPassword) };


    // ignoredUsers Field Functions 
    bool hasIgnoredUsers() const { return this->ignoredUsers_ != nullptr;};
    void deleteIgnoredUsers() { this->ignoredUsers_ = nullptr;};
    inline string ignoredUsers() const { DARABONBA_PTR_GET_DEFAULT(ignoredUsers_, "") };
    inline CreateKillInstanceSessionTaskRequest& setIgnoredUsers(string ignoredUsers) { DARABONBA_PTR_SET_VALUE(ignoredUsers_, ignoredUsers) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateKillInstanceSessionTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // killAllSessions Field Functions 
    bool hasKillAllSessions() const { return this->killAllSessions_ != nullptr;};
    void deleteKillAllSessions() { this->killAllSessions_ = nullptr;};
    inline bool killAllSessions() const { DARABONBA_PTR_GET_DEFAULT(killAllSessions_, false) };
    inline CreateKillInstanceSessionTaskRequest& setKillAllSessions(bool killAllSessions) { DARABONBA_PTR_SET_VALUE(killAllSessions_, killAllSessions) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateKillInstanceSessionTaskRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // sessionIds Field Functions 
    bool hasSessionIds() const { return this->sessionIds_ != nullptr;};
    void deleteSessionIds() { this->sessionIds_ = nullptr;};
    inline string sessionIds() const { DARABONBA_PTR_GET_DEFAULT(sessionIds_, "") };
    inline CreateKillInstanceSessionTaskRequest& setSessionIds(string sessionIds) { DARABONBA_PTR_SET_VALUE(sessionIds_, sessionIds) };


  protected:
    // The database account that has the permissions to terminate sessions.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbUser_ = nullptr;
    // The password of the database account.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbUserPassword_ = nullptr;
    // The account whose sessions do not need to be terminated.
    // 
    // >  Set this parameter to a JSON array. Separate database accounts with commas (,). Example: [\\"Database account 1\\",\\"Database account 2\\"].
    std::shared_ptr<string> ignoredUsers_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Specifies whether to terminate all sessions.
    // 
    // *   **true**
    // *   **false**
    // 
    // >  If you set this parameter to **true**, sessions of the accounts that are specified by **IgnoredUsers**, sessions of internal O\\&M accounts of Alibaba Cloud, and **Binlog Dump** sessions are not terminated.
    // 
    // This parameter is required.
    std::shared_ptr<bool> killAllSessions_ = nullptr;
    // The node ID.
    // 
    // >  This parameter must be specified if the database instance is a PolarDB for MySQL cluster. If you do not specify a node ID and set **KillAllSessions** to **true**, the system traverses all nodes in the PolarDB for MySQL cluster and terminates the active sessions on each node.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The IDs of sessions that need to be terminated.
    // 
    // >  Set this parameter to a JSON array. Separate session IDs with commas (,). Example: [\\"Session ID1\\",\\"Session ID2\\"]. If **KillAllSessions** is set to **true**, this parameter does not take effect.
    std::shared_ptr<string> sessionIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
