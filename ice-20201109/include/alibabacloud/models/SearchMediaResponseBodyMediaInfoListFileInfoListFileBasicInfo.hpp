// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIAINFOLISTFILEINFOLISTFILEBASICINFO_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIAINFOLISTFILEINFOLISTFILEBASICINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(FileStatus, fileStatus_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(FormatName, formatName_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(ImagesInput, imagesInput_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(FileStatus, fileStatus_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(FormatName, formatName_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(ImagesInput, imagesInput_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo() = default ;
    SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo(const SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo &) = default ;
    SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo(SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo &&) = default ;
    SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo() = default ;
    SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo& operator=(const SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo &) = default ;
    SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo& operator=(SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bitrate_ == nullptr
        && return this->createTime_ == nullptr && return this->duration_ == nullptr && return this->fileName_ == nullptr && return this->fileSize_ == nullptr && return this->fileStatus_ == nullptr
        && return this->fileType_ == nullptr && return this->fileUrl_ == nullptr && return this->formatName_ == nullptr && return this->height_ == nullptr && return this->imagesInput_ == nullptr
        && return this->modifiedTime_ == nullptr && return this->region_ == nullptr && return this->width_ == nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline string fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
    inline SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // fileStatus Field Functions 
    bool hasFileStatus() const { return this->fileStatus_ != nullptr;};
    void deleteFileStatus() { this->fileStatus_ = nullptr;};
    inline string fileStatus() const { DARABONBA_PTR_GET_DEFAULT(fileStatus_, "") };
    inline SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo& setFileStatus(string fileStatus) { DARABONBA_PTR_SET_VALUE(fileStatus_, fileStatus) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // formatName Field Functions 
    bool hasFormatName() const { return this->formatName_ != nullptr;};
    void deleteFormatName() { this->formatName_ = nullptr;};
    inline string formatName() const { DARABONBA_PTR_GET_DEFAULT(formatName_, "") };
    inline SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo& setFormatName(string formatName) { DARABONBA_PTR_SET_VALUE(formatName_, formatName) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // imagesInput Field Functions 
    bool hasImagesInput() const { return this->imagesInput_ != nullptr;};
    void deleteImagesInput() { this->imagesInput_ = nullptr;};
    inline string imagesInput() const { DARABONBA_PTR_GET_DEFAULT(imagesInput_, "") };
    inline SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo& setImagesInput(string imagesInput) { DARABONBA_PTR_SET_VALUE(imagesInput_, imagesInput) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The bitrate of the file.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The time when the file was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The duration of the file.
    std::shared_ptr<string> duration_ = nullptr;
    // The name of the file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The size of the file in bytes.
    std::shared_ptr<string> fileSize_ = nullptr;
    // The status of the file.
    std::shared_ptr<string> fileStatus_ = nullptr;
    // The type of the file.
    std::shared_ptr<string> fileType_ = nullptr;
    // The Object Storage Service (OSS) URL of the file.
    std::shared_ptr<string> fileUrl_ = nullptr;
    // The encapsulation format of the file.
    std::shared_ptr<string> formatName_ = nullptr;
    // The height of the file.
    std::shared_ptr<string> height_ = nullptr;
    std::shared_ptr<string> imagesInput_ = nullptr;
    // The time when the file was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The region in which the file is stored.
    std::shared_ptr<string> region_ = nullptr;
    // The width of the file.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
