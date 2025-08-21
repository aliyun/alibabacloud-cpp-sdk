// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKILLINSTANCESESSIONTASKWITHMAINTAINUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKILLINSTANCESESSIONTASKWITHMAINTAINUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class CreateKillInstanceSessionTaskWithMaintainUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKillInstanceSessionTaskWithMaintainUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoredUsers, ignoredUsers_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KillAllSessions, killAllSessions_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(SessionIds, sessionIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKillInstanceSessionTaskWithMaintainUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoredUsers, ignoredUsers_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KillAllSessions, killAllSessions_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(SessionIds, sessionIds_);
    };
    CreateKillInstanceSessionTaskWithMaintainUserRequest() = default ;
    CreateKillInstanceSessionTaskWithMaintainUserRequest(const CreateKillInstanceSessionTaskWithMaintainUserRequest &) = default ;
    CreateKillInstanceSessionTaskWithMaintainUserRequest(CreateKillInstanceSessionTaskWithMaintainUserRequest &&) = default ;
    CreateKillInstanceSessionTaskWithMaintainUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKillInstanceSessionTaskWithMaintainUserRequest() = default ;
    CreateKillInstanceSessionTaskWithMaintainUserRequest& operator=(const CreateKillInstanceSessionTaskWithMaintainUserRequest &) = default ;
    CreateKillInstanceSessionTaskWithMaintainUserRequest& operator=(CreateKillInstanceSessionTaskWithMaintainUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ignoredUsers_ != nullptr
        && this->instanceId_ != nullptr && this->killAllSessions_ != nullptr && this->nodeId_ != nullptr && this->sessionIds_ != nullptr; };
    // ignoredUsers Field Functions 
    bool hasIgnoredUsers() const { return this->ignoredUsers_ != nullptr;};
    void deleteIgnoredUsers() { this->ignoredUsers_ = nullptr;};
    inline string ignoredUsers() const { DARABONBA_PTR_GET_DEFAULT(ignoredUsers_, "") };
    inline CreateKillInstanceSessionTaskWithMaintainUserRequest& setIgnoredUsers(string ignoredUsers) { DARABONBA_PTR_SET_VALUE(ignoredUsers_, ignoredUsers) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateKillInstanceSessionTaskWithMaintainUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // killAllSessions Field Functions 
    bool hasKillAllSessions() const { return this->killAllSessions_ != nullptr;};
    void deleteKillAllSessions() { this->killAllSessions_ = nullptr;};
    inline bool killAllSessions() const { DARABONBA_PTR_GET_DEFAULT(killAllSessions_, false) };
    inline CreateKillInstanceSessionTaskWithMaintainUserRequest& setKillAllSessions(bool killAllSessions) { DARABONBA_PTR_SET_VALUE(killAllSessions_, killAllSessions) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateKillInstanceSessionTaskWithMaintainUserRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // sessionIds Field Functions 
    bool hasSessionIds() const { return this->sessionIds_ != nullptr;};
    void deleteSessionIds() { this->sessionIds_ = nullptr;};
    inline string sessionIds() const { DARABONBA_PTR_GET_DEFAULT(sessionIds_, "") };
    inline CreateKillInstanceSessionTaskWithMaintainUserRequest& setSessionIds(string sessionIds) { DARABONBA_PTR_SET_VALUE(sessionIds_, sessionIds) };


  protected:
    std::shared_ptr<string> ignoredUsers_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> killAllSessions_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> sessionIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
