// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSYNCHRONIZATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSYNCHRONIZATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSynchronizationJobRequestSynchronizationScopeConfig.hpp>
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
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->instanceId_ == nullptr && return this->passwordInitialization_ == nullptr && return this->synchronizationScopeConfig_ == nullptr && return this->targetId_ == nullptr && return this->targetType_ == nullptr
        && return this->userIdentityTypes_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RunSynchronizationJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RunSynchronizationJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // passwordInitialization Field Functions 
    bool hasPasswordInitialization() const { return this->passwordInitialization_ != nullptr;};
    void deletePasswordInitialization() { this->passwordInitialization_ = nullptr;};
    inline bool passwordInitialization() const { DARABONBA_PTR_GET_DEFAULT(passwordInitialization_, false) };
    inline RunSynchronizationJobRequest& setPasswordInitialization(bool passwordInitialization) { DARABONBA_PTR_SET_VALUE(passwordInitialization_, passwordInitialization) };


    // synchronizationScopeConfig Field Functions 
    bool hasSynchronizationScopeConfig() const { return this->synchronizationScopeConfig_ != nullptr;};
    void deleteSynchronizationScopeConfig() { this->synchronizationScopeConfig_ = nullptr;};
    inline const RunSynchronizationJobRequestSynchronizationScopeConfig & synchronizationScopeConfig() const { DARABONBA_PTR_GET_CONST(synchronizationScopeConfig_, RunSynchronizationJobRequestSynchronizationScopeConfig) };
    inline RunSynchronizationJobRequestSynchronizationScopeConfig synchronizationScopeConfig() { DARABONBA_PTR_GET(synchronizationScopeConfig_, RunSynchronizationJobRequestSynchronizationScopeConfig) };
    inline RunSynchronizationJobRequest& setSynchronizationScopeConfig(const RunSynchronizationJobRequestSynchronizationScopeConfig & synchronizationScopeConfig) { DARABONBA_PTR_SET_VALUE(synchronizationScopeConfig_, synchronizationScopeConfig) };
    inline RunSynchronizationJobRequest& setSynchronizationScopeConfig(RunSynchronizationJobRequestSynchronizationScopeConfig && synchronizationScopeConfig) { DARABONBA_PTR_SET_RVALUE(synchronizationScopeConfig_, synchronizationScopeConfig) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline RunSynchronizationJobRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline RunSynchronizationJobRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // userIdentityTypes Field Functions 
    bool hasUserIdentityTypes() const { return this->userIdentityTypes_ != nullptr;};
    void deleteUserIdentityTypes() { this->userIdentityTypes_ = nullptr;};
    inline const vector<string> & userIdentityTypes() const { DARABONBA_PTR_GET_CONST(userIdentityTypes_, vector<string>) };
    inline vector<string> userIdentityTypes() { DARABONBA_PTR_GET(userIdentityTypes_, vector<string>) };
    inline RunSynchronizationJobRequest& setUserIdentityTypes(const vector<string> & userIdentityTypes) { DARABONBA_PTR_SET_VALUE(userIdentityTypes_, userIdentityTypes) };
    inline RunSynchronizationJobRequest& setUserIdentityTypes(vector<string> && userIdentityTypes) { DARABONBA_PTR_SET_RVALUE(userIdentityTypes_, userIdentityTypes) };


  protected:
    // Synchronization task description
    std::shared_ptr<string> description_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Whether initialize password
    std::shared_ptr<bool> passwordInitialization_ = nullptr;
    // Synchronization scope
    std::shared_ptr<RunSynchronizationJobRequestSynchronizationScopeConfig> synchronizationScopeConfig_ = nullptr;
    // The ID of the synchronization destination.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetId_ = nullptr;
    // The type of the synchronization destination. Valid values:
    // 
    // *   identity_provider
    // *   application
    // 
    // This parameter is required.
    std::shared_ptr<string> targetType_ = nullptr;
    // User identity types
    std::shared_ptr<vector<string>> userIdentityTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
