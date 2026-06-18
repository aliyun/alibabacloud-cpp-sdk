// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTORESNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTORESNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class RestoreSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(FinalizeRestore, finalizeRestore_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RestoredBranchName, restoredBranchName_);
      DARABONBA_PTR_TO_JSON(RestoredLsn, restoredLsn_);
      DARABONBA_PTR_TO_JSON(TargetBranchId, targetBranchId_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(FinalizeRestore, finalizeRestore_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RestoredBranchName, restoredBranchName_);
      DARABONBA_PTR_FROM_JSON(RestoredLsn, restoredLsn_);
      DARABONBA_PTR_FROM_JSON(TargetBranchId, targetBranchId_);
    };
    RestoreSnapshotRequest() = default ;
    RestoreSnapshotRequest(const RestoreSnapshotRequest &) = default ;
    RestoreSnapshotRequest(RestoreSnapshotRequest &&) = default ;
    RestoreSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestoreSnapshotRequest() = default ;
    RestoreSnapshotRequest& operator=(const RestoreSnapshotRequest &) = default ;
    RestoreSnapshotRequest& operator=(RestoreSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->finalizeRestore_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr && this->restoredBranchName_ == nullptr && this->restoredLsn_ == nullptr
        && this->targetBranchId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RestoreSnapshotRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // finalizeRestore Field Functions 
    bool hasFinalizeRestore() const { return this->finalizeRestore_ != nullptr;};
    void deleteFinalizeRestore() { this->finalizeRestore_ = nullptr;};
    inline bool getFinalizeRestore() const { DARABONBA_PTR_GET_DEFAULT(finalizeRestore_, false) };
    inline RestoreSnapshotRequest& setFinalizeRestore(bool finalizeRestore) { DARABONBA_PTR_SET_VALUE(finalizeRestore_, finalizeRestore) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline RestoreSnapshotRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RestoreSnapshotRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // restoredBranchName Field Functions 
    bool hasRestoredBranchName() const { return this->restoredBranchName_ != nullptr;};
    void deleteRestoredBranchName() { this->restoredBranchName_ = nullptr;};
    inline string getRestoredBranchName() const { DARABONBA_PTR_GET_DEFAULT(restoredBranchName_, "") };
    inline RestoreSnapshotRequest& setRestoredBranchName(string restoredBranchName) { DARABONBA_PTR_SET_VALUE(restoredBranchName_, restoredBranchName) };


    // restoredLsn Field Functions 
    bool hasRestoredLsn() const { return this->restoredLsn_ != nullptr;};
    void deleteRestoredLsn() { this->restoredLsn_ = nullptr;};
    inline string getRestoredLsn() const { DARABONBA_PTR_GET_DEFAULT(restoredLsn_, "") };
    inline RestoreSnapshotRequest& setRestoredLsn(string restoredLsn) { DARABONBA_PTR_SET_VALUE(restoredLsn_, restoredLsn) };


    // targetBranchId Field Functions 
    bool hasTargetBranchId() const { return this->targetBranchId_ != nullptr;};
    void deleteTargetBranchId() { this->targetBranchId_ = nullptr;};
    inline string getTargetBranchId() const { DARABONBA_PTR_GET_DEFAULT(targetBranchId_, "") };
    inline RestoreSnapshotRequest& setTargetBranchId(string targetBranchId) { DARABONBA_PTR_SET_VALUE(targetBranchId_, targetBranchId) };


  protected:
    // The idempotence token. Ensures that repeated requests do not execute the same operation more than once.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to complete the restoration immediately. Default value: false.
    shared_ptr<bool> finalizeRestore_ {};
    // The Supabase project ID.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // The region ID. Specifies the region in which to query or perform the operation.
    shared_ptr<string> regionId_ {};
    // The name of the restored branch. If not specified, the backend generates a name automatically.
    shared_ptr<string> restoredBranchName_ {};
    // The snapshot LSN used for restoration.
    // 
    // This parameter is required.
    shared_ptr<string> restoredLsn_ {};
    // The target branch ID. If not specified, the backend selects the target branch based on the restoration process.
    shared_ptr<string> targetBranchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
