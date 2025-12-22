// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEPDFRESPONSEBODYDATAWORDSINFO_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEPDFRESPONSEBODYDATAWORDSINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizePdfResponseBodyDataWordsInfoPositions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizePdfResponseBodyDataWordsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizePdfResponseBodyDataWordsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Angle, angle_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Positions, positions_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(Word, word_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizePdfResponseBodyDataWordsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Angle, angle_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Positions, positions_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(Word, word_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    RecognizePdfResponseBodyDataWordsInfo() = default ;
    RecognizePdfResponseBodyDataWordsInfo(const RecognizePdfResponseBodyDataWordsInfo &) = default ;
    RecognizePdfResponseBodyDataWordsInfo(RecognizePdfResponseBodyDataWordsInfo &&) = default ;
    RecognizePdfResponseBodyDataWordsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizePdfResponseBodyDataWordsInfo() = default ;
    RecognizePdfResponseBodyDataWordsInfo& operator=(const RecognizePdfResponseBodyDataWordsInfo &) = default ;
    RecognizePdfResponseBodyDataWordsInfo& operator=(RecognizePdfResponseBodyDataWordsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->angle_ == nullptr
        && return this->height_ == nullptr && return this->positions_ == nullptr && return this->width_ == nullptr && return this->word_ == nullptr && return this->x_ == nullptr
        && return this->y_ == nullptr; };
    // angle Field Functions 
    bool hasAngle() const { return this->angle_ != nullptr;};
    void deleteAngle() { this->angle_ = nullptr;};
    inline int64_t angle() const { DARABONBA_PTR_GET_DEFAULT(angle_, 0L) };
    inline RecognizePdfResponseBodyDataWordsInfo& setAngle(int64_t angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int64_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
    inline RecognizePdfResponseBodyDataWordsInfo& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // positions Field Functions 
    bool hasPositions() const { return this->positions_ != nullptr;};
    void deletePositions() { this->positions_ = nullptr;};
    inline const vector<Models::RecognizePdfResponseBodyDataWordsInfoPositions> & positions() const { DARABONBA_PTR_GET_CONST(positions_, vector<Models::RecognizePdfResponseBodyDataWordsInfoPositions>) };
    inline vector<Models::RecognizePdfResponseBodyDataWordsInfoPositions> positions() { DARABONBA_PTR_GET(positions_, vector<Models::RecognizePdfResponseBodyDataWordsInfoPositions>) };
    inline RecognizePdfResponseBodyDataWordsInfo& setPositions(const vector<Models::RecognizePdfResponseBodyDataWordsInfoPositions> & positions) { DARABONBA_PTR_SET_VALUE(positions_, positions) };
    inline RecognizePdfResponseBodyDataWordsInfo& setPositions(vector<Models::RecognizePdfResponseBodyDataWordsInfoPositions> && positions) { DARABONBA_PTR_SET_RVALUE(positions_, positions) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int64_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
    inline RecognizePdfResponseBodyDataWordsInfo& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline RecognizePdfResponseBodyDataWordsInfo& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline int64_t x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0L) };
    inline RecognizePdfResponseBodyDataWordsInfo& setX(int64_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline int64_t y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0L) };
    inline RecognizePdfResponseBodyDataWordsInfo& setY(int64_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<int64_t> angle_ = nullptr;
    std::shared_ptr<int64_t> height_ = nullptr;
    std::shared_ptr<vector<Models::RecognizePdfResponseBodyDataWordsInfoPositions>> positions_ = nullptr;
    std::shared_ptr<int64_t> width_ = nullptr;
    std::shared_ptr<string> word_ = nullptr;
    std::shared_ptr<int64_t> x_ = nullptr;
    std::shared_ptr<int64_t> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
