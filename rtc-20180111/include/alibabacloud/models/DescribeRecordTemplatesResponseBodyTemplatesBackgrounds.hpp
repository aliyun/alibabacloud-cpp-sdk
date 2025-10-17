// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDTEMPLATESRESPONSEBODYTEMPLATESBACKGROUNDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDTEMPLATESRESPONSEBODYTEMPLATESBACKGROUNDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRecordTemplatesResponseBodyTemplatesBackgrounds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordTemplatesResponseBodyTemplatesBackgrounds& obj) { 
      DARABONBA_PTR_TO_JSON(Display, display_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
      DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordTemplatesResponseBodyTemplatesBackgrounds& obj) { 
      DARABONBA_PTR_FROM_JSON(Display, display_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
      DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
    };
    DescribeRecordTemplatesResponseBodyTemplatesBackgrounds() = default ;
    DescribeRecordTemplatesResponseBodyTemplatesBackgrounds(const DescribeRecordTemplatesResponseBodyTemplatesBackgrounds &) = default ;
    DescribeRecordTemplatesResponseBodyTemplatesBackgrounds(DescribeRecordTemplatesResponseBodyTemplatesBackgrounds &&) = default ;
    DescribeRecordTemplatesResponseBodyTemplatesBackgrounds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordTemplatesResponseBodyTemplatesBackgrounds() = default ;
    DescribeRecordTemplatesResponseBodyTemplatesBackgrounds& operator=(const DescribeRecordTemplatesResponseBodyTemplatesBackgrounds &) = default ;
    DescribeRecordTemplatesResponseBodyTemplatesBackgrounds& operator=(DescribeRecordTemplatesResponseBodyTemplatesBackgrounds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->display_ == nullptr
        && return this->height_ == nullptr && return this->url_ == nullptr && return this->width_ == nullptr && return this->x_ == nullptr && return this->y_ == nullptr
        && return this->ZOrder_ == nullptr; };
    // display Field Functions 
    bool hasDisplay() const { return this->display_ != nullptr;};
    void deleteDisplay() { this->display_ = nullptr;};
    inline int32_t display() const { DARABONBA_PTR_GET_DEFAULT(display_, 0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesBackgrounds& setDisplay(int32_t display) { DARABONBA_PTR_SET_VALUE(display_, display) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline float height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesBackgrounds& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeRecordTemplatesResponseBodyTemplatesBackgrounds& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline float width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesBackgrounds& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline float x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesBackgrounds& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline float y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesBackgrounds& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    // ZOrder Field Functions 
    bool hasZOrder() const { return this->ZOrder_ != nullptr;};
    void deleteZOrder() { this->ZOrder_ = nullptr;};
    inline int32_t ZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesBackgrounds& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


  protected:
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
