// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ABSTRACTECOMMERCEVIDEOADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ABSTRACTECOMMERCEVIDEOADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class AbstractEcommerceVideoAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AbstractEcommerceVideoAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_TO_JSON(VideoUrl, videoUrlObject_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, AbstractEcommerceVideoAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_FROM_JSON(VideoUrl, videoUrlObject_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    AbstractEcommerceVideoAdvanceRequest() = default ;
    AbstractEcommerceVideoAdvanceRequest(const AbstractEcommerceVideoAdvanceRequest &) = default ;
    AbstractEcommerceVideoAdvanceRequest(AbstractEcommerceVideoAdvanceRequest &&) = default ;
    AbstractEcommerceVideoAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AbstractEcommerceVideoAdvanceRequest() = default ;
    AbstractEcommerceVideoAdvanceRequest& operator=(const AbstractEcommerceVideoAdvanceRequest &) = default ;
    AbstractEcommerceVideoAdvanceRequest& operator=(AbstractEcommerceVideoAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->height_ != nullptr && this->videoUrlObject_ != nullptr && this->width_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline AbstractEcommerceVideoAdvanceRequest& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline AbstractEcommerceVideoAdvanceRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // videoUrlObject Field Functions 
    bool hasVideoUrlObject() const { return this->videoUrlObject_ != nullptr;};
    void deleteVideoUrlObject() { this->videoUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoUrlObject() const { DARABONBA_GET(videoUrlObject_) };
    inline AbstractEcommerceVideoAdvanceRequest& setVideoUrlObject(shared_ptr<Darabonba::IStream> videoUrlObject) { DARABONBA_SET_VALUE(videoUrlObject_, videoUrlObject) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline AbstractEcommerceVideoAdvanceRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // This parameter is required.
    std::shared_ptr<float> duration_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoUrlObject_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
