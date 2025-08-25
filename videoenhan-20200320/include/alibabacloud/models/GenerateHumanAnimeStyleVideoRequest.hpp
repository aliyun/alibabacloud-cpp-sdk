// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEHUMANANIMESTYLEVIDEOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEHUMANANIMESTYLEVIDEOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class GenerateHumanAnimeStyleVideoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateHumanAnimeStyleVideoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CartoonStyle, cartoonStyle_);
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateHumanAnimeStyleVideoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CartoonStyle, cartoonStyle_);
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
    };
    GenerateHumanAnimeStyleVideoRequest() = default ;
    GenerateHumanAnimeStyleVideoRequest(const GenerateHumanAnimeStyleVideoRequest &) = default ;
    GenerateHumanAnimeStyleVideoRequest(GenerateHumanAnimeStyleVideoRequest &&) = default ;
    GenerateHumanAnimeStyleVideoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateHumanAnimeStyleVideoRequest() = default ;
    GenerateHumanAnimeStyleVideoRequest& operator=(const GenerateHumanAnimeStyleVideoRequest &) = default ;
    GenerateHumanAnimeStyleVideoRequest& operator=(GenerateHumanAnimeStyleVideoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cartoonStyle_ != nullptr
        && this->videoUrl_ != nullptr; };
    // cartoonStyle Field Functions 
    bool hasCartoonStyle() const { return this->cartoonStyle_ != nullptr;};
    void deleteCartoonStyle() { this->cartoonStyle_ = nullptr;};
    inline string cartoonStyle() const { DARABONBA_PTR_GET_DEFAULT(cartoonStyle_, "") };
    inline GenerateHumanAnimeStyleVideoRequest& setCartoonStyle(string cartoonStyle) { DARABONBA_PTR_SET_VALUE(cartoonStyle_, cartoonStyle) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline GenerateHumanAnimeStyleVideoRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> cartoonStyle_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
