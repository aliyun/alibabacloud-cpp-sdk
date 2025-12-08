// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEEPFAKEFACERESPONSEBODYDATAELEMENTSRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DEEPFAKEFACERESPONSEBODYDATAELEMENTSRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeepfakeFaceResponseBodyDataElementsResultsRect.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DeepfakeFaceResponseBodyDataElementsResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeepfakeFaceResponseBodyDataElementsResults& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(MessageTips, messageTips_);
      DARABONBA_PTR_TO_JSON(Rect, rect_);
    };
    friend void from_json(const Darabonba::Json& j, DeepfakeFaceResponseBodyDataElementsResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(MessageTips, messageTips_);
      DARABONBA_PTR_FROM_JSON(Rect, rect_);
    };
    DeepfakeFaceResponseBodyDataElementsResults() = default ;
    DeepfakeFaceResponseBodyDataElementsResults(const DeepfakeFaceResponseBodyDataElementsResults &) = default ;
    DeepfakeFaceResponseBodyDataElementsResults(DeepfakeFaceResponseBodyDataElementsResults &&) = default ;
    DeepfakeFaceResponseBodyDataElementsResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeepfakeFaceResponseBodyDataElementsResults() = default ;
    DeepfakeFaceResponseBodyDataElementsResults& operator=(const DeepfakeFaceResponseBodyDataElementsResults &) = default ;
    DeepfakeFaceResponseBodyDataElementsResults& operator=(DeepfakeFaceResponseBodyDataElementsResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confidence_ == nullptr
        && return this->label_ == nullptr && return this->messageTips_ == nullptr && return this->rect_ == nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline DeepfakeFaceResponseBodyDataElementsResults& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline DeepfakeFaceResponseBodyDataElementsResults& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // messageTips Field Functions 
    bool hasMessageTips() const { return this->messageTips_ != nullptr;};
    void deleteMessageTips() { this->messageTips_ = nullptr;};
    inline string messageTips() const { DARABONBA_PTR_GET_DEFAULT(messageTips_, "") };
    inline DeepfakeFaceResponseBodyDataElementsResults& setMessageTips(string messageTips) { DARABONBA_PTR_SET_VALUE(messageTips_, messageTips) };


    // rect Field Functions 
    bool hasRect() const { return this->rect_ != nullptr;};
    void deleteRect() { this->rect_ = nullptr;};
    inline const Models::DeepfakeFaceResponseBodyDataElementsResultsRect & rect() const { DARABONBA_PTR_GET_CONST(rect_, Models::DeepfakeFaceResponseBodyDataElementsResultsRect) };
    inline Models::DeepfakeFaceResponseBodyDataElementsResultsRect rect() { DARABONBA_PTR_GET(rect_, Models::DeepfakeFaceResponseBodyDataElementsResultsRect) };
    inline DeepfakeFaceResponseBodyDataElementsResults& setRect(const Models::DeepfakeFaceResponseBodyDataElementsResultsRect & rect) { DARABONBA_PTR_SET_VALUE(rect_, rect) };
    inline DeepfakeFaceResponseBodyDataElementsResults& setRect(Models::DeepfakeFaceResponseBodyDataElementsResultsRect && rect) { DARABONBA_PTR_SET_RVALUE(rect_, rect) };


  protected:
    std::shared_ptr<float> confidence_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> messageTips_ = nullptr;
    std::shared_ptr<Models::DeepfakeFaceResponseBodyDataElementsResultsRect> rect_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
