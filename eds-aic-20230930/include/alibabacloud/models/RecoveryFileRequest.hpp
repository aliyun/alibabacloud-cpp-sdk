// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOVERYFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOVERYFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class RecoveryFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecoveryFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIdList, androidInstanceIdList_);
      DARABONBA_PTR_TO_JSON(BackupAll, backupAll_);
      DARABONBA_PTR_TO_JSON(BackupFileId, backupFileId_);
      DARABONBA_PTR_TO_JSON(BackupFilePath, backupFilePath_);
      DARABONBA_PTR_TO_JSON(UploadEndpoint, uploadEndpoint_);
      DARABONBA_PTR_TO_JSON(UploadType, uploadType_);
    };
    friend void from_json(const Darabonba::Json& j, RecoveryFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIdList, androidInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(BackupAll, backupAll_);
      DARABONBA_PTR_FROM_JSON(BackupFileId, backupFileId_);
      DARABONBA_PTR_FROM_JSON(BackupFilePath, backupFilePath_);
      DARABONBA_PTR_FROM_JSON(UploadEndpoint, uploadEndpoint_);
      DARABONBA_PTR_FROM_JSON(UploadType, uploadType_);
    };
    RecoveryFileRequest() = default ;
    RecoveryFileRequest(const RecoveryFileRequest &) = default ;
    RecoveryFileRequest(RecoveryFileRequest &&) = default ;
    RecoveryFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecoveryFileRequest() = default ;
    RecoveryFileRequest& operator=(const RecoveryFileRequest &) = default ;
    RecoveryFileRequest& operator=(RecoveryFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->androidInstanceIdList_ != nullptr
        && this->backupAll_ != nullptr && this->backupFileId_ != nullptr && this->backupFilePath_ != nullptr && this->uploadEndpoint_ != nullptr && this->uploadType_ != nullptr; };
    // androidInstanceIdList Field Functions 
    bool hasAndroidInstanceIdList() const { return this->androidInstanceIdList_ != nullptr;};
    void deleteAndroidInstanceIdList() { this->androidInstanceIdList_ = nullptr;};
    inline const vector<string> & androidInstanceIdList() const { DARABONBA_PTR_GET_CONST(androidInstanceIdList_, vector<string>) };
    inline vector<string> androidInstanceIdList() { DARABONBA_PTR_GET(androidInstanceIdList_, vector<string>) };
    inline RecoveryFileRequest& setAndroidInstanceIdList(const vector<string> & androidInstanceIdList) { DARABONBA_PTR_SET_VALUE(androidInstanceIdList_, androidInstanceIdList) };
    inline RecoveryFileRequest& setAndroidInstanceIdList(vector<string> && androidInstanceIdList) { DARABONBA_PTR_SET_RVALUE(androidInstanceIdList_, androidInstanceIdList) };


    // backupAll Field Functions 
    bool hasBackupAll() const { return this->backupAll_ != nullptr;};
    void deleteBackupAll() { this->backupAll_ = nullptr;};
    inline bool backupAll() const { DARABONBA_PTR_GET_DEFAULT(backupAll_, false) };
    inline RecoveryFileRequest& setBackupAll(bool backupAll) { DARABONBA_PTR_SET_VALUE(backupAll_, backupAll) };


    // backupFileId Field Functions 
    bool hasBackupFileId() const { return this->backupFileId_ != nullptr;};
    void deleteBackupFileId() { this->backupFileId_ = nullptr;};
    inline string backupFileId() const { DARABONBA_PTR_GET_DEFAULT(backupFileId_, "") };
    inline RecoveryFileRequest& setBackupFileId(string backupFileId) { DARABONBA_PTR_SET_VALUE(backupFileId_, backupFileId) };


    // backupFilePath Field Functions 
    bool hasBackupFilePath() const { return this->backupFilePath_ != nullptr;};
    void deleteBackupFilePath() { this->backupFilePath_ = nullptr;};
    inline string backupFilePath() const { DARABONBA_PTR_GET_DEFAULT(backupFilePath_, "") };
    inline RecoveryFileRequest& setBackupFilePath(string backupFilePath) { DARABONBA_PTR_SET_VALUE(backupFilePath_, backupFilePath) };


    // uploadEndpoint Field Functions 
    bool hasUploadEndpoint() const { return this->uploadEndpoint_ != nullptr;};
    void deleteUploadEndpoint() { this->uploadEndpoint_ = nullptr;};
    inline string uploadEndpoint() const { DARABONBA_PTR_GET_DEFAULT(uploadEndpoint_, "") };
    inline RecoveryFileRequest& setUploadEndpoint(string uploadEndpoint) { DARABONBA_PTR_SET_VALUE(uploadEndpoint_, uploadEndpoint) };


    // uploadType Field Functions 
    bool hasUploadType() const { return this->uploadType_ != nullptr;};
    void deleteUploadType() { this->uploadType_ = nullptr;};
    inline string uploadType() const { DARABONBA_PTR_GET_DEFAULT(uploadType_, "") };
    inline RecoveryFileRequest& setUploadType(string uploadType) { DARABONBA_PTR_SET_VALUE(uploadType_, uploadType) };


  protected:
    // The IDs of the instances.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> androidInstanceIdList_ = nullptr;
    // Specifies whether to back up the whole instance.
    std::shared_ptr<bool> backupAll_ = nullptr;
    // The ID of the backup file.
    std::shared_ptr<string> backupFileId_ = nullptr;
    // The OSS path to which the backup file is uploaded.
    // 
    // >  When calling the describeBuckets operation to retrieve a bucket name, you must also call the ossObjectList operation to obtain the object key. Combine these to form the full path: oss://${bucketName}/${key}.
    std::shared_ptr<string> backupFilePath_ = nullptr;
    // The endpoint of the OSS bucket that stores the backup file.
    // 
    // > : When calling the DescribeBuckets operation to query buckets, retrieve the IntranetEndpoint value if the cloud phone and the OSS bucket are in the same region. If they are in different regions, retrieve the ExtranetEndpoint value instead.
    std::shared_ptr<string> uploadEndpoint_ = nullptr;
    // The type of the backup.
    // 
    // Valid values:
    // 
    // *   OSS: backup files are stored in OSS buckets.
    std::shared_ptr<string> uploadType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
