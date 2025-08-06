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
      DARABONBA_PTR_TO_JSON(SourceFilePath, sourceFilePath_);
      DARABONBA_PTR_TO_JSON(UploadEndpoint, uploadEndpoint_);
      DARABONBA_PTR_TO_JSON(UploadType, uploadType_);
      DARABONBA_PTR_TO_JSON(UploadUrl, uploadUrl_);
    };
    friend void from_json(const Darabonba::Json& j, FetchFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIdList, androidInstanceIdList_);
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
    virtual bool empty() const override { this->androidInstanceIdList_ != nullptr
        && this->sourceFilePath_ != nullptr && this->uploadEndpoint_ != nullptr && this->uploadType_ != nullptr && this->uploadUrl_ != nullptr; };
    // androidInstanceIdList Field Functions 
    bool hasAndroidInstanceIdList() const { return this->androidInstanceIdList_ != nullptr;};
    void deleteAndroidInstanceIdList() { this->androidInstanceIdList_ = nullptr;};
    inline const vector<string> & androidInstanceIdList() const { DARABONBA_PTR_GET_CONST(androidInstanceIdList_, vector<string>) };
    inline vector<string> androidInstanceIdList() { DARABONBA_PTR_GET(androidInstanceIdList_, vector<string>) };
    inline FetchFileRequest& setAndroidInstanceIdList(const vector<string> & androidInstanceIdList) { DARABONBA_PTR_SET_VALUE(androidInstanceIdList_, androidInstanceIdList) };
    inline FetchFileRequest& setAndroidInstanceIdList(vector<string> && androidInstanceIdList) { DARABONBA_PTR_SET_RVALUE(androidInstanceIdList_, androidInstanceIdList) };


    // sourceFilePath Field Functions 
    bool hasSourceFilePath() const { return this->sourceFilePath_ != nullptr;};
    void deleteSourceFilePath() { this->sourceFilePath_ = nullptr;};
    inline string sourceFilePath() const { DARABONBA_PTR_GET_DEFAULT(sourceFilePath_, "") };
    inline FetchFileRequest& setSourceFilePath(string sourceFilePath) { DARABONBA_PTR_SET_VALUE(sourceFilePath_, sourceFilePath) };


    // uploadEndpoint Field Functions 
    bool hasUploadEndpoint() const { return this->uploadEndpoint_ != nullptr;};
    void deleteUploadEndpoint() { this->uploadEndpoint_ = nullptr;};
    inline string uploadEndpoint() const { DARABONBA_PTR_GET_DEFAULT(uploadEndpoint_, "") };
    inline FetchFileRequest& setUploadEndpoint(string uploadEndpoint) { DARABONBA_PTR_SET_VALUE(uploadEndpoint_, uploadEndpoint) };


    // uploadType Field Functions 
    bool hasUploadType() const { return this->uploadType_ != nullptr;};
    void deleteUploadType() { this->uploadType_ = nullptr;};
    inline string uploadType() const { DARABONBA_PTR_GET_DEFAULT(uploadType_, "") };
    inline FetchFileRequest& setUploadType(string uploadType) { DARABONBA_PTR_SET_VALUE(uploadType_, uploadType) };


    // uploadUrl Field Functions 
    bool hasUploadUrl() const { return this->uploadUrl_ != nullptr;};
    void deleteUploadUrl() { this->uploadUrl_ = nullptr;};
    inline string uploadUrl() const { DARABONBA_PTR_GET_DEFAULT(uploadUrl_, "") };
    inline FetchFileRequest& setUploadUrl(string uploadUrl) { DARABONBA_PTR_SET_VALUE(uploadUrl_, uploadUrl) };


  protected:
    // The IDs of the cloud phone instances.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> androidInstanceIdList_ = nullptr;
    // The path to the file that you want to pull from the cloud phone instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceFilePath_ = nullptr;
    // The endpoint of the OSS bucket in which you want to store the pulled file.
    // 
    // >  Set the value to an internal endpoint when the cloud phone instance and the OSS bucket are in the same region to improve upload speed without incurring public traffic fees. Sample endpoint: `oss-cn-hangzhou-internal.aliyuncs.com`. For more information, see [OSS regions and endpoints](https://help.aliyun.com/document_detail/31837.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> uploadEndpoint_ = nullptr;
    // The type of the storage service.
    // 
    // >  Currently, only OSS is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> uploadType_ = nullptr;
    // The OSS URL of the pulled file.
    // 
    // >  The OSS bucket name must start with "cloudphone-saved-bucket-", for example, "cloudphone-saved-bucket-example". You must also create an OSS directory to store the backup data. Set the value for UploadUrl in this format: oss://\\<BucketName>/\\<OSSDirectoryName>.
    // 
    // This parameter is required.
    std::shared_ptr<string> uploadUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
