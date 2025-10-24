// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDFILEREQUEST_HPP_
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
  class SendFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIdList, androidInstanceIdList_);
      DARABONBA_PTR_TO_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_TO_JSON(SourceFilePath, sourceFilePath_);
      DARABONBA_PTR_TO_JSON(TargetFileName, targetFileName_);
      DARABONBA_PTR_TO_JSON(UploadEndpoint, uploadEndpoint_);
      DARABONBA_PTR_TO_JSON(UploadType, uploadType_);
      DARABONBA_PTR_TO_JSON(UploadUrl, uploadUrl_);
    };
    friend void from_json(const Darabonba::Json& j, SendFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIdList, androidInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_FROM_JSON(SourceFilePath, sourceFilePath_);
      DARABONBA_PTR_FROM_JSON(TargetFileName, targetFileName_);
      DARABONBA_PTR_FROM_JSON(UploadEndpoint, uploadEndpoint_);
      DARABONBA_PTR_FROM_JSON(UploadType, uploadType_);
      DARABONBA_PTR_FROM_JSON(UploadUrl, uploadUrl_);
    };
    SendFileRequest() = default ;
    SendFileRequest(const SendFileRequest &) = default ;
    SendFileRequest(SendFileRequest &&) = default ;
    SendFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendFileRequest() = default ;
    SendFileRequest& operator=(const SendFileRequest &) = default ;
    SendFileRequest& operator=(SendFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceIdList_ == nullptr
        && return this->autoInstall_ == nullptr && return this->sourceFilePath_ == nullptr && return this->targetFileName_ == nullptr && return this->uploadEndpoint_ == nullptr && return this->uploadType_ == nullptr
        && return this->uploadUrl_ == nullptr; };
    // androidInstanceIdList Field Functions 
    bool hasAndroidInstanceIdList() const { return this->androidInstanceIdList_ != nullptr;};
    void deleteAndroidInstanceIdList() { this->androidInstanceIdList_ = nullptr;};
    inline const vector<string> & androidInstanceIdList() const { DARABONBA_PTR_GET_CONST(androidInstanceIdList_, vector<string>) };
    inline vector<string> androidInstanceIdList() { DARABONBA_PTR_GET(androidInstanceIdList_, vector<string>) };
    inline SendFileRequest& setAndroidInstanceIdList(const vector<string> & androidInstanceIdList) { DARABONBA_PTR_SET_VALUE(androidInstanceIdList_, androidInstanceIdList) };
    inline SendFileRequest& setAndroidInstanceIdList(vector<string> && androidInstanceIdList) { DARABONBA_PTR_SET_RVALUE(androidInstanceIdList_, androidInstanceIdList) };


    // autoInstall Field Functions 
    bool hasAutoInstall() const { return this->autoInstall_ != nullptr;};
    void deleteAutoInstall() { this->autoInstall_ = nullptr;};
    inline bool autoInstall() const { DARABONBA_PTR_GET_DEFAULT(autoInstall_, false) };
    inline SendFileRequest& setAutoInstall(bool autoInstall) { DARABONBA_PTR_SET_VALUE(autoInstall_, autoInstall) };


    // sourceFilePath Field Functions 
    bool hasSourceFilePath() const { return this->sourceFilePath_ != nullptr;};
    void deleteSourceFilePath() { this->sourceFilePath_ = nullptr;};
    inline string sourceFilePath() const { DARABONBA_PTR_GET_DEFAULT(sourceFilePath_, "") };
    inline SendFileRequest& setSourceFilePath(string sourceFilePath) { DARABONBA_PTR_SET_VALUE(sourceFilePath_, sourceFilePath) };


    // targetFileName Field Functions 
    bool hasTargetFileName() const { return this->targetFileName_ != nullptr;};
    void deleteTargetFileName() { this->targetFileName_ = nullptr;};
    inline string targetFileName() const { DARABONBA_PTR_GET_DEFAULT(targetFileName_, "") };
    inline SendFileRequest& setTargetFileName(string targetFileName) { DARABONBA_PTR_SET_VALUE(targetFileName_, targetFileName) };


    // uploadEndpoint Field Functions 
    bool hasUploadEndpoint() const { return this->uploadEndpoint_ != nullptr;};
    void deleteUploadEndpoint() { this->uploadEndpoint_ = nullptr;};
    inline string uploadEndpoint() const { DARABONBA_PTR_GET_DEFAULT(uploadEndpoint_, "") };
    inline SendFileRequest& setUploadEndpoint(string uploadEndpoint) { DARABONBA_PTR_SET_VALUE(uploadEndpoint_, uploadEndpoint) };


    // uploadType Field Functions 
    bool hasUploadType() const { return this->uploadType_ != nullptr;};
    void deleteUploadType() { this->uploadType_ = nullptr;};
    inline string uploadType() const { DARABONBA_PTR_GET_DEFAULT(uploadType_, "") };
    inline SendFileRequest& setUploadType(string uploadType) { DARABONBA_PTR_SET_VALUE(uploadType_, uploadType) };


    // uploadUrl Field Functions 
    bool hasUploadUrl() const { return this->uploadUrl_ != nullptr;};
    void deleteUploadUrl() { this->uploadUrl_ = nullptr;};
    inline string uploadUrl() const { DARABONBA_PTR_GET_DEFAULT(uploadUrl_, "") };
    inline SendFileRequest& setUploadUrl(string uploadUrl) { DARABONBA_PTR_SET_VALUE(uploadUrl_, uploadUrl) };


  protected:
    // The IDs of the cloud phone instances.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> androidInstanceIdList_ = nullptr;
    std::shared_ptr<bool> autoInstall_ = nullptr;
    // The path to which you want to upload the pushed file in the cloud phone instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceFilePath_ = nullptr;
    // The name of the file uploaded from the Object Storage Service (OSS) to the cloud phone instance.
    // 
    // >  If UploadType is set to OSS, you must specify TargetFileName. If TargetFileName is empty, the file uploaded from the OSS bucket to the cloud phone instance retains its original name. If TargetFileName is provided with a value, the uploaded file in the SourceFilePath directory uses the specified name (TargetFileName). If UploadType is set to DOWNLOAD_URL, TargetFileName does not take effect.
    std::shared_ptr<string> targetFileName_ = nullptr;
    // The endpoint of the OSS bucket in which the file is stored.
    // 
    // >  Set the value to an internal endpoint when the cloud phone instance and the OSS bucket are in the same region to improve transfer speed without incurring public traffic fees. Sample endpoint: `oss-cn-hangzhou-internal.aliyuncs.com`. For more information, see [OSS regions and endpoints](https://help.aliyun.com/document_detail/31837.html).
    std::shared_ptr<string> uploadEndpoint_ = nullptr;
    // The storage type of the file that you want to upload.
    // 
    // *   Set the value to OSS.
    // 
    // This parameter is required.
    std::shared_ptr<string> uploadType_ = nullptr;
    // The OSS URL of the file.
    // 
    // >  The OSS bucket name must start with "cloudphone-saved-bucket-", for example, "cloudphone-saved-bucket-example". You must also create an OSS directory to store the backup data. Set the value for UploadUrl in this format: oss://\\<BucketName>/\\<OSSDirectoryName>\\<FileName>.
    // 
    // This parameter is required.
    std::shared_ptr<string> uploadUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
