// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTEMPLATERESPONSEBODYTEMPLATEMUXCONFIGGIF_HPP_
#define ALIBABACLOUD_MODELS_ADDTEMPLATERESPONSEBODYTEMPLATEMUXCONFIGGIF_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class AddTemplateResponseBodyTemplateMuxConfigGif : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTemplateResponseBodyTemplateMuxConfigGif& obj) { 
      DARABONBA_PTR_TO_JSON(DitherMode, ditherMode_);
      DARABONBA_PTR_TO_JSON(FinalDelay, finalDelay_);
      DARABONBA_PTR_TO_JSON(IsCustomPalette, isCustomPalette_);
      DARABONBA_PTR_TO_JSON(Loop, loop_);
    };
    friend void from_json(const Darabonba::Json& j, AddTemplateResponseBodyTemplateMuxConfigGif& obj) { 
      DARABONBA_PTR_FROM_JSON(DitherMode, ditherMode_);
      DARABONBA_PTR_FROM_JSON(FinalDelay, finalDelay_);
      DARABONBA_PTR_FROM_JSON(IsCustomPalette, isCustomPalette_);
      DARABONBA_PTR_FROM_JSON(Loop, loop_);
    };
    AddTemplateResponseBodyTemplateMuxConfigGif() = default ;
    AddTemplateResponseBodyTemplateMuxConfigGif(const AddTemplateResponseBodyTemplateMuxConfigGif &) = default ;
    AddTemplateResponseBodyTemplateMuxConfigGif(AddTemplateResponseBodyTemplateMuxConfigGif &&) = default ;
    AddTemplateResponseBodyTemplateMuxConfigGif(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTemplateResponseBodyTemplateMuxConfigGif() = default ;
    AddTemplateResponseBodyTemplateMuxConfigGif& operator=(const AddTemplateResponseBodyTemplateMuxConfigGif &) = default ;
    AddTemplateResponseBodyTemplateMuxConfigGif& operator=(AddTemplateResponseBodyTemplateMuxConfigGif &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ditherMode_ == nullptr
        && return this->finalDelay_ == nullptr && return this->isCustomPalette_ == nullptr && return this->loop_ == nullptr; };
    // ditherMode Field Functions 
    bool hasDitherMode() const { return this->ditherMode_ != nullptr;};
    void deleteDitherMode() { this->ditherMode_ = nullptr;};
    inline string ditherMode() const { DARABONBA_PTR_GET_DEFAULT(ditherMode_, "") };
    inline AddTemplateResponseBodyTemplateMuxConfigGif& setDitherMode(string ditherMode) { DARABONBA_PTR_SET_VALUE(ditherMode_, ditherMode) };


    // finalDelay Field Functions 
    bool hasFinalDelay() const { return this->finalDelay_ != nullptr;};
    void deleteFinalDelay() { this->finalDelay_ = nullptr;};
    inline string finalDelay() const { DARABONBA_PTR_GET_DEFAULT(finalDelay_, "") };
    inline AddTemplateResponseBodyTemplateMuxConfigGif& setFinalDelay(string finalDelay) { DARABONBA_PTR_SET_VALUE(finalDelay_, finalDelay) };


    // isCustomPalette Field Functions 
    bool hasIsCustomPalette() const { return this->isCustomPalette_ != nullptr;};
    void deleteIsCustomPalette() { this->isCustomPalette_ = nullptr;};
    inline string isCustomPalette() const { DARABONBA_PTR_GET_DEFAULT(isCustomPalette_, "") };
    inline AddTemplateResponseBodyTemplateMuxConfigGif& setIsCustomPalette(string isCustomPalette) { DARABONBA_PTR_SET_VALUE(isCustomPalette_, isCustomPalette) };


    // loop Field Functions 
    bool hasLoop() const { return this->loop_ != nullptr;};
    void deleteLoop() { this->loop_ = nullptr;};
    inline string loop() const { DARABONBA_PTR_GET_DEFAULT(loop_, "") };
    inline AddTemplateResponseBodyTemplateMuxConfigGif& setLoop(string loop) { DARABONBA_PTR_SET_VALUE(loop_, loop) };


  protected:
    // The color dithering algorithm of the palette. Valid values: sierra and bayer.
    std::shared_ptr<string> ditherMode_ = nullptr;
    // The duration for which the final frame is paused. Unit: centiseconds.
    std::shared_ptr<string> finalDelay_ = nullptr;
    // Indicates whether the custom palette is used.
    std::shared_ptr<string> isCustomPalette_ = nullptr;
    // The loop count.
    std::shared_ptr<string> loop_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
