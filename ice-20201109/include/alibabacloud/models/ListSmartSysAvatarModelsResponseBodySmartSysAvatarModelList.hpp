// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTSYSAVATARMODELSRESPONSEBODYSMARTSYSAVATARMODELLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTSYSAVATARMODELSRESPONSEBODYSMARTSYSAVATARMODELLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarId, avatarId_);
      DARABONBA_PTR_TO_JSON(AvatarName, avatarName_);
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(OutputMask, outputMask_);
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarId, avatarId_);
      DARABONBA_PTR_FROM_JSON(AvatarName, avatarName_);
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(OutputMask, outputMask_);
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList() = default ;
    ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList(const ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList &) = default ;
    ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList(ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList &&) = default ;
    ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList() = default ;
    ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList& operator=(const ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList &) = default ;
    ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList& operator=(ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avatarId_ != nullptr
        && this->avatarName_ != nullptr && this->bitrate_ != nullptr && this->coverUrl_ != nullptr && this->height_ != nullptr && this->outputMask_ != nullptr
        && this->videoUrl_ != nullptr && this->width_ != nullptr; };
    // avatarId Field Functions 
    bool hasAvatarId() const { return this->avatarId_ != nullptr;};
    void deleteAvatarId() { this->avatarId_ = nullptr;};
    inline string avatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
    inline ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


    // avatarName Field Functions 
    bool hasAvatarName() const { return this->avatarName_ != nullptr;};
    void deleteAvatarName() { this->avatarName_ = nullptr;};
    inline string avatarName() const { DARABONBA_PTR_GET_DEFAULT(avatarName_, "") };
    inline ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList& setAvatarName(string avatarName) { DARABONBA_PTR_SET_VALUE(avatarName_, avatarName) };


    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int32_t bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
    inline ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string coverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // outputMask Field Functions 
    bool hasOutputMask() const { return this->outputMask_ != nullptr;};
    void deleteOutputMask() { this->outputMask_ = nullptr;};
    inline bool outputMask() const { DARABONBA_PTR_GET_DEFAULT(outputMask_, false) };
    inline ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList& setOutputMask(bool outputMask) { DARABONBA_PTR_SET_VALUE(outputMask_, outputMask) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline ListSmartSysAvatarModelsResponseBodySmartSysAvatarModelList& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The ID of the digital human. The ID is required to submit a separate digital human rendering job or use the digital human image in an intelligent timeline.
    std::shared_ptr<string> avatarId_ = nullptr;
    // The name of the digital human.
    std::shared_ptr<string> avatarName_ = nullptr;
    // The video bitrate.
    std::shared_ptr<int32_t> bitrate_ = nullptr;
    // The sample thumbnail URL of the digital human.
    std::shared_ptr<string> coverUrl_ = nullptr;
    // The video height.
    std::shared_ptr<int32_t> height_ = nullptr;
    // Indicates whether portrait mask rendering is supported.
    std::shared_ptr<bool> outputMask_ = nullptr;
    // The sample video URL of the digital human.
    std::shared_ptr<string> videoUrl_ = nullptr;
    // The video width.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
