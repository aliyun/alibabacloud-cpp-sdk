// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BACKUPFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BACKUPFILEREQUEST_HPP_
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
  class BackupFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BackupFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIdList, androidInstanceIdList_);
      DARABONBA_PTR_TO_JSON(BackupAll, backupAll_);
      DARABONBA_PTR_TO_JSON(BackupFileName, backupFileName_);
      DARABONBA_PTR_TO_JSON(BackupFilePath, backupFilePath_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SourceAppList, sourceAppList_);
      DARABONBA_PTR_TO_JSON(SourceFilePathList, sourceFilePathList_);
      DARABONBA_PTR_TO_JSON(UploadEndpoint, uploadEndpoint_);
      DARABONBA_PTR_TO_JSON(UploadType, uploadType_);
    };
    friend void from_json(const Darabonba::Json& j, BackupFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIdList, androidInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(BackupAll, backupAll_);
      DARABONBA_PTR_FROM_JSON(BackupFileName, backupFileName_);
      DARABONBA_PTR_FROM_JSON(BackupFilePath, backupFilePath_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SourceAppList, sourceAppList_);
      DARABONBA_PTR_FROM_JSON(SourceFilePathList, sourceFilePathList_);
      DARABONBA_PTR_FROM_JSON(UploadEndpoint, uploadEndpoint_);
      DARABONBA_PTR_FROM_JSON(UploadType, uploadType_);
    };
    BackupFileRequest() = default ;
    BackupFileRequest(const BackupFileRequest &) = default ;
    BackupFileRequest(BackupFileRequest &&) = default ;
    BackupFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BackupFileRequest() = default ;
    BackupFileRequest& operator=(const BackupFileRequest &) = default ;
    BackupFileRequest& operator=(BackupFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->androidInstanceIdList_ != nullptr
        && this->backupAll_ != nullptr && this->backupFileName_ != nullptr && this->backupFilePath_ != nullptr && this->description_ != nullptr && this->sourceAppList_ != nullptr
        && this->sourceFilePathList_ != nullptr && this->uploadEndpoint_ != nullptr && this->uploadType_ != nullptr; };
    // androidInstanceIdList Field Functions 
    bool hasAndroidInstanceIdList() const { return this->androidInstanceIdList_ != nullptr;};
    void deleteAndroidInstanceIdList() { this->androidInstanceIdList_ = nullptr;};
    inline const vector<string> & androidInstanceIdList() const { DARABONBA_PTR_GET_CONST(androidInstanceIdList_, vector<string>) };
    inline vector<string> androidInstanceIdList() { DARABONBA_PTR_GET(androidInstanceIdList_, vector<string>) };
    inline BackupFileRequest& setAndroidInstanceIdList(const vector<string> & androidInstanceIdList) { DARABONBA_PTR_SET_VALUE(androidInstanceIdList_, androidInstanceIdList) };
    inline BackupFileRequest& setAndroidInstanceIdList(vector<string> && androidInstanceIdList) { DARABONBA_PTR_SET_RVALUE(androidInstanceIdList_, androidInstanceIdList) };


    // backupAll Field Functions 
    bool hasBackupAll() const { return this->backupAll_ != nullptr;};
    void deleteBackupAll() { this->backupAll_ = nullptr;};
    inline bool backupAll() const { DARABONBA_PTR_GET_DEFAULT(backupAll_, false) };
    inline BackupFileRequest& setBackupAll(bool backupAll) { DARABONBA_PTR_SET_VALUE(backupAll_, backupAll) };


    // backupFileName Field Functions 
    bool hasBackupFileName() const { return this->backupFileName_ != nullptr;};
    void deleteBackupFileName() { this->backupFileName_ = nullptr;};
    inline string backupFileName() const { DARABONBA_PTR_GET_DEFAULT(backupFileName_, "") };
    inline BackupFileRequest& setBackupFileName(string backupFileName) { DARABONBA_PTR_SET_VALUE(backupFileName_, backupFileName) };


    // backupFilePath Field Functions 
    bool hasBackupFilePath() const { return this->backupFilePath_ != nullptr;};
    void deleteBackupFilePath() { this->backupFilePath_ = nullptr;};
    inline string backupFilePath() const { DARABONBA_PTR_GET_DEFAULT(backupFilePath_, "") };
    inline BackupFileRequest& setBackupFilePath(string backupFilePath) { DARABONBA_PTR_SET_VALUE(backupFilePath_, backupFilePath) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline BackupFileRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // sourceAppList Field Functions 
    bool hasSourceAppList() const { return this->sourceAppList_ != nullptr;};
    void deleteSourceAppList() { this->sourceAppList_ = nullptr;};
    inline const vector<string> & sourceAppList() const { DARABONBA_PTR_GET_CONST(sourceAppList_, vector<string>) };
    inline vector<string> sourceAppList() { DARABONBA_PTR_GET(sourceAppList_, vector<string>) };
    inline BackupFileRequest& setSourceAppList(const vector<string> & sourceAppList) { DARABONBA_PTR_SET_VALUE(sourceAppList_, sourceAppList) };
    inline BackupFileRequest& setSourceAppList(vector<string> && sourceAppList) { DARABONBA_PTR_SET_RVALUE(sourceAppList_, sourceAppList) };


    // sourceFilePathList Field Functions 
    bool hasSourceFilePathList() const { return this->sourceFilePathList_ != nullptr;};
    void deleteSourceFilePathList() { this->sourceFilePathList_ = nullptr;};
    inline const vector<string> & sourceFilePathList() const { DARABONBA_PTR_GET_CONST(sourceFilePathList_, vector<string>) };
    inline vector<string> sourceFilePathList() { DARABONBA_PTR_GET(sourceFilePathList_, vector<string>) };
    inline BackupFileRequest& setSourceFilePathList(const vector<string> & sourceFilePathList) { DARABONBA_PTR_SET_VALUE(sourceFilePathList_, sourceFilePathList) };
    inline BackupFileRequest& setSourceFilePathList(vector<string> && sourceFilePathList) { DARABONBA_PTR_SET_RVALUE(sourceFilePathList_, sourceFilePathList) };


    // uploadEndpoint Field Functions 
    bool hasUploadEndpoint() const { return this->uploadEndpoint_ != nullptr;};
    void deleteUploadEndpoint() { this->uploadEndpoint_ = nullptr;};
    inline string uploadEndpoint() const { DARABONBA_PTR_GET_DEFAULT(uploadEndpoint_, "") };
    inline BackupFileRequest& setUploadEndpoint(string uploadEndpoint) { DARABONBA_PTR_SET_VALUE(uploadEndpoint_, uploadEndpoint) };


    // uploadType Field Functions 
    bool hasUploadType() const { return this->uploadType_ != nullptr;};
    void deleteUploadType() { this->uploadType_ = nullptr;};
    inline string uploadType() const { DARABONBA_PTR_GET_DEFAULT(uploadType_, "") };
    inline BackupFileRequest& setUploadType(string uploadType) { DARABONBA_PTR_SET_VALUE(uploadType_, uploadType) };


  protected:
    // The IDs of the instances.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> androidInstanceIdList_ = nullptr;
    // Specifies whether to back up the whole instance.
    std::shared_ptr<bool> backupAll_ = nullptr;
    // The name of the backup file.
    std::shared_ptr<string> backupFileName_ = nullptr;
    // The OSS path of the backup file.
    // 
    // >  To upload a backup file to an OSS bucket, you must obtain the name of the bucket. When calling the describeBuckets operation to retrieve a bucket name, you must also call the ossObjectList operation to obtain the object key. Combine these to form the full path: oss://${bucketName}/${key}.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupFilePath_ = nullptr;
    // The description of the backup file.
    std::shared_ptr<string> description_ = nullptr;
    // The names of the application packages that you want to back up.
    std::shared_ptr<vector<string>> sourceAppList_ = nullptr;
    // The paths to the source files.
    std::shared_ptr<vector<string>> sourceFilePathList_ = nullptr;
    // The endpoint of the OSS bucket to which you want to upload the backup file.
    // 
    // > : When calling the DescribeBuckets operation to query buckets, retrieve the IntranetEndpoint value if the cloud phone and the OSS bucket are in the same region. If they are in different regions, retrieve the ExtranetEndpoint value instead.
    std::shared_ptr<string> uploadEndpoint_ = nullptr;
    // The type of the backup.
    // 
    // Valid values:
    // 
    // *   OSS: uploads the backup file to an OSS bucket.
    std::shared_ptr<string> uploadType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
