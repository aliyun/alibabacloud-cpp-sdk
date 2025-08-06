// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPORTUPLOADPROGRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPORTUPLOADPROGRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ReportUploadProgressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReportUploadProgressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(AuthInfo, authInfo_);
      DARABONBA_PTR_TO_JSON(AuthTimestamp, authTimestamp_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(DeviceModel, deviceModel_);
      DARABONBA_PTR_TO_JSON(DonePartsCount, donePartsCount_);
      DARABONBA_PTR_TO_JSON(FileCreateTime, fileCreateTime_);
      DARABONBA_PTR_TO_JSON(FileHash, fileHash_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PartSize, partSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TerminalType, terminalType_);
      DARABONBA_PTR_TO_JSON(TotalPart, totalPart_);
      DARABONBA_PTR_TO_JSON(UploadAddress, uploadAddress_);
      DARABONBA_PTR_TO_JSON(UploadId, uploadId_);
      DARABONBA_PTR_TO_JSON(UploadPoint, uploadPoint_);
      DARABONBA_PTR_TO_JSON(UploadRatio, uploadRatio_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, ReportUploadProgressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(AuthInfo, authInfo_);
      DARABONBA_PTR_FROM_JSON(AuthTimestamp, authTimestamp_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(DeviceModel, deviceModel_);
      DARABONBA_PTR_FROM_JSON(DonePartsCount, donePartsCount_);
      DARABONBA_PTR_FROM_JSON(FileCreateTime, fileCreateTime_);
      DARABONBA_PTR_FROM_JSON(FileHash, fileHash_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PartSize, partSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TerminalType, terminalType_);
      DARABONBA_PTR_FROM_JSON(TotalPart, totalPart_);
      DARABONBA_PTR_FROM_JSON(UploadAddress, uploadAddress_);
      DARABONBA_PTR_FROM_JSON(UploadId, uploadId_);
      DARABONBA_PTR_FROM_JSON(UploadPoint, uploadPoint_);
      DARABONBA_PTR_FROM_JSON(UploadRatio, uploadRatio_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    ReportUploadProgressRequest() = default ;
    ReportUploadProgressRequest(const ReportUploadProgressRequest &) = default ;
    ReportUploadProgressRequest(ReportUploadProgressRequest &&) = default ;
    ReportUploadProgressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReportUploadProgressRequest() = default ;
    ReportUploadProgressRequest& operator=(const ReportUploadProgressRequest &) = default ;
    ReportUploadProgressRequest& operator=(ReportUploadProgressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appVersion_ != nullptr
        && this->authInfo_ != nullptr && this->authTimestamp_ != nullptr && this->businessType_ != nullptr && this->clientId_ != nullptr && this->deviceModel_ != nullptr
        && this->donePartsCount_ != nullptr && this->fileCreateTime_ != nullptr && this->fileHash_ != nullptr && this->fileName_ != nullptr && this->fileSize_ != nullptr
        && this->ownerId_ != nullptr && this->partSize_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->source_ != nullptr
        && this->terminalType_ != nullptr && this->totalPart_ != nullptr && this->uploadAddress_ != nullptr && this->uploadId_ != nullptr && this->uploadPoint_ != nullptr
        && this->uploadRatio_ != nullptr && this->userId_ != nullptr && this->videoId_ != nullptr; };
    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline ReportUploadProgressRequest& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // authInfo Field Functions 
    bool hasAuthInfo() const { return this->authInfo_ != nullptr;};
    void deleteAuthInfo() { this->authInfo_ = nullptr;};
    inline string authInfo() const { DARABONBA_PTR_GET_DEFAULT(authInfo_, "") };
    inline ReportUploadProgressRequest& setAuthInfo(string authInfo) { DARABONBA_PTR_SET_VALUE(authInfo_, authInfo) };


    // authTimestamp Field Functions 
    bool hasAuthTimestamp() const { return this->authTimestamp_ != nullptr;};
    void deleteAuthTimestamp() { this->authTimestamp_ = nullptr;};
    inline int64_t authTimestamp() const { DARABONBA_PTR_GET_DEFAULT(authTimestamp_, 0L) };
    inline ReportUploadProgressRequest& setAuthTimestamp(int64_t authTimestamp) { DARABONBA_PTR_SET_VALUE(authTimestamp_, authTimestamp) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline ReportUploadProgressRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline ReportUploadProgressRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // deviceModel Field Functions 
    bool hasDeviceModel() const { return this->deviceModel_ != nullptr;};
    void deleteDeviceModel() { this->deviceModel_ = nullptr;};
    inline string deviceModel() const { DARABONBA_PTR_GET_DEFAULT(deviceModel_, "") };
    inline ReportUploadProgressRequest& setDeviceModel(string deviceModel) { DARABONBA_PTR_SET_VALUE(deviceModel_, deviceModel) };


    // donePartsCount Field Functions 
    bool hasDonePartsCount() const { return this->donePartsCount_ != nullptr;};
    void deleteDonePartsCount() { this->donePartsCount_ = nullptr;};
    inline int32_t donePartsCount() const { DARABONBA_PTR_GET_DEFAULT(donePartsCount_, 0) };
    inline ReportUploadProgressRequest& setDonePartsCount(int32_t donePartsCount) { DARABONBA_PTR_SET_VALUE(donePartsCount_, donePartsCount) };


    // fileCreateTime Field Functions 
    bool hasFileCreateTime() const { return this->fileCreateTime_ != nullptr;};
    void deleteFileCreateTime() { this->fileCreateTime_ = nullptr;};
    inline string fileCreateTime() const { DARABONBA_PTR_GET_DEFAULT(fileCreateTime_, "") };
    inline ReportUploadProgressRequest& setFileCreateTime(string fileCreateTime) { DARABONBA_PTR_SET_VALUE(fileCreateTime_, fileCreateTime) };


    // fileHash Field Functions 
    bool hasFileHash() const { return this->fileHash_ != nullptr;};
    void deleteFileHash() { this->fileHash_ = nullptr;};
    inline string fileHash() const { DARABONBA_PTR_GET_DEFAULT(fileHash_, "") };
    inline ReportUploadProgressRequest& setFileHash(string fileHash) { DARABONBA_PTR_SET_VALUE(fileHash_, fileHash) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ReportUploadProgressRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline ReportUploadProgressRequest& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ReportUploadProgressRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // partSize Field Functions 
    bool hasPartSize() const { return this->partSize_ != nullptr;};
    void deletePartSize() { this->partSize_ = nullptr;};
    inline int64_t partSize() const { DARABONBA_PTR_GET_DEFAULT(partSize_, 0L) };
    inline ReportUploadProgressRequest& setPartSize(int64_t partSize) { DARABONBA_PTR_SET_VALUE(partSize_, partSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ReportUploadProgressRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ReportUploadProgressRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ReportUploadProgressRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // terminalType Field Functions 
    bool hasTerminalType() const { return this->terminalType_ != nullptr;};
    void deleteTerminalType() { this->terminalType_ = nullptr;};
    inline string terminalType() const { DARABONBA_PTR_GET_DEFAULT(terminalType_, "") };
    inline ReportUploadProgressRequest& setTerminalType(string terminalType) { DARABONBA_PTR_SET_VALUE(terminalType_, terminalType) };


    // totalPart Field Functions 
    bool hasTotalPart() const { return this->totalPart_ != nullptr;};
    void deleteTotalPart() { this->totalPart_ = nullptr;};
    inline int32_t totalPart() const { DARABONBA_PTR_GET_DEFAULT(totalPart_, 0) };
    inline ReportUploadProgressRequest& setTotalPart(int32_t totalPart) { DARABONBA_PTR_SET_VALUE(totalPart_, totalPart) };


    // uploadAddress Field Functions 
    bool hasUploadAddress() const { return this->uploadAddress_ != nullptr;};
    void deleteUploadAddress() { this->uploadAddress_ = nullptr;};
    inline string uploadAddress() const { DARABONBA_PTR_GET_DEFAULT(uploadAddress_, "") };
    inline ReportUploadProgressRequest& setUploadAddress(string uploadAddress) { DARABONBA_PTR_SET_VALUE(uploadAddress_, uploadAddress) };


    // uploadId Field Functions 
    bool hasUploadId() const { return this->uploadId_ != nullptr;};
    void deleteUploadId() { this->uploadId_ = nullptr;};
    inline string uploadId() const { DARABONBA_PTR_GET_DEFAULT(uploadId_, "") };
    inline ReportUploadProgressRequest& setUploadId(string uploadId) { DARABONBA_PTR_SET_VALUE(uploadId_, uploadId) };


    // uploadPoint Field Functions 
    bool hasUploadPoint() const { return this->uploadPoint_ != nullptr;};
    void deleteUploadPoint() { this->uploadPoint_ = nullptr;};
    inline string uploadPoint() const { DARABONBA_PTR_GET_DEFAULT(uploadPoint_, "") };
    inline ReportUploadProgressRequest& setUploadPoint(string uploadPoint) { DARABONBA_PTR_SET_VALUE(uploadPoint_, uploadPoint) };


    // uploadRatio Field Functions 
    bool hasUploadRatio() const { return this->uploadRatio_ != nullptr;};
    void deleteUploadRatio() { this->uploadRatio_ = nullptr;};
    inline float uploadRatio() const { DARABONBA_PTR_GET_DEFAULT(uploadRatio_, 0.0) };
    inline ReportUploadProgressRequest& setUploadRatio(float uploadRatio) { DARABONBA_PTR_SET_VALUE(uploadRatio_, uploadRatio) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ReportUploadProgressRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline ReportUploadProgressRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> authInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> authTimestamp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> businessType_ = nullptr;
    std::shared_ptr<string> clientId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deviceModel_ = nullptr;
    std::shared_ptr<int32_t> donePartsCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileCreateTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileHash_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> partSize_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> terminalType_ = nullptr;
    std::shared_ptr<int32_t> totalPart_ = nullptr;
    std::shared_ptr<string> uploadAddress_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> uploadId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> uploadPoint_ = nullptr;
    std::shared_ptr<float> uploadRatio_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
