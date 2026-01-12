// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BACKUPAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BACKUPAPPREQUEST_HPP_
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
  class BackupAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BackupAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIdList, androidInstanceIdList_);
      DARABONBA_PTR_TO_JSON(BackupFileName, backupFileName_);
      DARABONBA_PTR_TO_JSON(BackupFilePath, backupFilePath_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SourceAppList, sourceAppList_);
      DARABONBA_PTR_TO_JSON(UploadEndpoint, uploadEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, BackupAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIdList, androidInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(BackupFileName, backupFileName_);
      DARABONBA_PTR_FROM_JSON(BackupFilePath, backupFilePath_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SourceAppList, sourceAppList_);
      DARABONBA_PTR_FROM_JSON(UploadEndpoint, uploadEndpoint_);
    };
    BackupAppRequest() = default ;
    BackupAppRequest(const BackupAppRequest &) = default ;
    BackupAppRequest(BackupAppRequest &&) = default ;
    BackupAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BackupAppRequest() = default ;
    BackupAppRequest& operator=(const BackupAppRequest &) = default ;
    BackupAppRequest& operator=(BackupAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceIdList_ == nullptr
        && this->backupFileName_ == nullptr && this->backupFilePath_ == nullptr && this->description_ == nullptr && this->sourceAppList_ == nullptr && this->uploadEndpoint_ == nullptr; };
    // androidInstanceIdList Field Functions 
    bool hasAndroidInstanceIdList() const { return this->androidInstanceIdList_ != nullptr;};
    void deleteAndroidInstanceIdList() { this->androidInstanceIdList_ = nullptr;};
    inline const vector<string> & getAndroidInstanceIdList() const { DARABONBA_PTR_GET_CONST(androidInstanceIdList_, vector<string>) };
    inline vector<string> getAndroidInstanceIdList() { DARABONBA_PTR_GET(androidInstanceIdList_, vector<string>) };
    inline BackupAppRequest& setAndroidInstanceIdList(const vector<string> & androidInstanceIdList) { DARABONBA_PTR_SET_VALUE(androidInstanceIdList_, androidInstanceIdList) };
    inline BackupAppRequest& setAndroidInstanceIdList(vector<string> && androidInstanceIdList) { DARABONBA_PTR_SET_RVALUE(androidInstanceIdList_, androidInstanceIdList) };


    // backupFileName Field Functions 
    bool hasBackupFileName() const { return this->backupFileName_ != nullptr;};
    void deleteBackupFileName() { this->backupFileName_ = nullptr;};
    inline string getBackupFileName() const { DARABONBA_PTR_GET_DEFAULT(backupFileName_, "") };
    inline BackupAppRequest& setBackupFileName(string backupFileName) { DARABONBA_PTR_SET_VALUE(backupFileName_, backupFileName) };


    // backupFilePath Field Functions 
    bool hasBackupFilePath() const { return this->backupFilePath_ != nullptr;};
    void deleteBackupFilePath() { this->backupFilePath_ = nullptr;};
    inline string getBackupFilePath() const { DARABONBA_PTR_GET_DEFAULT(backupFilePath_, "") };
    inline BackupAppRequest& setBackupFilePath(string backupFilePath) { DARABONBA_PTR_SET_VALUE(backupFilePath_, backupFilePath) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline BackupAppRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // sourceAppList Field Functions 
    bool hasSourceAppList() const { return this->sourceAppList_ != nullptr;};
    void deleteSourceAppList() { this->sourceAppList_ = nullptr;};
    inline const vector<string> & getSourceAppList() const { DARABONBA_PTR_GET_CONST(sourceAppList_, vector<string>) };
    inline vector<string> getSourceAppList() { DARABONBA_PTR_GET(sourceAppList_, vector<string>) };
    inline BackupAppRequest& setSourceAppList(const vector<string> & sourceAppList) { DARABONBA_PTR_SET_VALUE(sourceAppList_, sourceAppList) };
    inline BackupAppRequest& setSourceAppList(vector<string> && sourceAppList) { DARABONBA_PTR_SET_RVALUE(sourceAppList_, sourceAppList) };


    // uploadEndpoint Field Functions 
    bool hasUploadEndpoint() const { return this->uploadEndpoint_ != nullptr;};
    void deleteUploadEndpoint() { this->uploadEndpoint_ = nullptr;};
    inline string getUploadEndpoint() const { DARABONBA_PTR_GET_DEFAULT(uploadEndpoint_, "") };
    inline BackupAppRequest& setUploadEndpoint(string uploadEndpoint) { DARABONBA_PTR_SET_VALUE(uploadEndpoint_, uploadEndpoint) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> androidInstanceIdList_ {};
    shared_ptr<string> backupFileName_ {};
    // This parameter is required.
    shared_ptr<string> backupFilePath_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<vector<string>> sourceAppList_ {};
    // This parameter is required.
    shared_ptr<string> uploadEndpoint_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
