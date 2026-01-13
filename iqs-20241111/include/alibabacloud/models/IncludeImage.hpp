// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCLUDEIMAGE_HPP_
#define ALIBABACLOUD_MODELS_INCLUDEIMAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class IncludeImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncludeImage& obj) { 
      DARABONBA_PTR_TO_JSON(height, height_);
      DARABONBA_PTR_TO_JSON(imageLink, imageLink_);
      DARABONBA_PTR_TO_JSON(width, width_);
    };
    friend void from_json(const Darabonba::Json& j, IncludeImage& obj) { 
      DARABONBA_PTR_FROM_JSON(height, height_);
      DARABONBA_PTR_FROM_JSON(imageLink, imageLink_);
      DARABONBA_PTR_FROM_JSON(width, width_);
    };
    IncludeImage() = default ;
    IncludeImage(const IncludeImage &) = default ;
    IncludeImage(IncludeImage &&) = default ;
    IncludeImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncludeImage() = default ;
    IncludeImage& operator=(const IncludeImage &) = default ;
    IncludeImage& operator=(IncludeImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->height_ == nullptr
        && this->imageLink_ == nullptr && this->width_ == nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline IncludeImage& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // imageLink Field Functions 
    bool hasImageLink() const { return this->imageLink_ != nullptr;};
    void deleteImageLink() { this->imageLink_ = nullptr;};
    inline string getImageLink() const { DARABONBA_PTR_GET_DEFAULT(imageLink_, "") };
    inline IncludeImage& setImageLink(string imageLink) { DARABONBA_PTR_SET_VALUE(imageLink_, imageLink) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline IncludeImage& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    shared_ptr<int32_t> height_ {};
    shared_ptr<string> imageLink_ {};
    shared_ptr<int32_t> width_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
