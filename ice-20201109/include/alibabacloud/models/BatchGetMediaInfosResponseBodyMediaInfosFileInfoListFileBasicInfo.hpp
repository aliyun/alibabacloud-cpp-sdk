// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSRESPONSEBODYMEDIAINFOSFILEINFOLISTFILEBASICINFO_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSRESPONSEBODYMEDIAINFOSFILEINFOLISTFILEBASICINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(FileStatus, fileStatus_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(FormatName, formatName_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(FileStatus, fileStatus_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(FormatName, formatName_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo() = default ;
    BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo(const BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo &) = default ;
    BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo(BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo &&) = default ;
    BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo() = default ;
    BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo& operator=(const BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo &) = default ;
    BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo& operator=(BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bitrate_ != nullptr
        && this->duration_ != nullptr && this->fileName_ != nullptr && this->fileSize_ != nullptr && this->fileStatus_ != nullptr && this->fileType_ != nullptr
        && this->fileUrl_ != nullptr && this->formatName_ != nullptr && this->height_ != nullptr && this->region_ != nullptr && this->width_ != nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline string fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // fileStatus Field Functions 
    bool hasFileStatus() const { return this->fileStatus_ != nullptr;};
    void deleteFileStatus() { this->fileStatus_ = nullptr;};
    inline string fileStatus() const { DARABONBA_PTR_GET_DEFAULT(fileStatus_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo& setFileStatus(string fileStatus) { DARABONBA_PTR_SET_VALUE(fileStatus_, fileStatus) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // formatName Field Functions 
    bool hasFormatName() const { return this->formatName_ != nullptr;};
    void deleteFormatName() { this->formatName_ = nullptr;};
    inline string formatName() const { DARABONBA_PTR_GET_DEFAULT(formatName_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo& setFormatName(string formatName) { DARABONBA_PTR_SET_VALUE(formatName_, formatName) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The bitrate.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The duration.
    std::shared_ptr<string> duration_ = nullptr;
    // The file name.
    std::shared_ptr<string> fileName_ = nullptr;
    // The file size. Unit: bytes.
    std::shared_ptr<string> fileSize_ = nullptr;
    // The file status.
    std::shared_ptr<string> fileStatus_ = nullptr;
    // The file type.
    std::shared_ptr<string> fileType_ = nullptr;
    // The Object Storage Service (OSS) URL of the file.
    std::shared_ptr<string> fileUrl_ = nullptr;
    // The container format.
    std::shared_ptr<string> formatName_ = nullptr;
    // The height.
    std::shared_ptr<string> height_ = nullptr;
    // The region in which the file resides.
    std::shared_ptr<string> region_ = nullptr;
    // The width.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
