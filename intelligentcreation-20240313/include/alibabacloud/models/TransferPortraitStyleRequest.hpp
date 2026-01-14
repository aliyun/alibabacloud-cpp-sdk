// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERPORTRAITSTYLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERPORTRAITSTYLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class TransferPortraitStyleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferPortraitStyleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(height, height_);
      DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(numbers, numbers_);
      DARABONBA_PTR_TO_JSON(redrawAmplitude, redrawAmplitude_);
      DARABONBA_PTR_TO_JSON(style, style_);
      DARABONBA_PTR_TO_JSON(width, width_);
    };
    friend void from_json(const Darabonba::Json& j, TransferPortraitStyleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(height, height_);
      DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(numbers, numbers_);
      DARABONBA_PTR_FROM_JSON(redrawAmplitude, redrawAmplitude_);
      DARABONBA_PTR_FROM_JSON(style, style_);
      DARABONBA_PTR_FROM_JSON(width, width_);
    };
    TransferPortraitStyleRequest() = default ;
    TransferPortraitStyleRequest(const TransferPortraitStyleRequest &) = default ;
    TransferPortraitStyleRequest(TransferPortraitStyleRequest &&) = default ;
    TransferPortraitStyleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferPortraitStyleRequest() = default ;
    TransferPortraitStyleRequest& operator=(const TransferPortraitStyleRequest &) = default ;
    TransferPortraitStyleRequest& operator=(TransferPortraitStyleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->height_ == nullptr
        && this->imageUrl_ == nullptr && this->numbers_ == nullptr && this->redrawAmplitude_ == nullptr && this->style_ == nullptr && this->width_ == nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline TransferPortraitStyleRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline TransferPortraitStyleRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // numbers Field Functions 
    bool hasNumbers() const { return this->numbers_ != nullptr;};
    void deleteNumbers() { this->numbers_ = nullptr;};
    inline int32_t getNumbers() const { DARABONBA_PTR_GET_DEFAULT(numbers_, 0) };
    inline TransferPortraitStyleRequest& setNumbers(int32_t numbers) { DARABONBA_PTR_SET_VALUE(numbers_, numbers) };


    // redrawAmplitude Field Functions 
    bool hasRedrawAmplitude() const { return this->redrawAmplitude_ != nullptr;};
    void deleteRedrawAmplitude() { this->redrawAmplitude_ = nullptr;};
    inline int32_t getRedrawAmplitude() const { DARABONBA_PTR_GET_DEFAULT(redrawAmplitude_, 0) };
    inline TransferPortraitStyleRequest& setRedrawAmplitude(int32_t redrawAmplitude) { DARABONBA_PTR_SET_VALUE(redrawAmplitude_, redrawAmplitude) };


    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline int32_t getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, 0) };
    inline TransferPortraitStyleRequest& setStyle(int32_t style) { DARABONBA_PTR_SET_VALUE(style_, style) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline TransferPortraitStyleRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    shared_ptr<int32_t> height_ {};
    shared_ptr<string> imageUrl_ {};
    shared_ptr<int32_t> numbers_ {};
    shared_ptr<int32_t> redrawAmplitude_ {};
    shared_ptr<int32_t> style_ {};
    shared_ptr<int32_t> width_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
