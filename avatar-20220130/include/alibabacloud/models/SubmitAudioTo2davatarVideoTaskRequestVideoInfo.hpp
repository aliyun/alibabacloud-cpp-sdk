// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAUDIOTO2DAVATARVIDEOTASKREQUESTVIDEOINFO_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAUDIOTO2DAVATARVIDEOTASKREQUESTVIDEOINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AlphaFormat, alphaFormat_);
      DARABONBA_PTR_TO_JSON(BackgroundImageUrl, backgroundImageUrl_);
      DARABONBA_PTR_TO_JSON(IsAlpha, isAlpha_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AlphaFormat, alphaFormat_);
      DARABONBA_PTR_FROM_JSON(BackgroundImageUrl, backgroundImageUrl_);
      DARABONBA_PTR_FROM_JSON(IsAlpha, isAlpha_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
    };
    SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo() = default ;
    SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo(const SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo &) = default ;
    SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo(SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo &&) = default ;
    SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo() = default ;
    SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo& operator=(const SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo &) = default ;
    SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo& operator=(SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alphaFormat_ != nullptr
        && this->backgroundImageUrl_ != nullptr && this->isAlpha_ != nullptr && this->resolution_ != nullptr; };
    // alphaFormat Field Functions 
    bool hasAlphaFormat() const { return this->alphaFormat_ != nullptr;};
    void deleteAlphaFormat() { this->alphaFormat_ = nullptr;};
    inline int32_t alphaFormat() const { DARABONBA_PTR_GET_DEFAULT(alphaFormat_, 0) };
    inline SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo& setAlphaFormat(int32_t alphaFormat) { DARABONBA_PTR_SET_VALUE(alphaFormat_, alphaFormat) };


    // backgroundImageUrl Field Functions 
    bool hasBackgroundImageUrl() const { return this->backgroundImageUrl_ != nullptr;};
    void deleteBackgroundImageUrl() { this->backgroundImageUrl_ = nullptr;};
    inline string backgroundImageUrl() const { DARABONBA_PTR_GET_DEFAULT(backgroundImageUrl_, "") };
    inline SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo& setBackgroundImageUrl(string backgroundImageUrl) { DARABONBA_PTR_SET_VALUE(backgroundImageUrl_, backgroundImageUrl) };


    // isAlpha Field Functions 
    bool hasIsAlpha() const { return this->isAlpha_ != nullptr;};
    void deleteIsAlpha() { this->isAlpha_ = nullptr;};
    inline bool isAlpha() const { DARABONBA_PTR_GET_DEFAULT(isAlpha_, false) };
    inline SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo& setIsAlpha(bool isAlpha) { DARABONBA_PTR_SET_VALUE(isAlpha_, isAlpha) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline int32_t resolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, 0) };
    inline SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo& setResolution(int32_t resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


  protected:
    std::shared_ptr<int32_t> alphaFormat_ = nullptr;
    std::shared_ptr<string> backgroundImageUrl_ = nullptr;
    std::shared_ptr<bool> isAlpha_ = nullptr;
    std::shared_ptr<int32_t> resolution_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
