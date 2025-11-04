// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAVATARRESPONSEBODYDATAAVATAR_HPP_
#define ALIBABACLOUD_MODELS_GETAVATARRESPONSEBODYDATAAVATAR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAvatarResponseBodyDataAvatar : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAvatarResponseBodyDataAvatar& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarDescription, avatarDescription_);
      DARABONBA_PTR_TO_JSON(AvatarId, avatarId_);
      DARABONBA_PTR_TO_JSON(AvatarName, avatarName_);
      DARABONBA_PTR_TO_JSON(AvatarType, avatarType_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Portrait, portrait_);
      DARABONBA_PTR_TO_JSON(Thumbnail, thumbnail_);
      DARABONBA_PTR_TO_JSON(Transparent, transparent_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, GetAvatarResponseBodyDataAvatar& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarDescription, avatarDescription_);
      DARABONBA_PTR_FROM_JSON(AvatarId, avatarId_);
      DARABONBA_PTR_FROM_JSON(AvatarName, avatarName_);
      DARABONBA_PTR_FROM_JSON(AvatarType, avatarType_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Portrait, portrait_);
      DARABONBA_PTR_FROM_JSON(Thumbnail, thumbnail_);
      DARABONBA_PTR_FROM_JSON(Transparent, transparent_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    GetAvatarResponseBodyDataAvatar() = default ;
    GetAvatarResponseBodyDataAvatar(const GetAvatarResponseBodyDataAvatar &) = default ;
    GetAvatarResponseBodyDataAvatar(GetAvatarResponseBodyDataAvatar &&) = default ;
    GetAvatarResponseBodyDataAvatar(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAvatarResponseBodyDataAvatar() = default ;
    GetAvatarResponseBodyDataAvatar& operator=(const GetAvatarResponseBodyDataAvatar &) = default ;
    GetAvatarResponseBodyDataAvatar& operator=(GetAvatarResponseBodyDataAvatar &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatarDescription_ == nullptr
        && return this->avatarId_ == nullptr && return this->avatarName_ == nullptr && return this->avatarType_ == nullptr && return this->height_ == nullptr && return this->portrait_ == nullptr
        && return this->thumbnail_ == nullptr && return this->transparent_ == nullptr && return this->width_ == nullptr; };
    // avatarDescription Field Functions 
    bool hasAvatarDescription() const { return this->avatarDescription_ != nullptr;};
    void deleteAvatarDescription() { this->avatarDescription_ = nullptr;};
    inline string avatarDescription() const { DARABONBA_PTR_GET_DEFAULT(avatarDescription_, "") };
    inline GetAvatarResponseBodyDataAvatar& setAvatarDescription(string avatarDescription) { DARABONBA_PTR_SET_VALUE(avatarDescription_, avatarDescription) };


    // avatarId Field Functions 
    bool hasAvatarId() const { return this->avatarId_ != nullptr;};
    void deleteAvatarId() { this->avatarId_ = nullptr;};
    inline string avatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
    inline GetAvatarResponseBodyDataAvatar& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


    // avatarName Field Functions 
    bool hasAvatarName() const { return this->avatarName_ != nullptr;};
    void deleteAvatarName() { this->avatarName_ = nullptr;};
    inline string avatarName() const { DARABONBA_PTR_GET_DEFAULT(avatarName_, "") };
    inline GetAvatarResponseBodyDataAvatar& setAvatarName(string avatarName) { DARABONBA_PTR_SET_VALUE(avatarName_, avatarName) };


    // avatarType Field Functions 
    bool hasAvatarType() const { return this->avatarType_ != nullptr;};
    void deleteAvatarType() { this->avatarType_ = nullptr;};
    inline string avatarType() const { DARABONBA_PTR_GET_DEFAULT(avatarType_, "") };
    inline GetAvatarResponseBodyDataAvatar& setAvatarType(string avatarType) { DARABONBA_PTR_SET_VALUE(avatarType_, avatarType) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline GetAvatarResponseBodyDataAvatar& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // portrait Field Functions 
    bool hasPortrait() const { return this->portrait_ != nullptr;};
    void deletePortrait() { this->portrait_ = nullptr;};
    inline string portrait() const { DARABONBA_PTR_GET_DEFAULT(portrait_, "") };
    inline GetAvatarResponseBodyDataAvatar& setPortrait(string portrait) { DARABONBA_PTR_SET_VALUE(portrait_, portrait) };


    // thumbnail Field Functions 
    bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
    void deleteThumbnail() { this->thumbnail_ = nullptr;};
    inline string thumbnail() const { DARABONBA_PTR_GET_DEFAULT(thumbnail_, "") };
    inline GetAvatarResponseBodyDataAvatar& setThumbnail(string thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };


    // transparent Field Functions 
    bool hasTransparent() const { return this->transparent_ != nullptr;};
    void deleteTransparent() { this->transparent_ = nullptr;};
    inline bool transparent() const { DARABONBA_PTR_GET_DEFAULT(transparent_, false) };
    inline GetAvatarResponseBodyDataAvatar& setTransparent(bool transparent) { DARABONBA_PTR_SET_VALUE(transparent_, transparent) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline GetAvatarResponseBodyDataAvatar& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The description of the digital human.
    std::shared_ptr<string> avatarDescription_ = nullptr;
    // The ID of the digital human.
    std::shared_ptr<string> avatarId_ = nullptr;
    // The name of the digital human.
    std::shared_ptr<string> avatarName_ = nullptr;
    // The type of the digital human.
    std::shared_ptr<string> avatarType_ = nullptr;
    // The height of the digital human image in pixels.
    std::shared_ptr<int32_t> height_ = nullptr;
    // The media asset ID of the portrait image.
    std::shared_ptr<string> portrait_ = nullptr;
    // The thumbnail URL.
    std::shared_ptr<string> thumbnail_ = nullptr;
    // Indicates whether the digital human supports alpha channels.
    std::shared_ptr<bool> transparent_ = nullptr;
    // The width of the digital human image in pixels.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
