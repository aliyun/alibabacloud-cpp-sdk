// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTEXTTO2DAVATARVIDEOTASKREQUESTVIDEOINFO_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTEXTTO2DAVATARVIDEOTASKREQUESTVIDEOINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTextTo2DAvatarVideoTaskRequestVideoInfoSubtitleStyle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SubmitTextTo2DAvatarVideoTaskRequestVideoInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTextTo2DAvatarVideoTaskRequestVideoInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AlphaFormat, alphaFormat_);
      DARABONBA_PTR_TO_JSON(BackgroundImageUrl, backgroundImageUrl_);
      DARABONBA_PTR_TO_JSON(IsAlpha, isAlpha_);
      DARABONBA_PTR_TO_JSON(IsSubtitles, isSubtitles_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(SubtitleEmbedded, subtitleEmbedded_);
      DARABONBA_PTR_TO_JSON(SubtitleStyle, subtitleStyle_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTextTo2DAvatarVideoTaskRequestVideoInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AlphaFormat, alphaFormat_);
      DARABONBA_PTR_FROM_JSON(BackgroundImageUrl, backgroundImageUrl_);
      DARABONBA_PTR_FROM_JSON(IsAlpha, isAlpha_);
      DARABONBA_PTR_FROM_JSON(IsSubtitles, isSubtitles_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(SubtitleEmbedded, subtitleEmbedded_);
      DARABONBA_PTR_FROM_JSON(SubtitleStyle, subtitleStyle_);
    };
    SubmitTextTo2DAvatarVideoTaskRequestVideoInfo() = default ;
    SubmitTextTo2DAvatarVideoTaskRequestVideoInfo(const SubmitTextTo2DAvatarVideoTaskRequestVideoInfo &) = default ;
    SubmitTextTo2DAvatarVideoTaskRequestVideoInfo(SubmitTextTo2DAvatarVideoTaskRequestVideoInfo &&) = default ;
    SubmitTextTo2DAvatarVideoTaskRequestVideoInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTextTo2DAvatarVideoTaskRequestVideoInfo() = default ;
    SubmitTextTo2DAvatarVideoTaskRequestVideoInfo& operator=(const SubmitTextTo2DAvatarVideoTaskRequestVideoInfo &) = default ;
    SubmitTextTo2DAvatarVideoTaskRequestVideoInfo& operator=(SubmitTextTo2DAvatarVideoTaskRequestVideoInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alphaFormat_ != nullptr
        && this->backgroundImageUrl_ != nullptr && this->isAlpha_ != nullptr && this->isSubtitles_ != nullptr && this->resolution_ != nullptr && this->subtitleEmbedded_ != nullptr
        && this->subtitleStyle_ != nullptr; };
    // alphaFormat Field Functions 
    bool hasAlphaFormat() const { return this->alphaFormat_ != nullptr;};
    void deleteAlphaFormat() { this->alphaFormat_ = nullptr;};
    inline int32_t alphaFormat() const { DARABONBA_PTR_GET_DEFAULT(alphaFormat_, 0) };
    inline SubmitTextTo2DAvatarVideoTaskRequestVideoInfo& setAlphaFormat(int32_t alphaFormat) { DARABONBA_PTR_SET_VALUE(alphaFormat_, alphaFormat) };


    // backgroundImageUrl Field Functions 
    bool hasBackgroundImageUrl() const { return this->backgroundImageUrl_ != nullptr;};
    void deleteBackgroundImageUrl() { this->backgroundImageUrl_ = nullptr;};
    inline string backgroundImageUrl() const { DARABONBA_PTR_GET_DEFAULT(backgroundImageUrl_, "") };
    inline SubmitTextTo2DAvatarVideoTaskRequestVideoInfo& setBackgroundImageUrl(string backgroundImageUrl) { DARABONBA_PTR_SET_VALUE(backgroundImageUrl_, backgroundImageUrl) };


    // isAlpha Field Functions 
    bool hasIsAlpha() const { return this->isAlpha_ != nullptr;};
    void deleteIsAlpha() { this->isAlpha_ = nullptr;};
    inline bool isAlpha() const { DARABONBA_PTR_GET_DEFAULT(isAlpha_, false) };
    inline SubmitTextTo2DAvatarVideoTaskRequestVideoInfo& setIsAlpha(bool isAlpha) { DARABONBA_PTR_SET_VALUE(isAlpha_, isAlpha) };


    // isSubtitles Field Functions 
    bool hasIsSubtitles() const { return this->isSubtitles_ != nullptr;};
    void deleteIsSubtitles() { this->isSubtitles_ = nullptr;};
    inline bool isSubtitles() const { DARABONBA_PTR_GET_DEFAULT(isSubtitles_, false) };
    inline SubmitTextTo2DAvatarVideoTaskRequestVideoInfo& setIsSubtitles(bool isSubtitles) { DARABONBA_PTR_SET_VALUE(isSubtitles_, isSubtitles) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline int32_t resolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, 0) };
    inline SubmitTextTo2DAvatarVideoTaskRequestVideoInfo& setResolution(int32_t resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // subtitleEmbedded Field Functions 
    bool hasSubtitleEmbedded() const { return this->subtitleEmbedded_ != nullptr;};
    void deleteSubtitleEmbedded() { this->subtitleEmbedded_ = nullptr;};
    inline bool subtitleEmbedded() const { DARABONBA_PTR_GET_DEFAULT(subtitleEmbedded_, false) };
    inline SubmitTextTo2DAvatarVideoTaskRequestVideoInfo& setSubtitleEmbedded(bool subtitleEmbedded) { DARABONBA_PTR_SET_VALUE(subtitleEmbedded_, subtitleEmbedded) };


    // subtitleStyle Field Functions 
    bool hasSubtitleStyle() const { return this->subtitleStyle_ != nullptr;};
    void deleteSubtitleStyle() { this->subtitleStyle_ = nullptr;};
    inline const Models::SubmitTextTo2DAvatarVideoTaskRequestVideoInfoSubtitleStyle & subtitleStyle() const { DARABONBA_PTR_GET_CONST(subtitleStyle_, Models::SubmitTextTo2DAvatarVideoTaskRequestVideoInfoSubtitleStyle) };
    inline Models::SubmitTextTo2DAvatarVideoTaskRequestVideoInfoSubtitleStyle subtitleStyle() { DARABONBA_PTR_GET(subtitleStyle_, Models::SubmitTextTo2DAvatarVideoTaskRequestVideoInfoSubtitleStyle) };
    inline SubmitTextTo2DAvatarVideoTaskRequestVideoInfo& setSubtitleStyle(const Models::SubmitTextTo2DAvatarVideoTaskRequestVideoInfoSubtitleStyle & subtitleStyle) { DARABONBA_PTR_SET_VALUE(subtitleStyle_, subtitleStyle) };
    inline SubmitTextTo2DAvatarVideoTaskRequestVideoInfo& setSubtitleStyle(Models::SubmitTextTo2DAvatarVideoTaskRequestVideoInfoSubtitleStyle && subtitleStyle) { DARABONBA_PTR_SET_RVALUE(subtitleStyle_, subtitleStyle) };


  protected:
    std::shared_ptr<int32_t> alphaFormat_ = nullptr;
    std::shared_ptr<string> backgroundImageUrl_ = nullptr;
    std::shared_ptr<bool> isAlpha_ = nullptr;
    std::shared_ptr<bool> isSubtitles_ = nullptr;
    std::shared_ptr<int32_t> resolution_ = nullptr;
    std::shared_ptr<bool> subtitleEmbedded_ = nullptr;
    std::shared_ptr<Models::SubmitTextTo2DAvatarVideoTaskRequestVideoInfoSubtitleStyle> subtitleStyle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
