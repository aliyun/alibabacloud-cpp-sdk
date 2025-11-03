// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOSYNCTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREPOSYNCTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetRepoSyncTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRepoSyncTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SyncTaskId, syncTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRepoSyncTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SyncTaskId, syncTaskId_);
    };
    GetRepoSyncTaskRequest() = default ;
    GetRepoSyncTaskRequest(const GetRepoSyncTaskRequest &) = default ;
    GetRepoSyncTaskRequest(GetRepoSyncTaskRequest &&) = default ;
    GetRepoSyncTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRepoSyncTaskRequest() = default ;
    GetRepoSyncTaskRequest& operator=(const GetRepoSyncTaskRequest &) = default ;
    GetRepoSyncTaskRequest& operator=(GetRepoSyncTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->syncTaskId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRepoSyncTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // syncTaskId Field Functions 
    bool hasSyncTaskId() const { return this->syncTaskId_ != nullptr;};
    void deleteSyncTaskId() { this->syncTaskId_ = nullptr;};
    inline string syncTaskId() const { DARABONBA_PTR_GET_DEFAULT(syncTaskId_, "") };
    inline GetRepoSyncTaskRequest& setSyncTaskId(string syncTaskId) { DARABONBA_PTR_SET_VALUE(syncTaskId_, syncTaskId) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the synchronization task.
    // 
    // This parameter is required.
    std::shared_ptr<string> syncTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
