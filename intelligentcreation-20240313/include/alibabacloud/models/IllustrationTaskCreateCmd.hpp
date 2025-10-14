// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ILLUSTRATIONTASKCREATECMD_HPP_
#define ALIBABACLOUD_MODELS_ILLUSTRATIONTASKCREATECMD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class IllustrationTaskCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IllustrationTaskCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(backgroundType, backgroundType_);
      DARABONBA_PTR_TO_JSON(dstHeight, dstHeight_);
      DARABONBA_PTR_TO_JSON(dstWidth, dstWidth_);
      DARABONBA_PTR_TO_JSON(idempotentId, idempotentId_);
      DARABONBA_PTR_TO_JSON(imageUrls, imageUrls_);
      DARABONBA_PTR_TO_JSON(nums, nums_);
      DARABONBA_PTR_TO_JSON(ossPaths, ossPaths_);
      DARABONBA_PTR_TO_JSON(stickerText, stickerText_);
    };
    friend void from_json(const Darabonba::Json& j, IllustrationTaskCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(backgroundType, backgroundType_);
      DARABONBA_PTR_FROM_JSON(dstHeight, dstHeight_);
      DARABONBA_PTR_FROM_JSON(dstWidth, dstWidth_);
      DARABONBA_PTR_FROM_JSON(idempotentId, idempotentId_);
      DARABONBA_PTR_FROM_JSON(imageUrls, imageUrls_);
      DARABONBA_PTR_FROM_JSON(nums, nums_);
      DARABONBA_PTR_FROM_JSON(ossPaths, ossPaths_);
      DARABONBA_PTR_FROM_JSON(stickerText, stickerText_);
    };
    IllustrationTaskCreateCmd() = default ;
    IllustrationTaskCreateCmd(const IllustrationTaskCreateCmd &) = default ;
    IllustrationTaskCreateCmd(IllustrationTaskCreateCmd &&) = default ;
    IllustrationTaskCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IllustrationTaskCreateCmd() = default ;
    IllustrationTaskCreateCmd& operator=(const IllustrationTaskCreateCmd &) = default ;
    IllustrationTaskCreateCmd& operator=(IllustrationTaskCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backgroundType_ == nullptr
        && return this->dstHeight_ == nullptr && return this->dstWidth_ == nullptr && return this->idempotentId_ == nullptr && return this->imageUrls_ == nullptr && return this->nums_ == nullptr
        && return this->ossPaths_ == nullptr && return this->stickerText_ == nullptr; };
    // backgroundType Field Functions 
    bool hasBackgroundType() const { return this->backgroundType_ != nullptr;};
    void deleteBackgroundType() { this->backgroundType_ = nullptr;};
    inline int32_t backgroundType() const { DARABONBA_PTR_GET_DEFAULT(backgroundType_, 0) };
    inline IllustrationTaskCreateCmd& setBackgroundType(int32_t backgroundType) { DARABONBA_PTR_SET_VALUE(backgroundType_, backgroundType) };


    // dstHeight Field Functions 
    bool hasDstHeight() const { return this->dstHeight_ != nullptr;};
    void deleteDstHeight() { this->dstHeight_ = nullptr;};
    inline int32_t dstHeight() const { DARABONBA_PTR_GET_DEFAULT(dstHeight_, 0) };
    inline IllustrationTaskCreateCmd& setDstHeight(int32_t dstHeight) { DARABONBA_PTR_SET_VALUE(dstHeight_, dstHeight) };


    // dstWidth Field Functions 
    bool hasDstWidth() const { return this->dstWidth_ != nullptr;};
    void deleteDstWidth() { this->dstWidth_ = nullptr;};
    inline int32_t dstWidth() const { DARABONBA_PTR_GET_DEFAULT(dstWidth_, 0) };
    inline IllustrationTaskCreateCmd& setDstWidth(int32_t dstWidth) { DARABONBA_PTR_SET_VALUE(dstWidth_, dstWidth) };


    // idempotentId Field Functions 
    bool hasIdempotentId() const { return this->idempotentId_ != nullptr;};
    void deleteIdempotentId() { this->idempotentId_ = nullptr;};
    inline string idempotentId() const { DARABONBA_PTR_GET_DEFAULT(idempotentId_, "") };
    inline IllustrationTaskCreateCmd& setIdempotentId(string idempotentId) { DARABONBA_PTR_SET_VALUE(idempotentId_, idempotentId) };


    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline const vector<string> & imageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<string>) };
    inline vector<string> imageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<string>) };
    inline IllustrationTaskCreateCmd& setImageUrls(const vector<string> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
    inline IllustrationTaskCreateCmd& setImageUrls(vector<string> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


    // nums Field Functions 
    bool hasNums() const { return this->nums_ != nullptr;};
    void deleteNums() { this->nums_ = nullptr;};
    inline int32_t nums() const { DARABONBA_PTR_GET_DEFAULT(nums_, 0) };
    inline IllustrationTaskCreateCmd& setNums(int32_t nums) { DARABONBA_PTR_SET_VALUE(nums_, nums) };


    // ossPaths Field Functions 
    bool hasOssPaths() const { return this->ossPaths_ != nullptr;};
    void deleteOssPaths() { this->ossPaths_ = nullptr;};
    inline const vector<string> & ossPaths() const { DARABONBA_PTR_GET_CONST(ossPaths_, vector<string>) };
    inline vector<string> ossPaths() { DARABONBA_PTR_GET(ossPaths_, vector<string>) };
    inline IllustrationTaskCreateCmd& setOssPaths(const vector<string> & ossPaths) { DARABONBA_PTR_SET_VALUE(ossPaths_, ossPaths) };
    inline IllustrationTaskCreateCmd& setOssPaths(vector<string> && ossPaths) { DARABONBA_PTR_SET_RVALUE(ossPaths_, ossPaths) };


    // stickerText Field Functions 
    bool hasStickerText() const { return this->stickerText_ != nullptr;};
    void deleteStickerText() { this->stickerText_ = nullptr;};
    inline string stickerText() const { DARABONBA_PTR_GET_DEFAULT(stickerText_, "") };
    inline IllustrationTaskCreateCmd& setStickerText(string stickerText) { DARABONBA_PTR_SET_VALUE(stickerText_, stickerText) };


  protected:
    std::shared_ptr<int32_t> backgroundType_ = nullptr;
    std::shared_ptr<int32_t> dstHeight_ = nullptr;
    std::shared_ptr<int32_t> dstWidth_ = nullptr;
    std::shared_ptr<string> idempotentId_ = nullptr;
    std::shared_ptr<vector<string>> imageUrls_ = nullptr;
    std::shared_ptr<int32_t> nums_ = nullptr;
    std::shared_ptr<vector<string>> ossPaths_ = nullptr;
    std::shared_ptr<string> stickerText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
