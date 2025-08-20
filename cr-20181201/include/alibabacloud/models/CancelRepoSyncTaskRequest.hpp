// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELREPOSYNCTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELREPOSYNCTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CancelRepoSyncTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelRepoSyncTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SyncTaskId, syncTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelRepoSyncTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SyncTaskId, syncTaskId_);
    };
    CancelRepoSyncTaskRequest() = default ;
    CancelRepoSyncTaskRequest(const CancelRepoSyncTaskRequest &) = default ;
    CancelRepoSyncTaskRequest(CancelRepoSyncTaskRequest &&) = default ;
    CancelRepoSyncTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelRepoSyncTaskRequest() = default ;
    CancelRepoSyncTaskRequest& operator=(const CancelRepoSyncTaskRequest &) = default ;
    CancelRepoSyncTaskRequest& operator=(CancelRepoSyncTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->syncTaskId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CancelRepoSyncTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // syncTaskId Field Functions 
    bool hasSyncTaskId() const { return this->syncTaskId_ != nullptr;};
    void deleteSyncTaskId() { this->syncTaskId_ = nullptr;};
    inline string syncTaskId() const { DARABONBA_PTR_GET_DEFAULT(syncTaskId_, "") };
    inline CancelRepoSyncTaskRequest& setSyncTaskId(string syncTaskId) { DARABONBA_PTR_SET_VALUE(syncTaskId_, syncTaskId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the replication task.
    // 
    // This parameter is required.
    std::shared_ptr<string> syncTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
