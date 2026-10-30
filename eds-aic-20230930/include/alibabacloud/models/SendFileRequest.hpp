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
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(FileMd5, fileMd5_);
      DARABONBA_PTR_TO_JSON(SourceFilePath, sourceFilePath_);
      DARABONBA_PTR_TO_JSON(TargetFileName, targetFileName_);
      DARABONBA_PTR_TO_JSON(UploadEndpoint, uploadEndpoint_);
      DARABONBA_PTR_TO_JSON(UploadType, uploadType_);
      DARABONBA_PTR_TO_JSON(UploadUrl, uploadUrl_);
    };
    friend void from_json(const Darabonba::Json& j, SendFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIdList, androidInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(FileMd5, fileMd5_);
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
        && this->autoInstall_ == nullptr && this->clientToken_ == nullptr && this->fileMd5_ == nullptr && this->sourceFilePath_ == nullptr && this->targetFileName_ == nullptr
        && this->uploadEndpoint_ == nullptr && this->uploadType_ == nullptr && this->uploadUrl_ == nullptr; };
    // androidInstanceIdList Field Functions 
    bool hasAndroidInstanceIdList() const { return this->androidInstanceIdList_ != nullptr;};
    void deleteAndroidInstanceIdList() { this->androidInstanceIdList_ = nullptr;};
    inline const vector<string> & getAndroidInstanceIdList() const { DARABONBA_PTR_GET_CONST(androidInstanceIdList_, vector<string>) };
    inline vector<string> getAndroidInstanceIdList() { DARABONBA_PTR_GET(androidInstanceIdList_, vector<string>) };
    inline SendFileRequest& setAndroidInstanceIdList(const vector<string> & androidInstanceIdList) { DARABONBA_PTR_SET_VALUE(androidInstanceIdList_, androidInstanceIdList) };
    inline SendFileRequest& setAndroidInstanceIdList(vector<string> && androidInstanceIdList) { DARABONBA_PTR_SET_RVALUE(androidInstanceIdList_, androidInstanceIdList) };


    // autoInstall Field Functions 
    bool hasAutoInstall() const { return this->autoInstall_ != nullptr;};
    void deleteAutoInstall() { this->autoInstall_ = nullptr;};
    inline bool getAutoInstall() const { DARABONBA_PTR_GET_DEFAULT(autoInstall_, false) };
    inline SendFileRequest& setAutoInstall(bool autoInstall) { DARABONBA_PTR_SET_VALUE(autoInstall_, autoInstall) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SendFileRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // fileMd5 Field Functions 
    bool hasFileMd5() const { return this->fileMd5_ != nullptr;};
    void deleteFileMd5() { this->fileMd5_ = nullptr;};
    inline string getFileMd5() const { DARABONBA_PTR_GET_DEFAULT(fileMd5_, "") };
    inline SendFileRequest& setFileMd5(string fileMd5) { DARABONBA_PTR_SET_VALUE(fileMd5_, fileMd5) };


    // sourceFilePath Field Functions 
    bool hasSourceFilePath() const { return this->sourceFilePath_ != nullptr;};
    void deleteSourceFilePath() { this->sourceFilePath_ = nullptr;};
    inline string getSourceFilePath() const { DARABONBA_PTR_GET_DEFAULT(sourceFilePath_, "") };
    inline SendFileRequest& setSourceFilePath(string sourceFilePath) { DARABONBA_PTR_SET_VALUE(sourceFilePath_, sourceFilePath) };


    // targetFileName Field Functions 
    bool hasTargetFileName() const { return this->targetFileName_ != nullptr;};
    void deleteTargetFileName() { this->targetFileName_ = nullptr;};
    inline string getTargetFileName() const { DARABONBA_PTR_GET_DEFAULT(targetFileName_, "") };
    inline SendFileRequest& setTargetFileName(string targetFileName) { DARABONBA_PTR_SET_VALUE(targetFileName_, targetFileName) };


    // uploadEndpoint Field Functions 
    bool hasUploadEndpoint() const { return this->uploadEndpoint_ != nullptr;};
    void deleteUploadEndpoint() { this->uploadEndpoint_ = nullptr;};
    inline string getUploadEndpoint() const { DARABONBA_PTR_GET_DEFAULT(uploadEndpoint_, "") };
    inline SendFileRequest& setUploadEndpoint(string uploadEndpoint) { DARABONBA_PTR_SET_VALUE(uploadEndpoint_, uploadEndpoint) };


    // uploadType Field Functions 
    bool hasUploadType() const { return this->uploadType_ != nullptr;};
    void deleteUploadType() { this->uploadType_ = nullptr;};
    inline string getUploadType() const { DARABONBA_PTR_GET_DEFAULT(uploadType_, "") };
    inline SendFileRequest& setUploadType(string uploadType) { DARABONBA_PTR_SET_VALUE(uploadType_, uploadType) };


    // uploadUrl Field Functions 
    bool hasUploadUrl() const { return this->uploadUrl_ != nullptr;};
    void deleteUploadUrl() { this->uploadUrl_ = nullptr;};
    inline string getUploadUrl() const { DARABONBA_PTR_GET_DEFAULT(uploadUrl_, "") };
    inline SendFileRequest& setUploadUrl(string uploadUrl) { DARABONBA_PTR_SET_VALUE(uploadUrl_, uploadUrl) };


  protected:
    // The list of instances.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> androidInstanceIdList_ {};
    // Specifies whether to automatically install the uploaded application.
    shared_ptr<bool> autoInstall_ {};
    // The client token that is used to ensure the idempotence of the request and prevent duplicate submissions. The token can be up to 100 characters in length.
    shared_ptr<string> clientToken_ {};
    // The MD5 value of the input file.
    shared_ptr<string> fileMd5_ {};
    // The upload path inside the cloud phone to which the file is uploaded.
    // 
    // > If UploadType is OSS or OSS_BRIDGED, the upload path SourceFilePath inside the cloud phone must be a directory, such as /sdcard/Download. If UploadType is DOWNLOAD_URL, the upload path SourceFilePath inside the cloud phone must be a file, such as /sdcard/Download/MyFile.txt.
    // >
    // 
    // This parameter is required.
    shared_ptr<string> sourceFilePath_ {};
    // The name of the file uploaded from OSS to the cloud phone.
    // 
    // > If UploadType is OSS or OSS_BRIDGED, the TargetFileName parameter is optional. If TargetFileName is empty, the original file name is retained when the OSS file is uploaded to the cloud phone. If TargetFileName is not empty, the file name in the SourceFilePath directory on the cloud phone is set to the value of TargetFileName. If UploadType is DOWNLOAD_URL, the TargetFileName parameter does not take effect.
    // >
    shared_ptr<string> targetFileName_ {};
    // The service domain name for uploading files to OSS. This parameter is required when UploadType is set to OSS or OSS_BRIDGED.
    // 
    // > If the cloud phone and the OSS bucket are in the same region, you can use an internal endpoint to accelerate the transmission speed and avoid Internet traffic fees. For example, the internal endpoint for the China (Hangzhou) region is `oss-cn-hangzhou-internal.aliyuncs.com`. For more information about the mapping between regions and endpoints, see [Regions and endpoints](https://help.aliyun.com/document_detail/31837.html).
    shared_ptr<string> uploadEndpoint_ {};
    // The storage type of the file to be uploaded.
    // 
    // - OSS: The file to be uploaded is an OSS resource.
    // - DOWNLOAD_URL: The file to be uploaded is a public download URL.
    // - OSS_BRIDGED: The file is synchronized to OSS through a public download URL and then distributed to cloud phone instances over the OSS internal network.
    // 
    // This parameter is required.
    shared_ptr<string> uploadType_ {};
    // - If UploadType is OSS, UploadUrl is the cloud address of the file uploaded to OSS.
    // > The OSS bucket name must start with the prefix "cloudphone-saved-bucket-", such as "cloudphone-saved-bucket-example". You must create an OSS folder as the backup directory. The format of UploadUrl is "oss://" + "Bucket name" + "/" + "Folder name" + "Uploaded file name".
    // - If UploadType is DOWNLOAD or OSS_BRIDGED, UploadUrl is the public download URL of the file.
    // 
    // This parameter is required.
    shared_ptr<string> uploadUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
