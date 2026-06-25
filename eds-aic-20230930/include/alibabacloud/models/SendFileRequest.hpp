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
    // The IDs of one or more cloud phone instances.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> androidInstanceIdList_ {};
    // Specifies whether to automatically install the application after the file is uploaded.
    shared_ptr<bool> autoInstall_ {};
    // A client-generated token that ensures request idempotence and prevents duplicate submissions. The token can contain up to 100 characters.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> fileMd5_ {};
    // The destination path on the cloud phone.
    // 
    // > If `UploadType` is `OSS` or `OSS_BRIDGED`, `SourceFilePath` must specify a directory, for example, `/sdcard/Download/`. If `UploadType` is `DOWNLOAD_URL`, `SourceFilePath` must specify a full file path, for example, `/sdcard/Download/MyFile.txt`.
    // 
    // This parameter is required.
    shared_ptr<string> sourceFilePath_ {};
    // The name for the destination file on the cloud phone.
    // 
    // > This parameter is optional and takes effect only when `UploadType` is set to `OSS` or `OSS_BRIDGED`. If you specify this parameter, the file is saved with this name in the path specified by `SourceFilePath`. If you leave this parameter empty, the source file name is used. This parameter is ignored when `UploadType` is set to `DOWNLOAD_URL`.
    shared_ptr<string> targetFileName_ {};
    // The service endpoint of Object Storage Service (OSS). This parameter is required if `UploadType` is `OSS` or `OSS_BRIDGED`.
    // 
    // > If the cloud phone instance and the OSS bucket are in the same region, you can specify an internal endpoint to accelerate data transfer and avoid public data transfer costs. For example, the internal endpoint for the China (Hangzhou) region is `oss-cn-hangzhou-internal.aliyuncs.com`. For a complete list of endpoints, see [OSS regions and endpoints](https://help.aliyun.com/document_detail/31837.html).
    shared_ptr<string> uploadEndpoint_ {};
    // The storage type of the source file. Valid values:
    // 
    // - **OSS**: The file is stored in Object Storage Service (OSS).
    // 
    // - **DOWNLOAD_URL**: The file is accessible via a public download link.
    // 
    // - **OSS_BRIDGED**: The service first downloads the file from a public download link to an internal OSS bucket, and then distributes it to the cloud phone instances over the internal network.
    // 
    // This parameter is required.
    shared_ptr<string> uploadType_ {};
    // - If `UploadType` is `OSS`, this parameter specifies the URI of the source object in Object Storage Service (OSS).
    // 
    // > The URI must be in the `oss://<bucket-name>/<object-key>` format. The specified OSS bucket name must have the `cloudphone-saved-bucket-` prefix, for example, `cloudphone-saved-bucket-example`.
    // 
    // - If `UploadType` is `DOWNLOAD_URL` or `OSS_BRIDGED`, this parameter specifies the public download link of the source file.
    // 
    // This parameter is required.
    shared_ptr<string> uploadUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
