// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetUploadDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForbiddenMediaIds, forbiddenMediaIds_);
      DARABONBA_PTR_TO_JSON(NonExistMediaIds, nonExistMediaIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UploadDetails, uploadDetails_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForbiddenMediaIds, forbiddenMediaIds_);
      DARABONBA_PTR_FROM_JSON(NonExistMediaIds, nonExistMediaIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UploadDetails, uploadDetails_);
    };
    GetUploadDetailsResponseBody() = default ;
    GetUploadDetailsResponseBody(const GetUploadDetailsResponseBody &) = default ;
    GetUploadDetailsResponseBody(GetUploadDetailsResponseBody &&) = default ;
    GetUploadDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadDetailsResponseBody() = default ;
    GetUploadDetailsResponseBody& operator=(const GetUploadDetailsResponseBody &) = default ;
    GetUploadDetailsResponseBody& operator=(GetUploadDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UploadDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UploadDetails& obj) { 
        DARABONBA_PTR_TO_JSON(CompletionTime, completionTime_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DeviceModel, deviceModel_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(UploadIP, uploadIP_);
        DARABONBA_PTR_TO_JSON(UploadRatio, uploadRatio_);
        DARABONBA_PTR_TO_JSON(UploadSize, uploadSize_);
        DARABONBA_PTR_TO_JSON(UploadSource, uploadSource_);
        DARABONBA_PTR_TO_JSON(UploadStatus, uploadStatus_);
      };
      friend void from_json(const Darabonba::Json& j, UploadDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(CompletionTime, completionTime_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DeviceModel, deviceModel_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(UploadIP, uploadIP_);
        DARABONBA_PTR_FROM_JSON(UploadRatio, uploadRatio_);
        DARABONBA_PTR_FROM_JSON(UploadSize, uploadSize_);
        DARABONBA_PTR_FROM_JSON(UploadSource, uploadSource_);
        DARABONBA_PTR_FROM_JSON(UploadStatus, uploadStatus_);
      };
      UploadDetails() = default ;
      UploadDetails(const UploadDetails &) = default ;
      UploadDetails(UploadDetails &&) = default ;
      UploadDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UploadDetails() = default ;
      UploadDetails& operator=(const UploadDetails &) = default ;
      UploadDetails& operator=(UploadDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->completionTime_ == nullptr
        && this->creationTime_ == nullptr && this->deviceModel_ == nullptr && this->fileSize_ == nullptr && this->mediaId_ == nullptr && this->modificationTime_ == nullptr
        && this->status_ == nullptr && this->title_ == nullptr && this->uploadIP_ == nullptr && this->uploadRatio_ == nullptr && this->uploadSize_ == nullptr
        && this->uploadSource_ == nullptr && this->uploadStatus_ == nullptr; };
      // completionTime Field Functions 
      bool hasCompletionTime() const { return this->completionTime_ != nullptr;};
      void deleteCompletionTime() { this->completionTime_ = nullptr;};
      inline string getCompletionTime() const { DARABONBA_PTR_GET_DEFAULT(completionTime_, "") };
      inline UploadDetails& setCompletionTime(string completionTime) { DARABONBA_PTR_SET_VALUE(completionTime_, completionTime) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline UploadDetails& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // deviceModel Field Functions 
      bool hasDeviceModel() const { return this->deviceModel_ != nullptr;};
      void deleteDeviceModel() { this->deviceModel_ = nullptr;};
      inline string getDeviceModel() const { DARABONBA_PTR_GET_DEFAULT(deviceModel_, "") };
      inline UploadDetails& setDeviceModel(string deviceModel) { DARABONBA_PTR_SET_VALUE(deviceModel_, deviceModel) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
      inline UploadDetails& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline UploadDetails& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // modificationTime Field Functions 
      bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
      void deleteModificationTime() { this->modificationTime_ = nullptr;};
      inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
      inline UploadDetails& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline UploadDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline UploadDetails& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // uploadIP Field Functions 
      bool hasUploadIP() const { return this->uploadIP_ != nullptr;};
      void deleteUploadIP() { this->uploadIP_ = nullptr;};
      inline string getUploadIP() const { DARABONBA_PTR_GET_DEFAULT(uploadIP_, "") };
      inline UploadDetails& setUploadIP(string uploadIP) { DARABONBA_PTR_SET_VALUE(uploadIP_, uploadIP) };


      // uploadRatio Field Functions 
      bool hasUploadRatio() const { return this->uploadRatio_ != nullptr;};
      void deleteUploadRatio() { this->uploadRatio_ = nullptr;};
      inline float getUploadRatio() const { DARABONBA_PTR_GET_DEFAULT(uploadRatio_, 0.0) };
      inline UploadDetails& setUploadRatio(float uploadRatio) { DARABONBA_PTR_SET_VALUE(uploadRatio_, uploadRatio) };


      // uploadSize Field Functions 
      bool hasUploadSize() const { return this->uploadSize_ != nullptr;};
      void deleteUploadSize() { this->uploadSize_ = nullptr;};
      inline int64_t getUploadSize() const { DARABONBA_PTR_GET_DEFAULT(uploadSize_, 0L) };
      inline UploadDetails& setUploadSize(int64_t uploadSize) { DARABONBA_PTR_SET_VALUE(uploadSize_, uploadSize) };


      // uploadSource Field Functions 
      bool hasUploadSource() const { return this->uploadSource_ != nullptr;};
      void deleteUploadSource() { this->uploadSource_ = nullptr;};
      inline string getUploadSource() const { DARABONBA_PTR_GET_DEFAULT(uploadSource_, "") };
      inline UploadDetails& setUploadSource(string uploadSource) { DARABONBA_PTR_SET_VALUE(uploadSource_, uploadSource) };


      // uploadStatus Field Functions 
      bool hasUploadStatus() const { return this->uploadStatus_ != nullptr;};
      void deleteUploadStatus() { this->uploadStatus_ = nullptr;};
      inline string getUploadStatus() const { DARABONBA_PTR_GET_DEFAULT(uploadStatus_, "") };
      inline UploadDetails& setUploadStatus(string uploadStatus) { DARABONBA_PTR_SET_VALUE(uploadStatus_, uploadStatus) };


    protected:
      // The time when the upload job was complete. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> completionTime_ {};
      // The time when the upload job was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The device model.
      shared_ptr<string> deviceModel_ {};
      // The size of the uploaded file. Unit: byte.
      shared_ptr<int64_t> fileSize_ {};
      // The ID of the uploaded audio or video.
      shared_ptr<string> mediaId_ {};
      // The time when the information about the media file was updated. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> modificationTime_ {};
      // The status of the video. For more information about the valid values and value description of the parameter, see the "Status: the status of a video" section of the [Basic structures](https://help.aliyun.com/document_detail/52839.html) topic.
      shared_ptr<string> status_ {};
      // The title of the media file.
      shared_ptr<string> title_ {};
      // The IP address of the server that uploads the media file.
      shared_ptr<string> uploadIP_ {};
      // The upload ratio.
      shared_ptr<float> uploadRatio_ {};
      // The upload size. Unit: byte.
      shared_ptr<int64_t> uploadSize_ {};
      // The method that is used to upload the media file.
      shared_ptr<string> uploadSource_ {};
      // The status of the upload job. For more information about the valid values and value description of the parameter, see the "Status: the status of a URL-based upload job" section of the [Basic structures](https://help.aliyun.com/document_detail/52839.html) topic.
      shared_ptr<string> uploadStatus_ {};
    };

    virtual bool empty() const override { return this->forbiddenMediaIds_ == nullptr
        && this->nonExistMediaIds_ == nullptr && this->requestId_ == nullptr && this->uploadDetails_ == nullptr; };
    // forbiddenMediaIds Field Functions 
    bool hasForbiddenMediaIds() const { return this->forbiddenMediaIds_ != nullptr;};
    void deleteForbiddenMediaIds() { this->forbiddenMediaIds_ = nullptr;};
    inline const vector<string> & getForbiddenMediaIds() const { DARABONBA_PTR_GET_CONST(forbiddenMediaIds_, vector<string>) };
    inline vector<string> getForbiddenMediaIds() { DARABONBA_PTR_GET(forbiddenMediaIds_, vector<string>) };
    inline GetUploadDetailsResponseBody& setForbiddenMediaIds(const vector<string> & forbiddenMediaIds) { DARABONBA_PTR_SET_VALUE(forbiddenMediaIds_, forbiddenMediaIds) };
    inline GetUploadDetailsResponseBody& setForbiddenMediaIds(vector<string> && forbiddenMediaIds) { DARABONBA_PTR_SET_RVALUE(forbiddenMediaIds_, forbiddenMediaIds) };


    // nonExistMediaIds Field Functions 
    bool hasNonExistMediaIds() const { return this->nonExistMediaIds_ != nullptr;};
    void deleteNonExistMediaIds() { this->nonExistMediaIds_ = nullptr;};
    inline const vector<string> & getNonExistMediaIds() const { DARABONBA_PTR_GET_CONST(nonExistMediaIds_, vector<string>) };
    inline vector<string> getNonExistMediaIds() { DARABONBA_PTR_GET(nonExistMediaIds_, vector<string>) };
    inline GetUploadDetailsResponseBody& setNonExistMediaIds(const vector<string> & nonExistMediaIds) { DARABONBA_PTR_SET_VALUE(nonExistMediaIds_, nonExistMediaIds) };
    inline GetUploadDetailsResponseBody& setNonExistMediaIds(vector<string> && nonExistMediaIds) { DARABONBA_PTR_SET_RVALUE(nonExistMediaIds_, nonExistMediaIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUploadDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadDetails Field Functions 
    bool hasUploadDetails() const { return this->uploadDetails_ != nullptr;};
    void deleteUploadDetails() { this->uploadDetails_ = nullptr;};
    inline const vector<GetUploadDetailsResponseBody::UploadDetails> & getUploadDetails() const { DARABONBA_PTR_GET_CONST(uploadDetails_, vector<GetUploadDetailsResponseBody::UploadDetails>) };
    inline vector<GetUploadDetailsResponseBody::UploadDetails> getUploadDetails() { DARABONBA_PTR_GET(uploadDetails_, vector<GetUploadDetailsResponseBody::UploadDetails>) };
    inline GetUploadDetailsResponseBody& setUploadDetails(const vector<GetUploadDetailsResponseBody::UploadDetails> & uploadDetails) { DARABONBA_PTR_SET_VALUE(uploadDetails_, uploadDetails) };
    inline GetUploadDetailsResponseBody& setUploadDetails(vector<GetUploadDetailsResponseBody::UploadDetails> && uploadDetails) { DARABONBA_PTR_SET_RVALUE(uploadDetails_, uploadDetails) };


  protected:
    // The IDs of the media files that cannot be accessed.
    shared_ptr<vector<string>> forbiddenMediaIds_ {};
    // The IDs of the media files that do not exist.
    shared_ptr<vector<string>> nonExistMediaIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The upload details.
    shared_ptr<vector<GetUploadDetailsResponseBody::UploadDetails>> uploadDetails_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
