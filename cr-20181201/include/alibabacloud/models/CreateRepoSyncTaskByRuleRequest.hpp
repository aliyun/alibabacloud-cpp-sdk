// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPOSYNCTASKBYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPOSYNCTASKBYRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateRepoSyncTaskByRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRepoSyncTaskByRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(SyncRuleId, syncRuleId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRepoSyncTaskByRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(SyncRuleId, syncRuleId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateRepoSyncTaskByRuleRequest() = default ;
    CreateRepoSyncTaskByRuleRequest(const CreateRepoSyncTaskByRuleRequest &) = default ;
    CreateRepoSyncTaskByRuleRequest(CreateRepoSyncTaskByRuleRequest &&) = default ;
    CreateRepoSyncTaskByRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRepoSyncTaskByRuleRequest() = default ;
    CreateRepoSyncTaskByRuleRequest& operator=(const CreateRepoSyncTaskByRuleRequest &) = default ;
    CreateRepoSyncTaskByRuleRequest& operator=(CreateRepoSyncTaskByRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->repoId_ == nullptr && this->syncRuleId_ == nullptr && this->tag_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateRepoSyncTaskByRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline CreateRepoSyncTaskByRuleRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // syncRuleId Field Functions 
    bool hasSyncRuleId() const { return this->syncRuleId_ != nullptr;};
    void deleteSyncRuleId() { this->syncRuleId_ = nullptr;};
    inline string getSyncRuleId() const { DARABONBA_PTR_GET_DEFAULT(syncRuleId_, "") };
    inline CreateRepoSyncTaskByRuleRequest& setSyncRuleId(string syncRuleId) { DARABONBA_PTR_SET_VALUE(syncRuleId_, syncRuleId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline CreateRepoSyncTaskByRuleRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the image repository.
    // 
    // This parameter is required.
    shared_ptr<string> repoId_ {};
    // The ID of the synchronization rule.
    // 
    // This parameter is required.
    shared_ptr<string> syncRuleId_ {};
    // The version of the image to be synchronized.
    // 
    // This parameter is required.
    shared_ptr<string> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
