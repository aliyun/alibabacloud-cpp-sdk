// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTOBJECTRESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_DETECTOBJECTRESPONSEBODYDATAELEMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectObjectResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectObjectResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(Boxes, boxes_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DetectObjectResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(Boxes, boxes_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DetectObjectResponseBodyDataElements() = default ;
    DetectObjectResponseBodyDataElements(const DetectObjectResponseBodyDataElements &) = default ;
    DetectObjectResponseBodyDataElements(DetectObjectResponseBodyDataElements &&) = default ;
    DetectObjectResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectObjectResponseBodyDataElements() = default ;
    DetectObjectResponseBodyDataElements& operator=(const DetectObjectResponseBodyDataElements &) = default ;
    DetectObjectResponseBodyDataElements& operator=(DetectObjectResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->boxes_ != nullptr
        && this->score_ != nullptr && this->type_ != nullptr; };
    // boxes Field Functions 
    bool hasBoxes() const { return this->boxes_ != nullptr;};
    void deleteBoxes() { this->boxes_ = nullptr;};
    inline const vector<int32_t> & boxes() const { DARABONBA_PTR_GET_CONST(boxes_, vector<int32_t>) };
    inline vector<int32_t> boxes() { DARABONBA_PTR_GET(boxes_, vector<int32_t>) };
    inline DetectObjectResponseBodyDataElements& setBoxes(const vector<int32_t> & boxes) { DARABONBA_PTR_SET_VALUE(boxes_, boxes) };
    inline DetectObjectResponseBodyDataElements& setBoxes(vector<int32_t> && boxes) { DARABONBA_PTR_SET_RVALUE(boxes_, boxes) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline DetectObjectResponseBodyDataElements& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DetectObjectResponseBodyDataElements& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<int32_t>> boxes_ = nullptr;
    std::shared_ptr<float> score_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
