// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTIPCOBJECTRESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_DETECTIPCOBJECTRESPONSEBODYDATAELEMENTS_HPP_
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
  class DetectIPCObjectResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectIPCObjectResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(Box, box_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(TargetRate, targetRate_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DetectIPCObjectResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(Box, box_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(TargetRate, targetRate_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DetectIPCObjectResponseBodyDataElements() = default ;
    DetectIPCObjectResponseBodyDataElements(const DetectIPCObjectResponseBodyDataElements &) = default ;
    DetectIPCObjectResponseBodyDataElements(DetectIPCObjectResponseBodyDataElements &&) = default ;
    DetectIPCObjectResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectIPCObjectResponseBodyDataElements() = default ;
    DetectIPCObjectResponseBodyDataElements& operator=(const DetectIPCObjectResponseBodyDataElements &) = default ;
    DetectIPCObjectResponseBodyDataElements& operator=(DetectIPCObjectResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->box_ != nullptr
        && this->score_ != nullptr && this->targetRate_ != nullptr && this->type_ != nullptr; };
    // box Field Functions 
    bool hasBox() const { return this->box_ != nullptr;};
    void deleteBox() { this->box_ = nullptr;};
    inline const vector<int64_t> & box() const { DARABONBA_PTR_GET_CONST(box_, vector<int64_t>) };
    inline vector<int64_t> box() { DARABONBA_PTR_GET(box_, vector<int64_t>) };
    inline DetectIPCObjectResponseBodyDataElements& setBox(const vector<int64_t> & box) { DARABONBA_PTR_SET_VALUE(box_, box) };
    inline DetectIPCObjectResponseBodyDataElements& setBox(vector<int64_t> && box) { DARABONBA_PTR_SET_RVALUE(box_, box) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline DetectIPCObjectResponseBodyDataElements& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // targetRate Field Functions 
    bool hasTargetRate() const { return this->targetRate_ != nullptr;};
    void deleteTargetRate() { this->targetRate_ = nullptr;};
    inline float targetRate() const { DARABONBA_PTR_GET_DEFAULT(targetRate_, 0.0) };
    inline DetectIPCObjectResponseBodyDataElements& setTargetRate(float targetRate) { DARABONBA_PTR_SET_VALUE(targetRate_, targetRate) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DetectIPCObjectResponseBodyDataElements& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<int64_t>> box_ = nullptr;
    std::shared_ptr<float> score_ = nullptr;
    std::shared_ptr<float> targetRate_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
