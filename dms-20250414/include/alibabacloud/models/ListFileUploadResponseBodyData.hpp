// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEUPLOADRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEUPLOADRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListFileUploadResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileUploadResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunParentUid, aliyunParentUid_);
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(DownloadLink, downloadLink_);
      DARABONBA_PTR_TO_JSON(FileCategory, fileCategory_);
      DARABONBA_PTR_TO_JSON(FileFrom, fileFrom_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(IntranetDownloadLink, intranetDownloadLink_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(UploadLocation, uploadLocation_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileUploadResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunParentUid, aliyunParentUid_);
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(DownloadLink, downloadLink_);
      DARABONBA_PTR_FROM_JSON(FileCategory, fileCategory_);
      DARABONBA_PTR_FROM_JSON(FileFrom, fileFrom_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(IntranetDownloadLink, intranetDownloadLink_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(UploadLocation, uploadLocation_);
    };
    ListFileUploadResponseBodyData() = default ;
    ListFileUploadResponseBodyData(const ListFileUploadResponseBodyData &) = default ;
    ListFileUploadResponseBodyData(ListFileUploadResponseBodyData &&) = default ;
    ListFileUploadResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileUploadResponseBodyData() = default ;
    ListFileUploadResponseBodyData& operator=(const ListFileUploadResponseBodyData &) = default ;
    ListFileUploadResponseBodyData& operator=(ListFileUploadResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunParentUid_ == nullptr
        && return this->aliyunUid_ == nullptr && return this->downloadLink_ == nullptr && return this->fileCategory_ == nullptr && return this->fileFrom_ == nullptr && return this->fileId_ == nullptr
        && return this->fileName_ == nullptr && return this->fileSize_ == nullptr && return this->fileType_ == nullptr && return this->gmtCreated_ == nullptr && return this->intranetDownloadLink_ == nullptr
        && return this->region_ == nullptr && return this->sessionId_ == nullptr && return this->uploadLocation_ == nullptr; };
    // aliyunParentUid Field Functions 
    bool hasAliyunParentUid() const { return this->aliyunParentUid_ != nullptr;};
    void deleteAliyunParentUid() { this->aliyunParentUid_ = nullptr;};
    inline string aliyunParentUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunParentUid_, "") };
    inline ListFileUploadResponseBodyData& setAliyunParentUid(string aliyunParentUid) { DARABONBA_PTR_SET_VALUE(aliyunParentUid_, aliyunParentUid) };


    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline ListFileUploadResponseBodyData& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // downloadLink Field Functions 
    bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
    void deleteDownloadLink() { this->downloadLink_ = nullptr;};
    inline string downloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
    inline ListFileUploadResponseBodyData& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


    // fileCategory Field Functions 
    bool hasFileCategory() const { return this->fileCategory_ != nullptr;};
    void deleteFileCategory() { this->fileCategory_ = nullptr;};
    inline string fileCategory() const { DARABONBA_PTR_GET_DEFAULT(fileCategory_, "") };
    inline ListFileUploadResponseBodyData& setFileCategory(string fileCategory) { DARABONBA_PTR_SET_VALUE(fileCategory_, fileCategory) };


    // fileFrom Field Functions 
    bool hasFileFrom() const { return this->fileFrom_ != nullptr;};
    void deleteFileFrom() { this->fileFrom_ = nullptr;};
    inline string fileFrom() const { DARABONBA_PTR_GET_DEFAULT(fileFrom_, "") };
    inline ListFileUploadResponseBodyData& setFileFrom(string fileFrom) { DARABONBA_PTR_SET_VALUE(fileFrom_, fileFrom) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline ListFileUploadResponseBodyData& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ListFileUploadResponseBodyData& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline ListFileUploadResponseBodyData& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline ListFileUploadResponseBodyData& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline ListFileUploadResponseBodyData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // intranetDownloadLink Field Functions 
    bool hasIntranetDownloadLink() const { return this->intranetDownloadLink_ != nullptr;};
    void deleteIntranetDownloadLink() { this->intranetDownloadLink_ = nullptr;};
    inline string intranetDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(intranetDownloadLink_, "") };
    inline ListFileUploadResponseBodyData& setIntranetDownloadLink(string intranetDownloadLink) { DARABONBA_PTR_SET_VALUE(intranetDownloadLink_, intranetDownloadLink) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListFileUploadResponseBodyData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ListFileUploadResponseBodyData& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // uploadLocation Field Functions 
    bool hasUploadLocation() const { return this->uploadLocation_ != nullptr;};
    void deleteUploadLocation() { this->uploadLocation_ = nullptr;};
    inline string uploadLocation() const { DARABONBA_PTR_GET_DEFAULT(uploadLocation_, "") };
    inline ListFileUploadResponseBodyData& setUploadLocation(string uploadLocation) { DARABONBA_PTR_SET_VALUE(uploadLocation_, uploadLocation) };


  protected:
    std::shared_ptr<string> aliyunParentUid_ = nullptr;
    std::shared_ptr<string> aliyunUid_ = nullptr;
    std::shared_ptr<string> downloadLink_ = nullptr;
    std::shared_ptr<string> fileCategory_ = nullptr;
    std::shared_ptr<string> fileFrom_ = nullptr;
    std::shared_ptr<string> fileId_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    std::shared_ptr<string> fileType_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> intranetDownloadLink_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> uploadLocation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
