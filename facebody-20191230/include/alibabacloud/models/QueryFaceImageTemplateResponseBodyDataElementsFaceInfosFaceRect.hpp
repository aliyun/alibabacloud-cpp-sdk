// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACEIMAGETEMPLATERESPONSEBODYDATAELEMENTSFACEINFOSFACERECT_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACEIMAGETEMPLATERESPONSEBODYDATAELEMENTSFACEINFOSFACERECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect() = default ;
    QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect(const QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect &) = default ;
    QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect(QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect &&) = default ;
    QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect() = default ;
    QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect& operator=(const QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect &) = default ;
    QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect& operator=(QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->height_ == nullptr
        && return this->width_ == nullptr && return this->x_ == nullptr && return this->y_ == nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline string x() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
    inline QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline string y() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
    inline QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<string> height_ = nullptr;
    std::shared_ptr<string> width_ = nullptr;
    std::shared_ptr<string> x_ = nullptr;
    std::shared_ptr<string> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
