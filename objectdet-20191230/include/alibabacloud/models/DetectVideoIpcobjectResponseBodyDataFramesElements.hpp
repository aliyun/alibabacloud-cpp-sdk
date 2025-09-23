// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVIDEOIPCOBJECTRESPONSEBODYDATAFRAMESELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_DETECTVIDEOIPCOBJECTRESPONSEBODYDATAFRAMESELEMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVideoIPCObjectResponseBodyDataFramesElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVideoIPCObjectResponseBodyDataFramesElements& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVideoIPCObjectResponseBodyDataFramesElements& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    DetectVideoIPCObjectResponseBodyDataFramesElements() = default ;
    DetectVideoIPCObjectResponseBodyDataFramesElements(const DetectVideoIPCObjectResponseBodyDataFramesElements &) = default ;
    DetectVideoIPCObjectResponseBodyDataFramesElements(DetectVideoIPCObjectResponseBodyDataFramesElements &&) = default ;
    DetectVideoIPCObjectResponseBodyDataFramesElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVideoIPCObjectResponseBodyDataFramesElements() = default ;
    DetectVideoIPCObjectResponseBodyDataFramesElements& operator=(const DetectVideoIPCObjectResponseBodyDataFramesElements &) = default ;
    DetectVideoIPCObjectResponseBodyDataFramesElements& operator=(DetectVideoIPCObjectResponseBodyDataFramesElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->height_ != nullptr
        && this->score_ != nullptr && this->type_ != nullptr && this->width_ != nullptr && this->x_ != nullptr && this->y_ != nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int64_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
    inline DetectVideoIPCObjectResponseBodyDataFramesElements& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline DetectVideoIPCObjectResponseBodyDataFramesElements& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DetectVideoIPCObjectResponseBodyDataFramesElements& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int64_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
    inline DetectVideoIPCObjectResponseBodyDataFramesElements& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline int64_t x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0L) };
    inline DetectVideoIPCObjectResponseBodyDataFramesElements& setX(int64_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline int64_t y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0L) };
    inline DetectVideoIPCObjectResponseBodyDataFramesElements& setY(int64_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<int64_t> height_ = nullptr;
    std::shared_ptr<float> score_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int64_t> width_ = nullptr;
    std::shared_ptr<int64_t> x_ = nullptr;
    std::shared_ptr<int64_t> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
