// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADPROGRESSRESPONSEBODYUPLOADPROGRESSUPLOADPROGRESSLIST_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADPROGRESSRESPONSEBODYUPLOADPROGRESSUPLOADPROGRESSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetUploadProgressResponseBodyUploadProgressUploadProgressList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadProgressResponseBodyUploadProgressUploadProgressList& obj) { 
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
      DARABONBA_PTR_TO_JSON(PartSize, partSize_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TerminalType, terminalType_);
      DARABONBA_PTR_TO_JSON(TotalPart, totalPart_);
      DARABONBA_PTR_TO_JSON(UploadAddress, uploadAddress_);
      DARABONBA_PTR_TO_JSON(UploadId, uploadId_);
      DARABONBA_PTR_TO_JSON(UploadPoint, uploadPoint_);
      DARABONBA_PTR_TO_JSON(UploadRatio, uploadRatio_);
      DARABONBA_PTR_TO_JSON(UploadSpeed, uploadSpeed_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadProgressResponseBodyUploadProgressUploadProgressList& obj) { 
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
      DARABONBA_PTR_FROM_JSON(PartSize, partSize_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TerminalType, terminalType_);
      DARABONBA_PTR_FROM_JSON(TotalPart, totalPart_);
      DARABONBA_PTR_FROM_JSON(UploadAddress, uploadAddress_);
      DARABONBA_PTR_FROM_JSON(UploadId, uploadId_);
      DARABONBA_PTR_FROM_JSON(UploadPoint, uploadPoint_);
      DARABONBA_PTR_FROM_JSON(UploadRatio, uploadRatio_);
      DARABONBA_PTR_FROM_JSON(UploadSpeed, uploadSpeed_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    GetUploadProgressResponseBodyUploadProgressUploadProgressList() = default ;
    GetUploadProgressResponseBodyUploadProgressUploadProgressList(const GetUploadProgressResponseBodyUploadProgressUploadProgressList &) = default ;
    GetUploadProgressResponseBodyUploadProgressUploadProgressList(GetUploadProgressResponseBodyUploadProgressUploadProgressList &&) = default ;
    GetUploadProgressResponseBodyUploadProgressUploadProgressList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadProgressResponseBodyUploadProgressUploadProgressList() = default ;
    GetUploadProgressResponseBodyUploadProgressUploadProgressList& operator=(const GetUploadProgressResponseBodyUploadProgressUploadProgressList &) = default ;
    GetUploadProgressResponseBodyUploadProgressUploadProgressList& operator=(GetUploadProgressResponseBodyUploadProgressUploadProgressList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appVersion_ != nullptr
        && this->authInfo_ != nullptr && this->authTimestamp_ != nullptr && this->businessType_ != nullptr && this->clientId_ != nullptr && this->deviceModel_ != nullptr
        && this->donePartsCount_ != nullptr && this->fileCreateTime_ != nullptr && this->fileHash_ != nullptr && this->fileName_ != nullptr && this->fileSize_ != nullptr
        && this->partSize_ != nullptr && this->source_ != nullptr && this->terminalType_ != nullptr && this->totalPart_ != nullptr && this->uploadAddress_ != nullptr
        && this->uploadId_ != nullptr && this->uploadPoint_ != nullptr && this->uploadRatio_ != nullptr && this->uploadSpeed_ != nullptr && this->videoId_ != nullptr; };
    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // authInfo Field Functions 
    bool hasAuthInfo() const { return this->authInfo_ != nullptr;};
    void deleteAuthInfo() { this->authInfo_ = nullptr;};
    inline string authInfo() const { DARABONBA_PTR_GET_DEFAULT(authInfo_, "") };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setAuthInfo(string authInfo) { DARABONBA_PTR_SET_VALUE(authInfo_, authInfo) };


    // authTimestamp Field Functions 
    bool hasAuthTimestamp() const { return this->authTimestamp_ != nullptr;};
    void deleteAuthTimestamp() { this->authTimestamp_ = nullptr;};
    inline string authTimestamp() const { DARABONBA_PTR_GET_DEFAULT(authTimestamp_, "") };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setAuthTimestamp(string authTimestamp) { DARABONBA_PTR_SET_VALUE(authTimestamp_, authTimestamp) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // deviceModel Field Functions 
    bool hasDeviceModel() const { return this->deviceModel_ != nullptr;};
    void deleteDeviceModel() { this->deviceModel_ = nullptr;};
    inline string deviceModel() const { DARABONBA_PTR_GET_DEFAULT(deviceModel_, "") };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setDeviceModel(string deviceModel) { DARABONBA_PTR_SET_VALUE(deviceModel_, deviceModel) };


    // donePartsCount Field Functions 
    bool hasDonePartsCount() const { return this->donePartsCount_ != nullptr;};
    void deleteDonePartsCount() { this->donePartsCount_ = nullptr;};
    inline int32_t donePartsCount() const { DARABONBA_PTR_GET_DEFAULT(donePartsCount_, 0) };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setDonePartsCount(int32_t donePartsCount) { DARABONBA_PTR_SET_VALUE(donePartsCount_, donePartsCount) };


    // fileCreateTime Field Functions 
    bool hasFileCreateTime() const { return this->fileCreateTime_ != nullptr;};
    void deleteFileCreateTime() { this->fileCreateTime_ = nullptr;};
    inline string fileCreateTime() const { DARABONBA_PTR_GET_DEFAULT(fileCreateTime_, "") };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setFileCreateTime(string fileCreateTime) { DARABONBA_PTR_SET_VALUE(fileCreateTime_, fileCreateTime) };


    // fileHash Field Functions 
    bool hasFileHash() const { return this->fileHash_ != nullptr;};
    void deleteFileHash() { this->fileHash_ = nullptr;};
    inline string fileHash() const { DARABONBA_PTR_GET_DEFAULT(fileHash_, "") };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setFileHash(string fileHash) { DARABONBA_PTR_SET_VALUE(fileHash_, fileHash) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // partSize Field Functions 
    bool hasPartSize() const { return this->partSize_ != nullptr;};
    void deletePartSize() { this->partSize_ = nullptr;};
    inline int64_t partSize() const { DARABONBA_PTR_GET_DEFAULT(partSize_, 0L) };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setPartSize(int64_t partSize) { DARABONBA_PTR_SET_VALUE(partSize_, partSize) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // terminalType Field Functions 
    bool hasTerminalType() const { return this->terminalType_ != nullptr;};
    void deleteTerminalType() { this->terminalType_ = nullptr;};
    inline string terminalType() const { DARABONBA_PTR_GET_DEFAULT(terminalType_, "") };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setTerminalType(string terminalType) { DARABONBA_PTR_SET_VALUE(terminalType_, terminalType) };


    // totalPart Field Functions 
    bool hasTotalPart() const { return this->totalPart_ != nullptr;};
    void deleteTotalPart() { this->totalPart_ = nullptr;};
    inline string totalPart() const { DARABONBA_PTR_GET_DEFAULT(totalPart_, "") };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setTotalPart(string totalPart) { DARABONBA_PTR_SET_VALUE(totalPart_, totalPart) };


    // uploadAddress Field Functions 
    bool hasUploadAddress() const { return this->uploadAddress_ != nullptr;};
    void deleteUploadAddress() { this->uploadAddress_ = nullptr;};
    inline string uploadAddress() const { DARABONBA_PTR_GET_DEFAULT(uploadAddress_, "") };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setUploadAddress(string uploadAddress) { DARABONBA_PTR_SET_VALUE(uploadAddress_, uploadAddress) };


    // uploadId Field Functions 
    bool hasUploadId() const { return this->uploadId_ != nullptr;};
    void deleteUploadId() { this->uploadId_ = nullptr;};
    inline string uploadId() const { DARABONBA_PTR_GET_DEFAULT(uploadId_, "") };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setUploadId(string uploadId) { DARABONBA_PTR_SET_VALUE(uploadId_, uploadId) };


    // uploadPoint Field Functions 
    bool hasUploadPoint() const { return this->uploadPoint_ != nullptr;};
    void deleteUploadPoint() { this->uploadPoint_ = nullptr;};
    inline string uploadPoint() const { DARABONBA_PTR_GET_DEFAULT(uploadPoint_, "") };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setUploadPoint(string uploadPoint) { DARABONBA_PTR_SET_VALUE(uploadPoint_, uploadPoint) };


    // uploadRatio Field Functions 
    bool hasUploadRatio() const { return this->uploadRatio_ != nullptr;};
    void deleteUploadRatio() { this->uploadRatio_ = nullptr;};
    inline float uploadRatio() const { DARABONBA_PTR_GET_DEFAULT(uploadRatio_, 0.0) };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setUploadRatio(float uploadRatio) { DARABONBA_PTR_SET_VALUE(uploadRatio_, uploadRatio) };


    // uploadSpeed Field Functions 
    bool hasUploadSpeed() const { return this->uploadSpeed_ != nullptr;};
    void deleteUploadSpeed() { this->uploadSpeed_ = nullptr;};
    inline float uploadSpeed() const { DARABONBA_PTR_GET_DEFAULT(uploadSpeed_, 0.0) };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setUploadSpeed(float uploadSpeed) { DARABONBA_PTR_SET_VALUE(uploadSpeed_, uploadSpeed) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetUploadProgressResponseBodyUploadProgressUploadProgressList& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    std::shared_ptr<string> appVersion_ = nullptr;
    std::shared_ptr<string> authInfo_ = nullptr;
    std::shared_ptr<string> authTimestamp_ = nullptr;
    std::shared_ptr<string> businessType_ = nullptr;
    std::shared_ptr<string> clientId_ = nullptr;
    std::shared_ptr<string> deviceModel_ = nullptr;
    std::shared_ptr<int32_t> donePartsCount_ = nullptr;
    std::shared_ptr<string> fileCreateTime_ = nullptr;
    std::shared_ptr<string> fileHash_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    std::shared_ptr<int64_t> partSize_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> terminalType_ = nullptr;
    std::shared_ptr<string> totalPart_ = nullptr;
    std::shared_ptr<string> uploadAddress_ = nullptr;
    std::shared_ptr<string> uploadId_ = nullptr;
    std::shared_ptr<string> uploadPoint_ = nullptr;
    std::shared_ptr<float> uploadRatio_ = nullptr;
    std::shared_ptr<float> uploadSpeed_ = nullptr;
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
