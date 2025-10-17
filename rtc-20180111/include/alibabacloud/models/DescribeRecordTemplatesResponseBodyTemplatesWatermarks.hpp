// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDTEMPLATESRESPONSEBODYTEMPLATESWATERMARKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDTEMPLATESRESPONSEBODYTEMPLATESWATERMARKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRecordTemplatesResponseBodyTemplatesWatermarks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordTemplatesResponseBodyTemplatesWatermarks& obj) { 
      DARABONBA_PTR_TO_JSON(Alpha, alpha_);
      DARABONBA_PTR_TO_JSON(Display, display_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
      DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordTemplatesResponseBodyTemplatesWatermarks& obj) { 
      DARABONBA_PTR_FROM_JSON(Alpha, alpha_);
      DARABONBA_PTR_FROM_JSON(Display, display_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
      DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
    };
    DescribeRecordTemplatesResponseBodyTemplatesWatermarks() = default ;
    DescribeRecordTemplatesResponseBodyTemplatesWatermarks(const DescribeRecordTemplatesResponseBodyTemplatesWatermarks &) = default ;
    DescribeRecordTemplatesResponseBodyTemplatesWatermarks(DescribeRecordTemplatesResponseBodyTemplatesWatermarks &&) = default ;
    DescribeRecordTemplatesResponseBodyTemplatesWatermarks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordTemplatesResponseBodyTemplatesWatermarks() = default ;
    DescribeRecordTemplatesResponseBodyTemplatesWatermarks& operator=(const DescribeRecordTemplatesResponseBodyTemplatesWatermarks &) = default ;
    DescribeRecordTemplatesResponseBodyTemplatesWatermarks& operator=(DescribeRecordTemplatesResponseBodyTemplatesWatermarks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alpha_ == nullptr
        && return this->display_ == nullptr && return this->height_ == nullptr && return this->url_ == nullptr && return this->width_ == nullptr && return this->x_ == nullptr
        && return this->y_ == nullptr && return this->ZOrder_ == nullptr; };
    // alpha Field Functions 
    bool hasAlpha() const { return this->alpha_ != nullptr;};
    void deleteAlpha() { this->alpha_ = nullptr;};
    inline float alpha() const { DARABONBA_PTR_GET_DEFAULT(alpha_, 0.0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesWatermarks& setAlpha(float alpha) { DARABONBA_PTR_SET_VALUE(alpha_, alpha) };


    // display Field Functions 
    bool hasDisplay() const { return this->display_ != nullptr;};
    void deleteDisplay() { this->display_ = nullptr;};
    inline int32_t display() const { DARABONBA_PTR_GET_DEFAULT(display_, 0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesWatermarks& setDisplay(int32_t display) { DARABONBA_PTR_SET_VALUE(display_, display) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline float height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesWatermarks& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeRecordTemplatesResponseBodyTemplatesWatermarks& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline float width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesWatermarks& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline float x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesWatermarks& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline float y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesWatermarks& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    // ZOrder Field Functions 
    bool hasZOrder() const { return this->ZOrder_ != nullptr;};
    void deleteZOrder() { this->ZOrder_ = nullptr;};
    inline int32_t ZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesWatermarks& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


  protected:
    std::shared_ptr<float> alpha_ = nullptr;
    std::shared_ptr<int32_t> display_ = nullptr;
    std::shared_ptr<float> height_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<float> width_ = nullptr;
    std::shared_ptr<float> x_ = nullptr;
    std::shared_ptr<float> y_ = nullptr;
    std::shared_ptr<int32_t> ZOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
