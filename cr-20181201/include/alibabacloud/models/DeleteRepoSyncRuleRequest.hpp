// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEREPOSYNCRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEREPOSYNCRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class DeleteRepoSyncRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRepoSyncRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SyncRuleId, syncRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRepoSyncRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SyncRuleId, syncRuleId_);
    };
    DeleteRepoSyncRuleRequest() = default ;
    DeleteRepoSyncRuleRequest(const DeleteRepoSyncRuleRequest &) = default ;
    DeleteRepoSyncRuleRequest(DeleteRepoSyncRuleRequest &&) = default ;
    DeleteRepoSyncRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRepoSyncRuleRequest() = default ;
    DeleteRepoSyncRuleRequest& operator=(const DeleteRepoSyncRuleRequest &) = default ;
    DeleteRepoSyncRuleRequest& operator=(DeleteRepoSyncRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->syncRuleId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteRepoSyncRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // syncRuleId Field Functions 
    bool hasSyncRuleId() const { return this->syncRuleId_ != nullptr;};
    void deleteSyncRuleId() { this->syncRuleId_ = nullptr;};
    inline string getSyncRuleId() const { DARABONBA_PTR_GET_DEFAULT(syncRuleId_, "") };
    inline DeleteRepoSyncRuleRequest& setSyncRuleId(string syncRuleId) { DARABONBA_PTR_SET_VALUE(syncRuleId_, syncRuleId) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the synchronization rule.
    // 
    // This parameter is required.
    shared_ptr<string> syncRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
