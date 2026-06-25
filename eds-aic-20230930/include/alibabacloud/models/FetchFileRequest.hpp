// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FETCHFILEREQUEST_HPP_
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
  class FetchFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIdList, androidInstanceIdList_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(SourceFilePath, sourceFilePath_);
      DARABONBA_PTR_TO_JSON(UploadEndpoint, uploadEndpoint_);
      DARABONBA_PTR_TO_JSON(UploadType, uploadType_);
      DARABONBA_PTR_TO_JSON(UploadUrl, uploadUrl_);
    };
    friend void from_json(const Darabonba::Json& j, FetchFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIdList, androidInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(SourceFilePath, sourceFilePath_);
      DARABONBA_PTR_FROM_JSON(UploadEndpoint, uploadEndpoint_);
      DARABONBA_PTR_FROM_JSON(UploadType, uploadType_);
      DARABONBA_PTR_FROM_JSON(UploadUrl, uploadUrl_);
    };
    FetchFileRequest() = default ;
    FetchFileRequest(const FetchFileRequest &) = default ;
    FetchFileRequest(FetchFileRequest &&) = default ;
    FetchFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchFileRequest() = default ;
    FetchFileRequest& operator=(const FetchFileRequest &) = default ;
    FetchFileRequest& operator=(FetchFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceIdList_ == nullptr
        && this->clientToken_ == nullptr && this->sourceFilePath_ == nullptr && this->uploadEndpoint_ == nullptr && this->uploadType_ == nullptr && this->uploadUrl_ == nullptr; };
    // androidInstanceIdList Field Functions 
    bool hasAndroidInstanceIdList() const { return this->androidInstanceIdList_ != nullptr;};
    void deleteAndroidInstanceIdList() { this->androidInstanceIdList_ = nullptr;};
    inline const vector<string> & getAndroidInstanceIdList() const { DARABONBA_PTR_GET_CONST(androidInstanceIdList_, vector<string>) };
    inline vector<string> getAndroidInstanceIdList() { DARABONBA_PTR_GET(androidInstanceIdList_, vector<string>) };
    inline FetchFileRequest& setAndroidInstanceIdList(const vector<string> & androidInstanceIdList) { DARABONBA_PTR_SET_VALUE(androidInstanceIdList_, androidInstanceIdList) };
    inline FetchFileRequest& setAndroidInstanceIdList(vector<string> && androidInstanceIdList) { DARABONBA_PTR_SET_RVALUE(androidInstanceIdList_, androidInstanceIdList) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline FetchFileRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // sourceFilePath Field Functions 
    bool hasSourceFilePath() const { return this->sourceFilePath_ != nullptr;};
    void deleteSourceFilePath() { this->sourceFilePath_ = nullptr;};
    inline string getSourceFilePath() const { DARABONBA_PTR_GET_DEFAULT(sourceFilePath_, "") };
    inline FetchFileRequest& setSourceFilePath(string sourceFilePath) { DARABONBA_PTR_SET_VALUE(sourceFilePath_, sourceFilePath) };


    // uploadEndpoint Field Functions 
    bool hasUploadEndpoint() const { return this->uploadEndpoint_ != nullptr;};
    void deleteUploadEndpoint() { this->uploadEndpoint_ = nullptr;};
    inline string getUploadEndpoint() const { DARABONBA_PTR_GET_DEFAULT(uploadEndpoint_, "") };
    inline FetchFileRequest& setUploadEndpoint(string uploadEndpoint) { DARABONBA_PTR_SET_VALUE(uploadEndpoint_, uploadEndpoint) };


    // uploadType Field Functions 
    bool hasUploadType() const { return this->uploadType_ != nullptr;};
    void deleteUploadType() { this->uploadType_ = nullptr;};
    inline string getUploadType() const { DARABONBA_PTR_GET_DEFAULT(uploadType_, "") };
    inline FetchFileRequest& setUploadType(string uploadType) { DARABONBA_PTR_SET_VALUE(uploadType_, uploadType) };


    // uploadUrl Field Functions 
    bool hasUploadUrl() const { return this->uploadUrl_ != nullptr;};
    void deleteUploadUrl() { this->uploadUrl_ = nullptr;};
    inline string getUploadUrl() const { DARABONBA_PTR_GET_DEFAULT(uploadUrl_, "") };
    inline FetchFileRequest& setUploadUrl(string uploadUrl) { DARABONBA_PTR_SET_VALUE(uploadUrl_, uploadUrl) };


  protected:
    // A list of cloud phone instance IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> androidInstanceIdList_ {};
    // A client-generated token, up to 100 characters long, that ensures the idempotency of the request.
    shared_ptr<string> clientToken_ {};
    // The path of the file or folder to fetch from the cloud phone.
    // 
    // This parameter is required.
    shared_ptr<string> sourceFilePath_ {};
    // The endpoint for uploading files to OSS.
    // 
    // > If the cloud phone and the destination OSS bucket are in the same region, you can use an internal endpoint to accelerate the transfer and avoid public network charges. For example, in the China (Hangzhou) region, use `oss-cn-hangzhou-internal.aliyuncs.com`. For a complete list of endpoints, see [OSS regions and endpoints](https://help.aliyun.com/document_detail/31837.html).
    // 
    // This parameter is required.
    shared_ptr<string> uploadEndpoint_ {};
    // The type of storage service for the fetched file.
    // 
    // > Currently, only Object Storage Service (OSS) is supported.
    // 
    // This parameter is required.
    shared_ptr<string> uploadType_ {};
    // The destination URL in OSS.
    // 
    // > The destination bucket name must be prefixed with `cloudphone-saved-bucket-`. For example, `cloudphone-saved-bucket-example`. You must also create a folder in the bucket to serve as the destination directory. The `UploadUrl` must follow the format: `oss://<bucket_name>/<folder_name>`.
    // 
    // This parameter is required.
    shared_ptr<string> uploadUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
