// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTLIVINGFACERESPONSEBODYDATAELEMENTSRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DETECTLIVINGFACERESPONSEBODYDATAELEMENTSRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectLivingFaceResponseBodyDataElementsResultsFrames.hpp>
#include <alibabacloud/models/DetectLivingFaceResponseBodyDataElementsResultsRect.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectLivingFaceResponseBodyDataElementsResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectLivingFaceResponseBodyDataElementsResults& obj) { 
      DARABONBA_PTR_TO_JSON(Frames, frames_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(MessageTips, messageTips_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(Rect, rect_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, DetectLivingFaceResponseBodyDataElementsResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Frames, frames_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(MessageTips, messageTips_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(Rect, rect_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    DetectLivingFaceResponseBodyDataElementsResults() = default ;
    DetectLivingFaceResponseBodyDataElementsResults(const DetectLivingFaceResponseBodyDataElementsResults &) = default ;
    DetectLivingFaceResponseBodyDataElementsResults(DetectLivingFaceResponseBodyDataElementsResults &&) = default ;
    DetectLivingFaceResponseBodyDataElementsResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectLivingFaceResponseBodyDataElementsResults() = default ;
    DetectLivingFaceResponseBodyDataElementsResults& operator=(const DetectLivingFaceResponseBodyDataElementsResults &) = default ;
    DetectLivingFaceResponseBodyDataElementsResults& operator=(DetectLivingFaceResponseBodyDataElementsResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->frames_ == nullptr
        && return this->label_ == nullptr && return this->messageTips_ == nullptr && return this->rate_ == nullptr && return this->rect_ == nullptr && return this->suggestion_ == nullptr; };
    // frames Field Functions 
    bool hasFrames() const { return this->frames_ != nullptr;};
    void deleteFrames() { this->frames_ = nullptr;};
    inline const vector<Models::DetectLivingFaceResponseBodyDataElementsResultsFrames> & frames() const { DARABONBA_PTR_GET_CONST(frames_, vector<Models::DetectLivingFaceResponseBodyDataElementsResultsFrames>) };
    inline vector<Models::DetectLivingFaceResponseBodyDataElementsResultsFrames> frames() { DARABONBA_PTR_GET(frames_, vector<Models::DetectLivingFaceResponseBodyDataElementsResultsFrames>) };
    inline DetectLivingFaceResponseBodyDataElementsResults& setFrames(const vector<Models::DetectLivingFaceResponseBodyDataElementsResultsFrames> & frames) { DARABONBA_PTR_SET_VALUE(frames_, frames) };
    inline DetectLivingFaceResponseBodyDataElementsResults& setFrames(vector<Models::DetectLivingFaceResponseBodyDataElementsResultsFrames> && frames) { DARABONBA_PTR_SET_RVALUE(frames_, frames) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline DetectLivingFaceResponseBodyDataElementsResults& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // messageTips Field Functions 
    bool hasMessageTips() const { return this->messageTips_ != nullptr;};
    void deleteMessageTips() { this->messageTips_ = nullptr;};
    inline string messageTips() const { DARABONBA_PTR_GET_DEFAULT(messageTips_, "") };
    inline DetectLivingFaceResponseBodyDataElementsResults& setMessageTips(string messageTips) { DARABONBA_PTR_SET_VALUE(messageTips_, messageTips) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline float rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline DetectLivingFaceResponseBodyDataElementsResults& setRate(float rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // rect Field Functions 
    bool hasRect() const { return this->rect_ != nullptr;};
    void deleteRect() { this->rect_ = nullptr;};
    inline const Models::DetectLivingFaceResponseBodyDataElementsResultsRect & rect() const { DARABONBA_PTR_GET_CONST(rect_, Models::DetectLivingFaceResponseBodyDataElementsResultsRect) };
    inline Models::DetectLivingFaceResponseBodyDataElementsResultsRect rect() { DARABONBA_PTR_GET(rect_, Models::DetectLivingFaceResponseBodyDataElementsResultsRect) };
    inline DetectLivingFaceResponseBodyDataElementsResults& setRect(const Models::DetectLivingFaceResponseBodyDataElementsResultsRect & rect) { DARABONBA_PTR_SET_VALUE(rect_, rect) };
    inline DetectLivingFaceResponseBodyDataElementsResults& setRect(Models::DetectLivingFaceResponseBodyDataElementsResultsRect && rect) { DARABONBA_PTR_SET_RVALUE(rect_, rect) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline DetectLivingFaceResponseBodyDataElementsResults& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    std::shared_ptr<vector<Models::DetectLivingFaceResponseBodyDataElementsResultsFrames>> frames_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> messageTips_ = nullptr;
    std::shared_ptr<float> rate_ = nullptr;
    std::shared_ptr<Models::DetectLivingFaceResponseBodyDataElementsResultsRect> rect_ = nullptr;
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
