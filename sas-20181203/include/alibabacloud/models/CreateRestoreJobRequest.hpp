// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESTOREJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESTOREJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateRestoreJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRestoreJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Includes, includes_);
      DARABONBA_PTR_TO_JSON(SnapshotHash, snapshotHash_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SnapshotVersion, snapshotVersion_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRestoreJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Includes, includes_);
      DARABONBA_PTR_FROM_JSON(SnapshotHash, snapshotHash_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SnapshotVersion, snapshotVersion_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    CreateRestoreJobRequest() = default ;
    CreateRestoreJobRequest(const CreateRestoreJobRequest &) = default ;
    CreateRestoreJobRequest(CreateRestoreJobRequest &&) = default ;
    CreateRestoreJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRestoreJobRequest() = default ;
    CreateRestoreJobRequest& operator=(const CreateRestoreJobRequest &) = default ;
    CreateRestoreJobRequest& operator=(CreateRestoreJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->includes_ == nullptr
        && return this->snapshotHash_ == nullptr && return this->snapshotId_ == nullptr && return this->snapshotVersion_ == nullptr && return this->sourceType_ == nullptr && return this->target_ == nullptr
        && return this->uuid_ == nullptr && return this->vaultId_ == nullptr; };
    // includes Field Functions 
    bool hasIncludes() const { return this->includes_ != nullptr;};
    void deleteIncludes() { this->includes_ = nullptr;};
    inline string includes() const { DARABONBA_PTR_GET_DEFAULT(includes_, "") };
    inline CreateRestoreJobRequest& setIncludes(string includes) { DARABONBA_PTR_SET_VALUE(includes_, includes) };


    // snapshotHash Field Functions 
    bool hasSnapshotHash() const { return this->snapshotHash_ != nullptr;};
    void deleteSnapshotHash() { this->snapshotHash_ = nullptr;};
    inline string snapshotHash() const { DARABONBA_PTR_GET_DEFAULT(snapshotHash_, "") };
    inline CreateRestoreJobRequest& setSnapshotHash(string snapshotHash) { DARABONBA_PTR_SET_VALUE(snapshotHash_, snapshotHash) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CreateRestoreJobRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // snapshotVersion Field Functions 
    bool hasSnapshotVersion() const { return this->snapshotVersion_ != nullptr;};
    void deleteSnapshotVersion() { this->snapshotVersion_ = nullptr;};
    inline string snapshotVersion() const { DARABONBA_PTR_GET_DEFAULT(snapshotVersion_, "") };
    inline CreateRestoreJobRequest& setSnapshotVersion(string snapshotVersion) { DARABONBA_PTR_SET_VALUE(snapshotVersion_, snapshotVersion) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateRestoreJobRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline CreateRestoreJobRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline CreateRestoreJobRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline CreateRestoreJobRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The directory in which the files included in the restoration task are located. This parameter is specified when you create the anti-ransomware policy. The value is a directory that requires protection.
    // 
    // This parameter is required.
    std::shared_ptr<string> includes_ = nullptr;
    // The hash value of the snapshot.
    // 
    // > You can call the [DescribeSnapshots](~~DescribeSnapshots~~) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> snapshotHash_ = nullptr;
    // The ID of the snapshot that you want to use for restoration.
    // 
    // > You can call the [DescribeSnapshots](~~DescribeSnapshots~~) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The version of the backup data.
    // 
    // > You can call the [DescribeSnapshots](~~DescribeSnapshots~~) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> snapshotVersion_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: backup snapshots for Elastic Compute Service (ECS) files
    // *   **File**: backup snapshots for on-premises servers
    std::shared_ptr<string> sourceType_ = nullptr;
    // The path to which you want to restore data.
    // 
    // This parameter is required.
    std::shared_ptr<string> target_ = nullptr;
    // The UUID of the server whose data you want to restore.
    // 
    // This parameter is required.
    std::shared_ptr<string> uuid_ = nullptr;
    // The ID of the backup vault that is used in the restoration task.
    // 
    // > You can call the [DescribeSnapshots](~~DescribeSnapshots~~) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
