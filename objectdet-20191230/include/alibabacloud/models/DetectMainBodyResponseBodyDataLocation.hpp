// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTMAINBODYRESPONSEBODYDATALOCATION_HPP_
#define ALIBABACLOUD_MODELS_DETECTMAINBODYRESPONSEBODYDATALOCATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectMainBodyResponseBodyDataLocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectMainBodyResponseBodyDataLocation& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, DetectMainBodyResponseBodyDataLocation& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    DetectMainBodyResponseBodyDataLocation() = default ;
    DetectMainBodyResponseBodyDataLocation(const DetectMainBodyResponseBodyDataLocation &) = default ;
    DetectMainBodyResponseBodyDataLocation(DetectMainBodyResponseBodyDataLocation &&) = default ;
    DetectMainBodyResponseBodyDataLocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectMainBodyResponseBodyDataLocation() = default ;
    DetectMainBodyResponseBodyDataLocation& operator=(const DetectMainBodyResponseBodyDataLocation &) = default ;
    DetectMainBodyResponseBodyDataLocation& operator=(DetectMainBodyResponseBodyDataLocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->height_ != nullptr
        && this->width_ != nullptr && this->x_ != nullptr && this->y_ != nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline DetectMainBodyResponseBodyDataLocation& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline DetectMainBodyResponseBodyDataLocation& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline int32_t x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
    inline DetectMainBodyResponseBodyDataLocation& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline int32_t y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
    inline DetectMainBodyResponseBodyDataLocation& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
    std::shared_ptr<int32_t> x_ = nullptr;
    std::shared_ptr<int32_t> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
