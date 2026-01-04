// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSYNCHRONIZATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSYNCHRONIZATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class RunSynchronizationJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSynchronizationJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PasswordInitialization, passwordInitialization_);
      DARABONBA_PTR_TO_JSON(SynchronizationScopeConfig, synchronizationScopeConfig_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(UserIdentityTypes, userIdentityTypes_);
    };
    friend void from_json(const Darabonba::Json& j, RunSynchronizationJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PasswordInitialization, passwordInitialization_);
      DARABONBA_PTR_FROM_JSON(SynchronizationScopeConfig, synchronizationScopeConfig_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(UserIdentityTypes, userIdentityTypes_);
    };
    RunSynchronizationJobRequest() = default ;
    RunSynchronizationJobRequest(const RunSynchronizationJobRequest &) = default ;
    RunSynchronizationJobRequest(RunSynchronizationJobRequest &&) = default ;
    RunSynchronizationJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSynchronizationJobRequest() = default ;
    RunSynchronizationJobRequest& operator=(const RunSynchronizationJobRequest &) = default ;
    RunSynchronizationJobRequest& operator=(RunSynchronizationJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SynchronizationScopeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SynchronizationScopeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
        DARABONBA_PTR_TO_JSON(OrganizationalUnitIds, organizationalUnitIds_);
        DARABONBA_PTR_TO_JSON(UserIds, userIds_);
      };
      friend void from_json(const Darabonba::Json& j, SynchronizationScopeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
        DARABONBA_PTR_FROM_JSON(OrganizationalUnitIds, organizationalUnitIds_);
        DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
      };
      SynchronizationScopeConfig() = default ;
      SynchronizationScopeConfig(const SynchronizationScopeConfig &) = default ;
      SynchronizationScopeConfig(SynchronizationScopeConfig &&) = default ;
      SynchronizationScopeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SynchronizationScopeConfig() = default ;
      SynchronizationScopeConfig& operator=(const SynchronizationScopeConfig &) = default ;
      SynchronizationScopeConfig& operator=(SynchronizationScopeConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupIds_ == nullptr
        && this->organizationalUnitIds_ == nullptr && this->userIds_ == nullptr; };
      // groupIds Field Functions 
      bool hasGroupIds() const { return this->groupIds_ != nullptr;};
      void deleteGroupIds() { this->groupIds_ = nullptr;};
      inline const vector<string> & getGroupIds() const { DARABONBA_PTR_GET_CONST(groupIds_, vector<string>) };
      inline vector<string> getGroupIds() { DARABONBA_PTR_GET(groupIds_, vector<string>) };
      inline SynchronizationScopeConfig& setGroupIds(const vector<string> & groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };
      inline SynchronizationScopeConfig& setGroupIds(vector<string> && groupIds) { DARABONBA_PTR_SET_RVALUE(groupIds_, groupIds) };


      // organizationalUnitIds Field Functions 
      bool hasOrganizationalUnitIds() const { return this->organizationalUnitIds_ != nullptr;};
      void deleteOrganizationalUnitIds() { this->organizationalUnitIds_ = nullptr;};
      inline const vector<string> & getOrganizationalUnitIds() const { DARABONBA_PTR_GET_CONST(organizationalUnitIds_, vector<string>) };
      inline vector<string> getOrganizationalUnitIds() { DARABONBA_PTR_GET(organizationalUnitIds_, vector<string>) };
      inline SynchronizationScopeConfig& setOrganizationalUnitIds(const vector<string> & organizationalUnitIds) { DARABONBA_PTR_SET_VALUE(organizationalUnitIds_, organizationalUnitIds) };
      inline SynchronizationScopeConfig& setOrganizationalUnitIds(vector<string> && organizationalUnitIds) { DARABONBA_PTR_SET_RVALUE(organizationalUnitIds_, organizationalUnitIds) };


      // userIds Field Functions 
      bool hasUserIds() const { return this->userIds_ != nullptr;};
      void deleteUserIds() { this->userIds_ = nullptr;};
      inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
      inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
      inline SynchronizationScopeConfig& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
      inline SynchronizationScopeConfig& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


    protected:
      // The group IDs.
      shared_ptr<vector<string>> groupIds_ {};
      // The IDs of organizational units.
      shared_ptr<vector<string>> organizationalUnitIds_ {};
      // UserIds
      shared_ptr<vector<string>> userIds_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->instanceId_ == nullptr && this->passwordInitialization_ == nullptr && this->synchronizationScopeConfig_ == nullptr && this->targetId_ == nullptr && this->targetType_ == nullptr
        && this->userIdentityTypes_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RunSynchronizationJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RunSynchronizationJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // passwordInitialization Field Functions 
    bool hasPasswordInitialization() const { return this->passwordInitialization_ != nullptr;};
    void deletePasswordInitialization() { this->passwordInitialization_ = nullptr;};
    inline bool getPasswordInitialization() const { DARABONBA_PTR_GET_DEFAULT(passwordInitialization_, false) };
    inline RunSynchronizationJobRequest& setPasswordInitialization(bool passwordInitialization) { DARABONBA_PTR_SET_VALUE(passwordInitialization_, passwordInitialization) };


    // synchronizationScopeConfig Field Functions 
    bool hasSynchronizationScopeConfig() const { return this->synchronizationScopeConfig_ != nullptr;};
    void deleteSynchronizationScopeConfig() { this->synchronizationScopeConfig_ = nullptr;};
    inline const RunSynchronizationJobRequest::SynchronizationScopeConfig & getSynchronizationScopeConfig() const { DARABONBA_PTR_GET_CONST(synchronizationScopeConfig_, RunSynchronizationJobRequest::SynchronizationScopeConfig) };
    inline RunSynchronizationJobRequest::SynchronizationScopeConfig getSynchronizationScopeConfig() { DARABONBA_PTR_GET(synchronizationScopeConfig_, RunSynchronizationJobRequest::SynchronizationScopeConfig) };
    inline RunSynchronizationJobRequest& setSynchronizationScopeConfig(const RunSynchronizationJobRequest::SynchronizationScopeConfig & synchronizationScopeConfig) { DARABONBA_PTR_SET_VALUE(synchronizationScopeConfig_, synchronizationScopeConfig) };
    inline RunSynchronizationJobRequest& setSynchronizationScopeConfig(RunSynchronizationJobRequest::SynchronizationScopeConfig && synchronizationScopeConfig) { DARABONBA_PTR_SET_RVALUE(synchronizationScopeConfig_, synchronizationScopeConfig) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline RunSynchronizationJobRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline RunSynchronizationJobRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // userIdentityTypes Field Functions 
    bool hasUserIdentityTypes() const { return this->userIdentityTypes_ != nullptr;};
    void deleteUserIdentityTypes() { this->userIdentityTypes_ = nullptr;};
    inline const vector<string> & getUserIdentityTypes() const { DARABONBA_PTR_GET_CONST(userIdentityTypes_, vector<string>) };
    inline vector<string> getUserIdentityTypes() { DARABONBA_PTR_GET(userIdentityTypes_, vector<string>) };
    inline RunSynchronizationJobRequest& setUserIdentityTypes(const vector<string> & userIdentityTypes) { DARABONBA_PTR_SET_VALUE(userIdentityTypes_, userIdentityTypes) };
    inline RunSynchronizationJobRequest& setUserIdentityTypes(vector<string> && userIdentityTypes) { DARABONBA_PTR_SET_RVALUE(userIdentityTypes_, userIdentityTypes) };


  protected:
    // Synchronization task description
    shared_ptr<string> description_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Whether initialize password
    shared_ptr<bool> passwordInitialization_ {};
    // Synchronization scope
    shared_ptr<RunSynchronizationJobRequest::SynchronizationScopeConfig> synchronizationScopeConfig_ {};
    // The ID of the synchronization destination.
    // 
    // This parameter is required.
    shared_ptr<string> targetId_ {};
    // The type of the synchronization destination. Valid values:
    // 
    // *   identity_provider
    // *   application
    // 
    // This parameter is required.
    shared_ptr<string> targetType_ {};
    // User identity types
    shared_ptr<vector<string>> userIdentityTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
