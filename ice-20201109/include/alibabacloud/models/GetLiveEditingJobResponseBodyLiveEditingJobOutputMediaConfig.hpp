// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVEEDITINGJOBRESPONSEBODYLIVEEDITINGJOBOUTPUTMEDIACONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETLIVEEDITINGJOBRESPONSEBODYLIVEEDITINGJOBOUTPUTMEDIACONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(MediaURL, mediaURL_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_TO_JSON(VodTemplateGroupId, vodTemplateGroupId_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(MediaURL, mediaURL_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_FROM_JSON(VodTemplateGroupId, vodTemplateGroupId_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig() = default ;
    GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig(const GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig &) = default ;
    GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig(GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig &&) = default ;
    GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig() = default ;
    GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig& operator=(const GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig &) = default ;
    GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig& operator=(GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bitrate_ != nullptr
        && this->fileName_ != nullptr && this->height_ != nullptr && this->mediaURL_ != nullptr && this->storageLocation_ != nullptr && this->vodTemplateGroupId_ != nullptr
        && this->width_ != nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int64_t bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0L) };
    inline GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig& setBitrate(int64_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // mediaURL Field Functions 
    bool hasMediaURL() const { return this->mediaURL_ != nullptr;};
    void deleteMediaURL() { this->mediaURL_ = nullptr;};
    inline string mediaURL() const { DARABONBA_PTR_GET_DEFAULT(mediaURL_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig& setMediaURL(string mediaURL) { DARABONBA_PTR_SET_VALUE(mediaURL_, mediaURL) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string storageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // vodTemplateGroupId Field Functions 
    bool hasVodTemplateGroupId() const { return this->vodTemplateGroupId_ != nullptr;};
    void deleteVodTemplateGroupId() { this->vodTemplateGroupId_ = nullptr;};
    inline string vodTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(vodTemplateGroupId_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig& setVodTemplateGroupId(string vodTemplateGroupId) { DARABONBA_PTR_SET_VALUE(vodTemplateGroupId_, vodTemplateGroupId) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The bitrate of the output file. Unit: Kbit/s. You can leave this parameter empty. The default value is the maximum bitrate of the input materials.
    std::shared_ptr<int64_t> bitrate_ = nullptr;
    // If OutputMediaTarget is set to vod-media, this parameter indicates the file name of the output file. The value contains the file name extension but not the path.
    std::shared_ptr<string> fileName_ = nullptr;
    // The height of the output file. You can leave this parameter empty. The default value is the maximum height of the input materials.
    std::shared_ptr<int32_t> height_ = nullptr;
    // The URL of the output file.
    std::shared_ptr<string> mediaURL_ = nullptr;
    // If OutputMediaTarget is set to vod-media, this parameter indicates the storage location of the media asset in ApsaraVideo VOD. The storage location is the path of the file in ApsaraVideo VOD, excluding the prefix http://. Example: outin-xxxxxx.oss-cn-shanghai.aliyuncs.com.
    std::shared_ptr<string> storageLocation_ = nullptr;
    // The ID of the VOD transcoding template group. If VOD transcoding is not required, set the value to VOD_NO_TRANSCODE.
    std::shared_ptr<string> vodTemplateGroupId_ = nullptr;
    // The width of the output file. You can leave this parameter empty. The default value is the maximum width of the input materials.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
