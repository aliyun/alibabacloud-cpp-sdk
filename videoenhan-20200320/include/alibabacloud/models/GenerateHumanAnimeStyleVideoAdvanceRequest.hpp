// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEHUMANANIMESTYLEVIDEOADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEHUMANANIMESTYLEVIDEOADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class GenerateHumanAnimeStyleVideoAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateHumanAnimeStyleVideoAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CartoonStyle, cartoonStyle_);
      DARABONBA_TO_JSON(VideoUrl, videoUrlObject_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateHumanAnimeStyleVideoAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CartoonStyle, cartoonStyle_);
      DARABONBA_FROM_JSON(VideoUrl, videoUrlObject_);
    };
    GenerateHumanAnimeStyleVideoAdvanceRequest() = default ;
    GenerateHumanAnimeStyleVideoAdvanceRequest(const GenerateHumanAnimeStyleVideoAdvanceRequest &) = default ;
    GenerateHumanAnimeStyleVideoAdvanceRequest(GenerateHumanAnimeStyleVideoAdvanceRequest &&) = default ;
    GenerateHumanAnimeStyleVideoAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateHumanAnimeStyleVideoAdvanceRequest() = default ;
    GenerateHumanAnimeStyleVideoAdvanceRequest& operator=(const GenerateHumanAnimeStyleVideoAdvanceRequest &) = default ;
    GenerateHumanAnimeStyleVideoAdvanceRequest& operator=(GenerateHumanAnimeStyleVideoAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cartoonStyle_ != nullptr
        && this->videoUrlObject_ != nullptr; };
    // cartoonStyle Field Functions 
    bool hasCartoonStyle() const { return this->cartoonStyle_ != nullptr;};
    void deleteCartoonStyle() { this->cartoonStyle_ = nullptr;};
    inline string cartoonStyle() const { DARABONBA_PTR_GET_DEFAULT(cartoonStyle_, "") };
    inline GenerateHumanAnimeStyleVideoAdvanceRequest& setCartoonStyle(string cartoonStyle) { DARABONBA_PTR_SET_VALUE(cartoonStyle_, cartoonStyle) };


    // videoUrlObject Field Functions 
    bool hasVideoUrlObject() const { return this->videoUrlObject_ != nullptr;};
    void deleteVideoUrlObject() { this->videoUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoUrlObject() const { DARABONBA_GET(videoUrlObject_) };
    inline GenerateHumanAnimeStyleVideoAdvanceRequest& setVideoUrlObject(shared_ptr<Darabonba::IStream> videoUrlObject) { DARABONBA_SET_VALUE(videoUrlObject_, videoUrlObject) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> cartoonStyle_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoUrlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
