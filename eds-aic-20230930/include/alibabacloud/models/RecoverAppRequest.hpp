// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOVERAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOVERAPPREQUEST_HPP_
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
  class RecoverAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecoverAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIdList, androidInstanceIdList_);
      DARABONBA_PTR_TO_JSON(BackupFileId, backupFileId_);
      DARABONBA_PTR_TO_JSON(BackupFilePath, backupFilePath_);
      DARABONBA_PTR_TO_JSON(UploadEndpoint, uploadEndpoint_);
      DARABONBA_PTR_TO_JSON(UploadType, uploadType_);
    };
    friend void from_json(const Darabonba::Json& j, RecoverAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIdList, androidInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(BackupFileId, backupFileId_);
      DARABONBA_PTR_FROM_JSON(BackupFilePath, backupFilePath_);
      DARABONBA_PTR_FROM_JSON(UploadEndpoint, uploadEndpoint_);
      DARABONBA_PTR_FROM_JSON(UploadType, uploadType_);
    };
    RecoverAppRequest() = default ;
    RecoverAppRequest(const RecoverAppRequest &) = default ;
    RecoverAppRequest(RecoverAppRequest &&) = default ;
    RecoverAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecoverAppRequest() = default ;
    RecoverAppRequest& operator=(const RecoverAppRequest &) = default ;
    RecoverAppRequest& operator=(RecoverAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceIdList_ == nullptr
        && this->backupFileId_ == nullptr && this->backupFilePath_ == nullptr && this->uploadEndpoint_ == nullptr && this->uploadType_ == nullptr; };
    // androidInstanceIdList Field Functions 
    bool hasAndroidInstanceIdList() const { return this->androidInstanceIdList_ != nullptr;};
    void deleteAndroidInstanceIdList() { this->androidInstanceIdList_ = nullptr;};
    inline const vector<string> & getAndroidInstanceIdList() const { DARABONBA_PTR_GET_CONST(androidInstanceIdList_, vector<string>) };
    inline vector<string> getAndroidInstanceIdList() { DARABONBA_PTR_GET(androidInstanceIdList_, vector<string>) };
    inline RecoverAppRequest& setAndroidInstanceIdList(const vector<string> & androidInstanceIdList) { DARABONBA_PTR_SET_VALUE(androidInstanceIdList_, androidInstanceIdList) };
    inline RecoverAppRequest& setAndroidInstanceIdList(vector<string> && androidInstanceIdList) { DARABONBA_PTR_SET_RVALUE(androidInstanceIdList_, androidInstanceIdList) };


    // backupFileId Field Functions 
    bool hasBackupFileId() const { return this->backupFileId_ != nullptr;};
    void deleteBackupFileId() { this->backupFileId_ = nullptr;};
    inline string getBackupFileId() const { DARABONBA_PTR_GET_DEFAULT(backupFileId_, "") };
    inline RecoverAppRequest& setBackupFileId(string backupFileId) { DARABONBA_PTR_SET_VALUE(backupFileId_, backupFileId) };


    // backupFilePath Field Functions 
    bool hasBackupFilePath() const { return this->backupFilePath_ != nullptr;};
    void deleteBackupFilePath() { this->backupFilePath_ = nullptr;};
    inline string getBackupFilePath() const { DARABONBA_PTR_GET_DEFAULT(backupFilePath_, "") };
    inline RecoverAppRequest& setBackupFilePath(string backupFilePath) { DARABONBA_PTR_SET_VALUE(backupFilePath_, backupFilePath) };


    // uploadEndpoint Field Functions 
    bool hasUploadEndpoint() const { return this->uploadEndpoint_ != nullptr;};
    void deleteUploadEndpoint() { this->uploadEndpoint_ = nullptr;};
    inline string getUploadEndpoint() const { DARABONBA_PTR_GET_DEFAULT(uploadEndpoint_, "") };
    inline RecoverAppRequest& setUploadEndpoint(string uploadEndpoint) { DARABONBA_PTR_SET_VALUE(uploadEndpoint_, uploadEndpoint) };


    // uploadType Field Functions 
    bool hasUploadType() const { return this->uploadType_ != nullptr;};
    void deleteUploadType() { this->uploadType_ = nullptr;};
    inline string getUploadType() const { DARABONBA_PTR_GET_DEFAULT(uploadType_, "") };
    inline RecoverAppRequest& setUploadType(string uploadType) { DARABONBA_PTR_SET_VALUE(uploadType_, uploadType) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> androidInstanceIdList_ {};
    // This parameter is required.
    shared_ptr<string> backupFileId_ {};
    // This parameter is required.
    shared_ptr<string> backupFilePath_ {};
    shared_ptr<string> uploadEndpoint_ {};
    // This parameter is required.
    shared_ptr<string> uploadType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
