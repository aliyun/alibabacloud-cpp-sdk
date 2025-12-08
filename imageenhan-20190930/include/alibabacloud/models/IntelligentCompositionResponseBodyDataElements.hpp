// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTELLIGENTCOMPOSITIONRESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_INTELLIGENTCOMPOSITIONRESPONSEBODYDATAELEMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class IntelligentCompositionResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntelligentCompositionResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(MaxX, maxX_);
      DARABONBA_PTR_TO_JSON(MaxY, maxY_);
      DARABONBA_PTR_TO_JSON(MinX, minX_);
      DARABONBA_PTR_TO_JSON(MinY, minY_);
      DARABONBA_PTR_TO_JSON(Score, score_);
    };
    friend void from_json(const Darabonba::Json& j, IntelligentCompositionResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxX, maxX_);
      DARABONBA_PTR_FROM_JSON(MaxY, maxY_);
      DARABONBA_PTR_FROM_JSON(MinX, minX_);
      DARABONBA_PTR_FROM_JSON(MinY, minY_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
    };
    IntelligentCompositionResponseBodyDataElements() = default ;
    IntelligentCompositionResponseBodyDataElements(const IntelligentCompositionResponseBodyDataElements &) = default ;
    IntelligentCompositionResponseBodyDataElements(IntelligentCompositionResponseBodyDataElements &&) = default ;
    IntelligentCompositionResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntelligentCompositionResponseBodyDataElements() = default ;
    IntelligentCompositionResponseBodyDataElements& operator=(const IntelligentCompositionResponseBodyDataElements &) = default ;
    IntelligentCompositionResponseBodyDataElements& operator=(IntelligentCompositionResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxX_ == nullptr
        && return this->maxY_ == nullptr && return this->minX_ == nullptr && return this->minY_ == nullptr && return this->score_ == nullptr; };
    // maxX Field Functions 
    bool hasMaxX() const { return this->maxX_ != nullptr;};
    void deleteMaxX() { this->maxX_ = nullptr;};
    inline int32_t maxX() const { DARABONBA_PTR_GET_DEFAULT(maxX_, 0) };
    inline IntelligentCompositionResponseBodyDataElements& setMaxX(int32_t maxX) { DARABONBA_PTR_SET_VALUE(maxX_, maxX) };


    // maxY Field Functions 
    bool hasMaxY() const { return this->maxY_ != nullptr;};
    void deleteMaxY() { this->maxY_ = nullptr;};
    inline int32_t maxY() const { DARABONBA_PTR_GET_DEFAULT(maxY_, 0) };
    inline IntelligentCompositionResponseBodyDataElements& setMaxY(int32_t maxY) { DARABONBA_PTR_SET_VALUE(maxY_, maxY) };


    // minX Field Functions 
    bool hasMinX() const { return this->minX_ != nullptr;};
    void deleteMinX() { this->minX_ = nullptr;};
    inline int32_t minX() const { DARABONBA_PTR_GET_DEFAULT(minX_, 0) };
    inline IntelligentCompositionResponseBodyDataElements& setMinX(int32_t minX) { DARABONBA_PTR_SET_VALUE(minX_, minX) };


    // minY Field Functions 
    bool hasMinY() const { return this->minY_ != nullptr;};
    void deleteMinY() { this->minY_ = nullptr;};
    inline int32_t minY() const { DARABONBA_PTR_GET_DEFAULT(minY_, 0) };
    inline IntelligentCompositionResponseBodyDataElements& setMinY(int32_t minY) { DARABONBA_PTR_SET_VALUE(minY_, minY) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline IntelligentCompositionResponseBodyDataElements& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


  protected:
    std::shared_ptr<int32_t> maxX_ = nullptr;
    std::shared_ptr<int32_t> maxY_ = nullptr;
    std::shared_ptr<int32_t> minX_ = nullptr;
    std::shared_ptr<int32_t> minY_ = nullptr;
    std::shared_ptr<float> score_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
