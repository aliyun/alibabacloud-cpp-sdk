// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTINFRAREDLIVINGFACERESPONSEBODYDATAELEMENTSRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DETECTINFRAREDLIVINGFACERESPONSEBODYDATAELEMENTSRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetectInfraredLivingFaceResponseBodyDataElementsResultsRect.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectInfraredLivingFaceResponseBodyDataElementsResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectInfraredLivingFaceResponseBodyDataElementsResults& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(MessageTips, messageTips_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(Rect, rect_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, DetectInfraredLivingFaceResponseBodyDataElementsResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(MessageTips, messageTips_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(Rect, rect_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    DetectInfraredLivingFaceResponseBodyDataElementsResults() = default ;
    DetectInfraredLivingFaceResponseBodyDataElementsResults(const DetectInfraredLivingFaceResponseBodyDataElementsResults &) = default ;
    DetectInfraredLivingFaceResponseBodyDataElementsResults(DetectInfraredLivingFaceResponseBodyDataElementsResults &&) = default ;
    DetectInfraredLivingFaceResponseBodyDataElementsResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectInfraredLivingFaceResponseBodyDataElementsResults() = default ;
    DetectInfraredLivingFaceResponseBodyDataElementsResults& operator=(const DetectInfraredLivingFaceResponseBodyDataElementsResults &) = default ;
    DetectInfraredLivingFaceResponseBodyDataElementsResults& operator=(DetectInfraredLivingFaceResponseBodyDataElementsResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->label_ == nullptr
        && return this->messageTips_ == nullptr && return this->rate_ == nullptr && return this->rect_ == nullptr && return this->suggestion_ == nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline DetectInfraredLivingFaceResponseBodyDataElementsResults& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // messageTips Field Functions 
    bool hasMessageTips() const { return this->messageTips_ != nullptr;};
    void deleteMessageTips() { this->messageTips_ = nullptr;};
    inline string messageTips() const { DARABONBA_PTR_GET_DEFAULT(messageTips_, "") };
    inline DetectInfraredLivingFaceResponseBodyDataElementsResults& setMessageTips(string messageTips) { DARABONBA_PTR_SET_VALUE(messageTips_, messageTips) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline float rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline DetectInfraredLivingFaceResponseBodyDataElementsResults& setRate(float rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // rect Field Functions 
    bool hasRect() const { return this->rect_ != nullptr;};
    void deleteRect() { this->rect_ = nullptr;};
    inline const Models::DetectInfraredLivingFaceResponseBodyDataElementsResultsRect & rect() const { DARABONBA_PTR_GET_CONST(rect_, Models::DetectInfraredLivingFaceResponseBodyDataElementsResultsRect) };
    inline Models::DetectInfraredLivingFaceResponseBodyDataElementsResultsRect rect() { DARABONBA_PTR_GET(rect_, Models::DetectInfraredLivingFaceResponseBodyDataElementsResultsRect) };
    inline DetectInfraredLivingFaceResponseBodyDataElementsResults& setRect(const Models::DetectInfraredLivingFaceResponseBodyDataElementsResultsRect & rect) { DARABONBA_PTR_SET_VALUE(rect_, rect) };
    inline DetectInfraredLivingFaceResponseBodyDataElementsResults& setRect(Models::DetectInfraredLivingFaceResponseBodyDataElementsResultsRect && rect) { DARABONBA_PTR_SET_RVALUE(rect_, rect) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline DetectInfraredLivingFaceResponseBodyDataElementsResults& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> messageTips_ = nullptr;
    std::shared_ptr<float> rate_ = nullptr;
    std::shared_ptr<Models::DetectInfraredLivingFaceResponseBodyDataElementsResultsRect> rect_ = nullptr;
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
