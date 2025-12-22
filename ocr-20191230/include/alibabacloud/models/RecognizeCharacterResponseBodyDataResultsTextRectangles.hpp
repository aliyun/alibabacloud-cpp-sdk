// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZECHARACTERRESPONSEBODYDATARESULTSTEXTRECTANGLES_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZECHARACTERRESPONSEBODYDATARESULTSTEXTRECTANGLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeCharacterResponseBodyDataResultsTextRectanglesPos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeCharacterResponseBodyDataResultsTextRectangles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeCharacterResponseBodyDataResultsTextRectangles& obj) { 
      DARABONBA_PTR_TO_JSON(Angle, angle_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Left, left_);
      DARABONBA_PTR_TO_JSON(Pos, pos_);
      DARABONBA_PTR_TO_JSON(Top, top_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeCharacterResponseBodyDataResultsTextRectangles& obj) { 
      DARABONBA_PTR_FROM_JSON(Angle, angle_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Left, left_);
      DARABONBA_PTR_FROM_JSON(Pos, pos_);
      DARABONBA_PTR_FROM_JSON(Top, top_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    RecognizeCharacterResponseBodyDataResultsTextRectangles() = default ;
    RecognizeCharacterResponseBodyDataResultsTextRectangles(const RecognizeCharacterResponseBodyDataResultsTextRectangles &) = default ;
    RecognizeCharacterResponseBodyDataResultsTextRectangles(RecognizeCharacterResponseBodyDataResultsTextRectangles &&) = default ;
    RecognizeCharacterResponseBodyDataResultsTextRectangles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeCharacterResponseBodyDataResultsTextRectangles() = default ;
    RecognizeCharacterResponseBodyDataResultsTextRectangles& operator=(const RecognizeCharacterResponseBodyDataResultsTextRectangles &) = default ;
    RecognizeCharacterResponseBodyDataResultsTextRectangles& operator=(RecognizeCharacterResponseBodyDataResultsTextRectangles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->angle_ == nullptr
        && return this->height_ == nullptr && return this->left_ == nullptr && return this->pos_ == nullptr && return this->top_ == nullptr && return this->width_ == nullptr; };
    // angle Field Functions 
    bool hasAngle() const { return this->angle_ != nullptr;};
    void deleteAngle() { this->angle_ = nullptr;};
    inline int32_t angle() const { DARABONBA_PTR_GET_DEFAULT(angle_, 0) };
    inline RecognizeCharacterResponseBodyDataResultsTextRectangles& setAngle(int32_t angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline RecognizeCharacterResponseBodyDataResultsTextRectangles& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // left Field Functions 
    bool hasLeft() const { return this->left_ != nullptr;};
    void deleteLeft() { this->left_ = nullptr;};
    inline int32_t left() const { DARABONBA_PTR_GET_DEFAULT(left_, 0) };
    inline RecognizeCharacterResponseBodyDataResultsTextRectangles& setLeft(int32_t left) { DARABONBA_PTR_SET_VALUE(left_, left) };


    // pos Field Functions 
    bool hasPos() const { return this->pos_ != nullptr;};
    void deletePos() { this->pos_ = nullptr;};
    inline const vector<Models::RecognizeCharacterResponseBodyDataResultsTextRectanglesPos> & pos() const { DARABONBA_PTR_GET_CONST(pos_, vector<Models::RecognizeCharacterResponseBodyDataResultsTextRectanglesPos>) };
    inline vector<Models::RecognizeCharacterResponseBodyDataResultsTextRectanglesPos> pos() { DARABONBA_PTR_GET(pos_, vector<Models::RecognizeCharacterResponseBodyDataResultsTextRectanglesPos>) };
    inline RecognizeCharacterResponseBodyDataResultsTextRectangles& setPos(const vector<Models::RecognizeCharacterResponseBodyDataResultsTextRectanglesPos> & pos) { DARABONBA_PTR_SET_VALUE(pos_, pos) };
    inline RecognizeCharacterResponseBodyDataResultsTextRectangles& setPos(vector<Models::RecognizeCharacterResponseBodyDataResultsTextRectanglesPos> && pos) { DARABONBA_PTR_SET_RVALUE(pos_, pos) };


    // top Field Functions 
    bool hasTop() const { return this->top_ != nullptr;};
    void deleteTop() { this->top_ = nullptr;};
    inline int32_t top() const { DARABONBA_PTR_GET_DEFAULT(top_, 0) };
    inline RecognizeCharacterResponseBodyDataResultsTextRectangles& setTop(int32_t top) { DARABONBA_PTR_SET_VALUE(top_, top) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline RecognizeCharacterResponseBodyDataResultsTextRectangles& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<int32_t> angle_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<int32_t> left_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeCharacterResponseBodyDataResultsTextRectanglesPos>> pos_ = nullptr;
    std::shared_ptr<int32_t> top_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
