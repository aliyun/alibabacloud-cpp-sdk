// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTAIGCDATAAIGC_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTAIGCDATAAIGC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyDataExtAigcDataAIGC : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyDataExtAigcDataAIGC& obj) { 
      DARABONBA_PTR_TO_JSON(ContentProducer, contentProducer_);
      DARABONBA_PTR_TO_JSON(ContentPropagator, contentPropagator_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(ProduceID, produceID_);
      DARABONBA_PTR_TO_JSON(PropagateID, propagateID_);
      DARABONBA_PTR_TO_JSON(ReservedCode1, reservedCode1_);
      DARABONBA_PTR_TO_JSON(ReservedCode2, reservedCode2_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyDataExtAigcDataAIGC& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentProducer, contentProducer_);
      DARABONBA_PTR_FROM_JSON(ContentPropagator, contentPropagator_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(ProduceID, produceID_);
      DARABONBA_PTR_FROM_JSON(PropagateID, propagateID_);
      DARABONBA_PTR_FROM_JSON(ReservedCode1, reservedCode1_);
      DARABONBA_PTR_FROM_JSON(ReservedCode2, reservedCode2_);
    };
    ImageModerationResponseBodyDataExtAigcDataAIGC() = default ;
    ImageModerationResponseBodyDataExtAigcDataAIGC(const ImageModerationResponseBodyDataExtAigcDataAIGC &) = default ;
    ImageModerationResponseBodyDataExtAigcDataAIGC(ImageModerationResponseBodyDataExtAigcDataAIGC &&) = default ;
    ImageModerationResponseBodyDataExtAigcDataAIGC(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyDataExtAigcDataAIGC() = default ;
    ImageModerationResponseBodyDataExtAigcDataAIGC& operator=(const ImageModerationResponseBodyDataExtAigcDataAIGC &) = default ;
    ImageModerationResponseBodyDataExtAigcDataAIGC& operator=(ImageModerationResponseBodyDataExtAigcDataAIGC &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentProducer_ == nullptr
        && return this->contentPropagator_ == nullptr && return this->label_ == nullptr && return this->produceID_ == nullptr && return this->propagateID_ == nullptr && return this->reservedCode1_ == nullptr
        && return this->reservedCode2_ == nullptr; };
    // contentProducer Field Functions 
    bool hasContentProducer() const { return this->contentProducer_ != nullptr;};
    void deleteContentProducer() { this->contentProducer_ = nullptr;};
    inline string contentProducer() const { DARABONBA_PTR_GET_DEFAULT(contentProducer_, "") };
    inline ImageModerationResponseBodyDataExtAigcDataAIGC& setContentProducer(string contentProducer) { DARABONBA_PTR_SET_VALUE(contentProducer_, contentProducer) };


    // contentPropagator Field Functions 
    bool hasContentPropagator() const { return this->contentPropagator_ != nullptr;};
    void deleteContentPropagator() { this->contentPropagator_ = nullptr;};
    inline string contentPropagator() const { DARABONBA_PTR_GET_DEFAULT(contentPropagator_, "") };
    inline ImageModerationResponseBodyDataExtAigcDataAIGC& setContentPropagator(string contentPropagator) { DARABONBA_PTR_SET_VALUE(contentPropagator_, contentPropagator) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ImageModerationResponseBodyDataExtAigcDataAIGC& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // produceID Field Functions 
    bool hasProduceID() const { return this->produceID_ != nullptr;};
    void deleteProduceID() { this->produceID_ = nullptr;};
    inline string produceID() const { DARABONBA_PTR_GET_DEFAULT(produceID_, "") };
    inline ImageModerationResponseBodyDataExtAigcDataAIGC& setProduceID(string produceID) { DARABONBA_PTR_SET_VALUE(produceID_, produceID) };


    // propagateID Field Functions 
    bool hasPropagateID() const { return this->propagateID_ != nullptr;};
    void deletePropagateID() { this->propagateID_ = nullptr;};
    inline string propagateID() const { DARABONBA_PTR_GET_DEFAULT(propagateID_, "") };
    inline ImageModerationResponseBodyDataExtAigcDataAIGC& setPropagateID(string propagateID) { DARABONBA_PTR_SET_VALUE(propagateID_, propagateID) };


    // reservedCode1 Field Functions 
    bool hasReservedCode1() const { return this->reservedCode1_ != nullptr;};
    void deleteReservedCode1() { this->reservedCode1_ = nullptr;};
    inline string reservedCode1() const { DARABONBA_PTR_GET_DEFAULT(reservedCode1_, "") };
    inline ImageModerationResponseBodyDataExtAigcDataAIGC& setReservedCode1(string reservedCode1) { DARABONBA_PTR_SET_VALUE(reservedCode1_, reservedCode1) };


    // reservedCode2 Field Functions 
    bool hasReservedCode2() const { return this->reservedCode2_ != nullptr;};
    void deleteReservedCode2() { this->reservedCode2_ = nullptr;};
    inline string reservedCode2() const { DARABONBA_PTR_GET_DEFAULT(reservedCode2_, "") };
    inline ImageModerationResponseBodyDataExtAigcDataAIGC& setReservedCode2(string reservedCode2) { DARABONBA_PTR_SET_VALUE(reservedCode2_, reservedCode2) };


  protected:
    std::shared_ptr<string> contentProducer_ = nullptr;
    std::shared_ptr<string> contentPropagator_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> produceID_ = nullptr;
    std::shared_ptr<string> propagateID_ = nullptr;
    std::shared_ptr<string> reservedCode1_ = nullptr;
    std::shared_ptr<string> reservedCode2_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
