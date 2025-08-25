// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ERASEVIDEOSUBTITLESADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ERASEVIDEOSUBTITLESADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class EraseVideoSubtitlesAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EraseVideoSubtitlesAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BH, BH_);
      DARABONBA_PTR_TO_JSON(BW, BW_);
      DARABONBA_PTR_TO_JSON(BX, BX_);
      DARABONBA_PTR_TO_JSON(BY, BY_);
      DARABONBA_TO_JSON(VideoUrl, videoUrlObject_);
    };
    friend void from_json(const Darabonba::Json& j, EraseVideoSubtitlesAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BH, BH_);
      DARABONBA_PTR_FROM_JSON(BW, BW_);
      DARABONBA_PTR_FROM_JSON(BX, BX_);
      DARABONBA_PTR_FROM_JSON(BY, BY_);
      DARABONBA_FROM_JSON(VideoUrl, videoUrlObject_);
    };
    EraseVideoSubtitlesAdvanceRequest() = default ;
    EraseVideoSubtitlesAdvanceRequest(const EraseVideoSubtitlesAdvanceRequest &) = default ;
    EraseVideoSubtitlesAdvanceRequest(EraseVideoSubtitlesAdvanceRequest &&) = default ;
    EraseVideoSubtitlesAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EraseVideoSubtitlesAdvanceRequest() = default ;
    EraseVideoSubtitlesAdvanceRequest& operator=(const EraseVideoSubtitlesAdvanceRequest &) = default ;
    EraseVideoSubtitlesAdvanceRequest& operator=(EraseVideoSubtitlesAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->BH_ != nullptr
        && this->BW_ != nullptr && this->BX_ != nullptr && this->BY_ != nullptr && this->videoUrlObject_ != nullptr; };
    // BH Field Functions 
    bool hasBH() const { return this->BH_ != nullptr;};
    void deleteBH() { this->BH_ = nullptr;};
    inline float BH() const { DARABONBA_PTR_GET_DEFAULT(BH_, 0.0) };
    inline EraseVideoSubtitlesAdvanceRequest& setBH(float BH) { DARABONBA_PTR_SET_VALUE(BH_, BH) };


    // BW Field Functions 
    bool hasBW() const { return this->BW_ != nullptr;};
    void deleteBW() { this->BW_ = nullptr;};
    inline float BW() const { DARABONBA_PTR_GET_DEFAULT(BW_, 0.0) };
    inline EraseVideoSubtitlesAdvanceRequest& setBW(float BW) { DARABONBA_PTR_SET_VALUE(BW_, BW) };


    // BX Field Functions 
    bool hasBX() const { return this->BX_ != nullptr;};
    void deleteBX() { this->BX_ = nullptr;};
    inline float BX() const { DARABONBA_PTR_GET_DEFAULT(BX_, 0.0) };
    inline EraseVideoSubtitlesAdvanceRequest& setBX(float BX) { DARABONBA_PTR_SET_VALUE(BX_, BX) };


    // BY Field Functions 
    bool hasBY() const { return this->BY_ != nullptr;};
    void deleteBY() { this->BY_ = nullptr;};
    inline float BY() const { DARABONBA_PTR_GET_DEFAULT(BY_, 0.0) };
    inline EraseVideoSubtitlesAdvanceRequest& setBY(float BY) { DARABONBA_PTR_SET_VALUE(BY_, BY) };


    // videoUrlObject Field Functions 
    bool hasVideoUrlObject() const { return this->videoUrlObject_ != nullptr;};
    void deleteVideoUrlObject() { this->videoUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoUrlObject() const { DARABONBA_GET(videoUrlObject_) };
    inline EraseVideoSubtitlesAdvanceRequest& setVideoUrlObject(shared_ptr<Darabonba::IStream> videoUrlObject) { DARABONBA_SET_VALUE(videoUrlObject_, videoUrlObject) };


  protected:
    std::shared_ptr<float> BH_ = nullptr;
    std::shared_ptr<float> BW_ = nullptr;
    std::shared_ptr<float> BX_ = nullptr;
    std::shared_ptr<float> BY_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoUrlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
